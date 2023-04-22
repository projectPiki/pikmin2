#ifndef _MSL_STRTOLD_H
#define _MSL_STRTOLD_H

long double __strtold(int max_width, int (*ReadProc)(void*, int, int), void* ReadProcArg, int* chars_scanned, int* overflow);

#endif
