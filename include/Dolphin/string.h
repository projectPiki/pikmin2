#ifndef _DOLPHIN_STRING_H
#define _DOLPHIN_STRING_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

size_t strlen(char*);
int strncmp(char*, char*, size_t);
int strcmp(char*, char*);
int stricmp(char*, char*);

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
