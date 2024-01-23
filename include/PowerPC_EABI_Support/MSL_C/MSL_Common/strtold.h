#ifndef _MSL_STRTOLD_H
#define _MSL_STRTOLD_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

f128 __strtold(int max_width, int (*ReadProc)(void*, int, int), void* ReadProcArg, int* chars_scanned, int* overflow);
s32 strtol(const char* str, char** end, int base);

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
