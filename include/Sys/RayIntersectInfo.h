#ifndef _SYS_RAYINTERSECTINFO_H
#define _SYS_RAYINTERSECTINFO_H

#include "Sys/Edge.h"
#include "Sys/Sphere.h"
#include "Vector3.h"
#include "types.h"

namespace Sys {
struct RayIntersectInfo {
	bool condition(struct Triangle&);

	Edge _00;                  // _00
	float _18;                 // _18
	u8 _1C;                    // _1C
	Sphere _20;                // _20
	struct TriangleTable* _30; // _30
	Vector3f _34;              // _34
	float _40;                 // _40
	u8 _44[4];                 // _44
	float _48;                 // _48
};
} // namespace Sys

#endif
