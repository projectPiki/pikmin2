#!/usr/bin/env bash

# README
# genasm.sh: Hacky utility for rapidly generating comparable codegen. (previously called compare.sh)
# Disclaimer: I'm not good at shell scripting.
# License: MIT? I guess? I don't really care. :shrug:
# 
# WARNING: Make sure to edit the settings section for your own purposes!
#
#   1st argument is code unit relative to root of repository (e.g. src/JSystem/JSU/JSUList.cpp).
#   2nd argument is "function name" to search for.
# (really, it's just doing substring matches against the mangled name,
# so overloaded names have issues without specifically writing those out...).
#   By default, the script trims the function-relative offsets in the first output column,
# and after branch instructions (e.g. `                ; 0x00000020`).
# Passing a 3rd argument of any sort to the script disables this feature.
#
#
# Example vscode task to invoke on the current selection (when it's something that uniquely matches a mangled name):
# {
#			"label": "genasm",
#			"command": "./genasm.sh ${relativeFile} ${selectedText}",
#			"type": "shell",
#			"args": [],
#			"options": {
#				"cwd": "${workspaceFolder}",
#			},
#		},
# }
#
# The following command would open the compare view for the two files in vscode.
# I personally have this as a separate task in that, so I can bring it up if I don't already have it up.
# code -d ${Ours} ${Theirs}

# SETTINGS
# Note: None of the paths should have terminating slashes.
# The desired location of the output files (relative to compiler). "Ours" is the decomped one.
Theirs="../../../temp.old.s"
Ours="../../../temp.new.s"
# "src" folder where "your" compiled .o files are located, relative to ${CompilerDir} (or absolute).
BuildSrcDir="../../../build/pikmin2.usa/src"
# "asm" folder where "their" assembled .o files are located, relative to ${CompilerDir} (or absolute).
BuildASMDir="../../../build/pikmin2.usa/asm"
# Source code folder. Relative to ${CompilerDir} (or absolute).
SrcDir="../../../src"
# Includes (headers) folder. Relative to ${CompilerDir} (or absolute).
IncludeDir="../../../include"
# Compiler Version
CompilerVersion="2.6"
# Compiler folder, relative to current working directory.
CompilerDir="tools/mwcc_compiler/${CompilerVersion}"
CompilerExe="mwcceppc.exe"
# Compiler Options. Make sure to set the include folder!
Opts="-Cpp_exceptions off -inline auto -proc gekko -RTTI off -fp hard -fp_contract on -rostr -O4,p -use_lmw_stmw on -sdata 8 -sdata2 8 -nodefaults -msgstyle gcc -i ${IncludeDir}/ -c"

# Settings are over, now garbage shell script is my new friend!

# -o build/pikmin2.usa/src/sysCommonU/sysTemplates.o src/sysCommonU/sysTemplates.cpp
Temp=${1%.*}
CodeUnitPath=${Temp#*/}
Library=${CodeUnitPath%*/}

echo $Temp
echo $CodeUnitPath
echo $Library
# TODO: this and $Library might be useful for opts
CodeUnitExtension=${1##*.}

# TODO: Check for linux/windows
# Nevermind, not needed. Wine automatically handles it so long as I have my paths right.
# Wine="wine "
Wine=""

# CompilerVersion="2.7e"
# Setting path doesn't entirely cut it. Gotta cd instead.
cd $CompilerDir
PATH="$PATH:$(pwd)"
# echo $PATH

# Make folders if they don't exist.
mkdir -p ${BuildSrcDir}/${CodeUnitPath%/*}
mkdir -p ${BuildASMDir}/${CodeUnitPath%/*}

# Build the src object file
${Wine}${CompilerExe} ${Opts} -o ${BuildSrcDir}/${CodeUnitPath}.o ${SrcDir}/${CodeUnitPath}.${CodeUnitExtension}
# ${Wine}${CompilerExe} ${Opts} -inline auto -o ${BuildSrcDir}/${CodeUnitPath}.o ${SrcDir}/${CodeUnitPath}.${CodeUnitExtension}
# Disasm both object files.
${Wine}${CompilerExe} -S ${Opts} ${BuildSrcDir}/${CodeUnitPath}.o -o ${Ours}
${Wine}${CompilerExe} -S ${Opts} ${BuildASMDir}/${CodeUnitPath}.o -o ${Theirs}

# sed -i 's#\s*Hunk:\s+Kind=HUNK_LOCAL_CODE\s+Name="lbl_.*##g' $Theirs
# Purge all branch labels from the ASM disassembly.
sed -ri '/\s*Hunk:\s+Kind=HUNK_LOCAL_CODE\s+Name="lbl_.*/d' $Theirs
# Experimental: Actually, do the same with HUNK_GLOBAL_CODE, because of switch statements...
sed -ri '/\s*Hunk:\s+Kind=HUNK_GLOBAL_CODE\s+Name="lbl_.*/d' $Theirs
# sed -ri '/\n\s*Hunk:\s+Kind=HUNK_LOCAL_CODE\s+Name="lbl_.*/='
