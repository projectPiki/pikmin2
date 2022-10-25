#ifndef _DOLPHIN_RAND_H
#define _DOLPHIN_RAND_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

#define RAND_MAX (32768.0f)

void srand(u32);
int rand();

inline f32 randFloat() { return (float)rand() / RAND_MAX; }
inline f32 randWeightFloat(f32 range) { return (range * (f32)rand()) / RAND_MAX; }

#ifdef __cplusplus
};
#endif // ifdef __cplusplus

#endif
