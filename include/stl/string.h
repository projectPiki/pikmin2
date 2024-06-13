#ifndef _STRING_H
#define _STRING_H

#include "types.h"
#include "mem.h"
#include "extras.h"
#ifdef __cplusplus
extern "C" {
#endif

char* strcpy(char*, const char*);
char* strncpy(char*, const char*, size_t);

char* strcat(char*, const char*);

int strcmp(const char*, const char*);
int strncmp(const char*, const char*, size_t);
char* strchr(const char*, int);
char* strrchr(const char* str, int chr);
size_t strlen(const char*);

#define IS_SAME_STRING(a, b)        (strcmp(a, b) == 0)
#define IS_SAME_STRING_N(a, b, n)   (strncmp(a, b, n) == 0)
#define IS_SAME_STRING_PREFIX(a, b) (IS_SAME_STRING_N(a, b, sizeof(b) - 1))

#ifdef __cplusplus
}
#endif
#endif
