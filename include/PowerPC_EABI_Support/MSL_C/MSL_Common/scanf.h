#ifndef MSL_SCANF_H
#define MSL_SCANF_H

#include "stdarg.h"

// fscanf
// fscanf_s
// vscanf
// scanf
// scanf_s
// vfscanf
// vfscanf_s
int vsscanf(const char*, const char*, va_list);
// vsscanf_s
int sscanf(const char*, const char*, ...);
// sscanf_s

#endif
