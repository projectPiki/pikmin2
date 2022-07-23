#ifndef _SYS_CYLINDER_H
#define _SYS_CYLINDER_H

#include "Vector3.h"
struct Plane;
struct Graphics;
namespace Sys {
struct Triangle;

struct Cylinder {
	inline Cylinder() { }
	Cylinder(const Vector3f&, const Vector3f&, float);
	Cylinder(const Vector3f&, const Vector3f&, float, float);

	bool culled(const Plane&);
	void draw(Graphics&);
	bool intersect(const Triangle&, float&);
	bool intersect(const Plane&);
	void set(const Vector3f&, const Vector3f&, float);

	Vector3f m_center; // _00 - coords of center of cylinder
	Vector3f m_axis;   // _0C - unit vector pointing along cylinder axis
	float m_length;    // _18 - length of cylinder
	float m_radius;    // _1C - radius of cylinder
};
} // namespace Sys

#endif
