#ifndef _MSL_STRTOUL_H
#define _MSL_STRTOUL_H

#include "types.h"

u32 __strtoul(int base, int max_width, int (*ReadProc)(void*, int, int), void* ReadProcArg, int* chars_scanned, int* negative,
              int* overflow);
u64 __strtoull(int base, int max_width, int (*ReadProc)(void*, int, int), void* ReadProcArg, int* chars_scanned, int* negative,
               int* overflow);
int atoi(const char* str);

#endif
