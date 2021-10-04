#!/bin/bash
# param 1: file
# param 2: offset
# param 3: value
printf "$(printf '\\x%02X' $2)" | dd of="$1" bs=1 seek=222480 count=1 conv=notrunc &> /dev/null