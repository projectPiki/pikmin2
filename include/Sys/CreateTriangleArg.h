#ifndef _SYS_CREATETRIANGLEARG_H
#define _SYS_CREATETRIANGLEARG_H

#include "Vector3.h"
#include "Sys/Sphere.h"

namespace Sys {
struct CreateTriangleArg {
	CreateTriangleArg()
	    : mScale(0.1f)
	    , mScaleLimit(0.5f)
	{
	}

	Sphere mBoundingSphere; // _00
	f32 mScale;             // _10
	f32 mScaleLimit;        // _14
	Vector3f* mVertices;    // _18
	int mCount;             // _1C
};
} // namespace Sys

#endif
