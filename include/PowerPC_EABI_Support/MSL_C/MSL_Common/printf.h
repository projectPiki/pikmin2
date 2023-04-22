#ifndef _MSL_PRINTF_H
#define _MSL_PRINTF_H

#include "stdarg.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/file_struc.h"
#include "PowerPC_EABI_Support/MSL_C/MSL_Common/ansi_files.h"

void printf(const char*, ...);
// printf_s
int fprintf(FILE*, const char* format, ...);
// fprintf_s
int vprintf(const char*, va_list);
// vprintf_s
// vfprintf
// vfprintf_s
int vsnprintf(char*, size_t, const char*, va_list);
// vsnprintf_s
int vsprintf(char*, const char*, va_list);
// vsprintf_s
int snprintf(char*, size_t, const char*, ...);
// snprintf_s
int sprintf(char*, const char*, ...);
// sprintf_s

#endif
