#ifndef _DOLPHIN_RAND_H
#define _DOLPHIN_RAND_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

void srand(u32);
int rand();

inline f32 randFloat() { return (float)rand() / 32768.0f; }

inline f32 randWeightFloat(f32 x) { return (x * (f32)rand()) / 32768.0f; }

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
