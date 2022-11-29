#ifndef _SYSMATH_H
#define _SYSMATH_H

#include "JSystem/JMath.h"
#include "Dolphin/math.h"

f32 pikmin2_sinf(f32 x);
f32 pikmin2_cosf(f32 x);
f32 pikmin2_atan2f(f32 x, f32 y);
f32 pikmin2_sqrtf(f32 x);
f32 roundAng(f32 x);
f32 angDist(f32 x, f32 y);

f32 qdist2(f32, f32, f32, f32);

// TODO: This should be in the cpp file. Move it there when libraries are a thing.
/*
 * --INFO--
 * Address:	........
 * Size:	000044
 * 17(dec) instructions
 */
inline f32 qdist3(f32 x1, f32 y1, f32 z1, f32 x2, f32 y2, f32 z2)
{
	f32 xdiff = (x2 - x1);
	f32 ydiff = (y2 - y1);
	f32 zdiff = (z2 - z1);

	f32 dist = ((xdiff * xdiff) + (ydiff * ydiff) + (zdiff * zdiff));
	if (dist > 0.0f) {
		volatile f32 calcDist = dist * (__frsqrte(dist));
		dist                  = calcDist;
	}
	return dist;
}

inline float log(float& a, double b)
{
	float divisor  = log10(b);
	float dividend = log10(a);
	return dividend / divisor;
}

#endif
