#ifndef _BOUNDBOX_H
#define _BOUNDBOX_H

#include "Vector3.h"
#include "JSystem/JGeometry.h"

namespace Sys {
struct Sphere;
} // namespace Sys

struct BoundBox {
	// define min big and max small so that 'include' will always 'snap' to point
	BoundBox()
	    : mMin(SHORT_FLOAT_MAX)
	    , mMax(-SHORT_FLOAT_MAX)
	{
	}

	BoundBox(f32 min, f32 max)
	    : mMin(min)
	    , mMax(max)
	{
	}

	void makeBoundSphere(Sys::Sphere&);
	void read(struct Stream&);
	int transform(struct Matrixf&);

	inline void getMin(Vector3f& min) const { min = mMin; }
	inline void getMax(Vector3f& max) const { max = mMax; }

	/**
	 * @fabricated
	 */
	inline void include(Vector3f& point)
	{
		if (point.x < mMin.x) {
			mMin.x = point.x;
		}
		if (point.y < mMin.y) {
			mMin.y = point.y;
		}
		if (point.z < mMin.z) {
			mMin.z = point.z;
		}
		if (point.x > mMax.x) {
			mMax.x = point.x;
		}
		if (point.y > mMax.y) {
			mMax.y = point.y;
		}
		if (point.z > mMax.z) {
			mMax.z = point.z;
		}
	}

	inline void include(BoundBox& box)
	{
		if (box.mMin.x < mMin.x) {
			mMin.x = box.mMin.x;
		}
		if (box.mMin.y < mMin.y) {
			mMin.y = box.mMin.y;
		}
		if (box.mMin.z < mMin.z) {
			mMin.z = box.mMin.z;
		}
		if (box.mMax.x > mMax.x) {
			mMax.x = box.mMax.x;
		}
		if (box.mMax.y > mMax.y) {
			mMax.y = box.mMax.y;
		}
		if (box.mMax.z > mMax.z) {
			mMax.z = box.mMax.z;
		}
	}

	Vector3f mMin; // _00
	Vector3f mMax; // _0C
};

struct BoundBox2d {
	inline BoundBox2d(f32 minX, f32 minY, f32 maxX, f32 maxY)
	{
		mMin.x = minX;
		mMin.y = minY;
		mMax.x = maxX;
		mMax.y = maxY;
	}

	inline void fromBoundBox(BoundBox& in)
	{
		mMin = Vector2f(in.mMin.x, in.mMin.z);
		mMax = Vector2f(in.mMax.x, in.mMax.z);
	}

	Vector2f mMin; // _00
	Vector2f mMax; // _08
};

#endif
