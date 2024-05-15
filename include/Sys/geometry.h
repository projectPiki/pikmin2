#ifndef _SYS_GEOMETRY_H
#define _SYS_GEOMETRY_H

#include "JSystem/JGeometry.h"
#include "stream.h"
#include "math.h"
#include "sysMath.h"
#include "Vector3.h"
#include "Plane.h"

// probably a Vector3.h thing
inline f32 lenVec(Vector3f& a) { return pikmin2_sqrtf(a.dot(a)); }

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

#endif
