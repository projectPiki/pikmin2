#ifndef _SYS_SPHERE_H
#define _SYS_SPHERE_H

#include "Vector3.h"

namespace Sys {
struct Edge;
// @size{0x10}
struct Sphere {
	inline Sphere() { }

	Sphere(Vector3f& vec, float rad)
	    : m_position(vec)
	    , m_radius(rad)
	{
	}

	inline Sphere(const Vector3f& vec) { m_position = vec; }

	bool intersect(Sphere&);
	bool intersect(Sphere&, Vector3f&);
	bool intersect(Edge&, float&);
	bool intersect(Edge&, float&, Vector3f&);
	bool intersect(Edge&, float&, Vector3f&, float&);

	// Unused/inlined:
	bool intersectRay(Vector3f&, Vector3f&);

	Vector3f m_position; // _00
	float m_radius;      // _0C
};
} // namespace Sys

#endif
