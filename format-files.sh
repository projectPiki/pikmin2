#!/bin/sh
find -iname "*.h" -o -iname "*.c" -o -iname "*.cp" -o -iname "*.cpp" | xargs clang-format -i
