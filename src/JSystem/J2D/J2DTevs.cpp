#include "Dolphin/gx.h"
#include "Dolphin/math.h"
#include "JSystem/J2D/J2DIndBlock.h"
#include "JSystem/J2D/J2DTexMtx.h"
#include "fdlibm.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global j2dDefaultTexCoordInfo
    j2dDefaultTexCoordInfo:
        .4byte 0x01043C00
        .4byte 0x01053C00
        .4byte 0x01063C00
        .4byte 0x01073C00
        .4byte 0x01083C00
        .4byte 0x01093C00
        .4byte 0x010A3C00
        .4byte 0x010B3C00
    .global j2dDefaultTexMtxInfo
    j2dDefaultTexMtxInfo:
        .4byte 0x0101FFFF
        .float 0.5
        .float 0.5
        .4byte 0x00000000
        .float 1.0
        .float 1.0
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global j2dDefaultIndTexMtxInfo
    j2dDefaultIndTexMtxInfo:
        .float 0.5
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .float 0.5
        .4byte 0x00000000
        .4byte 0x01000000
    .global j2dDefaultTevStageInfo
    j2dDefaultTevStageInfo:
        .4byte 0x040A0F0F
        .4byte 0x00000000
        .4byte 0x01000507
        .4byte 0x07000000
        .4byte 0x00010000
    .global j2dDefaultIndTevStageInfo
    j2dDefaultIndTevStageInfo:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805168F8
    lbl_805168F8:
        .4byte 0x40490FDB
    .global lbl_805168FC
    lbl_805168FC:
        .4byte 0x43340000
    .global lbl_80516900
    lbl_80516900:
        .4byte 0x00000000
    .global lbl_80516904
    lbl_80516904:
        .float 1.0
    .global lbl_80516908
    lbl_80516908:
        .float 0.5
    .global j2dDefaultColInfo
    j2dDefaultColInfo:
        .4byte 0xFFFFFFFF
    .global j2dDefaultTevOrderInfoNull
    j2dDefaultTevOrderInfoNull:
        .4byte 0xFFFFFF00
    .global j2dDefaultIndTexOrderNull
    j2dDefaultIndTexOrderNull:
        .4byte 0xFFFF0000
    .global j2dDefaultTevColor
    j2dDefaultTevColor:
        .4byte 0x00FF00FF
        .4byte 0x00FF00FF
    .global j2dDefaultIndTexCoordScaleInfo
    j2dDefaultIndTexCoordScaleInfo:
        .4byte 0x00000000
    .global j2dDefaultTevKColor
    j2dDefaultTevKColor:
        .4byte 0xFFFFFFFF
    .global j2dDefaultTevSwapMode
    j2dDefaultTevSwapMode:
        .4byte 0x00000000
    .global j2dDefaultTevSwapModeTable
    j2dDefaultTevSwapModeTable:
        .4byte 0x00010203
    .global j2dDefaultBlendInfo
    j2dDefaultBlendInfo:
        .4byte 0x01040505
    .global j2dDefaultDither
    j2dDefaultDither:
        .4byte 0x00000000
    .global j2dDefaultColorChanInfo
    j2dDefaultColorChanInfo:
        .4byte 0x00030000
    .global j2dDefaultTevSwapTable
    j2dDefaultTevSwapTable:
        .2byte 0x1B00
    .global j2dDefaultAlphaCmp
    j2dDefaultAlphaCmp:
        .2byte 0x00E7
*/

/*
 * --INFO--
 * Address:	8005921C
 * Size:	000030
 */
void J2DTexMtx::load(unsigned long p1) { GXLoadTexMtxImm(m_mtx, p1 * 3 + 0x1E, (_GXTexMtxType)m_info._00); }

/*
 * --INFO--
 * Address:	8005924C
 * Size:	000068
 */
void J2DTexMtx::calc()
{
	if (m_info._01 == 0) {
		getTextureMtx(m_info.m_textureSRTInfo, Vec(m_info._04), m_mtx);
	} else if (m_info._01 == 1) {
		getTextureMtxMaya(m_info.m_textureSRTInfo, m_mtx);
	}
}

/*
 * --INFO--
 * Address:	800592B4
 * Size:	000190
 */
void J2DTexMtx::getTextureMtx(const J2DTextureSRTInfo& info, Vec p2, float (*mtx)[4])
{
	float theta = (info._08 * PI) / 180.0f;
	mtx[0][0]   = info._00 * cosf_kludge(theta);
	mtx[0][1]   = -info._00 * sinf_kludge(theta);
	mtx[0][2]   = 0.0f;
	mtx[0][3]   = info._0C + p2.x + p2.x * (-info._00 * cosf_kludge(theta)) + p2.y * (info._00 * sinf_kludge(theta));
	mtx[1][0]   = info._04 * sinf_kludge(theta);
	mtx[1][1]   = info._04 * cosf_kludge(theta);
	mtx[1][2]   = 0.0f;
	mtx[1][3]   = info._10 + p2.y + p2.x * (-info._04 * sinf_kludge(theta)) - p2.y * (info._04 * cosf_kludge(theta));
	mtx[2][0]   = 0.0f;
	mtx[2][1]   = 0.0f;
	mtx[2][2]   = 1.0f;
	mtx[2][3]   = 0.0f;

	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stfd     f30, 0x20(r1)
	psq_st   f30, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	lfs      f2, lbl_805168F8@sda21(r2)
	lfs      f1, 8(r4)
	mr       r30, r5
	lfs      f0, lbl_805168FC@sda21(r2)
	mr       r31, r6
	fmuls    f1, f2, f1
	fdivs    f31, f1, f0
	fmr      f1, f31
	bl       cos
	frsp     f2, f1
	lfs      f0, 0(r29)
	fmr      f1, f31
	fmuls    f0, f0, f2
	stfs     f0, 0(r31)
	bl       sin
	lfs      f2, 0(r29)
	frsp     f3, f1
	lfs      f0, lbl_80516900@sda21(r2)
	fmr      f1, f31
	fneg     f2, f2
	fmuls    f2, f2, f3
	stfs     f2, 4(r31)
	stfs     f0, 8(r31)
	bl       sin
	frsp     f30, f1
	fmr      f1, f31
	bl       cos
	lfs      f0, 0(r29)
	frsp     f5, f1
	lfs      f2, 4(r30)
	fmr      f1, f31
	fneg     f3, f0
	lfs      f6, 0(r30)
	fmuls    f0, f0, f30
	lfs      f4, 0xc(r29)
	fmuls    f3, f3, f5
	fmuls    f0, f2, f0
	fmadds   f0, f6, f3, f0
	fadds    f0, f6, f0
	fadds    f0, f4, f0
	stfs     f0, 0xc(r31)
	bl       sin
	frsp     f2, f1
	lfs      f0, 4(r29)
	fmr      f1, f31
	fmuls    f0, f0, f2
	stfs     f0, 0x10(r31)
	bl       cos
	frsp     f3, f1
	lfs      f2, 4(r29)
	lfs      f0, lbl_80516900@sda21(r2)
	fmr      f1, f31
	fmuls    f2, f2, f3
	stfs     f2, 0x14(r31)
	stfs     f0, 0x18(r31)
	bl       cos
	frsp     f30, f1
	fmr      f1, f31
	bl       sin
	lfs      f0, 4(r29)
	frsp     f3, f1
	lfs      f6, 4(r30)
	fneg     f2, f0
	lfs      f4, 0(r30)
	fmuls    f0, f0, f30
	lfs      f5, 0x10(r29)
	lfs      f1, lbl_80516900@sda21(r2)
	fmuls    f3, f2, f3
	fmuls    f2, f6, f0
	lfs      f0, lbl_80516904@sda21(r2)
	fmsubs   f2, f4, f3, f2
	fadds    f2, f6, f2
	fadds    f2, f5, f2
	stfs     f2, 0x1c(r31)
	stfs     f1, 0x20(r31)
	stfs     f1, 0x24(r31)
	stfs     f0, 0x28(r31)
	stfs     f1, 0x2c(r31)
	psq_l    f31, 56(r1), 0, qr0
	lfd      f31, 0x30(r1)
	psq_l    f30, 40(r1), 0, qr0
	lfd      f30, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r0, 0x44(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	80059444
 * Size:	000180
 */
void J2DTexMtx::getTextureMtxMaya(const J2DTextureSRTInfo&, float (*)[4])
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stfd     f30, 0x10(r1)
	psq_st   f30, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r4
	lfs      f2, lbl_805168F8@sda21(r2)
	lfs      f1, 8(r4)
	mr       r31, r5
	lfs      f0, lbl_805168FC@sda21(r2)
	fmuls    f1, f2, f1
	fdivs    f31, f1, f0
	fmr      f1, f31
	bl       cos
	frsp     f2, f1
	lfs      f0, 0(r30)
	fmr      f1, f31
	fmuls    f0, f0, f2
	stfs     f0, 0(r31)
	bl       sin
	frsp     f3, f1
	lfs      f2, 4(r30)
	lfs      f0, lbl_80516900@sda21(r2)
	fmr      f1, f31
	fmuls    f2, f2, f3
	stfs     f2, 4(r31)
	stfs     f0, 8(r31)
	bl       sin
	frsp     f30, f1
	fmr      f1, f31
	bl       cos
	lfs      f4, lbl_80516908@sda21(r2)
	frsp     f5, f1
	lfs      f0, 0x10(r30)
	fmr      f1, f31
	lfs      f3, 0xc(r30)
	fsubs    f2, f0, f4
	lfs      f0, 4(r30)
	fsubs    f3, f3, f4
	fadds    f0, f2, f0
	fmuls    f0, f0, f30
	fmsubs   f0, f3, f5, f0
	fadds    f0, f4, f0
	stfs     f0, 0xc(r31)
	bl       sin
	lfs      f0, 0(r30)
	frsp     f2, f1
	fmr      f1, f31
	fneg     f0, f0
	fmuls    f0, f0, f2
	stfs     f0, 0x10(r31)
	bl       cos
	frsp     f3, f1
	lfs      f2, 4(r30)
	lfs      f0, lbl_80516900@sda21(r2)
	fmr      f1, f31
	fmuls    f2, f2, f3
	stfs     f2, 0x14(r31)
	stfs     f0, 0x18(r31)
	bl       cos
	frsp     f30, f1
	fmr      f1, f31
	bl       sin
	lfs      f5, lbl_80516908@sda21(r2)
	frsp     f6, f1
	lfs      f0, 0x10(r30)
	lfs      f1, 0xc(r30)
	fsubs    f3, f0, f5
	lfs      f2, 4(r30)
	fsubs    f4, f1, f5
	lfs      f1, lbl_80516900@sda21(r2)
	lfs      f0, lbl_80516904@sda21(r2)
	fadds    f2, f3, f2
	fneg     f3, f4
	fmuls    f2, f2, f30
	fmsubs   f2, f3, f6, f2
	fadds    f2, f5, f2
	stfs     f2, 0x1c(r31)
	stfs     f1, 0x20(r31)
	stfs     f1, 0x24(r31)
	stfs     f0, 0x28(r31)
	stfs     f1, 0x2c(r31)
	psq_l    f31, 40(r1), 0, qr0
	lfd      f31, 0x20(r1)
	psq_l    f30, 24(r1), 0, qr0
	lfd      f30, 0x10(r1)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x34(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	800595C4
 * Size:	000054
 */
void J2DIndTevStage::load(unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r10, 0(r3)
	clrlwi   r3, r4, 0x18
	rlwinm   r0, r10, 0xb, 0x1f, 0x1f
	clrlwi   r4, r10, 0x1e
	stw      r0, 8(r1)
	rlwinm   r0, r10, 0xa, 0x1e, 0x1f
	rlwinm   r5, r10, 0x1e, 0x1e, 0x1f
	rlwinm   r6, r10, 0x1c, 0x1d, 0x1f
	stw      r0, 0xc(r1)
	rlwinm   r7, r10, 0x10, 0x1c, 0x1f
	rlwinm   r8, r10, 0x18, 0x1d, 0x1f
	rlwinm   r9, r10, 0x15, 0x1d, 0x1f
	rlwinm   r10, r10, 0xc, 0x1f, 0x1f
	bl       GXSetTevIndirect
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80059618
 * Size:	000030
 */
void J2DIndTexMtx::load(unsigned char p1)
{
	// GXSetIndTexMtx(p1 + 1, this, _18);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	clrlwi   r6, r4, 0x18
	mr       r4, r3
	stw      r0, 0x14(r1)
	lbz      r5, 0x18(r3)
	addi     r3, r6, 1
	bl       GXSetIndTexMtx
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80059648
 * Size:	000030
 */
void J2DIndTexCoordScale::load(unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r3
	clrlwi   r3, r4, 0x18
	stw      r0, 0x14(r1)
	lbz      r4, 0(r5)
	lbz      r5, 1(r5)
	bl       GXSetIndTexCoordScale
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80059678
 * Size:	000030
 */
void J2DIndTexOrder::load(unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r3
	clrlwi   r3, r4, 0x18
	stw      r0, 0x14(r1)
	lbz      r4, 0(r5)
	lbz      r5, 1(r5)
	bl       GXSetIndTexOrder
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
