#ifndef _SYSMATH_H
#define _SYSMATH_H

#include "JSystem/JMath.h"
#include "math.h"

template <typename T>
struct Vector3;

Vector3<f32> CRSplineTangent(f32 t, Vector3<f32>* controls);
f32 pikmin2_sinf(f32 x);
f32 pikmin2_cosf(f32 x);
f32 pikmin2_atan2f(f32 x, f32 y);
f32 pikmin2_sqrtf(f32 x);
f32 roundAng(f32 x);
f32 angDist(f32 x, f32 y);

f32 qdist2(f32, f32, f32, f32);

inline f32 log(f32& a, f64 b)
{
	f32 divisor  = log10(b);
	f32 dividend = log10(a);
	return dividend / divisor;
}

#endif
