#include "types.h"
#include "Sys/Cylinder.h"
#include "Vector3.h"
#include "sysMath.h"
#include "Sys/geometry.h"
#include "Sys/Triangle.h"

namespace Sys {

/*
 * --INFO--
 * Address:	........
 * Size:	000104
 */
Cylinder::Cylinder(const Vector3f& start, const Vector3f& end, f32 radius)
{
	mCenter = (start + end) * 0.5;
	mAxis   = end - start;

	f32 length = normalise(&mAxis);
	mLength    = length;
	mRadius    = radius;
}

/*
 * --INFO--
 * Address:	80421628
 * Size:	00003C
 */
Cylinder::Cylinder(const Vector3f& center, const Vector3f& axis, f32 len, f32 radius)
{
	mCenter = center;
	mAxis   = axis;
	mLength = len;
	mRadius = radius;
}

/*
 * --INFO--
 * Address:	80421664
 * Size:	000100
 */
void Cylinder::set(const Vector3f& start, const Vector3f& end, f32 radius)
{
	mCenter = (start + end) * 0.5;
	mAxis   = end - start;

	f32 length = normalise(&mAxis);
	mLength    = length;
	mRadius    = radius;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000188
 */
bool Cylinder::intersect(Plane const& plane)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80421764
 * Size:	000190
 */
bool Cylinder::culled(Plane const& inputPlane)
{
	Vector3f scaledAxis = mAxis * (0.5f * mLength);

	Vector3f lowerVec = mCenter - scaledAxis;
	Vector3f upperVec = mCenter + scaledAxis;

	Vector3f planeVec(inputPlane.a, inputPlane.b, inputPlane.c);
	f32 dotPlane     = dot(mAxis, planeVec);
	f32 scaledRadius = mRadius * pikmin2_sqrtf(-((dotPlane * dotPlane) - 1.0f));

	f32 below = scaledRadius + planeDist(lowerVec, (Plane&)inputPlane);
	f32 above = scaledRadius + planeDist(upperVec, (Plane&)inputPlane);

	if ((below > 0.0f) || (above > 0.0f)) {
		return false;
	}
	return true;
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	stw      r0, 0xa4(r1)
	stfd     f31, 0x90(r1)
	psq_st   f31, 152(r1), 0, qr0
	stfd     f30, 0x80(r1)
	psq_st   f30, 136(r1), 0, qr0
	stfd     f29, 0x70(r1)
	psq_st   f29, 120(r1), 0, qr0
	stfd     f28, 0x60(r1)
	psq_st   f28, 104(r1), 0, qr0
	stfd     f27, 0x50(r1)
	psq_st   f27, 88(r1), 0, qr0
	stfd     f26, 0x40(r1)
	psq_st   f26, 72(r1), 0, qr0
	stfd     f25, 0x30(r1)
	psq_st   f25, 56(r1), 0, qr0
	stfd     f24, 0x20(r1)
	psq_st   f24, 40(r1), 0, qr0
	stfd     f23, 0x10(r1)
	psq_st   f23, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r31, r4
	lfs      f3, 0x10(r3)
	lfs      f0, 4(r4)
	lfs      f2, lbl_805203E8@sda21(r2)
	lfs      f1, 0x18(r3)
	fmuls    f0, f3, f0
	lfs      f4, 0xc(r3)
	fmuls    f5, f2, f1
	lfs      f1, 0(r4)
	lfs      f2, 0x14(r3)
	fmadds   f0, f4, f1, f0
	lfs      f1, 8(r4)
	fmuls    f28, f2, f5
	lfs      f25, 8(r3)
	fmuls    f27, f3, f5
	lfs      f24, 4(r3)
	fmuls    f26, f4, f5
	lfs      f23, 0(r3)
	fmadds   f1, f2, f1, f0
	lfs      f0, lbl_805203F0@sda21(r2)
	fsubs    f29, f25, f28
	fsubs    f30, f24, f27
	fsubs    f31, f23, f26
	fnmsubs  f1, f1, f1, f0
	bl       pikmin2_sqrtf__Ff
	lfs      f3, 4(r31)
	fadds    f2, f24, f27
	lfs      f6, 0x1c(r30)
	fadds    f4, f23, f26
	fmuls    f0, f30, f3
	lfs      f7, 0(r31)
	fmuls    f3, f2, f3
	lfs      f8, 8(r31)
	fadds    f5, f25, f28
	fmadds   f2, f31, f7, f0
	fmadds   f3, f4, f7, f3
	lfs      f4, 0xc(r31)
	fmuls    f6, f6, f1
	lfs      f0, lbl_805203EC@sda21(r2)
	fmadds   f1, f29, f8, f2
	fmadds   f2, f5, f8, f3
	fsubs    f1, f1, f4
	fsubs    f2, f2, f4
	fadds    f1, f6, f1
	fadds    f2, f6, f2
	fcmpo    cr0, f1, f0
	bgt      lbl_80421888
	fcmpo    cr0, f2, f0
	ble      lbl_80421890

lbl_80421888:
	li       r3, 0
	b        lbl_80421894

lbl_80421890:
	li       r3, 1

lbl_80421894:
	psq_l    f31, 152(r1), 0, qr0
	lfd      f31, 0x90(r1)
	psq_l    f30, 136(r1), 0, qr0
	lfd      f30, 0x80(r1)
	psq_l    f29, 120(r1), 0, qr0
	lfd      f29, 0x70(r1)
	psq_l    f28, 104(r1), 0, qr0
	lfd      f28, 0x60(r1)
	psq_l    f27, 88(r1), 0, qr0
	lfd      f27, 0x50(r1)
	psq_l    f26, 72(r1), 0, qr0
	lfd      f26, 0x40(r1)
	psq_l    f25, 56(r1), 0, qr0
	lfd      f25, 0x30(r1)
	psq_l    f24, 40(r1), 0, qr0
	lfd      f24, 0x20(r1)
	psq_l    f23, 24(r1), 0, qr0
	lfd      f23, 0x10(r1)
	lwz      r31, 0xc(r1)
	lwz      r0, 0xa4(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	804218F4
 * Size:	0001D8
 */
bool Cylinder::intersect(Triangle const& triangle, f32& p2)
{
	for (int i = 0; i < 3; i++) {
		if (culled(triangle.mEdgePlanes[i])) {
			return 0;
		}
	}

	Vector3f scaledAxis = mAxis * (0.5f * mLength);

	Vector3f planeVec(triangle.mTrianglePlane.a, triangle.mTrianglePlane.b, triangle.mTrianglePlane.c);
	f32 dotPlane = dot(mAxis, planeVec);

	Vector3f lowerVec = mCenter - scaledAxis;
	Vector3f upperVec = mCenter + scaledAxis;

	f32 scaledRadius = mRadius * pikmin2_sqrtf(-((dotPlane * dotPlane) - 1.0f));
	f32 below        = planeDist(lowerVec, (Plane&)triangle.mTrianglePlane) - scaledRadius;
	f32 above        = planeDist(upperVec, (Plane&)triangle.mTrianglePlane) + scaledRadius;

	if ((below * above) > 0.0f) {
		return false;
	}

	if (below < 0.0f) {
		p2 = -below;
	} else {
		p2 = -above;
	}
	return true;
	/*
	stwu     r1, -0xb0(r1)
	mflr     r0
	stw      r0, 0xb4(r1)
	stfd     f31, 0xa0(r1)
	psq_st   f31, 168(r1), 0, qr0
	stfd     f30, 0x90(r1)
	psq_st   f30, 152(r1), 0, qr0
	stfd     f29, 0x80(r1)
	psq_st   f29, 136(r1), 0, qr0
	stfd     f28, 0x70(r1)
	psq_st   f28, 120(r1), 0, qr0
	stfd     f27, 0x60(r1)
	psq_st   f27, 104(r1), 0, qr0
	stfd     f26, 0x50(r1)
	psq_st   f26, 88(r1), 0, qr0
	stfd     f25, 0x40(r1)
	psq_st   f25, 72(r1), 0, qr0
	stfd     f24, 0x30(r1)
	psq_st   f24, 56(r1), 0, qr0
	stfd     f23, 0x20(r1)
	psq_st   f23, 40(r1), 0, qr0
	stmw     r27, 0xc(r1)
	mr       r28, r4
	mr       r27, r3
	mr       r29, r5
	li       r30, 0
	mr       r31, r28

lbl_80421960:
	mr       r3, r27
	addi     r4, r31, 0x1c
	bl       culled__Q23Sys8CylinderFRC5Plane
	clrlwi.  r0, r3, 0x18
	beq      lbl_8042197C
	li       r3, 0
	b        lbl_80421A70

lbl_8042197C:
	addi     r30, r30, 1
	addi     r31, r31, 0x10
	cmpwi    r30, 3
	blt      lbl_80421960
	lfs      f3, 0x10(r27)
	lfs      f0, 0x10(r28)
	lfs      f2, lbl_805203E8@sda21(r2)
	lfs      f1, 0x18(r27)
	fmuls    f0, f3, f0
	lfs      f4, 0xc(r27)
	fmuls    f5, f2, f1
	lfs      f1, 0xc(r28)
	lfs      f2, 0x14(r27)
	fmadds   f0, f4, f1, f0
	lfs      f1, 0x14(r28)
	fmuls    f28, f2, f5
	lfs      f25, 8(r27)
	fmuls    f27, f3, f5
	lfs      f24, 4(r27)
	fmuls    f26, f4, f5
	lfs      f23, 0(r27)
	fmadds   f1, f2, f1, f0
	lfs      f0, lbl_805203F0@sda21(r2)
	fsubs    f29, f25, f28
	fsubs    f30, f24, f27
	fsubs    f31, f23, f26
	fnmsubs  f1, f1, f1, f0
	bl       pikmin2_sqrtf__Ff
	fadds    f0, f24, f27
	lfs      f2, 0x10(r28)
	lfs      f6, 0x1c(r27)
	fadds    f3, f23, f26
	fmuls    f4, f30, f2
	lfs      f7, 0xc(r28)
	fmuls    f2, f0, f2
	lfs      f8, 0x14(r28)
	fmadds   f5, f31, f7, f4
	lfs      f9, 0x18(r28)
	fadds    f4, f25, f28
	lfs      f0, lbl_805203EC@sda21(r2)
	fmadds   f2, f3, f7, f2
	fmadds   f3, f29, f8, f5
	fmuls    f5, f6, f1
	fmadds   f1, f4, f8, f2
	fsubs    f2, f3, f9
	fsubs    f1, f1, f9
	fsubs    f2, f2, f5
	fadds    f3, f5, f1
	fmuls    f1, f2, f3
	fcmpo    cr0, f1, f0
	ble      lbl_80421A50
	li       r3, 0
	b        lbl_80421A70

lbl_80421A50:
	fcmpo    cr0, f2, f0
	bge      lbl_80421A64
	fneg     f0, f2
	stfs     f0, 0(r29)
	b        lbl_80421A6C

lbl_80421A64:
	fneg     f0, f3
	stfs     f0, 0(r29)

lbl_80421A6C:
	li       r3, 1

lbl_80421A70:
	psq_l    f31, 168(r1), 0, qr0
	lfd      f31, 0xa0(r1)
	psq_l    f30, 152(r1), 0, qr0
	lfd      f30, 0x90(r1)
	psq_l    f29, 136(r1), 0, qr0
	lfd      f29, 0x80(r1)
	psq_l    f28, 120(r1), 0, qr0
	lfd      f28, 0x70(r1)
	psq_l    f27, 104(r1), 0, qr0
	lfd      f27, 0x60(r1)
	psq_l    f26, 88(r1), 0, qr0
	lfd      f26, 0x50(r1)
	psq_l    f25, 72(r1), 0, qr0
	lfd      f25, 0x40(r1)
	psq_l    f24, 56(r1), 0, qr0
	lfd      f24, 0x30(r1)
	psq_l    f23, 40(r1), 0, qr0
	lfd      f23, 0x20(r1)
	lmw      r27, 0xc(r1)
	lwz      r0, 0xb4(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0004A0
 */
void Cylinder::draw(Graphics& graphics)
{
	// UNUSED FUNCTION
}
} // namespace Sys
