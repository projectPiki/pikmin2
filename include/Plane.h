#ifndef _PLANE_H
#define _PLANE_H

#include "Vector3.h"

struct Plane {
	Plane()
	    : mNormal(0.0f, 1.0f, 0.0f)
	    , mOffset(0.0f)
	{
	}

	void read(Stream&);
	void write(Stream&);
	f32 calcDist(const Vector3f& vec) const { return (vec.x * mNormal.x + vec.y * mNormal.y + vec.z * mNormal.z - mOffset); }

	inline void setVec(Plane& plane) { mNormal = plane.mNormal; }

	inline void setDist(Plane& plane) { mOffset = plane.mOffset; }
	void calcProjection(Vector3f&);
	void intersectRay(Vector3f&, Vector3f&);

	inline void define(const Vector3f& normal, const Vector3f& point)
	{
		mNormal = normal;
		mOffset = mNormal.dot(point);
	}

	Vector3f mNormal; // _00
	f32 mOffset;      // _0C
};

#endif
