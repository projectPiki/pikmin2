#ifndef _SYSMATH_H
#define _SYSMATH_H

#include "JSystem/JMath.h"
#include "Dolphin/math.h"

float pikmin2_sinf(float x);
float pikmin2_cosf(float x);
float pikmin2_atan2f(float x, float y);
float pikmin2_sqrtf(float x);
float roundAng(float x);
float angDist(float, float);

float qdist2(float, float, float, float);

// TODO: This should be in the cpp file. Move it there when libraries are a thing.
/*
 * --INFO--
 * Address:	........
 * Size:	000044
 * 17(dec) instructions
 */
inline float qdist3(float x1, float y1, float z1, float x2, float y2, float z2)
{
	float xdiff = (x2 - x1);
	float ydiff = (y2 - y1);
	float zdiff = (z2 - z1);

	float dist = ((xdiff * xdiff) + (ydiff * ydiff) + (zdiff * zdiff));
	if (dist > 0.0f) {
		volatile float calcDist = dist * (__frsqrte(dist));
		dist                    = calcDist;
	}
	return dist;
}

#endif
