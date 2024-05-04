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
# Passing a 3rd argument that isn't 0 to the script disables this feature.
#
# There is an optional non-positional flag "-k" (or "--no-strip"), which simply generates the files
# and only strips branch labels from the ASM disassembly. This can be useful for confirming that data sections
# are being generated correctly.
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

ShouldStripFiles=1

POSITIONAL=()
while (( $# > 0 )); do
	case "${1}" in
		-k|--no-strip)
		echo flag: "${1}"
		shift # shift once since flags have no values
		ShouldStripFiles=0
		;;
		-s|--switch)
		numOfArgs=1 # number of switch arguments
		if (( $# < numOfArgs + 1 )); then
			shift $#
		else
			echo "switch: ${1} with value: ${2}"
			shift $((numOfArgs + 1)) # shift 'numOfArgs + 1' to bypass switch and its value
		fi
		;;
		*) # unknown flag/switch
		POSITIONAL+=("${1}")
		shift
		;;
	esac
done

set -- "${POSITIONAL[@]}" # restore positional params


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
LibDir="../../../build/pikmin2.usa/lib"
CompilerExe="mwcceppc.exe"
# Compiler Options. Make sure to set the include folder!
Opts="-Cpp_exceptions off -inline auto -enum int -proc gekko -RTTI off -fp hard -fp_contract on -rostr -O4,p -use_lmw_stmw on -sdata 8 -sdata2 8 -nodefaults -msgstyle gcc -l ${LibDir} -i ${IncludeDir}/ -c"

# Settings are over, now garbage shell script is my new friend!

# -o build/pikmin2.usa/src/sysCommonU/sysTemplates.o src/sysCommonU/sysTemplates.cpp
Temp=${1%.*}
CodeUnitPath=${Temp#*/}
Library=${CodeUnitPath%*/}
CodeUnit=${CodeUnitPath##*/}

HasLocalFuncs=1

# Compiler Version
CompilerVersion="2.6"
if [[ "${Library}" == *"Dolphin"* ]]; then
	echo "${Library} contains: Dolphin"
	# if [[ "${CodeUnit}" == *"dvd"* ] -or [ "${CodeUnit}" == *"GBA"* ]]; then
	# 	echo "${CodeUnit} contains: dvd or GBA"
	# 	CompilerVersion="1.2.5" # For GBA, DVD
	# else
	if [[ "${CodeUnit}" == *"dvd"* ]]; then
		echo "${CodeUnit} contains: dvd"
		CompilerVersion="1.2.5"
		# Opts="-strict off -pragma \"defer_codegen on\" -pragma \"gcc_extensions on\" ${Opts}"
		# Opts="-strict off -pragma gcc_extensions ${Opts}"
		# Opts="-gcc_extensions ${Opts}"
		# Opts="-strict off -pragma defer_codegen -pragma gcc_extensions ${Opts}"
		HasLocalFuncs=1
	elif [[ "${CodeUnit}" == *"GBA"* ]]; then
		echo "${CodeUnit} contains: GBA"
		CompilerVersion="1.2.5"
	else
		CompilerVersion="1.3.2" # For TRK
	fi
fi

# Compiler folder, relative to current working directory.
CompilerDir="tools/mwcc_compiler/${CompilerVersion}"

# echo $Temp
# echo $CodeUnitPath
# echo $Library
# TODO: this and $Library might be useful for opts
CodeUnitExtension=${1##*.}
Func=$2
# 0 = genasm
# 1 = genasm w/o cutting addresses
# 2 = genrodata
if (( $# < 3 )); then
	ShouldCutAddresses=1
	Mode=0
elif (( $3 == 0 )); then
	Mode=$3
	ShouldCutAddresses=1
else
	Mode=$3
	ShouldCutAddresses=0
fi
# if (( $# < 3 )); then
# 	ShouldCutAddresses=1
# else
# 	ShouldCutAddresses=0
# fi;

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

if [[ "${Library}" == *"Dolphin"* ]]; then
	# echo "${Wine}${CompilerExe} -S ${Opts} ${BuildSrcDir}/${CodeUnitPath}.o"
	${Wine}${CompilerExe} -S ${Opts} ${BuildSrcDir}/${CodeUnitPath}.o || exit 1
	mv ${CodeUnit%*.}.s ${Ours}
	${Wine}${CompilerExe} -S ${Opts} ${BuildASMDir}/${CodeUnitPath}.o
	mv ${CodeUnit%*.}.s ${Theirs}
else
	${Wine}${CompilerExe} -S ${Opts} ${BuildSrcDir}/${CodeUnitPath}.o -o ${Ours} || exit 1
	${Wine}${CompilerExe} -S ${Opts} ${BuildASMDir}/${CodeUnitPath}.o -o ${Theirs}
fi

# sed -i 's#\s*Hunk:\s+Kind=HUNK_LOCAL_CODE\s+Name="lbl_.*##g' $Theirs
# Purge all branch labels from the ASM disassembly.
sed -ri '/\s*Hunk:\s+Kind=HUNK_LOCAL_CODE\s+Name="lbl_.*/d' $Theirs
# Experimental: Actually, do the same with HUNK_GLOBAL_CODE, because of switch statements...
sed -ri '/\s*Hunk:\s+Kind=HUNK_GLOBAL_CODE\s+Name="lbl_.*/d' $Theirs
# sed -ri '/\n\s*Hunk:\s+Kind=HUNK_LOCAL_CODE\s+Name="lbl_.*/='

function stripFile () {
	File=$1
	echo "Stripping $File"
	# Remove Blank lines.
	sed -i '/^[[:space:]]*$/d' ${File}
	# Delete everything before the target.
	# TODO: capture the name and prepend to file? Can you preserve back references like that?
	if (( $Mode == 2 )); then
		# set -x
		sed -i '0,/==> .rodata[[:space:]]*$/d' ${File}
		# set +x
		# echo "Help?"
		# wc ${File}
	else
		if (( $HasLocalFuncs == 0 )); then
			sed -ri "0,/.*+Kind=HUNK_GLOBAL_CODE\\s+Name=\".*${Func}.*/d" ${File}
		else
			sed -ri "0,/.*+Kind=HUNK_((GLOBAL)|(LOCAL))_CODE\\s+Name=\".*${Func}.*/d" ${File}
		fi
	fi
	# Delete all lines after the target function/section.
	# This will either be at the start of next hunk...:
	if (( $HasLocalFuncs == 0 )); then
		sed -ri '/\s*Hunk:\s+Kind=HUNK_GLOBAL_CODE\s+Name=\".*/,$d' ${File}
	else
		sed -ri '/\s*Hunk:\s+Kind=HUNK_((GLOBAL)|(LOCAL))_CODE\s+Name=\".*/,$d' ${File}
	fi
	# ...or start of next section if it's the last function in the file:
	sed -ri '/==>.*/,$d' ${File}

	if (($ShouldCutAddresses > 0)); then
		# Delete branch offsets. They're signal noise when looking for differences.
		sed -ri 's/\s+;\s*0x.*$//g' ${File}
		# cut doesn't buffer input, so just simulating an "in-place" by redirecting output to same file as input results in a blank file.
		# TODO: Use mktemp
		mv $File ${File}.tmp
		# Cut addresses from start of lines.
		cut -c11- ${File}.tmp > ${File}
		rm ${File}.tmp
	fi
}

if (( $ShouldStripFiles == 1 )); then
	stripFile ${Ours}
	stripFile ${Theirs}
fi