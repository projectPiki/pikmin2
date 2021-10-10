#!/usr/bin/env python3

# ====================================
# Ptr checker v0.0.9 (by RevoSucks)
# ====================================
# WARNING, seriously, get a puke bucket. This is just a file i am writing for my own sole use. 
# If you want to use it, I have some advice for you: D.O.N.T. 
# It stands for dooooooonnnnnn't use it. Ever.

# ------------------
# Imports
# ------------------
import os, fnmatch, math

# ------------------
# Defines
# ------------------

# Path to baserom.dol
baserom_path = "baserom.dol"
map_path = "build/pikmin2.usa/pikmin2.map"

# ------------------
# Methods
# ------------------

# Return a list of searchable '.s' files in a given folder recursively.
def findExt(folder):
    matches = []
    for root, dirnames, filenames in os.walk(folder):
        for filename in filenames:
            if filename.endswith('.s'):
                matches.append(os.path.join(root, filename))
    #print(matches)
    return matches

# Name is passed in as the address initially. If we cannot find it, return the string of the address.
def getMatchingTextSymbolFromAddress(name):
    # Strip the 0x from the start.
    #print("DEBUG: ", str(hex(name))[2:].zfill(8))
    result = str(hex(name))[2:].zfill(8)
    matches = [result, '(entry of ']
    # First open the .map file.
    map = open(map_path, 'r')
    Lines = map.readlines()
    # Parse over the map until a match is found.
    for line in Lines:
        # Does the line have the 2 expected strings?
        if all(x in line for x in matches):
            # We found the line.
            #print("Match found! Line: ", line)
            # Split the name out and return it.
            return line.split(' ')[9]
    # We're done, close it.
    map.close()
    return hex(name)

# Build a list of the pointers and scan each word.
def dumpVirtualTable(line):
    # Init the table.
    table = ""
    # Open baserom.dol for processing.
    f = open(baserom_path, 'rb')
    address = line.split(' ')[2][:-1]
    size = line.split(' ')[3]
    #print("ADDR: ", address)
    #print("SIZE: ", size)
    f.seek(int(address, 16))
    entries = int(size, 16) / 4
    while entries != 0:
        entry = int.from_bytes(f.read(4), byteorder='big')
        if entry == 0:
            str_to_print = "0"
        elif (entry & 0xFF000000) == 0x80000000:
            str_to_print = str(getMatchingTextSymbolFromAddress(entry))
        else:
            str_to_print = str(hex(entry))
        table = table + "  .4byte " + str_to_print + "\n"
        entries = entries - 1
    return table

def isBaseromEntrySus(line):
    with open(baserom_path, 'rb') as f: # context management to close file for us
        address = line.split(' ')[2][:-1]
        size = line.split(' ')[3]
        lower_four = 4 * math.floor(int(size, 16)/4) # Floor the size to the lower multiple of 4 if needed.
        entries = int(size, 16) / 4
        f.seek(int(address, 16))
        while entries > 0:
            entry = int.from_bytes(f.read(4), byteorder='big', signed=False)
            if (entry & 0xFF000000) == 0x80000000 and entry != 0x80000000:
                print("Suspicious Ptr: ", str(hex(entry)))
                return True
            entries -= 1
        return False

# Same as isBaseromEntrySus but check for rodata str. Man this file is a mess.
def isBaseromEntrySus_ShouldDump(line):
    with open(baserom_path, 'rb') as f: # context management to close file for us
        address = line.split(' ')[2][:-1]
        size = line.split(' ')[3]
        lower_four = 4 * math.floor(int(size, 16)/4) # Floor the size to the lower multiple of 4 if needed.
        entries = int(size, 16) / 4
        f.seek(int(address, 16))
        while entries > 0:
            entry = int.from_bytes(f.read(4), byteorder='big', signed=False)
            if (entry & 0xFF000000) == 0x80000000 and entry != 0x80000000:
                text_sym = getMatchingTextSymbolFromAddress(entry)
                if text_sym != str(hex(entry)):
                    if text_sym[:2] == "$$":
                        return True
            entries -= 1
        return False

def isBaseromEntryPurePtrTable(line):
    table = ""
    with open(baserom_path, 'rb') as f: # context management to close file for us
        address = line.split(' ')[2][:-1]
        size = line.split(' ')[3]
        lower_four = 4 * math.floor(int(size, 16)/4) # Floor the size to the lower multiple of 4 if needed.
        entries = int(size, 16) / 4
        f.seek(int(address, 16))
        # If any values are neither 0 nor a
        while entries > 0:
            entry = int.from_bytes(f.read(4), byteorder='big', signed=False)
            if entry == 0:
                str_to_print = "0"
            elif (entry & 0xFF000000) == 0x80000000:
                str_to_print = getMatchingTextSymbolFromAddress(entry)
                print("DEBUG: ", str_to_print)
            elif entry == 0xFFFFFFFF:
                str_to_print = "-1"
            else:
                return line # Not a pure pure table. Keep the entry.
            if str_to_print[:2] == "0x":
                return line # Not a pure pure table. Keep the entry.
            table = table + "  .4byte " + str_to_print + "\n"
            entries = entries - 1
    return table

def dumpActorTable(line):
    table = ""
    with open(baserom_path, 'rb') as f: # context management to close file for us
        address = line.split(' ')[2][:-1]
        size = line.split(' ')[3]
        lower_four = 4 * math.floor(int(size, 16)/4) # Floor the size to the lower multiple of 4 if needed.
        entries = int(size, 16) / 4
        f.seek(int(address, 16))
        # If any values are neither 0 nor a
        while entries > 0:
            entry = int.from_bytes(f.read(4), byteorder='big', signed=False)
            if entry == 0:
                str_to_print = "0"
            elif (entry & 0xFF000000) == 0x80000000:
                str_to_print = getMatchingTextSymbolFromAddress(entry)
                print("DEBUG: ", str_to_print)
            elif entry == 0xFFFFFFFF:
                str_to_print = "-1"
            else:
                str_to_print = str(entry)
            table = table + "  .4byte " + str_to_print + "\n"
            entries = entries - 1
    return table

# -----------------------------------
# Config
# -----------------------------------
print_baserom_calls = True
# -----------------------------------

# ------------------
# Main code
# ------------------

asm_files = findExt("asm")
#asm_files = ['/c/sms/asm/NPC/NpcInitData.s']

print("Checking all files for possible ptrs...")

# Using readlines()
for i in asm_files:
    file1 = open(i, 'r')
    Lines = file1.readlines()
    file1.close()
    file1 = open(i, 'w')
    count = 0
    line_array = []         #array of current line and last two lines
    line_array.append("")
    line_array.append("")
    line_array.append("")
    file_sus = False
    for line in Lines:
        line_array[0] = line_array[1]
        line_array[1] = line_array[2]
        line_array[2] = line
        # Do something with the line here. Does the line belong to a baserom.dol call for a __vt__?
        if "__vt__" in line_array[1] and "baserom.dol" in line:
            file1.write(dumpVirtualTable(line))
        else:
            file1.write(line)
    if file_sus == True:
        print("Sus: ", i, "Count: ", count, "\n")
    file1.close()

print("Done")
#print(os.getcwd())
