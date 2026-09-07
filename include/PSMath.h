#ifndef _PSMATH_H
#define _PSMATH_H

#include "types.h"
#include "P2Macros.h"
#include "Dolphin/vec.h"
#include "sqrt.h"
#include "sysMath.h"
#include "Vector3.h"

namespace PSMath {

template <typename A, typename B>
inline f32 calcSquareDistance(const A& a, const B& b)
{
	Vector3f delta(a.x - b.x, a.y - b.y, a.z - b.z);
	Vector3f squares = delta * delta;
	return squares.z + (squares.x + squares.y);
}

static inline Vec squareComponents(Vec vector)
{
	vector.x *= vector.x;
	vector.y *= vector.y;
	vector.z *= vector.z;
	return vector;
}

template <typename A, typename B>
inline f32 calcDistance(const A& from, B to)
{
	JGeometry::TVec3f fromGeometry;
	fromGeometry.set(from.x, from.y, from.z);
	Vec fromPosition = fromGeometry;

	JGeometry::TVec3f deltaGeometry;
	deltaGeometry.set(to.x - fromPosition.x, to.y - fromPosition.y, to.z - fromPosition.z);
	Vec delta    = deltaGeometry;
	Vec squares  = squareComponents(delta);
	f32 distance = squares.z + (squares.x + squares.y);
	return sqrtf(distance);
}

inline f32 calcMagnitude(const Vec& vector)
{
	return pikmin2_sqrtf((vector.x * vector.x) + (vector.y * vector.y) + (vector.z * vector.z));
}

template <typename A, typename B>
inline f32 calcDistanceXZ(const A& a, B b)
{
	f32 x = a.x - b.x;
	x *= x;
	f32 z = a.z - b.z;
	z *= z;
	f32 distance = x + z;
	return sqrtf(distance);
}

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
