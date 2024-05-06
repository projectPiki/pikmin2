#include "types.h"
#include "Sys/Cylinder.h"
#include "Vector3.h"
#include "sysMath.h"
#include "Sys/geometry.h"
#include "Sys/Triangle.h"

namespace Sys {

/**
 * @note Address: N/A
 * @note Size: 0x104
 */
Cylinder::Cylinder(const Vector3f& start, const Vector3f& end, f32 radius)
{
	mCenter = (start + end) * 0.5;
	mAxis   = end - start;

	f32 length = normalise(&mAxis);
	mLength    = length;
	mRadius    = radius;
}

/**
 * @note Address: 0x80421628
 * @note Size: 0x3C
 */
Cylinder::Cylinder(const Vector3f& center, const Vector3f& axis, f32 len, f32 radius)
{
	mCenter = center;
	mAxis   = axis;
	mLength = len;
	mRadius = radius;
}

/**
 * @note Address: 0x80421664
 * @note Size: 0x100
 */
void Cylinder::set(const Vector3f& start, const Vector3f& end, f32 radius)
{
	mCenter = (start + end) * 0.5;
	mAxis   = end - start;

	f32 length = normalise(&mAxis);
	mLength    = length;
	mRadius    = radius;
}

/**
 * @note Address: N/A
 * @note Size: 0x188
 */
bool Cylinder::intersect(Plane const& plane)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80421764
 * @note Size: 0x190
 */
bool Cylinder::culled(Plane const& inputPlane)
{
	f32 len = 0.5f * mLength;

	Vector3f lowerVec = mCenter - mAxis * (len);
	Vector3f upperVec = mCenter + mAxis * (len);

	Vector3f planeVec(inputPlane.mNormal);
	f32 dotPlane     = mAxis.dot(planeVec);
	f32 scaledRadius = mRadius * pikmin2_sqrtf(-((dotPlane * dotPlane) - 1.0f));

	f32 below = scaledRadius + inputPlane.calcDist(lowerVec);
	f32 above = scaledRadius + inputPlane.calcDist(upperVec);

	if ((below > 0.0f) || (above > 0.0f)) {
		return false;
	}
	return true;
}

/**
 * @note Address: 0x804218F4
 * @note Size: 0x1D8
 */
bool Cylinder::intersect(Triangle const& triangle, f32& p2)
{
	for (int i = 0; i < 3; i++) {
		if (culled(triangle.mEdgePlanes[i])) {
			return false;
		}
	}

	f32 len = 0.5f * mLength;

	Vector3f lowerVec = mCenter - mAxis * (len);
	Vector3f upperVec = mCenter + mAxis * (len);

	Vector3f planeVec(triangle.mTrianglePlane.mNormal);
	f32 dotPlane     = mAxis.dot(planeVec);
	f32 scaledRadius = mRadius * pikmin2_sqrtf(-((dotPlane * dotPlane) - 1.0f));

	f32 below = triangle.mTrianglePlane.calcDist(lowerVec) - scaledRadius;
	f32 above = scaledRadius + triangle.mTrianglePlane.calcDist(upperVec);

	if ((below * above) > 0.0f) {
		return false;
	}

	if (below < 0.0f) {
		p2 = -below;
	} else {
		p2 = -above;
	}
	return true;
}

/**
 * @note Address: N/A
 * @note Size: 0x4A0
 */
void Cylinder::draw(Graphics& graphics)
{
	// UNUSED FUNCTION
}
} // namespace Sys
