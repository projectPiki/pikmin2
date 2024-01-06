#include "JSystem/J3D/J3DTypes.h"
#include "JSystem/J3D/J3DTransform.h"
#include "Vector3.h"

const J3DTransformInfo j3dDefaultTransformInfo = {
	{ 1.0f, 1.0f, 1.0f },
	{ 0, 0, 0 },
	{ 0.0f, 0.0f, 0.0f },
};
const Vec j3dDefaultScale = { 1.0f, 1.0f, 1.0f };
const Mtx j3dDefaultMtx   = { 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f };

static f32 Unit01[] = { 0.0f, 1.0f };

/**
 * @note Address: 0x8005EE78
 * @note Size: 0xF0
 */
void J3DCalcBBoardMtx(Mtx mtx)
{
	f32 x = (mtx[0][0] * mtx[0][0]) + (mtx[1][0] * mtx[1][0]) + (mtx[2][0] * mtx[2][0]);
	f32 y = (mtx[0][1] * mtx[0][1]) + (mtx[1][1] * mtx[1][1]) + (mtx[2][1] * mtx[2][1]);
	f32 z = (mtx[0][2] * mtx[0][2]) + (mtx[1][2] * mtx[1][2]) + (mtx[2][2] * mtx[2][2]);
	if (x > 0.0f) {
		x *= sqrtf(x);
	}
	if (y > 0.0f) {
		y *= sqrtf(y);
	}
	if (z > 0.0f) {
		z *= sqrtf(z);
	}

	mtx[0][0] = x;
	mtx[1][0] = 0.0f;
	mtx[1][1] = y;
	mtx[1][2] = 0.0f;
	mtx[2][2] = z;

	/*
	lfs      f2, 0(r3)
	lfs      f1, 0x10(r3)
	fmuls    f2, f2, f2
	lfs      f3, 0x20(r3)
	fmuls    f1, f1, f1
	lfs      f5, 4(r3)
	lfs      f4, 0x14(r3)
	fmuls    f7, f3, f3
	lfs      f3, 8(r3)
	fadds    f6, f2, f1
	lfs      f2, 0x18(r3)
	fmuls    f5, f5, f5
	fmuls    f4, f4, f4
	lfs      f8, 0x24(r3)
	lfs      f9, 0x28(r3)
	fmuls    f3, f3, f3
	lfs      f1, lbl_80516998@sda21(r2)
	fmuls    f2, f2, f2
	fadds    f7, f7, f6
	fmuls    f6, f8, f8
	fadds    f5, f5, f4
	fmuls    f4, f9, f9
	fadds    f2, f3, f2
	fcmpo    cr0, f7, f1
	fadds    f3, f6, f5
	fadds    f2, f4, f2
	ble      lbl_8005EEFC
	ble      lbl_8005EEF4
	frsqrte  f1, f7
	fmuls    f1, f1, f7
	b        lbl_8005EEF8

lbl_8005EEF4:
	fmr      f1, f7

lbl_8005EEF8:
	fmr      f7, f1

lbl_8005EEFC:
	lfs      f1, lbl_80516998@sda21(r2)
	fcmpo    cr0, f3, f1
	ble      lbl_8005EF20
	ble      lbl_8005EF18
	frsqrte  f1, f3
	fmuls    f1, f1, f3
	b        lbl_8005EF1C

lbl_8005EF18:
	fmr      f1, f3

lbl_8005EF1C:
	fmr      f3, f1

lbl_8005EF20:
	lfs      f1, lbl_80516998@sda21(r2)
	fcmpo    cr0, f2, f1
	ble      lbl_8005EF44
	ble      lbl_8005EF3C
	frsqrte  f1, f2
	fmuls    f1, f1, f2
	b        lbl_8005EF40

lbl_8005EF3C:
	fmr      f1, f2

lbl_8005EF40:
	fmr      f2, f1

lbl_8005EF44:
	lfs      f0, lbl_80516998@sda21(r2)
	psq_st   f0, 4(r3), 0, qr0
	psq_st   f0, 32(r3), 0, qr0
	stfs     f7, 0(r3)
	stfs     f0, 0x10(r3)
	stfs     f3, 0x14(r3)
	stfs     f0, 0x18(r3)
	stfs     f2, 0x28(r3)
	blr
	*/
}

/**
 * @note Address: 0x8005EF68
 * @note Size: 0x13C
 */
void J3DCalcYBBoardMtx(Mtx mtx)
{
	f32 x = (mtx[0][0] * mtx[0][0]) + (mtx[1][0] * mtx[1][0]) + (mtx[2][0] * mtx[2][0]);
	f32 z = (mtx[0][2] * mtx[0][2]) + (mtx[1][2] * mtx[1][2]) + (mtx[2][2] * mtx[2][2]);

	if (x > 0.0f) {
		x *= sqrtf(x);
	}
	if (z > 0.0f) {
		z *= sqrtf(z);
	}

	Vec vec = { 0.0f, -mtx[2][1], mtx[1][1] };
	PSVECNormalize(&vec, &vec);

	mtx[0][0] = x;
	mtx[0][2] = 0.0f;
	mtx[1][0] = 0.0f;

	mtx[1][2] = vec.y * z;
	mtx[2][0] = 0.0f;
	mtx[2][2] = vec.z * z;
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stfd     f30, 0x20(r1)
	psq_st   f30, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lfs      f0, lbl_80516998@sda21(r2)
	lfs      f2, 0(r3)
	lfs      f1, 0x10(r3)
	fmuls    f2, f2, f2
	lfs      f3, 0x20(r3)
	fmuls    f1, f1, f1
	lfs      f6, 8(r3)
	lfs      f5, 0x18(r3)
	fmuls    f4, f3, f3
	fadds    f3, f2, f1
	lfs      f7, 0x28(r3)
	fmuls    f2, f6, f6
	fmuls    f1, f5, f5
	fadds    f31, f4, f3
	fmuls    f3, f7, f7
	fadds    f1, f2, f1
	fcmpo    cr0, f31, f0
	fadds    f30, f3, f1
	ble      lbl_8005EFF0
	ble      lbl_8005EFE8
	frsqrte  f0, f31
	fmuls    f0, f0, f31
	b        lbl_8005EFEC

lbl_8005EFE8:
	fmr      f0, f31

lbl_8005EFEC:
	fmr      f31, f0

lbl_8005EFF0:
	lfs      f0, lbl_80516998@sda21(r2)
	fcmpo    cr0, f30, f0
	ble      lbl_8005F014
	ble      lbl_8005F00C
	frsqrte  f0, f30
	fmuls    f0, f0, f30
	b        lbl_8005F010

lbl_8005F00C:
	fmr      f0, f30

lbl_8005F010:
	fmr      f30, f0

lbl_8005F014:
	lis      r4, lbl_8047889C@ha
	addi     r3, r1, 8
	addi     r7, r4, lbl_8047889C@l
	lwz      r6, 0(r7)
	mr       r4, r3
	lwz      r5, 4(r7)
	lwz      r0, 8(r7)
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r0, 0x10(r1)
	lfs      f0, 0x24(r31)
	fneg     f0, f0
	stfs     f0, 0xc(r1)
	lfs      f0, 0x14(r31)
	stfs     f0, 0x10(r1)
	bl       PSVECNormalize
	stfs     f31, 0(r31)
	lfs      f1, lbl_80516998@sda21(r2)
	stfs     f1, 8(r31)
	stfs     f1, 0x10(r31)
	lfs      f0, 0xc(r1)
	fmuls    f0, f0, f30
	stfs     f0, 0x18(r31)
	stfs     f1, 0x20(r31)
	lfs      f0, 0x10(r1)
	fmuls    f0, f0, f30
	stfs     f0, 0x28(r31)
	psq_l    f31, 56(r1), 0, qr0
	lfd      f31, 0x30(r1)
	psq_l    f30, 40(r1), 0, qr0
	lfd      f30, 0x20(r1)
	lwz      r0, 0x44(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/**
 * @note Address: 0x8005F0A4
 * @note Size: 0xC8
 */
ASM void J3DPSCalcInverseTranspose(register Mtx src, register Mtx33 dst)
{
#ifdef __MWERKS__ // clang-format off
	psq_l    f0, 0(src), 1, 0
	psq_l    f1, 4(src), 0, 0
	psq_l    f2, 16(src), 1, 0
	ps_merge10 f6, f1, f0
	psq_l    f3, 20(src), 0, 0
	psq_l    f4, 32(src), 1, 0
	ps_merge10 f7, f3, f2
	psq_l    f5, 36(src), 0, 0
	ps_mul   f11, f3, f6
	ps_merge10 f8, f5, f4
	ps_mul   f13, f5, f7
	ps_msub  f11, f1, f7, f11
	ps_mul   f12, f1, f8
	ps_msub  f13, f3, f8, f13
	ps_msub  f12, f5, f6, f12
	ps_mul   f10, f3, f4
	ps_mul   f9, f0, f5
	ps_mul   f8, f1, f2
	ps_msub  f10, f2, f5, f10
	ps_msub  f9, f1, f4, f9
	ps_msub  f8, f0, f3, f8
	ps_mul   f7, f0, f13
	ps_sub   f1, f1, f1
	ps_madd  f7, f2, f12, f7
	ps_madd  f7, f4, f11, f7
	ps_cmpo0 cr0, f7, f1
	bne      lbl_8005F118
	li       r3, 0
	blr

lbl_8005F118:
	fres     f0, f7
	ps_add   f6, f0, f0
	ps_mul   f5, f0, f0
	ps_nmsub f0, f7, f5, f6
	ps_add   f6, f0, f0
	ps_mul   f5, f0, f0
	ps_nmsub f0, f7, f5, f6
	ps_muls0 f13, f13, f0
	ps_muls0 f12, f12, f0
	psq_st   f13, 0(dst), 0, 0
	ps_muls0 f11, f11, f0
	psq_st   f12, 12(dst), 0, 0
	ps_muls0 f10, f10, f0
	psq_st   f11, 24(dst), 0, 0
	ps_muls0 f9, f9, f0
	psq_st   f10, 8(dst), 1, 0
	ps_muls0 f8, f8, f0
	psq_st   f9, 20(r4), 1, 0
	li       r3, 1
	psq_st   f8, 32(r4), 1, 0
	blr
#endif // clang-format on
}

/**
 * @note Address: 0x8005F16C
 * @note Size: 0xB0
 */
void J3DGetTranslateRotateMtx(const J3DTransformInfo& tx, Mtx dst)
{
	f32 sx = JMASSin(tx.mRotation.x), cx = JMASCos(tx.mRotation.x);
	f32 sy = JMASSin(tx.mRotation.y), cy = JMASCos(tx.mRotation.y);
	f32 sz = JMASSin(tx.mRotation.z), cz = JMASCos(tx.mRotation.z);

	dst[2][0] = -sy;
	dst[0][0] = cz * cy;
	dst[1][0] = sz * cy;
	dst[2][1] = cy * sx;
	dst[2][2] = cy * cx;

	f32 cxsz  = cx * sz;
	f32 sxcz  = sx * cz;
	dst[0][1] = sxcz * sy - cxsz;
	dst[1][2] = cxsz * sy - sxcz;

	f32 sxsz  = sx * sz;
	f32 cxcz  = cx * cz;
	dst[0][2] = cxcz * sy + sxsz;
	dst[1][1] = sxsz * sy + cxcz;

	dst[0][3] = tx.mTranslation.x;
	dst[1][3] = tx.mTranslation.y;
	dst[2][3] = tx.mTranslation.z;
}

/**
 * @note Address: 0x8005F21C
 * @note Size: 0xB0
 */
void J3DGetTranslateRotateMtx(s16 rx, s16 ry, s16 rz, f32 tx, f32 ty, f32 tz, Mtx dst)
{
	f32 sx = JMASSin(rx), cx = JMASCos(rx);
	f32 sy = JMASSin(ry), cy = JMASCos(ry);
	f32 sz = JMASSin(rz), cz = JMASCos(rz);

	dst[2][0] = -sy;
	dst[0][0] = cz * cy;
	dst[1][0] = sz * cy;
	dst[2][1] = cy * sx;
	dst[2][2] = cy * cx;

	f32 cxsz  = cx * sz;
	f32 sxcz  = sx * cz;
	dst[0][1] = sxcz * sy - cxsz;
	dst[1][2] = cxsz * sy - sxcz;

	f32 sxsz  = sx * sz;
	f32 cxcz  = cx * cz;
	dst[0][2] = cxcz * sy + sxsz;
	dst[1][1] = sxsz * sy + cxcz;

	dst[0][3] = tx;
	dst[1][3] = ty;
	dst[2][3] = tz;
}

/**
 * @note Address: 0x8005F2CC
 * @note Size: 0xAC
 */
void J3DGetTextureMtx(const J3DTextureSRTInfo& srt, const Vec& center, Mtx dst)
{
	f32 sr = JMASSin(srt.mRotation), cr = JMASCos(srt.mRotation);

	f32 cx = srt.mScaleX * cr;
	f32 sx = srt.mScaleX * sr;
	f32 sy = srt.mScaleY * sr;
	f32 cy = srt.mScaleY * cr;

	dst[0][0] = cx;
	dst[0][1] = -sx;
	dst[0][2] = (-cx * center.x + sx * center.y) + center.x + srt.mTranslationX;

	dst[1][0] = sy;
	dst[1][1] = cy;
	dst[1][2] = (-sy * center.x - cy * center.y) + center.y + srt.mTranslationY;

	dst[2][3] = 0.0f;
	dst[2][1] = 0.0f;
	dst[2][0] = 0.0f;
	dst[1][3] = 0.0f;
	dst[0][3] = 0.0f;
	dst[2][2] = 1.0f;
}

/**
 * @note Address: 0x8005F378
 * @note Size: 0xAC
 */
void J3DGetTextureMtxOld(const J3DTextureSRTInfo& srt, const Vec& center, Mtx dst)
{
	f32 sr = JMASSin(srt.mRotation), cr = JMASCos(srt.mRotation);

	f32 cx = srt.mScaleX * cr;
	f32 sx = srt.mScaleX * sr;
	f32 sy = srt.mScaleY * sr;
	f32 cy = srt.mScaleY * cr;

	dst[0][0] = cx;
	dst[0][1] = -sx;
	dst[0][3] = (-cx * center.x + sx * center.y) + center.x + srt.mTranslationX;

	dst[1][0] = sy;
	dst[1][1] = cy;
	dst[1][3] = (-sy * center.x - cy * center.y) + center.y + srt.mTranslationY;

	dst[2][3] = 0.0f;
	dst[2][1] = 0.0f;
	dst[2][0] = 0.0f;
	dst[1][2] = 0.0f;
	dst[0][2] = 0.0f;
	dst[2][2] = 1.0f;
}

/**
 * @note Address: 0x8005F424
 * @note Size: 0xA8
 */
void J3DGetTextureMtxMaya(const J3DTextureSRTInfo& srt, Mtx dst)
{
	f32 sr = JMASSin(srt.mRotation), cr = JMASCos(srt.mRotation);
	f32 tx = srt.mTranslationX - 0.5f;
	f32 ty = srt.mTranslationY - 0.5f;

	dst[0][0] = srt.mScaleX * cr;
	dst[0][1] = srt.mScaleY * sr;
	dst[0][2] = tx * cr - sr * (ty + srt.mScaleY) + 0.5f;

	dst[1][0] = -srt.mScaleX * sr;
	dst[1][1] = srt.mScaleY * cr;
	dst[1][2] = -tx * sr - cr * (ty + srt.mScaleY) + 0.5f;

	dst[2][3] = 0.0f;
	dst[2][1] = 0.0f;
	dst[2][0] = 0.0f;
	dst[1][3] = 0.0f;
	dst[0][3] = 0.0f;
	dst[2][2] = 1.0f;
}

/**
 * @note Address: 0x8005F4CC
 * @note Size: 0xA8
 */
void J3DGetTextureMtxMayaOld(const J3DTextureSRTInfo& srt, Mtx dst)
{
	f32 sr = JMASSin(srt.mRotation), cr = JMASCos(srt.mRotation);
	f32 tx = srt.mTranslationX - 0.5f;
	f32 ty = srt.mTranslationY - 0.5f;

	dst[0][0] = srt.mScaleX * cr;
	dst[0][1] = srt.mScaleY * sr;
	dst[0][3] = tx * cr - sr * (ty + srt.mScaleY) + 0.5f;

	dst[1][0] = -srt.mScaleX * sr;
	dst[1][1] = srt.mScaleY * cr;
	dst[1][3] = -tx * sr - cr * (ty + srt.mScaleY) + 0.5f;

	dst[2][3] = 0.0f;
	dst[2][1] = 0.0f;
	dst[2][0] = 0.0f;
	dst[1][2] = 0.0f;
	dst[0][2] = 0.0f;
	dst[2][2] = 1.0f;
}

/**
 * @note Address: 0x8005F574
 * @note Size: 0x64
 */
ASM void J3DScaleNrmMtx(register Mtx mtx, const register Vec& scl)
{
#ifdef __MWERKS__ // clang-format off
	nofralloc;

	psq_l  fp2, 0(scl), 0, 0
	psq_l  fp0, 0(mtx), 0, 0
	lfs    fp3, 8(scl)
	lfs    fp1, 8(mtx)
	ps_mul f4, fp0, fp2
	psq_st f4, 0(mtx), 0, 0
	fmuls  f4, fp1, fp3
	stfs   f4, 8(mtx)

	/* Row 1 */
	psq_l  fp2, 0(scl), 0, 0
	psq_l  fp0, 16(mtx), 0, 0
	lfs    fp3, 8(scl)
	lfs    fp1, 24(mtx)
	ps_mul f4, fp0, fp2
	psq_st f4, 16(mtx), 0, 0
	fmuls  f4, fp1, fp3
	stfs   f4, 24(mtx)

	/* Row 2 */
	psq_l  fp2, 0(scl), 0, 0
	psq_l  fp0, 32(mtx), 0, 0
	lfs    fp3, 8(scl)
	lfs    fp1, 40(mtx)
	ps_mul f4, fp0, fp2
	psq_st f4, 32(mtx), 0, 0
	fmuls  f4, fp1, fp3
	stfs   f4, 40(mtx)
	blr
#endif // clang-format on
}

/**
 * @note Address: 0x8005F5D8
 * @note Size: 0x54
 */
ASM void J3DScaleNrmMtx33(register Mtx33 mtx, const register Vec& scale) {
#ifdef __MWERKS__ // clang-format off
	psq_l    f0, 0(mtx), 0, 0
	psq_l    f6, 0(scale), 0, 0
	lfs      f1, 8(mtx)
	lfs      f7, 8(scale)
	ps_mul   f0, f0, f6
	psq_l    f2, 12(mtx), 0, 0
	fmuls    f1, f1, f7
	lfs      f3, 0x14(mtx)
	ps_mul   f2, f2, f6
	psq_l    f4, 24(mtx), 0, 0
	fmuls    f3, f3, f7
	lfs      f5, 0x20(mtx)
	ps_mul   f4, f4, f6
	psq_st   f0, 0(mtx), 0, 0
	fmuls    f5, f5, f7
	stfs     f1, 8(mtx)
	psq_st   f2, 12(mtx), 0, 0
	stfs     f3, 0x14(mtx)
	psq_st   f4, 24(mtx), 0, 0
	stfs     f5, 0x20(mtx)
	blr
#endif // clang-format on
}

/**
 * @note Address: 0x8005F62C
 * @note Size: 0x124
 */
ASM void J3DMtxProjConcat(register Mtx mtx1, register Mtx mtx2, register Mtx dst)
{
#ifdef __MWERKS__ // clang-format off
	psq_l    f2, 0(mtx1), 0, 0
	psq_l    f3, 8(mtx1), 0, 0
	ps_merge00 f6, f2, f2
	ps_merge11 f7, f2, f2
	ps_merge00 f8, f3, f3
	ps_merge11 f9, f3, f3
	psq_l    f10, 0(mtx2), 0, 0
	psq_l    f11, 16(mtx2), 0, 0
	psq_l    f12, 32(mtx2), 0, 0
	psq_l    f13, 48(mtx2), 0, 0
	ps_mul   f0, f6, f10
	ps_madd  f0, f7, f11, f0
	ps_madd  f0, f8, f12, f0
	ps_madd  f0, f9, f13, f0
	psq_st   f0, 0(dst), 0, 0
	psq_l    f10, 8(mtx2), 0, 0
	psq_l    f11, 24(mtx2), 0, 0
	psq_l    f12, 40(mtx2), 0, 0
	psq_l    f13, 56(mtx2), 0, 0
	ps_mul   f0, f6, f10
	ps_madd  f0, f7, f11, f0
	ps_madd  f0, f8, f12, f0
	ps_madd  f0, f9, f13, f0
	psq_st   f0, 8(dst), 0, 0
	psq_l    f2, 16(mtx1), 0, 0
	psq_l    f3, 24(mtx1), 0, 0
	ps_merge00 f6, f2, f2
	ps_merge11 f7, f2, f2
	ps_merge00 f8, f3, f3
	ps_merge11 f9, f3, f3
	psq_l    f10, 0(mtx2), 0, 0
	psq_l    f11, 16(mtx2), 0, 0
	psq_l    f12, 32(mtx2), 0, 0
	psq_l    f13, 48(mtx2), 0, 0
	ps_mul   f0, f6, f10
	ps_madd  f0, f7, f11, f0
	ps_madd  f0, f8, f12, f0
	ps_madd  f0, f9, f13, f0
	psq_st   f0, 16(dst), 0, 0
	psq_l    f10, 8(mtx2), 0, 0
	psq_l    f11, 24(mtx2), 0, 0
	psq_l    f12, 40(mtx2), 0, 0
	psq_l    f13, 56(mtx2), 0, 0
	ps_mul   f0, f6, f10
	ps_madd  f0, f7, f11, f0
	ps_madd  f0, f8, f12, f0
	ps_madd  f0, f9, f13, f0
	psq_st   f0, 24(dst), 0, 0
	psq_l    f2, 32(mtx1), 0, 0
	psq_l    f3, 40(mtx1), 0, 0
	ps_merge00 f6, f2, f2
	ps_merge11 f7, f2, f2
	ps_merge00 f8, f3, f3
	ps_merge11 f9, f3, f3
	psq_l    f10, 0(mtx2), 0, 0
	psq_l    f11, 16(mtx2), 0, 0
	psq_l    f12, 32(mtx2), 0, 0
	psq_l    f13, 48(mtx2), 0, 0
	ps_mul   f0, f6, f10
	ps_madd  f0, f7, f11, f0
	ps_madd  f0, f8, f12, f0
	ps_madd  f0, f9, f13, f0
	psq_st   f0, 32(dst), 0, 0
	psq_l    f10, 8(mtx2), 0, 0
	psq_l    f11, 24(mtx2), 0, 0
	psq_l    f12, 40(mtx2), 0, 0
	psq_l    f13, 56(mtx2), 0, 0
	ps_mul   f0, f6, f10
	ps_madd  f0, f7, f11, f0
	ps_madd  f0, f8, f12, f0
	ps_madd  f0, f9, f13, f0
	psq_st   f0, 40(dst), 0, 0
	blr
#endif // clang-format on
}

/**
 * @note Address: 0x8005F750
 * @note Size: 0xDC
 */
void J3DPSMtxArrayConcat(Mtx, Mtx, Mtx, u32)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  stfd      f14, 0x8(r1)
	  lis       r7, 0x8051
	  stfd      f15, 0x10(r1)
	  addi      r7, r7, 0x46E0
	  stfd      f31, 0x28(r1)
	  subi      r4, r4, 0x8
	  subi      r5, r5, 0x8
	  mtctr     r6

	.loc_0x24:
	  psq_l     f0,0x0(r3),0,0
	  psq_l     f6,0x8(r4),0,0
	  psq_l     f7,0x10(r4),0,0
	  psq_l     f8,0x18(r4),0,0
	  ps_muls0  f12, f6, f0
	  psq_l     f2,0x10(r3),0,0
	  ps_muls0  f13, f7, f0
	  psq_l     f31,0x0(r7),0,0
	  ps_muls0  f14, f6, f2
	  psq_l     f9,0x20(r4),0,0
	  ps_muls0  f15, f7, f2
	  psq_l     f1,0x8(r3),0,0
	  ps_madds1 f12, f8, f0, f12
	  psq_l     f3,0x18(r3),0,0
	  ps_madds1 f14, f8, f2, f14
	  psq_l     f10,0x28(r4),0,0
	  ps_madds1 f13, f9, f0, f13
	  psq_lu    f11,0x30(r4),0,0
	  ps_madds1 f15, f9, f2, f15
	  psq_l     f4,0x20(r3),0,0
	  psq_l     f5,0x28(r3),0,0
	  ps_madds0 f12, f10, f1, f12
	  ps_madds0 f13, f11, f1, f13
	  ps_madds0 f14, f10, f3, f14
	  ps_madds0 f15, f11, f3, f15
	  psq_st    f12,0x8(r5),0,0
	  ps_muls0  f2, f6, f4
	  ps_madds1 f13, f31, f1, f13
	  ps_muls0  f0, f7, f4
	  psq_st    f14,0x18(r5),0,0
	  ps_madds1 f15, f31, f3, f15
	  psq_st    f13,0x10(r5),0,0
	  ps_madds1 f2, f8, f4, f2
	  ps_madds1 f0, f9, f4, f0
	  ps_madds0 f2, f10, f5, f2
	  psq_st    f15,0x20(r5),0,0
	  ps_madds0 f0, f11, f5, f0
	  psq_st    f2,0x28(r5),0,0
	  ps_madds1 f0, f31, f5, f0
	  psq_stu   f0,0x30(r5),0,0
	  bdnz+     .loc_0x24
	  lfd       f14, 0x8(r1)
	  lfd       f15, 0x10(r1)
	  lfd       f31, 0x28(r1)
	  addi      r1, r1, 0x40
	  blr
	*/
}
