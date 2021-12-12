#ifndef _SYS_SPHERE_H
#define _SYS_SPHERE_H

#include "Vector3.h"

namespace Sys {
// @size{0x10}
struct Sphere {
	inline Sphere() {};
	// inline Sphere() : m_position(nullptr), m_radius() {};
	Sphere(Vector3f&, float);

	Vector3f m_position; // _00
	float m_radius;      // _0C
};
} // namespace Sys

#endif
