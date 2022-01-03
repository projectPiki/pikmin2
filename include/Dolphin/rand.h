#ifndef _DOLPHIN_RAND_H
#define _DOLPHIN_RAND_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

void srand(u32);
s16 rand();

inline f32 randFloat() { return rand() / 32768.0f; }

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
