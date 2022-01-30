#include "JSystem/JUT/JUTDbPrint.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .sbss # 0x80514D80 - 0x80516360
    .global sDebugPrint__10JUTDbPrint
    sDebugPrint__10JUTDbPrint:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805165A0
    lbl_805165A0:
        .float -1.0
    .global lbl_805165A4
    lbl_805165A4:
        .float 1.0
    .global lbl_805165A8
    lbl_805165A8:
        .4byte 0x43300000
        .4byte 0x80000000
*/

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
JUTDbPrint::JUTDbPrint(JUTFont*, JKRHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
JUTDbPrint::~JUTDbPrint()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800294D4
 * Size:	0000AC
 */
JUTDbPrint* JUTDbPrint::start(JUTFont*, JKRHeap*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r0, sDebugPrint__10JUTDbPrint@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80029564
	cmplwi   r31, 0
	bne      lbl_80029508
	lwz      r31, sCurrentHeap__7JKRHeap@sda21(r13)

lbl_80029508:
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80029560
	li       r0, -1
	cmplwi   r31, 0
	stw      r0, 8(r3)
	li       r0, 0
	stw      r30, 4(r3)
	stw      r0, 0(r3)
	beq      lbl_8002953C
	mr       r0, r31
	b        lbl_80029540

lbl_8002953C:
	lwz      r0, sCurrentHeap__7JKRHeap@sda21(r13)

lbl_80029540:
	stw      r0, 0x10(r3)
	li       r4, 0xff
	li       r0, 1
	stb      r4, 8(r3)
	stb      r4, 9(r3)
	stb      r4, 0xa(r3)
	stb      r4, 0xb(r3)
	stb      r0, 0xc(r3)

lbl_80029560:
	stw      r3, sDebugPrint__10JUTDbPrint@sda21(r13)

lbl_80029564:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r3, sDebugPrint__10JUTDbPrint@sda21(r13)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80029580
 * Size:	000018
 */
JUTFont* JUTDbPrint::changeFont(JUTFont*)
{
	/*
	cmplwi   r4, 0
	lwz      r0, 4(r3)
	beq      lbl_80029590
	stw      r4, 4(r3)

lbl_80029590:
	mr       r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void JUTDbPrint::enter(int, int, int, const char*, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000128
 */
void JUTDbPrint::print(int, int, const char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000128
 */
void JUTDbPrint::print(int, int, int, const char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void JUTDbPrint::reset()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80029598
 * Size:	000038
 */
void JUTDbPrint::flush()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	li       r5, 0
	stw      r0, 0x14(r1)
	lwz      r6, sManager__8JUTVideo@sda21(r13)
	lwz      r6, 4(r6)
	lhz      r7, 6(r6)
	lhz      r6, 4(r6)
	bl       flush__10JUTDbPrintFiiii
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800295D0
 * Size:	000174
 */
void JUTDbPrint::flush(int, int, int, int)
{
	/*
	stwu     r1, -0x110(r1)
	mflr     r0
	stw      r0, 0x114(r1)
	stw      r31, 0x10c(r1)
	stw      r30, 0x108(r1)
	stw      r29, 0x104(r1)
	stw      r28, 0x100(r1)
	mr       r28, r3
	mr       r31, r28
	lwz      r0, 4(r3)
	lwz      r30, 0(r3)
	cmplwi   r0, 0
	beq      lbl_80029724
	cmplwi   r30, 0
	beq      lbl_80029724
	lis      r8, 0x4330
	xoris    r3, r4, 0x8000
	xoris    r5, r5, 0x8000
	xoris    r4, r6, 0x8000
	xoris    r0, r7, 0x8000
	stw      r3, 0xe4(r1)
	lfd      f4, lbl_805165A8@sda21(r2)
	addi     r3, r1, 0xc
	stw      r8, 0xe0(r1)
	lfs      f5, lbl_805165A0@sda21(r2)
	lfd      f0, 0xe0(r1)
	stw      r5, 0xec(r1)
	fsubs    f1, f0, f4
	lfs      f6, lbl_805165A4@sda21(r2)
	stw      r8, 0xe8(r1)
	lfd      f0, 0xe8(r1)
	stw      r4, 0xf4(r1)
	fsubs    f2, f0, f4
	stw      r8, 0xf0(r1)
	lfd      f0, 0xf0(r1)
	stw      r0, 0xfc(r1)
	fsubs    f3, f0, f4
	stw      r8, 0xf8(r1)
	lfd      f0, 0xf8(r1)
	fsubs    f4, f0, f4
	bl       __ct__13J2DOrthoGraphFffffff
	addi     r3, r1, 0xc
	bl       setPort__13J2DOrthoGraphFv
	lwz      r3, 4(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r0, 8(r28)
	addi     r4, r1, 8
	stw      r0, 8(r1)
	lwz      r3, 4(r28)
	bl       setCharColor__7JUTFontFQ28JUtility6TColor
	b        lbl_80029704

lbl_800296A8:
	lbz      r0, 0xc(r28)
	cmplwi   r0, 0
	beq      lbl_800296CC
	lha      r4, 4(r30)
	mr       r3, r28
	lha      r5, 6(r30)
	addi     r7, r30, 0xc
	lha      r6, 0xa(r30)
	bl       drawString__10JUTDbPrintFiiiPCUc

lbl_800296CC:
	lha      r3, 8(r30)
	addi     r3, r3, -1
	extsh.   r0, r3
	sth      r3, 8(r30)
	bgt      lbl_800296FC
	lwz      r29, 0(r30)
	mr       r3, r30
	lwz      r4, 0x10(r28)
	bl       free__7JKRHeapFPvP7JKRHeap
	stw      r29, 0(r31)
	mr       r30, r29
	b        lbl_80029704

lbl_800296FC:
	mr       r31, r30
	lwz      r30, 0(r30)

lbl_80029704:
	cmplwi   r30, 0
	bne      lbl_800296A8
	lis      r4, __vt__13J2DOrthoGraph@ha
	lis      r3, __vt__14J2DGrafContext@ha
	addi     r0, r4, __vt__13J2DOrthoGraph@l
	stw      r0, 0xc(r1)
	addi     r0, r3, __vt__14J2DGrafContext@l
	stw      r0, 0xc(r1)

lbl_80029724:
	lwz      r0, 0x114(r1)
	lwz      r31, 0x10c(r1)
	lwz      r30, 0x108(r1)
	lwz      r29, 0x104(r1)
	lwz      r28, 0x100(r1)
	mtlr     r0
	addi     r1, r1, 0x110
	blr
	*/
}

/*
 * --INFO--
 * Address:	80029744
 * Size:	0000E8
 */
void JUTDbPrint::drawString(int, int, int, const unsigned char*)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stmw     r27, 0x2c(r1)
	lwz      r31, 4(r3)
	mr       r27, r4
	mr       r28, r5
	mr       r29, r6
	mr       r3, r31
	mr       r30, r7
	lwz      r12, 0(r31)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	xoris    r4, r3, 0x8000
	lis      r0, 0x4330
	mr       r3, r31
	stw      r4, 0xc(r1)
	lwz      r12, 0(r31)
	stw      r0, 8(r1)
	lfd      f1, lbl_805165A8@sda21(r2)
	lfd      f0, 8(r1)
	lwz      r12, 0x28(r12)
	fsubs    f31, f0, f1
	mtctr    r12
	bctrl
	lis      r7, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x14(r1)
	xoris    r6, r27, 0x8000
	xoris    r0, r28, 0x8000
	lfd      f2, lbl_805165A8@sda21(r2)
	stw      r7, 0x10(r1)
	fmr      f4, f31
	mr       r3, r31
	mr       r4, r30
	lfd      f0, 0x10(r1)
	mr       r5, r29
	stw      r6, 0x1c(r1)
	fsubs    f3, f0, f2
	li       r6, 1
	stw      r7, 0x18(r1)
	lfd      f0, 0x18(r1)
	stw      r0, 0x24(r1)
	fsubs    f1, f0, f2
	stw      r7, 0x20(r1)
	lfd      f0, 0x20(r1)
	fsubs    f2, f0, f2
	bl       drawString_size_scale__7JUTFontFffffPCcUlb
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	lmw      r27, 0x2c(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000124
 */
void JUTReport(int, int, const char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000128
 */
void JUTReport(int, int, int, const char*, ...)
{
	// UNUSED FUNCTION
}
