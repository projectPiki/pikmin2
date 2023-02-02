#ifndef _SYS_GEOMETRY_H
#define _SYS_GEOMETRY_H

#include "JSystem/JGeometry.h"
#include "stream.h"
#include "Dolphin/math.h"
#include "sysMath.h"
#include "Vector3.h"
#include "Plane.h"

#define FABS(x) (float)__fabs(x)

// probably a Vector3.h thing
inline f32 lenVec(const Vector3f& a) { return pikmin2_sqrtf(dot(a, a)); }

// no zero check
inline f32 _normalise(Vector3f* a)
{
	f32 mag = lenVec(*a);
	f32 out = 0;

	if (mag > 0.0f) {
		out      = mag;
		f32 norm = 1.0f / mag;
		a->x *= norm;
		a->y *= norm;
		a->z *= norm;
	}
	return out;
}

// additional zero check
inline f32 normalise(Vector3f* a)
{
	f32 mag = lenVec(*a);

	if (mag > 0.0f) {
		f32 norm = 1.0f / mag;
		a->x *= norm;
		a->y *= norm;
		a->z *= norm;
	} else {
		mag = 0.0f;
	}

	return mag;
}

// useful for planes, could be a plane method
inline f32 planeDist(Vector3f& vec, Plane& plane) { return (vec.x * plane.a + vec.y * plane.b + vec.z * plane.c) - plane.d; }

#endif
