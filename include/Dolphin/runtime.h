#ifndef _DOLPHIN_RUNTIME_H
#define _DOLPHIN_RUNTIME_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

unsigned long __cvt_fp2unsigned(double);
// TODO: The rest

void* __copy(char*, char*, size_t);

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
