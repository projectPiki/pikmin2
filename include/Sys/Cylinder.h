#ifndef _SYS_CYLINDER_H
#define _SYS_CYLINDER_H

#include "Vector3.h"

struct Graphics;
namespace Sys {
struct Triangle;
struct Plane;

struct Cylinder {
	Cylinder(const Vector3f&, const Vector3f&, float);
	Cylinder(const Vector3f&, const Vector3f&, float, float);

	bool culled(const Plane&);
	void draw(Graphics&);
	bool intersect(const Triangle&, float&);
	bool intersect(const Plane&);
	void set(const Vector3f&, const Vector3f&, float);

	Vector3f _00; // _00
	Vector3f _0C; // _0C
	float    _18; // _18
	float    _1C; // _1C
};
} // namespace Sys

#endif
