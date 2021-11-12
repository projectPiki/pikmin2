#include "types.h"

/*
    Generated from dpostproc

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516BD0
    lbl_80516BD0:
        .float 1.0
        .4byte 0x00000000
    .global lbl_80516BD8
    lbl_80516BD8:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80516BE0
    lbl_80516BE0:
        .4byte 0x40000000
    .global lbl_80516BE4
    lbl_80516BE4:
        .4byte 0x437F0000
    .global lbl_80516BE8
    lbl_80516BE8:
        .float 0.5
    .global lbl_80516BEC
    lbl_80516BEC:
        .4byte 0x46800000
    .global lbl_80516BF0
    lbl_80516BF0:
        .4byte 0x00000000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	80091030
 * Size:	000070
 */
void JPACalcScaleX(JPAEmitterWorkData*, JPABaseParticle*)
{
	/*
	lwz      r5, 4(r3)
	lfs      f3, 0x1fc(r3)
	lwz      r5, 0x20(r5)
	lwz      r3, 0(r5)
	lfs      f0, 0xc(r3)
	fcmpo    cr0, f3, f0
	bge      lbl_80091068
	lfs      f1, 0xc(r5)
	lfs      f0, 0x14(r3)
	lfs      f2, 0x68(r4)
	fmadds   f0, f3, f1, f0
	fmuls    f0, f2, f0
	stfs     f0, 0x60(r4)
	blr

lbl_80091068:
	lfs      f0, 0x10(r3)
	fcmpo    cr0, f3, f0
	ble      lbl_80091094
	fsubs    f1, f3, f0
	lfs      f2, 0x14(r5)
	lfs      f0, lbl_80516BD0@sda21(r2)
	lfs      f3, 0x68(r4)
	fmadds   f0, f2, f1, f0
	fmuls    f0, f3, f0
	stfs     f0, 0x60(r4)
	blr

lbl_80091094:
	lfs      f0, 0x68(r4)
	stfs     f0, 0x60(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800910A0
 * Size:	000070
 */
void JPACalcScaleY(JPAEmitterWorkData*, JPABaseParticle*)
{
	/*
	lwz      r5, 4(r3)
	lfs      f3, 0x1fc(r3)
	lwz      r5, 0x20(r5)
	lwz      r3, 0(r5)
	lfs      f0, 0xc(r3)
	fcmpo    cr0, f3, f0
	bge      lbl_800910D8
	lfs      f1, 0x10(r5)
	lfs      f0, 0x1c(r3)
	lfs      f2, 0x68(r4)
	fmadds   f0, f3, f1, f0
	fmuls    f0, f2, f0
	stfs     f0, 0x64(r4)
	blr

lbl_800910D8:
	lfs      f0, 0x10(r3)
	fcmpo    cr0, f3, f0
	ble      lbl_80091104
	fsubs    f1, f3, f0
	lfs      f2, 0x18(r5)
	lfs      f0, lbl_80516BD0@sda21(r2)
	lfs      f3, 0x68(r4)
	fmadds   f0, f2, f1, f0
	fmuls    f0, f3, f0
	stfs     f0, 0x64(r4)
	blr

lbl_80091104:
	lfs      f0, 0x68(r4)
	stfs     f0, 0x64(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80091110
 * Size:	00000C
 */
void JPACalcScaleCopy(JPAEmitterWorkData*, JPABaseParticle*)
{
	/*
	lfs      f0, 0x60(r4)
	stfs     f0, 0x64(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009111C
 * Size:	00000C
 */
void JPACalcScaleAnmNormal(JPAEmitterWorkData*, JPABaseParticle*)
{
	/*
	lfs      f0, 0x84(r4)
	stfs     f0, 0x1fc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80091128
 * Size:	000064
 */
void JPACalcScaleAnmRepeatX(JPAEmitterWorkData*, JPABaseParticle*)
{
	/*
	stwu     r1, -0x20(r1)
	lis      r0, 0x4330
	lfd      f2, lbl_80516BD8@sda21(r2)
	lwz      r6, 4(r3)
	lha      r5, 0x80(r4)
	lwz      r4, 0x20(r6)
	stw      r0, 8(r1)
	lwz      r4, 0(r4)
	stw      r0, 0x10(r1)
	lha      r6, 0x28(r4)
	divw     r4, r5, r6
	xoris    r0, r6, 0x8000
	stw      r0, 0x14(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f2
	mullw    r0, r4, r6
	subf     r0, r0, r5
	xoris    r0, r0, 0x8000
	stw      r0, 0xc(r1)
	lfd      f1, 8(r1)
	fsubs    f1, f1, f2
	fdivs    f0, f1, f0
	stfs     f0, 0x1fc(r3)
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009118C
 * Size:	000064
 */
void JPACalcScaleAnmRepeatY(JPAEmitterWorkData*, JPABaseParticle*)
{
	/*
	stwu     r1, -0x20(r1)
	lis      r0, 0x4330
	lfd      f2, lbl_80516BD8@sda21(r2)
	lwz      r6, 4(r3)
	lha      r5, 0x80(r4)
	lwz      r4, 0x20(r6)
	stw      r0, 8(r1)
	lwz      r4, 0(r4)
	stw      r0, 0x10(r1)
	lha      r6, 0x2a(r4)
	divw     r4, r5, r6
	xoris    r0, r6, 0x8000
	stw      r0, 0x14(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f2
	mullw    r0, r4, r6
	subf     r0, r0, r5
	xoris    r0, r0, 0x8000
	stw      r0, 0xc(r1)
	lfd      f1, 8(r1)
	fsubs    f1, f1, f2
	fdivs    f0, f1, f0
	stfs     f0, 0x1fc(r3)
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800911F0
 * Size:	00008C
 */
void JPACalcScaleAnmReverseX(JPAEmitterWorkData*, JPABaseParticle*)
{
	/*
	stwu     r1, -0x20(r1)
	lis      r5, 0x4330
	lfd      f5, lbl_80516BD8@sda21(r2)
	lwz      r6, 4(r3)
	lha      r7, 0x80(r4)
	lwz      r4, 0x20(r6)
	stw      r5, 8(r1)
	lwz      r4, 0(r4)
	stw      r5, 0x10(r1)
	lha      r4, 0x28(r4)
	stw      r5, 0x18(r1)
	divw     r6, r7, r4
	xoris    r0, r4, 0x8000
	stw      r0, 0x14(r1)
	lfs      f1, lbl_80516BE0@sda21(r2)
	lfd      f0, 0x10(r1)
	fsubs    f3, f0, f5
	mullw    r4, r6, r4
	clrlwi   r0, r6, 0x1f
	lfs      f0, lbl_80516BD0@sda21(r2)
	xoris    r0, r0, 0x8000
	stw      r0, 0x1c(r1)
	subf     r0, r4, r7
	xoris    r0, r0, 0x8000
	lfd      f2, 0x18(r1)
	stw      r0, 0xc(r1)
	fsubs    f2, f2, f5
	lfd      f4, 8(r1)
	fsubs    f4, f4, f5
	fdivs    f3, f4, f3
	fnmsubs  f0, f1, f3, f0
	fmadds   f0, f2, f0, f3
	stfs     f0, 0x1fc(r3)
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009127C
 * Size:	00008C
 */
void JPACalcScaleAnmReverseY(JPAEmitterWorkData*, JPABaseParticle*)
{
	/*
	stwu     r1, -0x20(r1)
	lis      r5, 0x4330
	lfd      f5, lbl_80516BD8@sda21(r2)
	lwz      r6, 4(r3)
	lha      r7, 0x80(r4)
	lwz      r4, 0x20(r6)
	stw      r5, 8(r1)
	lwz      r4, 0(r4)
	stw      r5, 0x10(r1)
	lha      r4, 0x2a(r4)
	stw      r5, 0x18(r1)
	divw     r6, r7, r4
	xoris    r0, r4, 0x8000
	stw      r0, 0x14(r1)
	lfs      f1, lbl_80516BE0@sda21(r2)
	lfd      f0, 0x10(r1)
	fsubs    f3, f0, f5
	mullw    r4, r6, r4
	clrlwi   r0, r6, 0x1f
	lfs      f0, lbl_80516BD0@sda21(r2)
	xoris    r0, r0, 0x8000
	stw      r0, 0x1c(r1)
	subf     r0, r4, r7
	xoris    r0, r0, 0x8000
	lfd      f2, 0x18(r1)
	stw      r0, 0xc(r1)
	fsubs    f2, f2, f5
	lfd      f4, 8(r1)
	fsubs    f4, f4, f5
	fdivs    f3, f4, f3
	fnmsubs  f0, f1, f3, f0
	fmadds   f0, f2, f0, f3
	stfs     f0, 0x1fc(r3)
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80091308
 * Size:	000080
 */
void JPACalcAlphaAnm(JPAEmitterWorkData*, JPABaseParticle*)
{
	/*
	stwu     r1, -0x10(r1)
	lwz      r3, 4(r3)
	lfs      f3, 0x84(r4)
	lwz      r5, 0x20(r3)
	lwz      r3, 0(r5)
	lfs      f0, 0x2c(r3)
	fcmpo    cr0, f3, f0
	bge      lbl_80091340
	lfs      f1, 4(r5)
	lfs      f0, 0x34(r3)
	lfs      f2, lbl_80516BE4@sda21(r2)
	fmadds   f0, f3, f1, f0
	fmuls    f4, f2, f0
	b        lbl_80091374

lbl_80091340:
	lfs      f0, 0x30(r3)
	fcmpo    cr0, f3, f0
	ble      lbl_80091368
	fsubs    f2, f3, f0
	lfs      f1, 8(r5)
	lfs      f0, 0x38(r3)
	lfs      f3, lbl_80516BE4@sda21(r2)
	fmadds   f0, f2, f1, f0
	fmuls    f4, f3, f0
	b        lbl_80091374

lbl_80091368:
	lfs      f1, lbl_80516BE4@sda21(r2)
	lfs      f0, 0x38(r3)
	fmuls    f4, f1, f0

lbl_80091374:
	psq_st   f4, 8(r1), 1, qr2
	lbz      r0, 8(r1)
	stb      r0, 0x96(r4)
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80091388
 * Size:	0000E4
 */
void JPACalcAlphaFlickAnm(JPAEmitterWorkData*, JPABaseParticle*)
{
	/*
	stwu     r1, -0x20(r1)
	lwz      r3, 4(r3)
	lfs      f2, 0x84(r4)
	lwz      r3, 0x20(r3)
	lwz      r6, 0(r3)
	lfs      f0, 0x2c(r6)
	fcmpo    cr0, f2, f0
	bge      lbl_800913B8
	lfs      f1, 4(r3)
	lfs      f0, 0x34(r6)
	fmadds   f7, f2, f1, f0
	b        lbl_800913DC

lbl_800913B8:
	lfs      f0, 0x30(r6)
	fcmpo    cr0, f2, f0
	ble      lbl_800913D8
	fsubs    f2, f2, f0
	lfs      f1, 8(r3)
	lfs      f0, 0x38(r6)
	fmadds   f7, f2, f1, f0
	b        lbl_800913DC

lbl_800913D8:
	lfs      f7, 0x38(r6)

lbl_800913DC:
	lha      r5, 0x80(r4)
	lis      r0, 0x4330
	stw      r0, 0x10(r1)
	lis      r3, sincosTable___5JMath@ha
	xoris    r0, r5, 0x8000
	lfd      f1, lbl_80516BD8@sda21(r2)
	stw      r0, 0x14(r1)
	addi     r3, r3, sincosTable___5JMath@l
	lfs      f4, 0x6c(r4)
	lfd      f0, 0x10(r1)
	lfs      f5, lbl_80516BEC@sda21(r2)
	fsubs    f3, f0, f1
	lfs      f2, lbl_80516BD0@sda21(r2)
	lfs      f1, 0x40(r6)
	lfs      f0, 0x48(r6)
	fmuls    f3, f4, f3
	lfs      f4, lbl_80516BE8@sda21(r2)
	fsubs    f1, f2, f1
	lfs      f6, lbl_80516BE4@sda21(r2)
	fmuls    f3, f5, f3
	fmuls    f1, f3, f1
	fctiwz   f1, f1
	stfd     f1, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 0x1e, 0x12, 0x1c
	lfsx     f1, r3, r0
	fsubs    f1, f1, f2
	fmuls    f0, f1, f0
	fmadds   f0, f4, f0, f2
	fmuls    f0, f6, f0
	fmuls    f7, f7, f0
	psq_st   f7, 8(r1), 1, qr2
	lbz      r0, 8(r1)
	stb      r0, 0x96(r4)
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8009146C
 * Size:	000034
 */
JPAExtraShape::JPAExtraShape(const unsigned char*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r4, 0(r3)
	bl       init__13JPAExtraShapeFv
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001FC
 */
void JPAExtraShape::init_jpa(const unsigned char*, JKRHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800914A0
 * Size:	000100
 */
void JPAExtraShape::init()
{
	/*
	lwz      r4, 0(r3)
	lfs      f0, lbl_80516BF0@sda21(r2)
	lfs      f2, 0x2c(r4)
	fcmpu    cr0, f0, f2
	beq      lbl_800914C8
	lfs      f1, 0x38(r4)
	lfs      f0, 0x34(r4)
	fsubs    f0, f1, f0
	fdivs    f0, f0, f2
	b        lbl_800914CC

lbl_800914C8:
	lfs      f0, lbl_80516BD0@sda21(r2)

lbl_800914CC:
	stfs     f0, 4(r3)
	lfs      f0, lbl_80516BD0@sda21(r2)
	lwz      r4, 0(r3)
	lfs      f1, 0x30(r4)
	fcmpu    cr0, f0, f1
	beq      lbl_800914F8
	lfs      f2, 0x3c(r4)
	fsubs    f0, f0, f1
	lfs      f1, 0x38(r4)
	fsubs    f1, f2, f1
	fdivs    f0, f1, f0

lbl_800914F8:
	stfs     f0, 8(r3)
	lfs      f0, lbl_80516BF0@sda21(r2)
	lwz      r4, 0(r3)
	lfs      f1, 0xc(r4)
	fcmpu    cr0, f0, f1
	beq      lbl_80091540
	lfs      f2, lbl_80516BD0@sda21(r2)
	lfs      f0, 0x14(r4)
	fsubs    f0, f2, f0
	fdivs    f0, f0, f1
	stfs     f0, 0xc(r3)
	lwz      r4, 0(r3)
	lfs      f1, 0x1c(r4)
	lfs      f0, 0xc(r4)
	fsubs    f1, f2, f1
	fdivs    f0, f1, f0
	stfs     f0, 0x10(r3)
	b        lbl_8009154C

lbl_80091540:
	lfs      f0, lbl_80516BD0@sda21(r2)
	stfs     f0, 0x10(r3)
	stfs     f0, 0xc(r3)

lbl_8009154C:
	lwz      r4, 0(r3)
	lfs      f2, lbl_80516BD0@sda21(r2)
	lfs      f0, 0x10(r4)
	fcmpu    cr0, f2, f0
	beq      lbl_80091594
	lfs      f1, 0x18(r4)
	fsubs    f0, f2, f0
	fsubs    f1, f1, f2
	fdivs    f0, f1, f0
	stfs     f0, 0x14(r3)
	lwz      r4, 0(r3)
	lfs      f1, 0x20(r4)
	lfs      f0, 0x10(r4)
	fsubs    f1, f1, f2
	fsubs    f0, f2, f0
	fdivs    f0, f1, f0
	stfs     f0, 0x18(r3)
	blr

lbl_80091594:
	stfs     f2, 0x18(r3)
	stfs     f2, 0x14(r3)
	blr
	*/
}
