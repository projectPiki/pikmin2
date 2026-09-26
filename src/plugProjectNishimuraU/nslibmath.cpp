#include "types.h"
#include "Vector3.h"

namespace Game {
namespace NsMathExp {
/**
 * Calculates the Lagrange interpolation for a given set of control points and a parameter t.
 * The result is stored in the output vector.
 *
 * @param controlPoints The array of control points.
 * @param t The parameter value.
 * @param output The vector to store the result.
 *
 * @note Address: 0x8023D7B0
 * @note Size: 0xA8
 */
void calcLagrange(const Vector3f* controlPoints, f32 t, Vector3f& output)
{
	f32 tMinusOne = t - 1.0f;
	f32 tMinusTwo = t - 2.0f;

	output.x = tMinusOne * (controlPoints[2].x * 0.5f * t)
	         + (tMinusTwo * (controlPoints[0].x * 0.5f * tMinusOne) - (tMinusTwo * (controlPoints[1].x * t)));
	output.y = tMinusOne * (controlPoints[2].y * 0.5f * t)
	         + (tMinusTwo * (controlPoints[0].y * 0.5f * tMinusOne) - (tMinusTwo * (controlPoints[1].y * t)));
	output.z = tMinusOne * (controlPoints[2].z * 0.5f * t)
	         + (tMinusTwo * (controlPoints[0].z * 0.5f * tMinusOne) - (tMinusTwo * (controlPoints[1].z * t)));
}

/**
 * Cross product that permits the result to alias either input.
 * @note Address: N/A, inlined
 */
inline void calcOuterPro(const Vector3f& a, const Vector3f& b, Vector3f& result)
{
	f32 x    = a.y * b.z - a.z * b.y;
	f32 y    = a.z * b.x - a.x * b.z;
	result.z = a.x * b.y - a.y * b.x;
	result.x = x;
	result.y = y;
}

/**
 * Calculates the middle joint position from the endpoints, segment lengths and bend direction.
 *
 * @param topPosition The position of the top joint.
 * @param bottomPosition The position of the bottom joint.
 * @param topToMiddleDistance The distance between the top joint and the middle joint.
 * @param middleToBottomDistance The distance between the middle joint and the bottom joint.
 * @param middleDirection [in,out] The bend direction, projected perpendicular to the line between the endpoints.
 * @param middleJointPosition [out] The calculated position of the middle joint.
 *
 * @note Address: 0x8023D858
 * @note Size: 0x1D8
 */
void calcJointPos(const Vector3f& topPosition, const Vector3f& bottomPosition, f32 topToMiddleDistance, f32 middleToBottomDistance,
                  Vector3f& middleDirection, Vector3f& middleJointPosition)
{
	Vector3f topToTargetVector;
	topToTargetVector.x = bottomPosition.x - topPosition.x;
	topToTargetVector.y = bottomPosition.y - topPosition.y;
	topToTargetVector.z = bottomPosition.z - topPosition.z;

	topToMiddleDistance *= topToMiddleDistance;
	middleToBottomDistance *= middleToBottomDistance;
	f32 distanceTopToTarget = SQUARE(topToTargetVector.x) + SQUARE(topToTargetVector.y) + SQUARE(topToTargetVector.z);

	if (!(distanceTopToTarget < 0.000001f)) {
		f32 scale = (0.5f / distanceTopToTarget) * (distanceTopToTarget + (topToMiddleDistance - middleToBottomDistance));
		Vector3f scaledTopToTarget;
		scaledTopToTarget.x = scale * topToTargetVector.x + topPosition.x;
		scaledTopToTarget.y = scale * topToTargetVector.y + topPosition.y;
		scaledTopToTarget.z = scale * topToTargetVector.z + topPosition.z;
		Vector3f offsetFromTop;
		offsetFromTop.x = scaledTopToTarget.x - topPosition.x;
		offsetFromTop.y = scaledTopToTarget.y - topPosition.y;
		offsetFromTop.z = scaledTopToTarget.z - topPosition.z;

		f32 remainingSquared = topToMiddleDistance - SQUARE(offsetFromTop.x);
		remainingSquared -= SQUARE(offsetFromTop.y);
		f32 radiusSquared = remainingSquared - SQUARE(offsetFromTop.z);

		if (!(radiusSquared <= 0.0f)) {
			Vector3f planeNormal;
			calcOuterPro(middleDirection, topToTargetVector, planeNormal);
			middleDirection.cross(topToTargetVector, planeNormal);

			f32 outSqr = SQUARE(middleDirection.x) + SQUARE(middleDirection.y) + SQUARE(middleDirection.z);
			if (outSqr != 0.0f) {
				f32 bendScale         = sqrtfClamped(radiusSquared / outSqr);
				middleJointPosition.x = bendScale * middleDirection.x + scaledTopToTarget.x;
				middleJointPosition.y = bendScale * middleDirection.y + scaledTopToTarget.y;
				middleJointPosition.z = bendScale * middleDirection.z + scaledTopToTarget.z;
				return;
			}
		}
	}

	f32 dtm           = sqrtfClamped(topToMiddleDistance);
	f32 dmb           = sqrtfClamped(middleToBottomDistance);
	f32 distanceRatio = dtm / (dtm + dmb);

	middleJointPosition.x = distanceRatio * topToTargetVector.x + topPosition.x;
	middleJointPosition.y = distanceRatio * topToTargetVector.y + topPosition.y;
	middleJointPosition.z = distanceRatio * topToTargetVector.z + topPosition.z;
}
} // namespace NsMathExp
} // namespace Game
