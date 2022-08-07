#ifndef _JSYSTEM_JAL_JALCALC_H
#define _JSYSTEM_JAL_JALCALC_H

#include "Dolphin/vec.h"
#include "JSystem/JMath.h"
#include "types.h"

namespace JALCalc {
enum CurveSign {
	CS_0 = 0,
	CS_1 = 1,
};

float linearTransform(float, float, float, float, float, bool);
float getParamByExp(float, float, float, float, float, float, CurveSign);
float getRandom(float, float, float);
float getRandom_0_1();
// {
// 	static JMath::TRandom_fast_ oRandom(0);
// 	u32 next = (oRandom.next() >> 9) | 0x3F800000;
// 	return *(float*)(void*)&next - 1.0f;
// }

// Unused/inlined:
float getParamByExp_0_1(float, float, float, float, CurveSign);
float getRandom_Sign();
float pow2(float);
int getRint(float);
float getDist(Vec*, Vec*);
float getDistPow(Vec*, Vec*);
} // namespace JALCalc

#endif
