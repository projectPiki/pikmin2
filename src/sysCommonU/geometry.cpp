#include "Sys/geometry.h"
#include "Sys/GridDivider.h"
#include "Sys/RayIntersectInfo.h"
#include "Sys/Triangle.h"
#include "Sys/TriangleTable.h"
#include "Sys/TriIndexList.h"
#include "Sys/CreateTriangleArg.h"
#include "Sys/Tube.h"
#include "Game/CurrTriInfo.h"
#include "Vector3.h"
#include "sysMath.h"
#include "types.h"

namespace Sys {

bool Triangle::debug = false;

/**
 * @note Address: N/A
 * @note Size: 0x238
 */
void Edge::calcNearestEdgePoint(Vector3f&, Vector3f&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80415AA4
 * @note Size: 0xB4
 */
void Tube::getAxisVector(Vector3f& axisVector)
{
	axisVector = mEndPos - mStartPos;
	axisVector.qNormalise();
}

/**
 * @note Address: N/A
 * @note Size: 0x2C
 */
void Tube::getYRatio(f32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80415B58
 * @note Size: 0x27C
 */
bool Tube::collide(Sphere& ball, Vector3f& repulsionVec, f32& posRatio)
{

	Vector3f diff = mEndPos - mStartPos;
	Vector3f axis = diff;

	f32 lenTube = axis.qNormalise();

	if (0 == lenTube) {
		return false;
	}

	Vector3f sep = ball.mPosition - mStartPos;

	f32 scalarProj = axis.dot(sep) / lenTube;

	f32 axialOverlap = 0.5f * lenTube - (FABS(scalarProj - 0.5f) * lenTube - ball.mRadius);

	Vector3f perpVec;
	perpVec = (diff * scalarProj) + mStartPos - ball.mPosition;

	f32 perpDist = perpVec.qLength();

	f32 tubeRadius = ((1.0f - scalarProj) * mStartRadius) + (mEndRadius * scalarProj);

	f32 overlap = (ball.mRadius + tubeRadius) - perpDist;

	if ((scalarProj >= 0) && (scalarProj <= 1.0f) && overlap >= 0) {
		repulsionVec = perpVec;
		repulsionVec.qNormalise();

		repulsionVec = repulsionVec * -overlap;
		posRatio     = scalarProj;
		return true;
	}
	return false;
}

/**
 * @note Address: 0x80415DD4
 * @note Size: 0xF4
 */
f32 Tube::getPosRatio(const Vector3f& point)
{

	Vector3f axis = mEndPos - mStartPos;
	f32 mag       = axis.qNormalise();

	Vector3f sep = point - mStartPos;

	return axis.dot(sep) / mag;
}

/**
 * @note Address: N/A
 * @note Size: 0x1C
 */
// void Tube::getRatioRadius(f32)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x200
 */
// void Tube::getPosGradient(Vector3f&, f32, Vector3f&, Vector3f&)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x80415EC8
 * @note Size: 0x4C
 */
Vector3f Tube::setPos(f32 frac)
{
	// returns position we're at, given we're a fraction 'frac' through the tube
	// i.e. return mStartPos if frac = 0, return mEndPos if frac = 1

	Vector3f diff = mStartPos;
	diff          = (mEndPos - diff) * frac;
	return mStartPos + diff;
}

/**
 * @note Address: 0x80415F14
 * @note Size: 0x58
 */
bool Sphere::intersect(Sphere& ball)
{

	Vector3f diff = ball.mPosition - mPosition;
	f32 sepSqr    = diff.sqrLength();

	f32 sumRadii = ball.mRadius + mRadius;

	f32 repulsion = -(sumRadii * sumRadii - sepSqr);

	if (repulsion <= 0.0f) {
		return true;
	}
	return false;
}

/**
 * @note Address: 0x80415F6C
 * @note Size: 0x120
 */
bool Sys::Sphere::intersect(Sys::Sphere& ball, Vector3f& repulsionVec)
{
	// calculate whether sphere intersects with another sphere 'ball'
	// return true if yes
	// also load (negative) separation vector scaled by overlap into repulsionVec

	// calculate center-to-center distance
	repulsionVec = ball.mPosition - mPosition;
	f32 sep      = repulsionVec.qNormalise();

	// (distance between centers) - (total 'material' between centers); positive if there's a gap
	f32 negOverlap = sep - (ball.mRadius + mRadius);

	// if positive, gap, so no intersection
	if (negOverlap > 0.0f) {
		return false; // repulsionVec just contains unit separation vector
	}
	// if negative, intersection, so scale unit separation vector by negative overlap
	repulsionVec = repulsionVec * negOverlap;
	return true;
}

/**
 * @note Address: 0x8041608C
 * @note Size: 0x204
 */
bool Sphere::intersect(Edge& edge, f32& t)
{

	Vector3f startSep = edge.mStartPos - mPosition;
	f32 startDist     = startSep.qLength();
	if (startDist <= mRadius) {
		t = 0.0f;
		return true;
	}

	Vector3f endSep = edge.mEndPos - mPosition;
	f32 endDist     = endSep.qLength();
	if (endDist <= mRadius) {
		t = 1.0f;
		return true;
	}

	Vector3f edgeVec = edge.mEndPos - edge.mStartPos;
	f32 edgeLen      = edgeVec.qNormalise();

	Vector3f sep = mPosition - edge.mStartPos;

	t = sep.dot(edgeVec);

	if ((t < 0.0f) || (t > edgeLen)) {
		return false;
	}

	Vector3f projVec = edgeVec * t;

	Vector3f perpVec = sep - projVec;

	f32 perpDist = perpVec.qLength();
	if (perpDist <= mRadius) {
		return true;
	}
	return false;
}

/**
 * @note Address: 0x80416290
 * @note Size: 0x28C
 */
bool Sphere::intersect(Edge& edge, f32& t, Vector3f& intersectPoint)
{

	Vector3f startSep = edge.mStartPos - mPosition;
	f32 startDist     = startSep.qLength();
	if (startDist <= mRadius) {
		t              = 0.0f;
		intersectPoint = edge.mStartPos;
		return true;
	}

	Vector3f endSep = edge.mEndPos - mPosition;
	f32 endDist     = endSep.qLength();
	if (endDist <= mRadius) {
		t              = 1.0f;
		intersectPoint = edge.mEndPos;
		return true;
	}

	Vector3f edgeVec = edge.mEndPos - edge.mStartPos;
	f32 edgeLen      = edgeVec.qNormalise();

	Vector3f sep = intersectPoint - edge.mStartPos;

	t = sep.dot(edgeVec);

	if ((t < 0.0f) || (t > edgeLen)) {
		return false;
	}

	Vector3f projVec = edgeVec * t;

	Vector3f perpVec = sep - projVec;

	f32 perpDist = perpVec.qLength();
	if (perpDist <= mRadius) {
		f32 edgeDist   = t * edgeLen;
		projVec        = edgeVec * edgeDist;
		intersectPoint = edge.mStartPos + projVec;
		return true;
	}

	return false;
}

/**
 * @note Address: 0x8041651C
 * @note Size: 0x3D4
 */
bool Sphere::intersect(Edge& edge, f32& t, Vector3f& repulsionVec, f32& strength)
{

	Vector3f edgeVec = edge.mEndPos - edge.mStartPos;
	f32 edgeLen      = edgeVec.qNormalise();

	Vector3f startSep = mPosition - edge.mStartPos;

	t = startSep.dot(edgeVec);

	if ((t < 0.0f) || (t > edgeLen)) {

		Vector3f sep_0 = edge.mStartPos - mPosition;
		if (sep_0.qLength() <= mRadius) {
			t            = 0.0f;
			repulsionVec = mPosition - edge.mStartPos;

			f32 sepDist = repulsionVec.qNormalise();
			strength    = mRadius - sepDist;

			if (0.0f == sepDist) {
				repulsionVec = Vector3f(0);
			}

			return true;
		}

		Vector3f sep_1 = edge.mEndPos - mPosition;

		if (sep_1.qLength() <= mRadius) {
			t            = 1.0f;
			repulsionVec = mPosition - edge.mEndPos;

			f32 sepDist = repulsionVec.qNormalise();
			strength    = mRadius - sepDist;

			if (0.0f == sepDist) {
				repulsionVec = Vector3f(0);
			}

			return true;
		}
		return false;
	}

	Vector3f projVec = edgeVec * t;

	Vector3f perpVec = startSep - projVec;
	f32 perpDist     = perpVec.qNormalise();

	if (perpDist < mRadius) {
		if (0.0f == perpDist) {
			repulsionVec = Vector3f(0);
			strength     = mRadius;
			return true;
		}

		strength     = mRadius - perpDist;
		repulsionVec = perpVec;
		return true;
	}

	return false;
}

/**
 * @note Address: N/A
 * @note Size: 0xD8
 */
// bool Sphere::intersectRay(Vector3f&, Vector3f&)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x804168F0
 * @note Size: 0x68
 */
Triangle::Triangle()
{
	mCode.mContents = (bool)0;
}

/**
 * @note Address: N/A
 * @note Size: 0x27C
 */
// void Triangle::findNearestPoint(VertexTable&, Vector3f&, Vector3f&)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x80416958
 * @note Size: 0x168
 */
void Triangle::createSphere(VertexTable& vertTable)
{
	Vector3f vert_3 = vertTable.getVertexAt(mVertices[2]);
	Vector3f vert_2 = vertTable.getVertexAt(mVertices[1]);
	Vector3f vert_1 = vertTable.getVertexAt(mVertices[0]);

	// get center of triangle
	Vector3f center = (vert_1 + vert_2);
	center          = (center + vert_3) * (1.0f / 3.0f);

	// make sure radius includes all vertices
	f32 new_radius = 0.0f;
	for (int i = 0; i < 3; i++) {
		int* vertPtr = mVertices;
		Vector3f sep = vertTable.mObjects[vertPtr[i]] - center;

		f32 vtxDist = sep.qLength();
		if (vtxDist > new_radius) {
			new_radius = vtxDist;
		}
	};

	mSphere.mRadius   = new_radius;
	mSphere.mPosition = center;
}

/**
 * @note Address: 0x80416AC0
 * @note Size: 0x84
 */
bool Triangle::fastIntersect(Sphere& ball)
{
	f32 x = ball.mPosition.x - mSphere.mPosition.x;
	f32 y = ball.mPosition.y - mSphere.mPosition.y;
	f32 z = ball.mPosition.z - mSphere.mPosition.z;

	Vector3f sep(x, y, z);
	f32 dist = sep.qLength();

	// check how much "stuff" is between them
	f32 radii = ball.mRadius + mSphere.mRadius;

	// if separation is less than or equal to amount of material, intersection; if not, no intersection
	return (dist <= radii);
}

/**
 * @note Address: N/A
 * @note Size: 0x88
 */
// void Triangle::write(Stream&)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x88
 */
// void Triangle::read(Stream&)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x38
 */
// void Triangle::constructFromJ3D(Sys::VertexTable&, __J3DUTriangle&)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
// void Triangle::draw(Graphics&, Sys::VertexTable&, bool)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x80416B44
 * @note Size: 0x104
 */
f32 Sys::Triangle::calcDist(Plane& plane, Sys::VertexTable& vertTable)
{
	// calculate distance to 'closest' vertex of triangle from a given plane
	// but if triangle is completely 'below' plane, returns furthest point instead

	// get triangle vertices from VertexTable vertTable
	Vector3f vert_1 = vertTable.mObjects[mVertices[0]];
	Vector3f vert_2 = vertTable.mObjects[mVertices[1]];
	Vector3f vert_3 = vertTable.mObjects[mVertices[2]];

	// calculate distance from plane to each vertex (can be negative)
	f32 vertDist_1 = plane.calcDist(vert_1);
	f32 vertDist_2 = plane.calcDist(vert_2);
	f32 vertDist_3 = plane.calcDist(vert_3);

	f32 minDist;

	// dist to 'closest' vertex (farthest if below plane)
	if (vertDist_1 < vertDist_2) {
		minDist = (vertDist_1 < vertDist_3) ? vertDist_1 : vertDist_3;
	} else {
		minDist = (vertDist_2 < vertDist_3) ? vertDist_2 : vertDist_3;
	}

	// dist to 'farthest' vertex (closest if below plane)
	f32 maxDist;
	if (vertDist_1 < vertDist_2) {
		maxDist = (vertDist_2 < vertDist_3) ? vertDist_3 : vertDist_2;
	} else {
		maxDist = (vertDist_1 < vertDist_3) ? vertDist_3 : vertDist_1;
	}

	// check plane isn't intersecting triangle
	f32 check = (minDist * maxDist);
	if (check > 0.0f) { // both points on same side of plane, we're good
		return minDist;
	}
	// negative = points on either side, 0 = one point IN plane, so intersecting
	return 0.0f; // if something's negative or one is zero, we're overlapping, so return 0 as distance
}

/**
 * @note Address: N/A
 * @note Size: 0x1EC
 */
bool Triangle::intersect(Sys::VertexTable& verts, BoundBox2d& bounds)
{
	BoundBox2d triBounds(12800000.0f, 12800000.0f, -12800000.0f, -12800000.0f);

	for (int i = 0; i < 3; i++) {
		Vector3f& point = verts.mObjects[mVertices[i]];
		if (triBounds.mMin.x > point.x)
			triBounds.mMin.x = point.x;
		if (triBounds.mMin.y > point.z)
			triBounds.mMin.y = point.z;
		if (triBounds.mMax.x < point.x)
			triBounds.mMax.x = point.x;
		if (triBounds.mMax.y < point.z)
			triBounds.mMax.y = point.z;
	}

	bool overlapsX = !(bounds.mMax.x < triBounds.mMin.x) && !(triBounds.mMax.x < bounds.mMin.x)
	              && ((bounds.mMin.x <= triBounds.mMin.x && triBounds.mMin.x <= bounds.mMax.x)
	                  || (triBounds.mMin.x <= bounds.mMin.x && bounds.mMin.x <= triBounds.mMax.x));
	if (!overlapsX)
		return false;

	bool overlapsZ = !(bounds.mMax.y < triBounds.mMin.y) && !(triBounds.mMax.y < bounds.mMin.y)
	              && ((bounds.mMin.y <= triBounds.mMin.y && triBounds.mMin.y <= bounds.mMax.y)
	                  || (triBounds.mMin.y <= bounds.mMin.y && bounds.mMin.y <= triBounds.mMax.y));
	if (overlapsZ)
		return true;
	return false;
}

/**
 * @note Address: N/A
 * @note Size: 0x2F0
 */
// bool Triangle::intersect(Sys::Edge&, Vector3f&)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x80416C48
 * @note Size: 0x334
 */
bool Triangle::intersect(Edge& edge, f32 cutoff, Vector3f& intersectionPoint)
{
	// check if edge intersects triangle within a given cutoff length from the start of the edge
	// output intersection point into intersectionPoint, return true if intersecting

	// get length of edge and scalar projection of edge onto normal to triangle plane
	Vector3f edgeVec(edge.mEndPos.x - edge.mStartPos.x, edge.mEndPos.y - edge.mStartPos.y, edge.mEndPos.z - edge.mStartPos.z);
	f32 edgeLen = edgeVec.qLength();

	Vector3f triPlaneNormal(mTrianglePlane.mNormal);

	f32 scalarProj = triPlaneNormal.dot(edgeVec);

	// if edge has no length, cannot intersect
	if (edgeLen == 0.0f) {
		return false;
	}

	// get ratio along edge...?
	f32 ratio = cutoff / edgeLen;

	// if edge is (close to) perpendicular to triangle, need more checks
	if (FABS(scalarProj) < 0.01f) {
		// if plane cuts edge below (or at) cutoff
		if (FABS(mTrianglePlane.calcDist(edge.mStartPos)) <= cutoff) {
			// check each edge plane of triangle
			for (int i = 0; i < 3; i++) {
				// project normal onto edge
				f32 edgePlaneProj = mEdgePlanes[i].mNormal.dot(edgeVec);

				// check that projection isn't vanishingly small
				if (FABS(edgePlaneProj) > 0.01f) {
					// check we have an intersection point
					f32 edgePlaneRatio = (mEdgePlanes[i].mOffset - mEdgePlanes[i].mNormal.dot(edge.mStartPos)) / edgePlaneProj;
					if ((edgePlaneRatio > -ratio) && (edgePlaneRatio < (1 + ratio))) {
						// get intersection point
						Vector3f projVec  = edgeVec * edgePlaneRatio;
						intersectionPoint = edge.mStartPos + projVec;

						// check intersection point is within cutoff dist on edge
						if (FABS(mTrianglePlane.calcDist(intersectionPoint)) < cutoff) {
							return true;
						}
					}
				}
			}
		} else { // plane cuts edge outside of cutoff
			return false;
		}
		// close to perpendicular but no intersection
		return false;
	}

	// edge not (close to) perpendicular, can just check triangle plane itself
	// check if we have an intersection point
	f32 triPlaneRatio = (mTrianglePlane.mOffset - triPlaneNormal.dot(edge.mStartPos)) / scalarProj;
	if ((triPlaneRatio < -ratio) || (triPlaneRatio > (1 + ratio))) {
		// we don't
		return false;
	}

	// get intersection point
	Vector3f projVec  = edgeVec * triPlaneRatio;
	intersectionPoint = edge.mStartPos + projVec;

	// double check point isn't outside the triangle
	for (int i = 0; i < 3; i++) {
		if (mEdgePlanes[i].calcDist(intersectionPoint) > cutoff) {
			return false;
		}
	}
	// intersection point and is inside triangle
	return true;
}

/**
 * @note Address: 0x80416F7C
 * @note Size: 0x370
 */
bool Sys::Triangle::intersect(Sys::Edge& edge, f32 cutoff, Vector3f& intersectionPoint, f32& distFromCutoff)
{
	// check if edge intersects triangle within a given cutoff length from the start of the edge
	// output intersection point into intersectionPoint, return true if intersecting
	// also put distance from cutoff to intersection point into distFromCutoff

	// get length of edge and scalar projection of edge onto normal to triangle plane
	Vector3f edgeVec(edge.mEndPos.x - edge.mStartPos.x, edge.mEndPos.y - edge.mStartPos.y, edge.mEndPos.z - edge.mStartPos.z);
	f32 edgeLen = edgeVec.qLength();

	Vector3f triPlaneNormal(mTrianglePlane.mNormal);

	f32 scalarProj = triPlaneNormal.dot(edgeVec);

	// if edge has no length, cannot intersect
	if (edgeLen == 0.0f) {
		return false;
	}

	// get ratio along edge...?
	f32 ratio = cutoff / edgeLen;

	// if edge is (close to) perpendicular to triangle, need more checks
	if (FABS(scalarProj) < 0.01f) {
		// if plane cuts edge below (or at) cutoff
		if (FABS(mTrianglePlane.calcDist(edge.mStartPos)) <= cutoff) {
			// check each edge plane of triangle
			for (int i = 0; i < 3; i++) {
				// project normal onto edge
				f32 edgePlaneProj = mEdgePlanes[i].mNormal.dot(edgeVec);

				// check that projection isn't vanishingly small
				if (FABS(edgePlaneProj) > 0.01f) {
					// check we have an intersection point
					f32 edgePlaneRatio = (mEdgePlanes[i].mOffset - mEdgePlanes[i].mNormal.dot(edge.mStartPos)) / edgePlaneProj;
					if ((edgePlaneRatio > -ratio) && (edgePlaneRatio < (1 + ratio))) {
						// get intersection point
						Vector3f projVec  = edgeVec * edgePlaneRatio;
						intersectionPoint = edge.mStartPos + projVec;

						// check intersection point is within cutoff dist on edge
						f32 intersectDist = mTrianglePlane.calcDist(intersectionPoint);
						if (FABS(intersectDist) < cutoff) {
							distFromCutoff = cutoff - intersectDist;
							return true;
						}
					}
				}
			}
		} else { // plane cuts edge outside of cutoff
			return false;
		}
		// close to perpendicular but no intersection
		return false;
	}

	// edge not (close to) perpendicular, can just check triangle plane itself
	// check if we have an intersection point
	f32 triPlaneRatio = (mTrianglePlane.mOffset - triPlaneNormal.dot(edge.mStartPos)) / scalarProj;
	if ((triPlaneRatio < -ratio) || (triPlaneRatio > (1 + ratio))) {
		// we don't
		return false;
	}

	// get intersection point
	Vector3f projVec  = edgeVec * triPlaneRatio;
	intersectionPoint = edge.mStartPos + projVec;

	// double check point isn't outside the triangle
	for (int i = 0; i < 3; i++) {
		if (mEdgePlanes[i].calcDist(intersectionPoint) > cutoff) {
			return false;
		}
	}
	// intersection point and is inside triangle
	distFromCutoff = cutoff - mTrianglePlane.calcDist(intersectionPoint);
	return true;
}

/**
 * @note Address: 0x804172EC
 * @note Size: 0x2AC
 */
bool Triangle::intersect(Sys::VertexTable& vertTable, Sys::Sphere& ball)
{
	// check if ball intersects triangle, given a table of its vertices
	// return true if intersects

	f32 ballDists[3]; // distances from ball center to each edge plane
	Sys::Edge edge;   // reusable edge to check intersections
	f32 t;            // dummy variable for intersection check

	// check we're not too high or low from plane of triangle
	if (FABS(mTrianglePlane.calcDist(ball.mPosition)) > ball.mRadius) {
		return false;
	}

	// check center of sphere isn't more than its radius away from the edge planes
	for (int i = 0; i < 3; i++) {
		// get distance from center of ball to plane
		f32 edgePlaneDist = mEdgePlanes[i].calcDist(ball.mPosition);
		if (edgePlaneDist > ball.mRadius) { // too far away, can't possibly intersect
			return false;
		}

		// keep track of distances for later
		ballDists[i] = edgePlaneDist;
	}

	// check for intersection with each edge in turn
	// Iteration 0
	edge.setStartEnd(*vertTable.getVertex(mVertices[0]), *vertTable.getVertex(mVertices[1]));
	if (ball.intersect(edge, t) != 0) {
		return true;
	}

	// Iteration 1
	edge.setStartEnd(*vertTable.getVertex(mVertices[1]), *vertTable.getVertex(mVertices[2]));
	if (ball.intersect(edge, t) != 0) {
		return true;
	}

	// Iteration 2
	edge.setStartEnd(*vertTable.getVertex(mVertices[2]), *vertTable.getVertex(mVertices[0]));
	if (ball.intersect(edge, t) != 0) {
		return true;
	}

	// check ball center is 'inside' triangle (i.e. directly above or below)
	for (int i = 0; i < 3; i++) {
		if (ballDists[i] > 0.0f) { // ball not 'inside' triangle
			return false;
		}
	}

	// passes all checks, assume it intersects
	return true;
}

/**
 * @note Address: 0x80417598
 * @note Size: 0x2F8
 */
bool Triangle::intersect(Sys::VertexTable& vertTable, Sys::Sphere& ball, Vector3f& intersectPoint)
{
	if (FABS(mTrianglePlane.calcDist(ball.mPosition)) > ball.mRadius) {
		return false;
	}

	Vector3f triPlaneNormal = mTrianglePlane.mNormal;

	f32 triPlaneDist = triPlaneNormal.dot(ball.mPosition) - mTrianglePlane.mOffset;

	Vector3f triPlaneOffset = triPlaneNormal * triPlaneDist;
	Vector3f sepVec         = ball.mPosition - triPlaneOffset;

	f32 ballDists[3];
	for (int i = 0; i < 3; i++) {
		f32 edgePlaneDist = sepVec.dot(mEdgePlanes[i].mNormal) - mEdgePlanes[i].mOffset;
		f32 edgeOverlap   = ball.mRadius - (edgePlaneDist < 0.0f ? -edgePlaneDist : edgePlaneDist);
		ballDists[i]      = edgePlaneDist;
	}

	Sys::Edge edge;
	f32 t;

	edge.setStartEnd(*vertTable.getVertex(mVertices[0]), *vertTable.getVertex(mVertices[1]));
	if (ball.intersect(edge, t, intersectPoint) != 0) {
		return true;
	}

	// Iteration 1
	edge.setStartEnd(*vertTable.getVertex(mVertices[1]), *vertTable.getVertex(mVertices[2]));
	if (ball.intersect(edge, t, intersectPoint) != 0) {
		return true;
	}

	// Iteration 2
	edge.setStartEnd(*vertTable.getVertex(mVertices[2]), *vertTable.getVertex(mVertices[0]));
	if (ball.intersect(edge, t, intersectPoint) != 0) {
		return true;
	}

	// check ball center is 'inside' triangle (i.e. directly above or below)
	for (int i = 0; i < 3; i++) {
		if (ballDists[i] > 0.0f) {
			return false;
		}
	}

	// get normal to plane scaled by ball radius??
	Vector3f radNorm = mTrianglePlane.mNormal * ball.mRadius;

	// calc outputs
	intersectPoint = ball.mPosition - radNorm;
	return true;
}

/**
 * @note Address: 0x80417890
 * @note Size: 0x2F8
 */
bool Triangle::intersectHard(Sys::VertexTable& vertTable, Sys::Sphere& ball, Vector3f& intersectPoint)
{
	// check if ball intersects triangle, given a table of its vertices
	// return true if intersects along with intersection point
	// assumes triangle is a surface of an object, positive side of plane of triangle = outside

	f32 ballDists[3]; // distances from ball center to each edge plane
	Sys::Edge edge;   // reusable edge to check intersections
	f32 t;            // dummy variable for intersection check

	// check we're not too high from plane of triangle
	// (if we're below, we're potentially inside the object, so it's fine
	if (mTrianglePlane.calcDist(ball.mPosition) > ball.mRadius) {
		return false;
	}

	// check center of sphere isn't more than its radius away from the edge planes
	for (int i = 0; i < 3; i++) {
		// get distance from center of ball to plane
		f32 edgePlaneDist = mEdgePlanes[i].calcDist(ball.mPosition);
		if (edgePlaneDist > ball.mRadius) { // too far away, can't possibly intersect
			return false;
		}
		// keep track of distances for later
		ballDists[i] = edgePlaneDist;
	}

	// check for intersection with each edge in turn
	edge.setStartEnd(*vertTable.getVertex(mVertices[0]), *vertTable.getVertex(mVertices[1]));
	if (ball.intersect(edge, t, intersectPoint) != 0) {
		return true;
	}

	// Iteration 1
	edge.setStartEnd(*vertTable.getVertex(mVertices[1]), *vertTable.getVertex(mVertices[2]));
	if (ball.intersect(edge, t, intersectPoint) != 0) {
		return true;
	}

	// Iteration 2
	edge.setStartEnd(*vertTable.getVertex(mVertices[2]), *vertTable.getVertex(mVertices[0]));
	if (ball.intersect(edge, t, intersectPoint) != 0) {
		return true;
	}

	// check ball center is 'inside' triangle (i.e. directly above or below)
	for (int i = 0; i < 3; i++) {
		if (ballDists[i] > 0.0f) {
			return false;
		}
	}

	// get normal to plane scaled by ball radius??
	Vector3f triPlaneNormal(mTrianglePlane.mNormal);
	Vector3f radNorm = triPlaneNormal * ball.mRadius;

	// calc outputs
	intersectPoint = ball.mPosition - radNorm;
	return true;
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r6
	stw      r30, 0x38(r1)
	mr       r30, r5
	stw      r29, 0x34(r1)
	mr       r29, r4
	stw      r28, 0x30(r1)
	mr       r28, r3
	lfs      f5, 4(r5)
	lfs      f0, 0x10(r3)
	lfs      f6, 0(r5)
	fmuls    f0, f5, f0
	lfs      f1, 0xc(r3)
	lfs      f7, 8(r5)
	lfs      f2, 0x14(r3)
	fmadds   f1, f6, f1, f0
	lfs      f0, 0x18(r3)
	lfs      f4, 0xc(r5)
	fmadds   f1, f7, f2, f1
	fsubs    f0, f1, f0
	fcmpo    cr0, f0, f4
	ble      lbl_804178FC
	li       r3, 0
	b        lbl_80417B68

lbl_804178FC:
	lfs      f0, 0x20(r28)
	lfs      f2, 0x1c(r28)
	fmuls    f1, f5, f0
	lfs      f3, 0x24(r28)
	lfs      f0, 0x28(r28)
	fmadds   f1, f6, f2, f1
	fmadds   f1, f7, f3, f1
	fsubs    f8, f1, f0
	fcmpo    cr0, f8, f4
	ble      lbl_8041792C
	li       r3, 0
	b        lbl_80417B68

lbl_8041792C:
	lfs      f0, 0x30(r28)
	lfs      f2, 0x2c(r28)
	fmuls    f1, f5, f0
	lfs      f3, 0x34(r28)
	lfs      f0, 0x38(r28)
	stfs     f8, 0xc(r1)
	fmadds   f1, f6, f2, f1
	fmadds   f1, f7, f3, f1
	fsubs    f8, f1, f0
	fcmpo    cr0, f8, f4
	ble      lbl_80417960
	li       r3, 0
	b        lbl_80417B68

lbl_80417960:
	lfs      f0, 0x40(r28)
	lfs      f2, 0x3c(r28)
	fmuls    f1, f5, f0
	lfs      f3, 0x44(r28)
	lfs      f0, 0x48(r28)
	stfs     f8, 0x10(r1)
	fmadds   f1, f6, f2, f1
	fmadds   f1, f7, f3, f1
	fsubs    f8, f1, f0
	fcmpo    cr0, f8, f4
	ble      lbl_80417994
	li       r3, 0
	b        lbl_80417B68

lbl_80417994:
	lwz      r0, 0(r28)
	mr       r3, r30
	lwz      r7, 4(r28)
	addi     r4, r1, 0x18
	mulli    r0, r0, 0xc
	lwz      r9, 0x24(r29)
	stfs     f8, 0x14(r1)
	addi     r5, r1, 8
	add      r8, r9, r0
	lfs      f0, 0(r8)
	mulli    r0, r7, 0xc
	stfs     f0, 0x18(r1)
	add      r7, r9, r0
	lfs      f0, 4(r8)
	stfs     f0, 0x1c(r1)
	lfs      f0, 8(r8)
	stfs     f0, 0x20(r1)
	lfs      f0, 0(r7)
	stfs     f0, 0x24(r1)
	lfs      f0, 4(r7)
	stfs     f0, 0x28(r1)
	lfs      f0, 8(r7)
	stfs     f0, 0x2c(r1)
	bl       "intersect__Q23Sys6SphereFRQ23Sys4EdgeRfR10Vector3<f>"
	clrlwi.  r0, r3, 0x18
	beq      lbl_80417A04
	li       r3, 1
	b        lbl_80417B68

lbl_80417A04:
	lwz      r0, 4(r28)
	mr       r3, r30
	lwz      r7, 8(r28)
	mr       r6, r31
	mulli    r0, r0, 0xc
	lwz      r9, 0x24(r29)
	addi     r4, r1, 0x18
	addi     r5, r1, 8
	add      r8, r9, r0
	lfs      f0, 0(r8)
	mulli    r0, r7, 0xc
	stfs     f0, 0x18(r1)
	add      r7, r9, r0
	lfs      f0, 4(r8)
	stfs     f0, 0x1c(r1)
	lfs      f0, 8(r8)
	stfs     f0, 0x20(r1)
	lfs      f0, 0(r7)
	stfs     f0, 0x24(r1)
	lfs      f0, 4(r7)
	stfs     f0, 0x28(r1)
	lfs      f0, 8(r7)
	stfs     f0, 0x2c(r1)
	bl       "intersect__Q23Sys6SphereFRQ23Sys4EdgeRfR10Vector3<f>"
	clrlwi.  r0, r3, 0x18
	beq      lbl_80417A74
	li       r3, 1
	b        lbl_80417B68

lbl_80417A74:
	lwz      r0, 8(r28)
	mr       r3, r30
	lwz      r7, 0(r28)
	mr       r6, r31
	mulli    r0, r0, 0xc
	lwz      r9, 0x24(r29)
	addi     r4, r1, 0x18
	addi     r5, r1, 8
	add      r8, r9, r0
	lfs      f0, 0(r8)
	mulli    r0, r7, 0xc
	stfs     f0, 0x18(r1)
	add      r7, r9, r0
	lfs      f0, 4(r8)
	stfs     f0, 0x1c(r1)
	lfs      f0, 8(r8)
	stfs     f0, 0x20(r1)
	lfs      f0, 0(r7)
	stfs     f0, 0x24(r1)
	lfs      f0, 4(r7)
	stfs     f0, 0x28(r1)
	lfs      f0, 8(r7)
	stfs     f0, 0x2c(r1)
	bl       "intersect__Q23Sys6SphereFRQ23Sys4EdgeRfR10Vector3<f>"
	clrlwi.  r0, r3, 0x18
	beq      lbl_80417AE4
	li       r3, 1
	b        lbl_80417B68

lbl_80417AE4:
	lfs      f0, lbl_80520308@sda21(r2)
	lfs      f1, 0xc(r1)
	fcmpo    cr0, f1, f0
	ble      lbl_80417AFC
	li       r3, 0
	b        lbl_80417B68

lbl_80417AFC:
	lfs      f1, 0x10(r1)
	fcmpo    cr0, f1, f0
	ble      lbl_80417B10
	li       r3, 0
	b        lbl_80417B68

lbl_80417B10:
	lfs      f1, 0x14(r1)
	fcmpo    cr0, f1, f0
	ble      lbl_80417B24
	li       r3, 0
	b        lbl_80417B68

lbl_80417B24:
	lfs      f6, 0xc(r30)
	li       r3, 1
	lfs      f0, 0xc(r28)
	lfs      f2, 0x10(r28)
	fmuls    f0, f0, f6
	lfs      f1, 0(r30)
	lfs      f4, 0x14(r28)
	fmuls    f2, f2, f6
	lfs      f3, 4(r30)
	fsubs    f0, f1, f0
	lfs      f5, 8(r30)
	fmuls    f1, f4, f6
	fsubs    f2, f3, f2
	stfs     f0, 0(r31)
	fsubs    f0, f5, f1
	stfs     f2, 4(r31)
	stfs     f0, 8(r31)

lbl_80417B68:
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	lwz      r28, 0x30(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/**
 * @note Address: N/A
 * @note Size: 0x14C
 */
bool Triangle::intersectOptimistic(Sys::Sphere&, Vector3f&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80417B88
 * @note Size: 0xEC
 */
bool Triangle::insideXZ(Vector3f& point)
{
	// work out if 'shadow' of a given point 'point' lies inside triangle
	// i.e. if y is adjusted to be on triangle plane, is that point inside triangle?

	// make sure plane of triangle is "pointing up"; if not, false
	// only want to deal with correctly oriented triangles?
	if (mTrianglePlane.mNormal.y <= 0.0f) {
		return false;
	}

	// adjust y such that 'point' lies on the same plane as triangle
	point.y = (mTrianglePlane.mOffset - ((mTrianglePlane.mNormal.x * point.x) + (mTrianglePlane.mNormal.z * point.z)))
	        / mTrianglePlane.mNormal.y;

	// check if point is 'inside' triangle (negative side of each tangent plane), or on an edge
	for (int i = 0; i < 3; ++i) {
		if (mEdgePlanes[i].calcDist(point) > 0.0f) { // wrong side of edge, not inside
			return false;
		}
	}

	// pass all tests, inside triangle
	return true;
}

/**
 * @note Address: 0x80417C74
 * @note Size: 0x4C8
 */
void Triangle::makePlanes(Sys::VertexTable& vertTable)
{
	Vector3f triNormal;
	Vector3f edgeNormal;

	Vector3f vert_A = *vertTable.getVertex(mVertices[0]);
	Vector3f vert_B = *vertTable.getVertex(mVertices[1]);
	Vector3f vert_C = *vertTable.getVertex(mVertices[2]);

	Vector3f BA = vert_B - vert_A;

	triNormal = vert_C - vert_A;
	triNormal.CP(BA);
	triNormal.qNormalise();

	mTrianglePlane.updatePlane(vert_A, triNormal);

	edgeNormal = vert_A - vert_B;
	edgeNormal.CP(triNormal);
	edgeNormal.qNormalise();
	mEdgePlanes[0].updatePlane(vert_A, edgeNormal);

	edgeNormal = vert_B - vert_C;
	edgeNormal.CP(triNormal);
	edgeNormal.qNormalise();

	mEdgePlanes[1].updatePlane(vert_B, edgeNormal);

	edgeNormal = vert_C - vert_A;
	edgeNormal.CP(triNormal);
	edgeNormal.qNormalise();

	mEdgePlanes[2].updatePlane(vert_C, edgeNormal);
}

/**
 * @note Address: 0x8041813C
 * @note Size: 0x40
 */
bool RayIntersectInfo::condition(Sys::Triangle& triangle)
{
	if (mCheckHorizontal) {
		if ((triangle.mTrianglePlane.mNormal.y < 0.5f) && (triangle.mTrianglePlane.mNormal.y > -0.1f)) {
			return true;
		}

		return false;
	}

	return true;
}

/**
 * @note Address: 0x8041817C
 * @note Size: 0x428
 */
void GridDivider::createTriangles(Sys::CreateTriangleArg& triArg)
{
	triArg.mVertices = nullptr;
	triArg.mCount    = 0;

	Triangle* triangles[128];
	Vector3f vertices[128 * 3];
	int count = 0;

	Vector2f diff(triArg.mBoundingSphere.mPosition.x, triArg.mBoundingSphere.mPosition.z);
	diff -= Vector2f(mBoundingBox.mMin.x, mBoundingBox.mMin.z);
	int x = diff.x / mScaleX;
	int z = diff.y / mScaleZ;

	bool inside = (x >= 0) && (z >= 0) && (x < mMaxX) && (z < mMaxZ);
	if (inside) {
		TriIndexList* list = getTriIndexList(x, z);
		for (int i = 0; i < list->getNum(); i++) {
			Triangle* tri  = mTriangleTable->getTriangle(list->mObjects[i]);
			Vector3f vertA = *mVertexTable->getVertex(tri->mVertices[0]);
			Vector3f vertB = *mVertexTable->getVertex(tri->mVertices[1]);
			Vector3f vertC = *mVertexTable->getVertex(tri->mVertices[2]);

			bool isDuplicate = false;
			for (int j = 0; j < count; j++) {
				if (tri == triangles[j]) {
					isDuplicate = true;
				}
			}

			if (!isDuplicate && count < 128) {
				Vector3f normal = tri->mTrianglePlane.mNormal;
				if (normal.y > triArg.mScaleLimit) {
					f32 scale        = triArg.mScale;
					triangles[count] = tri;

					vertices[count * 3]     = vertA + normal * scale;
					vertices[count * 3 + 1] = vertB + normal * scale;
					vertices[count * 3 + 2] = vertC + normal * scale;
					count++;
				}
			}
		}

		triArg.mVertices = new Vector3f[count * 3];
		for (int i = 0; i < count * 3; i++) {
			triArg.mVertices[i] = vertices[i];
		}
		triArg.mCount = count;
	}
}

/**
 * @note Address: 0x804185A4
 * @note Size: 0x1D8
 */
f32 GridDivider::getMinY(Vector3f& inputPoint)
{
	Vector2f localPos(inputPoint.x, inputPoint.z);
	localPos -= Vector2f(mBoundingBox.mMin.x, mBoundingBox.mMin.z);
	Vector2i grid;
	grid.x    = (int)(localPos.x / mScaleX);
	int gridZ = (int)(localPos.y / mScaleZ);
	grid.y    = gridZ;

	bool withinBounds = grid.x >= 0 && grid.y >= 0 && grid.x < mMaxX && grid.y < mMaxZ;
	if (!withinBounds) {
		return 0.0f;
	}

	f32 minY                   = 328000.0f;
	bool foundY                = false;
	TriIndexList& triIndexList = mTriIndexLists[grid.y + grid.x * mMaxZ];
	Vector3f point             = inputPoint;
	int index                  = 0;
	for (int i = triIndexList.getNum(); i > 0; i--, index++) {
		Triangle* triangle = mTriangleTable->getTriangle(triIndexList.getIndex(index));
		if (triangle->insideXZ(point) && minY > point.y) {
			minY   = point.y;
			foundY = true;
		}
	}
	return foundY ? minY : 0.0f;
}

/**
 * @note Address: 0x8041877C
 * @note Size: 0x234
 */
void GridDivider::getCurrTri(Game::CurrTriInfo& triInfo)
{
	f32 inputX = triInfo.mPosition.x;
	f32 inputZ = triInfo.mPosition.z;
	Vector2f localPos(inputX, inputZ);
	localPos -= Vector2f(mBoundingBox.mMin.x, mBoundingBox.mMin.z);
	Vector2i grid;
	grid.x = (int)(localPos.x / mScaleX);
	grid.y = (int)(localPos.y / mScaleZ);

	bool withinBounds = (grid.x >= 0) && (grid.y >= 0) && (grid.x < mMaxX) && (grid.y < mMaxZ);

	if (withinBounds) {
		bool foundValidY = false;

		f32 minY = 328000.0f;
		f32 maxY = -328000.0f;

		f32 inputY                 = triInfo.mPosition.y;
		TriIndexList& triIndexList = mTriIndexLists[grid.y + (grid.x * mMaxZ)];

		Vector3f tempPoint(inputX, inputY, inputZ);

		for (int i = 0; i < triIndexList.getNum(); ++i) {
			Triangle* triangle = mTriangleTable->getTriangle(triIndexList.mObjects[i]);

			if (triangle->insideXZ(tempPoint)) {
				if (minY > tempPoint.y) {
					minY = tempPoint.y;
					if (triInfo.mUpdateOnNewMaxY != 0) {
						foundValidY        = true;
						triInfo.mNormalVec = triangle->mTrianglePlane.mNormal;
						triInfo.mTriangle  = triangle;
					}
				}

				if (tempPoint.y > maxY) {
					maxY = tempPoint.y;
					if (triInfo.mUpdateOnNewMaxY == 0) {
						foundValidY        = true;
						triInfo.mNormalVec = triangle->mTrianglePlane.mNormal;
						triInfo.mTriangle  = triangle;
					}
				}
			}
		}

		if (foundValidY) {
			triInfo.mMaxY = minY;
			triInfo.mMinY = maxY;
		}
	}
}

/**
 * @note Address: 0x804189B0
 * @note Size: 0x230
 */
TriIndexList* GridDivider::findTriLists(Sys::Sphere& ball)
{
	TriIndexList* triList;

	f32 minX;
	f32 minZ;
	f32 worldMaxX;
	f32 worldMaxZ;
	f32 maxX;
	f32 x;
	f32 z;
	f32 radius;
	f32 originX;
	f32 scaleX;
	f32 originZ;
	f32 scaleZ;
	x       = ball.mPosition.x;
	z       = ball.mPosition.z;
	radius  = ball.mRadius;
	originX = mBoundingBox.mMin.x;
	minX    = x - radius;
	minX -= originX;
	scaleX    = mScaleX;
	int x_min = (int)(minX / scaleX);
	minZ      = z - radius;
	originZ   = mBoundingBox.mMin.z;
	minZ -= originZ;
	scaleZ    = mScaleZ;
	int z_min = (int)(minZ / scaleZ);
	worldMaxX = x;
	worldMaxX += radius;
	maxX = worldMaxX;
	maxX -= originX;
	int x_max = (int)(maxX / scaleX);
	worldMaxZ = z;
	worldMaxZ += radius;
	int z_max = (int)((worldMaxZ - originZ) / scaleZ);

	int z_start;
	int x_stop;
	int z_stop;
	int listCtr = 0;

	// bound x_min
	if (x_min < 0) {
		x_min = 0;
	} else {
		if (x_min >= mMaxX) {
			x_min = mMaxX - 1;
		}
	}

	// bound z_min
	if (z_min < 0) {
		z_start = 0;
	} else {
		if (z_min >= mMaxZ) {
			z_start = mMaxZ - 1;
		} else {
			z_start = z_min;
		}
	}

	// bound x_max
	if (x_max < 0) {
		x_stop = 0;
	} else {
		if (x_max >= mMaxX) {
			x_stop = mMaxX - 1;
		} else {
			x_stop = x_max;
		}
	}

	// bound z_max
	if (z_max < 0) {
		z_stop = 0;
	} else {
		if (z_max >= mMaxZ) {
			z_stop = mMaxZ - 1;
		} else {
			z_stop = z_max;
		}
	}

	TriIndexList* outTriList = nullptr;

	for (int x_ctr = x_min; x_ctr <= x_stop; x_ctr++) {
		for (int z_ctr = z_start; z_ctr <= z_stop; z_ctr++) {

			bool withinBounds = ((x_ctr >= 0) && (z_ctr >= 0) && (x_ctr < mMaxX) && (z_ctr < mMaxZ));
			if (withinBounds) {
				if (outTriList) {
					// temp_r4_2 = m_triIndexLists + ((z_ctr + (x_ctr * m_maxZ)) * 0x28);
					triList = &mTriIndexLists[(int)(z_ctr + (x_ctr * mMaxZ))];
					triList->clearRelations();
					outTriList->concat(triList);
					listCtr += 1;
				} else {
					triList = &mTriIndexLists[(int)(z_ctr + (x_ctr * mMaxZ))];
					triList->clearRelations();
					outTriList = triList;
					listCtr += 1;
				}
			}
		}
	}

	if (listCtr > 50) {
		outTriList->calcNextCount();
	}

	return outTriList;
}

/**
 * @note Address: 0x80418BE0
 * @note Size: 0x45C
 */
void GridDivider::create(BoundBox& box, int countX, int countZ, Sys::VertexTable* vertTable, Sys::TriangleTable* triTable)
{
	int usedTris[1024];
	int useCount;

	mVertexTable   = vertTable;
	mTriangleTable = triTable;
	mMaxX          = countX;
	mMaxZ          = countZ;

	int arrayDims  = countX * countZ;
	mTriIndexLists = new TriIndexList[arrayDims];

	mBoundingBox = box;
	mScaleX      = FABS(box.mMax.x - box.mMin.x) / countX;
	mScaleZ      = FABS(box.mMax.z - box.mMin.z) / countZ;

	for (int i = 0; i < countX; i++) {
		for (int j = 0; j < countZ; j++) {
			useCount = 0;
			BoundBox2d bounds;
			bounds.mMin.x = mBoundingBox.mMin.x + i * mScaleX;
			bounds.mMax.x = bounds.mMin.x + mScaleX;

			bounds.mMin.y = mBoundingBox.mMin.z + j * mScaleZ;
			bounds.mMax.y = bounds.mMin.y + mScaleZ;

			for (int k = 0; k < mTriangleTable->mCount; k++) {
				Triangle& triangle = *mTriangleTable->getTriangle(k);
				BoundBox2d triBounds(12800000.0f, 12800000.0f, -12800000.0f, -12800000.0f);

				{
					Vector3f& point = *mVertexTable->getVertex(triangle.mVertices[0]);
					if (triBounds.mMin.x > point.x) {
						triBounds.mMin.x = point.x;
					}
					if (triBounds.mMin.y > point.z) {
						triBounds.mMin.y = point.z;
					}
					if (triBounds.mMax.x < point.x) {
						triBounds.mMax.x = point.x;
					}
					if (triBounds.mMax.y < point.z) {
						triBounds.mMax.y = point.z;
					}
				}
				{
					Vector3f& point = *mVertexTable->getVertex(triangle.mVertices[1]);
					if (triBounds.mMin.x > point.x) {
						triBounds.mMin.x = point.x;
					}
					if (triBounds.mMin.y > point.z) {
						triBounds.mMin.y = point.z;
					}
					if (triBounds.mMax.x < point.x) {
						triBounds.mMax.x = point.x;
					}
					if (triBounds.mMax.y < point.z) {
						triBounds.mMax.y = point.z;
					}
				}
				{
					Vector3f& point = *mVertexTable->getVertex(triangle.mVertices[2]);
					if (triBounds.mMin.x > point.x) {
						triBounds.mMin.x = point.x;
					}
					if (triBounds.mMin.y > point.z) {
						triBounds.mMin.y = point.z;
					}
					if (triBounds.mMax.x < point.x) {
						triBounds.mMax.x = point.x;
					}
					if (triBounds.mMax.y < point.z) {
						triBounds.mMax.y = point.z;
					}
				}

				bool overlapsX;
				if (bounds.mMax.x < triBounds.mMin.x) {
					overlapsX = false;
				} else if (triBounds.mMax.x < bounds.mMin.x) {
					overlapsX = false;
				} else if (bounds.mMin.x <= triBounds.mMin.x && triBounds.mMin.x <= bounds.mMax.x) {
					overlapsX = true;
				} else if (triBounds.mMin.x <= bounds.mMin.x && bounds.mMin.x <= triBounds.mMax.x) {
					overlapsX = true;
				} else {
					overlapsX = false;
				}
				bool intersects;
				if (!overlapsX) {
					intersects = false;
				} else {
					bool overlapsZ;
					if (bounds.mMax.y < triBounds.mMin.y) {
						overlapsZ = false;
					} else if (triBounds.mMax.y < bounds.mMin.y) {
						overlapsZ = false;
					} else if (bounds.mMin.y <= triBounds.mMin.y && triBounds.mMin.y <= bounds.mMax.y) {
						overlapsZ = true;
					} else if (triBounds.mMin.y <= bounds.mMin.y && bounds.mMin.y <= triBounds.mMax.y) {
						overlapsZ = true;
					} else {
						overlapsZ = false;
					}
					if (!overlapsZ) {
						intersects = false;
					} else {
						intersects = true;
					}
				}
				if (intersects && useCount < 1024) {
					usedTris[useCount++] = k;
				}
			}

			TriIndexList* tri = &mTriIndexLists[j + i * mMaxZ];
			if (useCount > 0) {
				tri->alloc(useCount);
				int* index = usedTris;
				for (int k = 0; k < useCount; index++, k++) {
					tri->addOne(*index);
				}
			}
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x6C
 */
void GridDivider::write(Stream& stream)
{
	mVertexTable->write(stream);
	mTriangleTable->write(stream);
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xC0
 */
void GridInfo::write(Stream& stream)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8041919C
 * @note Size: 0x248
 */
void GridDivider::read(Stream& stream)
{
	mVertexTable = new VertexTable;
	mVertexTable->read(stream);

	mTriangleTable = new TriangleTable;
	mTriangleTable->read(stream);

	mBoundingBox.read(stream);

	mMaxX   = stream.readInt();
	mMaxZ   = stream.readInt();
	mScaleX = stream.readFloat();
	mScaleZ = stream.readFloat();

	Vector2i maxVals = Vector2i(mMaxX, mMaxZ);
	int maxLim       = maxVals.x * maxVals.y;
	mTriIndexLists   = new TriIndexList[maxLim];

	mBoundingBox.mMin = mBoundingBox.mMin;
	mBoundingBox.mMax = mBoundingBox.mMax;

	f32 X   = mBoundingBox.mMax.x - mBoundingBox.mMin.x;
	mScaleX = FABS(X) / (f32)maxVals.x;
	f32 Z   = mBoundingBox.mMax.z - mBoundingBox.mMin.z;
	mScaleZ = FABS(Z) / (f32)maxVals.y;

	readIndexList(stream);

	mTriangleTable->createTriangleSphere(*mVertexTable);
};

/**
 * @note Address: 0x80419498
 * @note Size: 0x74
 */
void TriangleTable::createTriangleSphere(Sys::VertexTable& arg0)
{
	for (int i = 0; i < mLimit; i++) {
		mObjects[i].createSphere(arg0);
	}
}

/**
 * @note Address: 0x8041950C
 * @note Size: 0x88
 */
void TriIndexList::constructClone(Sys::TriangleTable& triTable)
{
	alloc(triTable.mCount);
	for (int i = 0; i < triTable.mCount; i++) {
		addOne(i);
	}
}

/**
 * @note Address: 0x80419594
 * @note Size: 0x150
 */
void TriIndexList::getMinMax(VertexTable& vertTable, TriangleTable& triTable, Vector3f& vec1, Vector3f& vec2, f32& min, f32& max)
{
	min = 10000000000.0f;
	max = -10000000000.0f;

	for (int i = 0; i < mCount; i++) {
		Triangle* currTri    = &triTable.mObjects[mObjects[i]];
		Vector3f vertices[3] = {
			vertTable.mObjects[currTri->mVertices[0]],
			vertTable.mObjects[currTri->mVertices[1]],
			vertTable.mObjects[currTri->mVertices[2]],
		};

		for (int j = 0; j < 3; j++) {
			Vector3f relative = vertices[j] - vec2;
			f32 testVal       = relative.x * vec1.x + relative.y * vec1.y + relative.z * vec1.z;

			if (testVal > max) {
				max = testVal;
			}

			if (testVal < min) {
				min = testVal;
			}
		};
	}
}

/**
 * @note Address: 0x804196E4
 * @note Size: 0x294
 */
void TriIndexList::makeCovarianceMatrix(Sys::VertexTable& vertTable, Sys::TriangleTable& triTable, Matrix3f& covarM, Vector3f& vec)
{
	int row;
	int col;
	int k;
	int count  = getNum();
	f32 weight = 1.0f / (3.0f * (f32)count);

	vec = Vector3f(0.0f);
	for (k = 0; k < count; ++k) {
		Triangle* currTri = triTable.getTriangle(mObjects[k]);
		Vector3f* vert_A  = vertTable.getVertex(currTri->mVertices[0]);
		Vector3f* vert_B  = vertTable.getVertex(currTri->mVertices[1]);
		Vector3f* vert_C  = vertTable.getVertex(currTri->mVertices[2]);
		vec               = vec + ((*vert_A + *vert_B) + *vert_C);
	}

	vec = vec * weight;

	for (row = 0; row < 3; row++) {
		for (col = 0; col < 3; col++) {
			f32 sum = 0.0f;
			for (k = 0; k < count; k++) {
				Triangle* currTri = triTable.getTriangle(getIndex(k));
				Vector3f point0   = *vertTable.getVertex(currTri->mVertices[0]);
				Vector3f point1   = *vertTable.getVertex(currTri->mVertices[1]);
				Vector3f point2   = *vertTable.getVertex(currTri->mVertices[2]);
				sum += ((&point0.x)[row] - (&vec.x)[row]) * ((&point0.x)[col] - (&vec.x)[col])
				     + ((&point1.x)[row] - (&vec.x)[row]) * ((&point1.x)[col] - (&vec.x)[col])
				     + ((&point2.x)[row] - (&vec.x)[row]) * ((&point2.x)[col] - (&vec.x)[col]);
			}
			sum *= weight;
			covarM.mMatrix[row][col] = sum;
		}
	}
}

/**
 * @note Address: 0x80419978
 * @note Size: 0x4
 */
void TriIndexList::draw(Graphics&, Sys::VertexTable&, Sys::TriangleTable&, bool)
{
}

/**
 * @note Address: 0x8041997C
 * @note Size: 0x7C
 */
TriangleTable::TriangleTable()
{
}

/**
 * @note Address: N/A
 * @note Size: 0x60
 */
void TriangleTable::findMaxVertexIndex()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80419AE8
 * @note Size: 0x13C
 */
void VertexTable::transform(Matrixf& mat)
{
	for (int i = 0; i < mCount; i++) {
		Vector3f* vertex = &mObjects[i];
		*vertex          = mat.mtxMult(*vertex);
	}

	mBoundBox.mMin = Vector3f(SHORT_FLOAT_MAX);
	mBoundBox.mMax = Vector3f(-SHORT_FLOAT_MAX);

	includeVertices();
}

/**
 * @note Address: 0x80419C24
 * @note Size: 0xD4
 */
void VertexTable::write(Stream& output)
{
	output.textBeginGroup((char*)mName);
	output.textWriteTab(output.mTabCount);
	output.writeInt(mLimit);
	output.textWriteText("\r\n");

	for (int i = 0; i < mLimit; i++) {
		output.textWriteTab(output.mTabCount);
		writeObject(output, mObjects[i]);
		output.textWriteText("# %d/%d\r\n", i, mLimit);
	}
	output.textEndGroup();
}

/**
 * @note Address: 0x80419CF8
 * @note Size: 0x24
 */
void VertexTable::writeObject(Stream& output, Vector3f& vertex)
{
	vertex.write(output);
}

} // namespace Sys
