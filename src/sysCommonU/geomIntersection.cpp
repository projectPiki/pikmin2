#include "Sys/Triangle.h"
#include "Sys/TriangleTable.h"
#include "Sys/geometry.h"
#include "Sys/Edge.h"
#include "types.h"

namespace Sys {

/**
 * @note Address: 0x8041C9CC
 * @note Size: 0x4F0
 */
bool Triangle::intersect(Sys::VertexTable& vtxTable, Sys::Triangle::SphereSweep& sweep)
{

	f32 distSweep = mTrianglePlane.calcDist(sweep.mSphere.mPosition);

	Vector3f& intersectPoint = sweep.mIntersectionPoint;
	switch (sweep.mSweepType) {
	case Triangle::SphereSweep::ST_SphereInsidePlane:
		if (!(FABS(distSweep) > sweep.mSphere.mRadius)) {
			break;
		} else {
			return false;
		}

	case Triangle::SphereSweep::ST_SphereIntersectPlane:
		if (distSweep > sweep.mSphere.mRadius) {
			return false;
		}

		if (distSweep < (-sweep.mSphere.mRadius - 5.0f)) {
			return false;
		}
		break;

	case Triangle::SphereSweep::ST_EdgeIntersect:
		Edge edge_intersect;
		edge_intersect.setStartEnd(sweep.mStartPos, sweep.mSphere.mPosition);

		Vector3f startPos = edge_intersect.mStartPos;
		Vector3f endPos   = edge_intersect.mEndPos;
		f32 distance      = startPos.qDistance(endPos);
		if (distance == 0.0f) {
			if (distSweep > sweep.mSphere.mRadius) {
				return false;
			}

			break;
		}

		bool isIntersect = intersect(edge_intersect, sweep.mSphere.mRadius, intersectPoint, sweep.mDistanceFromRadius);
		if (isIntersect) {
			sweep.mNormal = mTrianglePlane.mNormal;
		}
		return isIntersect;
	}

	f32 edgeDists[3];
	Vector3f spherePos(sweep.mSphere.mPosition);
	for (int i = 0; i < 3; i++) {
		edgeDists[i] = mEdgePlanes[i].calcDist(spherePos);
	}

	if ((edgeDists[0] <= 0.0f) && (edgeDists[1] <= 0.0f) && (edgeDists[2] <= 0.0f)) {
		sweep.mNormal             = mTrianglePlane.mNormal;
		sweep.mDistanceFromRadius = sweep.mSphere.mRadius - distSweep;

		Vector3f new_norm        = sweep.mNormal * sweep.mSphere.mRadius;
		sweep.mIntersectionPoint = sweep.mSphere.mPosition - new_norm;
		return true;
	}

	Sphere ball(sweep.mSphere.mPosition, sweep.mSphere.mRadius);
	Edge edge_in;
	f32 t; // sp8

	int vertA = mVertices[0];
	int vertB = mVertices[1];
	edge_in.setStartEnd(*vtxTable.getVertex(vertA), *vtxTable.getVertex(vertB));

	if (ball.intersect(edge_in, t, sweep.mNormal, sweep.mDistanceFromRadius)) {
		Vector3f new_norm        = sweep.mNormal * sweep.mSphere.mRadius;
		sweep.mIntersectionPoint = sweep.mSphere.mPosition - new_norm;
		return true;
	}

	vertA = mVertices[1];
	vertB = mVertices[2];
	edge_in.setStartEnd(*vtxTable.getVertex(vertA), *vtxTable.getVertex(vertB));

	if (ball.intersect(edge_in, t, sweep.mNormal, sweep.mDistanceFromRadius)) {
		Vector3f new_norm        = sweep.mNormal * sweep.mSphere.mRadius;
		sweep.mIntersectionPoint = sweep.mSphere.mPosition - new_norm;
		return true;
	}

	vertA = mVertices[2];
	vertB = mVertices[0];
	edge_in.setStartEnd(*vtxTable.getVertex(vertA), *vtxTable.getVertex(vertB));

	if (ball.intersect(edge_in, t, sweep.mNormal, sweep.mDistanceFromRadius)) {
		Vector3f new_norm        = sweep.mNormal * sweep.mSphere.mRadius;
		sweep.mIntersectionPoint = sweep.mSphere.mPosition - new_norm;
		return true;
	}

	return false;
}
} // namespace Sys
