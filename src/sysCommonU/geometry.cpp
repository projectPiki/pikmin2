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
	// creates a unit vector 'axisVector' that points in direction of tube

	axisVector = mEndPos - mStartPos;

	f32 X   = axisVector.x * axisVector.x;
	f32 Y   = axisVector.y * axisVector.y;
	f32 Z   = axisVector.z * axisVector.z;
	f32 mag = pikmin2_sqrtf(X + Y + Z); // length of tube

	// normalise output vector (so long as it's not just the zero vector)
	if (mag > 0.0f) {
		f32 norm = 1.0f / mag;
		axisVector *= norm;
	}
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
// WIP: https://decomp.me/scratch/8Atgz
// something around the coll_vec definition needs fixing
bool Tube::collide(Sphere& ball, Vector3f& repulsionVec, f32& posRatio)
{
	// checks for collision between tube and sphere 'ball', output is bool, 0 = no collision, 1 = collision
	// also puts 'collision vector' into vec, and dot product between axisVector of tube and
	// vector between bottom of tube and center of sphere into dotprod

	Vector3f diff = mEndPos;
	diff          = diff - mStartPos;
	Vector3f axis = diff;

	f32 lenTube = lenVec(axis);

	// if tube isn't 0-length, normalise axis to unit vector
	if (lenTube > 0.0f) {
		f32 norm = 1.0f / lenTube;
		axis *= norm;
	} else {
		lenTube = 0.0f;
	}

	// if tube doesn't have length, can't collide with anything so just exit
	if (0 == lenTube) {
		// no collision
		return false;
	}

	///////////////// BEGIN REGSWAPS

	Vector3f sep = ball.mPosition - mStartPos;

	// calculate scalar projection of sep onto tube
	f32 scalarProj = axis.dot(sep) / lenTube;

	// calculate perpendicular distance vector between (center of) tube and (center of) ball
	Vector3f perpVec = (diff * scalarProj) + mStartPos - ball.mPosition;

	// get center-to-center distance
	f32 perpDist = lenVec(perpVec);

	// get radius of tube at point of perpendicular distance
	// i.e. at fraction 'scalarProj' along tube, assuming radius changes linearly from one end to the other
	f32 tubeRadius = ((1.0f - scalarProj) * mStartRadius) + (mEndRadius * scalarProj);

	// calc overlap amount, i.e. (amount of "stuff") - (center-to-center distance)
	f32 overlap = (ball.mRadius + tubeRadius) - perpDist;

	///////////////// END OF (MOST) REGSWAPS

	// check we have 0 <= scalarProj <= 1 (ball 'next to' tube) and some overlap
	if ((scalarProj >= 0) && (scalarProj <= 1.0f) && overlap >= 0) {
		repulsionVec = perpVec;
		f32 mag_vec  = normalise(&repulsionVec);

		// scale (unit) repulsion vector by overlap + point away from tube
		repulsionVec = repulsionVec * -overlap;
		// scalar projection goes in posRatio
		posRatio = scalarProj;
		// yes collision
		return true;
	}
	// no collision
	return false;
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stfd     f30, 0x60(r1)
	psq_st   f30, 104(r1), 0, qr0
	stfd     f29, 0x50(r1)
	psq_st   f29, 88(r1), 0, qr0
	stfd     f28, 0x40(r1)
	psq_st   f28, 72(r1), 0, qr0
	stfd     f27, 0x30(r1)
	psq_st   f27, 56(r1), 0, qr0
	stfd     f26, 0x20(r1)
	psq_st   f26, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r3
	mr       r29, r4
	lfs      f2, 0x10(r3)
	mr       r30, r5
	lfs      f0, 4(r3)
	mr       r31, r6
	lfs      f1, 0xc(r3)
	fsubs    f30, f2, f0
	lfs      f0, 0(r3)
	lfs      f2, 0x14(r3)
	fsubs    f31, f1, f0
	lfs      f1, 8(r3)
	fmuls    f0, f30, f30
	fsubs    f29, f2, f1
	fmr      f28, f31
	fmadds   f0, f31, f31, f0
	fmr      f27, f30
	fmr      f26, f29
	fmadds   f1, f29, f29, f0
	bl       pikmin2_sqrtf__Ff
	lfs      f0, lbl_80520308@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80415C18
	lfs      f0, lbl_8052030C@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f28, f28, f0
	fmuls    f27, f27, f0
	fmuls    f26, f26, f0
	b        lbl_80415C1C

lbl_80415C18:
	fmr      f1, f0

lbl_80415C1C:
	lfs      f0, lbl_80520308@sda21(r2)
	fcmpu    cr0, f0, f1
	bne      lbl_80415C30
	li       r3, 0
	b        lbl_80415D84

lbl_80415C30:
	lfs      f4, 4(r29)
	lfs      f2, 4(r28)
	lfs      f6, 0(r29)
	fsubs    f0, f4, f2
	lfs      f5, 0(r28)
	lfs      f9, 8(r29)
	fsubs    f3, f6, f5
	lfs      f8, 8(r28)
	fmuls    f0, f27, f0
	fsubs    f7, f9, f8
	fmadds   f0, f28, f3, f0
	fmadds   f0, f26, f7, f0
	fdivs    f27, f0, f1
	fmuls    f1, f30, f27
	fmuls    f3, f31, f27
	fmuls    f0, f29, f27
	fadds    f2, f1, f2
	fadds    f3, f3, f5
	fadds    f1, f0, f8
	fsubs    f26, f2, f4
	fsubs    f29, f3, f6
	fsubs    f30, f1, f9
	fmuls    f0, f26, f26
	fmadds   f0, f29, f29, f0
	fmadds   f1, f30, f30, f0
	bl       pikmin2_sqrtf__Ff
	lfs      f5, lbl_8052030C@sda21(r2)
	lfs      f2, 0x1c(r28)
	fsubs    f4, f5, f27
	lfs      f0, lbl_80520308@sda21(r2)
	fmuls    f2, f2, f27
	lfs      f3, 0x18(r28)
	lfs      f6, 0xc(r29)
	fcmpo    cr0, f27, f0
	fmadds   f2, f4, f3, f2
	fadds    f2, f6, f2
	fsubs    f28, f2, f1
	cror     2, 1, 2
	bne      lbl_80415D80
	fcmpo    cr0, f27, f5
	cror     2, 0, 2
	bne      lbl_80415D80
	fcmpo    cr0, f28, f0
	cror     2, 1, 2
	bne      lbl_80415D80
	stfs     f29, 0(r30)
	stfs     f26, 4(r30)
	stfs     f30, 8(r30)
	lfs      f1, 0(r30)
	lfs      f0, 4(r30)
	fmuls    f1, f1, f1
	lfs      f2, 8(r30)
	fmuls    f0, f0, f0
	fmuls    f2, f2, f2
	fadds    f0, f1, f0
	fadds    f1, f2, f0
	bl       pikmin2_sqrtf__Ff
	lfs      f0, lbl_80520308@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80415D4C
	lfs      f2, lbl_8052030C@sda21(r2)
	lfs      f0, 0(r30)
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	stfs     f0, 0(r30)
	lfs      f0, 4(r30)
	fmuls    f0, f0, f1
	stfs     f0, 4(r30)
	lfs      f0, 8(r30)
	fmuls    f0, f0, f1
	stfs     f0, 8(r30)

lbl_80415D4C:
	fneg     f3, f28
	lfs      f0, 0(r30)
	lfs      f1, 4(r30)
	li       r3, 1
	lfs      f2, 8(r30)
	fmuls    f0, f0, f3
	fmuls    f1, f1, f3
	fmuls    f2, f2, f3
	stfs     f0, 0(r30)
	stfs     f1, 4(r30)
	stfs     f2, 8(r30)
	stfs     f27, 0(r31)
	b        lbl_80415D84

lbl_80415D80:
	li       r3, 0

lbl_80415D84:
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	psq_l    f29, 88(r1), 0, qr0
	lfd      f29, 0x50(r1)
	psq_l    f28, 72(r1), 0, qr0
	lfd      f28, 0x40(r1)
	psq_l    f27, 56(r1), 0, qr0
	lfd      f27, 0x30(r1)
	psq_l    f26, 40(r1), 0, qr0
	lfd      f26, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x84(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/**
 * @note Address: 0x80415DD4
 * @note Size: 0xF4
 */
f32 Tube::getPosRatio(const Vector3f& point)
{
	// returns scalar projection of separation (between start of tube and input 'point')
	// onto axis of tube, i.e. closest perpendicular distance between tube and 'point' is
	// fraction 'PosRatio' along tube, i.e.
	//    => 0 if 'next to' start, 1 if 'next to' end
	//    => < 0 if 'before' start, > 1 if 'beyond' end

	// get axis vector and normalise to unit vector
	Vector3f axis(mEndPos.x - mStartPos.x, mEndPos.y - mStartPos.y, mEndPos.z - mStartPos.z);
	f32 mag = normalise(&axis);

	// get separation vector
	Vector3f sep = point - mStartPos;

	// calculate scalar projection of sep onto tube
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
	// check if a sphere intersects with a second sphere 'ball'
	// return true if yes

	// calculate center-to-center distance (squared?)
	Vector3f diff(ball.mPosition.x - mPosition.x, ball.mPosition.y - mPosition.y, ball.mPosition.z - mPosition.z);
	f32 sepSqr = diff.x * diff.x + diff.y * diff.y + diff.z * diff.z;

	// add radii to get total "material" between their centers
	f32 sumRadii = ball.mRadius + mRadius;

	// calculate magnitude of repulsion (negative if overlapping)
	// I think the lack of square roots here is just for speed - same outcome if we took square roots
	f32 repulsion = -(sumRadii * sumRadii - sepSqr);

	// if there's repulsion, return true
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
	f32 sep      = normalise(&repulsionVec);

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
	// calculate if sphere intersects with edge edge
	// return true if intersecting
	// also put a parameter into t that says how far along the edge it's intersecting
	// t = 0 if intersecting at start; = 1 if at end; 0 < t < edgeLen if in the middle

	// check start point of edge
	Vector3f startSep(edge.mStartPos.x - mPosition.x, edge.mStartPos.y - mPosition.y, edge.mStartPos.z - mPosition.z);
	f32 startDist = lenVec(startSep);
	if (startDist <= mRadius) { // start is intersecting
		t = 0.0f;
		return true;
	}

	// check end point of edge
	Vector3f endSep(edge.mEndPos.x - mPosition.x, edge.mEndPos.y - mPosition.y, edge.mEndPos.z - mPosition.z);
	f32 endDist = lenVec(endSep);
	if (endDist <= mRadius) { //  end is intersecting
		t = 1.0f;
		return true;
	}

	// create unit edge vector (pointing along edge) + get length of edge
	Vector3f edgeVec(edge.mEndPos.x - edge.mStartPos.x, edge.mEndPos.y - edge.mStartPos.y, edge.mEndPos.z - edge.mStartPos.z);
	f32 edgeLen = normalise(&edgeVec);

	// negative of startSep, will be used to calculate perp dist
	Vector3f sep(mPosition.x - edge.mStartPos.x, mPosition.y - edge.mStartPos.y, mPosition.z - edge.mStartPos.z);

	// set t = scalar projection of sep onto edge
	t = sep.dot(edgeVec);

	// if we're before edge (t < 0) or past edge (t > edgeLen), no intersection
	if ((t < 0.0f) || (t > edgeLen)) {
		return false;
	}

	// get vector projection of sep onto edge
	Vector3f projVec = edgeVec * t;

	// calculate perpendicular distance vector from ball to edge
	Vector3f perpVec(sep.x - projVec.x, sep.y - projVec.y, sep.z - projVec.z);

	// check if perp distance to edge is less than or equal to radius of sphere
	f32 perpDist = lenVec(perpVec);
	if (perpDist <= mRadius) { // if so, intersects
		return true;           // t is then parametrised 'location' of intersection along edge, sort of
	}
	return false;
}

/**
 * @note Address: 0x80416290
 * @note Size: 0x28C
 */
bool Sphere::intersect(Edge& edge, f32& t, Vector3f& intersectPoint)
{
	// calculate if sphere intersects with edge 'edge'
	// return true if intersecting
	// also put a parameter into t that says how far along the edge it's intersecting
	// t = 0 if intersecting at start; = 1 if at end; 0 < t < edgeLen if in the middle
	// also put closest edge point to sphere into intersectPoint

	// check start point of edge
	Vector3f startSep(edge.mStartPos.x - mPosition.x, edge.mStartPos.y - mPosition.y, edge.mStartPos.z - mPosition.z);
	f32 startDist = lenVec(startSep);
	if (startDist <= mRadius) { // start is intersecting
		t              = 0.0f;
		intersectPoint = edge.mStartPos;
		return true;
	}

	// check end point of edge
	Vector3f endSep(edge.mEndPos.x - mPosition.x, edge.mEndPos.y - mPosition.y, edge.mEndPos.z - mPosition.z);
	f32 endDist = lenVec(endSep);
	if (endDist <= mRadius) { // end is intersecting
		t              = 1.0f;
		intersectPoint = edge.mEndPos;
		return true;
	}

	// create unit edge vector (pointing along edge) + get length of edge
	Vector3f edgeVec(edge.mEndPos.x - edge.mStartPos.x, edge.mEndPos.y - edge.mStartPos.y, edge.mEndPos.z - edge.mStartPos.z);
	f32 edgeLen = _normalise(&edgeVec);

	// negative of startSep, will be used to calculate perp dist
	Vector3f sep(intersectPoint.x - edge.mStartPos.x, intersectPoint.y - edge.mStartPos.y, intersectPoint.z - edge.mStartPos.z);

	// set t = scalar projection of sep onto edge
	t = sep.dot(edgeVec);

	// if we're before edge (t < 0) or past edge (t > edgeLen), no intersection
	if ((t < 0.0f) || (t > edgeLen)) {
		return false;
	}

	// get vector projection of sep onto edge
	Vector3f projVec(edgeVec.x * t, edgeVec.y * t, edgeVec.z * t);

	// calculate perpendicular distance vector from ball to edge
	Vector3f perpVec(sep.x - projVec.x, sep.y - projVec.y, sep.z - projVec.z);

	// check if perp distance to edge is less than or equal to radius of sphere
	f32 perpDist = lenVec(perpVec);
	if (perpDist <= mRadius) { // if so, intersects
		f32 edgeDist = t * edgeLen;
		projVec      = Vector3f(edgeVec.x * edgeDist, edgeVec.y * edgeDist, edgeVec.z * edgeDist);
		// get point that is a frac 't' along edge
		intersectPoint = Vector3f(edge.mStartPos.x + projVec.x, edge.mStartPos.y + projVec.y, edge.mStartPos.z + projVec.z);
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
	// return true if intersecting
	// also put a parameter into t that says how far along the edge it's intersecting
	// repulsionVec = (unit) repulsion vector away from edge
	// strength = amount of overlap between edge and sphere = strength of repulsion

	// create unit edge vector (pointing along edge) + get length of edge
	Vector3f edgeVec(edge.mEndPos.x - edge.mStartPos.x, edge.mEndPos.y - edge.mStartPos.y, edge.mEndPos.z - edge.mStartPos.z);
	f32 edgeLen = normalise(&edgeVec);

	// calculate vector from start of edge to sphere
	Vector3f startSep(mPosition.x - edge.mStartPos.x, mPosition.y - edge.mStartPos.y, mPosition.z - edge.mStartPos.z);

	// get scalar projection of startSep onto edge
	t = startSep.dot(edgeVec);

	// if we're 'before' edge (t < 0) or 'beyond' edge (t > edgeLen), just check end points
	if ((t < 0.0f) || (t > edgeLen)) {

		// Check start of edge
		// negative of startSep, will be used to calculate perp dist
		Vector3f sep_0(edge.mStartPos.x - mPosition.x, edge.mStartPos.y - mPosition.y, edge.mStartPos.z - mPosition.z);
		if (lenVec(sep_0) <= mRadius) {                // start is intersecting
			t            = 0.0f;                       // intersection is at start
			repulsionVec = mPosition - edge.mStartPos; // pointing from start to ball

			// normalise repulsionVec + calculate strength from 'overlap'
			f32 sepDist = normalise(&repulsionVec);
			strength    = mRadius - sepDist;

			// if the length is 0, make sure output vector is 0
			if (0.0f == sepDist) {
				repulsionVec = Vector3f(0);
			}

			return true; // yes intersection
		}

		// Check end of edge
		// negative of 'endSep', will be used to calculate perp dist
		Vector3f sep_1(edge.mEndPos.x - mPosition.x, edge.mEndPos.y - mPosition.y, edge.mEndPos.z - mPosition.z);

		// if we're too close to end point, need to do some overlap calculations
		if (lenVec(sep_1) <= mRadius) {              // end is intersecting
			t            = 1.0f;                     // intersection is at end
			repulsionVec = mPosition - edge.mEndPos; // pointing from end to ball

			// normalise repulsionVec + calculate strength from 'overlap'
			f32 sepDist = normalise(&repulsionVec);
			strength    = mRadius - sepDist;

			// if the length is 0, make sure output vector is 0
			if (0.0f == sepDist) {
				repulsionVec = Vector3f(0);
			}

			return true; // yes intersection
		}
		return false; // too far before or after edge, no overlap
	}

	// if sphere is "next to" edge, need to calculate perp dist

	// get vector projection of sep onto edge
	Vector3f projVec = edgeVec * t;

	// calculate perp distance + unit perp vector from ball to edge
	Vector3f perpVec(startSep.x - projVec.x, startSep.y - projVec.y, startSep.z - projVec.z);
	f32 perpDist = normalise(&perpVec);

	// check if we have overlap
	if (perpDist < mRadius) {           // yes overlap
		if (0.0f == perpDist) {         // if sphere is centered ON the edge
			repulsionVec = Vector3f(0); // can't really determine repulsion vector if we're ON the edge
			strength     = mRadius;     // "whole radius" of overlap
			return true;                // yes intersection
		}

		// sphere not centered on edge
		strength     = mRadius - perpDist; // calc strength from overlap
		repulsionVec = perpVec;            // unit vector directly away from edge at closest point to sphere
		return true;                       // yes intersection
	}

	return false; // not close enough to edge, no intersection
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
Triangle::Triangle() { mCode.mContents = (bool)0; }

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
// bool Triangle::intersect(Sys::VertexTable&, BoundBox2d&)
// {
// 	// UNUSED FUNCTION
// }

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
	f32 edgeLen = lenVec(edgeVec);

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
	f32 edgeLen = lenVec(edgeVec);

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
	lfs      f8, 4(r5)
	lfs      f4, 0x10(r3)
	lfs      f10, 0(r5)
	fmuls    f3, f8, f4
	lfs      f9, 0xc(r3)
	lfs      f12, 8(r5)
	lfs      f11, 0x14(r3)
	fmadds   f2, f10, f9, f3
	lfs      f1, 0x18(r3)
	lfs      f0, 0xc(r5)
	fmadds   f2, f12, f11, f2
	fsubs    f1, f2, f1
	fabs     f1, f1
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8041760C
	li       r3, 0
	b        lbl_80417870

lbl_8041760C:
	fmadds   f1, f9, f10, f3
	lwz      r0, 0(r28)
	lwz      r4, 4(r28)
	mr       r3, r30
	lfs      f0, 0x18(r28)
	mulli    r0, r0, 0xc
	fmadds   f1, f11, f12, f1
	lwz      r5, 0x24(r29)
	mulli    r4, r4, 0xc
	lfs      f5, 0x20(r28)
	add      r8, r5, r0
	lfs      f6, 0x1c(r28)
	fsubs    f2, f1, f0
	lfs      f7, 0x24(r28)
	lfs      f1, 0x28(r28)
	add      r7, r5, r4
	lfs      f0, 0(r8)
	addi     r4, r1, 0x18
	fmuls    f3, f4, f2
	addi     r5, r1, 8
	fmuls    f4, f9, f2
	fmuls    f2, f11, f2
	fsubs    f9, f8, f3
	fsubs    f8, f10, f4
	fsubs    f10, f12, f2
	fmuls    f4, f9, f5
	lfs      f5, 0x30(r28)
	fmadds   f3, f8, f6, f4
	lfs      f6, 0x2c(r28)
	fmuls    f4, f9, f5
	lfs      f5, 0x40(r28)
	fmadds   f2, f10, f7, f3
	lfs      f7, 0x34(r28)
	fmadds   f3, f8, f6, f4
	lfs      f6, 0x3c(r28)
	fmuls    f4, f9, f5
	fsubs    f5, f2, f1
	fmadds   f2, f10, f7, f3
	lfs      f1, 0x38(r28)
	lfs      f7, 0x44(r28)
	fmadds   f3, f8, f6, f4
	stfs     f5, 0xc(r1)
	fsubs    f5, f2, f1
	lfs      f1, 0x48(r28)
	fmadds   f2, f10, f7, f3
	stfs     f0, 0x18(r1)
	lfs      f0, 4(r8)
	stfs     f5, 0x10(r1)
	fsubs    f5, f2, f1
	stfs     f0, 0x1c(r1)
	lfs      f0, 8(r8)
	stfs     f5, 0x14(r1)
	stfs     f0, 0x20(r1)
	lfs      f0, 0(r7)
	stfs     f0, 0x24(r1)
	lfs      f0, 4(r7)
	stfs     f0, 0x28(r1)
	lfs      f0, 8(r7)
	stfs     f0, 0x2c(r1)
	bl       "intersect__Q23Sys6SphereFRQ23Sys4EdgeRfR10Vector3<f>"
	clrlwi.  r0, r3, 0x18
	beq      lbl_8041770C
	li       r3, 1
	b        lbl_80417870

lbl_8041770C:
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
	beq      lbl_8041777C
	li       r3, 1
	b        lbl_80417870

lbl_8041777C:
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
	beq      lbl_804177EC
	li       r3, 1
	b        lbl_80417870

lbl_804177EC:
	lfs      f0, lbl_80520308@sda21(r2)
	lfs      f1, 0xc(r1)
	fcmpo    cr0, f1, f0
	ble      lbl_80417804
	li       r3, 0
	b        lbl_80417870

lbl_80417804:
	lfs      f1, 0x10(r1)
	fcmpo    cr0, f1, f0
	ble      lbl_80417818
	li       r3, 0
	b        lbl_80417870

lbl_80417818:
	lfs      f1, 0x14(r1)
	fcmpo    cr0, f1, f0
	ble      lbl_8041782C
	li       r3, 0
	b        lbl_80417870

lbl_8041782C:
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

lbl_80417870:
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
	Vector3f* triNormalPtr = &triNormal;
	Vector3f edgeNormal;
	Vector3f* edgeNormalPtr = &edgeNormal;

	Vector3f vert_A = *vertTable.getVertex(mVertices[0]);
	Vector3f vert_B = *vertTable.getVertex(mVertices[1]);
	Vector3f vert_C = *vertTable.getVertex(mVertices[2]);

	Vector3f BA = vert_B - vert_A;
	Vector3f CA = vert_C - vert_A;

	// TRIANGLE PLANE
	// get unit normal to triangle plane
	*triNormalPtr     = cross(CA, BA);
	f32 len_triNormal = pikmin2_sqrtf(triNormal.x * triNormal.x + triNormal.y * triNormal.y + triNormal.z * triNormal.z);
	if (len_triNormal > 0.0f) {
		f32 norm_triNormal = 1.0f / len_triNormal;
		triNormal.x *= norm_triNormal;
		triNormal.y *= norm_triNormal;
		triNormal.z *= norm_triNormal;
	}

	// define trianglePlane using unit normal and point A
	Vector3f triPlaneVec   = triNormal;
	mTrianglePlane.mNormal = triPlaneVec;
	mTrianglePlane.mOffset
	    = mTrianglePlane.mNormal.x * vert_A.x + mTrianglePlane.mNormal.y * vert_A.y + mTrianglePlane.mNormal.z * vert_A.z;

	// EDGE PLANES
	// AB
	// get unit normal to AB edge plane
	Vector3f AB         = vert_A - vert_B;
	*edgeNormalPtr      = cross(AB, triNormal);
	f32 len_edgeNormal0 = pikmin2_sqrtf(edgeNormal.x * edgeNormal.x + edgeNormal.y * edgeNormal.y + edgeNormal.z * edgeNormal.z);
	if (len_edgeNormal0 > 0.0f) {
		f32 norm_edgeNormal0 = 1.0f / len_edgeNormal0;
		edgeNormal.x *= norm_edgeNormal0;
		edgeNormal.y *= norm_edgeNormal0;
		edgeNormal.z *= norm_edgeNormal0;
	}
	// define AB edge plane using unit normal and point A
	mEdgePlanes[0].mNormal = edgeNormal;
	mEdgePlanes[0].mOffset
	    = mEdgePlanes[0].mNormal.x * vert_A.x + mEdgePlanes[0].mNormal.y * vert_A.y + mEdgePlanes[0].mNormal.z * vert_A.z;

	// BC
	// get unit normal to BC edge plane
	Vector3f BC         = vert_B - vert_C;
	*edgeNormalPtr      = cross(BC, triNormal);
	f32 len_edgeNormal1 = pikmin2_sqrtf(edgeNormal.x * edgeNormal.x + edgeNormal.y * edgeNormal.y + edgeNormal.z * edgeNormal.z);
	if (len_edgeNormal1 > 0.0f) {
		f32 norm_edgeNormal1 = 1.0f / len_edgeNormal1;
		edgeNormal.x *= norm_edgeNormal1;
		edgeNormal.y *= norm_edgeNormal1;
		edgeNormal.z *= norm_edgeNormal1;
	}

	// define BC edge plane using unit normal and point B
	mEdgePlanes[1].mNormal = edgeNormal;
	mEdgePlanes[1].mOffset
	    = mEdgePlanes[1].mNormal.x * vert_B.x + mEdgePlanes[1].mNormal.y * vert_B.y + mEdgePlanes[1].mNormal.z * vert_B.z;

	// CA
	// get unit normal to CA edge plane
	*edgeNormalPtr      = cross(CA, triNormal);
	f32 len_edgeNormal2 = pikmin2_sqrtf(edgeNormal.x * edgeNormal.x + edgeNormal.y * edgeNormal.y + edgeNormal.z * edgeNormal.z);
	if (len_edgeNormal2 > 0.0f) {
		f32 norm_edgeNormal2 = 1.0f / len_edgeNormal2;
		edgeNormal.x *= norm_edgeNormal2;
		edgeNormal.y *= norm_edgeNormal2;
		edgeNormal.z *= norm_edgeNormal2;
	}

	// define CA edge plane using unit normal and point C
	mEdgePlanes[2].mNormal = edgeNormal;
	mEdgePlanes[2].mOffset
	    = mEdgePlanes[2].mNormal.x * vert_C.x + mEdgePlanes[2].mNormal.y * vert_C.y + mEdgePlanes[2].mNormal.z * vert_C.z;
	/*
	stwu     r1, -0x140(r1)
	mflr     r0
	stw      r0, 0x144(r1)
	stfd     f31, 0x130(r1)
	psq_st   f31, 312(r1), 0, qr0
	stfd     f30, 0x120(r1)
	psq_st   f30, 296(r1), 0, qr0
	stfd     f29, 0x110(r1)
	psq_st   f29, 280(r1), 0, qr0
	stfd     f28, 0x100(r1)
	psq_st   f28, 264(r1), 0, qr0
	stfd     f27, 0xf0(r1)
	psq_st   f27, 248(r1), 0, qr0
	stfd     f26, 0xe0(r1)
	psq_st   f26, 232(r1), 0, qr0
	stfd     f25, 0xd0(r1)
	psq_st   f25, 216(r1), 0, qr0
	stfd     f24, 0xc0(r1)
	psq_st   f24, 200(r1), 0, qr0
	stfd     f23, 0xb0(r1)
	psq_st   f23, 184(r1), 0, qr0
	stfd     f22, 0xa0(r1)
	psq_st   f22, 168(r1), 0, qr0
	stfd     f21, 0x90(r1)
	psq_st   f21, 152(r1), 0, qr0
	stfd     f20, 0x80(r1)
	psq_st   f20, 136(r1), 0, qr0
	stfd     f19, 0x70(r1)
	psq_st   f19, 120(r1), 0, qr0
	stfd     f18, 0x60(r1)
	psq_st   f18, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	mr       r31, r3
	lwz      r5, 0x24(r4)
	lwz      r4, 0(r3)
	lwz      r3, 4(r3)
	lwz      r0, 8(r31)
	mulli    r4, r4, 0xc
	add      r4, r5, r4
	mulli    r3, r3, 0xc
	lfs      f31, 0(r4)
	lfs      f30, 4(r4)
	lfs      f29, 8(r4)
	add      r3, r5, r3
	mulli    r0, r0, 0xc
	lfs      f27, 4(r3)
	lfs      f26, 8(r3)
	lfs      f28, 0(r3)
	fsubs    f4, f27, f30
	add      r3, r5, r0
	lfs      f25, 0(r3)
	fsubs    f5, f26, f29
	lfs      f23, 8(r3)
	fsubs    f3, f28, f31
	fsubs    f18, f25, f31
	lfs      f24, 4(r3)
	fsubs    f20, f23, f29
	fsubs    f19, f24, f30
	fmuls    f2, f18, f5
	stfs     f18, 0x44(r1)
	fmuls    f0, f20, f4
	fmuls    f1, f19, f3
	stfs     f19, 0x48(r1)
	fmsubs   f2, f20, f3, f2
	fmsubs   f3, f19, f5, f0
	stfs     f20, 0x4c(r1)
	fmsubs   f4, f18, f4, f1
	fmuls    f0, f2, f2
	stfs     f2, 0x48(r1)
	fmuls    f1, f3, f3
	fmuls    f2, f4, f4
	stfs     f3, 0x44(r1)
	fadds    f0, f1, f0
	stfs     f4, 0x4c(r1)
	fadds    f1, f2, f0
	bl       pikmin2_sqrtf__Ff
	lfs      f0, lbl_80520308@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80417DDC
	lfs      f0, lbl_8052030C@sda21(r2)
	lfs      f2, 0x44(r1)
	fdivs    f3, f0, f1
	lfs      f1, 0x48(r1)
	lfs      f0, 0x4c(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x44(r1)
	stfs     f1, 0x48(r1)
	stfs     f0, 0x4c(r1)

lbl_80417DDC:
	lwz      r0, 0x44(r1)
	fsubs    f3, f31, f28
	lwz      r3, 0x48(r1)
	fsubs    f5, f29, f26
	stw      r0, 0x2c(r1)
	fsubs    f6, f30, f27
	lwz      r0, 0x4c(r1)
	stw      r3, 0x30(r1)
	lfs      f0, 0x2c(r1)
	stw      r0, 0x34(r1)
	lfs      f2, 0x30(r1)
	stfs     f0, 0xc(r31)
	lfs      f21, 0x4c(r1)
	lfs      f22, 0x48(r1)
	lfs      f7, 0x44(r1)
	fmuls    f0, f3, f21
	fmuls    f1, f5, f22
	stfs     f2, 0x10(r31)
	lfs      f4, 0x34(r1)
	fmuls    f2, f6, f7
	fmsubs   f0, f5, f7, f0
	stfs     f4, 0x14(r31)
	fmsubs   f4, f6, f21, f1
	lfs      f7, 0x10(r31)
	fmsubs   f10, f3, f22, f2
	lfs      f8, 0xc(r31)
	fmuls    f1, f0, f0
	fmuls    f7, f7, f30
	fmuls    f2, f4, f4
	lfs      f9, 0x14(r31)
	stfs     f3, 0x38(r1)
	fmuls    f3, f10, f10
	fmadds   f7, f8, f31, f7
	fadds    f1, f2, f1
	stfs     f6, 0x3c(r1)
	fmadds   f2, f9, f29, f7
	stfs     f5, 0x40(r1)
	fadds    f1, f3, f1
	stfs     f2, 0x18(r31)
	stfs     f4, 0x38(r1)
	stfs     f0, 0x3c(r1)
	stfs     f10, 0x40(r1)
	bl       pikmin2_sqrtf__Ff
	lfs      f0, lbl_80520308@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80417EC0
	lfs      f0, lbl_8052030C@sda21(r2)
	lfs      f2, 0x38(r1)
	fdivs    f3, f0, f1
	lfs      f1, 0x3c(r1)
	lfs      f0, 0x40(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x38(r1)
	stfs     f1, 0x3c(r1)
	stfs     f0, 0x40(r1)

lbl_80417EC0:
	lwz      r0, 0x38(r1)
	fsubs    f6, f28, f25
	lwz      r3, 0x3c(r1)
	fsubs    f4, f26, f23
	stw      r0, 0x20(r1)
	fsubs    f5, f27, f24
	lwz      r0, 0x40(r1)
	stw      r3, 0x24(r1)
	fmuls    f0, f4, f22
	lfs      f7, 0x20(r1)
	fmuls    f2, f6, f21
	stw      r0, 0x28(r1)
	lfs      f1, 0x24(r1)
	fmsubs   f3, f5, f21, f0
	stfs     f7, 0x1c(r31)
	lfs      f0, 0x28(r1)
	stfs     f1, 0x20(r31)
	fmuls    f1, f3, f3
	lfs      f7, 0x44(r1)
	stfs     f0, 0x24(r31)
	fmsubs   f8, f4, f7, f2
	lfs      f2, 0x20(r31)
	fmuls    f0, f5, f7
	lfs      f7, 0x1c(r31)
	fmuls    f2, f2, f30
	stfs     f6, 0x38(r1)
	fmsubs   f9, f6, f22, f0
	lfs      f6, 0x24(r31)
	fmuls    f0, f8, f8
	stfs     f5, 0x3c(r1)
	fmadds   f5, f7, f31, f2
	stfs     f4, 0x40(r1)
	fmuls    f2, f9, f9
	fadds    f0, f1, f0
	stfs     f3, 0x38(r1)
	fmadds   f3, f6, f29, f5
	stfs     f8, 0x3c(r1)
	fadds    f1, f2, f0
	stfs     f3, 0x28(r31)
	stfs     f9, 0x40(r1)
	bl       pikmin2_sqrtf__Ff
	lfs      f0, lbl_80520308@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80417F9C
	lfs      f0, lbl_8052030C@sda21(r2)
	lfs      f2, 0x38(r1)
	fdivs    f3, f0, f1
	lfs      f1, 0x3c(r1)
	lfs      f0, 0x40(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x38(r1)
	stfs     f1, 0x3c(r1)
	stfs     f0, 0x40(r1)

lbl_80417F9C:
	lwz      r0, 0x38(r1)
	fmuls    f0, f20, f22
	lwz      r3, 0x3c(r1)
	fmuls    f2, f18, f21
	stw      r0, 0x14(r1)
	lwz      r0, 0x40(r1)
	fmsubs   f3, f19, f21, f0
	stw      r3, 0x18(r1)
	lfs      f0, 0x14(r1)
	stw      r0, 0x1c(r1)
	fmuls    f1, f3, f3
	lfs      f4, 0x18(r1)
	stfs     f0, 0x2c(r31)
	lfs      f0, 0x1c(r1)
	stfs     f4, 0x30(r31)
	lfs      f4, 0x44(r1)
	stfs     f0, 0x34(r31)
	fmsubs   f6, f20, f4, f2
	lfs      f2, 0x30(r31)
	fmuls    f0, f19, f4
	lfs      f4, 0x2c(r31)
	fmuls    f2, f2, f27
	stfs     f18, 0x38(r1)
	fmsubs   f7, f18, f22, f0
	lfs      f5, 0x34(r31)
	fmuls    f0, f6, f6
	stfs     f19, 0x3c(r1)
	fmadds   f4, f4, f28, f2
	stfs     f20, 0x40(r1)
	fmuls    f2, f7, f7
	fadds    f0, f1, f0
	stfs     f3, 0x38(r1)
	fmadds   f3, f5, f26, f4
	stfs     f6, 0x3c(r1)
	fadds    f1, f2, f0
	stfs     f3, 0x38(r31)
	stfs     f7, 0x40(r1)
	bl       pikmin2_sqrtf__Ff
	lfs      f0, lbl_80520308@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8041806C
	lfs      f0, lbl_8052030C@sda21(r2)
	lfs      f2, 0x38(r1)
	fdivs    f3, f0, f1
	lfs      f1, 0x3c(r1)
	lfs      f0, 0x40(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x38(r1)
	stfs     f1, 0x3c(r1)
	stfs     f0, 0x40(r1)

lbl_8041806C:
	lwz      r0, 0x38(r1)
	lwz      r3, 0x3c(r1)
	stw      r0, 8(r1)
	lwz      r0, 0x40(r1)
	stw      r3, 0xc(r1)
	lfs      f0, 8(r1)
	stw      r0, 0x10(r1)
	lfs      f1, 0xc(r1)
	stfs     f0, 0x3c(r31)
	lfs      f0, 0x10(r1)
	stfs     f1, 0x40(r31)
	stfs     f0, 0x44(r31)
	lfs      f0, 0x40(r31)
	lfs      f1, 0x3c(r31)
	fmuls    f0, f0, f24
	lfs      f2, 0x44(r31)
	fmadds   f0, f1, f25, f0
	fmadds   f0, f2, f23, f0
	stfs     f0, 0x48(r31)
	psq_l    f31, 312(r1), 0, qr0
	lfd      f31, 0x130(r1)
	psq_l    f30, 296(r1), 0, qr0
	lfd      f30, 0x120(r1)
	psq_l    f29, 280(r1), 0, qr0
	lfd      f29, 0x110(r1)
	psq_l    f28, 264(r1), 0, qr0
	lfd      f28, 0x100(r1)
	psq_l    f27, 248(r1), 0, qr0
	lfd      f27, 0xf0(r1)
	psq_l    f26, 232(r1), 0, qr0
	lfd      f26, 0xe0(r1)
	psq_l    f25, 216(r1), 0, qr0
	lfd      f25, 0xd0(r1)
	psq_l    f24, 200(r1), 0, qr0
	lfd      f24, 0xc0(r1)
	psq_l    f23, 184(r1), 0, qr0
	lfd      f23, 0xb0(r1)
	psq_l    f22, 168(r1), 0, qr0
	lfd      f22, 0xa0(r1)
	psq_l    f21, 152(r1), 0, qr0
	lfd      f21, 0x90(r1)
	psq_l    f20, 136(r1), 0, qr0
	lfd      f20, 0x80(r1)
	psq_l    f19, 120(r1), 0, qr0
	lfd      f19, 0x70(r1)
	psq_l    f18, 104(r1), 0, qr0
	lfd      f18, 0x60(r1)
	lwz      r0, 0x144(r1)
	lwz      r31, 0x5c(r1)
	mtlr     r0
	addi     r1, r1, 0x140
	blr
	*/
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
	// Initialize output arguments
	triArg.mCount    = 0;
	triArg.mVertices = nullptr;

	Vector3f verticesBuffer[128 * 3]; // Max 128 triangles, 3 vertices each
	int triangleCount = 0;

	// Calculate grid indices based on input bounding sphere
	float inputX   = triArg.mBoundingSphere.mPosition.x;
	float inputZ   = triArg.mBoundingSphere.mPosition.z;
	int gridXIndex = static_cast<int>((inputX - mBoundingBox.mMin.x) / mScaleX);
	int gridZIndex = static_cast<int>((inputZ - mBoundingBox.mMin.z) / mScaleZ);

	// Check if the calculated indices are within bounds
	bool indicesInBounds = (gridXIndex >= 0) && (gridZIndex >= 0) && (gridXIndex < mMaxX) && (gridZIndex < mMaxZ);

	if (indicesInBounds) {
		Triangle* currentTriangle;
		TriIndexList& triIndexList = mTriIndexLists[gridZIndex + (gridXIndex * mMaxZ)];
		Triangle* firstTriangle    = mTriangleTable->getTriangle(0);

		for (int i = 0; i < triIndexList.getNum(); ++i) {
			currentTriangle  = mTriangleTable->getTriangle(triIndexList.mObjects[i]);
			Vector3f vertexA = *mVertexTable->getVertex(currentTriangle->mVertices[0]);
			Vector3f vertexB = *mVertexTable->getVertex(currentTriangle->mVertices[1]);
			Vector3f vertexC = *mVertexTable->getVertex(currentTriangle->mVertices[2]);

			// Check if the triangle is already processed
			bool isDuplicate = false;
			for (int j = 0; j < triangleCount; ++j) {
				if (currentTriangle == (firstTriangle + j * 4)) {
					isDuplicate = true;
					break;
				}
			}

			// Process the triangle if it's not a duplicate and if within the triangle limit
			if (!isDuplicate && triangleCount < 128) {
				float normalY = currentTriangle->mTrianglePlane.mNormal.y;

				if (normalY > triArg.mScaleLimit) {
					float scaleFactor     = triArg.mScale;
					Vector3f offsetVector = currentTriangle->mTrianglePlane.mNormal * scaleFactor;

					verticesBuffer[triangleCount * 3]     = vertexA + offsetVector;
					verticesBuffer[triangleCount * 3 + 1] = vertexB + offsetVector;
					verticesBuffer[triangleCount * 3 + 2] = vertexC + offsetVector;

					firstTriangle[triangleCount * 4] = *currentTriangle; // Copy current triangle
					++triangleCount;
				}
			}
		}

		// Allocate and copy vertices to the output argument
		int totalVertices = triangleCount * 3;
		triArg.mVertices  = new Vector3f[totalVertices];
		for (int i = 0; i < totalVertices; ++i) {
			triArg.mVertices[i] = verticesBuffer[i];
		}
		triArg.mCount = triangleCount;
	}

	/*
	stwu     r1, -0x1440(r1)
	mflr     r0
	stw      r0, 0x1444(r1)
	li       r0, 0x1438
	stfd     f31, 0x1430(r1)
	psq_stx  f31, r1, r0, 0, qr0
	stmw     r26, 0x1418(r1)
	li       r0, 0
	mr       r31, r3
	stw      r0, 0x18(r4)
	mr       r28, r4
	lis      r4, "__ct__10Vector3<f>Fv"@ha
	addi     r3, r1, 0x208
	stw      r0, 0x1c(r28)
	addi     r4, r4, "__ct__10Vector3<f>Fv"@l
	li       r5, 0
	li       r6, 0xc
	li       r7, 0x180
	bl       __construct_array
	lfs      f2, 0(r28)
	li       r29, 0
	lfs      f1, 0x2c(r31)
	li       r3, 0
	lfs      f3, 8(r28)
	lfs      f0, 0x34(r31)
	fsubs    f2, f2, f1
	lfs      f1, 0x44(r31)
	fsubs    f3, f3, f0
	lfs      f0, 0x48(r31)
	fdivs    f1, f2, f1
	fdivs    f0, f3, f0
	fctiwz   f1, f1
	fctiwz   f0, f0
	stfd     f1, 0x1408(r1)
	lwz      r4, 0x140c(r1)
	stfd     f0, 0x1410(r1)
	cmpwi    r4, 0
	lwz      r9, 0x1414(r1)
	blt      lbl_8041823C
	cmpwi    r9, 0
	blt      lbl_8041823C
	lwz      r0, 0x20(r31)
	cmpw     r4, r0
	bge      lbl_8041823C
	lwz      r0, 0x24(r31)
	cmpw     r9, r0
	bge      lbl_8041823C
	li       r3, 1

lbl_8041823C:
	clrlwi.  r0, r3, 0x18
	beq      lbl_80418584
	lwz      r3, 0x24(r31)
	addi     r0, r1, 8
	addi     r30, r1, 0x208
	lwz      r8, 0x28(r31)
	mullw    r3, r4, r3
	mr       r5, r0
	mr       r6, r30
	li       r7, 0
	li       r4, 0
	add      r3, r9, r3
	mulli    r3, r3, 0x28
	add      r12, r8, r3
	b        lbl_804183A4

lbl_80418278:
	lwz      r9, 0x24(r12)
	mr       r3, r0
	lwz      r11, 0x1c(r31)
	li       r8, 0
	lwzx     r10, r9, r4
	lwz      r9, 0x18(r31)
	mulli    r10, r10, 0x60
	lwz      r11, 0x24(r11)
	lwz      r26, 0x24(r9)
	add      r27, r11, r10
	lwz      r11, 0(r27)
	lwz      r10, 4(r27)
	lwz      r9, 8(r27)
	mulli    r11, r11, 0xc
	add      r11, r26, r11
	mulli    r10, r10, 0xc
	lfs      f1, 0(r11)
	lfs      f3, 4(r11)
	lfs      f4, 8(r11)
	add      r10, r26, r10
	mulli    r9, r9, 0xc
	lfs      f5, 0(r10)
	lfs      f6, 4(r10)
	lfs      f7, 8(r10)
	add      r9, r26, r9
	lfs      f8, 0(r9)
	lfs      f9, 4(r9)
	lfs      f10, 8(r9)
	mtctr    r29
	cmpwi    r29, 0
	ble      lbl_8041830C

lbl_804182F4:
	lwz      r9, 0(r3)
	cmplw    r27, r9
	bne      lbl_80418304
	li       r8, 1

lbl_80418304:
	addi     r3, r3, 4
	bdnz     lbl_804182F4

lbl_8041830C:
	clrlwi.  r3, r8, 0x18
	bne      lbl_8041839C
	cmpwi    r29, 0x80
	bge      lbl_8041839C
	lfs      f11, 0x10(r27)
	lfs      f0, 0x14(r28)
	lfs      f2, 0xc(r27)
	fcmpo    cr0, f11, f0
	lfs      f0, 0x14(r27)
	ble      lbl_8041839C
	lfs      f31, 0x10(r28)
	addi     r29, r29, 1
	stw      r27, 0(r5)
	addi     r5, r5, 4
	fmuls    f13, f2, f31
	fmuls    f12, f11, f31
	fmuls    f11, f0, f31
	fadds    f2, f1, f13
	fadds    f1, f3, f12
	fadds    f0, f4, f11
	stfs     f2, 0(r6)
	fadds    f5, f5, f13
	fadds    f4, f6, f12
	stfs     f1, 4(r6)
	fadds    f3, f7, f11
	fadds    f2, f8, f13
	stfs     f0, 8(r6)
	fadds    f1, f9, f12
	fadds    f0, f10, f11
	stfs     f5, 0xc(r6)
	stfs     f4, 0x10(r6)
	stfs     f3, 0x14(r6)
	stfs     f2, 0x18(r6)
	stfs     f1, 0x1c(r6)
	stfs     f0, 0x20(r6)
	addi     r6, r6, 0x24

lbl_8041839C:
	addi     r4, r4, 4
	addi     r7, r7, 1

lbl_804183A4:
	lwz      r3, 0x1c(r12)
	cmpw     r7, r3
	blt      lbl_80418278
	mulli    r31, r29, 3
	mulli    r3, r31, 0xc
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, "__ct__10Vector3<f>Fv"@ha
	mr       r7, r31
	addi     r4, r4, "__ct__10Vector3<f>Fv"@l
	li       r5, 0
	li       r6, 0xc
	bl       __construct_new_array
	cmpwi    r31, 0
	stw      r3, 0x18(r28)
	li       r3, 0
	ble      lbl_80418580
	cmpwi    r31, 8
	addi     r4, r31, -8
	ble      lbl_80418538
	addi     r0, r4, 7
	li       r5, 0
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r4, 0
	ble      lbl_80418538

lbl_8041840C:
	lwz      r0, 0x18(r28)
	addi     r12, r5, 0xc
	lfs      f0, 0(r30)
	addi     r11, r5, 0x18
	add      r4, r0, r5
	addi     r10, r5, 0x24
	stfs     f0, 0(r4)
	addi     r9, r5, 0x30
	addi     r8, r5, 0x3c
	addi     r7, r5, 0x48
	lfs      f0, 4(r30)
	addi     r6, r5, 0x54
	addi     r5, r5, 0x60
	addi     r3, r3, 8
	stfs     f0, 4(r4)
	lfs      f0, 8(r30)
	stfs     f0, 8(r4)
	lwz      r0, 0x18(r28)
	lfs      f0, 0xc(r30)
	add      r12, r0, r12
	stfs     f0, 0(r12)
	lfs      f0, 0x10(r30)
	stfs     f0, 4(r12)
	lfs      f0, 0x14(r30)
	stfs     f0, 8(r12)
	lwz      r0, 0x18(r28)
	lfs      f0, 0x18(r30)
	add      r11, r0, r11
	stfs     f0, 0(r11)
	lfs      f0, 0x1c(r30)
	stfs     f0, 4(r11)
	lfs      f0, 0x20(r30)
	stfs     f0, 8(r11)
	lwz      r0, 0x18(r28)
	lfs      f0, 0x24(r30)
	add      r10, r0, r10
	stfs     f0, 0(r10)
	lfs      f0, 0x28(r30)
	stfs     f0, 4(r10)
	lfs      f0, 0x2c(r30)
	stfs     f0, 8(r10)
	lwz      r0, 0x18(r28)
	lfs      f0, 0x30(r30)
	add      r9, r0, r9
	stfs     f0, 0(r9)
	lfs      f0, 0x34(r30)
	stfs     f0, 4(r9)
	lfs      f0, 0x38(r30)
	stfs     f0, 8(r9)
	lwz      r0, 0x18(r28)
	lfs      f0, 0x3c(r30)
	add      r8, r0, r8
	stfs     f0, 0(r8)
	lfs      f0, 0x40(r30)
	stfs     f0, 4(r8)
	lfs      f0, 0x44(r30)
	stfs     f0, 8(r8)
	lwz      r0, 0x18(r28)
	lfs      f0, 0x48(r30)
	add      r7, r0, r7
	stfs     f0, 0(r7)
	lfs      f0, 0x4c(r30)
	stfs     f0, 4(r7)
	lfs      f0, 0x50(r30)
	stfs     f0, 8(r7)
	lwz      r0, 0x18(r28)
	lfs      f0, 0x54(r30)
	add      r6, r0, r6
	stfs     f0, 0(r6)
	lfs      f0, 0x58(r30)
	stfs     f0, 4(r6)
	lfs      f0, 0x5c(r30)
	addi     r30, r30, 0x60
	stfs     f0, 8(r6)
	bdnz     lbl_8041840C

lbl_80418538:
	mulli    r5, r3, 0xc
	addi     r4, r1, 0x208
	subf     r0, r3, r31
	add      r4, r4, r5
	mtctr    r0
	cmpw     r3, r31
	bge      lbl_80418580

lbl_80418554:
	lwz      r0, 0x18(r28)
	lfs      f0, 0(r4)
	add      r3, r0, r5
	addi     r5, r5, 0xc
	stfs     f0, 0(r3)
	lfs      f0, 4(r4)
	stfs     f0, 4(r3)
	lfs      f0, 8(r4)
	addi     r4, r4, 0xc
	stfs     f0, 8(r3)
	bdnz     lbl_80418554

lbl_80418580:
	stw      r29, 0x1c(r28)

lbl_80418584:
	li       r0, 0x1438
	psq_lx   f31, r1, r0, 0, qr0
	lfd      f31, 0x1430(r1)
	lmw      r26, 0x1418(r1)
	lwz      r0, 0x1444(r1)
	mtlr     r0
	addi     r1, r1, 0x1440
	blr
	*/
}

/**
 * @note Address: 0x804185A4
 * @note Size: 0x1D8
 */
f32 GridDivider::getMinY(Vector3f& inputPoint)
{
	// Calculate grid indices based on the input point
	float inputX   = inputPoint.x;
	float inputZ   = inputPoint.z;
	int gridXIndex = static_cast<int>((inputX - mBoundingBox.mMin.x) / mScaleX);
	int gridZIndex = static_cast<int>((inputZ - mBoundingBox.mMin.z) / mScaleZ);

	// Check if the calculated indices are within bounds
	bool withinBounds = (gridXIndex >= 0) && (gridZIndex >= 0) && (gridXIndex < mMaxX) && (gridZIndex < mMaxZ);

	if (!withinBounds) {
		return 0.0f;
	}

	float minY                 = 328000.0f;
	bool foundY                = false;
	TriIndexList& triIndexList = mTriIndexLists[gridZIndex + (gridXIndex * mMaxZ)];

	for (int i = 0; i < triIndexList.getNum(); ++i) {
		Triangle* triangle = mTriangleTable->getTriangle(triIndexList.mObjects[i]);
		float normalY      = triangle->mTrianglePlane.mNormal.y;

		if (normalY <= 0.0f) {
			continue; // Skip triangles with non-positive normal Y component
		}

		// Calculate potential Y value based on the plane equation
		float potentialY = (triangle->mTrianglePlane.mOffset - (triangle->mTrianglePlane.mNormal.x * inputX)
		                    - (triangle->mTrianglePlane.mNormal.z * inputZ))
		                 / normalY;

		// Check if the point is inside the triangle
		bool isInsideTriangle = true;
		for (int j = 0; j < 3; ++j) {
			const Plane& edgePlane = triangle->mEdgePlanes[j];

			if ((inputX * edgePlane.mNormal.x + potentialY * edgePlane.mNormal.y + inputZ * edgePlane.mNormal.z) - edgePlane.mOffset
			    > 0.0f) {
				isInsideTriangle = false;
				break;
			}
		}

		// Update minY if the point is inside the triangle and potentialY is valid
		if (isInsideTriangle && potentialY < minY) {
			minY   = potentialY;
			foundY = true;
		}
	}

	return foundY ? minY : 0.0f;

	/*
	stwu     r1, -0x20(r1)
	li       r5, 0
	lfs      f9, 0(r4)
	lfs      f1, 0x2c(r3)
	lfs      f10, 8(r4)
	fsubs    f2, f9, f1
	lfs      f0, 0x34(r3)
	lfs      f1, 0x44(r3)
	fsubs    f3, f10, f0
	lfs      f0, 0x48(r3)
	fdivs    f1, f2, f1
	fdivs    f0, f3, f0
	fctiwz   f1, f1
	fctiwz   f0, f0
	stfd     f1, 8(r1)
	lwz      r6, 0xc(r1)
	stfd     f0, 0x10(r1)
	cmpwi    r6, 0
	lwz      r8, 0x14(r1)
	blt      lbl_80418618
	cmpwi    r8, 0
	blt      lbl_80418618
	lwz      r0, 0x20(r3)
	cmpw     r6, r0
	bge      lbl_80418618
	lwz      r0, 0x24(r3)
	cmpw     r8, r0
	bge      lbl_80418618
	li       r5, 1

lbl_80418618:
	clrlwi.  r0, r5, 0x18
	bne      lbl_80418628
	lfs      f1, lbl_80520308@sda21(r2)
	b        lbl_80418774

lbl_80418628:
	lwz      r0, 0x24(r3)
	li       r9, 0
	lwz      r5, 0x28(r3)
	li       r7, 0
	mullw    r0, r6, r0
	lfs      f1, lbl_80520328@sda21(r2)
	lfs      f6, 4(r4)
	lfs      f8, lbl_80520308@sda21(r2)
	add      r0, r8, r0
	mulli    r0, r0, 0x28
	add      r6, r5, r0
	lwz      r0, 0x1c(r6)
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_80418764

lbl_80418664:
	lwz      r4, 0x24(r6)
	lwz      r5, 0x1c(r3)
	lwzx     r0, r4, r7
	lwz      r4, 0x24(r5)
	mulli    r0, r0, 0x60
	add      r4, r4, r0
	lfs      f11, 0x10(r4)
	fcmpo    cr0, f11, f8
	cror     2, 0, 2
	bne      lbl_80418694
	li       r0, 0
	b        lbl_80418744

lbl_80418694:
	lfs      f0, 0x14(r4)
	li       r0, 0
	lfs      f2, 0xc(r4)
	fmuls    f0, f0, f10
	lfs      f7, 0x18(r4)
	lfs      f3, 0x20(r4)
	lfs      f4, 0x1c(r4)
	fmadds   f6, f2, f9, f0
	lfs      f5, 0x24(r4)
	lfs      f2, 0x28(r4)
	lfs      f0, lbl_80520308@sda21(r2)
	fsubs    f6, f7, f6
	fdivs    f6, f6, f11
	fmuls    f3, f6, f3
	fmadds   f3, f9, f4, f3
	fmadds   f3, f10, f5, f3
	fsubs    f2, f3, f2
	fcmpo    cr0, f2, f0
	ble      lbl_804186E4
	b        lbl_80418744

lbl_804186E4:
	lfs      f3, 0x30(r4)
	lfs      f4, 0x2c(r4)
	fmuls    f3, f6, f3
	lfs      f5, 0x34(r4)
	lfs      f2, 0x38(r4)
	fmadds   f3, f9, f4, f3
	fmadds   f3, f10, f5, f3
	fsubs    f2, f3, f2
	fcmpo    cr0, f2, f0
	ble      lbl_80418710
	b        lbl_80418744

lbl_80418710:
	addi     r4, r4, 0x20
	lfs      f3, 0x20(r4)
	lfs      f4, 0x1c(r4)
	fmuls    f3, f6, f3
	lfs      f5, 0x24(r4)
	lfs      f2, 0x28(r4)
	fmadds   f3, f9, f4, f3
	fmadds   f3, f10, f5, f3
	fsubs    f2, f3, f2
	fcmpo    cr0, f2, f0
	ble      lbl_80418740
	b        lbl_80418744

lbl_80418740:
	li       r0, 1

lbl_80418744:
	clrlwi.  r0, r0, 0x18
	beq      lbl_8041875C
	fcmpo    cr0, f1, f6
	ble      lbl_8041875C
	fmr      f1, f6
	li       r9, 1

lbl_8041875C:
	addi     r7, r7, 4
	bdnz     lbl_80418664

lbl_80418764:
	clrlwi.  r0, r9, 0x18
	beq      lbl_80418770
	b        lbl_80418774

lbl_80418770:
	lfs      f1, lbl_80520308@sda21(r2)

lbl_80418774:
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x8041877C
 * @note Size: 0x234
 */
void GridDivider::getCurrTri(Game::CurrTriInfo& triInfo)
{
	// Calculate grid indices based on the input position
	float inputX   = triInfo.mPosition.x;
	float inputZ   = triInfo.mPosition.z;
	int gridXIndex = static_cast<int>((inputX - mBoundingBox.mMin.x) / mScaleX);
	int gridZIndex = static_cast<int>((inputZ - mBoundingBox.mMin.z) / mScaleZ);

	// Check if the calculated indices are within bounds
	bool withinBounds = (gridXIndex >= 0) && (gridZIndex >= 0) && (gridXIndex < mMaxX) && (gridZIndex < mMaxZ);

	if (withinBounds) {
		bool foundValidY = false;

		float minY = 328000.0f;
		float maxY = -328000.0f;

		float inputY               = triInfo.mPosition.y;
		TriIndexList& triIndexList = mTriIndexLists[gridZIndex + (gridXIndex * mMaxZ)];

		for (int i = 0; i < triIndexList.getNum(); ++i) {
			Triangle* triangle = mTriangleTable->getTriangle(triIndexList.mObjects[i]);
			float normalY      = triangle->mTrianglePlane.mNormal.y;

			Vector3f tempPoint(inputX, inputY, inputZ);
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

	/*
	stwu     r1, -0x20(r1)
	li       r5, 0
	lfs      f0, 0(r4)
	lfs      f3, 0x2c(r3)
	lfs      f1, 8(r4)
	fsubs    f4, f0, f3
	lfs      f2, 0x34(r3)
	lfs      f3, 0x44(r3)
	fsubs    f5, f1, f2
	lfs      f2, 0x48(r3)
	fdivs    f3, f4, f3
	fdivs    f2, f5, f2
	fctiwz   f3, f3
	fctiwz   f2, f2
	stfd     f3, 8(r1)
	lwz      r6, 0xc(r1)
	stfd     f2, 0x10(r1)
	cmpwi    r6, 0
	lwz      r7, 0x14(r1)
	blt      lbl_804187F0
	cmpwi    r7, 0
	blt      lbl_804187F0
	lwz      r0, 0x20(r3)
	cmpw     r6, r0
	bge      lbl_804187F0
	lwz      r0, 0x24(r3)
	cmpw     r7, r0
	bge      lbl_804187F0
	li       r5, 1

lbl_804187F0:
	clrlwi.  r0, r5, 0x18
	beq      lbl_804189A8
	lwz      r0, 0x24(r3)
	li       r9, 0
	lwz      r5, 0x28(r3)
	li       r10, 0
	mullw    r0, r6, r0
	lfs      f11, lbl_80520328@sda21(r2)
	lfs      f12, lbl_8052032C@sda21(r2)
	li       r8, 0
	lfs      f7, 4(r4)
	lfs      f9, lbl_80520308@sda21(r2)
	add      r0, r7, r0
	mulli    r0, r0, 0x28
	add      r7, r5, r0
	b        lbl_8041898C

lbl_80418830:
	lwz      r5, 0x24(r7)
	lwz      r6, 0x1c(r3)
	lwzx     r0, r5, r8
	lwz      r5, 0x24(r6)
	mulli    r0, r0, 0x60
	add      r5, r5, r0
	lfs      f10, 0x10(r5)
	fcmpo    cr0, f10, f9
	cror     2, 0, 2
	bne      lbl_80418860
	li       r0, 0
	b        lbl_8041890C

lbl_80418860:
	lfs      f2, 0x14(r5)
	li       r0, 0
	lfs      f3, 0xc(r5)
	fmuls    f2, f2, f1
	lfs      f8, 0x18(r5)
	lfs      f4, 0x20(r5)
	lfs      f5, 0x1c(r5)
	fmadds   f7, f3, f0, f2
	lfs      f6, 0x24(r5)
	lfs      f3, 0x28(r5)
	lfs      f2, lbl_80520308@sda21(r2)
	fsubs    f7, f8, f7
	fdivs    f7, f7, f10
	fmuls    f4, f7, f4
	fmadds   f4, f0, f5, f4
	fmadds   f4, f1, f6, f4
	fsubs    f3, f4, f3
	fcmpo    cr0, f3, f2
	ble      lbl_804188B0
	b        lbl_8041890C

lbl_804188B0:
	lfs      f4, 0x30(r5)
	lfs      f5, 0x2c(r5)
	fmuls    f4, f7, f4
	lfs      f6, 0x34(r5)
	lfs      f3, 0x38(r5)
	fmadds   f4, f0, f5, f4
	fmadds   f4, f1, f6, f4
	fsubs    f3, f4, f3
	fcmpo    cr0, f3, f2
	ble      lbl_804188DC
	b        lbl_8041890C

lbl_804188DC:
	lfs      f4, 0x40(r5)
	lfs      f5, 0x3c(r5)
	fmuls    f4, f7, f4
	lfs      f6, 0x44(r5)
	lfs      f3, 0x48(r5)
	fmadds   f4, f0, f5, f4
	fmadds   f4, f1, f6, f4
	fsubs    f3, f4, f3
	fcmpo    cr0, f3, f2
	ble      lbl_80418908
	b        lbl_8041890C

lbl_80418908:
	li       r0, 1

lbl_8041890C:
	clrlwi.  r0, r0, 0x18
	beq      lbl_80418984
	fcmpo    cr0, f11, f7
	ble      lbl_8041894C
	lbz      r0, 0xc(r4)
	fmr      f11, f7
	cmplwi   r0, 0
	beq      lbl_8041894C
	lfs      f2, 0xc(r5)
	li       r9, 1
	stfs     f2, 0x20(r4)
	lfs      f2, 0x10(r5)
	stfs     f2, 0x24(r4)
	lfs      f2, 0x14(r5)
	stfs     f2, 0x28(r4)
	stw      r5, 0x14(r4)

lbl_8041894C:
	fcmpo    cr0, f7, f12
	ble      lbl_80418984
	lbz      r0, 0xc(r4)
	fmr      f12, f7
	cmplwi   r0, 0
	bne      lbl_80418984
	lfs      f2, 0xc(r5)
	li       r9, 1
	stfs     f2, 0x20(r4)
	lfs      f2, 0x10(r5)
	stfs     f2, 0x24(r4)
	lfs      f2, 0x14(r5)
	stfs     f2, 0x28(r4)
	stw      r5, 0x14(r4)

lbl_80418984:
	addi     r8, r8, 4
	addi     r10, r10, 1

lbl_8041898C:
	lwz      r0, 0x1c(r7)
	cmpw     r10, r0
	blt      lbl_80418830
	clrlwi.  r0, r9, 0x18
	beq      lbl_804189A8
	stfs     f11, 0x18(r4)
	stfs     f12, 0x1c(r4)

lbl_804189A8:
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x804189B0
 * @note Size: 0x230
 */
TriIndexList* GridDivider::findTriLists(Sys::Sphere& ball)
{
	int listCtr = 0;
	TriIndexList* triList;

	f32 x_in = ball.mPosition.x;
	f32 z_in = ball.mPosition.z;

	int x_min = (int)(((x_in - ball.mRadius) - mBoundingBox.mMin.x) / mScaleX);
	int z_min = (int)(((z_in - ball.mRadius) - mBoundingBox.mMin.z) / mScaleZ);
	int x_max = (int)(((x_in + ball.mRadius) - mBoundingBox.mMin.x) / mScaleX);
	int z_max = (int)(((z_in + ball.mRadius) - mBoundingBox.mMin.z) / mScaleZ);

	int x_stop;  // 30
	int z_start; // 31
	int z_stop;  // 29

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
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stmw     r24, 0x30(r1)
	mr       r24, r3
	li       r28, 0
	lfs      f1, 0(r4)
	lfs      f4, 0xc(r4)
	lfs      f3, 8(r4)
	fsubs    f0, f1, f4
	lfs      f5, 0x2c(r3)
	fadds    f2, f1, f4
	lfs      f6, 0x44(r3)
	fsubs    f1, f3, f4
	lfs      f7, 0x34(r3)
	fsubs    f0, f0, f5
	lfs      f8, 0x48(r3)
	fadds    f4, f3, f4
	fsubs    f1, f1, f7
	fdivs    f3, f0, f6
	fsubs    f5, f2, f5
	fdivs    f2, f1, f8
	fsubs    f0, f4, f7
	fdivs    f1, f5, f6
	fdivs    f0, f0, f8
	fctiwz   f3, f3
	fctiwz   f2, f2
	fctiwz   f1, f1
	stfd     f3, 8(r1)
	fctiwz   f0, f0
	lwz      r0, 0xc(r1)
	stfd     f2, 0x10(r1)
	cmpwi    r0, 0
	stfd     f1, 0x18(r1)
	lwz      r4, 0x14(r1)
	stfd     f0, 0x20(r1)
	lwz      r5, 0x1c(r1)
	lwz      r6, 0x24(r1)
	bge      lbl_80418A54
	li       r0, 0
	b        lbl_80418A64

lbl_80418A54:
	lwz      r3, 0x20(r24)
	cmpw     r0, r3
	blt      lbl_80418A64
	addi     r0, r3, -1

lbl_80418A64:
	cmpwi    r4, 0
	bge      lbl_80418A74
	li       r31, 0
	b        lbl_80418A8C

lbl_80418A74:
	lwz      r3, 0x24(r24)
	cmpw     r4, r3
	blt      lbl_80418A88
	addi     r31, r3, -1
	b        lbl_80418A8C

lbl_80418A88:
	mr       r31, r4

lbl_80418A8C:
	cmpwi    r5, 0
	bge      lbl_80418A9C
	li       r30, 0
	b        lbl_80418AB4

lbl_80418A9C:
	lwz      r3, 0x20(r24)
	cmpw     r5, r3
	blt      lbl_80418AB0
	addi     r30, r3, -1
	b        lbl_80418AB4

lbl_80418AB0:
	mr       r30, r5

lbl_80418AB4:
	cmpwi    r6, 0
	bge      lbl_80418AC4
	li       r29, 0
	b        lbl_80418ADC

lbl_80418AC4:
	lwz      r3, 0x24(r24)
	cmpw     r6, r3
	blt      lbl_80418AD8
	addi     r29, r3, -1
	b        lbl_80418ADC

lbl_80418AD8:
	mr       r29, r6

lbl_80418ADC:
	mr       r26, r0
	li       r27, 0
	b        lbl_80418BB0

lbl_80418AE8:
	mr       r25, r31
	b        lbl_80418BA4

lbl_80418AF0:
	cmpwi    r26, 0
	li       r3, 0
	blt      lbl_80418B20
	cmpwi    r25, 0
	blt      lbl_80418B20
	lwz      r0, 0x20(r24)
	cmpw     r26, r0
	bge      lbl_80418B20
	lwz      r0, 0x24(r24)
	cmpw     r25, r0
	bge      lbl_80418B20
	li       r3, 1

lbl_80418B20:
	clrlwi.  r0, r3, 0x18
	beq      lbl_80418BA0
	cmplwi   r27, 0
	beq      lbl_80418B6C
	lwz      r4, 0x24(r24)
	li       r0, 0
	lwz      r5, 0x28(r24)
	mr       r3, r27
	mullw    r4, r26, r4
	add      r4, r25, r4
	mulli    r4, r4, 0x28
	add      r4, r5, r4
	stw      r0, 0x10(r4)
	stw      r0, 0xc(r4)
	stw      r0, 8(r4)
	stw      r0, 4(r4)
	bl       concat__5CNodeFP5CNode
	addi     r28, r28, 1
	b        lbl_80418BA0

lbl_80418B6C:
	lwz      r3, 0x24(r24)
	li       r0, 0
	lwz      r4, 0x28(r24)
	addi     r28, r28, 1
	mullw    r3, r26, r3
	add      r3, r25, r3
	mulli    r3, r3, 0x28
	add      r3, r4, r3
	stw      r0, 0x10(r3)
	mr       r27, r3
	stw      r0, 0xc(r3)
	stw      r0, 8(r3)
	stw      r0, 4(r3)

lbl_80418BA0:
	addi     r25, r25, 1

lbl_80418BA4:
	cmpw     r25, r29
	ble      lbl_80418AF0
	addi     r26, r26, 1

lbl_80418BB0:
	cmpw     r26, r30
	ble      lbl_80418AE8
	cmpwi    r28, 0x32
	ble      lbl_80418BC8
	mr       r3, r27
	bl       calcNextCount__5CNodeFv

lbl_80418BC8:
	mr       r3, r27
	lmw      r24, 0x30(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/**
 * @note Address: 0x80418BE0
 * @note Size: 0x45C
 */
void GridDivider::create(BoundBox& box, int countX, int countZ, Sys::VertexTable* vertTable, Sys::TriangleTable* triTable)
{
	int arrayDims  = countX * countZ;
	mTriIndexLists = new TriIndexList[arrayDims];

	mBoundingBox = box;
	mScaleX      = FABS(box.mMax.x - box.mMin.x) / countX;
	mScaleZ      = FABS(box.mMax.z - box.mMin.z) / countZ;

	for (int i = 0; i < countX; i++) {
		for (int j = 0; j < countZ; j++) { }
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x1080(r1)
	  mflr      r0
	  stw       r0, 0x1084(r1)
	  li        r0, 0x1078
	  stfd      f31, 0x1070(r1)
	  vpkuhum   v31, v1, v0
	  li        r0, 0x1068
	  stfd      f30, 0x1060(r1)
	  vpkuhum   v30, v1, v0
	  li        r0, 0x1058
	  stfd      f29, 0x1050(r1)
	  vpkuhum   v29, v1, v0
	  stmw      r21, 0x1024(r1)
	  mr        r25, r5
	  mr        r26, r6
	  mr        r24, r3
	  mr        r21, r4
	  mullw     r27, r25, r26
	  stw       r7, 0x18(r3)
	  stw       r8, 0x1C(r3)
	  stw       r25, 0x20(r3)
	  mulli     r3, r27, 0x28
	  stw       r26, 0x24(r24)
	  addi      r3, r3, 0x10
	  bl        -0x3F4C94
	  lis       r4, 0x8042
	  lis       r5, 0x8013
	  subi      r4, r4, 0x6FC4
	  mr        r7, r27
	  addi      r5, r5, 0x3E64
	  li        r6, 0x28
	  bl        -0x35726C
	  stw       r3, 0x28(r24)
	  lis       r30, 0x4330
	  xoris     r3, r25, 0x8000
	  xoris     r0, r26, 0x8000
	  lfs       f0, 0x0(r21)
	  li        r28, 0
	  stw       r3, 0x100C(r1)
	  lfd       f31, 0x1FD0(r2)
	  stfs      f0, 0x2C(r24)
	  lfs       f29, 0x1FB8(r2)
	  lfs       f0, 0x4(r21)
	  stw       r30, 0x1008(r1)
	  lfs       f30, 0x1FBC(r2)
	  stfs      f0, 0x30(r24)
	  lfd       f0, 0x1008(r1)
	  lfs       f2, 0x8(r21)
	  fsubs     f1, f0, f31
	  stw       r0, 0x1014(r1)
	  stfs      f2, 0x34(r24)
	  lfs       f0, 0xC(r21)
	  stw       r30, 0x1010(r1)
	  stfs      f0, 0x38(r24)
	  lfd       f0, 0x1010(r1)
	  lfs       f2, 0x10(r21)
	  fsubs     f0, f0, f31
	  stfs      f2, 0x3C(r24)
	  lfs       f2, 0x14(r21)
	  stfs      f2, 0x40(r24)
	  lfs       f3, 0xC(r21)
	  lfs       f2, 0x0(r21)
	  fsubs     f2, f3, f2
	  fabs      f2, f2
	  frsp      f2, f2
	  fdivs     f1, f2, f1
	  stfs      f1, 0x44(r24)
	  lfs       f2, 0x14(r21)
	  lfs       f1, 0x8(r21)
	  fsubs     f1, f2, f1
	  fabs      f1, f1
	  frsp      f1, f1
	  fdivs     f0, f1, f0
	  stfs      f0, 0x48(r24)
	  b         .loc_0x41C

	.loc_0x12C:
	  xoris     r31, r28, 0x8000
	  li        r27, 0
	  b         .loc_0x410

	.loc_0x138:
	  xoris     r0, r27, 0x8000
	  li        r5, 0
	  stw       r31, 0x1014(r1)
	  mr        r3, r5
	  lfs       f4, 0x44(r24)
	  li        r29, 0
	  stw       r30, 0x1010(r1)
	  li        r4, 0
	  lfs       f2, 0x2C(r24)
	  lfd       f0, 0x1010(r1)
	  stw       r0, 0x100C(r1)
	  fsubs     f3, f0, f31
	  lfs       f5, 0x48(r24)
	  stw       r30, 0x1008(r1)
	  lfs       f0, 0x34(r24)
	  lfd       f1, 0x1008(r1)
	  fmadds    f2, f3, f4, f2
	  fsubs     f1, f1, f31
	  fadds     f3, f2, f4
	  fmadds    f0, f1, f5, f0
	  fadds     f1, f0, f5
	  b         .loc_0x390

	.loc_0x190:
	  lwz       r0, 0x24(r6)
	  lwz       r6, 0x18(r24)
	  add       r7, r0, r3
	  lfs       f4, 0x1FB8(r2)
	  lwz       r0, 0x0(r7)
	  lfs       f6, 0x1FBC(r2)
	  fmr       f5, f4
	  mulli     r0, r0, 0xC
	  lwz       r8, 0x24(r6)
	  fmr       f7, f6
	  add       r6, r8, r0
	  lfs       f8, 0x0(r6)
	  fcmpo     cr0, f4, f8
	  ble-      .loc_0x1CC
	  fmr       f4, f8

	.loc_0x1CC:
	  lfs       f9, 0x8(r6)
	  fcmpo     cr0, f29, f9
	  ble-      .loc_0x1DC
	  fmr       f5, f9

	.loc_0x1DC:
	  fcmpo     cr0, f30, f8
	  bge-      .loc_0x1E8
	  fmr       f6, f8

	.loc_0x1E8:
	  fcmpo     cr0, f30, f9
	  bge-      .loc_0x1F4
	  fmr       f7, f9

	.loc_0x1F4:
	  lwz       r0, 0x4(r7)
	  mulli     r0, r0, 0xC
	  add       r6, r8, r0
	  lfs       f8, 0x0(r6)
	  fcmpo     cr0, f4, f8
	  ble-      .loc_0x210
	  fmr       f4, f8

	.loc_0x210:
	  lfs       f9, 0x8(r6)
	  fcmpo     cr0, f5, f9
	  ble-      .loc_0x220
	  fmr       f5, f9

	.loc_0x220:
	  fcmpo     cr0, f6, f8
	  bge-      .loc_0x22C
	  fmr       f6, f8

	.loc_0x22C:
	  fcmpo     cr0, f7, f9
	  bge-      .loc_0x238
	  fmr       f7, f9

	.loc_0x238:
	  lwz       r0, 0x8(r7)
	  mulli     r0, r0, 0xC
	  add       r6, r8, r0
	  lfs       f8, 0x0(r6)
	  fcmpo     cr0, f4, f8
	  ble-      .loc_0x254
	  fmr       f4, f8

	.loc_0x254:
	  lfs       f9, 0x8(r6)
	  fcmpo     cr0, f5, f9
	  ble-      .loc_0x264
	  fmr       f5, f9

	.loc_0x264:
	  fcmpo     cr0, f6, f8
	  bge-      .loc_0x270
	  fmr       f6, f8

	.loc_0x270:
	  fcmpo     cr0, f7, f9
	  bge-      .loc_0x27C
	  fmr       f7, f9

	.loc_0x27C:
	  fcmpo     cr0, f3, f4
	  bge-      .loc_0x28C
	  li        r0, 0
	  b         .loc_0x2E0

	.loc_0x28C:
	  fcmpo     cr0, f6, f2
	  bge-      .loc_0x29C
	  li        r0, 0
	  b         .loc_0x2E0

	.loc_0x29C:
	  fcmpo     cr0, f2, f4
	  cror      2, 0, 0x2
	  bne-      .loc_0x2BC
	  fcmpo     cr0, f4, f3
	  cror      2, 0, 0x2
	  bne-      .loc_0x2BC
	  li        r0, 0x1
	  b         .loc_0x2E0

	.loc_0x2BC:
	  fcmpo     cr0, f4, f2
	  cror      2, 0, 0x2
	  bne-      .loc_0x2DC
	  fcmpo     cr0, f2, f6
	  cror      2, 0, 0x2
	  bne-      .loc_0x2DC
	  li        r0, 0x1
	  b         .loc_0x2E0

	.loc_0x2DC:
	  li        r0, 0

	.loc_0x2E0:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x2F0
	  li        r0, 0
	  b         .loc_0x368

	.loc_0x2F0:
	  fcmpo     cr0, f1, f5
	  bge-      .loc_0x300
	  li        r0, 0
	  b         .loc_0x354

	.loc_0x300:
	  fcmpo     cr0, f7, f0
	  bge-      .loc_0x310
	  li        r0, 0
	  b         .loc_0x354

	.loc_0x310:
	  fcmpo     cr0, f0, f5
	  cror      2, 0, 0x2
	  bne-      .loc_0x330
	  fcmpo     cr0, f5, f1
	  cror      2, 0, 0x2
	  bne-      .loc_0x330
	  li        r0, 0x1
	  b         .loc_0x354

	.loc_0x330:
	  fcmpo     cr0, f5, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x350
	  fcmpo     cr0, f0, f7
	  cror      2, 0, 0x2
	  bne-      .loc_0x350
	  li        r0, 0x1
	  b         .loc_0x354

	.loc_0x350:
	  li        r0, 0

	.loc_0x354:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x364
	  li        r0, 0
	  b         .loc_0x368

	.loc_0x364:
	  li        r0, 0x1

	.loc_0x368:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x388
	  cmpwi     r29, 0x400
	  bge-      .loc_0x388
	  addi      r6, r1, 0x8
	  addi      r29, r29, 0x1
	  stwx      r4, r6, r5
	  addi      r5, r5, 0x4

	.loc_0x388:
	  addi      r3, r3, 0x60
	  addi      r4, r4, 0x1

	.loc_0x390:
	  lwz       r6, 0x1C(r24)
	  lwz       r0, 0x1C(r6)
	  cmpw      r4, r0
	  blt+      .loc_0x190
	  lwz       r0, 0x24(r24)
	  cmpwi     r29, 0
	  lwz       r3, 0x28(r24)
	  mullw     r0, r28, r0
	  add       r0, r27, r0
	  mulli     r0, r0, 0x28
	  add       r23, r3, r0
	  ble-      .loc_0x40C
	  mr        r3, r23
	  mr        r4, r29
	  lwz       r12, 0x0(r23)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  addi      r22, r1, 0x8
	  li        r21, 0
	  b         .loc_0x404

	.loc_0x3E4:
	  mr        r3, r23
	  mr        r4, r22
	  lwz       r12, 0x0(r23)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  addi      r22, r22, 0x4
	  addi      r21, r21, 0x1

	.loc_0x404:
	  cmpw      r21, r29
	  blt+      .loc_0x3E4

	.loc_0x40C:
	  addi      r27, r27, 0x1

	.loc_0x410:
	  cmpw      r27, r26
	  blt+      .loc_0x138
	  addi      r28, r28, 0x1

	.loc_0x41C:
	  cmpw      r28, r25
	  blt+      .loc_0x12C
	  li        r0, 0x1078
	  vmrghb    v31, v1, v0
	  lfd       f31, 0x1070(r1)
	  li        r0, 0x1068
	  vmrghb    v30, v1, v0
	  lfd       f30, 0x1060(r1)
	  li        r0, 0x1058
	  vmrghb    v29, v1, v0
	  lfd       f29, 0x1050(r1)
	  lmw       r21, 0x1024(r1)
	  lwz       r0, 0x1084(r1)
	  mtlr      r0
	  addi      r1, r1, 0x1080
	  blr
	*/
}

/**
 * @note Address: N/A
 * @note Size: 0x6C
 */
void GridDivider::write(Stream&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xC0
 */
void GridInfo::write(Stream&)
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
			f32 testVal = vec1.dot(vertices[j] - vec2);

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
	f32* ptr_8_row;
	f32* ptr_20_row;
	f32* ptr_14_row;
	f32* col_ptr;
	f32* row_ptr;
	f32* ptr_8_col;
	f32* ptr_20_col;
	f32* ptr_14_col;
	// f32* col_ptr;
	// int count = m_count;
	int y, i, j;
	Triangle* currTri;
	int count      = mCount;
	f32 norm_const = 1.0f / (3.0f * (f32)count);

	vec         = Vector3f(0.0f);
	int vec_ctr = 0;
	for (int i = count; i > 0; i--, vec_ctr++) {
		Triangle* currTri = triTable.getTriangle(mObjects[vec_ctr]);
		Vector3f* verts   = vertTable.mObjects;
		Vector3f* vert_A  = vertTable.getVertex(currTri->mVertices[0]);
		Vector3f* vert_B  = vertTable.getVertex(currTri->mVertices[1]);
		Vector3f* vert_C  = vertTable.getVertex(currTri->mVertices[2]);
		vec               = vec + ((*vert_A + *vert_B) + *vert_C);
	}
	vec = vec * norm_const;

	// int i, j;
	// this should probably be a matrix
	Vector3f vec_20;
	Vector3f vec_14;
	Vector3f vec_8;
	ptr_14_row = &vec_14.x;
	f32* ptr   = &vec_20.x;
	ptr_20_row = ptr;
	ptr_8_row  = &vec_8.x;
	row_ptr    = &vec.x;

	for (i = 0; i < 3; i++) {
		ptr_20_col = ptr;
		ptr_14_col = ptr_14_row;
		ptr_8_col  = ptr_8_row;
		col_ptr    = row_ptr;
		for (j = 0; j < 3; j++) {

			f32 col, row;
			f32 elemSum = 0.0f;
			for (y = 0; y < count; y) {
				int currTriAddr = mObjects[y++];
				// using these pointer directly when updating elemSum increases the % more than this
				col              = col_ptr[j];
				row              = row_ptr[i];
				currTri          = &triTable.mObjects[currTriAddr];
				Vector3f* verts  = vertTable.mObjects;
				Vector3f* vert_B = &verts[currTri->mVertices[0]];
				Vector3f* vert_A = &verts[currTri->mVertices[1]];
				Vector3f* vert_C = &verts[currTri->mVertices[2]];

				vec_14.x = vert_A->x;
				vec_14.y = vert_A->y;
				vec_14.z = vert_A->z;

				vec_20.x = vert_B->x;
				vec_20.y = vert_B->y;
				vec_20.z = vert_B->z;

				vec_8.x = vert_C->x;
				vec_8.y = vert_C->y;
				vec_8.z = vert_C->z;
				elemSum += ((ptr_8_row[i] - row) * (ptr_8_col[j] - col))
				         + (((ptr_20_row[i] - row) * (ptr_20_col[j] - col)) + ((ptr_14_row[i] - row) * (ptr_14_col[j] - col)));
			}
			elemSum *= norm_const;
			covarM.mMatrix[i][j] = elemSum;
		}
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  lis       r0, 0x4330
	  lfd       f2, 0x1FD0(r2)
	  li        r11, 0
	  stmw      r18, 0x38(r1)
	  lfs       f0, 0x1FA8(r2)
	  stw       r0, 0x30(r1)
	  lfs       f3, 0x1FAC(r2)
	  lwz       r19, 0x1C(r3)
	  xoris     r0, r19, 0x8000
	  stfs      f0, 0x0(r7)
	  stw       r0, 0x34(r1)
	  lfd       f1, 0x30(r1)
	  stfs      f0, 0x4(r7)
	  fsubs     f1, f1, f2
	  lfs       f2, 0x1FEC(r2)
	  stfs      f0, 0x8(r7)
	  fmuls     f1, f2, f1
	  fdivs     f0, f3, f1
	  mtctr     r19
	  cmpwi     r19, 0
	  ble-      .loc_0xFC

	.loc_0x58:
	  lwz       r8, 0x24(r3)
	  lwz       r9, 0x24(r5)
	  lwzx      r0, r8, r11
	  addi      r11, r11, 0x4
	  lwz       r12, 0x24(r4)
	  mulli     r0, r0, 0x60
	  lfs       f3, 0x0(r7)
	  lfs       f6, 0x4(r7)
	  lfs       f9, 0x8(r7)
	  add       r10, r9, r0
	  lwz       r0, 0x0(r10)
	  lwz       r8, 0x4(r10)
	  mulli     r9, r0, 0xC
	  lwz       r0, 0x8(r10)
	  add       r9, r12, r9
	  mulli     r8, r8, 0xC
	  lfs       f2, 0x0(r9)
	  lfs       f5, 0x4(r9)
	  lfs       f8, 0x8(r9)
	  add       r8, r12, r8
	  lfs       f1, 0x0(r8)
	  mulli     r0, r0, 0xC
	  lfs       f4, 0x4(r8)
	  lfs       f7, 0x8(r8)
	  fadds     f2, f2, f1
	  add       r8, r12, r0
	  fadds     f5, f5, f4
	  lfs       f1, 0x0(r8)
	  fadds     f8, f8, f7
	  lfs       f4, 0x4(r8)
	  fadds     f1, f2, f1
	  lfs       f7, 0x8(r8)
	  fadds     f2, f5, f4
	  fadds     f4, f8, f7
	  fadds     f1, f3, f1
	  fadds     f2, f6, f2
	  fadds     f3, f9, f4
	  stfs      f1, 0x0(r7)
	  stfs      f2, 0x4(r7)
	  stfs      f3, 0x8(r7)
	  bdnz+     .loc_0x58

	.loc_0xFC:
	  lfs       f1, 0x0(r7)
	  addi      r18, r1, 0x14
	  lfs       f2, 0x4(r7)
	  addi      r0, r1, 0x20
	  fmuls     f1, f1, f0
	  lfs       f3, 0x8(r7)
	  addi      r27, r1, 0x8
	  fmuls     f2, f2, f0
	  fmuls     f3, f3, f0
	  mr        r31, r7
	  stfs      f1, 0x0(r7)
	  mr        r30, r18
	  mr        r29, r0
	  mr        r28, r27
	  stfs      f2, 0x4(r7)
	  li        r25, 0
	  stfs      f3, 0x8(r7)

	.loc_0x140:
	  mr        r8, r7
	  mr        r9, r18
	  mr        r10, r0
	  mr        r11, r27
	  mr        r12, r6
	  li        r24, 0

	.loc_0x158:
	  li        r26, 0
	  lfs       f11, 0x1FA8(r2)
	  mtctr     r19
	  cmpwi     r19, 0
	  ble-      .loc_0x240

	.loc_0x16C:
	  lwz       r20, 0x24(r3)
	  lwz       r21, 0x24(r5)
	  lwzx      r22, r20, r26
	  addi      r26, r26, 0x4
	  lwz       r20, 0x24(r4)
	  mulli     r22, r22, 0x60
	  lfs       f9, 0x0(r8)
	  lfs       f10, 0x0(r31)
	  add       r23, r21, r22
	  lwz       r22, 0x4(r23)
	  lwz       r21, 0x0(r23)
	  mulli     r22, r22, 0xC
	  lwz       r23, 0x8(r23)
	  add       r22, r20, r22
	  lfs       f3, 0x0(r22)
	  mulli     r21, r21, 0xC
	  lfs       f2, 0x4(r22)
	  lfs       f1, 0x8(r22)
	  stfs      f3, 0x14(r1)
	  add       r21, r20, r21
	  lfs       f8, 0x0(r21)
	  mulli     r22, r23, 0xC
	  lfs       f7, 0x4(r21)
	  lfs       f3, 0x8(r21)
	  stfs      f2, 0x18(r1)
	  add       r20, r20, r22
	  lfs       f6, 0x0(r20)
	  stfs      f1, 0x1C(r1)
	  lfs       f5, 0x4(r20)
	  lfs       f2, 0x0(r30)
	  lfs       f1, 0x0(r9)
	  lfs       f4, 0x8(r20)
	  fsubs     f2, f2, f10
	  fsubs     f1, f1, f9
	  stfs      f8, 0x20(r1)
	  stfs      f7, 0x24(r1)
	  fmuls     f1, f2, f1
	  stfs      f3, 0x28(r1)
	  lfs       f3, 0x0(r29)
	  lfs       f2, 0x0(r10)
	  fsubs     f3, f3, f10
	  stfs      f6, 0x8(r1)
	  fsubs     f2, f2, f9
	  stfs      f5, 0xC(r1)
	  stfs      f4, 0x10(r1)
	  fmadds    f1, f3, f2, f1
	  lfs       f3, 0x0(r28)
	  lfs       f2, 0x0(r11)
	  fsubs     f3, f3, f10
	  fsubs     f2, f2, f9
	  fmadds    f1, f3, f2, f1
	  fadds     f11, f11, f1
	  bdnz+     .loc_0x16C

	.loc_0x240:
	  fmuls     f11, f11, f0
	  addi      r24, r24, 0x1
	  cmpwi     r24, 0x3
	  addi      r11, r11, 0x4
	  addi      r8, r8, 0x4
	  addi      r9, r9, 0x4
	  stfs      f11, 0x0(r12)
	  addi      r12, r12, 0x4
	  addi      r10, r10, 0x4
	  blt+      .loc_0x158
	  addi      r25, r25, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r25, 0x3
	  addi      r30, r30, 0x4
	  addi      r29, r29, 0x4
	  addi      r28, r28, 0x4
	  addi      r6, r6, 0xC
	  blt+      .loc_0x140
	  lmw       r18, 0x38(r1)
	  addi      r1, r1, 0x70
	  blr
	*/
}

/**
 * @note Address: 0x80419978
 * @note Size: 0x4
 */
void TriIndexList::draw(Graphics&, Sys::VertexTable&, Sys::TriangleTable&, bool) { }

/**
 * @note Address: 0x8041997C
 * @note Size: 0x7C
 */
TriangleTable::TriangleTable() { }

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
void VertexTable::writeObject(Stream& output, Vector3f& vertex) { vertex.write(output); }

} // namespace Sys
