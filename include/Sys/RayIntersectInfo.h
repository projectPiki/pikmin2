#ifndef _SYS_RAYINTERSECTINFO_H
#define _SYS_RAYINTERSECTINFO_H

#include "Sys/Edge.h"
#include "Sys/Sphere.h"
#include "Vector3.h"
#include "types.h"

namespace Sys {
struct RayIntersectInfo {
	bool condition(struct Triangle&);

	Edge mIntersectEdge;             // _00
	f32 mRadius;                     // _18
	u8 mCheckHorizontal;             // _1C
	Sphere mBoundingSphere;          // _20
	struct TriangleTable* mTriTable; // _30
	Vector3f mIntersectPosition;     // _34
	f32 mDistance;                   // _40
	u8 _44[4];                       // _44
	f32 mNormalY;                    // _48
	u32 _4C;                         // _4C, unknown
};
} // namespace Sys

#endif
