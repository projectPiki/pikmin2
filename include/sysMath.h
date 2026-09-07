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

inline f32 absVal(f32 val)
{
	return (val > 0.0f) ? val : -val;
}

inline int absVal(int val)
{
	return (val > 0) ? val : -val;
}

// move toward the target by at most `step`.
inline f32 approach(f32 current, f32 target, f32 step)
{
	f32 diff = absVal(current - target);

	return (diff < step) ? target : (current < target) ? current + step : current - step;
}

// move toward the target by at most `step`.
inline int approach(int current, int target, const int step)
{
	return (absVal(current - target) < step) ? target : (current < target ? current += step : current -= step);
}

// linearly interpolate `from` to `to` - weight=0 => `from`, weight=1 => `to`
inline f32 interpolate(f32 from, f32 to, f32 weight)
{
	return from * (1.0f - weight) + weight * to;
}

#endif
