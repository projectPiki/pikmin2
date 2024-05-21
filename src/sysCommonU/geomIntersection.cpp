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
	for (int i = 0; i < 3; i++) {
		edgeDists[i] = mEdgePlanes[i].calcDist(sweep.mSphere.mPosition);
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
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stw      r31, 0x6c(r1)
	stw      r30, 0x68(r1)
	stw      r29, 0x64(r1)
	stw      r28, 0x60(r1)
	mr       r31, r5
	mr       r29, r3
	lfs      f2, 0x10(r5)
	mr       r30, r4
	lfs      f0, 0x10(r3)
	addi     r28, r31, 0x30
	lbz      r0, 0x1c(r5)
	fmuls    f0, f2, f0
	lfs      f3, 0xc(r5)
	lfs      f1, 0xc(r3)
	cmpwi    r0, 1
	lfs      f5, 0x14(r5)
	fmadds   f1, f3, f1, f0
	lfs      f4, 0x14(r3)
	lfs      f0, 0x18(r3)
	fmadds   f1, f5, f4, f1
	fsubs    f31, f1, f0
	beq      lbl_8041CA70
	bge      lbl_8041CA48
	cmpwi    r0, 0
	bge      lbl_8041CA54
	b        lbl_8041CB3C

lbl_8041CA48:
	cmpwi    r0, 3
	bge      lbl_8041CB3C
	b        lbl_8041CAA0

lbl_8041CA54:
	fabs     f1, f31
	lfs      f0, 0x18(r31)
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8041CB3C
	li       r3, 0
	b        lbl_8041CE94

lbl_8041CA70:
	lfs      f0, 0x18(r31)
	fcmpo    cr0, f31, f0
	ble      lbl_8041CA84
	li       r3, 0
	b        lbl_8041CE94

lbl_8041CA84:
	fneg     f1, f0
	lfs      f0, lbl_805203B0@sda21(r2)
	fsubs    f0, f1, f0
	fcmpo    cr0, f31, f0
	bge      lbl_8041CB3C
	li       r3, 0
	b        lbl_8041CE94

lbl_8041CAA0:
	lfs      f0, 0(r31)
	stfs     f0, 0x40(r1)
	fsubs    f6, f0, f3
	lfs      f0, 4(r31)
	fsubs    f4, f0, f2
	stfs     f0, 0x44(r1)
	lfs      f1, 8(r31)
	fmuls    f0, f4, f4
	fsubs    f4, f1, f5
	stfs     f1, 0x48(r1)
	fmadds   f0, f6, f6, f0
	stfs     f3, 0x4c(r1)
	stfs     f2, 0x50(r1)
	fmadds   f1, f4, f4, f0
	stfs     f5, 0x54(r1)
	bl       pikmin2_sqrtf__Ff
	lfs      f0, lbl_805203B4@sda21(r2)
	fcmpu    cr0, f0, f1
	bne      lbl_8041CB00
	lfs      f0, 0x18(r31)
	fcmpo    cr0, f31, f0
	ble      lbl_8041CB3C
	li       r3, 0
	b        lbl_8041CE94

lbl_8041CB00:
	lfs      f1, 0x18(r31)
	mr       r3, r29
	mr       r5, r28
	addi     r4, r1, 0x40
	addi     r6, r31, 0x2c
	bl       "intersect__Q23Sys8TriangleFRQ23Sys4EdgefR10Vector3<f>Rf"
	clrlwi.  r0, r3, 0x18
	beq      lbl_8041CE94
	lfs      f0, 0xc(r29)
	stfs     f0, 0x20(r31)
	lfs      f0, 0x10(r29)
	stfs     f0, 0x24(r31)
	lfs      f0, 0x14(r29)
	stfs     f0, 0x28(r31)
	b        lbl_8041CE94

lbl_8041CB3C:
	lfs      f8, 0x10(r31)
	lfs      f2, 0x20(r29)
	lfs      f7, 0xc(r31)
	fmuls    f1, f8, f2
	lfs      f5, 0x1c(r29)
	lfs      f2, 0x30(r29)
	lfs      f9, 0x14(r31)
	fmadds   f0, f7, f5, f1
	lfs      f6, 0x24(r29)
	fmuls    f1, f8, f2
	lfs      f5, 0x2c(r29)
	lfs      f2, 0x40(r29)
	fmadds   f4, f9, f6, f0
	fmadds   f0, f7, f5, f1
	lfs      f3, 0x28(r29)
	fmuls    f1, f8, f2
	lfs      f6, 0x34(r29)
	fsubs    f2, f4, f3
	fmadds   f4, f9, f6, f0
	lfs      f5, 0x3c(r29)
	stfs     f2, 0x1c(r1)
	lfs      f3, 0x38(r29)
	fmadds   f0, f7, f5, f1
	lfs      f6, 0x44(r29)
	fsubs    f2, f4, f3
	lfs      f3, 0x48(r29)
	fmadds   f4, f9, f6, f0
	lfs      f0, 0x1c(r1)
	lfs      f1, lbl_805203B4@sda21(r2)
	stfs     f2, 0x20(r1)
	fsubs    f2, f4, f3
	fcmpo    cr0, f0, f1
	stfs     f2, 0x24(r1)
	cror     2, 0, 2
	bne      lbl_8041CC54
	lfs      f0, 0x20(r1)
	fcmpo    cr0, f0, f1
	cror     2, 0, 2
	bne      lbl_8041CC54
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	cror     2, 0, 2
	bne      lbl_8041CC54
	lfs      f0, 0xc(r29)
	li       r3, 1
	stfs     f0, 0x20(r31)
	lfs      f0, 0x10(r29)
	stfs     f0, 0x24(r31)
	lfs      f0, 0x14(r29)
	stfs     f0, 0x28(r31)
	lfs      f0, 0x18(r31)
	fsubs    f0, f0, f31
	stfs     f0, 0x2c(r31)
	lfs      f6, 0x18(r31)
	lfs      f0, 0x20(r31)
	lfs      f2, 0x24(r31)
	fmuls    f0, f0, f6
	lfs      f1, 0xc(r31)
	lfs      f4, 0x28(r31)
	fmuls    f2, f2, f6
	lfs      f3, 0x10(r31)
	fsubs    f0, f1, f0
	lfs      f5, 0x14(r31)
	fmuls    f1, f4, f6
	fsubs    f2, f3, f2
	stfs     f0, 0x30(r31)
	fsubs    f0, f5, f1
	stfs     f2, 0x34(r31)
	stfs     f0, 0x38(r31)
	b        lbl_8041CE94

lbl_8041CC54:
	lfs      f1, 0x18(r31)
	addi     r3, r1, 0xc
	lfs      f0, 0xc(r31)
	addi     r4, r1, 0x28
	addi     r5, r1, 8
	addi     r6, r31, 0x20
	stfs     f0, 0xc(r1)
	addi     r7, r31, 0x2c
	lfs      f0, 0x10(r31)
	stfs     f0, 0x10(r1)
	lfs      f0, 0x14(r31)
	stfs     f0, 0x14(r1)
	stfs     f1, 0x18(r1)
	lwz      r0, 0(r29)
	lwz      r10, 0x24(r30)
	mulli    r0, r0, 0xc
	lwz      r8, 4(r29)
	add      r9, r10, r0
	lfs      f0, 0(r9)
	mulli    r0, r8, 0xc
	stfs     f0, 0x28(r1)
	add      r8, r10, r0
	lfs      f0, 4(r9)
	stfs     f0, 0x2c(r1)
	lfs      f0, 8(r9)
	stfs     f0, 0x30(r1)
	lfs      f0, 0(r8)
	stfs     f0, 0x34(r1)
	lfs      f0, 4(r8)
	stfs     f0, 0x38(r1)
	lfs      f0, 8(r8)
	stfs     f0, 0x3c(r1)
	bl       "intersect__Q23Sys6SphereFRQ23Sys4EdgeRfR10Vector3<f>Rf"
	clrlwi.  r0, r3, 0x18
	beq      lbl_8041CD28
	lfs      f6, 0x18(r31)
	li       r3, 1
	lfs      f0, 0x20(r31)
	lfs      f2, 0x24(r31)
	fmuls    f0, f0, f6
	lfs      f1, 0xc(r31)
	lfs      f4, 0x28(r31)
	fmuls    f2, f2, f6
	lfs      f3, 0x10(r31)
	fsubs    f0, f1, f0
	lfs      f5, 0x14(r31)
	fmuls    f1, f4, f6
	fsubs    f2, f3, f2
	stfs     f0, 0x30(r31)
	fsubs    f0, f5, f1
	stfs     f2, 0x34(r31)
	stfs     f0, 0x38(r31)
	b        lbl_8041CE94

lbl_8041CD28:
	lwz      r0, 4(r29)
	addi     r3, r1, 0xc
	lwz      r8, 8(r29)
	addi     r4, r1, 0x28
	mulli    r0, r0, 0xc
	lwz      r10, 0x24(r30)
	addi     r5, r1, 8
	addi     r6, r31, 0x20
	add      r9, r10, r0
	addi     r7, r31, 0x2c
	lfs      f0, 0(r9)
	mulli    r0, r8, 0xc
	stfs     f0, 0x28(r1)
	add      r8, r10, r0
	lfs      f0, 4(r9)
	stfs     f0, 0x2c(r1)
	lfs      f0, 8(r9)
	stfs     f0, 0x30(r1)
	lfs      f0, 0(r8)
	stfs     f0, 0x34(r1)
	lfs      f0, 4(r8)
	stfs     f0, 0x38(r1)
	lfs      f0, 8(r8)
	stfs     f0, 0x3c(r1)
	bl       "intersect__Q23Sys6SphereFRQ23Sys4EdgeRfR10Vector3<f>Rf"
	clrlwi.  r0, r3, 0x18
	beq      lbl_8041CDDC
	lfs      f6, 0x18(r31)
	li       r3, 1
	lfs      f0, 0x20(r31)
	lfs      f2, 0x24(r31)
	fmuls    f0, f0, f6
	lfs      f1, 0xc(r31)
	lfs      f4, 0x28(r31)
	fmuls    f2, f2, f6
	lfs      f3, 0x10(r31)
	fsubs    f0, f1, f0
	lfs      f5, 0x14(r31)
	fmuls    f1, f4, f6
	fsubs    f2, f3, f2
	stfs     f0, 0x30(r31)
	fsubs    f0, f5, f1
	stfs     f2, 0x34(r31)
	stfs     f0, 0x38(r31)
	b        lbl_8041CE94

lbl_8041CDDC:
	lwz      r0, 8(r29)
	addi     r3, r1, 0xc
	lwz      r8, 0(r29)
	addi     r4, r1, 0x28
	mulli    r0, r0, 0xc
	lwz      r10, 0x24(r30)
	addi     r5, r1, 8
	addi     r6, r31, 0x20
	add      r9, r10, r0
	addi     r7, r31, 0x2c
	lfs      f0, 0(r9)
	mulli    r0, r8, 0xc
	stfs     f0, 0x28(r1)
	add      r8, r10, r0
	lfs      f0, 4(r9)
	stfs     f0, 0x2c(r1)
	lfs      f0, 8(r9)
	stfs     f0, 0x30(r1)
	lfs      f0, 0(r8)
	stfs     f0, 0x34(r1)
	lfs      f0, 4(r8)
	stfs     f0, 0x38(r1)
	lfs      f0, 8(r8)
	stfs     f0, 0x3c(r1)
	bl       "intersect__Q23Sys6SphereFRQ23Sys4EdgeRfR10Vector3<f>Rf"
	clrlwi.  r0, r3, 0x18
	beq      lbl_8041CE90
	lfs      f6, 0x18(r31)
	li       r3, 1
	lfs      f0, 0x20(r31)
	lfs      f2, 0x24(r31)
	fmuls    f0, f0, f6
	lfs      f1, 0xc(r31)
	lfs      f4, 0x28(r31)
	fmuls    f2, f2, f6
	lfs      f3, 0x10(r31)
	fsubs    f0, f1, f0
	lfs      f5, 0x14(r31)
	fmuls    f1, f4, f6
	fsubs    f2, f3, f2
	stfs     f0, 0x30(r31)
	fsubs    f0, f5, f1
	stfs     f2, 0x34(r31)
	stfs     f0, 0x38(r31)
	b        lbl_8041CE94

lbl_8041CE90:
	li       r3, 0

lbl_8041CE94:
	psq_l    f31, 120(r1), 0, qr0
	lwz      r0, 0x84(r1)
	lfd      f31, 0x70(r1)
	lwz      r31, 0x6c(r1)
	lwz      r30, 0x68(r1)
	lwz      r29, 0x64(r1)
	lwz      r28, 0x60(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}
} // namespace Sys
