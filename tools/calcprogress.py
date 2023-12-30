#!/usr/bin/env python3

################################################################################
#                                 Description                                  #
################################################################################
# calcprogress: Used to calculate the progress of the Pikmin 2 decomp.         #
# stores to CSV so that it can be used for a webpage display.                  #
#                                                                              #
# Usage: No arguments needed                                                   #
################################################################################


###############################################
#                                             #
#                  Imports                    #
#                                             #
###############################################

import os
import sys
import struct
import re
import math
import csv
import json
import argparse
from datetime import datetime

###############################################
#                                             #
#                 Constants                   #
#                                             #
###############################################

MEM1_HI = 0x81200000
MEM1_LO = 0x80004000

MW_WII_SYMBOL_REGEX = r"^\s*"\
    r"(?P<SectOfs>\w{8})\s+"\
    r"(?P<Size>\w{6})\s+"\
    r"(?P<VirtOfs>\w{8})\s+"\
    r"(?P<FileOfs>\w{8})\s+"\
    r"(\w{1,2})\s+"\
    r"(?P<Symbol>[0-9A-Za-z_<>$@.*]*)\s*"\
    r"(?P<Object>[\S ]*)"

MW_GC_SYMBOL_REGEX = r"^\s*"\
    r"(?P<SectOfs>\w{8})\s+"\
    r"(?P<Size>\w{6})\s+"\
    r"(?P<VirtOfs>\w{8})\s+"\
    r"(\w{1,2})\s+"\
    r"(?P<Symbol>[0-9A-Za-z_<>$@.*]*)\s*"\
    r"(?P<Object>[\S ]*)"

REGEX_TO_USE = MW_GC_SYMBOL_REGEX

TEXT_SECTIONS = ["init", "text"]
DATA_SECTIONS = [
    "rodata", "data", "bss", "sdata", "sbss", "sdata2", "sbss2",
    "ctors", "_ctors", "dtors", "ctors$99", "_ctors$99", "ctors$00", "dtors$99",
    "extab_", "extabindex_", "_extab", "_exidx", "extab", "extabindex"
]

# DOL info
TEXT_SECTION_COUNT = 7
DATA_SECTION_COUNT = 11

SECTION_TEXT = 0
SECTION_DATA = 1

# Progress flavor
CODE_FRAC = 10000        # total code "item" amount
DATA_FRAC = 201          # total data "item" amount
CODE_ITEM = "Pokos"      # code flavor item
DATA_ITEM = "treasures"  # data flavor item

CSV_FILE_NAME = 'progress.csv'
CSV_FILE_PATH = f'./tools/{CSV_FILE_NAME}'

###############################################
#                                             #
#                Entrypoint                   #
#                                             #
###############################################


def update_csv(
    code_count,
    decomp_code_size,
    code_completion_percentage,
    data_count,
    decomp_data_size,
    data_completion_percentage,
    sentence,
):
    does_file_exist = False
    are_there_changes = True

    try:
        with open(CSV_FILE_PATH, 'r') as file:
            reader = csv.reader(file)
            does_file_exist = True

            latest_row = list(reader)[-1]
            latest_code_size = int(latest_row[1])  # code_completion_in_bytes
            latest_data_size = int(latest_row[4])  # data_completion_in_bytes
            are_there_changes = not (
                decomp_code_size == latest_code_size and decomp_data_size == latest_data_size
            )

            print(f"Successfully read {CSV_FILE_PATH}!")
    except:
        print(f'Failed to read {CSV_FILE_PATH}!')

    if not are_there_changes:
        print("No changes detected. Exiting...")
        return

    col_one = f"code_count_in_{CODE_ITEM.lower()}"
    col_two = "code_completion_in_bytes"
    col_three = "code_completion_in_percentage"
    col_four = f"data_count_in_{DATA_ITEM.lower()}"
    col_five = "data_completion_in_bytes"
    col_six = "data_completion_in_percentage"
    col_seven = "sentence"
    col_eight = "created_at"
    headers = [
        col_one,
        col_two,
        col_three,
        col_four,
        col_five,
        col_six,
        col_seven,
        col_eight,
    ]

    try:
        with open(CSV_FILE_PATH, 'a', newline='') as file:
            writer = csv.DictWriter(file, fieldnames=headers)
            # only add headers if this is the first iteration of the file
            if not does_file_exist:
                writer.writeheader()
            writer.writerow({
                col_one: code_count,
                col_two: decomp_code_size,
                col_three: code_completion_percentage,
                col_four: data_count,
                col_five: decomp_data_size,
                col_six: data_completion_percentage,
                col_seven: sentence,
                col_eight: datetime.now(),
            })
        print(f"Successfully wrote to {CSV_FILE_PATH}!")
    except:
        print(f"Failed to write to {CSV_FILE_PATH}!")

def countDigits(n):
    if n > 0:
        digits = int(math.log10(n))+1
    elif n == 0:
        digits = 1
    else:
        digits = int(math.log10(-n))+2 # +1 if you don't count the '-'
    return digits

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Calculate progress.")
    parser.add_argument("dol", help="Path to DOL")
    parser.add_argument("map", help="Path to map")
    parser.add_argument("-o", "--output", help="JSON output file")
    args = parser.parse_args()

    # Sum up DOL section sizes
    dol_handle = open(sys.argv[1], "rb")

    # Seek to virtual addresses
    dol_handle.seek(0x48)

    # Read virtual addresses
    text_starts = list()
    for i in range(TEXT_SECTION_COUNT):
        text_starts.append(int.from_bytes(dol_handle.read(4), byteorder='big'))
    data_starts = list()
    for i in range(DATA_SECTION_COUNT):
        data_starts.append(int.from_bytes(dol_handle.read(4), byteorder='big'))

    # Read lengths
    text_sizes = list()
    for i in range(TEXT_SECTION_COUNT):
        text_sizes.append(int.from_bytes(dol_handle.read(4), byteorder='big'))
    data_sizes = list()
    for i in range(DATA_SECTION_COUNT):
        data_sizes.append(int.from_bytes(dol_handle.read(4), byteorder='big'))

    # BSS address + length
    bss_start = int.from_bytes(dol_handle.read(4), byteorder='big')
    bss_size = int.from_bytes(dol_handle.read(4), byteorder='big')
    bss_end = bss_start + bss_size

    dol_code_size = 0
    dol_data_size = 0
    for i in range(DATA_SECTION_COUNT):
        # Ignore sections inside BSS
        if (data_starts[i] >= bss_start) and (data_starts[i] + data_sizes[i] <= bss_end):
            continue
        dol_data_size += data_sizes[i]

    dol_data_size += bss_size

    for i in text_sizes:
        dol_code_size += i

    # Open map file
    mapfile = open(sys.argv[2], "r")
    symbols = mapfile.readlines()

    decomp_code_size = 0
    decomp_data_size = 0
    section_type = None

    # Find first section
    first_section = 0
    while (symbols[first_section].startswith(".") == False and "section layout" not in symbols[first_section]):
        first_section += 1
    assert(first_section < len(symbols)), "Map file contains no sections!!!"

    cur_object = None
    cur_size = 0
    j = 0
    for i in range(first_section, len(symbols)):
        # New section
        if (symbols[i].startswith(".") == True or "section layout" in symbols[i]):
            # Grab section name (i.e. ".init section layout" -> "init")
            sectionName = re.search(r"\.*(?P<Name>\w+)\s", symbols[i]).group("Name")
            # Determine type of section
            section_type = SECTION_DATA if (sectionName in DATA_SECTIONS) else SECTION_TEXT
        # Parse symbols until we hit the next section declaration
        else:
            if "UNUSED" in symbols[i]:
                continue
            if "entry of" in symbols[i]:
                if j == i - 1:
                    if section_type == SECTION_TEXT:
                        decomp_code_size -= cur_size
                    else:
                        decomp_data_size -= cur_size
                    cur_size = 0
                    #print(f"Line* {j}: {symbols[j]}")
                #print(f"Line {i}: {symbols[i]}")
                continue
            assert(section_type != None), f"Symbol found outside of a section!!!\n{symbols[i]}"
            match_obj = re.search(REGEX_TO_USE, symbols[i])
            # Should be a symbol in ASM (so we discard it)
            if (match_obj == None):
                #print(f"Line {i}: {symbols[i]}")
                continue
            #print(match_obj.group("Object"))
            # Has the object file changed?
            last_object = cur_object
            cur_object = match_obj.group("Object").strip()
            if last_object != cur_object or cur_object.endswith(" (asm)"):
                continue
            # Is the symbol a file-wide section?
            symb = match_obj.group("Symbol")
            if (symb.startswith("*fill*")) or (symb.startswith(".") and symb[1:] in TEXT_SECTIONS or symb[1:] in DATA_SECTIONS):
                continue
            # Subtract size of symbols ending in ".o", as they're assembly.
            if match_obj.group("Object").endswith(".o") == True:
                if j == i - 1:
                    if section_type == SECTION_TEXT:
                        decomp_code_size -= cur_size
                    else:
                        decomp_data_size -= cur_size
                    cur_size = 0
                    #print(f"Line* {j}: {symbols[j]}")
                #print(f"Line {i}: {symbols[i]}")
                continue
            # For sections that don't start with "."
            if (symb in DATA_SECTIONS):
                continue
            # If not, we accumulate the file size
            cur_size = int(match_obj.group("Size"), 16)
            j = i
            if (section_type == SECTION_TEXT):
                decomp_code_size += cur_size
            else:
                decomp_data_size += cur_size

    # Calculate percentages
    codeCompletionPcnt = (decomp_code_size / dol_code_size)  # code completion percent
    dataCompletionPcnt = (decomp_data_size / dol_data_size)  # data completion percent
    bytesPerCodeItem = dol_code_size / CODE_FRAC  # bytes per code item
    bytesPerDataItem = dol_data_size / DATA_FRAC  # bytes per data item

    codeCount = math.floor(decomp_code_size / bytesPerCodeItem)
    dataCount = math.floor(decomp_data_size / bytesPerDataItem)
    
    # Math for aligning percentage prints
    codeDigitsD = (countDigits(decomp_code_size))
    dataDigitsD = (countDigits(decomp_data_size))
    codeDigits = (countDigits(dol_code_size))
    dataDigits = (countDigits(dol_data_size))
    maxDigitsD = (max(codeDigitsD, dataDigitsD))
    maxDigits = (max(codeDigits, dataDigits))
    codeStrA = "\tCode sections: "
    codeStrB = f"{decomp_code_size} / "
    codeStrC = f"{dol_code_size} bytes in src ({codeCompletionPcnt:%})"
    dataStrA = "\tData sections: "
    dataStrB = f"{decomp_data_size} / "
    dataStrC = f"{dol_data_size} bytes in src ({dataCompletionPcnt:%})"
    
    # Print progress
    print("Progress:")
    print(f"{codeStrA + ' ' * (maxDigitsD-codeDigitsD) + codeStrB + ' ' * (maxDigits-codeDigits) + codeStrC}")
    # print(f"\tCode sections: {decomp_code_size} / {dol_code_size} bytes in src ({codeCompletionPcnt:%})")
    print(f"{dataStrA + ' ' * (maxDigitsD-dataDigitsD) + dataStrB + ' ' * (maxDigits-dataDigits) + dataStrC}")
    # print(f"\tData sections: {decomp_data_size} / {dol_data_size} bytes in src ({dataCompletionPcnt:%})")

    sentence = f"\nYou have {codeCount} out of {CODE_FRAC} {CODE_ITEM} and {dataCount} out of {DATA_FRAC} {DATA_ITEM}."
    print(sentence)

    if args.output:
        data = {
            "dol": {
                "code": decomp_code_size,
                "code/total": dol_code_size,
                "data": decomp_data_size,
                "data/total": dol_data_size,
            }
        }
        with open(args.output, "w") as f:
            json.dump(data, f)

    update_csv(
        code_count=codeCount,
        decomp_code_size=decomp_code_size,
        code_completion_percentage=codeCompletionPcnt,
        data_count=dataCount,
        decomp_data_size=decomp_data_size,
        data_completion_percentage=dataCompletionPcnt,
        sentence=sentence
    )
