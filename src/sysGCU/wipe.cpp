#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
        .4byte __sinit_wipe_cpp

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804EBED8
    lbl_804EBED8:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__10BlackFader
    __vt__10BlackFader:
        .4byte 0
        .4byte 0
        .4byte __dt__10BlackFaderFv
        .4byte getChildCount__5CNodeFv
        .4byte update__8WipeBaseFv
        .4byte draw__8WipeBaseFv
        .4byte isWhite__10BlackFaderFv
        .4byte isBlack__10BlackFaderFv
        .4byte on_start__8WipeBaseFv
        .4byte do_draw__10BlackFaderFf
    .global __vt__14WipeOutInFader
    __vt__14WipeOutInFader:
        .4byte 0
        .4byte 0
        .4byte __dt__14WipeOutInFaderFv
        .4byte getChildCount__5CNodeFv
        .4byte update__8WipeBaseFv
        .4byte draw__8WipeBaseFv
        .4byte isWhite__14WipeOutInFaderFv
        .4byte isBlack__14WipeOutInFaderFv
        .4byte on_start__14WipeOutInFaderFv
        .4byte do_draw__14WipeOutInFaderFf
    .global __vt__12WipeOutFader
    __vt__12WipeOutFader:
        .4byte 0
        .4byte 0
        .4byte __dt__12WipeOutFaderFv
        .4byte getChildCount__5CNodeFv
        .4byte update__8WipeBaseFv
        .4byte draw__8WipeBaseFv
        .4byte isWhite__12WipeOutFaderFv
        .4byte isBlack__12WipeOutFaderFv
        .4byte on_start__12WipeOutFaderFv
        .4byte do_draw__12WipeOutFaderFf
    .global __vt__11WipeInFader
    __vt__11WipeInFader:
        .4byte 0
        .4byte 0
        .4byte __dt__11WipeInFaderFv
        .4byte getChildCount__5CNodeFv
        .4byte update__8WipeBaseFv
        .4byte draw__8WipeBaseFv
        .4byte isWhite__11WipeInFaderFv
        .4byte isBlack__11WipeInFaderFv
        .4byte on_start__8WipeBaseFv
        .4byte do_draw__11WipeInFaderFf
    .global __vt__8WipeBase
    __vt__8WipeBase:
        .4byte 0
        .4byte 0
        .4byte __dt__8WipeBaseFv
        .4byte getChildCount__5CNodeFv
        .4byte update__8WipeBaseFv
        .4byte draw__8WipeBaseFv
        .4byte isWhite__8WipeBaseFv
        .4byte isBlack__8WipeBaseFv
        .4byte on_start__8WipeBaseFv
        .4byte do_draw__8WipeBaseFf
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_805161C0
    lbl_805161C0:
        .skip 0x4
    .global lbl_805161C4
    lbl_805161C4:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805205E8
    lbl_805205E8:
        .4byte 0x00000000
    .global lbl_805205EC
    lbl_805205EC:
        .float 1.0
    .global lbl_805205F0
    lbl_805205F0:
        .float 0.5
    .global lbl_805205F4
    lbl_805205F4:
        .4byte 0x3E4CCCCD
    .global lbl_805205F8
    lbl_805205F8:
        .4byte 0x3F4CCCCD
    .global lbl_805205FC
    lbl_805205FC:
        .4byte 0x437F0000
    .global lbl_80520600
    lbl_80520600:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_80520608
    lbl_80520608:
        .4byte 0x3FA00000
    .global lbl_8052060C
    lbl_8052060C:
        .float 0.1
*/

/*
 * --INFO--
 * Address:	8042BD0C
 * Size:	00005C
 */
WipeBase::WipeBase()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__5CNodeFv
	lis      r3, __vt__8WipeBase@ha
	lfs      f1, lbl_805205E8@sda21(r2)
	addi     r0, r3, __vt__8WipeBase@l
	lfs      f0, lbl_805205EC@sda21(r2)
	stw      r0, 0(r31)
	li       r4, 0
	li       r0, 1
	mr       r3, r31
	stfs     f1, 0x18(r31)
	stfs     f0, 0x1c(r31)
	stb      r4, 0x20(r31)
	stb      r0, 0x21(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042BD68
 * Size:	000040
 */
void WipeBase::start(float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_805205E8@sda21(r2)
	stw      r0, 0x14(r1)
	li       r0, 1
	stfs     f0, 0x18(r3)
	stfs     f1, 0x1c(r3)
	stb      r0, 0x20(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042BDA8
 * Size:	000004
 */
void WipeBase::on_start() { }

/*
 * --INFO--
 * Address:	8042BDAC
 * Size:	000078
 */
void WipeBase::update()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x20(r31)
	cmplwi   r0, 0
	beq      lbl_8042BE10
	lwz      r3, sys@sda21(r13)
	lfs      f0, 0x1c(r31)
	lfs      f1, 0x54(r3)
	lfs      f2, 0x18(r31)
	fdivs    f1, f1, f0
	lfs      f0, lbl_805205EC@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0x18(r31)
	lfs      f1, 0x18(r31)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8042BE10
	stfs     f0, 0x18(r31)

lbl_8042BE10:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042BE24
 * Size:	000060
 */
void WipeBase::draw()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lbz      r0, 0x20(r3)
	cmplwi   r0, 0
	beq      lbl_8042BE70
	lwz      r12, 0(r3)
	lfs      f1, 0x18(r31)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lfs      f1, lbl_805205EC@sda21(r2)
	lfs      f0, 0x18(r31)
	fcmpu    cr0, f1, f0
	bne      lbl_8042BE70
	li       r0, 0
	stb      r0, 0x20(r31)

lbl_8042BE70:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042BE84
 * Size:	000004
 */
void WipeBase::do_draw(float) { }

/*
 * --INFO--
 * Address:	8042BE88
 * Size:	000018
 */
void WipeInFader::isWhite()
{
	/*
	lfs      f1, 0x18(r3)
	lfs      f0, lbl_805205F0@sda21(r2)
	fcmpo    cr0, f1, f0
	mfcr     r0
	rlwinm   r3, r0, 2, 0x1f, 0x1f
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042BEA0
 * Size:	000018
 */
void WipeInFader::isBlack()
{
	/*
	lfs      f1, 0x18(r3)
	lfs      f0, lbl_805205F0@sda21(r2)
	fcmpo    cr0, f1, f0
	mfcr     r0
	srwi     r3, r0, 0x1f
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042BEB8
 * Size:	000078
 */
WipeInFader::WipeInFader()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__5CNodeFv
	lis      r4, __vt__8WipeBase@ha
	lis      r3, __vt__11WipeInFader@ha
	addi     r0, r4, __vt__8WipeBase@l
	lfs      f1, lbl_805205E8@sda21(r2)
	stw      r0, 0(r31)
	li       r5, 0
	lfs      f0, lbl_805205EC@sda21(r2)
	li       r4, 1
	stfs     f1, 0x18(r31)
	addi     r0, r3, __vt__11WipeInFader@l
	mr       r3, r31
	stfs     f0, 0x1c(r31)
	stb      r5, 0x20(r31)
	stb      r4, 0x21(r31)
	stw      r0, 0(r31)
	stb      r5, 0x24(r31)
	stb      r5, 0x25(r31)
	stb      r5, 0x26(r31)
	stb      r5, 0x27(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042BF30
 * Size:	000144
 */
void WipeInFader::do_draw(float)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	lwz      r4, sys@sda21(r13)
	mr       r30, r3
	fmr      f31, f1
	lwz      r31, 0x24(r4)
	addi     r3, r31, 0xbc
	lwz      r12, 0xbc(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_805205F4@sda21(r2)
	addi     r31, r31, 0xbc
	fcmpo    cr0, f31, f0
	bge      lbl_8042BF88
	lfs      f1, lbl_805205E8@sda21(r2)
	b        lbl_8042BF94

lbl_8042BF88:
	fsubs    f1, f31, f0
	lfs      f0, lbl_805205F8@sda21(r2)
	fdivs    f1, f1, f0

lbl_8042BF94:
	lfs      f0, lbl_805205FC@sda21(r2)
	mr       r3, r31
	lbz      r0, 0x26(r30)
	addi     r4, r1, 8
	fmuls    f0, f0, f1
	lbz      r6, 0x24(r30)
	lbz      r7, 0x25(r30)
	addi     r5, r1, 0xc
	stb      r6, 0x18(r1)
	addi     r6, r1, 0x10
	fctiwz   f0, f0
	stb      r7, 0x19(r1)
	addi     r7, r1, 0x14
	stb      r0, 0x1a(r1)
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	subfic   r0, r0, 0xff
	stb      r0, 0x1b(r1)
	lwz      r0, 0x18(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0x10(r1)
	stw      r0, 0xc(r1)
	stw      r0, 8(r1)
	bl
setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
	bl       getRenderModeObj__6SystemFv
	lhz      r30, 6(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r4, 4(r3)
	lis      r0, 0x4330
	lfs      f3, lbl_805205E8@sda21(r2)
	mr       r3, r31
	stw      r4, 0x3c(r1)
	addi     r4, r1, 0x1c
	lfd      f2, lbl_80520600@sda21(r2)
	stw      r0, 0x38(r1)
	lfd      f0, 0x38(r1)
	stw      r30, 0x44(r1)
	fsubs    f1, f0, f2
	stw      r0, 0x40(r1)
	lfd      f0, 0x40(r1)
	fadds    f1, f3, f1
	stfs     f3, 0x1c(r1)
	fsubs    f0, f0, f2
	stfs     f3, 0x20(r1)
	fadds    f0, f3, f0
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	bl       "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"
	psq_l    f31, 88(r1), 0, qr0
	lwz      r0, 0x64(r1)
	lfd      f31, 0x50(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042C074
 * Size:	000078
 */
WipeOutFader::WipeOutFader()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__5CNodeFv
	lis      r4, __vt__8WipeBase@ha
	lis      r3, __vt__12WipeOutFader@ha
	addi     r0, r4, __vt__8WipeBase@l
	lfs      f1, lbl_805205E8@sda21(r2)
	stw      r0, 0(r31)
	li       r5, 0
	lfs      f0, lbl_805205EC@sda21(r2)
	li       r4, 1
	stfs     f1, 0x18(r31)
	addi     r0, r3, __vt__12WipeOutFader@l
	mr       r3, r31
	stfs     f0, 0x1c(r31)
	stb      r5, 0x20(r31)
	stb      r4, 0x21(r31)
	stw      r0, 0(r31)
	stb      r5, 0x24(r31)
	stb      r5, 0x25(r31)
	stb      r5, 0x26(r31)
	stb      r5, 0x27(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042C0EC
 * Size:	000004
 */
void WipeOutFader::on_start() { }

/*
 * --INFO--
 * Address:	8042C0F0
 * Size:	000018
 */
void WipeOutFader::isWhite()
{
	/*
	lfs      f1, 0x18(r3)
	lfs      f0, lbl_805205F0@sda21(r2)
	fcmpo    cr0, f1, f0
	mfcr     r0
	srwi     r3, r0, 0x1f
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042C108
 * Size:	000018
 */
void WipeOutFader::isBlack()
{
	/*
	lfs      f1, 0x18(r3)
	lfs      f0, lbl_805205F0@sda21(r2)
	fcmpo    cr0, f1, f0
	mfcr     r0
	rlwinm   r3, r0, 2, 0x1f, 0x1f
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042C120
 * Size:	000138
 */
void WipeOutFader::do_draw(float)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	lfs      f0, lbl_805205F8@sda21(r2)
	mr       r30, r3
	fcmpo    cr0, f1, f0
	ble      lbl_8042C154
	lfs      f31, lbl_805205EC@sda21(r2)
	b        lbl_8042C15C

lbl_8042C154:
	lfs      f0, lbl_80520608@sda21(r2)
	fmuls    f31, f0, f1

lbl_8042C15C:
	lwz      r3, sys@sda21(r13)
	lwz      r31, 0x24(r3)
	addi     r3, r31, 0xbc
	lwz      r12, 0xbc(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_805205FC@sda21(r2)
	addi     r31, r31, 0xbc
	lbz      r0, 0x26(r30)
	mr       r3, r31
	fmuls    f0, f0, f31
	lbz      r5, 0x24(r30)
	lbz      r6, 0x25(r30)
	addi     r4, r1, 8
	stb      r5, 0x18(r1)
	addi     r5, r1, 0xc
	fctiwz   f0, f0
	stb      r6, 0x19(r1)
	addi     r6, r1, 0x10
	addi     r7, r1, 0x14
	stb      r0, 0x1a(r1)
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	stb      r0, 0x1b(r1)
	lwz      r0, 0x18(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0x10(r1)
	stw      r0, 0xc(r1)
	stw      r0, 8(r1)
	bl
setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
	bl       getRenderModeObj__6SystemFv
	lhz      r30, 6(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r4, 4(r3)
	lis      r0, 0x4330
	lfs      f3, lbl_805205E8@sda21(r2)
	mr       r3, r31
	stw      r4, 0x3c(r1)
	addi     r4, r1, 0x1c
	lfd      f2, lbl_80520600@sda21(r2)
	stw      r0, 0x38(r1)
	lfd      f0, 0x38(r1)
	stw      r30, 0x44(r1)
	fsubs    f1, f0, f2
	stw      r0, 0x40(r1)
	lfd      f0, 0x40(r1)
	fadds    f1, f3, f1
	stfs     f3, 0x1c(r1)
	fsubs    f0, f0, f2
	stfs     f3, 0x20(r1)
	fadds    f0, f3, f0
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	bl       "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"
	psq_l    f31, 88(r1), 0, qr0
	lwz      r0, 0x64(r1)
	lfd      f31, 0x50(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042C258
 * Size:	000050
 */
void WipeOutInFader::on_start()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f1, lbl_805205E8@sda21(r2)
	mr       r4, r3
	stw      r0, 0x14(r1)
	li       r0, 1
	lfs      f0, lbl_8052060C@sda21(r2)
	stb      r0, 0x74(r3)
	addi     r3, r4, 0x24
	stfs     f1, 0x3c(r4)
	stfs     f0, 0x40(r4)
	stb      r0, 0x44(r4)
	lwz      r12, 0x24(r4)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042C2A8
 * Size:	00003C
 */
void WipeOutInFader::isWhite()
{
	/*
	lbz      r0, 0x74(r3)
	cmplwi   r0, 0
	beq      lbl_8042C2CC
	lfs      f1, 0x18(r3)
	lfs      f0, lbl_805205F0@sda21(r2)
	fcmpo    cr0, f1, f0
	mfcr     r0
	srwi     r3, r0, 0x1f
	blr

lbl_8042C2CC:
	lfs      f1, 0x18(r3)
	lfs      f0, lbl_805205F0@sda21(r2)
	fcmpo    cr0, f1, f0
	mfcr     r0
	rlwinm   r3, r0, 2, 0x1f, 0x1f
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042C2E4
 * Size:	000038
 */
void WipeOutInFader::isBlack()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cntlzw   r0, r0
	srwi     r3, r0, 5
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042C31C
 * Size:	0000A8
 */
void WipeOutInFader::do_draw(float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lbz      r0, 0x74(r3)
	cmplwi   r0, 0
	beq      lbl_8042C39C
	lbz      r0, 0x44(r31)
	cmplwi   r0, 0
	bne      lbl_8042C384
	li       r0, 0
	lfs      f1, lbl_8052060C@sda21(r2)
	stb      r0, 0x74(r31)
	li       r0, 1
	lfs      f0, lbl_805205E8@sda21(r2)
	addi     r3, r31, 0x4c
	lfs      f2, 0x1c(r31)
	fsubs    f1, f2, f1
	stfs     f0, 0x64(r31)
	stfs     f1, 0x68(r31)
	stb      r0, 0x6c(r31)
	lwz      r12, 0x4c(r31)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl

lbl_8042C384:
	addi     r3, r31, 0x24
	lwz      r12, 0x24(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	b        lbl_8042C3B0

lbl_8042C39C:
	addi     r3, r31, 0x4c
	lwz      r12, 0x4c(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_8042C3B0:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042C3C4
 * Size:	00007C
 */
BlackFader::BlackFader()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__5CNodeFv
	lis      r4, __vt__8WipeBase@ha
	lis      r3, __vt__10BlackFader@ha
	addi     r0, r4, __vt__8WipeBase@l
	lfs      f1, lbl_805205E8@sda21(r2)
	stw      r0, 0(r31)
	li       r5, 0
	lfs      f0, lbl_805205EC@sda21(r2)
	li       r4, 1
	stfs     f1, 0x18(r31)
	addi     r0, r3, __vt__10BlackFader@l
	mr       r3, r31
	stfs     f0, 0x1c(r31)
	stb      r5, 0x20(r31)
	stb      r4, 0x21(r31)
	stw      r0, 0(r31)
	stb      r5, 0x24(r31)
	stb      r5, 0x25(r31)
	stb      r5, 0x26(r31)
	stb      r5, 0x27(r31)
	stb      r4, 0x28(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042C440
 * Size:	000010
 */
void BlackFader::isWhite()
{
	/*
	lbz      r0, 0x28(r3)
	cntlzw   r0, r0
	srwi     r3, r0, 5
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042C450
 * Size:	000008
 */
void BlackFader::isBlack()
{
	/*
	lbz      r3, 0x28(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042C458
 * Size:	000120
 */
void BlackFader::do_draw(float)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	mr       r30, r3
	lwz      r4, sys@sda21(r13)
	lwz      r31, 0x24(r4)
	lwz      r12, 0xbc(r31)
	addi     r3, r31, 0xbc
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x28(r30)
	li       r3, 0xff
	lbz      r4, 0x24(r30)
	addi     r31, r31, 0xbc
	lbz      r5, 0x25(r30)
	cmplwi   r0, 0
	lbz      r6, 0x26(r30)
	stb      r4, 0x1c(r1)
	stb      r5, 0x1d(r1)
	stb      r6, 0x1e(r1)
	stb      r3, 0x1f(r1)
	bne      lbl_8042C4D0
	li       r0, 0
	stb      r4, 0x1c(r1)
	stb      r5, 0x1d(r1)
	stb      r6, 0x1e(r1)
	stb      r0, 0x1f(r1)

lbl_8042C4D0:
	lwz      r0, 0x1c(r1)
	mr       r3, r31
	addi     r4, r1, 0xc
	addi     r5, r1, 0x10
	stw      r0, 8(r1)
	addi     r6, r1, 0x14
	addi     r7, r1, 0x18
	stw      r0, 0x18(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0x10(r1)
	stw      r0, 0xc(r1)
	bl
setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
	bl       getRenderModeObj__6SystemFv
	lhz      r30, 6(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r4, 4(r3)
	lis      r0, 0x4330
	lfs      f3, lbl_805205E8@sda21(r2)
	mr       r3, r31
	stw      r4, 0x34(r1)
	addi     r4, r1, 0x20
	lfd      f2, lbl_80520600@sda21(r2)
	stw      r0, 0x30(r1)
	lfd      f0, 0x30(r1)
	stw      r30, 0x3c(r1)
	fsubs    f1, f0, f2
	stw      r0, 0x38(r1)
	lfd      f0, 0x38(r1)
	fadds    f1, f3, f1
	stfs     f3, 0x20(r1)
	fsubs    f0, f0, f2
	stfs     f3, 0x24(r1)
	fadds    f0, f3, f0
	stfs     f1, 0x28(r1)
	stfs     f0, 0x2c(r1)
	bl       "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000164
 */
BallFader::BallFader(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
BallFader::Ball::Ball(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void BallFader::on_start()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void BallFader::do_draw(float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void BallFader::computeForces()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000180
 */
void BallFader::emitBalls(float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00017C
 */
void drawBall(Graphics&, Vector2<float>, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000334
 */
void drawBall2(Graphics&, Vector2<float>, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void BallFader::drawAll()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A8
 */
void BallFader::simulate()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000324
 */
void BallFader::resolveCollision()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void BallFader::birth()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
BallFader::~BallFader()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042C578
 * Size:	000008
 */
u32 WipeBase::isWhite() { return 0x0; }

/*
 * --INFO--
 * Address:	8042C580
 * Size:	000008
 */
u32 WipeBase::isBlack() { return 0x0; }

/*
 * --INFO--
 * Address:	8042C588
 * Size:	000070
 */
BlackFader::~BlackFader()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8042C5DC
	lis      r4, __vt__10BlackFader@ha
	addi     r0, r4, __vt__10BlackFader@l
	stw      r0, 0(r30)
	beq      lbl_8042C5CC
	lis      r5, __vt__8WipeBase@ha
	li       r4, 0
	addi     r0, r5, __vt__8WipeBase@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_8042C5CC:
	extsh.   r0, r31
	ble      lbl_8042C5DC
	mr       r3, r30
	bl       __dl__FPv

lbl_8042C5DC:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042C5F8
 * Size:	0000E0
 */
WipeOutInFader::~WipeOutInFader()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	stw      r30, 8(r1)
	mr       r30, r4
	beq      lbl_8042C6BC
	lis      r3, __vt__14WipeOutInFader@ha
	addic.   r0, r31, 0x4c
	addi     r0, r3, __vt__14WipeOutInFader@l
	stw      r0, 0(r31)
	beq      lbl_8042C658
	lis      r3, __vt__11WipeInFader@ha
	addic.   r0, r31, 0x4c
	addi     r0, r3, __vt__11WipeInFader@l
	stw      r0, 0x4c(r31)
	beq      lbl_8042C658
	lis      r4, __vt__8WipeBase@ha
	addi     r3, r31, 0x4c
	addi     r0, r4, __vt__8WipeBase@l
	li       r4, 0
	stw      r0, 0x4c(r31)
	bl       __dt__5CNodeFv

lbl_8042C658:
	addic.   r0, r31, 0x24
	beq      lbl_8042C68C
	lis      r3, __vt__12WipeOutFader@ha
	addic.   r0, r31, 0x24
	addi     r0, r3, __vt__12WipeOutFader@l
	stw      r0, 0x24(r31)
	beq      lbl_8042C68C
	lis      r4, __vt__8WipeBase@ha
	addi     r3, r31, 0x24
	addi     r0, r4, __vt__8WipeBase@l
	li       r4, 0
	stw      r0, 0x24(r31)
	bl       __dt__5CNodeFv

lbl_8042C68C:
	cmplwi   r31, 0
	beq      lbl_8042C6AC
	lis      r4, __vt__8WipeBase@ha
	mr       r3, r31
	addi     r0, r4, __vt__8WipeBase@l
	li       r4, 0
	stw      r0, 0(r31)
	bl       __dt__5CNodeFv

lbl_8042C6AC:
	extsh.   r0, r30
	ble      lbl_8042C6BC
	mr       r3, r31
	bl       __dl__FPv

lbl_8042C6BC:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042C6D8
 * Size:	000028
 */
void __sinit_wipe_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804EBED8@ha
	stw      r0, lbl_805161C0@sda21(r13)
	stfsu    f0, lbl_804EBED8@l(r3)
	stfs     f0, lbl_805161C4@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
