#ifndef MSL_WCSTOUL_H
#define MSL_WCSTOUL_H

#include "types.h"

unsigned long __wcstoul(int, int, wint_t (*wReadProc)(void*, wint_t, int), void*, int*, int*, int*);
//__wcstoull
//wcstoul
//wcstoull
long wcstol(const wchar_t*, wchar_t**, int);
//wcstoll
//watoi
//watol

#endif
