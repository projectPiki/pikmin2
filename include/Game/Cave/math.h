#ifndef _GAME_CAVE_MATH_H
#define _GAME_CAVE_MATH_H

#include "types.h"
#include "Vector3.h"
#include "JSystem/JMath.h"
#include "Dolphin/rand.h"

#define TAU 6.2831855f

extern float lbl_8051A714 = -325.9493f;
extern float lbl_8051A718 = 325.9493f;

inline float pikmin2_sinf(float x)
{
    if (x < 0.0f) {
		return -JMath::sincosTable_.m_table[((int)(x * lbl_8051A714) & 0x7ffU)].first;
	}
	return JMath::sincosTable_.m_table[((int)(x * lbl_8051A718) & 0x7ffU)].first;
}

inline float pikmin2_cosf(float x)
{
	if (x < 0.0f) {
		x = -x;
	}
	return JMath::sincosTable_.m_table[((int)(x * lbl_8051A718) & 0x7ffU)].second;
}

#endif