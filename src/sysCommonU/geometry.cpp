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

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_804997A8
    lbl_804997A8:
        .asciz "# %d/%d\r\n"
        .skip 0x6

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q23Sys11VertexTable
    __vt__Q23Sys11VertexTable:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23Sys11VertexTableFv
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__23Container<10Vector3<f>>FPv"
        .4byte "getNext__28ArrayContainer<10Vector3<f>>FPv"
        .4byte "getStart__28ArrayContainer<10Vector3<f>>Fv"
        .4byte "getEnd__28ArrayContainer<10Vector3<f>>Fv"
        .4byte "get__28ArrayContainer<10Vector3<f>>FPv"
        .4byte "getAt__28ArrayContainer<10Vector3<f>>Fi"
        .4byte "getTo__28ArrayContainer<10Vector3<f>>Fv"
        .4byte "writeObject__Q23Sys11VertexTableFR6StreamR10Vector3<f>"
        .4byte "readObject__Q23Sys11VertexTableFR6StreamR10Vector3<f>"
        .4byte write__Q23Sys11VertexTableFR6Stream
        .4byte "read__28ArrayContainer<10Vector3<f>>FR6Stream"
        .4byte "alloc__28ArrayContainer<10Vector3<f>>Fi"
        .4byte "addOne__Q23Sys11VertexTableFR10Vector3<f>"
        .4byte "setArray__28ArrayContainer<10Vector3<f>>FP10Vector3<f>i"
    .global __vt__Q23Sys13TriangleTable
    __vt__Q23Sys13TriangleTable:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23Sys13TriangleTableFv
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__26Container<Q23Sys8Triangle>FPv"
        .4byte "getNext__31ArrayContainer<Q23Sys8Triangle>FPv"
        .4byte "getStart__31ArrayContainer<Q23Sys8Triangle>Fv"
        .4byte "getEnd__31ArrayContainer<Q23Sys8Triangle>Fv"
        .4byte "get__31ArrayContainer<Q23Sys8Triangle>FPv"
        .4byte "getAt__31ArrayContainer<Q23Sys8Triangle>Fi"
        .4byte "getTo__31ArrayContainer<Q23Sys8Triangle>Fv"
        .4byte writeObject__Q23Sys13TriangleTableFR6StreamRQ23Sys8Triangle
        .4byte readObject__Q23Sys13TriangleTableFR6StreamRQ23Sys8Triangle
        .4byte "write__31ArrayContainer<Q23Sys8Triangle>FR6Stream"
        .4byte "read__31ArrayContainer<Q23Sys8Triangle>FR6Stream"
        .4byte "alloc__31ArrayContainer<Q23Sys8Triangle>Fi"
        .4byte "addOne__31ArrayContainer<Q23Sys8Triangle>FRQ23Sys8Triangle"
        .4byte "setArray__31ArrayContainer<Q23Sys8Triangle>FPQ23Sys8Trianglei"
    .global "__vt__31ArrayContainer<Q23Sys8Triangle>"
    "__vt__31ArrayContainer<Q23Sys8Triangle>":
        .4byte 0
        .4byte 0
        .4byte "__dt__31ArrayContainer<Q23Sys8Triangle>Fv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__26Container<Q23Sys8Triangle>FPv"
        .4byte "getNext__31ArrayContainer<Q23Sys8Triangle>FPv"
        .4byte "getStart__31ArrayContainer<Q23Sys8Triangle>Fv"
        .4byte "getEnd__31ArrayContainer<Q23Sys8Triangle>Fv"
        .4byte "get__31ArrayContainer<Q23Sys8Triangle>FPv"
        .4byte "getAt__31ArrayContainer<Q23Sys8Triangle>Fi"
        .4byte "getTo__31ArrayContainer<Q23Sys8Triangle>Fv"
        .4byte
   "writeObject__31ArrayContainer<Q23Sys8Triangle>FR6StreamRQ23Sys8Triangle"
        .4byte
   "readObject__31ArrayContainer<Q23Sys8Triangle>FR6StreamRQ23Sys8Triangle"
        .4byte "write__31ArrayContainer<Q23Sys8Triangle>FR6Stream"
        .4byte "read__31ArrayContainer<Q23Sys8Triangle>FR6Stream"
        .4byte "alloc__31ArrayContainer<Q23Sys8Triangle>Fi"
        .4byte "addOne__31ArrayContainer<Q23Sys8Triangle>FRQ23Sys8Triangle"
        .4byte "setArray__31ArrayContainer<Q23Sys8Triangle>FPQ23Sys8Trianglei"
    .global "__vt__26Container<Q23Sys8Triangle>"
    "__vt__26Container<Q23Sys8Triangle>":
        .4byte 0
        .4byte 0
        .4byte "__dt__26Container<Q23Sys8Triangle>Fv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__26Container<Q23Sys8Triangle>FPv"
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte "getAt__26Container<Q23Sys8Triangle>Fi"
        .4byte "getTo__26Container<Q23Sys8Triangle>Fv"
    .global __vt__Q23Sys11GridDivider
    __vt__Q23Sys11GridDivider:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23Sys11GridDividerFv
        .4byte getChildCount__5CNodeFv
        .4byte "getMinY__Q23Sys11GridDividerFR10Vector3<f>"
        .4byte findTriLists__Q23Sys11GridDividerFRQ23Sys6Sphere
        .4byte read__Q23Sys11GridDividerFR6Stream
        .4byte getCurrTri__Q23Sys11GridDividerFRQ24Game11CurrTriInfo
        .4byte createTriangles__Q23Sys11GridDividerFRQ23Sys17CreateTriangleArg
        .4byte getBoundBox__Q23Sys11GridDividerFR8BoundBox
        .4byte clone__Q23Sys10TriDividerFR7Matrixf
        .4byte
   do_clone__Q23Sys11GridDividerFR7MatrixfPQ23Sys11VertexTablePQ23Sys13TriangleTable
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global debug__Q23Sys8Triangle
    debug__Q23Sys8Triangle:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80520308
    lbl_80520308:
        .4byte 0x00000000
    .global lbl_8052030C
    lbl_8052030C:
        .float 1.0
    .global lbl_80520310
    lbl_80520310:
        .float 0.5
    .global lbl_80520314
    lbl_80520314:
        .4byte 0x3EAAAAAB
    .global lbl_80520318
    lbl_80520318:
        .4byte 0x4B435000
    .global lbl_8052031C
    lbl_8052031C:
        .4byte 0xCB435000
    .global lbl_80520320
    lbl_80520320:
        .4byte 0x3C23D70A
    .global lbl_80520324
    lbl_80520324:
        .4byte 0xBDCCCCCD
    .global lbl_80520328
    lbl_80520328:
        .4byte 0x48A02800
    .global lbl_8052032C
    lbl_8052032C:
        .4byte 0xC8A02800
    .global lbl_80520330
    lbl_80520330:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80520338
    lbl_80520338:
        .4byte 0x0D0A0000
    .global lbl_8052033C
    lbl_8052033C:
        .4byte 0x47000000
    .global lbl_80520340
    lbl_80520340:
        .4byte 0xC7000000
    .global lbl_80520344
    lbl_80520344:
        .4byte 0x501502F9
    .global lbl_80520348
    lbl_80520348:
        .4byte 0xD01502F9
    .global lbl_8052034C
    lbl_8052034C:
        .4byte 0x40400000
*/

namespace Sys {

/*
 * --INFO--
 * Address:	........
 * Size:	000238
 */
// void Edge::calcNearestEdgePoint(Vector3f&, Vector3f&)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	80415AA4
 * Size:	0000B4
 */
void Tube::getAxisVector(Vector3f& axisVector)
{
	// creates a unit vector 'axisVector' that points in direction of tube

	axisVector = m_endPos - m_startPos;

	float X   = axisVector.x * axisVector.x;
	float Y   = axisVector.y * axisVector.y;
	float Z   = axisVector.z * axisVector.z;
	float mag = pikmin2_sqrtf(X + Y + Z); // length of tube

	// normalise output vector (so long as it's not just the zero vector)
	if (mag > 0.0f) {
		float norm = 1.0f / mag;
		axisVector.x *= norm;
		axisVector.y *= norm;
		axisVector.z *= norm;
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void Tube::getYRatio(float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80415B58
 * Size:	00027C
 */
// WIP: https://decomp.me/scratch/8Atgz
// something around the coll_vec definition needs fixing
bool Tube::collide(Sphere& ball, Vector3f& repulsionVec, float& posRatio)
{
	// checks for collision between tube and sphere 'ball', output is bool, 0 = no collision, 1 = collision
	// also puts 'collision vector' into vec, and dot product between axisVector of tube and
	// vector between bottom of tube and center of sphere into dotprod

	Vector3f diff = m_endPos;
	diff          = diff - m_startPos;
	Vector3f axis = diff;

	float lenTube = lenVec(axis);

	// if tube isn't 0-length, normalise axis to unit vector
	if (lenTube > 0.0f) {
		float norm = 1.0f / lenTube;
		axis.x *= norm;
		axis.y *= norm;
		axis.z *= norm;
	} else {
		lenTube = 0.0f;
	}

	// if tube doesn't have length, can't collide with anything so just exit
	if (0 == lenTube) {
		// no collision
		return false;
	}

	///////////////// BEGIN REGSWAPS

	Vector3f sep = ball.m_position - m_startPos;

	// calculate scalar projection of sep onto tube
	float scalarProj = dot(axis, sep) / lenTube;

	// calculate perpendicular distance vector between (center of) tube and (center of) ball
	Vector3f perpVec = (diff * scalarProj) + m_startPos - ball.m_position;

	// get center-to-center distance
	float perpDist = lenVec(perpVec);

	// get radius of tube at point of perpendicular distance
	// i.e. at fraction 'scalarProj' along tube, assuming radius changes linearly from one end to the other
	float tubeRadius = ((1.0f - scalarProj) * m_startRadius) + (m_endRadius * scalarProj);

	// calc overlap amount, i.e. (amount of "stuff") - (center-to-center distance)
	float overlap = (ball.m_radius + tubeRadius) - perpDist;

	///////////////// END OF (MOST) REGSWAPS

	// check we have 0 <= scalarProj <= 1 (ball 'next to' tube) and some overlap
	if ((scalarProj >= 0) && (scalarProj <= 1.0f) && overlap >= 0) {
		repulsionVec  = perpVec;
		float mag_vec = normalise(&repulsionVec);

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

/*
 * --INFO--
 * Address:	80415DD4
 * Size:	0000F4
 */
float Tube::getPosRatio(const Vector3f& point)
{
	// returns scalar projection of separation (between start of tube and input 'point')
	// onto axis of tube, i.e. closest perpendicular distance between tube and 'point' is
	// fraction 'PosRatio' along tube, i.e.
	//    => 0 if 'next to' start, 1 if 'next to' end
	//    => < 0 if 'before' start, > 1 if 'beyond' end

	// get axis vector and normalise to unit vector
	Vector3f axis(m_endPos.x - m_startPos.x, m_endPos.y - m_startPos.y, m_endPos.z - m_startPos.z);
	float mag = normalise(&axis);

	// get separation vector
	Vector3f sep = point - m_startPos;

	// calculate scalar projection of sep onto tube
	return dot(axis, sep) / mag;
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
// void Tube::getRatioRadius(float)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000200
 */
// void Tube::getPosGradient(Vector3f&, float, Vector3f&, Vector3f&)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	80415EC8
 * Size:	00004C
 */
Vector3f Tube::setPos(float frac)
{
	// returns position we're at, given we're a fraction 'frac' through the tube
	// i.e. return m_startPos if frac = 0, return m_endPos if frac = 1

	Vector3f diff = m_startPos;
	diff          = (m_endPos - diff) * frac;
	return m_startPos + diff;
}

/*
 * --INFO--
 * Address:	80415F14
 * Size:	000058
 */
bool Sphere::intersect(Sphere& ball)
{
	// check if a sphere intersects with a second sphere 'ball'
	// return true if yes

	// calculate center-to-center distance (squared?)
	Vector3f diff(ball.m_position.x - m_position.x, ball.m_position.y - m_position.y, ball.m_position.z - m_position.z);
	float sepSqr = diff.x * diff.x + diff.y * diff.y + diff.z * diff.z;

	// add radii to get total "material" between their centers
	float sumRadii = ball.m_radius + m_radius;

	// calculate magnitude of repulsion (negative if overlapping)
	// I think the lack of square roots here is just for speed - same outcome if we took square roots
	float repulsion = -(sumRadii * sumRadii - sepSqr);

	// if there's repulsion, return true
	if (repulsion <= 0.0f) {
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	80415F6C
 * Size:	000120
 */
bool Sys::Sphere::intersect(Sys::Sphere& ball, Vector3f& repulsionVec)
{
	// calculate whether sphere intersects with another sphere 'ball'
	// return true if yes
	// also load (negative) separation vector scaled by overlap into repulsionVec

	// calculate center-to-center distance
	repulsionVec = ball.m_position - m_position;
	float sep    = normalise(&repulsionVec);

	// (distance between centers) - (total 'material' between centers); positive if there's a gap
	float negOverlap = sep - (ball.m_radius + m_radius);

	// if positive, gap, so no intersection
	if (negOverlap > 0.0f) {
		return false; // repulsionVec just contains unit separation vector
	}
	// if negative, intersection, so scale unit separation vector by negative overlap
	repulsionVec = repulsionVec * negOverlap;
	return true;
}

/*
 * --INFO--
 * Address:	8041608C
 * Size:	000204
 */
bool Sphere::intersect(Edge& edge, float& t)
{
	// calculate if sphere intersects with edge edge
	// return true if intersecting
	// also put a parameter into t that says how far along the edge it's intersecting
	// t = 0 if intersecting at start; = 1 if at end; 0 < t < edgeLen if in the middle

	// check start point of edge
	Vector3f startSep(edge.m_startPos.x - m_position.x, edge.m_startPos.y - m_position.y, edge.m_startPos.z - m_position.z);
	float startDist = lenVec(startSep);
	if (startDist <= m_radius) { // start is intersecting
		t = 0.0f;
		return true;
	}

	// check end point of edge
	Vector3f endSep(edge.m_endPos.x - m_position.x, edge.m_endPos.y - m_position.y, edge.m_endPos.z - m_position.z);
	float endDist = lenVec(endSep);
	if (endDist <= m_radius) { //  end is intersecting
		t = 1.0f;
		return true;
	}

	// create unit edge vector (pointing along edge) + get length of edge
	Vector3f edgeVec(edge.m_endPos.x - edge.m_startPos.x, edge.m_endPos.y - edge.m_startPos.y, edge.m_endPos.z - edge.m_startPos.z);
	float edgeLen = normalise(&edgeVec);

	// negative of startSep, will be used to calculate perp dist
	Vector3f sep(m_position.x - edge.m_startPos.x, m_position.y - edge.m_startPos.y, m_position.z - edge.m_startPos.z);

	// set t = scalar projection of sep onto edge
	t = dot(sep, edgeVec);

	// if we're before edge (t < 0) or past edge (t > edgeLen), no intersection
	if ((t < 0.0f) || (t > edgeLen)) {
		return false;
	}

	// get vector projection of sep onto edge
	Vector3f projVec = edgeVec * t;

	// calculate perpendicular distance vector from ball to edge
	Vector3f perpVec(sep.x - projVec.x, sep.y - projVec.y, sep.z - projVec.z);

	// check if perp distance to edge is less than or equal to radius of sphere
	float perpDist = lenVec(perpVec);
	if (perpDist <= m_radius) { // if so, intersects
		return true;            // t is then parametrised 'location' of intersection along edge, sort of
	}
	return false;
}

/*
 * --INFO--
 * Address:	80416290
 * Size:	00028C
 */
bool Sphere::intersect(Edge& edge, float& t, Vector3f& intersectPoint)
{
	// calculate if sphere intersects with edge 'edge'
	// return true if intersecting
	// also put a parameter into t that says how far along the edge it's intersecting
	// t = 0 if intersecting at start; = 1 if at end; 0 < t < edgeLen if in the middle
	// also put closest edge point to sphere into intersectPoint

	// check start point of edge
	Vector3f startSep(edge.m_startPos.x - m_position.x, edge.m_startPos.y - m_position.y, edge.m_startPos.z - m_position.z);
	float startDist = lenVec(startSep);
	if (startDist <= m_radius) { // start is intersecting
		t              = 0.0f;
		intersectPoint = edge.m_startPos;
		return true;
	}

	// check end point of edge
	Vector3f endSep(edge.m_endPos.x - m_position.x, edge.m_endPos.y - m_position.y, edge.m_endPos.z - m_position.z);
	float endDist = lenVec(endSep);
	if (endDist <= m_radius) { // end is intersecting
		t              = 1.0f;
		intersectPoint = edge.m_endPos;
		return true;
	}

	// create unit edge vector (pointing along edge) + get length of edge
	Vector3f edgeVec(edge.m_endPos.x - edge.m_startPos.x, edge.m_endPos.y - edge.m_startPos.y, edge.m_endPos.z - edge.m_startPos.z);
	float edgeLen = _normalise(&edgeVec);

	// negative of startSep, will be used to calculate perp dist
	Vector3f sep(intersectPoint.x - edge.m_startPos.x, intersectPoint.y - edge.m_startPos.y, intersectPoint.z - edge.m_startPos.z);

	// set t = scalar projection of sep onto edge
	t = dot(sep, edgeVec);

	// if we're before edge (t < 0) or past edge (t > edgeLen), no intersection
	if ((t < 0.0f) || (t > edgeLen)) {
		return false;
	}

	// get vector projection of sep onto edge
	Vector3f projVec(edgeVec.x * t, edgeVec.y * t, edgeVec.z * t);

	// calculate perpendicular distance vector from ball to edge
	Vector3f perpVec(sep.x - projVec.x, sep.y - projVec.y, sep.z - projVec.z);

	// check if perp distance to edge is less than or equal to radius of sphere
	float perpDist = lenVec(perpVec);
	if (perpDist <= m_radius) { // if so, intersects
		float edgeDist = t * edgeLen;
		projVec        = Vector3f(edgeVec.x * edgeDist, edgeVec.y * edgeDist, edgeVec.z * edgeDist);
		// get point that is a frac 't' along edge
		intersectPoint = Vector3f(edge.m_startPos.x + projVec.x, edge.m_startPos.y + projVec.y, edge.m_startPos.z + projVec.z);
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	8041651C
 * Size:	0003D4
 */
bool Sphere::intersect(Edge& edge, float& t, Vector3f& repulsionVec, float& strength)
{
	// return true if intersecting
	// also put a parameter into t that says how far along the edge it's intersecting
	// repulsionVec = (unit) repulsion vector away from edge
	// strength = amount of overlap between edge and sphere = strength of repulsion

	// create unit edge vector (pointing along edge) + get length of edge
	Vector3f edgeVec(edge.m_endPos.x - edge.m_startPos.x, edge.m_endPos.y - edge.m_startPos.y, edge.m_endPos.z - edge.m_startPos.z);
	float edgeLen = normalise(&edgeVec);

	// calculate vector from start of edge to sphere
	Vector3f startSep(m_position.x - edge.m_startPos.x, m_position.y - edge.m_startPos.y, m_position.z - edge.m_startPos.z);

	// get scalar projection of startSep onto edge
	t = dot(startSep, edgeVec);

	// if we're 'before' edge (t < 0) or 'beyond' edge (t > edgeLen), just check end points
	if ((t < 0.0f) || (t > edgeLen)) {

		// Check start of edge
		// negative of startSep, will be used to calculate perp dist
		Vector3f sep_0(edge.m_startPos.x - m_position.x, edge.m_startPos.y - m_position.y, edge.m_startPos.z - m_position.z);
		if (lenVec(sep_0) <= m_radius) {                 // start is intersecting
			t            = 0.0f;                         // intersection is at start
			repulsionVec = m_position - edge.m_startPos; // pointing from start to ball

			// normalise repulsionVec + calculate strength from 'overlap'
			float sepDist = normalise(&repulsionVec);
			strength      = m_radius - sepDist;

			// if the length is 0, make sure output vector is 0
			if (0.0f == sepDist) {
				repulsionVec = Vector3f(0);
			}

			return true; // yes intersection
		}

		// Check end of edge
		// negative of 'endSep', will be used to calculate perp dist
		Vector3f sep_1(edge.m_endPos.x - m_position.x, edge.m_endPos.y - m_position.y, edge.m_endPos.z - m_position.z);

		// if we're too close to end point, need to do some overlap calculations
		if (lenVec(sep_1) <= m_radius) {               // end is intersecting
			t            = 1.0f;                       // intersection is at end
			repulsionVec = m_position - edge.m_endPos; // pointing from end to ball

			// normalise repulsionVec + calculate strength from 'overlap'
			float sepDist = normalise(&repulsionVec);
			strength      = m_radius - sepDist;

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
	float perpDist = normalise(&perpVec);

	// check if we have overlap
	if (perpDist < m_radius) {          // yes overlap
		if (0.0f == perpDist) {         // if sphere is centered ON the edge
			repulsionVec = Vector3f(0); // can't really determine repulsion vector if we're ON the edge
			strength     = m_radius;    // "whole radius" of overlap
			return true;                // yes intersection
		}

		// sphere not centered on edge
		strength     = m_radius - perpDist; // calc strength from overlap
		repulsionVec = perpVec;             // unit vector directly away from edge at closest point to sphere
		return true;                        // yes intersection
	}

	return false; // not close enough to edge, no intersection
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D8
 */
// bool Sphere::intersectRay(Vector3f&, Vector3f&)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	804168F0
 * Size:	000068
 */
Triangle::Triangle(void) { m_code.m_contents = (bool)0; }

/*
 * --INFO--
 * Address:	........
 * Size:	00027C
 */
// void Triangle::findNearestPoint(VertexTable&, Vector3f&, Vector3f&)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	80416958
 * Size:	000168
 */
void Triangle::createSphere(VertexTable& vertTable)
{
	// creates sphere centered at center of triangle
	// radius is large enough to include all vertices of triangle
	float new_radius = 0.0f;

	// get vertices of triangle
	Vector3f vert_3 = vertTable.m_objects[m_vertices.z];
	Vector3f vert_2 = vertTable.m_objects[m_vertices.y];
	Vector3f vert_1 = vertTable.m_objects[m_vertices.x];

	// get center of triangle
	Vector3f center = (vert_1 + vert_2 + vert_3) * (float)0x3EAAAAAB; // 0x3EAAAAAB = 1/3

	// make sure radius includes all vertices
	for (int i = 0; i < 3; i++) {
		int* vertPtr     = &m_vertices.x;
		Vector3f currVtx = (vertTable.m_objects[vertPtr[i]]);

		float vtxDist = lenVec(currVtx - center);
		if (vtxDist > new_radius) {
			new_radius = vtxDist;
		}
	};

	m_sphere.m_radius   = new_radius;
	m_sphere.m_position = center;
}

/*
 * --INFO--
 * Address:	80416AC0
 * Size:	000084
 */
bool Triangle::fastIntersect(Sphere& ball)
{
	// check if triangle bounding sphere intersects with sphere 'ball'

	// get center-to-center distance
	Vector3f sep = ball.m_position - m_sphere.m_position;
	float dist   = lenVec(sep);

	// check how much "stuff" is between them
	float radii = ball.m_radius + m_sphere.m_radius;

	// if separation is less than or equal to amount of material, intersection; if not, no intersection
	return (dist <= radii);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
// void Triangle::write(Stream&)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
// void Triangle::read(Stream&)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
// void Triangle::constructFromJ3D(Sys::VertexTable&, __J3DUTriangle&)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
// void Triangle::draw(Graphics&, Sys::VertexTable&, bool)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	80416B44
 * Size:	000104
 */
float Sys::Triangle::calcDist(Plane& plane, Sys::VertexTable& vertTable)
{
	// calculate distance to 'closest' vertex of triangle from a given plane
	// but if triangle is completely 'below' plane, returns furthest point instead

	// get triangle vertices from VertexTable vertTable
	Vector3f vert_1 = vertTable.m_objects[m_vertices.x];
	Vector3f vert_2 = vertTable.m_objects[m_vertices.y];
	Vector3f vert_3 = vertTable.m_objects[m_vertices.z];

	// calculate distance from plane to each vertex (can be negative)
	float vertDist_1 = planeDist(vert_1, plane);
	float vertDist_2 = planeDist(vert_2, plane);
	float vertDist_3 = planeDist(vert_3, plane);

	float minDist;

	// dist to 'closest' vertex (farthest if below plane)
	if (vertDist_1 < vertDist_2) {
		minDist = (vertDist_1 < vertDist_3) ? vertDist_1 : vertDist_3;
	} else {
		minDist = (vertDist_2 < vertDist_3) ? vertDist_2 : vertDist_3;
	}

	// dist to 'farthest' vertex (closest if below plane)
	float maxDist;
	if (vertDist_1 < vertDist_2) {
		maxDist = (vertDist_2 < vertDist_3) ? vertDist_3 : vertDist_2;
	} else {
		maxDist = (vertDist_1 < vertDist_3) ? vertDist_3 : vertDist_1;
	}

	// check plane isn't intersecting triangle
	float check = (minDist * maxDist);
	if (check > 0.0f) { // both points on same side of plane, we're good
		return minDist;
	}
	// negative = points on either side, 0 = one point IN plane, so intersecting
	return 0.0f; // if something's negative or one is zero, we're overlapping, so return 0 as distance
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001EC
 */
// bool Triangle::intersect(Sys::VertexTable&, BoundBox2d&)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	0002F0
 */
// bool Triangle::intersect(Sys::Edge&, Vector3f&)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	80416C48
 * Size:	000334
 */
bool Triangle::intersect(Edge& edge, float cutoff, Vector3f& intersectionPoint)
{
	// check if edge intersects triangle within a given cutoff length from the start of the edge
	// output intersection point into intersectionPoint, return true if intersecting

	// get length of edge and scalar projection of edge onto normal to triangle plane
	Vector3f edgeVec(edge.m_endPos.x - edge.m_startPos.x, edge.m_endPos.y - edge.m_startPos.y, edge.m_endPos.z - edge.m_startPos.z);
	float edgeLen = lenVec(edgeVec);

	Vector3f triPlaneNormal(m_trianglePlane.a, m_trianglePlane.b, m_trianglePlane.c);

	float scalarProj = dot(triPlaneNormal, edgeVec);

	// if edge has no length, cannot intersect
	if (0.0f == edgeLen) {
		return false;
	}

	// get ratio along edge...?
	float ratio = cutoff / edgeLen;

	// if edge is (close to) perpendicular to triangle, need more checks
	if (FABS(scalarProj) < 0.01f) {
		// if plane cuts edge below (or at) cutoff
		if (FABS(planeDist(edge.m_startPos, m_trianglePlane)) <= cutoff) {
			// check each edge plane of triangle
			for (int i = 0; i < 3; i++) {
				// project normal onto edge
				Vector3f edgePlaneNormal(m_edgePlanes[i].a, m_edgePlanes[i].b, m_edgePlanes[i].c);
				float edgePlaneProj = dot(edgePlaneNormal, edgeVec);

				// check that projection isn't vanishingly small
				if (FABS(edgePlaneProj) > 0.01f) {
					// check we have an intersection point
					float edgePlaneRatio = (m_edgePlanes[i].d - dot(edgePlaneNormal, edge.m_startPos)) / edgePlaneProj;
					if ((edgePlaneRatio > -ratio) && (edgePlaneRatio < (1 + ratio))) {
						// get intersection point
						Vector3f projVec  = edgeVec * edgePlaneRatio;
						intersectionPoint = edge.m_startPos + projVec;

						// check intersection point is within cutoff dist on edge
						if (FABS(planeDist(intersectionPoint, m_trianglePlane)) < cutoff) {
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
	float triPlaneRatio = (m_trianglePlane.d - dot(triPlaneNormal, edge.m_startPos)) / scalarProj;
	if ((triPlaneRatio < -ratio) || (triPlaneRatio > (1 + ratio))) {
		// we don't
		return false;
	}

	// get intersection point
	Vector3f projVec  = edgeVec * triPlaneRatio;
	intersectionPoint = edge.m_startPos + projVec;

	// double check point isn't outside the triangle
	for (int i = 0; i < 3; i++) {
		if (planeDist(intersectionPoint, m_edgePlanes[i]) > cutoff) {
			return false;
		}
	}
	// intersection point and is inside triangle
	return true;
}

/*
 * --INFO--
 * Address:	80416F7C
 * Size:	000370
 */
bool Sys::Triangle::intersect(Sys::Edge& edge, float cutoff, Vector3f& intersectionPoint, float& distFromCutoff)
{
	// check if edge intersects triangle within a given cutoff length from the start of the edge
	// output intersection point into intersectionPoint, return true if intersecting
	// also put distance from cutoff to intersection point into distFromCutoff

	// get length of edge and scalar projection of edge onto normal to triangle plane
	Vector3f edgeVec(edge.m_endPos.x - edge.m_startPos.x, edge.m_endPos.y - edge.m_startPos.y, edge.m_endPos.z - edge.m_startPos.z);
	float edgeLen = lenVec(edgeVec);

	Vector3f triPlaneNormal(m_trianglePlane.a, m_trianglePlane.b, m_trianglePlane.c);

	float scalarProj = dot(triPlaneNormal, edgeVec);

	// if edge has no length, cannot intersect
	if (0.0f == edgeLen) {
		return false;
	}

	// get ratio along edge...?
	float ratio = cutoff / edgeLen;

	// if edge is (close to) perpendicular to triangle, need more checks
	if (FABS(scalarProj) < 0.01f) {
		// if plane cuts edge below (or at) cutoff
		if (FABS(planeDist(edge.m_startPos, m_trianglePlane)) <= cutoff) {
			// check each edge plane of triangle
			for (int i = 0; i < 3; i++) {
				// project normal onto edge
				Vector3f edgePlaneNormal(m_edgePlanes[i].a, m_edgePlanes[i].b, m_edgePlanes[i].c);
				float edgePlaneProj = dot(edgePlaneNormal, edgeVec);

				// check that projection isn't vanishingly small
				if (FABS(edgePlaneProj) > 0.01f) {
					// check we have an intersection point
					float edgePlaneRatio = (m_edgePlanes[i].d - dot(edgePlaneNormal, edge.m_startPos)) / edgePlaneProj;
					if ((edgePlaneRatio > -ratio) && (edgePlaneRatio < (1 + ratio))) {
						// get intersection point
						Vector3f projVec  = edgeVec * edgePlaneRatio;
						intersectionPoint = edge.m_startPos + projVec;

						// check intersection point is within cutoff dist on edge
						float intersectDist = planeDist(intersectionPoint, m_trianglePlane);
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
	float triPlaneRatio = (m_trianglePlane.d - dot(triPlaneNormal, edge.m_startPos)) / scalarProj;
	if ((triPlaneRatio < -ratio) || (triPlaneRatio > (1 + ratio))) {
		// we don't
		return false;
	}

	// get intersection point
	Vector3f projVec  = edgeVec * triPlaneRatio;
	intersectionPoint = edge.m_startPos + projVec;

	// double check point isn't outside the triangle
	for (int i = 0; i < 3; i++) {
		if (planeDist(intersectionPoint, m_edgePlanes[i]) > cutoff) {
			return false;
		}
	}
	// intersection point and is inside triangle
	distFromCutoff = cutoff - planeDist(intersectionPoint, m_trianglePlane);
	return true;
}

/*
 * --INFO--
 * Address:	804172EC
 * Size:	0002AC
 */
bool Triangle::intersect(Sys::VertexTable&, Sys::Sphere&)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r5
	stw      r30, 0x38(r1)
	mr       r30, r4
	stw      r29, 0x34(r1)
	mr       r29, r3
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
	fabs     f0, f0
	frsp     f0, f0
	fcmpo    cr0, f0, f4
	ble      lbl_80417358
	li       r3, 0
	b        lbl_8041757C

lbl_80417358:
	lfs      f0, 0x20(r29)
	lfs      f2, 0x1c(r29)
	fmuls    f1, f5, f0
	lfs      f3, 0x24(r29)
	lfs      f0, 0x28(r29)
	fmadds   f1, f6, f2, f1
	fmadds   f1, f7, f3, f1
	fsubs    f8, f1, f0
	fcmpo    cr0, f8, f4
	ble      lbl_80417388
	li       r3, 0
	b        lbl_8041757C

lbl_80417388:
	lfs      f0, 0x30(r29)
	lfs      f2, 0x2c(r29)
	fmuls    f1, f5, f0
	lfs      f3, 0x34(r29)
	lfs      f0, 0x38(r29)
	stfs     f8, 0xc(r1)
	fmadds   f1, f6, f2, f1
	fmadds   f1, f7, f3, f1
	fsubs    f8, f1, f0
	fcmpo    cr0, f8, f4
	ble      lbl_804173BC
	li       r3, 0
	b        lbl_8041757C

lbl_804173BC:
	lfs      f0, 0x40(r29)
	lfs      f2, 0x3c(r29)
	fmuls    f1, f5, f0
	lfs      f3, 0x44(r29)
	lfs      f0, 0x48(r29)
	stfs     f8, 0x10(r1)
	fmadds   f1, f6, f2, f1
	fmadds   f1, f7, f3, f1
	fsubs    f8, f1, f0
	fcmpo    cr0, f8, f4
	ble      lbl_804173F0
	li       r3, 0
	b        lbl_8041757C

lbl_804173F0:
	lwz      r0, 0(r29)
	mr       r3, r31
	lwz      r6, 4(r29)
	addi     r4, r1, 0x18
	mulli    r0, r0, 0xc
	lwz      r8, 0x24(r30)
	stfs     f8, 0x14(r1)
	addi     r5, r1, 8
	add      r7, r8, r0
	lfs      f0, 0(r7)
	mulli    r0, r6, 0xc
	stfs     f0, 0x18(r1)
	add      r6, r8, r0
	lfs      f0, 4(r7)
	stfs     f0, 0x1c(r1)
	lfs      f0, 8(r7)
	stfs     f0, 0x20(r1)
	lfs      f0, 0(r6)
	stfs     f0, 0x24(r1)
	lfs      f0, 4(r6)
	stfs     f0, 0x28(r1)
	lfs      f0, 8(r6)
	stfs     f0, 0x2c(r1)
	bl       intersect__Q23Sys6SphereFRQ23Sys4EdgeRf
	clrlwi.  r0, r3, 0x18
	beq      lbl_80417460
	li       r3, 1
	b        lbl_8041757C

lbl_80417460:
	lwz      r0, 4(r29)
	mr       r3, r31
	lwz      r6, 8(r29)
	addi     r4, r1, 0x18
	mulli    r0, r0, 0xc
	lwz      r8, 0x24(r30)
	addi     r5, r1, 8
	add      r7, r8, r0
	lfs      f0, 0(r7)
	mulli    r0, r6, 0xc
	stfs     f0, 0x18(r1)
	add      r6, r8, r0
	lfs      f0, 4(r7)
	stfs     f0, 0x1c(r1)
	lfs      f0, 8(r7)
	stfs     f0, 0x20(r1)
	lfs      f0, 0(r6)
	stfs     f0, 0x24(r1)
	lfs      f0, 4(r6)
	stfs     f0, 0x28(r1)
	lfs      f0, 8(r6)
	stfs     f0, 0x2c(r1)
	bl       intersect__Q23Sys6SphereFRQ23Sys4EdgeRf
	clrlwi.  r0, r3, 0x18
	beq      lbl_804174CC
	li       r3, 1
	b        lbl_8041757C

lbl_804174CC:
	lwz      r0, 8(r29)
	mr       r3, r31
	lwz      r6, 0(r29)
	addi     r4, r1, 0x18
	mulli    r0, r0, 0xc
	lwz      r8, 0x24(r30)
	addi     r5, r1, 8
	add      r7, r8, r0
	lfs      f0, 0(r7)
	mulli    r0, r6, 0xc
	stfs     f0, 0x18(r1)
	add      r6, r8, r0
	lfs      f0, 4(r7)
	stfs     f0, 0x1c(r1)
	lfs      f0, 8(r7)
	stfs     f0, 0x20(r1)
	lfs      f0, 0(r6)
	stfs     f0, 0x24(r1)
	lfs      f0, 4(r6)
	stfs     f0, 0x28(r1)
	lfs      f0, 8(r6)
	stfs     f0, 0x2c(r1)
	bl       intersect__Q23Sys6SphereFRQ23Sys4EdgeRf
	clrlwi.  r0, r3, 0x18
	beq      lbl_80417538
	li       r3, 1
	b        lbl_8041757C

lbl_80417538:
	lfs      f0, lbl_80520308@sda21(r2)
	lfs      f1, 0xc(r1)
	fcmpo    cr0, f1, f0
	ble      lbl_80417550
	li       r3, 0
	b        lbl_8041757C

lbl_80417550:
	lfs      f1, 0x10(r1)
	fcmpo    cr0, f1, f0
	ble      lbl_80417564
	li       r3, 0
	b        lbl_8041757C

lbl_80417564:
	lfs      f1, 0x14(r1)
	fcmpo    cr0, f1, f0
	ble      lbl_80417578
	li       r3, 0
	b        lbl_8041757C

lbl_80417578:
	li       r3, 1

lbl_8041757C:
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	80417598
 * Size:	0002F8
 */
bool Triangle::intersect(Sys::VertexTable&, Sys::Sphere&, Vector3f&)
{
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

/*
 * --INFO--
 * Address:	80417890
 * Size:	0002F8
 */
bool Triangle::intersectHard(Sys::VertexTable&, Sys::Sphere&, Vector3f&)
{
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

/*
 * --INFO--
 * Address:	........
 * Size:	00014C
 */
bool Triangle::intersectOptimistic(Sys::Sphere&, Vector3f&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80417B88
 * Size:	0000EC
 */
bool Triangle::insideXZ(Vector3f&)
{
	/*
	lfs      f4, 0x10(r3)
	lfs      f7, lbl_80520308@sda21(r2)
	fcmpo    cr0, f4, f7
	cror     2, 0, 2
	bne      lbl_80417BA4
	li       r3, 0
	blr

lbl_80417BA4:
	lfs      f1, 0x14(r3)
	lfs      f0, 8(r4)
	lfs      f2, 0xc(r3)
	fmuls    f0, f1, f0
	lfs      f1, 0(r4)
	lfs      f3, 0x18(r3)
	fmadds   f0, f2, f1, f0
	fsubs    f0, f3, f0
	fdivs    f0, f0, f4
	stfs     f0, 4(r4)
	lfs      f2, 4(r4)
	lfs      f0, 0x20(r3)
	lfs      f4, 0(r4)
	fmuls    f1, f2, f0
	lfs      f3, 0x1c(r3)
	lfs      f6, 8(r4)
	lfs      f5, 0x24(r3)
	fmadds   f1, f4, f3, f1
	lfs      f0, 0x28(r3)
	fmadds   f1, f6, f5, f1
	fsubs    f0, f1, f0
	fcmpo    cr0, f0, f7
	ble      lbl_80417C08
	li       r3, 0
	blr

lbl_80417C08:
	lfs      f0, 0x30(r3)
	lfs      f3, 0x2c(r3)
	fmuls    f1, f2, f0
	lfs      f5, 0x34(r3)
	lfs      f0, 0x38(r3)
	fmadds   f1, f4, f3, f1
	fmadds   f1, f6, f5, f1
	fsubs    f0, f1, f0
	fcmpo    cr0, f0, f7
	ble      lbl_80417C38
	li       r3, 0
	blr

lbl_80417C38:
	addi     r3, r3, 0x20
	lfs      f0, 0x20(r3)
	lfs      f3, 0x1c(r3)
	fmuls    f1, f2, f0
	lfs      f5, 0x24(r3)
	lfs      f0, 0x28(r3)
	fmadds   f1, f4, f3, f1
	fmadds   f1, f6, f5, f1
	fsubs    f0, f1, f0
	fcmpo    cr0, f0, f7
	ble      lbl_80417C6C
	li       r3, 0
	blr

lbl_80417C6C:
	li       r3, 1
	blr
	*/
}

/*
 * --INFO--
 * Address:	80417C74
 * Size:	0004C8
 */
void Triangle::makePlanes(Sys::VertexTable&)
{
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

/*
 * --INFO--
 * Address:	8041813C
 * Size:	000040
 */
bool RayIntersectInfo::condition(Sys::Triangle&)
{
	/*
	lbz      r0, 0x1c(r3)
	cmplwi   r0, 0
	beq      lbl_80418174
	lfs      f1, 0x10(r4)
	lfs      f0, lbl_80520310@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8041816C
	lfs      f0, lbl_80520324@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8041816C
	li       r3, 1
	blr

lbl_8041816C:
	li       r3, 0
	blr

lbl_80418174:
	li       r3, 1
	blr
	*/
}

/*
 * --INFO--
 * Address:	8041817C
 * Size:	000428
 */
void GridDivider::createTriangles(Sys::CreateTriangleArg&)
{
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

/*
 * --INFO--
 * Address:	804185A4
 * Size:	0001D8
 */
float GridDivider::getMinY(Vector3f&)
{
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

/*
 * --INFO--
 * Address:	8041877C
 * Size:	000234
 */
void GridDivider::getCurrTri(Game::CurrTriInfo&)
{
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

/*
 * --INFO--
 * Address:	804189B0
 * Size:	000230
 */
TriIndexList* GridDivider::findTriLists(Sys::Sphere&)
{
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

/*
 * --INFO--
 * Address:	80418BE0
 * Size:	00045C
 */
void GridDivider::create(BoundBox&, int, int, Sys::VertexTable*, Sys::TriangleTable*)
{
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

/*
 * --INFO--
 * Address:	8041903C
 * Size:	000088
 */
TriIndexList::TriIndexList()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__5CNodeFv
	lis      r4, __vt__16GenericContainer@ha
	lis      r3, "__vt__12Container<i>"@ha
	addi     r0, r4, __vt__16GenericContainer@l
	lis      r5, "__vt__17ArrayContainer<i>"@ha
	stw      r0, 0(r31)
	addi     r0, r3, "__vt__12Container<i>"@l
	lis      r4, __vt__Q23Sys9IndexList@ha
	lis      r3, __vt__Q23Sys12TriIndexList@ha
	stw      r0, 0(r31)
	li       r7, 0
	addi     r6, r5, "__vt__17ArrayContainer<i>"@l
	li       r5, 1
	stb      r7, 0x18(r31)
	addi     r4, r4, __vt__Q23Sys9IndexList@l
	addi     r0, r3, __vt__Q23Sys12TriIndexList@l
	mr       r3, r31
	stw      r6, 0(r31)
	stb      r5, 0x18(r31)
	stw      r7, 0x20(r31)
	stw      r7, 0x1c(r31)
	stw      r7, 0x24(r31)
	stw      r4, 0(r31)
	stw      r0, 0(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void GridDivider::write(Stream&)
{
	// UNUSED FUNCTION
}

/*
 * @generated{write__31ArrayContainer<Q23Sys8Triangle>FR6Stream}
 * --INFO--
 * Address:	804190C4
 * Size:	0000D4
 */
// void ArrayContainer<Sys::Triangle>::write(Stream&)
// {
// 	/*
// 	stwu     r1, -0x20(r1)
// 	mflr     r0
// 	stw      r0, 0x24(r1)
// 	stmw     r27, 0xc(r1)
// 	mr       r28, r4
// 	mr       r27, r3
// 	lwz      r4, 0x14(r3)
// 	mr       r3, r28
// 	bl       textBeginGroup__6StreamFPc
// 	lwz      r4, 0x414(r28)
// 	mr       r3, r28
// 	bl       textWriteTab__6StreamFi
// 	lwz      r4, 0x20(r27)
// 	mr       r3, r28
// 	bl       writeInt__6StreamFi
// 	mr       r3, r28
// 	addi     r4, r2, lbl_80520338@sda21
// 	crclr    6
// 	bl       textWriteText__6StreamFPce
// 	lis      r3, lbl_804997A8@ha
// 	li       r29, 0
// 	addi     r31, r3, lbl_804997A8@l
// 	li       r30, 0
// 	b        lbl_80419170

// lbl_80419124:
// 	lwz      r4, 0x414(r28)
// 	mr       r3, r28
// 	bl       textWriteTab__6StreamFi
// 	mr       r3, r27
// 	lwz      r0, 0x24(r27)
// 	lwz      r12, 0(r27)
// 	mr       r4, r28
// 	add      r5, r0, r30
// 	lwz      r12, 0x2c(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r6, 0x20(r27)
// 	mr       r3, r28
// 	mr       r4, r31
// 	mr       r5, r29
// 	crclr    6
// 	bl       textWriteText__6StreamFPce
// 	addi     r30, r30, 0x60
// 	addi     r29, r29, 1

// lbl_80419170:
// 	lwz      r0, 0x20(r27)
// 	cmpw     r29, r0
// 	blt      lbl_80419124
// 	mr       r3, r28
// 	bl       textEndGroup__6StreamFv
// 	lmw      r27, 0xc(r1)
// 	lwz      r0, 0x24(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x20
// 	blr
// 	*/
// }

/*
 * @generated{writeObject__31ArrayContainer<Q23Sys8Triangle>FR6StreamRQ23Sys8Triangle}
 * --INFO--
 * Address:	80419198
 * Size:	000004
 */
// void ArrayContainer<Sys::Triangle>::writeObject(Stream&, Sys::Triangle&) { }

/*
 * --INFO--
 * Address:	........
 * Size:	0000C0
 */
void GridInfo::write(Stream&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8041919C
 * Size:	000248
 */
void GridDivider::read(Stream& stream)
{
	m_vertexTable = new VertexTable;
	m_vertexTable->read(stream);

	m_triangleTable = new TriangleTable;
	m_triangleTable->read(stream);

	m_boundingBox.read(stream);

	m_maxX   = stream.readInt();
	m_maxZ   = stream.readInt();
	m_scaleX = stream.readFloat();
	m_scaleZ = stream.readFloat();

	Vector2i maxVals = Vector2i(m_maxX, m_maxZ);
	int maxLim       = maxVals.x * maxVals.y;
	m_triIndexLists  = new TriIndexList[maxLim];

	m_boundingBox.m_min = m_boundingBox.m_min;
	m_boundingBox.m_max = m_boundingBox.m_max;

	float X  = m_boundingBox.m_max.x - m_boundingBox.m_min.x;
	m_scaleX = FABS(X) / (float)maxVals.x;
	float Z  = m_boundingBox.m_max.z - m_boundingBox.m_min.z;
	m_scaleZ = FABS(Z) / (float)maxVals.y;

	readIndexList(stream);

	m_triangleTable->createTriangleSphere(*m_vertexTable);
};

/*
 * @generated{read__31ArrayContainer<Q23Sys8Triangle>FR6Stream}
 * --INFO--
 * Address:	804193E4
 * Size:	0000B0
 */
// void ArrayContainer<Sys::Triangle>::read(Stream&)
// {
// 	/*
// 	stwu     r1, -0x20(r1)
// 	mflr     r0
// 	stw      r0, 0x24(r1)
// 	stw      r31, 0x1c(r1)
// 	stw      r30, 0x18(r1)
// 	stw      r29, 0x14(r1)
// 	mr       r29, r4
// 	stw      r28, 0x10(r1)
// 	mr       r28, r3
// 	mr       r3, r29
// 	bl       readInt__6StreamFv
// 	stw      r3, 0x20(r28)
// 	mr       r3, r28
// 	lwz      r12, 0(r28)
// 	lwz      r4, 0x20(r28)
// 	lwz      r12, 0x3c(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x20(r28)
// 	li       r30, 0
// 	li       r31, 0
// 	stw      r0, 0x1c(r28)
// 	b        lbl_80419468

// lbl_80419440:
// 	mr       r3, r28
// 	lwz      r0, 0x24(r28)
// 	lwz      r12, 0(r28)
// 	mr       r4, r29
// 	add      r5, r0, r31
// 	lwz      r12, 0x30(r12)
// 	mtctr    r12
// 	bctrl
// 	addi     r31, r31, 0x60
// 	addi     r30, r30, 1

// lbl_80419468:
// 	lwz      r0, 0x20(r28)
// 	cmpw     r30, r0
// 	blt      lbl_80419440
// 	lwz      r0, 0x24(r1)
// 	lwz      r31, 0x1c(r1)
// 	lwz      r30, 0x18(r1)
// 	lwz      r29, 0x14(r1)
// 	lwz      r28, 0x10(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x20
// 	blr
// 	*/
// }

/*
 * @generated{readObject__31ArrayContainer<Q23Sys8Triangle>FR6StreamRQ23Sys8Triangle}
 * --INFO--
 * Address:	80419494
 * Size:	000004
 */
// void ArrayContainer<Sys::Triangle>::readObject(Stream&, Sys::Triangle&) { }

/*
 * --INFO--
 * Address:	80419498
 * Size:	000074
 */
void TriangleTable::createTriangleSphere(Sys::VertexTable&)
{
	for (int i = 0; i < m_limit; i++) {
		m_objects[i].createSphere(arg0);
	}
}

/*
 * --INFO--
 * Address:	8041950C
 * Size:	000088
 */
void TriIndexList::constructClone(Sys::TriangleTable& triTable)
{
	alloc(triTable.m_count);
	for (int i = 0; i < triTable.m_count; i++) {
		addOne(i);
	}
}

/*
 * --INFO--
 * Address:	80419594
 * Size:	000150
 */
void TriIndexList::getMinMax(VertexTable& vertTable, TriangleTable& triTable, Vector3f& vec1, Vector3f& vec2, float& min, float& max)
{
	min = 10000000000.0f;
	max = -10000000000.0f;

	for (int i = 0; i < m_count; i++) {
		Triangle* currTri = &triTable.m_objects[m_objects[i]];
		Vector3f vertices[3];
		vertices[0] = vertTable.m_objects[currTri->m_vertices.x];
		vertices[1] = vertTable.m_objects[currTri->m_vertices.y];
		vertices[2] = vertTable.m_objects[currTri->m_vertices.z];

		for (int j = 0; j < 3; j++) {
			float testVal = vec1.dot(vertices[j] - vec2);
			if (testVal > max) {
				max = testVal;
			}
			if (testVal < min) {
				min = testVal;
			}
		};
	}
}

/*
 * --INFO--
 * Address:	804196E4
 * Size:	000294
 */
void TriIndexList::makeCovarianceMatrix(Sys::VertexTable&, Sys::TriangleTable&, Matrix3f&, Vector3f&)
{
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

/*
 * --INFO--
 * Address:	80419978
 * Size:	000004
 */
void TriIndexList::draw(Graphics&, Sys::VertexTable&, Sys::TriangleTable&, bool) { }

/*
 * --INFO--
 * Address:	8041997C
 * Size:	00007C
 */
TriangleTable::TriangleTable() { }

/*
 * @generated{__dt__31ArrayContainer<Q23Sys8Triangle>Fv}
 * --INFO--
 * Address:	804199F8
 * Size:	000080
 */
// void ArrayContainer<Sys::Triangle>::~ArrayContainer()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r4
// 	stw      r30, 8(r1)
// 	or.      r30, r3, r3
// 	beq      lbl_80419A5C
// 	lis      r4, "__vt__31ArrayContainer<Q23Sys8Triangle>"@ha
// 	addi     r0, r4, "__vt__31ArrayContainer<Q23Sys8Triangle>"@l
// 	stw      r0, 0(r30)
// 	beq      lbl_80419A4C
// 	lis      r4, "__vt__26Container<Q23Sys8Triangle>"@ha
// 	addi     r0, r4, "__vt__26Container<Q23Sys8Triangle>"@l
// 	stw      r0, 0(r30)
// 	beq      lbl_80419A4C
// 	lis      r5, __vt__16GenericContainer@ha
// 	li       r4, 0
// 	addi     r0, r5, __vt__16GenericContainer@l
// 	stw      r0, 0(r30)
// 	bl       __dt__5CNodeFv

// lbl_80419A4C:
// 	extsh.   r0, r31
// 	ble      lbl_80419A5C
// 	mr       r3, r30
// 	bl       __dl__FPv

// lbl_80419A5C:
// 	lwz      r0, 0x14(r1)
// 	mr       r3, r30
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * @generated{__dt__26Container<Q23Sys8Triangle>Fv}
 * --INFO--
 * Address:	80419A78
 * Size:	000070
 */
// void Container<Sys::Triangle>::~Container()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r4
// 	stw      r30, 8(r1)
// 	or.      r30, r3, r3
// 	beq      lbl_80419ACC
// 	lis      r4, "__vt__26Container<Q23Sys8Triangle>"@ha
// 	addi     r0, r4, "__vt__26Container<Q23Sys8Triangle>"@l
// 	stw      r0, 0(r30)
// 	beq      lbl_80419ABC
// 	lis      r5, __vt__16GenericContainer@ha
// 	li       r4, 0
// 	addi     r0, r5, __vt__16GenericContainer@l
// 	stw      r0, 0(r30)
// 	bl       __dt__5CNodeFv

// lbl_80419ABC:
// 	extsh.   r0, r31
// 	ble      lbl_80419ACC
// 	mr       r3, r30
// 	bl       __dl__FPv

// lbl_80419ACC:
// 	lwz      r0, 0x14(r1)
// 	mr       r3, r30
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void TriangleTable::findMaxVertexIndex(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80419AE8
 * Size:	00013C
 */
void VertexTable::transform(Matrixf&)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r27, 0x1c(r1)
	mr       r27, r3
	mr       r28, r4
	li       r30, 0
	li       r31, 0
	b        lbl_80419B44

lbl_80419B0C:
	lwz      r0, 0x24(r27)
	mr       r3, r28
	addi     r5, r1, 8
	add      r29, r0, r31
	mr       r4, r29
	bl       PSMTXMultVec
	lfs      f1, 0xc(r1)
	addi     r31, r31, 0xc
	lfs      f2, 0x10(r1)
	addi     r30, r30, 1
	lfs      f0, 8(r1)
	stfs     f0, 0(r29)
	stfs     f1, 4(r29)
	stfs     f2, 8(r29)

lbl_80419B44:
	lwz      r0, 0x1c(r27)
	cmpw     r30, r0
	blt      lbl_80419B0C
	lfs      f1, lbl_8052033C@sda21(r2)
	li       r3, 0
	lfs      f0, lbl_80520340@sda21(r2)
	mr       r5, r3
	stfs     f1, 0x28(r27)
	stfs     f1, 0x2c(r27)
	stfs     f1, 0x30(r27)
	stfs     f0, 0x34(r27)
	stfs     f0, 0x38(r27)
	stfs     f0, 0x3c(r27)
	b        lbl_80419C04

lbl_80419B7C:
	lwz      r0, 0x24(r27)
	lfs      f0, 0x28(r27)
	add      r4, r0, r5
	lfs      f1, 0(r4)
	fcmpo    cr0, f1, f0
	bge      lbl_80419B98
	stfs     f1, 0x28(r27)

lbl_80419B98:
	lfs      f1, 4(r4)
	lfs      f0, 0x2c(r27)
	fcmpo    cr0, f1, f0
	bge      lbl_80419BAC
	stfs     f1, 0x2c(r27)

lbl_80419BAC:
	lfs      f1, 8(r4)
	lfs      f0, 0x30(r27)
	fcmpo    cr0, f1, f0
	bge      lbl_80419BC0
	stfs     f1, 0x30(r27)

lbl_80419BC0:
	lfs      f1, 0(r4)
	lfs      f0, 0x34(r27)
	fcmpo    cr0, f1, f0
	ble      lbl_80419BD4
	stfs     f1, 0x34(r27)

lbl_80419BD4:
	lfs      f1, 4(r4)
	lfs      f0, 0x38(r27)
	fcmpo    cr0, f1, f0
	ble      lbl_80419BE8
	stfs     f1, 0x38(r27)

lbl_80419BE8:
	lfs      f1, 8(r4)
	lfs      f0, 0x3c(r27)
	fcmpo    cr0, f1, f0
	ble      lbl_80419BFC
	stfs     f1, 0x3c(r27)

lbl_80419BFC:
	addi     r5, r5, 0xc
	addi     r3, r3, 1

lbl_80419C04:
	lwz      r0, 0x1c(r27)
	cmpw     r3, r0
	blt      lbl_80419B7C
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80419C24
 * Size:	0000D4
 */
void VertexTable::write(Stream&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r28, r4
	mr       r27, r3
	lwz      r4, 0x14(r3)
	mr       r3, r28
	bl       textBeginGroup__6StreamFPc
	lwz      r4, 0x414(r28)
	mr       r3, r28
	bl       textWriteTab__6StreamFi
	lwz      r4, 0x20(r27)
	mr       r3, r28
	bl       writeInt__6StreamFi
	mr       r3, r28
	addi     r4, r2, lbl_80520338@sda21
	crclr    6
	bl       textWriteText__6StreamFPce
	lis      r3, lbl_804997A8@ha
	li       r29, 0
	addi     r31, r3, lbl_804997A8@l
	li       r30, 0
	b        lbl_80419CD0

lbl_80419C84:
	lwz      r4, 0x414(r28)
	mr       r3, r28
	bl       textWriteTab__6StreamFi
	mr       r3, r27
	lwz      r0, 0x24(r27)
	lwz      r12, 0(r27)
	mr       r4, r28
	add      r5, r0, r30
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r6, 0x20(r27)
	mr       r3, r28
	mr       r4, r31
	mr       r5, r29
	crclr    6
	bl       textWriteText__6StreamFPce
	addi     r30, r30, 0xc
	addi     r29, r29, 1

lbl_80419CD0:
	lwz      r0, 0x20(r27)
	cmpw     r29, r0
	blt      lbl_80419C84
	mr       r3, r28
	bl       textEndGroup__6StreamFv
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80419CF8
 * Size:	000024
 */
void VertexTable::writeObject(Stream&, Vector3f&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r3, r5
	stw      r0, 0x14(r1)
	bl       "write__10Vector3<f>FR6Stream"
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80419D1C
 * Size:	000090
 */
VertexTable::~VertexTable(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80419D90
	lis      r4, __vt__Q23Sys11VertexTable@ha
	addi     r0, r4, __vt__Q23Sys11VertexTable@l
	stw      r0, 0(r30)
	beq      lbl_80419D80
	lis      r4, "__vt__28ArrayContainer<10Vector3<f>>"@ha
	addi     r0, r4, "__vt__28ArrayContainer<10Vector3<f>>"@l
	stw      r0, 0(r30)
	beq      lbl_80419D80
	lis      r4, "__vt__23Container<10Vector3<f>>"@ha
	addi     r0, r4, "__vt__23Container<10Vector3<f>>"@l
	stw      r0, 0(r30)
	beq      lbl_80419D80
	lis      r5, __vt__16GenericContainer@ha
	li       r4, 0
	addi     r0, r5, __vt__16GenericContainer@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_80419D80:
	extsh.   r0, r31
	ble      lbl_80419D90
	mr       r3, r30
	bl       __dl__FPv

lbl_80419D90:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80419DAC
 * Size:	000024
 */
void VertexTable::readObject(Stream&, Vector3f&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r3, r5
	stw      r0, 0x14(r1)
	bl       "read__10Vector3<f>FR6Stream"
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80419DD0
 * Size:	000090
 */
TriangleTable::~TriangleTable(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80419E44
	lis      r4, __vt__Q23Sys13TriangleTable@ha
	addi     r0, r4, __vt__Q23Sys13TriangleTable@l
	stw      r0, 0(r30)
	beq      lbl_80419E34
	lis      r4, "__vt__31ArrayContainer<Q23Sys8Triangle>"@ha
	addi     r0, r4, "__vt__31ArrayContainer<Q23Sys8Triangle>"@l
	stw      r0, 0(r30)
	beq      lbl_80419E34
	lis      r4, "__vt__26Container<Q23Sys8Triangle>"@ha
	addi     r0, r4, "__vt__26Container<Q23Sys8Triangle>"@l
	stw      r0, 0(r30)
	beq      lbl_80419E34
	lis      r5, __vt__16GenericContainer@ha
	li       r4, 0
	addi     r0, r5, __vt__16GenericContainer@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_80419E34:
	extsh.   r0, r31
	ble      lbl_80419E44
	mr       r3, r30
	bl       __dl__FPv

lbl_80419E44:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80419E60
 * Size:	000088
 */
void TriangleTable::readObject(Stream&, Sys::Triangle&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r5
	stw      r30, 8(r1)
	mr       r30, r4
	mr       r3, r30
	bl       readInt__6StreamFv
	stw      r3, 0(r31)
	mr       r3, r30
	bl       readInt__6StreamFv
	stw      r3, 4(r31)
	mr       r3, r30
	bl       readInt__6StreamFv
	stw      r3, 8(r31)
	mr       r4, r30
	addi     r3, r31, 0xc
	bl       read__5PlaneFR6Stream
	mr       r4, r30
	addi     r3, r31, 0x1c
	bl       read__5PlaneFR6Stream
	mr       r4, r30
	addi     r3, r31, 0x2c
	bl       read__5PlaneFR6Stream
	mr       r4, r30
	addi     r3, r31, 0x3c
	bl       read__5PlaneFR6Stream
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80419EE8
 * Size:	000088
 */
void TriangleTable::writeObject(Stream&, Sys::Triangle&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r5
	stw      r30, 8(r1)
	mr       r30, r4
	mr       r3, r30
	lwz      r4, 0(r5)
	bl       writeInt__6StreamFi
	lwz      r4, 4(r31)
	mr       r3, r30
	bl       writeInt__6StreamFi
	lwz      r4, 8(r31)
	mr       r3, r30
	bl       writeInt__6StreamFi
	mr       r4, r30
	addi     r3, r31, 0xc
	bl       write__5PlaneFR6Stream
	mr       r4, r30
	addi     r3, r31, 0x1c
	bl       write__5PlaneFR6Stream
	mr       r4, r30
	addi     r3, r31, 0x2c
	bl       write__5PlaneFR6Stream
	mr       r4, r30
	addi     r3, r31, 0x3c
	bl       write__5PlaneFR6Stream
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80419F70
 * Size:	000034
 */
void GridDivider::getBoundBox(BoundBox&)
{
	/*
	lfs      f0, 0x2c(r3)
	stfs     f0, 0(r4)
	lfs      f0, 0x30(r3)
	stfs     f0, 4(r4)
	lfs      f0, 0x34(r3)
	stfs     f0, 8(r4)
	lfs      f0, 0x38(r3)
	stfs     f0, 0xc(r4)
	lfs      f0, 0x3c(r3)
	stfs     f0, 0x10(r4)
	lfs      f0, 0x40(r3)
	stfs     f0, 0x14(r4)
	blr
	*/
}

} // namespace Sys

/*
 * @generated{setArray__31ArrayContainer<Q23Sys8Triangle>FPQ23Sys8Trianglei}
 * --INFO--
 * Address:	80419FA4
 * Size:	000010
 */
// void ArrayContainer<Sys::Triangle>::setArray(Sys::Triangle*, int)
// {
// 	/*
// 	stw      r4, 0x24(r3)
// 	stw      r5, 0x20(r3)
// 	stw      r5, 0x1c(r3)
// 	blr
// 	*/
// }

/*
 * @generated{get__31ArrayContainer<Q23Sys8Triangle>FPv}
 * --INFO--
 * Address:	80419FB4
 * Size:	000010
 */
// void ArrayContainer<Sys::Triangle>::get(void*)
// {
// 	/*
// 	mulli    r0, r4, 0x60
// 	lwz      r3, 0x24(r3)
// 	add      r3, r3, r0
// 	blr
// 	*/
// }

/*
 * @generated{getNext__31ArrayContainer<Q23Sys8Triangle>FPv}
 * --INFO--
 * Address:	80419FC4
 * Size:	000008
 */
// void ArrayContainer<Sys::Triangle>::getNext(void*)
// {
// 	/*
// 	addi     r3, r4, 1
// 	blr
// 	*/
// }

/*
 * @generated{getStart__31ArrayContainer<Q23Sys8Triangle>Fv}
 * --INFO--
 * Address:	80419FCC
 * Size:	000008
 */
// u32 ArrayContainer<Sys::Triangle>::getStart() { return 0x0; }

/*
 * @generated{getEnd__31ArrayContainer<Q23Sys8Triangle>Fv}
 * --INFO--
 * Address:	80419FD4
 * Size:	000008
 */
// void ArrayContainer<Sys::Triangle>::getEnd()
// {
// 	/*
// 	lwz      r3, 0x1c(r3)
// 	blr
// 	*/
// }

/*
 * @generated{getAt__31ArrayContainer<Q23Sys8Triangle>Fi}
 * --INFO--
 * Address:	80419FDC
 * Size:	000010
 */
// void ArrayContainer<Sys::Triangle>::getAt(int)
// {
// 	/*
// 	mulli    r0, r4, 0x60
// 	lwz      r3, 0x24(r3)
// 	add      r3, r3, r0
// 	blr
// 	*/
// }

/*
 * @generated{getTo__31ArrayContainer<Q23Sys8Triangle>Fv}
 * @generated{getObject__26Container<Q23Sys8Triangle>FPv}
 * @generated{getAt__26Container<Q23Sys8Triangle>Fi}
 * @generated{getTo__26Container<Q23Sys8Triangle>Fv}
 * --INFO--
 * Address:	80419FEC
 * Size:	000008
 */
// void ArrayContainer<Sys::Triangle>::getTo()
// {
// 	/*
// 	lwz      r3, 0x20(r3)
// 	blr
// 	*/
// }

/*
 * @generated{getObject__26Container<Q23Sys8Triangle>FPv}
 * --INFO--
 * Address:	80419FF4
 * Size:	00002C
 */
// void Container<Sys::Triangle>::getObject(void*)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * @generated{getAt__26Container<Q23Sys8Triangle>Fi}
 * --INFO--
 * Address:	8041A020
 * Size:	000008
 */
// u32 Container<Sys::Triangle>::getAt(int) { return 0x0; }

/*
 * @generated{getTo__26Container<Q23Sys8Triangle>Fv}
 * --INFO--
 * Address:	8041A028
 * Size:	000008
 */
// u32 Container<Sys::Triangle>::getTo() { return 0x0; }
