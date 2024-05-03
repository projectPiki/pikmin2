#ifndef _SYS_CYLINDER_H
#define _SYS_CYLINDER_H

#include "Vector3.h"
struct Plane;
struct Graphics;
namespace Sys {
struct Triangle;

struct Cylinder {
	inline Cylinder() { }
	Cylinder(const Vector3f& startPos, const Vector3f& endPos, f32 radius);
	Cylinder(const Vector3f& center, const Vector3f& axis, f32 length, f32 radius);

	bool culled(const Plane&);
	void draw(Graphics&);
	bool intersect(const Triangle&, f32&);
	bool intersect(const Plane&);
	void set(const Vector3f& start, const Vector3f& end, f32 radius);

	Vector3f mCenter; // _00 - coords of center of cylinder
	Vector3f mAxis;   // _0C - unit vector pointing along cylinder axis
	f32 mLength;      // _18 - length of cylinder
	f32 mRadius;      // _1C - radius of cylinder
};
} // namespace Sys

#endif
