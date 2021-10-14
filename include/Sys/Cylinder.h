#ifndef _SYS_CYLINDER_H
#define _SYS_CYLINDER_H

#include "Vector3.h"

namespace Sys {
struct Triangle;

struct Cylinder {
	Cylinder(const Vector3f&, const Vector3f&, float, float);

	void culled(const struct Plane&);
	void intersect(const Sys::Triangle&, float&);
	void set(const Vector3f&, const Vector3f&, float);
};
} // namespace Sys

#endif
