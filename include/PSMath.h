#ifndef _PSMATH_H
#define _PSMATH_H

#include "types.h"
#include "P2Macros.h"
#include "Dolphin/vec.h"

namespace PSMath {

// more suff probably belongs here, this header just exists for the panic
inline bool calcDistanceInRange(const Vec& pos1, const Vec& pos2, f32 a1, f32 a2)
{
	P2ASSERTLINE(45, a1 > a2);
	f32 x = pos1.x - pos2.x;
	x     = (x >= 0.0f) ? x : -x;

	f32 y = pos1.y - pos2.y;
	y     = (y >= 0.0f) ? y : -y;

	f32 z = pos1.z - pos2.z;
	z     = (z >= 0.0f) ? z : -z;

	if ((x < a1) && (y < a1) && (z < a1) && (!(x > a2) || !(y > a2) || !(z > a2))) {
		return true;
	}
	return false;
}

} // namespace PSMath

#endif
