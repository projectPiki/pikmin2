#include "JSystem/JStudio/math.h"
#include "JSystem/JGeometry.h"
#include "types.h"
#include "math.h"

namespace JStudio {

/**
 * @note Address: N/A
 * @note Size: 0x158
 */
void math::getRotation_xyz(MtxP mtx, f32 x, f32 y, f32 z)
{
	f32 cosx     = dolcosf(x * 0.017453292f);
	f32 sinx     = dolsinf(x * 0.017453292f);
	f32 cosy     = dolcosf(y * 0.017453292f);
	f32 siny     = dolsinf(y * 0.017453292f);
	f32 cosz     = dolcosf(z * 0.017453292f);
	f32 sinz     = dolsinf(z * 0.017453292f);
	f32 cosxcosz = cosx * cosz;
	f32 cosxsinz = cosx * sinz;
	f32 sinxcosz = sinx * cosz;
	f32 sinxsinz = sinx * sinz;

	mtx[0][0] = cosy * cosz;
	mtx[1][0] = cosy * sinz;
	mtx[2][0] = -siny;
	mtx[2][1] = sinx * cosy;
	mtx[2][2] = cosx * cosy;
	mtx[0][1] = ((sinxcosz * siny) - cosxsinz);
	mtx[0][2] = (sinxsinz + (cosxcosz * siny));
	mtx[1][1] = (cosxcosz + (sinxsinz * siny));
	mtx[1][2] = (((cosxsinz)*siny) - sinxcosz);
	mtx[0][3] = 0.0f;
	mtx[1][3] = 0.0f;
	mtx[2][3] = 0.0f;
}

/**
 * @note Address: 0x80010FC4
 * @note Size: 0x1B0
 */
void math::getTransformation_SRxyzT(MtxP mtx, const Vec& scale, const Vec& rotation, const Vec& translation)
{
	Mtx scaleMtx;
	PSMTXScale(scaleMtx, scale.x, scale.y, scale.z);
	Mtx tempMtx;
	rotate_xyz(scaleMtx, tempMtx, rotation);
	PSMTXTransApply(tempMtx, mtx, translation.x, translation.y, translation.z);
}

/**
 * @note Address: N/A
 * @note Size: 0x1B4
 */
void math::transform_SRxyzT(MtxP, f32 const (*)[4], Vec const&, Vec const&, Vec const&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80011174
 * @note Size: 0x254
 */
void math::getFromTransformation_SRxyzT(Vec* p1, Vec* p2, Vec* p3, const Mtx mtx)
{
	Vec row1;
	row1.x = mtx[0][0];
	row1.y = mtx[1][0];
	row1.z = mtx[2][0];
	p1->x  = PSVECMag(&row1);
	Vec row2;
	row2.x = mtx[0][1];
	row2.y = mtx[1][1];
	row2.z = mtx[2][1];
	p1->y  = PSVECMag(&row2);
	Vec row3;
	row3.x = mtx[0][2];
	row3.y = mtx[1][2];
	row3.z = mtx[2][2];
	p1->z  = PSVECMag(&row3);

	p3->x = mtx[0][3];
	p3->y = mtx[1][3];
	p3->z = mtx[2][3];

	f64 val0 = 0.0; // f10
	f64 val1 = 0.0; // f11
	f64 val2 = 0.0; // f4

	if (p1->x != 0.0f) {
		val0 = 1.0 / p1->x;
	}

	if (p1->y != 0.0f) {
		val1 = 1.0 / p1->y;
	}

	if (p1->z != 0.0f) {
		val2 = 1.0 / p1->z;
	}

	// this is all inlines/novel JGeometry structs according to tp debug

	f64 outX, outY, outZ;      // f28, f3, f29
	f64 d9 = mtx[2][2] * val2; // f8
	f64 d8 = mtx[2][1] * val1; // f7
	f64 d5 = mtx[1][1] * val1; // f2
	f64 d4 = mtx[1][0] * val0; // f29
	f64 d2 = mtx[0][1] * val1; // f1
	f64 d1 = mtx[0][0] * val0; // f30
	f64 d7 = mtx[2][0] * val0; // f31

	if (d7 - 1.0 >= -JGeometry::TUtilf::epsilon()) {
		outX = atan2(-d2, d5);
		outY = -1.5707963267948966;
		outZ = 0.0;
	} else if (d7 + 1.0 <= JGeometry::TUtilf::epsilon()) {
		outX = atan2(d2, d5);
		outY = 1.5707963267948966;
		outZ = 0.0;
	} else {
		outX = atan2(d8, d9);
		outZ = atan2(d4, d1);
		outY = asin(-d7);
	}

	outX *= 57.29577951308232;
	outY *= 57.29577951308232;
	outZ *= 57.29577951308232;
	p2->x = f32(outX);
	p2->y = f32(outY);
	p2->z = f32(outZ);

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
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	stw      r29, 0x34(r1)
	stw      r28, 0x30(r1)
	mr       r31, r6
	mr       r28, r3
	lfs      f2, 0(r6)
	mr       r29, r4
	lfs      f1, 0x10(r6)
	mr       r30, r5
	lfs      f0, 0x20(r6)
	addi     r3, r1, 0x20
	stfs     f2, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	bl       PSVECMag
	stfs     f1, 0(r28)
	addi     r3, r1, 0x14
	lfs      f2, 4(r31)
	lfs      f1, 0x14(r31)
	lfs      f0, 0x24(r31)
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	bl       PSVECMag
	stfs     f1, 4(r28)
	addi     r3, r1, 8
	lfs      f2, 8(r31)
	lfs      f1, 0x18(r31)
	lfs      f0, 0x28(r31)
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	bl       PSVECMag
	stfs     f1, 8(r28)
	lfs      f0, 0xc(r31)
	lfs      f1, 0x1c(r31)
	stfs     f0, 0(r30)
	lfs      f0, 0x2c(r31)
	stfs     f1, 4(r30)
	lfd      f10, lbl_80516450@sda21(r2)
	stfs     f0, 8(r30)
	lfs      f0, lbl_8051644C@sda21(r2)
	fmr      f11, f10
	lfs      f1, 0(r28)
	fmr      f4, f10
	fcmpu    cr0, f0, f1
	beq      lbl_80011268
	lfd      f0, lbl_80516458@sda21(r2)
	fdiv     f10, f0, f1

lbl_80011268:
	lfs      f0, lbl_8051644C@sda21(r2)
	lfs      f1, 4(r28)
	fcmpu    cr0, f0, f1
	beq      lbl_80011280
	lfd      f0, lbl_80516458@sda21(r2)
	fdiv     f11, f0, f1

lbl_80011280:
	lfs      f0, lbl_8051644C@sda21(r2)
	lfs      f1, 8(r28)
	fcmpu    cr0, f0, f1
	beq      lbl_80011298
	lfd      f0, lbl_80516458@sda21(r2)
	fdiv     f4, f0, f1

lbl_80011298:
	lfs      f0, 0x20(r31)
	lis      r3, __float_epsilon@ha
	lfs      f2, 0x28(r31)
	fmul     f31, f0, f10
	lfs      f1, lbl_80516460@sda21(r2)
	lfs      f0, __float_epsilon@l(r3)
	fmul     f8, f2, f4
	lfs      f7, 0x24(r31)
	lfd      f3, lbl_80516458@sda21(r2)
	fmuls    f9, f1, f0
	lfs      f2, 0x14(r31)
	lfs      f6, 0x10(r31)
	lfs      f4, 0(r31)
	fsub     f1, f31, f3
	fneg     f0, f9
	lfs      f5, 4(r31)
	fmul     f7, f7, f11
	fcmpo    cr0, f1, f0
	fmul     f2, f2, f11
	fmul     f29, f6, f10
	fmul     f1, f5, f11
	fmul     f30, f4, f10
	cror     2, 1, 2
	bne      lbl_80011310
	fneg     f1, f1
	bl       atan2
	fmr      f28, f1
	lfd      f3, lbl_80516468@sda21(r2)
	lfd      f29, lbl_80516450@sda21(r2)
	b        lbl_80011360

lbl_80011310:
	fadd     f0, f31, f3
	fcmpo    cr0, f0, f9
	cror     2, 0, 2
	bne      lbl_80011334
	bl       atan2
	fmr      f28, f1
	lfd      f3, lbl_80516470@sda21(r2)
	lfd      f29, lbl_80516450@sda21(r2)
	b        lbl_80011360

lbl_80011334:
	fmr      f1, f7
	fmr      f2, f8
	bl       atan2
	fmr      f28, f1
	fmr      f1, f29
	fmr      f2, f30
	bl       atan2
	fmr      f29, f1
	fneg     f1, f31
	bl       asin
	fmr      f3, f1

lbl_80011360:
	lfd      f0, lbl_80516478@sda21(r2)
	fmul     f28, f28, f0
	fmul     f3, f3, f0
	fmul     f29, f29, f0
	frsp     f2, f28
	frsp     f1, f3
	frsp     f0, f29
	stfs     f2, 0(r29)
	stfs     f1, 4(r29)
	stfs     f0, 8(r29)
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	psq_l    f29, 88(r1), 0, qr0
	lfd      f29, 0x50(r1)
	psq_l    f28, 72(r1), 0, qr0
	lfd      f28, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	lwz      r0, 0x84(r1)
	lwz      r28, 0x30(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}
} // namespace JStudio
