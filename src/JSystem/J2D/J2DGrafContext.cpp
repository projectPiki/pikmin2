#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__14J2DGrafContext
    __vt__14J2DGrafContext:
        .4byte 0
        .4byte 0
        .4byte __dt__14J2DGrafContextFv
        .4byte "place__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"
        .4byte place__14J2DGrafContextFffff
        .4byte setPort__14J2DGrafContextFv
        .4byte setup2D__14J2DGrafContextFv
        .4byte setScissor__14J2DGrafContextFv
        .4byte getGrafType__14J2DGrafContextCFv
        .4byte setLookat__14J2DGrafContextFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805167A8
    lbl_805167A8:
        .4byte 0x00000000
    .global lbl_805167AC
    lbl_805167AC:
        .float 1.0
    .global lbl_805167B0
    lbl_805167B0:
        .4byte 0x44800000
        .4byte 0x00000000
    .global lbl_805167B8
    lbl_805167B8:
        .4byte 0x43300000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	80036074
 * Size:	0000AC
 */
J2DGrafContext::J2DGrafContext(float, float, float, float)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r4, __vt__14J2DGrafContext@ha
	fadds    f0, f1, f3
	stw      r0, 0x34(r1)
	li       r0, -1
	addi     r4, r4, __vt__14J2DGrafContext@l
	fadds    f3, f2, f4
	stw      r31, 0x2c(r1)
	mr       r31, r3
	addi     r5, r1, 0x10
	stw      r4, 0(r3)
	addi     r4, r1, 0xc
	addi     r6, r1, 0x14
	addi     r7, r1, 0x18
	stfs     f1, 4(r3)
	stfs     f2, 8(r3)
	stfs     f0, 0xc(r3)
	stfs     f3, 0x10(r3)
	stfs     f1, 0x14(r3)
	stfs     f2, 0x18(r3)
	stfs     f0, 0x1c(r3)
	stfs     f3, 0x20(r3)
	stw      r0, 0x24(r3)
	stw      r0, 0x28(r3)
	stw      r0, 0x2c(r3)
	stw      r0, 0x30(r3)
	stw      r0, 0x1c(r1)
	stw      r0, 8(r1)
	stw      r0, 0x18(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0x10(r1)
	stw      r0, 0xc(r1)
	bl
	setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
	mr       r3, r31
	li       r4, 6
	bl       setLineWidth__14J2DGrafContextFUc
	lwz      r0, 0x34(r1)
	mr       r3, r31
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80036120
 * Size:	000090
 */
void J2DGrafContext::setPort()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lfs      f1, 4(r31)
	lfs      f0, lbl_805167A8@sda21(r2)
	lfs      f2, 8(r31)
	fcmpo    cr0, f1, f0
	lfs      f3, 0xc(r31)
	lfs      f4, 0x10(r31)
	bge      lbl_80036178
	fmr      f1, f0

lbl_80036178:
	lfs      f0, lbl_805167A8@sda21(r2)
	fcmpo    cr0, f2, f0
	bge      lbl_80036188
	fmr      f2, f0

lbl_80036188:
	fsubs    f3, f3, f1
	lfs      f5, lbl_805167A8@sda21(r2)
	fsubs    f4, f4, f2
	lfs      f6, lbl_805167AC@sda21(r2)
	bl       GXSetViewport
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800361B0
 * Size:	0001DC
 */
void J2DGrafContext::setup2D()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	mr       r30, r3
	li       r3, 0
	bl       GXSetNumIndStages
	li       r31, 0

lbl_800361D4:
	mr       r3, r31
	bl       GXSetTevDirect
	addi     r31, r31, 1
	cmpwi    r31, 0x10
	blt      lbl_800361D4
	li       r3, 0
	bl       GXSetZCompLoc
	li       r3, 4
	li       r4, 0
	li       r5, 1
	li       r6, 4
	li       r7, 0
	bl       GXSetAlphaCompare
	li       r3, 0
	li       r4, 3
	li       r5, 0
	bl       GXSetZMode
	li       r3, 0
	li       r4, 4
	bl       GXSetTevOp
	li       r3, 1
	bl       GXSetNumChans
	li       r3, 1
	bl       GXSetNumTevStages
	li       r3, 0
	bl       GXSetNumTexGens
	li       r3, 0
	li       r4, 0xff
	li       r5, 0xff
	li       r6, 4
	bl       GXSetTevOrder
	li       r3, 0
	bl       GXSetCullMode
	addi     r3, r30, 0x80
	li       r4, 0
	bl       GXLoadPosMtxImm
	addi     r3, r1, 8
	bl       PSMTXIdentity
	addi     r3, r1, 8
	li       r4, 0x3c
	li       r5, 0
	bl       GXLoadTexMtxImm
	li       r3, 4
	li       r4, 0
	li       r5, 0
	li       r6, 1
	li       r7, 0
	li       r8, 0
	li       r9, 2
	bl       GXSetChanCtrl
	li       r3, 5
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 0
	li       r8, 0
	li       r9, 2
	bl       GXSetChanCtrl
	li       r3, 0
	bl       GXSetCurrentMtx
	li       r3, 0
	li       r4, 1
	li       r5, 4
	li       r6, 0x3c
	li       r7, 0
	li       r8, 0x7d
	bl       GXSetTexCoordGen2
	li       r3, 0
	li       r4, 9
	li       r5, 1
	li       r6, 3
	li       r7, 0
	bl       GXSetVtxAttrFmt
	li       r3, 0
	li       r4, 0xb
	li       r5, 1
	li       r6, 5
	li       r7, 0
	bl       GXSetVtxAttrFmt
	li       r3, 0
	li       r4, 0xd
	li       r5, 1
	li       r6, 2
	li       r7, 0xf
	bl       GXSetVtxAttrFmt
	li       r3, 0
	li       r4, 0xe
	li       r5, 1
	li       r6, 2
	li       r7, 0xf
	bl       GXSetVtxAttrFmt
	lbz      r3, 0x34(r30)
	li       r4, 0
	bl       GXSetLineWidth
	bl       GXClearVtxDesc
	li       r3, 9
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0xb
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0xd
	li       r4, 0
	bl       GXSetVtxDesc
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8003638C
 * Size:	0002A8
 */
void J2DGrafContext::setScissor()
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stfd     f30, 0x50(r1)
	psq_st   f30, 88(r1), 0, qr0
	stfd     f29, 0x40(r1)
	psq_st   f29, 72(r1), 0, qr0
	stfd     f28, 0x30(r1)
	psq_st   f28, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	lfs      f1, 0x14(r3)
	lfs      f0, lbl_805167A8@sda21(r2)
	lfs      f29, 0x18(r3)
	fcmpo    cr0, f1, f0
	lfs      f31, 0x1c(r3)
	lfs      f30, 0x20(r3)
	cror     2, 0, 2
	bne      lbl_800363E8
	stfs     f0, 0x14(r3)

lbl_800363E8:
	lfs      f2, 0x18(r3)
	lfs      f0, lbl_805167A8@sda21(r2)
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_80036400
	stfs     f0, 0x18(r3)

lbl_80036400:
	lfs      f2, 0x1c(r3)
	lfs      f0, lbl_805167B0@sda21(r2)
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_80036418
	stfs     f0, 0x1c(r3)

lbl_80036418:
	lfs      f2, 0x20(r3)
	lfs      f0, lbl_805167B0@sda21(r2)
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_80036430
	stfs     f0, 0x20(r3)

lbl_80036430:
	fcmpo    cr0, f31, f1
	li       r0, 0
	cror     2, 1, 2
	bne      lbl_80036450
	fcmpo    cr0, f30, f29
	cror     2, 1, 2
	bne      lbl_80036450
	li       r0, 1

lbl_80036450:
	clrlwi.  r0, r0, 0x18
	bne      lbl_800364D8
	fcmpo    cr0, f1, f1
	fmr      f0, f1
	fmr      f2, f29
	fmr      f3, f31
	fmr      f4, f30
	cror     2, 1, 2
	fcmpo    cr0, f29, f29
	cror     2, 1, 2
	fcmpo    cr0, f1, f31
	cror     2, 1, 2
	bne      lbl_80036488
	fmr      f1, f31

lbl_80036488:
	fcmpo    cr0, f29, f30
	cror     2, 1, 2
	bne      lbl_80036498
	fmr      f29, f30

lbl_80036498:
	fcmpo    cr0, f31, f0
	cror     2, 0, 2
	bne      lbl_800364A8
	fmr      f31, f0

lbl_800364A8:
	fcmpo    cr0, f30, f2
	cror     2, 0, 2
	bne      lbl_800364B8
	fmr      f30, f2

lbl_800364B8:
	fcmpo    cr0, f31, f3
	cror     2, 0, 2
	bne      lbl_800364C8
	fmr      f31, f3

lbl_800364C8:
	fcmpo    cr0, f30, f4
	cror     2, 0, 2
	bne      lbl_800364D8
	fmr      f30, f4

lbl_800364D8:
	lfs      f0, lbl_805167A8@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_800364EC
	fmr      f1, f0

lbl_800364EC:
	lfs      f0, lbl_805167A8@sda21(r2)
	fcmpo    cr0, f29, f0
	cror     2, 0, 2
	bne      lbl_80036500
	fmr      f29, f0

lbl_80036500:
	lfs      f0, lbl_805167B0@sda21(r2)
	fcmpo    cr0, f31, f0
	cror     2, 1, 2
	bne      lbl_80036514
	fmr      f31, f0

lbl_80036514:
	lfs      f0, lbl_805167B0@sda21(r2)
	fcmpo    cr0, f30, f0
	cror     2, 1, 2
	bne      lbl_80036528
	fmr      f30, f0

lbl_80036528:
	fcmpo    cr0, f31, f1
	li       r0, 0
	cror     2, 1, 2
	bne      lbl_80036548
	fcmpo    cr0, f30, f29
	cror     2, 1, 2
	bne      lbl_80036548
	li       r0, 1

lbl_80036548:
	clrlwi.  r0, r0, 0x18
	beq      lbl_800365E4
	bl       __cvt_fp2unsigned
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f2, lbl_805167B8@sda21(r2)
	fmr      f1, f29
	stw      r0, 8(r1)
	lfd      f0, 8(r1)
	fsubs    f29, f0, f2
	bl       __cvt_fp2unsigned
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	lfd      f2, lbl_805167B8@sda21(r2)
	fmr      f1, f31
	stw      r0, 0x10(r1)
	lfd      f0, 0x10(r1)
	fsubs    f31, f0, f2
	bl       ceil
	frsp     f28, f1
	fmr      f1, f30
	bl       ceil
	frsp     f0, f1
	fsubs    f1, f0, f31
	bl       __cvt_fp2unsigned
	fsubs    f1, f28, f29
	mr       r29, r3
	bl       __cvt_fp2unsigned
	fmr      f1, f31
	mr       r30, r3
	bl       __cvt_fp2unsigned
	fmr      f1, f29
	mr       r31, r3
	bl       __cvt_fp2unsigned
	mr       r4, r31
	mr       r5, r30
	mr       r6, r29
	bl       GXSetScissor
	b        lbl_800365F8

lbl_800365E4:
	li       r3, 0
	li       r4, 0
	li       r5, 0
	li       r6, 0
	bl       GXSetScissor

lbl_800365F8:
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	psq_l    f29, 72(r1), 0, qr0
	lfd      f29, 0x40(r1)
	psq_l    f28, 56(r1), 0, qr0
	lfd      f28, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r0, 0x74(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	80036634
 * Size:	000024
 */
void J2DGrafContext::scissor(const JGeometry::TBox2<float>&)
{
	/*
	lwz      r5, 0(r4)
	lwz      r0, 4(r4)
	stw      r5, 0x14(r3)
	lwz      r5, 8(r4)
	stw      r0, 0x18(r3)
	lwz      r0, 0xc(r4)
	stw      r5, 0x1c(r3)
	stw      r0, 0x20(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80036658
 * Size:	000034
 */
void J2DGrafContext::place(const JGeometry::TBox2<float>&)
{
	/*
	lwz      r7, 0(r4)
	lwz      r6, 4(r4)
	stw      r7, 4(r3)
	lwz      r5, 8(r4)
	stw      r6, 8(r3)
	lwz      r0, 0xc(r4)
	stw      r5, 0xc(r3)
	stw      r0, 0x10(r3)
	stw      r7, 0x14(r3)
	stw      r6, 0x18(r3)
	stw      r5, 0x1c(r3)
	stw      r0, 0x20(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8003668C
 * Size:	00011C
 */
void J2DGrafContext::setColor(JUtility::TColor, JUtility::TColor,
                              JUtility::TColor, JUtility::TColor)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x0(r4)
	  li        r9, 0x1
	  lbz       r11, 0x1(r4)
	  li        r8, 0x4
	  stb       r0, 0x24(r3)
	  li        r0, 0x5
	  lbz       r10, 0x2(r4)
	  stb       r11, 0x25(r3)
	  lbz       r4, 0x3(r4)
	  stb       r10, 0x26(r3)
	  lbz       r10, 0x0(r5)
	  stb       r4, 0x27(r3)
	  lbz       r4, 0x1(r5)
	  stb       r10, 0x28(r3)
	  lbz       r10, 0x2(r5)
	  stb       r4, 0x29(r3)
	  lbz       r4, 0x3(r5)
	  stb       r10, 0x2A(r3)
	  lbz       r5, 0x0(r6)
	  stb       r4, 0x2B(r3)
	  lbz       r4, 0x1(r6)
	  stb       r5, 0x2C(r3)
	  lbz       r5, 0x2(r6)
	  stb       r4, 0x2D(r3)
	  lbz       r4, 0x3(r6)
	  stb       r5, 0x2E(r3)
	  lbz       r5, 0x0(r7)
	  stb       r4, 0x2F(r3)
	  lbz       r4, 0x1(r7)
	  stb       r5, 0x30(r3)
	  lbz       r5, 0x2(r7)
	  stb       r4, 0x31(r3)
	  lbz       r4, 0x3(r7)
	  stb       r5, 0x32(r3)
	  stb       r4, 0x33(r3)
	  stb       r9, 0xB0(r3)
	  stb       r8, 0xB1(r3)
	  stb       r0, 0xB2(r3)
	  stb       r9, 0xB3(r3)
	  stb       r8, 0xB4(r3)
	  stb       r0, 0xB5(r3)
	  stb       r9, 0xB6(r3)
	  stb       r8, 0xB7(r3)
	  stb       r0, 0xB8(r3)
	  lwz       r0, 0x24(r3)
	  rlwinm    r0,r0,0,24,31
	  cmplwi    r0, 0xFF
	  bnelr-
	  li        r4, 0
	  stb       r4, 0xB0(r3)
	  stb       r9, 0xB1(r3)
	  stb       r4, 0xB2(r3)
	  lwz       r0, 0x2C(r3)
	  rlwinm    r0,r0,0,24,31
	  cmplwi    r0, 0xFF
	  bnelr-
	  stb       r4, 0xB3(r3)
	  stb       r9, 0xB4(r3)
	  stb       r4, 0xB5(r3)
	  lwz       r0, 0x28(r3)
	  rlwinm    r0,r0,0,24,31
	  cmplwi    r0, 0xFF
	  bnelr-
	  lwz       r0, 0x30(r3)
	  rlwinm    r0,r0,0,24,31
	  cmplwi    r0, 0xFF
	  bnelr-
	  stb       r4, 0xB6(r3)
	  stb       r9, 0xB7(r3)
	  stb       r4, 0xB8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800367A8
 * Size:	00002C
 */
void J2DGrafContext::setLineWidth(unsigned char)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stb      r4, 0x34(r3)
	li       r4, 0
	lbz      r3, 0x34(r3)
	bl       GXSetLineWidth
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800367D4
 * Size:	0000FC
 */
void J2DGrafContext::fillBox(const JGeometry::TBox2<float>&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r6, 0xf
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lbz      r3, 0xb6(r3)
	lbz      r4, 0xb7(r30)
	lbz      r5, 0xb8(r30)
	bl       GXSetBlendMode
	addi     r3, r30, 0x80
	li       r4, 0
	bl       GXLoadPosMtxImm
	li       r3, 0
	li       r4, 9
	li       r5, 1
	li       r6, 4
	li       r7, 0
	bl       GXSetVtxAttrFmt
	li       r3, 0x80
	li       r4, 0
	li       r5, 4
	bl       GXBegin
	lfs      f2, 0(r31)
	lis      r8, 0xCC008000@ha
	lfs      f3, 4(r31)
	li       r3, 0
	stfs     f2, 0xCC008000@l(r8)
	li       r4, 9
	lfs      f1, lbl_805167A8@sda21(r2)
	li       r5, 1
	stfs     f3, -0x8000(r8)
	li       r6, 3
	lfs      f0, 8(r31)
	li       r7, 0
	stfs     f1, -0x8000(r8)
	lfs      f4, 0xc(r31)
	lwz      r0, 0x24(r30)
	stw      r0, -0x8000(r8)
	stfs     f0, -0x8000(r8)
	stfs     f3, -0x8000(r8)
	stfs     f1, -0x8000(r8)
	lwz      r0, 0x28(r30)
	stw      r0, -0x8000(r8)
	stfs     f0, -0x8000(r8)
	stfs     f4, -0x8000(r8)
	stfs     f1, -0x8000(r8)
	lwz      r0, 0x30(r30)
	stw      r0, -0x8000(r8)
	stfs     f2, -0x8000(r8)
	stfs     f4, -0x8000(r8)
	stfs     f1, -0x8000(r8)
	lwz      r0, 0x2c(r30)
	stw      r0, -0x8000(r8)
	bl       GXSetVtxAttrFmt
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
 * Address:	800368D0
 * Size:	000110
 */
void J2DGrafContext::drawFrame(const JGeometry::TBox2<float>&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r6, 0xf
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lbz      r3, 0xb6(r3)
	lbz      r4, 0xb7(r30)
	lbz      r5, 0xb8(r30)
	bl       GXSetBlendMode
	addi     r3, r30, 0x80
	li       r4, 0
	bl       GXLoadPosMtxImm
	li       r3, 0
	li       r4, 9
	li       r5, 1
	li       r6, 4
	li       r7, 0
	bl       GXSetVtxAttrFmt
	li       r3, 0xb0
	li       r4, 0
	li       r5, 5
	bl       GXBegin
	lfs      f2, 0(r31)
	lis      r8, 0xCC008000@ha
	lfs      f3, 4(r31)
	li       r3, 0
	stfs     f2, 0xCC008000@l(r8)
	li       r4, 9
	lfs      f1, lbl_805167A8@sda21(r2)
	li       r5, 1
	stfs     f3, -0x8000(r8)
	li       r6, 3
	lfs      f0, 8(r31)
	li       r7, 0
	stfs     f1, -0x8000(r8)
	lfs      f4, 0xc(r31)
	lwz      r0, 0x24(r30)
	stw      r0, -0x8000(r8)
	stfs     f0, -0x8000(r8)
	stfs     f3, -0x8000(r8)
	stfs     f1, -0x8000(r8)
	lwz      r0, 0x28(r30)
	stw      r0, -0x8000(r8)
	stfs     f0, -0x8000(r8)
	stfs     f4, -0x8000(r8)
	stfs     f1, -0x8000(r8)
	lwz      r0, 0x30(r30)
	stw      r0, -0x8000(r8)
	stfs     f2, -0x8000(r8)
	stfs     f4, -0x8000(r8)
	stfs     f1, -0x8000(r8)
	lwz      r0, 0x2c(r30)
	stw      r0, -0x8000(r8)
	stfs     f2, -0x8000(r8)
	stfs     f3, -0x8000(r8)
	stfs     f1, -0x8000(r8)
	lwz      r0, 0x24(r30)
	stw      r0, -0x8000(r8)
	bl       GXSetVtxAttrFmt
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
 * Address:	800369E0
 * Size:	000104
 */
void J2DGrafContext::lineTo(JGeometry::TVec2<float>)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	li       r6, 0xf
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	lwz      r3, 0(r4)
	lwz      r4, 4(r4)
	lwz      r5, 0x38(r30)
	lwz      r0, 0x3c(r30)
	stw      r3, 8(r1)
	lbz      r3, 0xb3(r30)
	stw      r4, 0xc(r1)
	lbz      r4, 0xb4(r30)
	stw      r5, 0x10(r1)
	lbz      r5, 0xb5(r30)
	stw      r0, 0x14(r1)
	bl       GXSetBlendMode
	addi     r3, r30, 0x80
	li       r4, 0
	bl       GXLoadPosMtxImm
	li       r3, 0
	li       r4, 9
	li       r5, 1
	li       r6, 4
	li       r7, 0
	bl       GXSetVtxAttrFmt
	li       r3, 0xa8
	li       r4, 0
	li       r5, 2
	bl       GXBegin
	lfs      f1, 0x10(r1)
	lis      r8, 0xCC008000@ha
	lfs      f0, 0x14(r1)
	li       r3, 0
	stfs     f1, 0xCC008000@l(r8)
	li       r4, 9
	lfs      f2, lbl_805167A8@sda21(r2)
	li       r5, 1
	stfs     f0, -0x8000(r8)
	li       r6, 3
	lfs      f1, 8(r1)
	li       r7, 0
	stfs     f2, -0x8000(r8)
	lfs      f0, 0xc(r1)
	lwz      r0, 0x24(r30)
	stw      r0, -0x8000(r8)
	stfs     f1, -0x8000(r8)
	stfs     f0, -0x8000(r8)
	stfs     f2, -0x8000(r8)
	lwz      r0, 0x2c(r30)
	stw      r0, -0x8000(r8)
	bl       GXSetVtxAttrFmt
	lfs      f1, 0(r31)
	lfs      f0, 4(r31)
	stfs     f1, 0x38(r30)
	stfs     f0, 0x3c(r30)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80036AE4
 * Size:	000008
 */
u32 J2DGrafContext::getGrafType() const { return 0x0; }

/*
 * --INFO--
 * Address:	80036AEC
 * Size:	000004
 */
void J2DGrafContext::setLookat() { }
