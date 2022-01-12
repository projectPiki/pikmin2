#include "types.h"

/*
    Generated from dpostproc

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global oneFrameRate
    oneFrameRate:
        .float 8.0
    .global oneFrameRateUser
    oneFrameRateUser:
        .float 10.0

    .section .sbss # 0x80514D80 - 0x80516360
    .global sManager__10JUTProcBar
    sManager__10JUTProcBar:
        .skip 0x4
    .global cnt$2595
    cnt$2595:
        .skip 0x4
    .global init$2596
    init$2596:
        .skip 0x4
    .global cntUser$2644
    cntUser$2644:
        .skip 0x4
    .global init$2645
    init$2645:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516698
    lbl_80516698:
        .4byte 0x41000000
    .global lbl_8051669C
    lbl_8051669C:
        .4byte 0x41200000
    .global lbl_805166A0
    lbl_805166A0:
        .4byte 0x40C00000
        .4byte 0x00000000
    .global lbl_805166A8
    lbl_805166A8:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_805166B0
    lbl_805166B0:
        .4byte 0x41A00000
    .global lbl_805166B4
    lbl_805166B4:
        .4byte 0x46823400
    .global lbl_805166B8
    lbl_805166B8:
        .4byte 0x41F00000
    .global lbl_805166BC
    lbl_805166BC:
        .float 0.1
    .global lbl_805166C0
    lbl_805166C0:
        .4byte 0x3E4CCCCD
    .global lbl_805166C4
    lbl_805166C4:
        .4byte 0x42700000
    .global lbl_805166C8
    lbl_805166C8:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_805166D0
    lbl_805166D0:
        .float 1.0
    .global lbl_805166D4
    lbl_805166D4:
        .4byte 0x411CCCCD
    .global lbl_805166D8
    lbl_805166D8:
        .4byte 0x40400000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	........
 * Size:	000114
 */
JUTProcBar::JUTProcBar()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002EFE0
 * Size:	000014
 */
JUTProcBar::CTime::CTime(void)
{
	/*
	li       r0, 0
	stw      r0, 4(r3)
	stw      r0, 8(r3)
	stw      r0, 0xc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
JUTProcBar::~JUTProcBar()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002EFF4
 * Size:	000130
 */
void JUTProcBar::create()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r0, sManager__10JUTProcBar@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8002F10C
	li       r3, 0x134
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_8002F108
	li       r0, 0
	lis      r3, __ct__Q210JUTProcBar5CTimeFv@ha
	stw      r0, 4(r31)
	addi     r4, r3, __ct__Q210JUTProcBar5CTimeFv@l
	addi     r3, r31, 0x64
	li       r5, 0
	stw      r0, 8(r31)
	li       r6, 0x14
	li       r7, 8
	stw      r0, 0xc(r31)
	stw      r0, 0x18(r31)
	stw      r0, 0x1c(r31)
	stw      r0, 0x20(r31)
	stw      r0, 0x2c(r31)
	stw      r0, 0x30(r31)
	stw      r0, 0x34(r31)
	stw      r0, 0x40(r31)
	stw      r0, 0x44(r31)
	stw      r0, 0x48(r31)
	stw      r0, 0x54(r31)
	stw      r0, 0x58(r31)
	stw      r0, 0x5c(r31)
	bl       __construct_array
	li       r4, 1
	li       r0, 0
	stb      r4, 0x10c(r31)
	stb      r4, 0x130(r31)
	stw      r0, 0x108(r31)
	lwz      r3, sManager__8JUTVideo@sda21(r13)
	lwz      r3, 4(r3)
	lhz      r6, 6(r3)
	cmpwi    r6, 0x190
	ble      lbl_8002F0D0
	li       r0, 2
	li       r5, 0x27
	stw      r0, 0x114(r31)
	addi     r4, r6, -40
	li       r3, 0x232
	addi     r0, r6, -70
	stw      r5, 0x118(r31)
	stw      r4, 0x11c(r31)
	stw      r3, 0x120(r31)
	stw      r0, 0x124(r31)
	b        lbl_8002F0F4

lbl_8002F0D0:
	stw      r4, 0x114(r31)
	li       r0, 0x27
	addi     r4, r6, -20
	li       r3, 0x232
	stw      r0, 0x118(r31)
	addi     r0, r6, -35
	stw      r4, 0x11c(r31)
	stw      r3, 0x120(r31)
	stw      r0, 0x124(r31)

lbl_8002F0F4:
	li       r3, 1
	li       r0, 0
	stw      r3, 0x110(r31)
	stw      r0, 0x128(r31)
	stw      r0, 0x12c(r31)

lbl_8002F108:
	stw      r31, sManager__10JUTProcBar@sda21(r13)

lbl_8002F10C:
	lwz      r0, 0x14(r1)
	lwz      r3, sManager__10JUTProcBar@sda21(r13)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8002F124
 * Size:	000040
 */
void JUTProcBar::destroy()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, sManager__10JUTProcBar@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8002F14C
	beq      lbl_8002F14C
	li       r0, 0
	stw      r0, sManager__10JUTProcBar@sda21(r13)
	bl       __dl__FPv

lbl_8002F14C:
	li       r0, 0
	stw      r0, sManager__10JUTProcBar@sda21(r13)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8002F164
 * Size:	0000D0
 */
void JUTProcBar::clear()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0xff
	li       r3, 0x81
	stw      r0, 0x14(r1)
	li       r0, 0x1e
	stw      r31, 0xc(r1)
	lwz      r31, sManager__10JUTProcBar@sda21(r13)
	stb      r4, 0x10(r31)
	stb      r3, 0x11(r31)
	stb      r0, 0x12(r31)
	bl       OSGetTick
	stw      r3, 0(r31)
	li       r4, 0xff
	li       r3, 0x81
	li       r0, 0x1e
	lwz      r31, sManager__10JUTProcBar@sda21(r13)
	stb      r4, 0x38(r31)
	stb      r3, 0x39(r31)
	stb      r0, 0x3a(r31)
	bl       OSGetTick
	stw      r3, 0x28(r31)
	li       r4, 0xff
	li       r3, 0x81
	li       r0, 0x1e
	lwz      r31, sManager__10JUTProcBar@sda21(r13)
	stb      r4, 0x24(r31)
	stb      r3, 0x25(r31)
	stb      r0, 0x26(r31)
	bl       OSGetTick
	stw      r3, 0x14(r31)
	li       r4, 0xff
	li       r3, 0x81
	li       r0, 0x1e
	lwz      r31, sManager__10JUTProcBar@sda21(r13)
	stb      r4, 0x60(r31)
	stb      r3, 0x61(r31)
	stb      r0, 0x62(r31)
	bl       OSGetTick
	stw      r3, 0x50(r31)
	li       r0, 0
	lfs      f1, lbl_80516698@sda21(r2)
	lwz      r3, sManager__10JUTProcBar@sda21(r13)
	lfs      f0, lbl_8051669C@sda21(r2)
	stw      r0, 0x104(r3)
	stfs     f1, oneFrameRate@sda21(r13)
	stfs     f0, oneFrameRateUser@sda21(r13)
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
 * Size:	00018C
 */
void JUTProcBar::bar_subroutine(int, int, int, int, int, int, int, JUtility::TColor, JUtility::TColor)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000144
 */
void JUTProcBar::adjustMeterLength(unsigned long, float*, float, float, int*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002F234
 * Size:	000034
 */
void JUTProcBar::draw()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       drawProcessBar__10JUTProcBarFv
	mr       r3, r31
	bl       drawHeapBar__10JUTProcBarFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8002F268
 * Size:	001814
 */
void JUTProcBar::drawProcessBar()
{
	/*
	stwu     r1, -0x180(r1)
	mflr     r0
	stw      r0, 0x184(r1)
	stfd     f31, 0x170(r1)
	psq_st   f31, 376(r1), 0, qr0
	stmw     r20, 0x140(r1)
	mr       r30, r3
	lbz      r0, 0x10c(r3)
	cmplwi   r0, 0
	beq      lbl_80030A60
	lwz      r3, sManager__8JUTVideo@sda21(r13)
	li       r27, 0x411a
	cmplwi   r3, 0
	beq      lbl_8002F2B8
	lwz      r3, 4(r3)
	lwz      r0, 0(r3)
	rlwinm   r0, r0, 0x1e, 0x1c, 0x1f
	cmpwi    r0, 1
	bne      lbl_8002F2B8
	li       r27, 0x4e20

lbl_8002F2B8:
	lbz      r0, init$2596@sda21(r13)
	extsb.   r0, r0
	bne      lbl_8002F2D4
	li       r3, 0
	li       r0, 1
	stw      r3, cnt$2595@sda21(r13)
	stb      r0, init$2596@sda21(r13)

lbl_8002F2D4:
	lwz      r5, 0x54(r30)
	li       r4, 0
	lfs      f0, oneFrameRate@sda21(r13)
	lis      r3, 0x4330
	lfs      f9, lbl_805166B0@sda21(r2)
	lfd      f8, lbl_805166C8@sda21(r2)
	lfs      f7, lbl_805166B4@sda21(r2)
	lfd      f5, lbl_805166A8@sda21(r2)
	lfs      f4, lbl_805166B8@sda21(r2)
	lfs      f2, lbl_805166BC@sda21(r2)
	lfs      f1, lbl_805166D0@sda21(r2)
	b        lbl_8002F350

lbl_8002F304:
	stw      r5, 0xfc(r1)
	lwz      r0, 0x120(r30)
	stw      r3, 0xf8(r1)
	xoris    r0, r0, 0x8000
	lfd      f3, 0xf8(r1)
	stw      r0, 0x104(r1)
	fsubs    f3, f3, f8
	stw      r3, 0x100(r1)
	fmuls    f6, f3, f0
	lfd      f3, 0x100(r1)
	fsubs    f3, f3, f5
	fmuls    f6, f9, f6
	fsubs    f3, f3, f4
	fdivs    f6, f6, f7
	fcmpo    cr0, f6, f3
	cror     2, 0, 2
	beq      lbl_8002F358
	fsubs    f0, f0, f2
	li       r4, 1

lbl_8002F350:
	fcmpo    cr0, f0, f1
	bgt      lbl_8002F304

lbl_8002F358:
	lfs      f1, lbl_8051669C@sda21(r2)
	fcmpo    cr0, f0, f1
	cror     2, 1, 2
	bne      lbl_8002F370
	li       r0, 0
	stw      r0, cnt$2595@sda21(r13)

lbl_8002F370:
	lfs      f1, lbl_805166D4@sda21(r2)
	fcmpo    cr0, f0, f1
	ble      lbl_8002F3FC
	lfs      f0, lbl_8051669C@sda21(r2)
	b        lbl_8002F3FC

lbl_8002F384:
	lwz      r3, cnt$2595@sda21(r13)
	addi     r0, r3, 1
	cmpwi    r0, 0x1e
	stw      r0, cnt$2595@sda21(r13)
	blt      lbl_8002F410
	lis      r3, 0x4330
	lwz      r0, 0x120(r30)
	stw      r5, 0x104(r1)
	xoris    r0, r0, 0x8000
	lfd      f2, lbl_805166C8@sda21(r2)
	stw      r3, 0x100(r1)
	lfs      f6, lbl_805166B0@sda21(r2)
	lfd      f1, 0x100(r1)
	lfs      f4, lbl_805166B4@sda21(r2)
	fsubs    f1, f1, f2
	stw      r0, 0xfc(r1)
	lfd      f3, lbl_805166A8@sda21(r2)
	stw      r3, 0xf8(r1)
	fmuls    f5, f1, f0
	lfs      f1, lbl_805166C4@sda21(r2)
	lfd      f2, 0xf8(r1)
	fmuls    f5, f6, f5
	fsubs    f2, f2, f3
	fdivs    f3, f5, f4
	fsubs    f1, f2, f1
	fcmpo    cr0, f3, f1
	bge      lbl_8002F410
	lfs      f1, lbl_805166C0@sda21(r2)
	fadds    f0, f0, f1
	b        lbl_8002F410

lbl_8002F3FC:
	cmpwi    r4, 0
	bne      lbl_8002F410
	lfs      f1, lbl_8051669C@sda21(r2)
	fcmpo    cr0, f0, f1
	blt      lbl_8002F384

lbl_8002F410:
	lfs      f1, lbl_805166B0@sda21(r2)
	stfs     f0, oneFrameRate@sda21(r13)
	fmuls    f0, f1, f0
	lwz      r5, 0x114(r30)
	lwz      r3, 0xc(r30)
	fctiwz   f0, f0
	lwz      r4, 0x120(r30)
	addi     r0, r3, 1
	slwi     r25, r5, 3
	cmplwi   r0, 0x10
	stw      r0, 0xc(r30)
	stfd     f0, 0x100(r1)
	mulli    r31, r5, 0xa
	slwi     r24, r5, 1
	lwz      r26, 0x104(r1)
	add      r3, r4, r26
	addi     r0, r3, -4
	divw     r23, r0, r26
	bge      lbl_8002F46C
	lwz      r3, 4(r30)
	lwz      r0, 8(r30)
	cmplw    r3, r0
	blt      lbl_8002F47C

lbl_8002F46C:
	lwz      r3, 4(r30)
	li       r0, 0
	stw      r3, 8(r30)
	stw      r0, 0xc(r30)

lbl_8002F47C:
	lwz      r3, 0x20(r30)
	addi     r0, r3, 1
	cmplwi   r0, 0x10
	stw      r0, 0x20(r30)
	bge      lbl_8002F4A0
	lwz      r3, 0x18(r30)
	lwz      r0, 0x1c(r30)
	cmplw    r3, r0
	blt      lbl_8002F4B0

lbl_8002F4A0:
	lwz      r3, 0x18(r30)
	li       r0, 0
	stw      r3, 0x1c(r30)
	stw      r0, 0x20(r30)

lbl_8002F4B0:
	lwz      r3, 0x34(r30)
	addi     r0, r3, 1
	cmplwi   r0, 0x10
	stw      r0, 0x34(r30)
	bge      lbl_8002F4D4
	lwz      r3, 0x2c(r30)
	lwz      r0, 0x30(r30)
	cmplw    r3, r0
	blt      lbl_8002F4E4

lbl_8002F4D4:
	lwz      r3, 0x2c(r30)
	li       r0, 0
	stw      r3, 0x30(r30)
	stw      r0, 0x34(r30)

lbl_8002F4E4:
	li       r3, 0
	li       r5, 0x32
	li       r4, 0xc8
	stb      r3, 0xf0(r1)
	lis      r6, 0x4330
	xoris    r0, r25, 0x8000
	stb      r3, 0xf1(r1)
	addi     r3, r1, 0xf4
	lwz      r8, 0x2c(r30)
	stb      r5, 0xf2(r1)
	lwz      r7, 0x40(r30)
	stb      r4, 0xf3(r1)
	lwz      r5, 0x18(r30)
	lwz      r4, 0xf0(r1)
	stw      r6, 0x100(r1)
	subf     r28, r7, r5
	lfd      f4, lbl_805166A8@sda21(r2)
	subf     r22, r8, r28
	stw      r4, 0xf4(r1)
	lwz      r7, 0x118(r30)
	lwz      r5, 0x11c(r30)
	lwz      r4, 0x120(r30)
	xoris    r7, r7, 0x8000
	xoris    r5, r5, 0x8000
	stw      r7, 0x104(r1)
	xoris    r4, r4, 0x8000
	lfd      f0, 0x100(r1)
	stw      r5, 0xfc(r1)
	fsubs    f1, f0, f4
	stw      r6, 0xf8(r1)
	lfd      f0, 0xf8(r1)
	stw      r4, 0x10c(r1)
	fsubs    f2, f0, f4
	stw      r6, 0x108(r1)
	lfd      f0, 0x108(r1)
	stw      r0, 0x114(r1)
	fsubs    f3, f0, f4
	stw      r6, 0x110(r1)
	lfd      f0, 0x110(r1)
	fsubs    f4, f0, f4
	bl       J2DFillBox__FffffQ28JUtility6TColor
	li       r3, 0x32
	li       r6, 0x96
	li       r5, 0xff
	stb      r3, 0xe8(r1)
	lis      r7, 0x4330
	xoris    r0, r25, 0x8000
	stb      r3, 0xe9(r1)
	addi     r3, r1, 0xec
	lfd      f4, lbl_805166A8@sda21(r2)
	li       r4, 6
	stb      r6, 0xea(r1)
	stb      r5, 0xeb(r1)
	lwz      r5, 0xe8(r1)
	stw      r7, 0x118(r1)
	stw      r5, 0xec(r1)
	lwz      r8, 0x118(r30)
	lwz      r6, 0x11c(r30)
	lwz      r5, 0x120(r30)
	xoris    r8, r8, 0x8000
	xoris    r6, r6, 0x8000
	stw      r8, 0x11c(r1)
	xoris    r5, r5, 0x8000
	lfd      f0, 0x118(r1)
	stw      r6, 0x124(r1)
	fsubs    f1, f0, f4
	stw      r7, 0x120(r1)
	lfd      f0, 0x120(r1)
	stw      r5, 0x12c(r1)
	fsubs    f2, f0, f4
	stw      r7, 0x128(r1)
	lfd      f0, 0x128(r1)
	stw      r0, 0x134(r1)
	fsubs    f3, f0, f4
	stw      r7, 0x130(r1)
	lfd      f0, 0x130(r1)
	fsubs    f4, f0, f4
	bl       J2DDrawFrame__FffffQ28JUtility6TColorUc
	lwz      r0, 0x104(r30)
	cmpw     r0, r23
	ble      lbl_8002F6B4
	li       r5, 0
	li       r3, 0xfa
	li       r0, 0xc8
	stb      r3, 0xe0(r1)
	lis      r6, 0x4330
	addi     r4, r25, 1
	stb      r5, 0xe1(r1)
	addi     r3, r1, 0xe4
	lfd      f3, lbl_805166A8@sda21(r2)
	stb      r5, 0xe2(r1)
	lfs      f4, lbl_805166D0@sda21(r2)
	stb      r0, 0xe3(r1)
	lwz      r0, 0xe0(r1)
	stw      r6, 0x130(r1)
	stw      r0, 0xe4(r1)
	lwz      r5, 0x11c(r30)
	lwz      r7, 0x118(r30)
	lwz      r0, 0x120(r30)
	add      r4, r5, r4
	xoris    r5, r7, 0x8000
	stw      r6, 0x128(r1)
	xoris    r4, r4, 0x8000
	xoris    r0, r0, 0x8000
	stw      r5, 0x134(r1)
	stw      r4, 0x12c(r1)
	lfd      f1, 0x130(r1)
	lfd      f0, 0x128(r1)
	stw      r0, 0x124(r1)
	fsubs    f1, f1, f3
	fsubs    f2, f0, f3
	stw      r6, 0x120(r1)
	lfd      f0, 0x120(r1)
	fsubs    f3, f0, f3
	bl       J2DFillBox__FffffQ28JUtility6TColor
	b        lbl_8002F744

lbl_8002F6B4:
	li       r4, 0xfa
	li       r3, 0
	li       r0, 0xc8
	stb      r3, 0xd8(r1)
	lis      r7, 0x4330
	addi     r5, r25, 1
	stb      r4, 0xd9(r1)
	addi     r3, r1, 0xdc
	lfd      f3, lbl_805166A8@sda21(r2)
	stb      r4, 0xda(r1)
	lfs      f4, lbl_805166D0@sda21(r2)
	stb      r0, 0xdb(r1)
	lwz      r0, 0xd8(r1)
	stw      r7, 0x130(r1)
	stw      r0, 0xdc(r1)
	lwz      r0, 0x104(r30)
	lwz      r6, 0x11c(r30)
	mullw    r4, r0, r26
	lwz      r8, 0x118(r30)
	add      r0, r6, r5
	stw      r7, 0x128(r1)
	xoris    r6, r8, 0x8000
	xoris    r5, r0, 0x8000
	addi     r0, r4, 2
	stw      r6, 0x134(r1)
	xoris    r0, r0, 0x8000
	stw      r5, 0x12c(r1)
	lfd      f1, 0x130(r1)
	lfd      f0, 0x128(r1)
	stw      r0, 0x124(r1)
	fsubs    f1, f1, f3
	fsubs    f2, f0, f3
	stw      r7, 0x120(r1)
	lfd      f0, 0x120(r1)
	fsubs    f3, f0, f3
	bl       J2DFillBox__FffffQ28JUtility6TColor

lbl_8002F744:
	lwz      r3, 0x54(r30)
	lwz      r0, 0x120(r30)
	mullw    r3, r3, r26
	divwu    r3, r3, r27
	cmpw     r3, r0
	ble      lbl_8002F7E0
	li       r4, 0xff
	li       r3, 0x64
	li       r0, 0
	stb      r4, 0xd0(r1)
	lis      r5, 0x4330
	lfd      f3, lbl_805166A8@sda21(r2)
	stb      r3, 0xd1(r1)
	addi     r3, r1, 0xd4
	lfs      f4, lbl_805166D0@sda21(r2)
	stb      r0, 0xd2(r1)
	stb      r4, 0xd3(r1)
	lwz      r0, 0xd0(r1)
	stw      r5, 0x130(r1)
	stw      r0, 0xd4(r1)
	lwz      r6, 0x118(r30)
	lwz      r4, 0x11c(r30)
	lwz      r0, 0x120(r30)
	xoris    r6, r6, 0x8000
	xoris    r4, r4, 0x8000
	stw      r6, 0x134(r1)
	xoris    r0, r0, 0x8000
	lfd      f0, 0x130(r1)
	stw      r4, 0x12c(r1)
	fsubs    f1, f0, f3
	stw      r5, 0x128(r1)
	lfd      f0, 0x128(r1)
	stw      r0, 0x124(r1)
	fsubs    f2, f0, f3
	stw      r5, 0x120(r1)
	lfd      f0, 0x120(r1)
	fsubs    f3, f0, f3
	bl       J2DFillBox__FffffQ28JUtility6TColor
	b        lbl_8002F85C

lbl_8002F7E0:
	li       r6, 0xff
	li       r0, 0x32
	li       r4, 0
	stb      r0, 0xc8(r1)
	lis      r5, 0x4330
	xoris    r0, r3, 0x8000
	stb      r6, 0xc9(r1)
	addi     r3, r1, 0xcc
	lfd      f3, lbl_805166A8@sda21(r2)
	stb      r4, 0xca(r1)
	lfs      f4, lbl_805166D0@sda21(r2)
	stb      r6, 0xcb(r1)
	lwz      r4, 0xc8(r1)
	stw      r5, 0x130(r1)
	stw      r4, 0xcc(r1)
	lwz      r6, 0x118(r30)
	lwz      r4, 0x11c(r30)
	xoris    r6, r6, 0x8000
	stw      r5, 0x128(r1)
	xoris    r4, r4, 0x8000
	stw      r6, 0x134(r1)
	stw      r4, 0x12c(r1)
	lfd      f1, 0x130(r1)
	lfd      f0, 0x128(r1)
	stw      r0, 0x124(r1)
	fsubs    f1, f1, f3
	fsubs    f2, f0, f3
	stw      r5, 0x120(r1)
	lfd      f0, 0x120(r1)
	fsubs    f3, f0, f3
	bl       J2DFillBox__FffffQ28JUtility6TColor

lbl_8002F85C:
	lwz      r0, 0x110(r30)
	cmpwi    r0, 0
	bne      lbl_8002FD48
	lwz      r0, 0x18(r30)
	lis      r5, 0x4330
	li       r9, 0xff
	li       r7, 0x50
	mullw    r4, r0, r26
	lwz      r3, 0x1c(r30)
	lwz      r6, 0x118(r30)
	xoris    r0, r24, 0x8000
	li       r10, 0x64
	lwz      r8, 0x11c(r30)
	divw     r11, r4, r27
	lwz      r4, 0x114(r30)
	addi     r28, r6, 1
	stw      r5, 0x130(r1)
	add      r22, r8, r4
	lfd      f4, lbl_805166A8@sda21(r2)
	mullw    r6, r3, r26
	xoris    r4, r28, 0x8000
	xoris    r3, r22, 0x8000
	stw      r4, 0x134(r1)
	xoris    r4, r11, 0x8000
	lfd      f0, 0x130(r1)
	li       r8, 0x78
	stw      r3, 0x12c(r1)
	divw     r29, r6, r27
	fsubs    f1, f0, f4
	stw      r5, 0x128(r1)
	addi     r3, r1, 0x44
	lfd      f0, 0x128(r1)
	stw      r4, 0x124(r1)
	stw      r5, 0x120(r1)
	fsubs    f2, f0, f4
	lfd      f0, 0x120(r1)
	stw      r0, 0x11c(r1)
	fsubs    f3, f0, f4
	stw      r5, 0x118(r1)
	lfd      f0, 0x118(r1)
	stb      r7, 0xc4(r1)
	fsubs    f4, f0, f4
	stb      r9, 0xc5(r1)
	stb      r7, 0xc6(r1)
	stb      r9, 0xc7(r1)
	lwz      r0, 0xc4(r1)
	stb      r10, 0xc0(r1)
	stb      r9, 0xc1(r1)
	stb      r8, 0xc2(r1)
	stb      r9, 0xc3(r1)
	stw      r0, 0x44(r1)
	bl       J2DFillBox__FffffQ28JUtility6TColor
	cmpwi    r29, 0
	blt      lbl_8002FA08
	cmpwi    r29, 6
	bge      lbl_8002F9A8
	lis      r6, 0x4330
	xoris    r3, r28, 0x8000
	xoris    r5, r22, 0x8000
	xoris    r4, r29, 0x8000
	xoris    r0, r24, 0x8000
	stw      r3, 0x134(r1)
	lfd      f4, lbl_805166A8@sda21(r2)
	addi     r3, r1, 0x48
	stw      r6, 0x130(r1)
	lwz      r7, 0xc0(r1)
	lfd      f0, 0x130(r1)
	stw      r5, 0x12c(r1)
	fsubs    f1, f0, f4
	stw      r6, 0x128(r1)
	lfd      f0, 0x128(r1)
	stw      r4, 0x124(r1)
	fsubs    f2, f0, f4
	stw      r6, 0x120(r1)
	lfd      f0, 0x120(r1)
	stw      r0, 0x11c(r1)
	fsubs    f3, f0, f4
	stw      r6, 0x118(r1)
	lfd      f0, 0x118(r1)
	stw      r7, 0x48(r1)
	fsubs    f4, f0, f4
	bl       J2DFillBox__FffffQ28JUtility6TColor
	b        lbl_8002FA08

lbl_8002F9A8:
	addi     r0, r29, -6
	lis      r5, 0x4330
	add      r0, r28, r0
	xoris    r4, r22, 0x8000
	xoris    r3, r0, 0x8000
	xoris    r0, r24, 0x8000
	stw      r3, 0x134(r1)
	addi     r3, r1, 0x4c
	lwz      r6, 0xc0(r1)
	stw      r5, 0x130(r1)
	lfd      f4, lbl_805166A8@sda21(r2)
	lfd      f0, 0x130(r1)
	stw      r4, 0x12c(r1)
	fsubs    f1, f0, f4
	lfs      f3, lbl_805166A0@sda21(r2)
	stw      r5, 0x128(r1)
	lfd      f0, 0x128(r1)
	stw      r0, 0x124(r1)
	fsubs    f2, f0, f4
	stw      r5, 0x120(r1)
	lfd      f0, 0x120(r1)
	stw      r6, 0x4c(r1)
	fsubs    f4, f0, f4
	bl       J2DFillBox__FffffQ28JUtility6TColor

lbl_8002FA08:
	lwz      r0, 0x2c(r30)
	lis      r6, 0x4330
	li       r11, 0xff
	li       r9, 0x50
	mullw    r5, r0, r26
	li       r10, 0x64
	lwz      r4, 0x30(r30)
	xoris    r0, r24, 0x8000
	lwz      r7, 0x114(r30)
	addi     r3, r1, 0x38
	divw     r12, r5, r27
	lwz      r5, 0x118(r30)
	slwi     r7, r7, 1
	stw      r6, 0x130(r1)
	addi     r29, r5, 1
	lfd      f4, lbl_805166A8@sda21(r2)
	mullw    r8, r4, r26
	add      r22, r22, r7
	xoris    r7, r29, 0x8000
	stw      r6, 0x128(r1)
	xoris    r5, r22, 0x8000
	xoris    r4, r12, 0x8000
	stw      r7, 0x134(r1)
	divw     r28, r8, r27
	stw      r5, 0x12c(r1)
	lfd      f1, 0x130(r1)
	lfd      f0, 0x128(r1)
	stw      r4, 0x124(r1)
	fsubs    f1, f1, f4
	stw      r6, 0x120(r1)
	fsubs    f2, f0, f4
	lfd      f0, 0x120(r1)
	stw      r0, 0x11c(r1)
	fsubs    f3, f0, f4
	stw      r6, 0x118(r1)
	lfd      f0, 0x118(r1)
	stb      r11, 0xbc(r1)
	fsubs    f4, f0, f4
	stb      r9, 0xbd(r1)
	stb      r9, 0xbe(r1)
	stb      r11, 0xbf(r1)
	lwz      r0, 0xbc(r1)
	stb      r11, 0xb8(r1)
	stb      r10, 0xb9(r1)
	stb      r10, 0xba(r1)
	stb      r11, 0xbb(r1)
	stw      r0, 0x38(r1)
	bl       J2DFillBox__FffffQ28JUtility6TColor
	cmpwi    r28, 0
	blt      lbl_8002FBA4
	cmpwi    r28, 6
	bge      lbl_8002FB44
	lis      r6, 0x4330
	xoris    r3, r29, 0x8000
	xoris    r5, r22, 0x8000
	xoris    r4, r28, 0x8000
	xoris    r0, r24, 0x8000
	stw      r3, 0x134(r1)
	lfd      f4, lbl_805166A8@sda21(r2)
	addi     r3, r1, 0x3c
	stw      r6, 0x130(r1)
	lwz      r7, 0xb8(r1)
	lfd      f0, 0x130(r1)
	stw      r5, 0x12c(r1)
	fsubs    f1, f0, f4
	stw      r6, 0x128(r1)
	lfd      f0, 0x128(r1)
	stw      r4, 0x124(r1)
	fsubs    f2, f0, f4
	stw      r6, 0x120(r1)
	lfd      f0, 0x120(r1)
	stw      r0, 0x11c(r1)
	fsubs    f3, f0, f4
	stw      r6, 0x118(r1)
	lfd      f0, 0x118(r1)
	stw      r7, 0x3c(r1)
	fsubs    f4, f0, f4
	bl       J2DFillBox__FffffQ28JUtility6TColor
	b        lbl_8002FBA4

lbl_8002FB44:
	addi     r0, r28, -6
	lis      r5, 0x4330
	add      r0, r29, r0
	xoris    r4, r22, 0x8000
	xoris    r3, r0, 0x8000
	xoris    r0, r24, 0x8000
	stw      r3, 0x134(r1)
	addi     r3, r1, 0x40
	lwz      r6, 0xb8(r1)
	stw      r5, 0x130(r1)
	lfd      f4, lbl_805166A8@sda21(r2)
	lfd      f0, 0x130(r1)
	stw      r4, 0x12c(r1)
	fsubs    f1, f0, f4
	lfs      f3, lbl_805166A0@sda21(r2)
	stw      r5, 0x128(r1)
	lfd      f0, 0x128(r1)
	stw      r0, 0x124(r1)
	fsubs    f2, f0, f4
	stw      r5, 0x120(r1)
	lfd      f0, 0x120(r1)
	stw      r6, 0x40(r1)
	fsubs    f4, f0, f4
	bl       J2DFillBox__FffffQ28JUtility6TColor

lbl_8002FBA4:
	lwz      r0, 4(r30)
	lis      r6, 0x4330
	li       r11, 0xc8
	li       r10, 0xff
	mullw    r4, r0, r26
	li       r9, 0xb4
	lwz      r3, 8(r30)
	xoris    r0, r24, 0x8000
	lwz      r5, 0x114(r30)
	li       r8, 0xa0
	divw     r12, r4, r27
	lwz      r4, 0x118(r30)
	slwi     r5, r5, 1
	stw      r6, 0x130(r1)
	addi     r29, r4, 1
	lfd      f4, lbl_805166A8@sda21(r2)
	mullw    r7, r3, r26
	add      r22, r22, r5
	xoris    r3, r29, 0x8000
	stw      r6, 0x128(r1)
	xoris    r5, r22, 0x8000
	xoris    r4, r12, 0x8000
	stw      r3, 0x134(r1)
	divw     r28, r7, r27
	addi     r3, r1, 0x2c
	stw      r5, 0x12c(r1)
	lfd      f1, 0x130(r1)
	lfd      f0, 0x128(r1)
	stw      r4, 0x124(r1)
	stw      r6, 0x120(r1)
	fsubs    f1, f1, f4
	fsubs    f2, f0, f4
	lfd      f0, 0x120(r1)
	stw      r0, 0x11c(r1)
	fsubs    f3, f0, f4
	stw      r6, 0x118(r1)
	lfd      f0, 0x118(r1)
	stb      r9, 0xb4(r1)
	fsubs    f4, f0, f4
	stb      r9, 0xb5(r1)
	stb      r8, 0xb6(r1)
	stb      r10, 0xb7(r1)
	lwz      r0, 0xb4(r1)
	stb      r11, 0xb0(r1)
	stb      r11, 0xb1(r1)
	stb      r11, 0xb2(r1)
	stb      r10, 0xb3(r1)
	stw      r0, 0x2c(r1)
	bl       J2DFillBox__FffffQ28JUtility6TColor
	cmpwi    r28, 0
	blt      lbl_80030298
	cmpwi    r28, 6
	bge      lbl_8002FCE4
	lis      r6, 0x4330
	xoris    r3, r29, 0x8000
	xoris    r5, r22, 0x8000
	xoris    r4, r28, 0x8000
	xoris    r0, r24, 0x8000
	stw      r3, 0x134(r1)
	lfd      f4, lbl_805166A8@sda21(r2)
	addi     r3, r1, 0x30
	stw      r6, 0x130(r1)
	lwz      r7, 0xb0(r1)
	lfd      f0, 0x130(r1)
	stw      r5, 0x12c(r1)
	fsubs    f1, f0, f4
	stw      r6, 0x128(r1)
	lfd      f0, 0x128(r1)
	stw      r4, 0x124(r1)
	fsubs    f2, f0, f4
	stw      r6, 0x120(r1)
	lfd      f0, 0x120(r1)
	stw      r0, 0x11c(r1)
	fsubs    f3, f0, f4
	stw      r6, 0x118(r1)
	lfd      f0, 0x118(r1)
	stw      r7, 0x30(r1)
	fsubs    f4, f0, f4
	bl       J2DFillBox__FffffQ28JUtility6TColor
	b        lbl_80030298

lbl_8002FCE4:
	addi     r0, r28, -6
	lis      r5, 0x4330
	add      r0, r29, r0
	xoris    r4, r22, 0x8000
	xoris    r3, r0, 0x8000
	xoris    r0, r24, 0x8000
	stw      r3, 0x134(r1)
	addi     r3, r1, 0x34
	lwz      r6, 0xb0(r1)
	stw      r5, 0x130(r1)
	lfd      f4, lbl_805166A8@sda21(r2)
	lfd      f0, 0x130(r1)
	stw      r4, 0x12c(r1)
	fsubs    f1, f0, f4
	lfs      f3, lbl_805166A0@sda21(r2)
	stw      r5, 0x128(r1)
	lfd      f0, 0x128(r1)
	stw      r0, 0x124(r1)
	fsubs    f2, f0, f4
	stw      r5, 0x120(r1)
	lfd      f0, 0x120(r1)
	stw      r6, 0x34(r1)
	fsubs    f4, f0, f4
	bl       J2DFillBox__FffffQ28JUtility6TColor
	b        lbl_80030298

lbl_8002FD48:
	mullw    r0, r28, r26
	lis      r6, 0x4330
	li       r10, 0x50
	lwz      r4, 0x118(r30)
	li       r9, 0xff
	lwz      r7, 0x11c(r30)
	divw     r3, r0, r27
	neg      r8, r26
	lwz      r5, 0x114(r30)
	addi     r20, r4, 1
	xoris    r0, r24, 0x8000
	stw      r6, 0x130(r1)
	add      r21, r7, r5
	xoris    r7, r20, 0x8000
	xoris    r5, r21, 0x8000
	xoris    r4, r3, 0x8000
	stw      r7, 0x134(r1)
	divw     r29, r8, r27
	lfd      f4, lbl_805166A8@sda21(r2)
	addi     r3, r1, 0x20
	lfd      f0, 0x130(r1)
	stw      r5, 0x12c(r1)
	fsubs    f1, f0, f4
	stw      r6, 0x128(r1)
	lfd      f0, 0x128(r1)
	stw      r4, 0x124(r1)
	fsubs    f2, f0, f4
	stw      r6, 0x120(r1)
	lfd      f0, 0x120(r1)
	stw      r0, 0x11c(r1)
	fsubs    f3, f0, f4
	stw      r6, 0x118(r1)
	lfd      f0, 0x118(r1)
	stb      r10, 0xac(r1)
	fsubs    f4, f0, f4
	stb      r9, 0xad(r1)
	stb      r10, 0xae(r1)
	stb      r9, 0xaf(r1)
	lwz      r0, 0xac(r1)
	stb      r10, 0xa8(r1)
	stb      r9, 0xa9(r1)
	stb      r10, 0xaa(r1)
	stb      r9, 0xab(r1)
	stw      r0, 0x20(r1)
	bl       J2DFillBox__FffffQ28JUtility6TColor
	cmpwi    r29, 0
	blt      lbl_8002FED8
	cmpwi    r29, 6
	bge      lbl_8002FE78
	lis      r6, 0x4330
	xoris    r3, r20, 0x8000
	xoris    r5, r21, 0x8000
	xoris    r4, r29, 0x8000
	xoris    r0, r24, 0x8000
	stw      r3, 0x134(r1)
	lfd      f4, lbl_805166A8@sda21(r2)
	addi     r3, r1, 0x24
	stw      r6, 0x130(r1)
	lwz      r7, 0xa8(r1)
	lfd      f0, 0x130(r1)
	stw      r5, 0x12c(r1)
	fsubs    f1, f0, f4
	stw      r6, 0x128(r1)
	lfd      f0, 0x128(r1)
	stw      r4, 0x124(r1)
	fsubs    f2, f0, f4
	stw      r6, 0x120(r1)
	lfd      f0, 0x120(r1)
	stw      r0, 0x11c(r1)
	fsubs    f3, f0, f4
	stw      r6, 0x118(r1)
	lfd      f0, 0x118(r1)
	stw      r7, 0x24(r1)
	fsubs    f4, f0, f4
	bl       J2DFillBox__FffffQ28JUtility6TColor
	b        lbl_8002FED8

lbl_8002FE78:
	addi     r0, r29, -6
	lis      r5, 0x4330
	add      r0, r20, r0
	xoris    r4, r21, 0x8000
	xoris    r3, r0, 0x8000
	xoris    r0, r24, 0x8000
	stw      r3, 0x134(r1)
	addi     r3, r1, 0x28
	lwz      r6, 0xa8(r1)
	stw      r5, 0x130(r1)
	lfd      f4, lbl_805166A8@sda21(r2)
	lfd      f0, 0x130(r1)
	stw      r4, 0x12c(r1)
	fsubs    f1, f0, f4
	lfs      f3, lbl_805166A0@sda21(r2)
	stw      r5, 0x128(r1)
	lfd      f0, 0x128(r1)
	stw      r0, 0x124(r1)
	fsubs    f2, f0, f4
	stw      r5, 0x120(r1)
	lfd      f0, 0x120(r1)
	stw      r6, 0x28(r1)
	fsubs    f4, f0, f4
	bl       J2DFillBox__FffffQ28JUtility6TColor

lbl_8002FED8:
	li       r7, 0
	li       r8, 0xff
	stb      r7, 0xa0(r1)
	lis      r6, 0x4330
	mullw    r4, r28, r26
	xoris    r5, r21, 0x8000
	stb      r8, 0xa1(r1)
	xoris    r0, r24, 0x8000
	lfd      f4, lbl_805166A8@sda21(r2)
	addi     r3, r1, 0xa4
	stb      r7, 0xa2(r1)
	divwu    r7, r4, r27
	stb      r8, 0xa3(r1)
	lwz      r4, 0xa0(r1)
	stw      r6, 0x130(r1)
	stw      r4, 0xa4(r1)
	lwz      r4, 0x40(r30)
	mullw    r4, r4, r26
	add      r7, r20, r7
	stw      r5, 0x12c(r1)
	xoris    r5, r7, 0x8000
	stw      r5, 0x134(r1)
	divwu    r4, r4, r27
	stw      r6, 0x128(r1)
	lfd      f1, 0x130(r1)
	lfd      f0, 0x128(r1)
	stw      r6, 0x120(r1)
	fsubs    f1, f1, f4
	xoris    r4, r4, 0x8000
	stw      r0, 0x11c(r1)
	fsubs    f2, f0, f4
	stw      r4, 0x124(r1)
	stw      r6, 0x118(r1)
	lfd      f3, 0x120(r1)
	lfd      f0, 0x118(r1)
	fsubs    f3, f3, f4
	fsubs    f4, f0, f4
	bl       J2DFillBox__FffffQ28JUtility6TColor
	lwz      r0, 0x18(r30)
	lis      r5, 0x4330
	lwz      r4, 0x2c(r30)
	li       r8, 0xff
	mullw    r10, r0, r26
	li       r7, 0x50
	lwz      r6, 0x114(r30)
	xoris    r0, r24, 0x8000
	stw      r5, 0x110(r1)
	addi     r3, r1, 0x14
	mullw    r9, r22, r26
	slwi     r6, r6, 1
	stw      r5, 0x108(r1)
	add      r21, r21, r6
	lfd      f1, lbl_805166A8@sda21(r2)
	stw      r5, 0x100(r1)
	mullw    r6, r4, r26
	xoris    r4, r21, 0x8000
	stw      r4, 0x10c(r1)
	lfd      f0, 0x108(r1)
	stw      r0, 0xfc(r1)
	divwu    r0, r10, r27
	stw      r5, 0xf8(r1)
	fsubs    f2, f0, f1
	lfd      f0, 0xf8(r1)
	stb      r8, 0x9c(r1)
	fsubs    f4, f0, f1
	divw     r6, r6, r27
	add      r22, r20, r0
	stb      r7, 0x9d(r1)
	stb      r7, 0x9e(r1)
	stb      r8, 0x9f(r1)
	lwz      r4, 0x9c(r1)
	divwu    r5, r9, r27
	xoris    r0, r6, 0x8000
	stw      r0, 0x104(r1)
	lfd      f0, 0x100(r1)
	stb      r8, 0x98(r1)
	fsubs    f3, f0, f1
	add      r20, r20, r5
	stb      r7, 0x99(r1)
	xoris    r0, r20, 0x8000
	stw      r0, 0x114(r1)
	lfd      f0, 0x110(r1)
	stb      r7, 0x9a(r1)
	fsubs    f1, f0, f1
	stb      r8, 0x9b(r1)
	stw      r4, 0x14(r1)
	bl       J2DFillBox__FffffQ28JUtility6TColor
	cmpwi    r29, 0
	blt      lbl_80030110
	cmpwi    r29, 6
	bge      lbl_800300B0
	lis      r6, 0x4330
	xoris    r3, r20, 0x8000
	xoris    r5, r21, 0x8000
	xoris    r4, r29, 0x8000
	xoris    r0, r24, 0x8000
	stw      r3, 0x134(r1)
	lfd      f4, lbl_805166A8@sda21(r2)
	addi     r3, r1, 0x18
	stw      r6, 0x130(r1)
	lwz      r7, 0x98(r1)
	lfd      f0, 0x130(r1)
	stw      r5, 0x12c(r1)
	fsubs    f1, f0, f4
	stw      r6, 0x128(r1)
	lfd      f0, 0x128(r1)
	stw      r4, 0x124(r1)
	fsubs    f2, f0, f4
	stw      r6, 0x120(r1)
	lfd      f0, 0x120(r1)
	stw      r0, 0x11c(r1)
	fsubs    f3, f0, f4
	stw      r6, 0x118(r1)
	lfd      f0, 0x118(r1)
	stw      r7, 0x18(r1)
	fsubs    f4, f0, f4
	bl       J2DFillBox__FffffQ28JUtility6TColor
	b        lbl_80030110

lbl_800300B0:
	addi     r0, r29, -6
	lis      r5, 0x4330
	add      r0, r20, r0
	xoris    r4, r21, 0x8000
	xoris    r3, r0, 0x8000
	xoris    r0, r24, 0x8000
	stw      r3, 0x134(r1)
	addi     r3, r1, 0x1c
	lwz      r6, 0x98(r1)
	stw      r5, 0x130(r1)
	lfd      f4, lbl_805166A8@sda21(r2)
	lfd      f0, 0x130(r1)
	stw      r4, 0x12c(r1)
	fsubs    f1, f0, f4
	lfs      f3, lbl_805166A0@sda21(r2)
	stw      r5, 0x128(r1)
	lfd      f0, 0x128(r1)
	stw      r0, 0x124(r1)
	fsubs    f2, f0, f4
	stw      r5, 0x120(r1)
	lfd      f0, 0x120(r1)
	stw      r6, 0x1c(r1)
	fsubs    f4, f0, f4
	bl       J2DFillBox__FffffQ28JUtility6TColor

lbl_80030110:
	lwz      r0, 4(r30)
	lis      r6, 0x4330
	li       r9, 0xb4
	li       r8, 0xa0
	mullw    r4, r0, r26
	li       r7, 0xff
	lwz      r5, 0x114(r30)
	xoris    r3, r22, 0x8000
	xoris    r0, r24, 0x8000
	stw      r3, 0x134(r1)
	divw     r10, r4, r27
	slwi     r4, r5, 1
	stw      r6, 0x130(r1)
	addi     r3, r1, 8
	add      r21, r21, r4
	lfd      f4, lbl_805166A8@sda21(r2)
	xoris    r5, r21, 0x8000
	xoris    r4, r10, 0x8000
	lfd      f0, 0x130(r1)
	stw      r5, 0x12c(r1)
	fsubs    f1, f0, f4
	stw      r6, 0x128(r1)
	lfd      f0, 0x128(r1)
	stw      r4, 0x124(r1)
	fsubs    f2, f0, f4
	stw      r6, 0x120(r1)
	lfd      f0, 0x120(r1)
	stw      r0, 0x11c(r1)
	fsubs    f3, f0, f4
	stw      r6, 0x118(r1)
	lfd      f0, 0x118(r1)
	stb      r9, 0x94(r1)
	fsubs    f4, f0, f4
	stb      r9, 0x95(r1)
	stb      r8, 0x96(r1)
	stb      r7, 0x97(r1)
	lwz      r0, 0x94(r1)
	stb      r9, 0x90(r1)
	stb      r9, 0x91(r1)
	stb      r8, 0x92(r1)
	stb      r7, 0x93(r1)
	stw      r0, 8(r1)
	bl       J2DFillBox__FffffQ28JUtility6TColor
	cmpwi    r29, 0
	blt      lbl_80030298
	cmpwi    r29, 6
	bge      lbl_80030238
	lis      r6, 0x4330
	xoris    r3, r22, 0x8000
	xoris    r5, r21, 0x8000
	xoris    r4, r29, 0x8000
	xoris    r0, r24, 0x8000
	stw      r3, 0x134(r1)
	lfd      f4, lbl_805166A8@sda21(r2)
	addi     r3, r1, 0xc
	stw      r6, 0x130(r1)
	lwz      r7, 0x90(r1)
	lfd      f0, 0x130(r1)
	stw      r5, 0x12c(r1)
	fsubs    f1, f0, f4
	stw      r6, 0x128(r1)
	lfd      f0, 0x128(r1)
	stw      r4, 0x124(r1)
	fsubs    f2, f0, f4
	stw      r6, 0x120(r1)
	lfd      f0, 0x120(r1)
	stw      r0, 0x11c(r1)
	fsubs    f3, f0, f4
	stw      r6, 0x118(r1)
	lfd      f0, 0x118(r1)
	stw      r7, 0xc(r1)
	fsubs    f4, f0, f4
	bl       J2DFillBox__FffffQ28JUtility6TColor
	b        lbl_80030298

lbl_80030238:
	addi     r0, r29, -6
	lis      r5, 0x4330
	add      r0, r22, r0
	xoris    r4, r21, 0x8000
	xoris    r3, r0, 0x8000
	xoris    r0, r24, 0x8000
	stw      r3, 0x134(r1)
	addi     r3, r1, 0x10
	lwz      r6, 0x90(r1)
	stw      r5, 0x130(r1)
	lfd      f4, lbl_805166A8@sda21(r2)
	lfd      f0, 0x130(r1)
	stw      r4, 0x12c(r1)
	fsubs    f1, f0, f4
	lfs      f3, lbl_805166A0@sda21(r2)
	stw      r5, 0x128(r1)
	lfd      f0, 0x128(r1)
	stw      r0, 0x124(r1)
	fsubs    f2, f0, f4
	stw      r5, 0x120(r1)
	lfd      f0, 0x120(r1)
	stw      r6, 0x10(r1)
	fsubs    f4, f0, f4
	bl       J2DFillBox__FffffQ28JUtility6TColor

lbl_80030298:
	lis      r3, 0x66666667@ha
	lfd      f31, lbl_805166A8@sda21(r2)
	mr       r28, r26
	li       r20, 1
	addi     r29, r3, 0x66666667@l
	lis      r21, 0x4330
	b        lbl_80030394

lbl_800302B4:
	mulhw    r0, r29, r20
	lwz      r3, 0x118(r30)
	addi     r5, r28, 1
	add      r5, r3, r5
	srawi    r0, r0, 1
	srwi     r3, r0, 0x1f
	add      r0, r0, r3
	mulli    r0, r0, 5
	subf.    r0, r0, r20
	beq      lbl_800302FC
	li       r3, 0x64
	li       r0, 0xff
	stb      r3, 0x88(r1)
	addi     r4, r1, 0x88
	stb      r3, 0x89(r1)
	stb      r0, 0x8a(r1)
	stb      r0, 0x8b(r1)
	b        lbl_80030318

lbl_800302FC:
	li       r0, 0xff
	li       r3, 0xb4
	stb      r3, 0x84(r1)
	addi     r4, r1, 0x84
	stb      r0, 0x85(r1)
	stb      r0, 0x86(r1)
	stb      r0, 0x87(r1)

lbl_80030318:
	lwz      r0, 0(r4)
	xoris    r6, r5, 0x8000
	stw      r6, 0x134(r1)
	addi     r3, r1, 0x8c
	li       r4, 0xc
	stw      r0, 0x8c(r1)
	lwz      r5, 0x11c(r30)
	lwz      r7, 0x114(r30)
	add      r0, r5, r25
	stw      r21, 0x130(r1)
	add      r5, r5, r7
	subf     r0, r7, r0
	stw      r21, 0x128(r1)
	xoris    r5, r5, 0x8000
	lfd      f0, 0x130(r1)
	xoris    r0, r0, 0x8000
	stw      r5, 0x12c(r1)
	fsubs    f1, f0, f31
	lfd      f0, 0x128(r1)
	stw      r6, 0x124(r1)
	fsubs    f2, f0, f31
	stw      r21, 0x120(r1)
	lfd      f0, 0x120(r1)
	stw      r0, 0x11c(r1)
	fsubs    f3, f0, f31
	stw      r21, 0x118(r1)
	lfd      f0, 0x118(r1)
	fsubs    f4, f0, f31
	bl       J2DDrawLine__FffffQ28JUtility6TColori
	add      r28, r28, r26
	addi     r20, r20, 1

lbl_80030394:
	cmpw     r20, r23
	blt      lbl_800302B4
	li       r3, 4
	mr       r6, r30
	li       r0, 0
	li       r7, 0
	li       r4, 0
	mtctr    r3

lbl_800303B4:
	lwz      r3, 0x70(r6)
	addi     r3, r3, 1
	cmplwi   r3, 0x10
	stw      r3, 0x70(r6)
	bge      lbl_800303D8
	lwz      r5, 0x68(r6)
	lwz      r3, 0x6c(r6)
	cmplw    r5, r3
	ble      lbl_800303E4

lbl_800303D8:
	lwz      r3, 0x68(r6)
	stw      r3, 0x6c(r6)
	stw      r4, 0x70(r6)

lbl_800303E4:
	lwz      r3, 0x6c(r6)
	cmplw    r3, r0
	ble      lbl_800303F4
	mr       r0, r3

lbl_800303F4:
	lwz      r3, 0x84(r6)
	addi     r3, r3, 1
	cmplwi   r3, 0x10
	stw      r3, 0x84(r6)
	bge      lbl_80030418
	lwz      r5, 0x7c(r6)
	lwz      r3, 0x80(r6)
	cmplw    r5, r3
	ble      lbl_80030424

lbl_80030418:
	lwz      r3, 0x7c(r6)
	stw      r3, 0x80(r6)
	stw      r4, 0x84(r6)

lbl_80030424:
	lwz      r3, 0x80(r6)
	cmplw    r3, r0
	ble      lbl_80030434
	mr       r0, r3

lbl_80030434:
	addi     r6, r6, 0x28
	addi     r7, r7, 1
	bdnz     lbl_800303B4
	neg      r3, r0
	or       r3, r3, r0
	srwi     r3, r3, 0x1f
	cmplwi   r3, 1
	bne      lbl_80030A58
	lbz      r3, init$2645@sda21(r13)
	extsb.   r3, r3
	bne      lbl_80030470
	li       r4, 0
	li       r3, 1
	stw      r4, cntUser$2644@sda21(r13)
	stb      r3, init$2645@sda21(r13)

lbl_80030470:
	lfs      f0, oneFrameRateUser@sda21(r13)
	li       r5, 0
	lfs      f9, lbl_805166B0@sda21(r2)
	lis      r4, 0x4330
	lfd      f8, lbl_805166C8@sda21(r2)
	lfs      f7, lbl_805166B4@sda21(r2)
	lfd      f5, lbl_805166A8@sda21(r2)
	lfs      f4, lbl_805166B8@sda21(r2)
	lfs      f2, lbl_805166BC@sda21(r2)
	lfs      f1, lbl_805166D0@sda21(r2)
	b        lbl_800304E8

lbl_8003049C:
	stw      r0, 0x134(r1)
	lwz      r3, 0x120(r30)
	stw      r4, 0x130(r1)
	xoris    r3, r3, 0x8000
	lfd      f3, 0x130(r1)
	stw      r3, 0x12c(r1)
	fsubs    f3, f3, f8
	stw      r4, 0x128(r1)
	fmuls    f6, f3, f0
	lfd      f3, 0x128(r1)
	fsubs    f3, f3, f5
	fmuls    f6, f9, f6
	fsubs    f3, f3, f4
	fdivs    f6, f6, f7
	fcmpo    cr0, f6, f3
	cror     2, 0, 2
	beq      lbl_800304F0
	fsubs    f0, f0, f2
	li       r5, 1

lbl_800304E8:
	fcmpo    cr0, f0, f1
	bgt      lbl_8003049C

lbl_800304F0:
	lfs      f1, lbl_8051669C@sda21(r2)
	fcmpo    cr0, f0, f1
	cror     2, 1, 2
	bne      lbl_80030508
	li       r3, 0
	stw      r3, cntUser$2644@sda21(r13)

lbl_80030508:
	lfs      f1, lbl_805166D4@sda21(r2)
	fcmpo    cr0, f0, f1
	ble      lbl_80030594
	lfs      f0, lbl_8051669C@sda21(r2)
	b        lbl_80030594

lbl_8003051C:
	lwz      r3, cntUser$2644@sda21(r13)
	addi     r3, r3, 1
	cmpwi    r3, 0x1e
	stw      r3, cntUser$2644@sda21(r13)
	blt      lbl_800305A8
	lis      r4, 0x4330
	lwz      r3, 0x120(r30)
	stw      r0, 0x134(r1)
	xoris    r0, r3, 0x8000
	lfd      f2, lbl_805166C8@sda21(r2)
	stw      r4, 0x130(r1)
	lfs      f6, lbl_805166B0@sda21(r2)
	lfd      f1, 0x130(r1)
	lfs      f4, lbl_805166B4@sda21(r2)
	fsubs    f1, f1, f2
	stw      r0, 0x12c(r1)
	lfd      f3, lbl_805166A8@sda21(r2)
	stw      r4, 0x128(r1)
	fmuls    f5, f1, f0
	lfs      f1, lbl_805166C4@sda21(r2)
	lfd      f2, 0x128(r1)
	fmuls    f5, f6, f5
	fsubs    f2, f2, f3
	fdivs    f3, f5, f4
	fsubs    f1, f2, f1
	fcmpo    cr0, f3, f1
	bge      lbl_800305A8
	lfs      f1, lbl_805166C0@sda21(r2)
	fadds    f0, f0, f1
	b        lbl_800305A8

lbl_80030594:
	cmpwi    r5, 0
	bne      lbl_800305A8
	lfs      f1, lbl_8051669C@sda21(r2)
	fcmpo    cr0, f0, f1
	blt      lbl_8003051C

lbl_800305A8:
	li       r0, 0
	li       r3, 0x32
	li       r4, 0xc8
	stb      r0, 0x7c(r1)
	lis      r6, 0x4330
	lfs      f1, lbl_805166B0@sda21(r2)
	stb      r0, 0x7d(r1)
	xoris    r0, r31, 0x8000
	fmuls    f1, f1, f0
	lfd      f4, lbl_805166A8@sda21(r2)
	stb      r3, 0x7e(r1)
	addi     r3, r1, 0x80
	stb      r4, 0x7f(r1)
	fctiwz   f1, f1
	lwz      r4, 0x7c(r1)
	stfs     f0, oneFrameRateUser@sda21(r13)
	stw      r4, 0x80(r1)
	lwz      r7, 0x118(r30)
	lwz      r5, 0x124(r30)
	lwz      r4, 0x120(r30)
	xoris    r7, r7, 0x8000
	xoris    r5, r5, 0x8000
	stfd     f1, 0x130(r1)
	xoris    r4, r4, 0x8000
	stw      r7, 0x12c(r1)
	lwz      r20, 0x134(r1)
	stw      r6, 0x128(r1)
	lfd      f0, 0x128(r1)
	stw      r5, 0x124(r1)
	fsubs    f1, f0, f4
	stw      r6, 0x120(r1)
	lfd      f0, 0x120(r1)
	stw      r4, 0x11c(r1)
	fsubs    f2, f0, f4
	stw      r6, 0x118(r1)
	lfd      f0, 0x118(r1)
	stw      r0, 0x114(r1)
	fsubs    f3, f0, f4
	stw      r6, 0x110(r1)
	lfd      f0, 0x110(r1)
	fsubs    f4, f0, f4
	bl       J2DFillBox__FffffQ28JUtility6TColor
	li       r3, 0x32
	li       r6, 0x96
	li       r5, 0xff
	stb      r3, 0x74(r1)
	lis      r7, 0x4330
	xoris    r0, r31, 0x8000
	stb      r3, 0x75(r1)
	addi     r3, r1, 0x78
	lfd      f4, lbl_805166A8@sda21(r2)
	li       r4, 6
	stb      r6, 0x76(r1)
	stb      r5, 0x77(r1)
	lwz      r5, 0x74(r1)
	stw      r7, 0x108(r1)
	stw      r5, 0x78(r1)
	lwz      r8, 0x118(r30)
	lwz      r6, 0x124(r30)
	lwz      r5, 0x120(r30)
	xoris    r8, r8, 0x8000
	xoris    r6, r6, 0x8000
	stw      r8, 0x10c(r1)
	xoris    r5, r5, 0x8000
	lfd      f0, 0x108(r1)
	stw      r6, 0x104(r1)
	fsubs    f1, f0, f4
	stw      r7, 0x100(r1)
	lfd      f0, 0x100(r1)
	stw      r5, 0xfc(r1)
	fsubs    f2, f0, f4
	stw      r7, 0xf8(r1)
	lfd      f0, 0xf8(r1)
	stw      r0, 0x13c(r1)
	fsubs    f3, f0, f4
	stw      r7, 0x138(r1)
	lfd      f0, 0x138(r1)
	fsubs    f4, f0, f4
	bl       J2DDrawFrame__FffffQ28JUtility6TColorUc
	li       r21, 0
	mr       r28, r30

lbl_800306EC:
	lwz      r3, 0x70(r28)
	addi     r0, r3, 1
	cmplwi   r0, 0x10
	stw      r0, 0x70(r28)
	bge      lbl_80030710
	lwz      r3, 0x68(r28)
	lwz      r0, 0x6c(r28)
	cmplw    r3, r0
	ble      lbl_80030720

lbl_80030710:
	lwz      r3, 0x68(r28)
	li       r0, 0
	stw      r3, 0x6c(r28)
	stw      r0, 0x70(r28)

lbl_80030720:
	lwz      r3, 0x68(r28)
	cmplwi   r3, 0
	bne      lbl_80030738
	lwz      r0, 0x6c(r28)
	cmplwi   r0, 0
	beq      lbl_80030934

lbl_80030738:
	mullw    r0, r3, r20
	lis      r7, 0x4330
	lwz      r4, 0x6c(r28)
	li       r3, 0
	li       r5, 0xff
	stw      r7, 0x138(r1)
	stw      r3, 0x68(r28)
	divwu    r0, r0, r27
	lfd      f4, lbl_805166A8@sda21(r2)
	addi     r3, r1, 0x70
	lbz      r10, 0x76(r28)
	lbz      r9, 0x75(r28)
	lbz      r6, 0x74(r28)
	mullw    r8, r4, r20
	xoris    r4, r0, 0x8000
	stb      r6, 0x6c(r1)
	stb      r9, 0x6d(r1)
	stb      r10, 0x6e(r1)
	divwu    r22, r8, r27
	stb      r5, 0x6f(r1)
	lwz      r0, 0x6c(r1)
	stw      r7, 0x130(r1)
	stw      r0, 0x70(r1)
	lwz      r9, 0x114(r30)
	mullw    r5, r21, r9
	lwz      r8, 0x118(r30)
	xoris    r0, r9, 0x8000
	lwz      r6, 0x124(r30)
	addi     r8, r8, 1
	stw      r4, 0x12c(r1)
	add      r4, r9, r5
	xoris    r5, r8, 0x8000
	add      r4, r6, r4
	stw      r5, 0x13c(r1)
	xoris    r4, r4, 0x8000
	stw      r4, 0x134(r1)
	lfd      f0, 0x138(r1)
	stw      r7, 0x128(r1)
	lfd      f2, 0x130(r1)
	fsubs    f1, f0, f4
	lfd      f0, 0x128(r1)
	stw      r0, 0x124(r1)
	fsubs    f2, f2, f4
	fsubs    f3, f0, f4
	stw      r7, 0x120(r1)
	lfd      f0, 0x120(r1)
	fsubs    f4, f0, f4
	bl       J2DFillBox__FffffQ28JUtility6TColor
	cmplwi   r22, 3
	bge      lbl_800308A0
	li       r5, 0xff
	li       r3, 0xc8
	li       r0, 0x32
	stb      r5, 0x64(r1)
	lis      r7, 0x4330
	xoris    r4, r22, 0x8000
	stb      r3, 0x65(r1)
	addi     r3, r1, 0x68
	lfd      f4, lbl_805166A8@sda21(r2)
	stb      r0, 0x66(r1)
	stb      r5, 0x67(r1)
	lwz      r0, 0x64(r1)
	stw      r7, 0x138(r1)
	stw      r0, 0x68(r1)
	lwz      r9, 0x114(r30)
	lwz      r6, 0x118(r30)
	mullw    r5, r21, r9
	xoris    r0, r9, 0x8000
	xoris    r8, r6, 0x8000
	lwz      r6, 0x124(r30)
	stw      r8, 0x13c(r1)
	lfd      f0, 0x138(r1)
	add      r5, r9, r5
	stw      r7, 0x130(r1)
	add      r5, r6, r5
	fsubs    f1, f0, f4
	xoris    r5, r5, 0x8000
	stw      r4, 0x12c(r1)
	stw      r5, 0x134(r1)
	stw      r7, 0x128(r1)
	lfd      f2, 0x130(r1)
	lfd      f0, 0x128(r1)
	stw      r0, 0x124(r1)
	fsubs    f2, f2, f4
	fsubs    f3, f0, f4
	stw      r7, 0x120(r1)
	lfd      f0, 0x120(r1)
	fsubs    f4, f0, f4
	bl       J2DFillBox__FffffQ28JUtility6TColor
	b        lbl_80030934

lbl_800308A0:
	li       r4, 0xff
	li       r3, 0xc8
	li       r0, 0x32
	stb      r4, 0x5c(r1)
	lis      r6, 0x4330
	addi     r5, r22, -3
	stb      r3, 0x5d(r1)
	addi     r3, r1, 0x60
	lfd      f4, lbl_805166A8@sda21(r2)
	stb      r0, 0x5e(r1)
	lfs      f3, lbl_805166D8@sda21(r2)
	stb      r4, 0x5f(r1)
	lwz      r0, 0x5c(r1)
	stw      r6, 0x138(r1)
	stw      r0, 0x60(r1)
	lwz      r8, 0x114(r30)
	lwz      r7, 0x118(r30)
	mullw    r4, r21, r8
	xoris    r0, r8, 0x8000
	add      r7, r7, r5
	lwz      r5, 0x124(r30)
	stw      r6, 0x130(r1)
	xoris    r7, r7, 0x8000
	add      r4, r8, r4
	stw      r7, 0x13c(r1)
	add      r4, r5, r4
	xoris    r4, r4, 0x8000
	lfd      f0, 0x138(r1)
	stw      r4, 0x134(r1)
	fsubs    f1, f0, f4
	lfd      f0, 0x130(r1)
	stw      r0, 0x12c(r1)
	fsubs    f2, f0, f4
	stw      r6, 0x128(r1)
	lfd      f0, 0x128(r1)
	fsubs    f4, f0, f4
	bl       J2DFillBox__FffffQ28JUtility6TColor

lbl_80030934:
	addi     r21, r21, 1
	addi     r28, r28, 0x14
	cmpwi    r21, 8
	blt      lbl_800306EC
	lwz      r0, 0x120(r30)
	lis      r3, 0x66666667@ha
	lfd      f31, lbl_805166A8@sda21(r2)
	mr       r28, r20
	add      r4, r0, r20
	addi     r29, r3, 0x66666667@l
	addi     r0, r4, -4
	li       r22, 1
	divw     r21, r0, r20
	lis      r23, 0x4330
	b        lbl_80030A50

lbl_80030970:
	mulhw    r0, r29, r22
	lwz      r3, 0x118(r30)
	addi     r5, r28, 1
	add      r5, r3, r5
	srawi    r0, r0, 1
	srwi     r3, r0, 0x1f
	add      r0, r0, r3
	mulli    r0, r0, 5
	subf.    r0, r0, r22
	beq      lbl_800309B8
	li       r3, 0x64
	li       r0, 0xff
	stb      r3, 0x54(r1)
	addi     r4, r1, 0x54
	stb      r3, 0x55(r1)
	stb      r0, 0x56(r1)
	stb      r0, 0x57(r1)
	b        lbl_800309D4

lbl_800309B8:
	li       r0, 0xff
	li       r3, 0xb4
	stb      r3, 0x50(r1)
	addi     r4, r1, 0x50
	stb      r0, 0x51(r1)
	stb      r0, 0x52(r1)
	stb      r0, 0x53(r1)

lbl_800309D4:
	lwz      r0, 0(r4)
	xoris    r6, r5, 0x8000
	stw      r6, 0x13c(r1)
	addi     r3, r1, 0x58
	li       r4, 0xc
	stw      r0, 0x58(r1)
	lwz      r5, 0x124(r30)
	lwz      r7, 0x114(r30)
	add      r0, r5, r31
	stw      r23, 0x138(r1)
	add      r5, r5, r7
	subf     r0, r7, r0
	stw      r23, 0x130(r1)
	xoris    r5, r5, 0x8000
	lfd      f0, 0x138(r1)
	xoris    r0, r0, 0x8000
	stw      r5, 0x134(r1)
	fsubs    f1, f0, f31
	lfd      f0, 0x130(r1)
	stw      r6, 0x12c(r1)
	fsubs    f2, f0, f31
	stw      r23, 0x128(r1)
	lfd      f0, 0x128(r1)
	stw      r0, 0x124(r1)
	fsubs    f3, f0, f31
	stw      r23, 0x120(r1)
	lfd      f0, 0x120(r1)
	fsubs    f4, f0, f31
	bl       J2DDrawLine__FffffQ28JUtility6TColori
	add      r28, r28, r20
	addi     r22, r22, 1

lbl_80030A50:
	cmpw     r22, r21
	blt      lbl_80030970

lbl_80030A58:
	li       r0, 0
	stw      r0, 0x108(r30)

lbl_80030A60:
	psq_l    f31, 376(r1), 0, qr0
	lfd      f31, 0x170(r1)
	lmw      r20, 0x140(r1)
	lwz      r0, 0x184(r1)
	mtlr     r0
	addi     r1, r1, 0x180
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D0
 */
void JUTProcBar::getUnuseUserBar()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
void addrToXPos(void*, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
void byteToXLen(int, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000264
 */
void heapBar(JKRHeap*, int, int, int, int, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80030A7C
 * Size:	000704
 */
void JUTProcBar::drawHeapBar()
{
	/*
	stwu     r1, -0x1a0(r1)
	mflr     r0
	stw      r0, 0x1a4(r1)
	stmw     r26, 0x188(r1)
	mr       r26, r3
	lbz      r0, 0x130(r3)
	cmplwi   r0, 0
	beq      lbl_8003116C
	lwz      r3, 0x114(r26)
	lis      r6, 0x4330
	lwz      r4, 0x11c(r26)
	li       r10, 0x64
	slwi     r0, r3, 2
	lwz      r28, 0x118(r26)
	lwz      r27, 0x120(r26)
	slwi     r31, r3, 1
	subf     r30, r0, r4
	xoris    r3, r28, 0x8000
	xoris    r5, r30, 0x8000
	xoris    r4, r27, 0x8000
	xoris    r0, r31, 0x8000
	li       r9, 0
	li       r8, 0x32
	li       r7, 0xc8
	stw      r3, 0x44(r1)
	addi     r3, r1, 0x3c
	lfd      f4, lbl_805166A8@sda21(r2)
	stw      r6, 0x40(r1)
	lfd      f0, 0x40(r1)
	stw      r5, 0x4c(r1)
	fsubs    f1, f0, f4
	stw      r6, 0x48(r1)
	lfd      f0, 0x48(r1)
	stw      r4, 0x54(r1)
	fsubs    f2, f0, f4
	stw      r6, 0x50(r1)
	lfd      f0, 0x50(r1)
	stw      r0, 0x5c(r1)
	fsubs    f3, f0, f4
	stw      r6, 0x58(r1)
	lfd      f0, 0x58(r1)
	stb      r10, 0x38(r1)
	fsubs    f4, f0, f4
	stb      r9, 0x39(r1)
	stb      r8, 0x3a(r1)
	stb      r7, 0x3b(r1)
	lwz      r0, 0x38(r1)
	stw      r0, 0x3c(r1)
	bl       J2DFillBox__FffffQ28JUtility6TColor
	lis      r7, 0x4330
	xoris    r3, r28, 0x8000
	xoris    r6, r30, 0x8000
	xoris    r5, r27, 0x8000
	xoris    r0, r31, 0x8000
	li       r11, 0x64
	li       r10, 0x32
	li       r9, 0x96
	li       r8, 0xff
	stw      r3, 0x64(r1)
	lfd      f4, lbl_805166A8@sda21(r2)
	addi     r3, r1, 0x34
	stw      r7, 0x60(r1)
	li       r4, 6
	lfd      f0, 0x60(r1)
	stw      r6, 0x6c(r1)
	fsubs    f1, f0, f4
	stw      r7, 0x68(r1)
	lfd      f0, 0x68(r1)
	stw      r5, 0x74(r1)
	fsubs    f2, f0, f4
	stw      r7, 0x70(r1)
	lfd      f0, 0x70(r1)
	stw      r0, 0x7c(r1)
	fsubs    f3, f0, f4
	stw      r7, 0x78(r1)
	lfd      f0, 0x78(r1)
	stb      r11, 0x30(r1)
	fsubs    f4, f0, f4
	stb      r10, 0x31(r1)
	stb      r9, 0x32(r1)
	stb      r8, 0x33(r1)
	lwz      r0, 0x30(r1)
	stw      r0, 0x34(r1)
	bl       J2DDrawFrame__FffffQ28JUtility6TColorUc
	lwz      r4, mCodeStart__7JKRHeap@sda21(r13)
	lis      r9, 0x4330
	lwz      r11, mMemorySize__7JKRHeap@sda21(r13)
	xoris    r10, r27, 0x8000
	lwz      r3, mCodeEnd__7JKRHeap@sda21(r13)
	addis    r0, r4, 0x8000
	stw      r0, 0x8c(r1)
	li       r8, 0xff
	addis    r4, r3, 0x8000
	xoris    r5, r30, 0x8000
	stw      r9, 0x88(r1)
	xoris    r0, r31, 0x8000
	lfd      f4, lbl_805166C8@sda21(r2)
	li       r7, 0x32
	lfd      f0, 0x88(r1)
	li       r6, 0x96
	stw      r11, 0x94(r1)
	addi     r3, r1, 0x2c
	fsubs    f2, f0, f4
	lfd      f5, lbl_805166A8@sda21(r2)
	stw      r9, 0x90(r1)
	lfd      f0, 0x90(r1)
	stw      r4, 0xbc(r1)
	fsubs    f0, f0, f4
	stw      r9, 0xb8(r1)
	lfd      f1, 0xb8(r1)
	fdivs    f3, f2, f0
	stw      r11, 0xc4(r1)
	stw      r9, 0xc0(r1)
	lfd      f0, 0xc0(r1)
	stw      r10, 0x84(r1)
	stw      r9, 0x80(r1)
	lfd      f2, 0x80(r1)
	fsubs    f1, f1, f4
	fsubs    f0, f0, f4
	stw      r10, 0xb4(r1)
	fsubs    f4, f2, f5
	stw      r9, 0xb0(r1)
	fdivs    f0, f1, f0
	lfd      f1, 0xb0(r1)
	stw      r9, 0xa0(r1)
	stw      r5, 0xac(r1)
	stw      r9, 0xa8(r1)
	lfd      f2, 0xa8(r1)
	fsubs    f1, f1, f5
	stw      r9, 0xd0(r1)
	fmuls    f3, f4, f3
	stw      r0, 0xdc(r1)
	fsubs    f2, f2, f5
	fmuls    f0, f1, f0
	fctiwz   f3, f3
	stw      r9, 0xd8(r1)
	fctiwz   f1, f0
	lfd      f0, 0xd8(r1)
	stfd     f3, 0x98(r1)
	fsubs    f4, f0, f5
	stfd     f1, 0xc8(r1)
	lwz      r4, 0x9c(r1)
	lwz      r0, 0xcc(r1)
	add      r4, r28, r4
	stb      r8, 0x28(r1)
	add      r0, r28, r0
	subf     r0, r4, r0
	xoris    r4, r4, 0x8000
	xoris    r0, r0, 0x8000
	stw      r4, 0xa4(r1)
	stw      r0, 0xd4(r1)
	lfd      f1, 0xa0(r1)
	lfd      f0, 0xd0(r1)
	stb      r7, 0x29(r1)
	fsubs    f1, f1, f5
	fsubs    f3, f0, f5
	stb      r6, 0x2a(r1)
	stb      r8, 0x2b(r1)
	lwz      r0, 0x28(r1)
	stw      r0, 0x2c(r1)
	bl       J2DFillBox__FffffQ28JUtility6TColor
	lwz      r4, mUserRamStart__7JKRHeap@sda21(r13)
	lis      r10, 0x4330
	lwz      r12, mMemorySize__7JKRHeap@sda21(r13)
	xoris    r11, r27, 0x8000
	lwz      r3, mUserRamEnd__7JKRHeap@sda21(r13)
	addis    r0, r4, 0x8000
	stw      r0, 0xec(r1)
	xoris    r5, r30, 0x8000
	addis    r4, r3, 0x8000
	xoris    r0, r31, 0x8000
	stw      r10, 0xe8(r1)
	li       r9, 0
	lfd      f4, lbl_805166C8@sda21(r2)
	li       r8, 0x32
	lfd      f0, 0xe8(r1)
	li       r7, 0x96
	stw      r12, 0xf4(r1)
	li       r6, 0xff
	fsubs    f2, f0, f4
	lfd      f5, lbl_805166A8@sda21(r2)
	stw      r10, 0xf0(r1)
	addi     r3, r1, 0x24
	lfd      f0, 0xf0(r1)
	stw      r4, 0x11c(r1)
	fsubs    f0, f0, f4
	stw      r10, 0x118(r1)
	lfd      f1, 0x118(r1)
	fdivs    f3, f2, f0
	stw      r12, 0x124(r1)
	stw      r10, 0x120(r1)
	lfd      f0, 0x120(r1)
	stw      r11, 0xe4(r1)
	stw      r10, 0xe0(r1)
	lfd      f2, 0xe0(r1)
	fsubs    f1, f1, f4
	fsubs    f0, f0, f4
	stw      r11, 0x114(r1)
	fsubs    f4, f2, f5
	stw      r10, 0x110(r1)
	fdivs    f0, f1, f0
	lfd      f1, 0x110(r1)
	stw      r10, 0x100(r1)
	stw      r5, 0x10c(r1)
	stw      r10, 0x108(r1)
	lfd      f2, 0x108(r1)
	fsubs    f1, f1, f5
	stw      r10, 0x130(r1)
	fmuls    f3, f4, f3
	stw      r0, 0x13c(r1)
	fsubs    f2, f2, f5
	fmuls    f0, f1, f0
	fctiwz   f3, f3
	stw      r10, 0x138(r1)
	fctiwz   f1, f0
	lfd      f0, 0x138(r1)
	stfd     f3, 0xf8(r1)
	fsubs    f4, f0, f5
	stfd     f1, 0x128(r1)
	lwz      r4, 0xfc(r1)
	lwz      r0, 0x12c(r1)
	add      r29, r28, r4
	stb      r9, 0x20(r1)
	add      r0, r28, r0
	subf     r0, r29, r0
	xoris    r4, r29, 0x8000
	xoris    r0, r0, 0x8000
	stw      r4, 0x104(r1)
	stw      r0, 0x134(r1)
	lfd      f1, 0x100(r1)
	lfd      f0, 0x130(r1)
	stb      r8, 0x21(r1)
	fsubs    f1, f1, f5
	fsubs    f3, f0, f5
	stb      r7, 0x22(r1)
	stb      r6, 0x23(r1)
	lwz      r0, 0x20(r1)
	stw      r0, 0x24(r1)
	bl       J2DFillBox__FffffQ28JUtility6TColor
	lwz      r3, sRootHeap__7JKRHeap@sda21(r13)
	bl       getTotalFreeSize__7JKRHeapFv
	lwz      r4, mMemorySize__7JKRHeap@sda21(r13)
	lis      r7, 0x4330
	xoris    r0, r3, 0x8000
	li       r9, 0xfa
	stw      r0, 0x15c(r1)
	xoris    r5, r27, 0x8000
	srwi     r0, r31, 0x1f
	xoris    r8, r29, 0x8000
	stw      r7, 0x158(r1)
	add      r0, r0, r31
	lfd      f5, lbl_805166A8@sda21(r2)
	srawi    r29, r0, 1
	lfd      f0, 0x158(r1)
	xoris    r6, r30, 0x8000
	stw      r4, 0x164(r1)
	xoris    r0, r29, 0x8000
	lfd      f1, lbl_805166C8@sda21(r2)
	fsubs    f2, f0, f5
	stw      r7, 0x160(r1)
	li       r10, 0
	li       r4, 0xff
	addi     r3, r1, 0x1c
	lfd      f0, 0x160(r1)
	stw      r5, 0x154(r1)
	fsubs    f0, f0, f1
	stw      r7, 0x150(r1)
	fdivs    f0, f2, f0
	lfd      f1, 0x150(r1)
	stw      r8, 0x144(r1)
	stw      r7, 0x140(r1)
	lfd      f3, 0x140(r1)
	stw      r6, 0x14c(r1)
	fsubs    f2, f1, f5
	stw      r7, 0x148(r1)
	fsubs    f1, f3, f5
	lfd      f3, 0x148(r1)
	fmuls    f0, f2, f0
	stw      r7, 0x170(r1)
	fsubs    f2, f3, f5
	stw      r0, 0x17c(r1)
	fctiwz   f0, f0
	stw      r7, 0x178(r1)
	stfd     f0, 0x168(r1)
	lfd      f0, 0x178(r1)
	lwz      r0, 0x16c(r1)
	stb      r10, 0x18(r1)
	fsubs    f4, f0, f5
	xoris    r0, r0, 0x8000
	stw      r0, 0x174(r1)
	lfd      f0, 0x170(r1)
	stb      r9, 0x19(r1)
	fsubs    f3, f0, f5
	stb      r9, 0x1a(r1)
	stb      r4, 0x1b(r1)
	lwz      r0, 0x18(r1)
	stw      r0, 0x1c(r1)
	bl       J2DFillBox__FffffQ28JUtility6TColor
	lwz      r0, 0x128(r26)
	cmpwi    r0, 0
	bne      lbl_8003116C
	lwz      r3, 0x12c(r26)
	cmplwi   r3, 0
	beq      lbl_80030F40
	b        lbl_80030F44

lbl_80030F40:
	lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)

lbl_80030F44:
	lwz      r0, sSystemHeap__7JKRHeap@sda21(r13)
	cmplw    r3, r0
	beq      lbl_8003116C
	lwz      r5, 0x30(r3)
	lis      r6, 0x4330
	lwz      r8, mMemorySize__7JKRHeap@sda21(r13)
	xoris    r7, r27, 0x8000
	addis    r0, r5, 0x8000
	stw      r6, 0x170(r1)
	lfd      f3, lbl_805166C8@sda21(r2)
	stw      r0, 0x174(r1)
	lwz      r4, 0x34(r3)
	lfd      f0, 0x170(r1)
	stw      r8, 0x16c(r1)
	addis    r0, r4, 0x8000
	fsubs    f2, f0, f3
	lfd      f5, lbl_805166A8@sda21(r2)
	stw      r6, 0x168(r1)
	lfd      f0, 0x168(r1)
	stw      r0, 0x154(r1)
	fsubs    f0, f0, f3
	stw      r6, 0x150(r1)
	lfd      f1, 0x150(r1)
	fdivs    f2, f2, f0
	stw      r8, 0x14c(r1)
	stw      r6, 0x148(r1)
	lfd      f0, 0x148(r1)
	stw      r7, 0x17c(r1)
	stw      r6, 0x178(r1)
	fsubs    f1, f1, f3
	stw      r7, 0x15c(r1)
	fsubs    f0, f0, f3
	lfd      f4, 0x178(r1)
	stw      r6, 0x158(r1)
	fsubs    f3, f4, f5
	fdivs    f0, f1, f0
	lfd      f1, 0x158(r1)
	fsubs    f1, f1, f5
	fmuls    f2, f3, f2
	fmuls    f0, f1, f0
	fctiwz   f1, f2
	fctiwz   f0, f0
	stfd     f1, 0x160(r1)
	stfd     f0, 0x140(r1)
	lwz      r0, 0x164(r1)
	lwz      r26, 0x144(r1)
	add      r31, r28, r0
	bl       getTotalFreeSize__7JKRHeapFv
	lwz      r4, mMemorySize__7JKRHeap@sda21(r13)
	lis      r10, 0x4330
	xoris    r0, r3, 0x8000
	li       r9, 0xff
	stw      r0, 0x134(r1)
	xoris    r3, r27, 0x8000
	add      r0, r28, r26
	add      r30, r29, r30
	stw      r10, 0x130(r1)
	subf     r0, r31, r0
	lfd      f5, lbl_805166A8@sda21(r2)
	xoris    r6, r31, 0x8000
	lfd      f0, 0x130(r1)
	xoris    r5, r30, 0x8000
	stw      r4, 0x12c(r1)
	xoris    r4, r0, 0x8000
	lfd      f1, lbl_805166C8@sda21(r2)
	fsubs    f2, f0, f5
	stw      r10, 0x128(r1)
	xoris    r0, r29, 0x8000
	li       r8, 0
	li       r7, 0xc8
	lfd      f0, 0x128(r1)
	stw      r3, 0x13c(r1)
	addi     r3, r1, 8
	fsubs    f0, f0, f1
	stw      r10, 0x138(r1)
	fdivs    f2, f2, f0
	lfd      f1, 0x138(r1)
	stw      r6, 0x11c(r1)
	stw      r10, 0x118(r1)
	lfd      f0, 0x118(r1)
	stw      r5, 0x114(r1)
	fsubs    f3, f1, f5
	stw      r10, 0x110(r1)
	fsubs    f1, f0, f5
	lfd      f0, 0x110(r1)
	fmuls    f3, f3, f2
	stw      r4, 0x10c(r1)
	fsubs    f2, f0, f5
	stw      r10, 0x108(r1)
	fctiwz   f4, f3
	lfd      f0, 0x108(r1)
	stw      r0, 0x104(r1)
	fsubs    f3, f0, f5
	stw      r10, 0x100(r1)
	lfd      f0, 0x100(r1)
	stfd     f4, 0x120(r1)
	fsubs    f4, f0, f5
	stb      r9, 0xc(r1)
	lwz      r26, 0x124(r1)
	stb      r8, 0xd(r1)
	stb      r7, 0xe(r1)
	stb      r9, 0xf(r1)
	lwz      r0, 0xc(r1)
	stw      r0, 8(r1)
	bl       J2DFillBox__FffffQ28JUtility6TColor
	lis      r6, 0x4330
	xoris    r3, r31, 0x8000
	li       r9, 0xff
	xoris    r5, r30, 0x8000
	xoris    r4, r26, 0x8000
	xoris    r0, r29, 0x8000
	li       r8, 0xb4
	li       r7, 0xfa
	stw      r3, 0xfc(r1)
	addi     r3, r1, 0x10
	lfd      f4, lbl_805166A8@sda21(r2)
	stw      r6, 0xf8(r1)
	lfd      f0, 0xf8(r1)
	stw      r5, 0xf4(r1)
	fsubs    f1, f0, f4
	stw      r6, 0xf0(r1)
	lfd      f0, 0xf0(r1)
	stw      r4, 0xec(r1)
	fsubs    f2, f0, f4
	stw      r6, 0xe8(r1)
	lfd      f0, 0xe8(r1)
	stw      r0, 0xe4(r1)
	fsubs    f3, f0, f4
	stw      r6, 0xe0(r1)
	lfd      f0, 0xe0(r1)
	stb      r9, 0x14(r1)
	fsubs    f4, f0, f4
	stb      r8, 0x15(r1)
	stb      r7, 0x16(r1)
	stb      r9, 0x17(r1)
	lwz      r0, 0x14(r1)
	stw      r0, 0x10(r1)
	bl       J2DFillBox__FffffQ28JUtility6TColor

lbl_8003116C:
	lmw      r26, 0x188(r1)
	lwz      r0, 0x1a4(r1)
	mtlr     r0
	addi     r1, r1, 0x1a0
	blr
	*/
}
