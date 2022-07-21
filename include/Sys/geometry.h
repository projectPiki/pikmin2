#ifndef _SYS_GEOMETRY_H
#define _SYS_GEOMETRY_H

#include "JSystem/JGeometry.h"
#include "stream.h"
#include "Dolphin/math.h"
#include "sysMath.h"
#include "Vector3.h"

#define FABS(x) (float)__fabs(x)

// probably a Vector3.h thing
inline float lenVec(const Vector3f& a) { return pikmin2_sqrtf(dot(a, a)); }

// no zero check
inline float _normalise(Vector3f* a)
{
	float mag = lenVec(*a);
	float out = 0;

	if (mag > 0.0f) {
		out        = mag;
		float norm = 1.0f / mag;
		a->x *= norm;
		a->y *= norm;
		a->z *= norm;
	}
	return out;
}

// additional zero check
inline float normalise(Vector3f* a)
{
	float mag = lenVec(*a);

	if (mag > 0.0f) {
		float norm = 1.0f / mag;
		a->x *= norm;
		a->y *= norm;
		a->z *= norm;
	} else {
		mag = 0.0f;
	}

	return mag;
}

// useful for planes, could be a plane method
inline float planeDist(Vector3f& vec, Plane& plane) { return (vec.x * plane.a + vec.y * plane.b + vec.z * plane.c) - plane.d; }

#endif
