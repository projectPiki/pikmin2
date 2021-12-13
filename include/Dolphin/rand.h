#ifndef _DOLPHIN_RAND_H
#define _DOLPHIN_RAND_H

#include "types.h"

void srand(u32);
s16 rand(void);

inline f32 randFloat() { return rand() / 32768.0f; }
#endif
