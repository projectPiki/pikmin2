#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__8JUTFader
    __vt__8JUTFader:
        .4byte 0
        .4byte 0
        .4byte __dt__8JUTFaderFv
        .4byte startFadeIn__8JUTFaderFi
        .4byte startFadeOut__8JUTFaderFi
        .4byte draw__8JUTFaderFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516658
    lbl_80516658:
        .4byte 0x43300000
        .4byte 0x80000000
*/

/*
 * --INFO--
 * Address:	8002CE5C
 * Size:	0000AC
 */
JUTFader::JUTFader(int, int, int, int, JUtility::TColor)
{
	/*
	stwu     r1, -0x30(r1)
	lis      r10, 0x4330
	xoris    r0, r4, 0x8000
	xoris    r9, r5, 0x8000
	stw      r0, 0xc(r1)
	add      r0, r4, r6
	lis      r11, __vt__8JUTFader@ha
	lfd      f3, lbl_80516658@sda21(r2)
	stw      r10, 8(r1)
	addi     r11, r11, __vt__8JUTFader@l
	xoris    r6, r0, 0x8000
	add      r0, r5, r7
	lfd      f0, 8(r1)
	xoris    r5, r0, 0x8000
	stw      r9, 0x14(r1)
	li       r4, 0
	lwz      r7, 0(r8)
	fsubs    f1, f0, f3
	stw      r10, 0x10(r1)
	li       r0, -1
	stw      r11, 0(r3)
	lfd      f0, 0x10(r1)
	stw      r7, 0xc(r3)
	fsubs    f2, f0, f3
	stfs     f1, 0x10(r3)
	stw      r6, 0x1c(r1)
	stw      r10, 0x18(r1)
	lfd      f0, 0x18(r1)
	stw      r5, 0x24(r1)
	fsubs    f1, f0, f3
	stw      r10, 0x20(r1)
	lfd      f0, 0x20(r1)
	stfs     f2, 0x14(r3)
	fsubs    f0, f0, f3
	stfs     f1, 0x18(r3)
	stfs     f0, 0x1c(r3)
	stw      r4, 4(r3)
	sth      r4, 8(r3)
	sth      r4, 0xa(r3)
	stw      r4, 0x24(r3)
	stw      r0, 0x20(r3)
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8002CF08
 * Size:	000100
 */
void JUTFader::control()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r4, 0x20(r3)
	cmpwi    r4, 0
	blt      lbl_8002CF34
	addi     r0, r4, -1
	stw      r0, 0x20(r3)
	bne      lbl_8002CF34
	lwz      r0, 0x24(r3)
	stw      r0, 4(r3)

lbl_8002CF34:
	lwz      r0, 4(r3)
	cmpwi    r0, 1
	beq      lbl_8002CFF8
	cmpwi    r0, 2
	beq      lbl_8002CF70
	bge      lbl_8002CF58
	cmpwi    r0, 0
	beq      lbl_8002CF64
	b        lbl_8002CFE8

lbl_8002CF58:
	cmpwi    r0, 4
	bge      lbl_8002CFE8
	b        lbl_8002CFB0

lbl_8002CF64:
	li       r0, 0xff
	stb      r0, 0xf(r3)
	b        lbl_8002CFE8

lbl_8002CF70:
	lhz      r4, 0xa(r3)
	addi     r0, r4, 1
	sth      r0, 0xa(r3)
	clrlwi   r0, r0, 0x10
	mulli    r4, r0, 0xff
	lhz      r0, 8(r3)
	divw     r0, r4, r0
	subfic   r0, r0, 0xff
	stb      r0, 0xf(r3)
	lhz      r4, 0xa(r3)
	lhz      r0, 8(r3)
	cmplw    r4, r0
	blt      lbl_8002CFE8
	li       r0, 1
	stw      r0, 4(r3)
	b        lbl_8002CFE8

lbl_8002CFB0:
	lhz      r4, 0xa(r3)
	addi     r0, r4, 1
	sth      r0, 0xa(r3)
	clrlwi   r0, r0, 0x10
	mulli    r4, r0, 0xff
	lhz      r0, 8(r3)
	divw     r0, r4, r0
	stb      r0, 0xf(r3)
	lhz      r4, 0xa(r3)
	lhz      r0, 8(r3)
	cmplw    r4, r0
	blt      lbl_8002CFE8
	li       r0, 0
	stw      r0, 4(r3)

lbl_8002CFE8:
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8002CFF8:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8002D008
 * Size:	000090
 */
void JUTFader::draw()
{
	/*
	stwu     r1, -0x100(r1)
	mflr     r0
	stw      r0, 0x104(r1)
	stw      r31, 0xfc(r1)
	mr       r31, r3
	lbz      r0, 0xf(r3)
	cmplwi   r0, 0
	beq      lbl_8002D084
	addi     r3, r1, 0x1c
	bl       __ct__13J2DOrthoGraphFv
	lwz      r0, 0xc(r31)
	addi     r3, r1, 0x1c
	addi     r4, r1, 8
	addi     r5, r1, 0xc
	stw      r0, 0x18(r1)
	addi     r6, r1, 0x10
	addi     r7, r1, 0x14
	stw      r0, 0x14(r1)
	stw      r0, 0x10(r1)
	stw      r0, 0xc(r1)
	stw      r0, 8(r1)
	bl
setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
	addi     r3, r1, 0x1c
	addi     r4, r31, 0x10
	bl       "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"
	lis      r4, __vt__13J2DOrthoGraph@ha
	lis      r3, __vt__14J2DGrafContext@ha
	addi     r0, r4, __vt__13J2DOrthoGraph@l
	stw      r0, 0x1c(r1)
	addi     r0, r3, __vt__14J2DGrafContext@l
	stw      r0, 0x1c(r1)

lbl_8002D084:
	lwz      r0, 0x104(r1)
	lwz      r31, 0xfc(r1)
	mtlr     r0
	addi     r1, r1, 0x100
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void JUTFader::start(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002D098
 * Size:	000030
 */
void JUTFader::startFadeIn(int)
{
	/*
	lwz      r0, 4(r3)
	cntlzw   r5, r0
	rlwinm.  r0, r5, 0x1b, 0x18, 0x1f
	srwi     r6, r5, 5
	beq      lbl_8002D0C0
	li       r5, 2
	li       r0, 0
	stw      r5, 4(r3)
	sth      r0, 0xa(r3)
	sth      r4, 8(r3)

lbl_8002D0C0:
	mr       r3, r6
	blr
	*/
}

/*
 * --INFO--
 * Address:	8002D0C8
 * Size:	000034
 */
void JUTFader::startFadeOut(int)
{
	/*
	lwz      r0, 4(r3)
	subfic   r0, r0, 1
	cntlzw   r5, r0
	rlwinm.  r0, r5, 0x1b, 0x18, 0x1f
	srwi     r6, r5, 5
	beq      lbl_8002D0F4
	li       r5, 3
	li       r0, 0
	stw      r5, 4(r3)
	sth      r0, 0xa(r3)
	sth      r4, 8(r3)

lbl_8002D0F4:
	mr       r3, r6
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void JUTFader::setStatus(JUTFader::EStatus, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002D0FC
 * Size:	000048
 */
JUTFader::~JUTFader()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_8002D12C
	lis      r5, __vt__8JUTFader@ha
	extsh.   r0, r4
	addi     r0, r5, __vt__8JUTFader@l
	stw      r0, 0(r31)
	ble      lbl_8002D12C
	bl       __dl__FPv

lbl_8002D12C:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
