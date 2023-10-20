#ifndef _DOLPHIN_RUNTIME_H
#define _DOLPHIN_RUNTIME_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

u32 __cvt_fp2unsigned(f64);
// TODO: The rest

void* __copy(char*, char*, size_t);

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
