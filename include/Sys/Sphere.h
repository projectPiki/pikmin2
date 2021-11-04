#ifndef _SYS_SPHERE_H
#define _SYS_SPHERE_H

#include "Vector3.h"

namespace Sys {
struct Sphere {
	Vector3f m_position; // _00
	float m_radius;      // _0C
};
} // namespace Sys

#endif
