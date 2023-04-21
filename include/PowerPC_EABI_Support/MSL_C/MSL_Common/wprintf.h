#ifndef MSL_WPRINTF_H
#define MSL_WPRINTF_H

#include "types.h"
#include "stdarg.h"
#include "MSL_C/MSL_Common/file_struc.h"
#include "MSL_C/MSL_Common/ansi_files.h"

// wprintf
// wprintf_s
// fwprintf
// fwprintf_s
// vwprintf
// vwprintf_s
// vfwprintf
// vfwprintf_s
int swprintf(wchar_t*, size_t, const wchar_t*, ...);
// swprintf_s
// snwprintf_s
int vswprintf(wchar_t*, size_t, const wchar_t*, va_list);
// vswprintf_s
// vsnwprintf_s

#endif
