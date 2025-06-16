#!/bin/sh
find -iname "*.h" -o -iname "*.c" -o -iname "*.cpp" | xargs clang-format -i
