#ifndef _DOLPHIN_MBSTRING_H
#define _DOLPHIN_MBSTRING_H

#include "types.h"
#include "Dolphin/ansi_files.h"

size_t wcstombs(char* s, const wchar_t* pwcs, size_t n);
int mbstowcs(wchar_t* pwc, const char* s, size_t n);
int wctomb(char* s, wchar_t wchar);
static int unicode_to_UTF8(char* s, wchar_t wchar);
int mbtowc(wchar_t* pwc, const char* s, size_t n);
static int is_utf8_complete(const char* s, size_t n);

#endif
