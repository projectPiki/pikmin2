#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8049ABE8
    lbl_8049ABE8:
        .asciz "messageRendering.cpp"
        .skip 3
    .global lbl_8049AC00
    lbl_8049AC00:
        .asciz "P2Assert"
        .skip 3
        .asciz "messageRendering.h"
        .skip 1

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global "cBtnIconColor__Q25P2JME30@unnamed@messageRendering_cpp@"
    "cBtnIconColor__Q25P2JME30@unnamed@messageRendering_cpp@":
        .4byte 0xFFFFFFFF
        .4byte 0x00A60000
        .4byte 0xFFFFFFFF
        .4byte 0xFF000000
        .4byte 0x000000FF
        .4byte 0xFFFF0000
        .4byte 0x000000FF
        .4byte 0xC8C8C800
        .4byte 0x000000FF
        .4byte 0xC8C8C800
        .4byte 0x0000FFFF
        .4byte 0xFFFFFF00
        .4byte 0x000000FF
        .4byte 0xC8C8C800
        .4byte 0x000000FF
        .4byte 0xC8C8C800
        .4byte 0xE1E1E1FF
        .4byte 0x888888FF
        .4byte 0xE1E1E1FF
        .4byte 0x888888FF
        .4byte 0xE1E1E1FF
        .4byte 0x888888FF
    .global lbl_804ECA90
    lbl_804ECA90:
        .4byte lbl_8043A50C
        .4byte lbl_8043A518
        .4byte lbl_8043A544
        .4byte lbl_8043A830
        .4byte lbl_8043AB3C
        .4byte lbl_8043AB48
        .4byte lbl_8043AB74
        .4byte lbl_8043AB80
    .global __vt__Q25P2JME19TRenderingProcessor
    __vt__Q25P2JME19TRenderingProcessor:
        .4byte 0
        .4byte 0
        .4byte __dt__Q25P2JME19TRenderingProcessorFv
        .4byte do_reset__Q28JMessage10TProcessorFv
        .4byte do_character__Q25P2JME19TRenderingProcessorFi
        .4byte do_tag__Q25P2JME19TRenderingProcessorFUlPCvUl
        .4byte do_systemTagCode__Q25P2JME19TRenderingProcessorFUsPCvUl
        .4byte do_select_begin__Q25P2JME19TRenderingProcessorFUl
        .4byte do_select_end__Q25P2JME19TRenderingProcessorFv
        .4byte do_select_separate__Q25P2JME19TRenderingProcessorFv
        .4byte do_reset___Q28JMessage19TRenderingProcessorFPCc
        .4byte do_setBegin_isReady___Q28JMessage10TProcessorCFv
        .4byte do_begin___Q28JMessage19TRenderingProcessorFPCvPCc
        .4byte do_end___Q28JMessage19TRenderingProcessorFv
        .4byte do_tag___Q28JMessage19TRenderingProcessorFUlPCvUl
        .4byte do_systemTagCode___Q28JMessage19TRenderingProcessorFUsPCvUl
        .4byte do_begin__Q25P2JME19TRenderingProcessorFPCvPCc
        .4byte do_end__Q28JMessage19TRenderingProcessorFv
        .4byte tagColor__Q25P2JME19TRenderingProcessorFPCvUl
        .4byte tagSize__Q25P2JME19TRenderingProcessorFPCvUl
        .4byte tagRuby__Q25P2JME19TRenderingProcessorFPCvUl
        .4byte tagFont__Q25P2JME19TRenderingProcessorFPCvUl
        .4byte tagImage__Q25P2JME19TRenderingProcessorFUsPCvUl
        .4byte tagColorEX__Q25P2JME19TRenderingProcessorFUsPCvUl
        .4byte tagControl__Q25P2JME19TRenderingProcessorFUsPCvUl
        .4byte tagPosition__Q25P2JME19TRenderingProcessorFUsPCvUl
        .4byte update__Q25P2JME19TRenderingProcessorFv
        .4byte reset__Q25P2JME19TRenderingProcessorFv
        .4byte newParagraph__Q25P2JME19TRenderingProcessorFv
        .4byte doDrawImage__Q25P2JME19TRenderingProcessorFP10JUTTextureffff
        .4byte doDrawRuby__Q25P2JME19TRenderingProcessorFffffib
        .4byte doDrawLetter__Q25P2JME19TRenderingProcessorFffffib
        .4byte doTagControlAbtnWait__Q25P2JME19TRenderingProcessorFv
    .global __vt__Q25P2JME23TRenderingProcessorBase
    __vt__Q25P2JME23TRenderingProcessorBase:
        .4byte 0
        .4byte 0
        .4byte __dt__Q25P2JME23TRenderingProcessorBaseFv
        .4byte do_reset__Q28JMessage10TProcessorFv
        .4byte do_character__Q25P2JME23TRenderingProcessorBaseFi
        .4byte do_tag__Q25P2JME23TRenderingProcessorBaseFUlPCvUl
        .4byte do_systemTagCode__Q28JMessage10TProcessorFUsPCvUl
        .4byte do_select_begin__Q28JMessage10TProcessorFUl
        .4byte do_select_end__Q28JMessage10TProcessorFv
        .4byte do_select_separate__Q28JMessage10TProcessorFv
        .4byte do_reset___Q28JMessage19TRenderingProcessorFPCc
        .4byte do_setBegin_isReady___Q28JMessage10TProcessorCFv
        .4byte do_begin___Q28JMessage19TRenderingProcessorFPCvPCc
        .4byte do_end___Q28JMessage19TRenderingProcessorFv
        .4byte do_tag___Q28JMessage19TRenderingProcessorFUlPCvUl
        .4byte do_systemTagCode___Q28JMessage19TRenderingProcessorFUsPCvUl
        .4byte do_begin__Q28JMessage19TRenderingProcessorFPCvPCc
        .4byte do_end__Q28JMessage19TRenderingProcessorFv
        .4byte tagColor__Q25P2JME23TRenderingProcessorBaseFPCvUl
        .4byte tagSize__Q25P2JME23TRenderingProcessorBaseFPCvUl
        .4byte tagRuby__Q25P2JME23TRenderingProcessorBaseFPCvUl
        .4byte tagFont__Q25P2JME23TRenderingProcessorBaseFPCvUl
        .4byte tagImage__Q25P2JME23TRenderingProcessorBaseFUsPCvUl
        .4byte tagColorEX__Q25P2JME23TRenderingProcessorBaseFUsPCvUl
        .4byte tagControl__Q25P2JME23TRenderingProcessorBaseFUsPCvUl
        .4byte tagPosition__Q25P2JME23TRenderingProcessorBaseFUsPCvUl
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global cPageInfoBufferNum__Q25P2JME19TRenderingProcessor
    cPageInfoBufferNum__Q25P2JME19TRenderingProcessor:
        .4byte 10
    .global lbl_805208BC
    lbl_805208BC:
        .float 100.0
    .global lbl_805208C0
    lbl_805208C0:
        .float 0.0
    .global lbl_805208C4
    lbl_805208C4:
        .float 1.0
    .global lbl_805208C8
    lbl_805208C8:
        .float 42.0
    .global lbl_805208CC
    lbl_805208CC:
        .float 0.5
    .global lbl_805208D0
    lbl_805208D0:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_805208D8
    lbl_805208D8:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_805208E0
    lbl_805208E0:
        .float 32.0
    .global lbl_805208E4
    lbl_805208E4:
        .float 255.0
*/

namespace P2JME {

/*
 * --INFO--
 * Address:	804391F0
 * Size:	00003C
 */
TRenderingProcessorBase::TRenderingProcessorBase(JMessage::TReference const*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q28JMessage19TRenderingProcessorFPCQ28JMessage10TReference
	lis      r4, __vt__Q25P2JME23TRenderingProcessorBase@ha
	mr       r3, r31
	addi     r0, r4, __vt__Q25P2JME23TRenderingProcessorBase@l
	stw      r0, 0(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043922C
 * Size:	000174
 */
void TRenderingProcessorBase::do_tag(unsigned long, void const*, unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	rlwinm   r7, r4, 0x10, 0x18, 0x1f
	clrlwi   r4, r4, 0x10
	stw      r0, 0x14(r1)
	cmplwi   r7, 0xc0
	li       r0, 0
	bge      lbl_804392DC
	cmpwi    r7, 2
	beq      lbl_804392A4
	bge      lbl_80439268
	cmpwi    r7, 0
	beq      lbl_80439274
	bge      lbl_8043928C
	b        lbl_804392D4

lbl_80439268:
	cmpwi    r7, 4
	bge      lbl_804392D4
	b        lbl_804392BC

lbl_80439274:
	lwz      r12, 0(r3)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	b        lbl_8043938C

lbl_8043928C:
	lwz      r12, 0(r3)
	lwz      r12, 0x5c(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	b        lbl_8043938C

lbl_804392A4:
	lwz      r12, 0(r3)
	lwz      r12, 0x60(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	b        lbl_8043938C

lbl_804392BC:
	lwz      r12, 0(r3)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	b        lbl_8043938C

lbl_804392D4:
	li       r0, 1
	b        lbl_8043938C

lbl_804392DC:
	cmplwi   r7, 0xff
	bne      lbl_8043938C
	cmpwi    r4, 2
	beq      lbl_80439350
	bge      lbl_80439300
	cmpwi    r4, 0
	beq      lbl_80439310
	bge      lbl_80439330
	b        lbl_8043938C

lbl_80439300:
	cmpwi    r4, 4
	beq      lbl_8043938C
	bge      lbl_8043938C
	b        lbl_80439370

lbl_80439310:
	lwz      r12, 0(r3)
	mr       r4, r5
	mr       r5, r6
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	b        lbl_8043938C

lbl_80439330:
	lwz      r12, 0(r3)
	mr       r4, r5
	mr       r5, r6
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	b        lbl_8043938C

lbl_80439350:
	lwz      r12, 0(r3)
	mr       r4, r5
	mr       r5, r6
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	b        lbl_8043938C

lbl_80439370:
	lwz      r12, 0(r3)
	mr       r4, r5
	mr       r5, r6
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	mr       r0, r3

lbl_8043938C:
	mr       r3, r0
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	804393A0
 * Size:	000008
 */
u32 TRenderingProcessorBase::tagFont(void const*, unsigned long) { return 0x1; }

/*
 * --INFO--
 * Address:	804393A8
 * Size:	000008
 */
u32 TRenderingProcessorBase::tagRuby(void const*, unsigned long) { return 0x1; }

/*
 * --INFO--
 * Address:	804393B0
 * Size:	000008
 */
u32 TRenderingProcessorBase::tagSize(void const*, unsigned long) { return 0x1; }

/*
 * --INFO--
 * Address:	804393B8
 * Size:	000008
 */
u32 TRenderingProcessorBase::tagColor(void const*, unsigned long) { return 0x1; }

/*
 * --INFO--
 * Address:	804393C0
 * Size:	000008
 */
void TRenderingProcessorBase::tagPosition(unsigned short, void const*, unsigned long) { return 0x1; }

/*
 * --INFO--
 * Address:	804393C8
 * Size:	000008
 */
void TRenderingProcessorBase::tagControl(unsigned short, void const*, unsigned long) { return 0x1; }

/*
 * --INFO--
 * Address:	804393D0
 * Size:	000008
 */
void TRenderingProcessorBase::tagColorEX(unsigned short, void const*, unsigned long) { return 0x1; }

/*
 * --INFO--
 * Address:	804393D8
 * Size:	000008
 */
void TRenderingProcessorBase::tagImage(unsigned short, void const*, unsigned long) { return 0x1; }

/*
 * --INFO--
 * Address:	804393E0
 * Size:	000218
 */
TRenderingProcessor::TRenderingProcessor(JMessage::TReference const*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	mr       r0, r31
	stw      r30, 8(r1)
	mr       r30, r0
	bl       __ct__Q28JMessage19TRenderingProcessorFPCQ28JMessage10TReference
	lis      r4, __vt__Q25P2JME23TRenderingProcessorBase@ha
	lis      r3, __vt__Q25P2JME19TRenderingProcessor@ha
	addi     r0, r4, __vt__Q25P2JME23TRenderingProcessorBase@l
	lfs      f0, lbl_805208BC@sda21(r2)
	stw      r0, 0(r30)
	addi     r0, r3, __vt__Q25P2JME19TRenderingProcessor@l
	li       r4, 0
	lfs      f3, lbl_805208C0@sda21(r2)
	stw      r0, 0(r31)
	li       r3, -1
	li       r0, 0xff
	lfs      f2, lbl_805208C4@sda21(r2)
	stfs     f0, 0x38(r31)
	stfs     f0, 0x3c(r31)
	stw      r4, 0x44(r31)
	stw      r4, 0x48(r31)
	stw      r4, 0x4c(r31)
	stw      r4, 0x50(r31)
	stfs     f3, 0x54(r31)
	stfs     f3, 0x58(r31)
	stw      r4, 0x5c(r31)
	stw      r3, 0x60(r31)
	stb      r0, 0x64(r31)
	stb      r0, 0x65(r31)
	stb      r0, 0x66(r31)
	stb      r0, 0x67(r31)
	stb      r0, 0x68(r31)
	stb      r0, 0x69(r31)
	stb      r0, 0x6a(r31)
	stb      r0, 0x6b(r31)
	stb      r0, 0x6c(r31)
	stb      r0, 0x6d(r31)
	stb      r0, 0x6e(r31)
	stb      r0, 0x6f(r31)
	stb      r0, 0x70(r31)
	stb      r0, 0x71(r31)
	stb      r0, 0x72(r31)
	stb      r0, 0x73(r31)
	stb      r0, 0x74(r31)
	stb      r0, 0x75(r31)
	stb      r0, 0x76(r31)
	stb      r0, 0x77(r31)
	stfs     f2, 0x78(r31)
	stfs     f2, 0x7c(r31)
	stfs     f2, 0x80(r31)
	stfs     f2, 0x84(r31)
	stfs     f2, 0x88(r31)
	stb      r4, 0x8c(r31)
	stb      r4, 0x8d(r31)
	stb      r4, 0x8e(r31)
	stb      r4, 0x8f(r31)
	stfs     f3, 0x90(r31)
	stfs     f3, 0x94(r31)
	stfs     f3, 0x98(r31)
	stfs     f3, 0x9c(r31)
	stb      r4, 0xa4(r31)
	stb      r4, 0xa5(r31)
	stb      r4, 0xa6(r31)
	stfs     f3, 0xbc(r31)
	li       r3, 0x100
	lfs      f1, lbl_805208C8@sda21(r2)
	lfs      f0, lbl_805208CC@sda21(r2)
	stfs     f1, 0xc0(r31)
	stfs     f3, 0xc4(r31)
	stfs     f1, 0xc8(r31)
	stb      r4, 0xcc(r31)
	stb      r4, 0xcd(r31)
	stb      r4, 0xce(r31)
	stb      r4, 0xcf(r31)
	stb      r0, 0xd0(r31)
	stb      r0, 0xd1(r31)
	stb      r0, 0xd2(r31)
	stb      r0, 0xd3(r31)
	stb      r0, 0xd4(r31)
	stb      r0, 0xd5(r31)
	stb      r0, 0xd6(r31)
	stb      r0, 0xd7(r31)
	stb      r0, 0xd8(r31)
	stb      r0, 0xd9(r31)
	stb      r0, 0xda(r31)
	stb      r0, 0xdb(r31)
	stfs     f2, 0xe0(r31)
	stfs     f2, 0xe4(r31)
	stfs     f2, 0xe8(r31)
	stfs     f2, 0xec(r31)
	stb      r4, 0xf2(r31)
	stfs     f0, 0x10c(r31)
	stb      r4, 0x8c(r31)
	stb      r4, 0x8d(r31)
	stb      r4, 0x8e(r31)
	stb      r4, 0x8f(r31)
	lwz      r0, 0x8c(r31)
	rlwinm   r0, r0, 0, 0x1c, 0x18
	stw      r0, 0x8c(r31)
	lwz      r0, 0x8c(r31)
	ori      r0, r0, 0x10
	stw      r0, 0x8c(r31)
	lwz      r0, 0x8c(r31)
	rlwinm   r0, r0, 0, 0x18, 0x14
	stw      r0, 0x8c(r31)
	lwz      r0, 0x8c(r31)
	ori      r0, r0, 0x100
	stw      r0, 0x8c(r31)
	bl       __nwa__FUl
	stw      r3, 0xa8(r31)
	mr       r3, r31
	bl       resetLineWidth__Q25P2JME19TRenderingProcessorFv
	li       r3, 0x40
	bl       __nwa__FUl
	stw      r3, 0xac(r31)
	mr       r3, r31
	bl       resetOnePageLine__Q25P2JME19TRenderingProcessorFv
	lis      r4, sRubyDataBuffer__5P2JME@ha
	li       r3, 0x14
	addi     r0, r4, sRubyDataBuffer__5P2JME@l
	stw      r0, 0x100(r31)
	bl       __nwa__FUl
	stw      r3, 0xb0(r31)
	mr       r3, r31
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
 * Address:	804395F8
 * Size:	000060
 */
TRenderingProcessorBase::~TRenderingProcessorBase(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8043963C
	lis      r5, __vt__Q25P2JME23TRenderingProcessorBase@ha
	li       r4, 0
	addi     r0, r5, __vt__Q25P2JME23TRenderingProcessorBase@l
	stw      r0, 0(r30)
	bl       __dt__Q28JMessage19TRenderingProcessorFv
	extsh.   r0, r31
	ble      lbl_8043963C
	mr       r3, r30
	bl       __dl__FPv

lbl_8043963C:
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
 * Address:	........
 * Size:	00007C
 */
void TRenderingProcessor::setDrawLocateX(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000338
 */
void TRenderingProcessor::setDrawLocateY(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80439658
 * Size:	0000E8
 */
void TRenderingProcessor::do_begin(void const*, char const*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	li       r0, 0
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	lfs      f0, 0xe8(r3)
	stfs     f0, 0xe0(r3)
	lfs      f0, 0xec(r3)
	stfs     f0, 0xe4(r3)
	stb      r0, 0xf0(r3)
	stb      r0, 0xf1(r3)
	stw      r0, 0xb8(r3)
	stw      r0, 0x40(r3)
	bl       initRuby__Q25P2JME19TRenderingProcessorFv
	lbz      r3, 4(r31)
	lis      r0, 0x4330
	stw      r0, 0x10(r1)
	li       r0, 0
	extsb    r3, r3
	lfd      f1, lbl_805208D0@sda21(r2)
	xoris    r4, r3, 0x8000
	mr       r3, r30
	stw      r4, 0x14(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f1
	stfs     f0, 0xbc(r30)
	stfs     f0, 0xc4(r30)
	lfs      f0, 0xc0(r30)
	stfs     f0, 0xc8(r30)
	lwz      r4, 0x8c(r30)
	rlwinm   r4, r4, 0, 4, 2
	stw      r4, 0x8c(r30)
	stb      r0, 0xa6(r30)
	stb      r0, 0xa4(r30)
	stb      r0, 0xa5(r30)
	bl       setDrawLocate__Q25P2JME19TRenderingProcessorFv
	li       r0, 0
	addi     r4, r1, 0xc
	stb      r0, 0xdc(r30)
	addi     r5, r1, 8
	lwz      r0, 0xd0(r30)
	stw      r0, 8(r1)
	lwz      r0, 0xcc(r30)
	stw      r0, 0xc(r1)
	lwz      r3, 0x4c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80439740
 * Size:	0003B0
 */
void TRenderingProcessor::setDrawLocate(void)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stfd     f30, 0x40(r1)
	psq_st   f30, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	stw      r29, 0x34(r1)
	mr       r31, r3
	lwz      r3, 0x8c(r3)
	clrlwi.  r0, r3, 0x1f
	beq      lbl_80439784
	lfs      f0, 0x98(r31)
	stfs     f0, 0x90(r31)
	b        lbl_804397E4

lbl_80439784:
	rlwinm.  r0, r3, 0, 0x1a, 0x1a
	beq      lbl_804397B4
	lbz      r0, 0xa4(r31)
	lwz      r3, 0xa8(r31)
	slwi     r0, r0, 2
	lfs      f1, 0x38(r31)
	lfsx     f0, r3, r0
	lfs      f2, lbl_805208CC@sda21(r2)
	fsubs    f0, f1, f0
	fmuls    f0, f2, f0
	stfs     f0, 0x90(r31)
	b        lbl_804397E4

lbl_804397B4:
	rlwinm.  r0, r3, 0, 0x19, 0x19
	beq      lbl_804397DC
	lbz      r0, 0xa4(r31)
	lwz      r3, 0xa8(r31)
	slwi     r0, r0, 2
	lfs      f1, 0x38(r31)
	lfsx     f0, r3, r0
	fsubs    f0, f1, f0
	stfs     f0, 0x90(r31)
	b        lbl_804397E4

lbl_804397DC:
	lfs      f0, 0x98(r31)
	stfs     f0, 0x90(r31)

lbl_804397E4:
	lwz      r3, 0x8c(r31)
	clrlwi.  r0, r3, 0x1f
	beq      lbl_80439870
	lwz      r3, 0x4c(r31)
	lbz      r30, 0xa5(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0xc(r1)
	lbz      r0, 0xa6(r31)
	stw      r4, 8(r1)
	lfd      f1, lbl_805208D0@sda21(r2)
	lfd      f0, 8(r1)
	stw      r0, 0x14(r1)
	fsubs    f4, f0, f1
	lfs      f2, 0xec(r31)
	stw      r4, 0x10(r1)
	lfs      f1, 0x9c(r31)
	lfd      f3, lbl_805208D8@sda21(r2)
	lfd      f0, 0x10(r1)
	fmadds   f5, f2, f4, f1
	stw      r30, 0x1c(r1)
	fsubs    f2, f0, f3
	lfs      f4, 0x3c(r31)
	stw      r4, 0x18(r1)
	lfs      f1, 0xc8(r31)
	lfd      f0, 0x18(r1)
	fmadds   f2, f4, f2, f5
	fsubs    f0, f0, f3
	fmadds   f0, f1, f0, f2
	stfs     f0, 0x94(r31)
	b        lbl_80439AC4

lbl_80439870:
	rlwinm.  r0, r3, 0, 0x16, 0x16
	beq      lbl_804399A0
	lbz      r29, 0xa6(r31)
	lwz      r3, 0xb0(r31)
	rlwinm   r0, r29, 1, 0x17, 0x1e
	lfs      f2, lbl_805208C0@sda21(r2)
	add      r3, r3, r0
	lbz      r5, 1(r3)
	fmr      f1, f2
	lbz      r3, 0(r3)
	addi     r0, r5, 1
	subf     r0, r3, r0
	slwi     r4, r3, 2
	mtctr    r0
	cmpw     r3, r5
	bgt      lbl_804398D0

lbl_804398B0:
	lwz      r3, 0xa8(r31)
	lfsx     f0, r3, r4
	fcmpo    cr0, f0, f1
	ble      lbl_804398C8
	lfs      f0, 0xc8(r31)
	fadds    f2, f2, f0

lbl_804398C8:
	addi     r4, r4, 4
	bdnz     lbl_804398B0

lbl_804398D0:
	lfs      f0, 0x3c(r31)
	lwz      r3, 0x4c(r31)
	fsubs    f0, f0, f2
	lfs      f1, lbl_805208CC@sda21(r2)
	lwz      r12, 0(r3)
	lbz      r30, 0xa5(r31)
	lwz      r12, 0x1c(r12)
	fmuls    f31, f1, f0
	mtctr    r12
	bctrl
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x1c(r1)
	lwz      r3, 0x4c(r31)
	stw      r0, 0x18(r1)
	lfd      f1, lbl_805208D0@sda21(r2)
	lfd      f0, 0x18(r1)
	lwz      r12, 0(r3)
	fsubs    f2, f0, f1
	lfs      f1, 0xec(r31)
	lfs      f0, 0x9c(r31)
	lwz      r12, 0x24(r12)
	fmadds   f30, f1, f2, f0
	mtctr    r12
	bctrl
	lis      r0, 0x4330
	xoris    r3, r3, 0x8000
	stw      r3, 0x14(r1)
	lfd      f2, lbl_805208D0@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f0, 0xec(r31)
	lfd      f1, 0x10(r1)
	lfs      f5, 0xc8(r31)
	fsubs    f2, f1, f2
	stw      r29, 0xc(r1)
	lfs      f1, lbl_805208CC@sda21(r2)
	stw      r0, 8(r1)
	fnmsubs  f3, f0, f2, f5
	lfd      f2, lbl_805208D8@sda21(r2)
	lfd      f0, 8(r1)
	stw      r30, 0x24(r1)
	fmadds   f4, f1, f3, f30
	lfs      f3, 0x3c(r31)
	stw      r0, 0x20(r1)
	fsubs    f1, f0, f2
	lfd      f0, 0x20(r1)
	fmadds   f1, f3, f1, f4
	fsubs    f0, f0, f2
	fmadds   f0, f5, f0, f31
	fadds    f0, f0, f1
	stfs     f0, 0x94(r31)
	b        lbl_80439AC4

lbl_804399A0:
	rlwinm.  r0, r3, 0, 0x15, 0x15
	beq      lbl_80439A48
	lwz      r3, 0x4c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0xa6(r31)
	lis      r5, 0x4330
	neg      r4, r3
	lbz      r3, 0xa5(r31)
	stw      r0, 0x1c(r1)
	xoris    r6, r4, 0x8000
	lfd      f1, lbl_805208D8@sda21(r2)
	addi     r4, r3, 1
	stw      r5, 0x18(r1)
	lwz      r3, 0xac(r31)
	lfd      f0, 0x18(r1)
	lbz      r0, 0xa4(r31)
	fsubs    f0, f0, f1
	lfs      f1, lbl_805208C4@sda21(r2)
	lbzx     r0, r3, r0
	stw      r6, 0x24(r1)
	subf     r0, r4, r0
	fadds    f0, f1, f0
	stw      r5, 0x20(r1)
	xoris    r0, r0, 0x8000
	lfs      f1, 0x3c(r31)
	lfd      f5, lbl_805208D0@sda21(r2)
	lfd      f3, 0x20(r1)
	fmuls    f2, f1, f0
	stw      r0, 0x14(r1)
	fsubs    f4, f3, f5
	lfs      f3, 0xec(r31)
	stw      r5, 0x10(r1)
	lfs      f1, 0xc8(r31)
	lfd      f0, 0x10(r1)
	fmadds   f2, f3, f4, f2
	fsubs    f0, f0, f5
	fnmsubs  f0, f1, f0, f2
	stfs     f0, 0x94(r31)
	b        lbl_80439AC4

lbl_80439A48:
	lwz      r3, 0x4c(r31)
	lbz      r30, 0xa5(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x24(r1)
	lbz      r0, 0xa6(r31)
	stw      r4, 0x20(r1)
	lfd      f1, lbl_805208D0@sda21(r2)
	lfd      f0, 0x20(r1)
	stw      r0, 0x1c(r1)
	fsubs    f4, f0, f1
	lfs      f2, 0xec(r31)
	stw      r4, 0x18(r1)
	lfs      f1, 0x9c(r31)
	lfd      f3, lbl_805208D8@sda21(r2)
	lfd      f0, 0x18(r1)
	fmadds   f5, f2, f4, f1
	stw      r30, 0x14(r1)
	fsubs    f2, f0, f3
	lfs      f4, 0x3c(r31)
	stw      r4, 0x10(r1)
	lfs      f1, 0xc8(r31)
	lfd      f0, 0x10(r1)
	fmadds   f2, f4, f2, f5
	fsubs    f0, f0, f3
	fmadds   f0, f1, f0, f2
	stfs     f0, 0x94(r31)

lbl_80439AC4:
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	psq_l    f30, 72(r1), 0, qr0
	lfd      f30, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r0, 0x64(r1)
	lwz      r29, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void TRenderingProcessor::addDrawLines(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80439AF0
 * Size:	0000DC
 */
void TRenderingProcessor::newParagraph(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, lbl_8049ABE8@ha
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	addi     r31, r4, lbl_8049ABE8@l
	stw      r30, 8(r1)
	mr       r30, r3
	bl       setLineWidth__Q25P2JME19TRenderingProcessorFv
	lbz      r3, 0xa4(r30)
	addi     r0, r3, 1
	stb      r0, 0xa4(r30)
	lbz      r0, 0xa4(r30)
	cmplwi   r0, 0x40
	blt      lbl_80439B40
	addi     r3, r31, 0
	addi     r5, r31, 0x18
	li       r4, 0x1fd
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80439B40:
	lbz      r3, 0xa5(r30)
	addi     r0, r3, 1
	stb      r0, 0xa5(r30)
	lwz      r0, 0x8c(r30)
	rlwinm.  r0, r0, 0, 3, 3
	beq      lbl_80439BAC
	mr       r3, r30
	bl       setPageInfo__Q25P2JME19TRenderingProcessorFv
	mr       r3, r30
	bl       setOnePageLine__Q25P2JME19TRenderingProcessorFv
	li       r3, 0
	lwz      r0, cPageInfoBufferNum__Q25P2JME19TRenderingProcessor@sda21(r2)
	stb      r3, 0xa5(r30)
	lbz      r3, 0xa6(r30)
	addi     r3, r3, 1
	stb      r3, 0xa6(r30)
	lbz      r3, 0xa6(r30)
	cmplw    r3, r0
	blt      lbl_80439BA0
	addi     r3, r31, 0x24
	addi     r5, r31, 0x18
	li       r4, 0x1ea
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80439BA0:
	lwz      r0, 0x8c(r30)
	rlwinm   r0, r0, 0, 4, 2
	stw      r0, 0x8c(r30)

lbl_80439BAC:
	mr       r3, r30
	bl       setDrawLocate__Q25P2JME19TRenderingProcessorFv
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
 * Address:	80439BCC
 * Size:	00031C
 */
void TRenderingProcessor::do_character(int)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	mr       r31, r4
	mr       r30, r3
	cmpwi    r31, 0xa
	bne      lbl_80439C0C
	lwz      r12, 0(r3)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	b        lbl_80439EA0

lbl_80439C0C:
	lbz      r4, 0xf0(r30)
	cmplwi   r4, 0
	bne      lbl_80439C3C
	lbz      r0, 0xd4(r30)
	stb      r0, 0x64(r30)
	lbz      r0, 0xd5(r30)
	stb      r0, 0x65(r30)
	lbz      r0, 0xd6(r30)
	stb      r0, 0x66(r30)
	lbz      r0, 0xd7(r30)
	stb      r0, 0x67(r30)
	b        lbl_80439CA0

lbl_80439C3C:
	lwz      r3, 4(r30)
	cmplwi   r3, 0
	bne      lbl_80439C50
	li       r3, 0
	b        lbl_80439C54

lbl_80439C50:
	lwz      r3, 4(r3)

lbl_80439C54:
	lwz      r0, 0x18(r3)
	cmplwi   r0, 0
	beq      lbl_80439C68
	addi     r3, r3, 0x18
	b        lbl_80439C6C

lbl_80439C68:
	li       r3, 0

lbl_80439C6C:
	lwz      r3, 4(r3)
	slwi     r0, r4, 2
	add      r3, r3, r0
	lwz      r0, 0xc(r3)
	stw      r0, 0xc(r1)
	lbz      r3, 0xc(r1)
	lbz      r0, 0xd(r1)
	stb      r3, 0x64(r30)
	lbz      r3, 0xe(r1)
	stb      r0, 0x65(r30)
	lbz      r0, 0xf(r1)
	stb      r3, 0x66(r30)
	stb      r0, 0x67(r30)

lbl_80439CA0:
	lbz      r3, 0x67(r30)
	lis      r0, 0x4330
	stw      r0, 0x10(r1)
	lfd      f2, lbl_805208D8@sda21(r2)
	stw      r3, 0x14(r1)
	lfs      f0, 0x78(r30)
	lfd      f1, 0x10(r1)
	fsubs    f1, f1, f2
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	stb      r0, 0x67(r30)
	lbz      r4, 0xf1(r30)
	cmplwi   r4, 0
	bne      lbl_80439D04
	lbz      r0, 0xd8(r30)
	stb      r0, 0x68(r30)
	lbz      r0, 0xd9(r30)
	stb      r0, 0x69(r30)
	lbz      r0, 0xda(r30)
	stb      r0, 0x6a(r30)
	lbz      r0, 0xdb(r30)
	stb      r0, 0x6b(r30)
	b        lbl_80439D68

lbl_80439D04:
	lwz      r3, 4(r30)
	cmplwi   r3, 0
	bne      lbl_80439D18
	li       r3, 0
	b        lbl_80439D1C

lbl_80439D18:
	lwz      r3, 4(r3)

lbl_80439D1C:
	lwz      r0, 0x18(r3)
	cmplwi   r0, 0
	beq      lbl_80439D30
	addi     r3, r3, 0x18
	b        lbl_80439D34

lbl_80439D30:
	li       r3, 0

lbl_80439D34:
	lwz      r3, 4(r3)
	slwi     r0, r4, 2
	add      r3, r3, r0
	lwz      r0, 0xc(r3)
	stw      r0, 8(r1)
	lbz      r3, 8(r1)
	lbz      r0, 9(r1)
	stb      r3, 0x68(r30)
	lbz      r3, 0xa(r1)
	stb      r0, 0x69(r30)
	lbz      r0, 0xb(r1)
	stb      r3, 0x6a(r30)
	stb      r0, 0x6b(r30)

lbl_80439D68:
	lbz      r3, 0x6b(r30)
	lis      r0, 0x4330
	stw      r0, 0x18(r1)
	lfd      f2, lbl_805208D8@sda21(r2)
	stw      r3, 0x1c(r1)
	lfs      f0, 0x78(r30)
	lfd      f1, 0x18(r1)
	fsubs    f1, f1, f2
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	stb      r0, 0x6b(r30)
	lwz      r3, 0x4c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	xoris    r0, r3, 0x8000
	lis      r3, 0x4330
	stw      r0, 0x24(r1)
	lwz      r0, 0x8c(r30)
	stw      r3, 0x20(r1)
	lfd      f2, lbl_805208D0@sda21(r2)
	clrlwi.  r0, r0, 0x1f
	lfd      f1, 0x20(r1)
	lfs      f0, 0xe0(r30)
	fsubs    f1, f1, f2
	fmuls    f31, f0, f1
	beq      lbl_80439E08
	fmr      f1, f31
	lwz      r4, 0x4c(r30)
	mr       r3, r30
	mr       r5, r31
	li       r6, 1
	bl       calcWidth__Q25P2JME19TRenderingProcessorFP7JUTFontifb
	lfs      f0, 0x90(r30)
	fadds    f0, f0, f1
	stfs     f0, 0x90(r30)
	b        lbl_80439E84

lbl_80439E08:
	lwz      r3, 0x4c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x24(r1)
	fmr      f3, f31
	lwz      r12, 0(r30)
	mr       r3, r30
	stw      r0, 0x20(r1)
	mr       r4, r31
	lfd      f2, lbl_805208D0@sda21(r2)
	lfd      f1, 0x20(r1)
	li       r5, 1
	lfs      f0, 0xe4(r30)
	fsubs    f4, f1, f2
	lfs      f5, 0x90(r30)
	lfs      f1, 0x54(r30)
	lfs      f2, 0x94(r30)
	fmuls    f4, f0, f4
	lfs      f0, 0x58(r30)
	lwz      r12, 0x7c(r12)
	fadds    f1, f5, f1
	fadds    f2, f2, f0
	mtctr    r12
	bctrl
	lfs      f0, 0x90(r30)
	fadds    f0, f0, f1
	stfs     f0, 0x90(r30)

lbl_80439E84:
	lfs      f1, 0x90(r30)
	lfs      f0, 0xc4(r30)
	fadds    f0, f1, f0
	stfs     f0, 0x90(r30)
	lwz      r3, 0x40(r30)
	addi     r0, r3, 1
	stw      r0, 0x40(r30)

lbl_80439EA0:
	lwz      r3, sys@sda21(r13)
	lwz      r3, 0x60(r3)
	lbz      r0, 0x3c(r3)
	cmplwi   r0, 0
	beq      lbl_80439EBC
	mr       r3, r30
	bl       drawRuby__Q25P2JME19TRenderingProcessorFv

lbl_80439EBC:
	lwz      r3, 0xb8(r30)
	addi     r0, r3, 1
	stw      r0, 0xb8(r30)
	psq_l    f31, 56(r1), 0, qr0
	lwz      r0, 0x44(r1)
	lfd      f31, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void TRenderingProcessor::mf(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80439EE8
 * Size:	0000B8
 */
void TRenderingProcessor::do_select_begin(unsigned long)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	li       r0, 0
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r0, 0xa0(r3)
	lwz      r3, 0x4c(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	mulli    r3, r3, 3
	lis      r0, 0x4330
	stw      r0, 8(r1)
	lfd      f2, lbl_805208D0@sda21(r2)
	xoris    r0, r3, 0x8000
	lfs      f0, 0x98(r31)
	stw      r0, 0xc(r1)
	lfd      f1, 8(r1)
	fsubs    f1, f1, f2
	fadds    f0, f0, f1
	stfs     f0, 0x90(r31)
	lwz      r3, 0x4c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xa0(r31)
	lis      r0, 0x4330
	stw      r0, 0x10(r1)
	addi     r0, r4, 3
	lfd      f2, lbl_805208D0@sda21(r2)
	mullw    r0, r0, r3
	lfs      f0, 0x9c(r31)
	xoris    r0, r0, 0x8000
	stw      r0, 0x14(r1)
	lfd      f1, 0x10(r1)
	fsubs    f1, f1, f2
	fadds    f0, f0, f1
	stfs     f0, 0x94(r31)
	lwz      r31, 0x1c(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80439FA0
 * Size:	00006C
 */
void TRenderingProcessor::do_select_end(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lfs      f0, 0x98(r3)
	stfs     f0, 0x90(r3)
	lwz      r3, 0x4c(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f2, lbl_805208D0@sda21(r2)
	stw      r0, 8(r1)
	lfs      f0, 0x9c(r31)
	lfd      f1, 8(r1)
	fsubs    f1, f1, f2
	fadds    f0, f0, f1
	stfs     f0, 0x94(r31)
	lwz      r31, 0x1c(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043A00C
 * Size:	0000BC
 */
void TRenderingProcessor::do_select_separate(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r3, 0xa0(r3)
	addi     r0, r3, 1
	stw      r0, 0xa0(r31)
	lwz      r3, 0x4c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	mulli    r3, r3, 3
	lis      r0, 0x4330
	stw      r0, 8(r1)
	lfd      f2, lbl_805208D0@sda21(r2)
	xoris    r0, r3, 0x8000
	lfs      f0, 0x98(r31)
	stw      r0, 0xc(r1)
	lfd      f1, 8(r1)
	fsubs    f1, f1, f2
	fadds    f0, f0, f1
	stfs     f0, 0x90(r31)
	lwz      r3, 0x4c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xa0(r31)
	lis      r0, 0x4330
	stw      r0, 0x10(r1)
	addi     r0, r4, 3
	lfd      f2, lbl_805208D0@sda21(r2)
	mullw    r0, r0, r3
	lfs      f0, 0x9c(r31)
	xoris    r0, r0, 0x8000
	stw      r0, 0x14(r1)
	lfd      f1, 0x10(r1)
	fsubs    f1, f1, f2
	fadds    f0, f0, f1
	stfs     f0, 0x94(r31)
	lwz      r31, 0x1c(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043A0C8
 * Size:	000174
 */
void TRenderingProcessor::do_tag(unsigned long, void const*, unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r7, 0
	stw      r0, 0x14(r1)
	rlwinm   r0, r4, 0x10, 0x18, 0x1f
	cmplwi   r0, 0xc0
	clrlwi   r4, r4, 0x10
	bge      lbl_8043A178
	cmpwi    r0, 2
	beq      lbl_8043A140
	bge      lbl_8043A104
	cmpwi    r0, 0
	beq      lbl_8043A110
	bge      lbl_8043A128
	b        lbl_8043A170

lbl_8043A104:
	cmpwi    r0, 4
	bge      lbl_8043A170
	b        lbl_8043A158

lbl_8043A110:
	lwz      r12, 0(r3)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	mr       r7, r3
	b        lbl_8043A228

lbl_8043A128:
	lwz      r12, 0(r3)
	lwz      r12, 0x5c(r12)
	mtctr    r12
	bctrl
	mr       r7, r3
	b        lbl_8043A228

lbl_8043A140:
	lwz      r12, 0(r3)
	lwz      r12, 0x60(r12)
	mtctr    r12
	bctrl
	mr       r7, r3
	b        lbl_8043A228

lbl_8043A158:
	lwz      r12, 0(r3)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	mr       r7, r3
	b        lbl_8043A228

lbl_8043A170:
	li       r7, 1
	b        lbl_8043A228

lbl_8043A178:
	cmplwi   r0, 0xff
	bne      lbl_8043A228
	cmpwi    r4, 2
	beq      lbl_8043A1EC
	bge      lbl_8043A19C
	cmpwi    r4, 0
	beq      lbl_8043A1AC
	bge      lbl_8043A1CC
	b        lbl_8043A228

lbl_8043A19C:
	cmpwi    r4, 4
	beq      lbl_8043A228
	bge      lbl_8043A228
	b        lbl_8043A20C

lbl_8043A1AC:
	lwz      r12, 0(r3)
	mr       r4, r5
	mr       r5, r6
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	mr       r7, r3
	b        lbl_8043A228

lbl_8043A1CC:
	lwz      r12, 0(r3)
	mr       r4, r5
	mr       r5, r6
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl
	mr       r7, r3
	b        lbl_8043A228

lbl_8043A1EC:
	lwz      r12, 0(r3)
	mr       r4, r5
	mr       r5, r6
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	mr       r7, r3
	b        lbl_8043A228

lbl_8043A20C:
	lwz      r12, 0(r3)
	mr       r4, r5
	mr       r5, r6
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	mr       r7, r3

lbl_8043A228:
	lwz      r0, 0x14(r1)
	mr       r3, r7
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043A23C
 * Size:	000008
 */
void TRenderingProcessor::do_systemTagCode(unsigned short, void const*, unsigned long) { return 0x0; }

/*
 * --INFO--
 * Address:	8043A244
 * Size:	00002C
 */
void TRenderingProcessor::tagColor(void const*, unsigned long)
{
	/*
	lbz      r4, 0(r4)
	cmplwi   r4, 0
	bne      lbl_8043A25C
	stb      r4, 0xf0(r3)
	stb      r4, 0xf1(r3)
	b        lbl_8043A268

lbl_8043A25C:
	stb      r4, 0xf0(r3)
	addi     r0, r4, 1
	stb      r0, 0xf1(r3)

lbl_8043A268:
	li       r3, 1
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043A270
 * Size:	00003C
 */
void TRenderingProcessor::tagSize(void const*, unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	lis      r0, 0x4330
	lhz      r4, 0(r4)
	stw      r0, 8(r1)
	lfd      f2, lbl_805208D8@sda21(r2)
	stw      r4, 0xc(r1)
	lfs      f0, lbl_805208BC@sda21(r2)
	lfd      f1, 8(r1)
	fsubs    f1, f1, f2
	fdivs    f0, f1, f0
	stfs     f0, 0xe0(r3)
	stfs     f0, 0xe4(r3)
	li       r3, 1
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043A2AC
 * Size:	000164
 */
void TRenderingProcessor::tagRuby(void const*, unsigned long)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	stw      r30, 0x28(r1)
	mr       r30, r5
	stw      r29, 0x24(r1)
	mr       r29, r4
	lwz      r6, sys@sda21(r13)
	lwz      r3, 0x60(r6)
	lbz      r0, 0x3c(r3)
	cmplwi   r0, 0
	beq      lbl_8043A3F0
	lwz      r0, 0x8c(r31)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_8043A3F0
	cmplwi   r30, 0x21
	blt      lbl_8043A314
	lis      r3, lbl_8049ABE8@ha
	lis      r5, lbl_8049AC00@ha
	addi     r3, r3, lbl_8049ABE8@l
	li       r4, 0x347
	addi     r5, r5, lbl_8049AC00@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8043A314:
	lwz      r3, 0x100(r31)
	addi     r4, r29, 1
	addi     r5, r30, -1
	bl       strncpy
	lwz      r0, 0x100(r31)
	li       r6, 0
	li       r4, 1
	lbz      r3, 0(r29)
	add      r5, r0, r30
	addi     r0, r30, -1
	stb      r6, -1(r5)
	stb      r4, 0xf2(r31)
	lwz      r4, 0xb8(r31)
	addi     r4, r4, -1
	stw      r4, 0xf4(r31)
	stb      r3, 0xf8(r31)
	stw      r0, 0xfc(r31)
	lfs      f0, 0x90(r31)
	stfs     f0, 0x104(r31)
	lwz      r3, 0x4c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_805208D0@sda21(r2)
	stw      r0, 8(r1)
	lfs      f1, 0xe4(r31)
	lfd      f2, 8(r1)
	lfs      f0, lbl_805208C0@sda21(r2)
	fsubs    f3, f2, f3
	lfs      f2, 0x94(r31)
	fmuls    f1, f1, f3
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8043A3B8
	lfs      f0, lbl_805208CC@sda21(r2)
	fadds    f0, f0, f1
	b        lbl_8043A3C0

lbl_8043A3B8:
	lfs      f0, lbl_805208CC@sda21(r2)
	fsubs    f0, f1, f0

lbl_8043A3C0:
	fctiwz   f0, f0
	lis      r0, 0x4330
	stw      r0, 0x18(r1)
	lfd      f1, lbl_805208D0@sda21(r2)
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	xoris    r0, r0, 0x8000
	stw      r0, 0x1c(r1)
	lfd      f0, 0x18(r1)
	fsubs    f0, f0, f1
	fsubs    f0, f2, f0
	stfs     f0, 0x108(r31)

lbl_8043A3F0:
	lwz      r0, 0x34(r1)
	li       r3, 1
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043A410
 * Size:	000008
 */
u32 TRenderingProcessor::tagFont(void const*, unsigned long) { return 0x1; }

/*
 * --INFO--
 * Address:	8043A418
 * Size:	000024
 */
void TRenderingProcessor::tagColorEX(unsigned short, void const*, unsigned long)
{
	/*
	clrlwi.  r0, r4, 0x10
	beq      lbl_8043A424
	b        lbl_8043A434

lbl_8043A424:
	lbz      r4, 0(r5)
	lbz      r0, 1(r5)
	stb      r4, 0xf0(r3)
	stb      r0, 0xf1(r3)

lbl_8043A434:
	li       r3, 1
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043A43C
 * Size:	00006C
 */
void TRenderingProcessor::tagControl(unsigned short, void const*, unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	clrlwi   r0, r4, 0x10
	cmpwi    r0, 1
	li       r4, 1
	beq      lbl_8043A494
	bge      lbl_8043A468
	cmpwi    r0, 0
	bge      lbl_8043A474
	b        lbl_8043A494

lbl_8043A468:
	cmpwi    r0, 3
	bge      lbl_8043A494
	b        lbl_8043A48C

lbl_8043A474:
	lwz      r12, 0(r3)
	lwz      r12, 0x80(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	b        lbl_8043A494

lbl_8043A48C:
	lbz      r0, 0(r5)
	stb      r0, 0xdc(r3)

lbl_8043A494:
	lwz      r0, 0x14(r1)
	mr       r3, r4
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043A4A8
 * Size:	000014
 */
void TRenderingProcessor::doTagControlAbtnWait(void)
{
	/*
	lwz      r0, 0x8c(r3)
	oris     r0, r0, 0x1000
	stw      r0, 0x8c(r3)
	li       r3, 1
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043A4BC
 * Size:	00071C
 */
void TRenderingProcessor::tagPosition(unsigned short, void const*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stfd      f31, 0x50(r1)
	  psq_st    f31,0x58(r1),0,0
	  stfd      f30, 0x40(r1)
	  psq_st    f30,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  stw       r29, 0x34(r1)
	  rlwinm    r0,r4,0,16,31
	  mr        r31, r3
	  cmplwi    r0, 0x7
	  bgt-      .loc_0x6EC
	  lis       r3, 0x804F
	  rlwinm    r0,r0,2,0,29
	  subi      r3, r3, 0x3570
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  lfs       f0, 0xBC(r31)
	  stfs      f0, 0xC4(r31)
	  b         .loc_0x6EC
	  lbz       r3, 0x0(r5)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  extsb     r0, r3
	  lfd       f1, 0x2570(r2)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0xC4(r31)
	  b         .loc_0x6EC
	  lfs       f0, 0xC0(r31)
	  stfs      f0, 0xC8(r31)
	  lwz       r3, 0x8C(r31)
	  rlwinm.   r0,r3,0,31,31
	  beq-      .loc_0x11C
	  lwz       r3, 0x4C(r31)
	  lbz       r30, 0xA5(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0xC(r1)
	  lbz       r0, 0xA6(r31)
	  stw       r4, 0x8(r1)
	  lfd       f1, 0x2570(r2)
	  lfd       f0, 0x8(r1)
	  stw       r0, 0x14(r1)
	  fsubs     f4, f0, f1
	  lfs       f2, 0xEC(r31)
	  stw       r4, 0x10(r1)
	  lfs       f1, 0x9C(r31)
	  lfd       f3, 0x2578(r2)
	  lfd       f0, 0x10(r1)
	  fmadds    f5, f2, f4, f1
	  stw       r30, 0x1C(r1)
	  fsubs     f2, f0, f3
	  lfs       f4, 0x3C(r31)
	  stw       r4, 0x18(r1)
	  lfs       f1, 0xC8(r31)
	  lfd       f0, 0x18(r1)
	  fmadds    f2, f4, f2, f5
	  fsubs     f0, f0, f3
	  fmadds    f0, f1, f0, f2
	  stfs      f0, 0x94(r31)
	  b         .loc_0x6EC

	.loc_0x11C:
	  rlwinm.   r0,r3,0,22,22
	  beq-      .loc_0x24C
	  lbz       r29, 0xA6(r31)
	  lwz       r3, 0xB0(r31)
	  rlwinm    r0,r29,1,23,30
	  lfs       f2, 0x2560(r2)
	  add       r3, r3, r0
	  lbz       r5, 0x1(r3)
	  fmr       f1, f2
	  lbz       r3, 0x0(r3)
	  addi      r0, r5, 0x1
	  sub       r0, r0, r3
	  rlwinm    r4,r3,2,0,29
	  mtctr     r0
	  cmpw      r3, r5
	  bgt-      .loc_0x17C

	.loc_0x15C:
	  lwz       r3, 0xA8(r31)
	  lfsx      f0, r3, r4
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x174
	  lfs       f0, 0xC8(r31)
	  fadds     f2, f2, f0

	.loc_0x174:
	  addi      r4, r4, 0x4
	  bdnz+     .loc_0x15C

	.loc_0x17C:
	  lfs       f0, 0x3C(r31)
	  lwz       r3, 0x4C(r31)
	  fsubs     f0, f0, f2
	  lfs       f1, 0x256C(r2)
	  lwz       r12, 0x0(r3)
	  lbz       r30, 0xA5(r31)
	  lwz       r12, 0x1C(r12)
	  fmuls     f31, f1, f0
	  mtctr     r12
	  bctrl
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x1C(r1)
	  lwz       r3, 0x4C(r31)
	  stw       r0, 0x18(r1)
	  lfd       f1, 0x2570(r2)
	  lfd       f0, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  fsubs     f2, f0, f1
	  lfs       f1, 0xEC(r31)
	  lfs       f0, 0x9C(r31)
	  lwz       r12, 0x24(r12)
	  fmadds    f30, f1, f2, f0
	  mtctr     r12
	  bctrl
	  lis       r0, 0x4330
	  xoris     r3, r3, 0x8000
	  stw       r3, 0x14(r1)
	  lfd       f2, 0x2570(r2)
	  stw       r0, 0x10(r1)
	  lfs       f0, 0xEC(r31)
	  lfd       f1, 0x10(r1)
	  lfs       f5, 0xC8(r31)
	  fsubs     f2, f1, f2
	  stw       r29, 0xC(r1)
	  lfs       f1, 0x256C(r2)
	  stw       r0, 0x8(r1)
	  fnmsubs   f3, f0, f2, f5
	  lfd       f2, 0x2578(r2)
	  lfd       f0, 0x8(r1)
	  stw       r30, 0x24(r1)
	  fmadds    f4, f1, f3, f30
	  lfs       f3, 0x3C(r31)
	  stw       r0, 0x20(r1)
	  fsubs     f1, f0, f2
	  lfd       f0, 0x20(r1)
	  fmadds    f1, f3, f1, f4
	  fsubs     f0, f0, f2
	  fmadds    f0, f5, f0, f31
	  fadds     f0, f0, f1
	  stfs      f0, 0x94(r31)
	  b         .loc_0x6EC

	.loc_0x24C:
	  rlwinm.   r0,r3,0,21,21
	  beq-      .loc_0x2F4
	  lwz       r3, 0x4C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0xA6(r31)
	  lis       r5, 0x4330
	  neg       r4, r3
	  lbz       r3, 0xA5(r31)
	  stw       r0, 0x1C(r1)
	  xoris     r6, r4, 0x8000
	  lfd       f1, 0x2578(r2)
	  addi      r4, r3, 0x1
	  stw       r5, 0x18(r1)
	  lwz       r3, 0xAC(r31)
	  lfd       f0, 0x18(r1)
	  lbz       r0, 0xA4(r31)
	  fsubs     f0, f0, f1
	  lfs       f1, 0x2564(r2)
	  lbzx      r0, r3, r0
	  stw       r6, 0x24(r1)
	  sub       r0, r0, r4
	  fadds     f0, f1, f0
	  stw       r5, 0x20(r1)
	  xoris     r0, r0, 0x8000
	  lfs       f1, 0x3C(r31)
	  lfd       f5, 0x2570(r2)
	  lfd       f3, 0x20(r1)
	  fmuls     f2, f1, f0
	  stw       r0, 0x14(r1)
	  fsubs     f4, f3, f5
	  lfs       f3, 0xEC(r31)
	  stw       r5, 0x10(r1)
	  lfs       f1, 0xC8(r31)
	  lfd       f0, 0x10(r1)
	  fmadds    f2, f3, f4, f2
	  fsubs     f0, f0, f5
	  fnmsubs   f0, f1, f0, f2
	  stfs      f0, 0x94(r31)
	  b         .loc_0x6EC

	.loc_0x2F4:
	  lwz       r3, 0x4C(r31)
	  lbz       r30, 0xA5(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x24(r1)
	  lbz       r0, 0xA6(r31)
	  stw       r4, 0x20(r1)
	  lfd       f1, 0x2570(r2)
	  lfd       f0, 0x20(r1)
	  stw       r0, 0x1C(r1)
	  fsubs     f4, f0, f1
	  lfs       f2, 0xEC(r31)
	  stw       r4, 0x18(r1)
	  lfs       f1, 0x9C(r31)
	  lfd       f3, 0x2578(r2)
	  lfd       f0, 0x18(r1)
	  fmadds    f5, f2, f4, f1
	  stw       r30, 0x14(r1)
	  fsubs     f2, f0, f3
	  lfs       f4, 0x3C(r31)
	  stw       r4, 0x10(r1)
	  lfs       f1, 0xC8(r31)
	  lfd       f0, 0x10(r1)
	  fmadds    f2, f4, f2, f5
	  fsubs     f0, f0, f3
	  fmadds    f0, f1, f0, f2
	  stfs      f0, 0x94(r31)
	  b         .loc_0x6EC
	  lbz       r3, 0x0(r5)
	  lis       r0, 0x4330
	  stw       r0, 0x20(r1)
	  extsb     r0, r3
	  lfd       f1, 0x2570(r2)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x24(r1)
	  lfd       f0, 0x20(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0xC8(r31)
	  lwz       r3, 0x8C(r31)
	  rlwinm.   r0,r3,0,31,31
	  beq-      .loc_0x428
	  lwz       r3, 0x4C(r31)
	  lbz       r30, 0xA5(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x24(r1)
	  lbz       r0, 0xA6(r31)
	  stw       r4, 0x20(r1)
	  lfd       f1, 0x2570(r2)
	  lfd       f0, 0x20(r1)
	  stw       r0, 0x1C(r1)
	  fsubs     f4, f0, f1
	  lfs       f2, 0xEC(r31)
	  stw       r4, 0x18(r1)
	  lfs       f1, 0x9C(r31)
	  lfd       f3, 0x2578(r2)
	  lfd       f0, 0x18(r1)
	  fmadds    f5, f2, f4, f1
	  stw       r30, 0x14(r1)
	  fsubs     f2, f0, f3
	  lfs       f4, 0x3C(r31)
	  stw       r4, 0x10(r1)
	  lfs       f1, 0xC8(r31)
	  lfd       f0, 0x10(r1)
	  fmadds    f2, f4, f2, f5
	  fsubs     f0, f0, f3
	  fmadds    f0, f1, f0, f2
	  stfs      f0, 0x94(r31)
	  b         .loc_0x6EC

	.loc_0x428:
	  rlwinm.   r0,r3,0,22,22
	  beq-      .loc_0x558
	  lbz       r29, 0xA6(r31)
	  lwz       r3, 0xB0(r31)
	  rlwinm    r0,r29,1,23,30
	  lfs       f2, 0x2560(r2)
	  add       r3, r3, r0
	  lbz       r5, 0x1(r3)
	  fmr       f1, f2
	  lbz       r3, 0x0(r3)
	  addi      r0, r5, 0x1
	  sub       r0, r0, r3
	  rlwinm    r4,r3,2,0,29
	  mtctr     r0
	  cmpw      r3, r5
	  bgt-      .loc_0x488

	.loc_0x468:
	  lwz       r3, 0xA8(r31)
	  lfsx      f0, r3, r4
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x480
	  lfs       f0, 0xC8(r31)
	  fadds     f2, f2, f0

	.loc_0x480:
	  addi      r4, r4, 0x4
	  bdnz+     .loc_0x468

	.loc_0x488:
	  lfs       f0, 0x3C(r31)
	  lwz       r3, 0x4C(r31)
	  fsubs     f0, f0, f2
	  lfs       f1, 0x256C(r2)
	  lwz       r12, 0x0(r3)
	  lbz       r30, 0xA5(r31)
	  lwz       r12, 0x1C(r12)
	  fmuls     f31, f1, f0
	  mtctr     r12
	  bctrl
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x24(r1)
	  lwz       r3, 0x4C(r31)
	  stw       r0, 0x20(r1)
	  lfd       f1, 0x2570(r2)
	  lfd       f0, 0x20(r1)
	  lwz       r12, 0x0(r3)
	  fsubs     f2, f0, f1
	  lfs       f1, 0xEC(r31)
	  lfs       f0, 0x9C(r31)
	  lwz       r12, 0x24(r12)
	  fmadds    f30, f1, f2, f0
	  mtctr     r12
	  bctrl
	  lis       r0, 0x4330
	  xoris     r3, r3, 0x8000
	  stw       r3, 0x1C(r1)
	  lfd       f2, 0x2570(r2)
	  stw       r0, 0x18(r1)
	  lfs       f0, 0xEC(r31)
	  lfd       f1, 0x18(r1)
	  lfs       f5, 0xC8(r31)
	  fsubs     f2, f1, f2
	  stw       r29, 0x14(r1)
	  lfs       f1, 0x256C(r2)
	  stw       r0, 0x10(r1)
	  fnmsubs   f3, f0, f2, f5
	  lfd       f2, 0x2578(r2)
	  lfd       f0, 0x10(r1)
	  stw       r30, 0xC(r1)
	  fmadds    f4, f1, f3, f30
	  lfs       f3, 0x3C(r31)
	  stw       r0, 0x8(r1)
	  fsubs     f1, f0, f2
	  lfd       f0, 0x8(r1)
	  fmadds    f1, f3, f1, f4
	  fsubs     f0, f0, f2
	  fmadds    f0, f5, f0, f31
	  fadds     f0, f0, f1
	  stfs      f0, 0x94(r31)
	  b         .loc_0x6EC

	.loc_0x558:
	  rlwinm.   r0,r3,0,21,21
	  beq-      .loc_0x600
	  lwz       r3, 0x4C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0xA6(r31)
	  lis       r5, 0x4330
	  neg       r4, r3
	  lbz       r3, 0xA5(r31)
	  stw       r0, 0x1C(r1)
	  xoris     r6, r4, 0x8000
	  lfd       f1, 0x2578(r2)
	  addi      r4, r3, 0x1
	  stw       r5, 0x18(r1)
	  lwz       r3, 0xAC(r31)
	  lfd       f0, 0x18(r1)
	  lbz       r0, 0xA4(r31)
	  fsubs     f0, f0, f1
	  lfs       f1, 0x2564(r2)
	  lbzx      r0, r3, r0
	  stw       r6, 0x24(r1)
	  sub       r0, r0, r4
	  fadds     f0, f1, f0
	  stw       r5, 0x20(r1)
	  xoris     r0, r0, 0x8000
	  lfs       f1, 0x3C(r31)
	  lfd       f5, 0x2570(r2)
	  lfd       f3, 0x20(r1)
	  fmuls     f2, f1, f0
	  stw       r0, 0x14(r1)
	  fsubs     f4, f3, f5
	  lfs       f3, 0xEC(r31)
	  stw       r5, 0x10(r1)
	  lfs       f1, 0xC8(r31)
	  lfd       f0, 0x10(r1)
	  fmadds    f2, f3, f4, f2
	  fsubs     f0, f0, f5
	  fnmsubs   f0, f1, f0, f2
	  stfs      f0, 0x94(r31)
	  b         .loc_0x6EC

	.loc_0x600:
	  lwz       r3, 0x4C(r31)
	  lbz       r30, 0xA5(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x24(r1)
	  lbz       r0, 0xA6(r31)
	  stw       r4, 0x20(r1)
	  lfd       f1, 0x2570(r2)
	  lfd       f0, 0x20(r1)
	  stw       r0, 0x1C(r1)
	  fsubs     f4, f0, f1
	  lfs       f2, 0xEC(r31)
	  stw       r4, 0x18(r1)
	  lfs       f1, 0x9C(r31)
	  lfd       f3, 0x2578(r2)
	  lfd       f0, 0x18(r1)
	  fmadds    f5, f2, f4, f1
	  stw       r30, 0x14(r1)
	  fsubs     f2, f0, f3
	  lfs       f4, 0x3C(r31)
	  stw       r4, 0x10(r1)
	  lfs       f1, 0xC8(r31)
	  lfd       f0, 0x10(r1)
	  fmadds    f2, f4, f2, f5
	  fsubs     f0, f0, f3
	  fmadds    f0, f1, f0, f2
	  stfs      f0, 0x94(r31)
	  b         .loc_0x6EC
	  lfs       f0, 0xEC(r31)
	  stfs      f0, 0xE4(r31)
	  b         .loc_0x6EC
	  lhz       r3, 0x0(r5)
	  lis       r0, 0x4330
	  stw       r0, 0x20(r1)
	  lfd       f2, 0x2578(r2)
	  stw       r3, 0x24(r1)
	  lfs       f0, 0x255C(r2)
	  lfd       f1, 0x20(r1)
	  fsubs     f1, f1, f2
	  fdivs     f0, f1, f0
	  stfs      f0, 0xE4(r31)
	  b         .loc_0x6EC
	  lfs       f0, 0xE8(r31)
	  stfs      f0, 0xE0(r31)
	  b         .loc_0x6EC
	  lhz       r3, 0x0(r5)
	  lis       r0, 0x4330
	  stw       r0, 0x20(r1)
	  lfd       f2, 0x2578(r2)
	  stw       r3, 0x24(r1)
	  lfs       f0, 0x255C(r2)
	  lfd       f1, 0x20(r1)
	  fsubs     f1, f1, f2
	  fdivs     f0, f1, f0
	  stfs      f0, 0xE0(r31)

	.loc_0x6EC:
	  li        r3, 0x1
	  psq_l     f31,0x58(r1),0,0
	  lfd       f31, 0x50(r1)
	  psq_l     f30,0x48(r1),0,0
	  lfd       f30, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r0, 0x64(r1)
	  lwz       r29, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8043ABD8
 * Size:	00001C
 */
void TRenderingProcessor::initRuby(void)
{
	/*
	li       r0, 0
	stb      r0, 0xf2(r3)
	stw      r0, 0xf4(r3)
	stb      r0, 0xf8(r3)
	lwz      r3, 0x100(r3)
	stb      r0, 0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043ABF4
 * Size:	000360
 */
void TRenderingProcessor::drawRuby(void)
{
	/*
	stwu     r1, -0x110(r1)
	mflr     r0
	stw      r0, 0x114(r1)
	stfd     f31, 0x100(r1)
	psq_st   f31, 264(r1), 0, qr0
	stfd     f30, 0xf0(r1)
	psq_st   f30, 248(r1), 0, qr0
	stfd     f29, 0xe0(r1)
	psq_st   f29, 232(r1), 0, qr0
	stfd     f28, 0xd0(r1)
	psq_st   f28, 216(r1), 0, qr0
	stfd     f27, 0xc0(r1)
	psq_st   f27, 200(r1), 0, qr0
	stmw     r26, 0xa8(r1)
	mr       r27, r3
	lbz      r0, 0xf2(r3)
	cmplwi   r0, 0
	beq      lbl_8043AF18
	lwz      r0, 0x8c(r27)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8043AC54
	li       r0, 0
	stb      r0, 0xf2(r27)
	b        lbl_8043AF18

lbl_8043AC54:
	lwz      r3, 0x4c(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x94(r1)
	lfd      f3, lbl_805208D0@sda21(r2)
	stw      r0, 0x90(r1)
	lfs      f1, 0xe4(r27)
	lfd      f2, 0x90(r1)
	lfs      f0, lbl_805208C0@sda21(r2)
	fsubs    f2, f2, f3
	lfs      f3, 0x94(r27)
	fmuls    f1, f1, f2
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8043ACAC
	lfs      f0, lbl_805208CC@sda21(r2)
	fadds    f0, f0, f1
	b        lbl_8043ACB4

lbl_8043ACAC:
	lfs      f0, lbl_805208CC@sda21(r2)
	fsubs    f0, f1, f0

lbl_8043ACB4:
	fctiwz   f0, f0
	lis      r0, 0x4330
	stw      r0, 0xa0(r1)
	lfd      f2, lbl_805208D0@sda21(r2)
	stfd     f0, 0x98(r1)
	lfs      f0, 0x108(r27)
	lwz      r0, 0x9c(r1)
	xoris    r0, r0, 0x8000
	stw      r0, 0xa4(r1)
	lfd      f1, 0xa0(r1)
	fsubs    f1, f1, f2
	fsubs    f1, f3, f1
	fcmpo    cr0, f0, f1
	ble      lbl_8043ACF0
	stfs     f1, 0x108(r27)

lbl_8043ACF0:
	lwz      r3, 0xf4(r27)
	lbz      r0, 0xf8(r27)
	lwz      r4, 0xb8(r27)
	add      r0, r3, r0
	cmpw     r4, r0
	bne      lbl_8043AF18
	lwz      r3, 0x50(r27)
	lfs      f31, 0x10c(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xa4(r1)
	addi     r30, r1, 8
	lfd      f3, lbl_805208D0@sda21(r2)
	mr       r31, r30
	stw      r0, 0xa0(r1)
	li       r28, 0
	lfs      f2, 0x90(r27)
	li       r29, 0
	lfd      f0, 0xa0(r1)
	lfs      f1, 0xc4(r27)
	fsubs    f3, f0, f3
	lfs      f0, 0x104(r27)
	fsubs    f1, f2, f1
	lfs      f28, lbl_805208C0@sda21(r2)
	fmuls    f30, f31, f3
	fsubs    f27, f1, f0
	b        lbl_8043AE04

lbl_8043AD6C:
	lwz      r3, 0x50(r27)
	lwz      r4, 0x100(r27)
	lwz      r12, 0(r3)
	lbzx     r4, r4, r29
	lwz      r12, 0x40(r12)
	mr       r26, r4
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8043ADB4
	lwz      r3, 0x100(r27)
	addi     r0, r29, 1
	rlwinm   r4, r26, 8, 0x10, 0x17
	addi     r29, r29, 1
	lbzx     r0, r3, r0
	mr       r26, r4
	rlwimi   r26, r0, 0, 0x18, 0x1f
	b        lbl_8043ADD8

lbl_8043ADB4:
	cmpwi    r26, 0xff
	bgt      lbl_8043ADD8
	lis      r3, __ctype_map@ha
	clrlwi   r0, r26, 0x18
	addi     r3, r3, __ctype_map@l
	lbzx     r0, r3, r0
	andi.    r0, r0, 0xdc
	bne      lbl_8043ADD8
	li       r26, 0x3f

lbl_8043ADD8:
	fmr      f1, f30
	lwz      r4, 0x50(r27)
	mr       r3, r27
	mr       r5, r26
	li       r6, 1
	bl       calcWidth__Q25P2JME19TRenderingProcessorFP7JUTFontifb
	fadds    f28, f28, f1
	stw      r26, 0(r31)
	addi     r31, r31, 4
	addi     r28, r28, 1
	addi     r29, r29, 1

lbl_8043AE04:
	lwz      r0, 0xfc(r27)
	cmplw    r29, r0
	blt      lbl_8043AD6C
	addi     r3, r28, 1
	lis      r0, 0x4330
	xoris    r3, r3, 0x8000
	lfs      f0, 0xc4(r27)
	stw      r3, 0xa4(r1)
	fsubs    f1, f27, f28
	lfd      f2, lbl_805208D0@sda21(r2)
	fmuls    f3, f0, f31
	stw      r0, 0xa0(r1)
	lfd      f0, 0xa0(r1)
	fsubs    f0, f0, f2
	fdivs    f29, f1, f0
	fcmpo    cr0, f29, f3
	bge      lbl_8043AE4C
	fmr      f29, f3

lbl_8043AE4C:
	fmadds   f1, f29, f0, f28
	lfs      f2, lbl_805208CC@sda21(r2)
	lfs      f0, 0x104(r27)
	li       r31, 0
	lfd      f28, lbl_805208D0@sda21(r2)
	lis      r29, 0x4330
	fsubs    f1, f27, f1
	fmadds   f0, f2, f1, f0
	fadds    f0, f29, f0
	stfs     f0, 0x104(r27)
	b        lbl_8043AF08

lbl_8043AE78:
	lwz      r3, 0x50(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	xoris    r0, r3, 0x8000
	lwz      r12, 0(r27)
	stw      r0, 0xa4(r1)
	fmr      f3, f30
	lfs      f4, 0x104(r27)
	mr       r3, r27
	stw      r29, 0xa0(r1)
	li       r5, 1
	lfs      f1, 0x54(r27)
	lfd      f0, 0xa0(r1)
	lfs      f2, 0x108(r27)
	fadds    f1, f4, f1
	fsubs    f5, f0, f28
	lfs      f0, 0x58(r27)
	lwz      r12, 0x78(r12)
	fadds    f2, f2, f0
	lwz      r4, 0(r30)
	fmuls    f4, f31, f5
	mtctr    r12
	bctrl
	lfs      f0, 0x104(r27)
	addi     r30, r30, 4
	addi     r31, r31, 1
	fadds    f0, f0, f1
	stfs     f0, 0x104(r27)
	lfs      f0, 0x104(r27)
	fadds    f0, f0, f29
	stfs     f0, 0x104(r27)
	lwz      r3, 0x40(r27)
	addi     r0, r3, 1
	stw      r0, 0x40(r27)

lbl_8043AF08:
	cmpw     r31, r28
	blt      lbl_8043AE78
	li       r0, 0
	stb      r0, 0xf2(r27)

lbl_8043AF18:
	psq_l    f31, 264(r1), 0, qr0
	lfd      f31, 0x100(r1)
	psq_l    f30, 248(r1), 0, qr0
	lfd      f30, 0xf0(r1)
	psq_l    f29, 232(r1), 0, qr0
	lfd      f29, 0xe0(r1)
	psq_l    f28, 216(r1), 0, qr0
	lfd      f28, 0xd0(r1)
	psq_l    f27, 200(r1), 0, qr0
	lfd      f27, 0xc0(r1)
	lmw      r26, 0xa8(r1)
	lwz      r0, 0x114(r1)
	mtlr     r0
	addi     r1, r1, 0x110
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043AF54
 * Size:	000438
 */
void TRenderingProcessor::tagImage(unsigned short, void const*, unsigned long)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stfd     f30, 0x50(r1)
	psq_st   f30, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	stw      r29, 0x44(r1)
	stw      r28, 0x40(r1)
	cmplwi   r6, 1
	mr       r30, r3
	mr       r28, r4
	mr       r29, r5
	beq      lbl_8043AFB0
	lis      r3, lbl_8049ABE8@ha
	lis      r5, lbl_8049AC00@ha
	addi     r3, r3, lbl_8049ABE8@l
	li       r4, 0x45a
	addi     r5, r5, lbl_8049AC00@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8043AFB0:
	clrlwi.  r0, r28, 0x10
	lbz      r29, 0(r29)
	beq      lbl_8043AFC0
	b        lbl_8043AFDC

lbl_8043AFC0:
	lfs      f2, lbl_805208E0@sda21(r2)
	li       r31, 0
	lfs      f1, 0xe0(r30)
	lfs      f0, 0xe4(r30)
	fmuls    f31, f2, f1
	fmuls    f30, f2, f0
	b        lbl_8043AFF8

lbl_8043AFDC:
	lis      r3, lbl_8049ABE8@ha
	lis      r5, lbl_8049AC00@ha
	addi     r3, r3, lbl_8049ABE8@l
	li       r4, 0x46e
	addi     r5, r5, lbl_8049AC00@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8043AFF8:
	lwz      r3, gP2JMEMgr@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8043B314
	mr       r5, r29
	li       r4, 0
	bl       getImage__Q25P2JME3MgrFQ35P2JME10ImageGroup3EIDi
	or.      r4, r3, r3
	beq      lbl_8043B314
	lwz      r0, 0x8c(r30)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_8043B314
	lwz      r3, 0x60(r30)
	cmpwi    r31, 0
	lwz      r0, 0x5c(r30)
	stw      r3, 0x1c(r1)
	stw      r0, 0x18(r1)
	beq      lbl_8043B040
	b        lbl_8043B10C

lbl_8043B040:
	lis      r3, "cBtnIconColor__Q25P2JME30@unnamed@messageRendering_cpp@"@ha
	cmplwi   r29, 8
	rlwinm   r5, r29, 3, 0x15, 0x1c
	addi     r0, r3, "cBtnIconColor__Q25P2JME30@unnamed@messageRendering_cpp@"@l
	add      r9, r0, r5
	addi     r10, r9, 4
	bge      lbl_8043B0C8
	lbz      r8, 3(r9)
	li       r3, 0xff
	lbz      r7, 2(r9)
	li       r0, 0xcd
	lbz      r6, 1(r9)
	lbz      r5, 0(r9)
	stb      r5, 0x60(r30)
	stb      r6, 0x61(r30)
	stb      r7, 0x62(r30)
	stb      r8, 0x63(r30)
	lbz      r8, 3(r10)
	lbz      r7, 2(r10)
	lbz      r6, 1(r10)
	lbz      r5, 0(r10)
	stb      r5, 0x5c(r30)
	stb      r6, 0x5d(r30)
	stb      r7, 0x5e(r30)
	stb      r8, 0x5f(r30)
	stb      r3, 0x70(r30)
	stb      r3, 0x71(r30)
	stb      r3, 0x72(r30)
	stb      r3, 0x73(r30)
	stb      r0, 0x74(r30)
	stb      r0, 0x75(r30)
	stb      r0, 0x76(r30)
	stb      r3, 0x77(r30)
	b        lbl_8043B234

lbl_8043B0C8:
	lbz      r6, 3(r9)
	lbz      r5, 2(r9)
	lbz      r3, 1(r9)
	lbz      r0, 0(r9)
	stb      r0, 0x70(r30)
	stb      r3, 0x71(r30)
	stb      r5, 0x72(r30)
	stb      r6, 0x73(r30)
	lbz      r6, 3(r10)
	lbz      r5, 2(r10)
	lbz      r3, 1(r10)
	lbz      r0, 0(r10)
	stb      r0, 0x74(r30)
	stb      r3, 0x75(r30)
	stb      r5, 0x76(r30)
	stb      r6, 0x77(r30)
	b        lbl_8043B234

lbl_8043B10C:
	lbz      r5, 0xf0(r30)
	cmplwi   r5, 0
	bne      lbl_8043B13C
	lbz      r0, 0xd4(r30)
	stb      r0, 0x70(r30)
	lbz      r0, 0xd5(r30)
	stb      r0, 0x71(r30)
	lbz      r0, 0xd6(r30)
	stb      r0, 0x72(r30)
	lbz      r0, 0xd7(r30)
	stb      r0, 0x73(r30)
	b        lbl_8043B1A0

lbl_8043B13C:
	lwz      r3, 4(r30)
	cmplwi   r3, 0
	bne      lbl_8043B150
	li       r3, 0
	b        lbl_8043B154

lbl_8043B150:
	lwz      r3, 4(r3)

lbl_8043B154:
	lwz      r0, 0x18(r3)
	cmplwi   r0, 0
	beq      lbl_8043B168
	addi     r3, r3, 0x18
	b        lbl_8043B16C

lbl_8043B168:
	li       r3, 0

lbl_8043B16C:
	lwz      r3, 4(r3)
	slwi     r0, r5, 2
	add      r3, r3, r0
	lwz      r0, 0xc(r3)
	stw      r0, 0x14(r1)
	lbz      r3, 0x14(r1)
	lbz      r0, 0x15(r1)
	stb      r3, 0x70(r30)
	lbz      r3, 0x16(r1)
	stb      r0, 0x71(r30)
	lbz      r0, 0x17(r1)
	stb      r3, 0x72(r30)
	stb      r0, 0x73(r30)

lbl_8043B1A0:
	lbz      r5, 0xf1(r30)
	cmplwi   r5, 0
	bne      lbl_8043B1D0
	lbz      r0, 0xd8(r30)
	stb      r0, 0x74(r30)
	lbz      r0, 0xd9(r30)
	stb      r0, 0x75(r30)
	lbz      r0, 0xda(r30)
	stb      r0, 0x76(r30)
	lbz      r0, 0xdb(r30)
	stb      r0, 0x77(r30)
	b        lbl_8043B234

lbl_8043B1D0:
	lwz      r3, 4(r30)
	cmplwi   r3, 0
	bne      lbl_8043B1E4
	li       r3, 0
	b        lbl_8043B1E8

lbl_8043B1E4:
	lwz      r3, 4(r3)

lbl_8043B1E8:
	lwz      r0, 0x18(r3)
	cmplwi   r0, 0
	beq      lbl_8043B1FC
	addi     r3, r3, 0x18
	b        lbl_8043B200

lbl_8043B1FC:
	li       r3, 0

lbl_8043B200:
	lwz      r3, 4(r3)
	slwi     r0, r5, 2
	add      r3, r3, r0
	lwz      r0, 0xc(r3)
	stw      r0, 0x10(r1)
	lbz      r3, 0x10(r1)
	lbz      r0, 0x11(r1)
	stb      r3, 0x74(r30)
	lbz      r3, 0x12(r1)
	stb      r0, 0x75(r30)
	lbz      r0, 0x13(r1)
	stb      r3, 0x76(r30)
	stb      r0, 0x77(r30)

lbl_8043B234:
	lbz      r5, 0x73(r30)
	lis      r0, 0x4330
	stw      r0, 0x20(r1)
	fmr      f3, f31
	lfd      f2, lbl_805208D8@sda21(r2)
	fmr      f4, f30
	stw      r5, 0x24(r1)
	mr       r3, r30
	lfs      f0, 0x78(r30)
	lfd      f1, 0x20(r1)
	stw      r0, 0x30(r1)
	fsubs    f1, f1, f2
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	stb      r0, 0x73(r30)
	lbz      r0, 0x77(r30)
	lfs      f0, 0x78(r30)
	stw      r0, 0x34(r1)
	lfd      f1, 0x30(r1)
	fsubs    f1, f1, f2
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	stb      r0, 0x77(r30)
	lwz      r12, 0(r30)
	lfs      f5, 0x90(r30)
	lfs      f1, 0x54(r30)
	lfs      f2, 0x94(r30)
	lfs      f0, 0x58(r30)
	fadds    f1, f5, f1
	lwz      r12, 0x74(r12)
	fadds    f2, f2, f0
	mtctr    r12
	bctrl
	cmpwi    r31, 0
	beq      lbl_8043B2D4
	b        lbl_8043B314

lbl_8043B2D4:
	lbz      r3, 0x1c(r1)
	lbz      r0, 0x1d(r1)
	stb      r3, 0x60(r30)
	lbz      r3, 0x1e(r1)
	stb      r0, 0x61(r30)
	lbz      r0, 0x1f(r1)
	stb      r3, 0x62(r30)
	lbz      r3, 0x18(r1)
	stb      r0, 0x63(r30)
	lbz      r0, 0x19(r1)
	stb      r3, 0x5c(r30)
	lbz      r3, 0x1a(r1)
	stb      r0, 0x5d(r30)
	lbz      r0, 0x1b(r1)
	stb      r3, 0x5e(r30)
	stb      r0, 0x5f(r30)

lbl_8043B314:
	lfs      f0, 0x90(r30)
	addi     r4, r1, 0xc
	addi     r5, r1, 8
	fadds    f0, f0, f31
	stfs     f0, 0x90(r30)
	lwz      r3, 0x40(r30)
	addi     r0, r3, 1
	stw      r0, 0x40(r30)
	lwz      r0, 0xd0(r30)
	stw      r0, 8(r1)
	lwz      r0, 0xcc(r30)
	stw      r0, 0xc(r1)
	lwz      r3, 0x4c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	lwz      r29, 0x44(r1)
	lwz      r0, 0x74(r1)
	lwz      r28, 0x40(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001B8
 */
void TRenderingProcessor::calcColorCoe(JUtility::TColor const&, JUtility::TColor*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8043B38C
 * Size:	000440
 */
void TRenderingProcessor::doDrawLetter(float, float, float, float, int, bool)
{
	/*
	stwu     r1, -0xf0(r1)
	mflr     r0
	stw      r0, 0xf4(r1)
	stfd     f31, 0xe0(r1)
	psq_st   f31, 232(r1), 0, qr0
	stfd     f30, 0xd0(r1)
	psq_st   f30, 216(r1), 0, qr0
	stfd     f29, 0xc0(r1)
	psq_st   f29, 200(r1), 0, qr0
	stfd     f28, 0xb0(r1)
	psq_st   f28, 184(r1), 0, qr0
	stw      r31, 0xac(r1)
	stw      r30, 0xa8(r1)
	stw      r29, 0xa4(r1)
	mr       r29, r3
	li       r6, -1
	lbz      r3, 0x64(r3)
	lis      r0, 0x4330
	stw      r0, 0x18(r1)
	fmr      f28, f1
	lfd      f5, lbl_805208D8@sda21(r2)
	fmr      f29, f2
	stw      r3, 0x1c(r1)
	fmr      f30, f3
	lfs      f0, 0x7c(r29)
	lfd      f2, 0x18(r1)
	fmr      f31, f4
	lfs      f1, lbl_805208E4@sda21(r2)
	mr       r30, r4
	fsubs    f2, f2, f5
	stw      r6, 0x14(r1)
	mr       r31, r5
	stw      r6, 0x10(r1)
	fmuls    f0, f2, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8043B420
	fmr      f0, f1

lbl_8043B420:
	lbz      r3, 0x65(r29)
	lis      r0, 0x4330
	stw      r0, 0x20(r1)
	lfd      f4, lbl_805208D8@sda21(r2)
	stw      r3, 0x24(r1)
	lfs      f2, 0x80(r29)
	lfd      f3, 0x20(r1)
	lfs      f1, lbl_805208E4@sda21(r2)
	fsubs    f3, f3, f4
	fmuls    f6, f3, f2
	fcmpo    cr0, f6, f1
	ble      lbl_8043B454
	fmr      f6, f1

lbl_8043B454:
	lbz      r3, 0x66(r29)
	lis      r0, 0x4330
	stw      r0, 0x28(r1)
	lfd      f4, lbl_805208D8@sda21(r2)
	stw      r3, 0x2c(r1)
	lfs      f2, 0x84(r29)
	lfd      f3, 0x28(r1)
	lfs      f1, lbl_805208E4@sda21(r2)
	fsubs    f3, f3, f4
	fmuls    f5, f3, f2
	fcmpo    cr0, f5, f1
	ble      lbl_8043B488
	fmr      f5, f1

lbl_8043B488:
	lbz      r3, 0x67(r29)
	lis      r0, 0x4330
	stw      r0, 0x30(r1)
	lfd      f4, lbl_805208D8@sda21(r2)
	stw      r3, 0x34(r1)
	lfs      f2, 0x88(r29)
	lfd      f3, 0x30(r1)
	lfs      f1, lbl_805208E4@sda21(r2)
	fsubs    f3, f3, f4
	fmuls    f2, f3, f2
	fcmpo    cr0, f2, f1
	ble      lbl_8043B4BC
	fmr      f2, f1

lbl_8043B4BC:
	lfs      f1, lbl_805208C0@sda21(r2)
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_8043B4D8
	lfs      f1, lbl_805208CC@sda21(r2)
	fadds    f1, f1, f2
	b        lbl_8043B4E0

lbl_8043B4D8:
	lfs      f1, lbl_805208CC@sda21(r2)
	fsubs    f1, f2, f1

lbl_8043B4E0:
	fctiwz   f2, f1
	lfs      f1, lbl_805208C0@sda21(r2)
	fcmpo    cr0, f5, f1
	stfd     f2, 0x38(r1)
	lwz      r0, 0x3c(r1)
	clrlwi   r6, r0, 0x18
	cror     2, 1, 2
	bne      lbl_8043B50C
	lfs      f1, lbl_805208CC@sda21(r2)
	fadds    f1, f1, f5
	b        lbl_8043B514

lbl_8043B50C:
	lfs      f1, lbl_805208CC@sda21(r2)
	fsubs    f1, f5, f1

lbl_8043B514:
	fctiwz   f2, f1
	lfs      f1, lbl_805208C0@sda21(r2)
	fcmpo    cr0, f6, f1
	stfd     f2, 0x40(r1)
	lwz      r0, 0x44(r1)
	clrlwi   r5, r0, 0x18
	cror     2, 1, 2
	bne      lbl_8043B540
	lfs      f1, lbl_805208CC@sda21(r2)
	fadds    f1, f1, f6
	b        lbl_8043B548

lbl_8043B540:
	lfs      f1, lbl_805208CC@sda21(r2)
	fsubs    f1, f6, f1

lbl_8043B548:
	fctiwz   f2, f1
	lfs      f1, lbl_805208C0@sda21(r2)
	fcmpo    cr0, f0, f1
	stfd     f2, 0x48(r1)
	lwz      r0, 0x4c(r1)
	clrlwi   r4, r0, 0x18
	cror     2, 1, 2
	bne      lbl_8043B574
	lfs      f1, lbl_805208CC@sda21(r2)
	fadds    f0, f1, f0
	b        lbl_8043B57C

lbl_8043B574:
	lfs      f1, lbl_805208CC@sda21(r2)
	fsubs    f0, f0, f1

lbl_8043B57C:
	lbz      r3, 0x68(r29)
	fctiwz   f3, f0
	lis      r0, 0x4330
	lfd      f2, lbl_805208D8@sda21(r2)
	stw      r0, 0x58(r1)
	lfs      f0, 0x7c(r29)
	stw      r3, 0x5c(r1)
	lfd      f1, 0x58(r1)
	stfd     f3, 0x50(r1)
	fsubs    f2, f1, f2
	lfs      f1, lbl_805208E4@sda21(r2)
	lwz      r0, 0x54(r1)
	stb      r4, 0x15(r1)
	fmuls    f0, f2, f0
	stb      r0, 0x14(r1)
	fcmpo    cr0, f0, f1
	stb      r5, 0x16(r1)
	stb      r6, 0x17(r1)
	ble      lbl_8043B5CC
	fmr      f0, f1

lbl_8043B5CC:
	lbz      r3, 0x69(r29)
	lis      r0, 0x4330
	stw      r0, 0x60(r1)
	lfd      f4, lbl_805208D8@sda21(r2)
	stw      r3, 0x64(r1)
	lfs      f2, 0x80(r29)
	lfd      f3, 0x60(r1)
	lfs      f1, lbl_805208E4@sda21(r2)
	fsubs    f3, f3, f4
	fmuls    f6, f3, f2
	fcmpo    cr0, f6, f1
	ble      lbl_8043B600
	fmr      f6, f1

lbl_8043B600:
	lbz      r3, 0x6a(r29)
	lis      r0, 0x4330
	stw      r0, 0x68(r1)
	lfd      f4, lbl_805208D8@sda21(r2)
	stw      r3, 0x6c(r1)
	lfs      f2, 0x84(r29)
	lfd      f3, 0x68(r1)
	lfs      f1, lbl_805208E4@sda21(r2)
	fsubs    f3, f3, f4
	fmuls    f5, f3, f2
	fcmpo    cr0, f5, f1
	ble      lbl_8043B634
	fmr      f5, f1

lbl_8043B634:
	lbz      r3, 0x6b(r29)
	lis      r0, 0x4330
	stw      r0, 0x70(r1)
	lfd      f4, lbl_805208D8@sda21(r2)
	stw      r3, 0x74(r1)
	lfs      f2, 0x88(r29)
	lfd      f3, 0x70(r1)
	lfs      f1, lbl_805208E4@sda21(r2)
	fsubs    f3, f3, f4
	fmuls    f2, f3, f2
	fcmpo    cr0, f2, f1
	ble      lbl_8043B668
	fmr      f2, f1

lbl_8043B668:
	lfs      f1, lbl_805208C0@sda21(r2)
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_8043B684
	lfs      f1, lbl_805208CC@sda21(r2)
	fadds    f1, f1, f2
	b        lbl_8043B68C

lbl_8043B684:
	lfs      f1, lbl_805208CC@sda21(r2)
	fsubs    f1, f2, f1

lbl_8043B68C:
	fctiwz   f2, f1
	lfs      f1, lbl_805208C0@sda21(r2)
	fcmpo    cr0, f5, f1
	stfd     f2, 0x78(r1)
	lwz      r0, 0x7c(r1)
	clrlwi   r7, r0, 0x18
	cror     2, 1, 2
	bne      lbl_8043B6B8
	lfs      f1, lbl_805208CC@sda21(r2)
	fadds    f1, f1, f5
	b        lbl_8043B6C0

lbl_8043B6B8:
	lfs      f1, lbl_805208CC@sda21(r2)
	fsubs    f1, f5, f1

lbl_8043B6C0:
	fctiwz   f2, f1
	lfs      f1, lbl_805208C0@sda21(r2)
	fcmpo    cr0, f6, f1
	stfd     f2, 0x80(r1)
	lwz      r0, 0x84(r1)
	clrlwi   r6, r0, 0x18
	cror     2, 1, 2
	bne      lbl_8043B6EC
	lfs      f1, lbl_805208CC@sda21(r2)
	fadds    f1, f1, f6
	b        lbl_8043B6F4

lbl_8043B6EC:
	lfs      f1, lbl_805208CC@sda21(r2)
	fsubs    f1, f6, f1

lbl_8043B6F4:
	fctiwz   f2, f1
	lfs      f1, lbl_805208C0@sda21(r2)
	fcmpo    cr0, f0, f1
	stfd     f2, 0x88(r1)
	lwz      r0, 0x8c(r1)
	clrlwi   r3, r0, 0x18
	cror     2, 1, 2
	bne      lbl_8043B720
	lfs      f1, lbl_805208CC@sda21(r2)
	fadds    f0, f1, f0
	b        lbl_8043B728

lbl_8043B720:
	lfs      f1, lbl_805208CC@sda21(r2)
	fsubs    f0, f0, f1

lbl_8043B728:
	fctiwz   f0, f0
	lwz      r0, 0x14(r1)
	stb      r3, 0x11(r1)
	addi     r4, r1, 0xc
	addi     r5, r1, 8
	stfd     f0, 0x90(r1)
	lwz      r3, 0x94(r1)
	stb      r6, 0x12(r1)
	stb      r3, 0x10(r1)
	stb      r7, 0x13(r1)
	lwz      r3, 0x10(r1)
	stw      r0, 0xc(r1)
	stw      r3, 8(r1)
	lwz      r3, 0x4c(r29)
	bl       setGradColor__7JUTFontFQ28JUtility6TColorQ28JUtility6TColor
	lwz      r3, 0x4c(r29)
	fmr      f1, f28
	fmr      f2, f29
	mr       r4, r30
	lwz      r12, 0(r3)
	fmr      f3, f30
	fmr      f4, f31
	lwz      r12, 0x14(r12)
	mr       r5, r31
	mtctr    r12
	bctrl
	psq_l    f31, 232(r1), 0, qr0
	lfd      f31, 0xe0(r1)
	psq_l    f30, 216(r1), 0, qr0
	lfd      f30, 0xd0(r1)
	psq_l    f29, 200(r1), 0, qr0
	lfd      f29, 0xc0(r1)
	psq_l    f28, 184(r1), 0, qr0
	lfd      f28, 0xb0(r1)
	lwz      r31, 0xac(r1)
	lwz      r30, 0xa8(r1)
	lwz      r0, 0xf4(r1)
	lwz      r29, 0xa4(r1)
	mtlr     r0
	addi     r1, r1, 0xf0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043B7CC
 * Size:	00029C
 */
void TRenderingProcessor::doDrawRuby(float, float, float, float, int, bool)
{
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
	stw      r31, 0x6c(r1)
	stw      r30, 0x68(r1)
	stw      r29, 0x64(r1)
	mr       r29, r3
	lis      r0, 0x4330
	lfs      f5, lbl_805208E4@sda21(r2)
	li       r3, -1
	lfs      f0, 0x78(r29)
	fmr      f28, f1
	stw      r0, 0x18(r1)
	fmr      f29, f2
	fmuls    f0, f5, f0
	lfd      f2, lbl_805208D8@sda21(r2)
	fmr      f30, f3
	fmr      f31, f4
	stw      r3, 0xc(r1)
	fctiwz   f0, f0
	mr       r30, r4
	mr       r31, r5
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	stb      r0, 0x6f(r29)
	lbz      r0, 0x6c(r29)
	lfs      f0, 0x7c(r29)
	stw      r0, 0x1c(r1)
	lfd      f1, 0x18(r1)
	fsubs    f1, f1, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f0, f5
	ble      lbl_8043B874
	fmr      f0, f5

lbl_8043B874:
	lbz      r3, 0x6d(r29)
	lis      r0, 0x4330
	stw      r0, 0x20(r1)
	lfd      f4, lbl_805208D8@sda21(r2)
	stw      r3, 0x24(r1)
	lfs      f2, 0x80(r29)
	lfd      f3, 0x20(r1)
	lfs      f1, lbl_805208E4@sda21(r2)
	fsubs    f3, f3, f4
	fmuls    f6, f3, f2
	fcmpo    cr0, f6, f1
	ble      lbl_8043B8A8
	fmr      f6, f1

lbl_8043B8A8:
	lbz      r3, 0x6e(r29)
	lis      r0, 0x4330
	stw      r0, 0x28(r1)
	lfd      f4, lbl_805208D8@sda21(r2)
	stw      r3, 0x2c(r1)
	lfs      f2, 0x84(r29)
	lfd      f3, 0x28(r1)
	lfs      f1, lbl_805208E4@sda21(r2)
	fsubs    f3, f3, f4
	fmuls    f5, f3, f2
	fcmpo    cr0, f5, f1
	ble      lbl_8043B8DC
	fmr      f5, f1

lbl_8043B8DC:
	lbz      r3, 0x6f(r29)
	lis      r0, 0x4330
	stw      r0, 0x30(r1)
	lfd      f4, lbl_805208D8@sda21(r2)
	stw      r3, 0x34(r1)
	lfs      f2, 0x88(r29)
	lfd      f3, 0x30(r1)
	lfs      f1, lbl_805208E4@sda21(r2)
	fsubs    f3, f3, f4
	fmuls    f2, f3, f2
	fcmpo    cr0, f2, f1
	ble      lbl_8043B910
	fmr      f2, f1

lbl_8043B910:
	lfs      f1, lbl_805208C0@sda21(r2)
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_8043B92C
	lfs      f1, lbl_805208CC@sda21(r2)
	fadds    f1, f1, f2
	b        lbl_8043B934

lbl_8043B92C:
	lfs      f1, lbl_805208CC@sda21(r2)
	fsubs    f1, f2, f1

lbl_8043B934:
	fctiwz   f2, f1
	lfs      f1, lbl_805208C0@sda21(r2)
	fcmpo    cr0, f5, f1
	stfd     f2, 0x38(r1)
	lwz      r0, 0x3c(r1)
	clrlwi   r5, r0, 0x18
	cror     2, 1, 2
	bne      lbl_8043B960
	lfs      f1, lbl_805208CC@sda21(r2)
	fadds    f1, f1, f5
	b        lbl_8043B968

lbl_8043B960:
	lfs      f1, lbl_805208CC@sda21(r2)
	fsubs    f1, f5, f1

lbl_8043B968:
	fctiwz   f2, f1
	lfs      f1, lbl_805208C0@sda21(r2)
	fcmpo    cr0, f6, f1
	stfd     f2, 0x40(r1)
	lwz      r0, 0x44(r1)
	clrlwi   r3, r0, 0x18
	cror     2, 1, 2
	bne      lbl_8043B994
	lfs      f1, lbl_805208CC@sda21(r2)
	fadds    f1, f1, f6
	b        lbl_8043B99C

lbl_8043B994:
	lfs      f1, lbl_805208CC@sda21(r2)
	fsubs    f1, f6, f1

lbl_8043B99C:
	fctiwz   f2, f1
	lfs      f1, lbl_805208C0@sda21(r2)
	fcmpo    cr0, f0, f1
	stfd     f2, 0x48(r1)
	lwz      r0, 0x4c(r1)
	clrlwi   r0, r0, 0x18
	cror     2, 1, 2
	bne      lbl_8043B9C8
	lfs      f1, lbl_805208CC@sda21(r2)
	fadds    f0, f1, f0
	b        lbl_8043B9D0

lbl_8043B9C8:
	lfs      f1, lbl_805208CC@sda21(r2)
	fsubs    f0, f0, f1

lbl_8043B9D0:
	fctiwz   f0, f0
	stb      r0, 0xd(r1)
	addi     r4, r1, 8
	stb      r3, 0xe(r1)
	stfd     f0, 0x50(r1)
	lwz      r0, 0x54(r1)
	stb      r5, 0xf(r1)
	stb      r0, 0xc(r1)
	lwz      r0, 0xc(r1)
	stw      r0, 8(r1)
	lwz      r3, 0x50(r29)
	bl       setCharColor__7JUTFontFQ28JUtility6TColor
	lwz      r3, 0x50(r29)
	fmr      f1, f28
	fmr      f2, f29
	mr       r4, r30
	lwz      r12, 0(r3)
	fmr      f3, f30
	fmr      f4, f31
	lwz      r12, 0x14(r12)
	mr       r5, r31
	mtctr    r12
	bctrl
	psq_l    f31, 168(r1), 0, qr0
	lfd      f31, 0xa0(r1)
	psq_l    f30, 152(r1), 0, qr0
	lfd      f30, 0x90(r1)
	psq_l    f29, 136(r1), 0, qr0
	lfd      f29, 0x80(r1)
	psq_l    f28, 120(r1), 0, qr0
	lfd      f28, 0x70(r1)
	lwz      r31, 0x6c(r1)
	lwz      r30, 0x68(r1)
	lwz      r0, 0xb4(r1)
	lwz      r29, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043BA68
 * Size:	000074
 */
void TRenderingProcessor::doDrawImage(JUTTexture*, float, float, float, float)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	addi     r11, r1, 0x30
	bl       _savefpr_28
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	fmr      f28, f1
	mr       r30, r3
	fmr      f29, f2
	mr       r31, r4
	fmr      f30, f3
	fmr      f31, f4
	bl       setImageGX__Q25P2JME19TRenderingProcessorFv
	fmr      f1, f28
	mr       r3, r30
	fmr      f2, f29
	mr       r4, r31
	fmr      f3, f30
	fmr      f4, f31
	bl       drawImage__Q25P2JME19TRenderingProcessorFP10JUTTextureffff
	addi     r11, r1, 0x30
	bl       _restfpr_28
	lwz      r0, 0x34(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043BADC
 * Size:	000334
 */
void TRenderingProcessor::setImageGX(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r0, 0x5c(r3)
	cmplwi   r0, 0
	bne      lbl_8043BC20
	lwz      r3, 0x60(r31)
	addis    r0, r3, 1
	cmplwi   r0, 0xffff
	bne      lbl_8043BC20
	li       r3, 1
	bl       GXSetNumChans
	li       r3, 4
	li       r4, 0
	li       r5, 1
	li       r6, 1
	li       r7, 1
	li       r8, 2
	li       r9, 2
	bl       GXSetChanCtrl
	bl       GXClearVtxDesc
	li       r3, 1
	bl       GXSetNumTevStages
	li       r3, 0
	li       r4, 0
	li       r5, 0
	li       r6, 4
	bl       GXSetTevOrder
	li       r3, 0
	li       r4, 0
	bl       GXSetTevOp
	li       r3, 1
	bl       GXSetNumTexGens
	li       r3, 0
	li       r4, 1
	li       r5, 4
	li       r6, 0x3c
	li       r7, 0
	li       r8, 0x7d
	bl       GXSetTexCoordGen2
	li       r3, 9
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0xb
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0xd
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0
	li       r4, 9
	li       r5, 1
	li       r6, 4
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
	li       r6, 1
	li       r7, 4
	bl       GXSetVtxAttrFmt
	li       r3, 2
	bl       GXSetCullMode
	li       r3, 0
	li       r4, 0
	li       r5, 0
	bl       GXSetZMode
	li       r3, 1
	li       r4, 4
	li       r5, 5
	li       r6, 0
	bl       GXSetBlendMode
	b        lbl_8043BDFC

lbl_8043BC20:
	li       r3, 1
	bl       GXSetNumChans
	li       r3, 2
	bl       GXSetNumTevStages
	li       r3, 1
	bl       GXSetNumTexGens
	li       r3, 0
	li       r4, 0
	li       r5, 0
	li       r6, 0xff
	bl       GXSetTevOrder
	li       r3, 4
	li       r4, 0
	li       r5, 0
	li       r6, 1
	li       r7, 0
	li       r8, 0
	li       r9, 2
	bl       GXSetChanCtrl
	lwz      r0, 0x5c(r31)
	addi     r4, r1, 0xc
	li       r3, 1
	stw      r0, 0xc(r1)
	bl       GXSetTevColor
	lwz      r0, 0x60(r31)
	addi     r4, r1, 8
	li       r3, 2
	stw      r0, 8(r1)
	bl       GXSetTevColor
	li       r3, 0
	li       r4, 2
	li       r5, 4
	li       r6, 8
	li       r7, 0xf
	bl       GXSetTevColorIn
	li       r3, 0
	li       r4, 1
	li       r5, 2
	li       r6, 4
	li       r7, 7
	bl       GXSetTevAlphaIn
	li       r3, 0
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 1
	li       r8, 0
	bl       GXSetTevColorOp
	li       r3, 0
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 1
	li       r8, 0
	bl       GXSetTevAlphaOp
	li       r3, 1
	li       r4, 0xff
	li       r5, 0xff
	li       r6, 4
	bl       GXSetTevOrder
	li       r3, 1
	li       r4, 0xf
	li       r5, 0
	li       r6, 0xa
	li       r7, 0xf
	bl       GXSetTevColorIn
	li       r3, 1
	li       r4, 7
	li       r5, 0
	li       r6, 5
	li       r7, 7
	bl       GXSetTevAlphaIn
	li       r3, 1
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 1
	li       r8, 0
	bl       GXSetTevColorOp
	li       r3, 1
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 1
	li       r8, 0
	bl       GXSetTevAlphaOp
	li       r3, 1
	li       r4, 4
	li       r5, 5
	li       r6, 0xf
	bl       GXSetBlendMode
	li       r3, 0
	li       r4, 9
	li       r5, 1
	li       r6, 4
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
	li       r6, 1
	li       r7, 4
	bl       GXSetVtxAttrFmt
	bl       GXClearVtxDesc
	li       r3, 9
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0xb
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0xd
	li       r4, 1
	bl       GXSetVtxDesc

lbl_8043BDFC:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043BE10
 * Size:	0004F4
 */
void TRenderingProcessor::drawImage(JUTTexture*, float, float, float, float)
{
	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stfd     f31, 0xd0(r1)
	psq_st   f31, 216(r1), 0, qr0
	stfd     f30, 0xc0(r1)
	psq_st   f30, 200(r1), 0, qr0
	stfd     f29, 0xb0(r1)
	psq_st   f29, 184(r1), 0, qr0
	stfd     f28, 0xa0(r1)
	psq_st   f28, 168(r1), 0, qr0
	stw      r31, 0x9c(r1)
	fmr      f28, f1
	mr       r31, r3
	fmr      f29, f2
	mr       r3, r4
	fmr      f31, f3
	li       r4, 0
	fmr      f30, f4
	bl       load__10JUTTextureF11_GXTexMapID
	lwz      r3, 0x4c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x70(r31)
	lis      r4, 0x4330
	xoris    r5, r3, 0x8000
	li       r3, -1
	stw      r5, 0x14(r1)
	fadds    f31, f28, f31
	lfd      f1, lbl_805208D0@sda21(r2)
	stw      r4, 0x10(r1)
	lfd      f3, lbl_805208D8@sda21(r2)
	lfd      f0, 0x10(r1)
	stw      r0, 0x1c(r1)
	fsubs    f4, f0, f1
	lfs      f1, 0xe4(r31)
	stw      r4, 0x18(r1)
	lfs      f0, 0x7c(r31)
	lfd      f2, 0x18(r1)
	fmadds   f29, f1, f4, f29
	lfs      f1, lbl_805208E4@sda21(r2)
	fsubs    f2, f2, f3
	stw      r3, 0xc(r1)
	fsubs    f30, f29, f30
	stw      r3, 8(r1)
	fmuls    f0, f2, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8043BEDC
	fmr      f0, f1

lbl_8043BEDC:
	lbz      r3, 0x71(r31)
	lis      r0, 0x4330
	stw      r0, 0x20(r1)
	lfd      f4, lbl_805208D8@sda21(r2)
	stw      r3, 0x24(r1)
	lfs      f2, 0x80(r31)
	lfd      f3, 0x20(r1)
	lfs      f1, lbl_805208E4@sda21(r2)
	fsubs    f3, f3, f4
	fmuls    f6, f3, f2
	fcmpo    cr0, f6, f1
	ble      lbl_8043BF10
	fmr      f6, f1

lbl_8043BF10:
	lbz      r3, 0x72(r31)
	lis      r0, 0x4330
	stw      r0, 0x28(r1)
	lfd      f4, lbl_805208D8@sda21(r2)
	stw      r3, 0x2c(r1)
	lfs      f2, 0x84(r31)
	lfd      f3, 0x28(r1)
	lfs      f1, lbl_805208E4@sda21(r2)
	fsubs    f3, f3, f4
	fmuls    f5, f3, f2
	fcmpo    cr0, f5, f1
	ble      lbl_8043BF44
	fmr      f5, f1

lbl_8043BF44:
	lbz      r3, 0x73(r31)
	lis      r0, 0x4330
	stw      r0, 0x30(r1)
	lfd      f4, lbl_805208D8@sda21(r2)
	stw      r3, 0x34(r1)
	lfs      f2, 0x88(r31)
	lfd      f3, 0x30(r1)
	lfs      f1, lbl_805208E4@sda21(r2)
	fsubs    f3, f3, f4
	fmuls    f2, f3, f2
	fcmpo    cr0, f2, f1
	ble      lbl_8043BF78
	fmr      f2, f1

lbl_8043BF78:
	lfs      f1, lbl_805208C0@sda21(r2)
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_8043BF94
	lfs      f1, lbl_805208CC@sda21(r2)
	fadds    f1, f1, f2
	b        lbl_8043BF9C

lbl_8043BF94:
	lfs      f1, lbl_805208CC@sda21(r2)
	fsubs    f1, f2, f1

lbl_8043BF9C:
	fctiwz   f2, f1
	lfs      f1, lbl_805208C0@sda21(r2)
	fcmpo    cr0, f5, f1
	stfd     f2, 0x38(r1)
	lwz      r0, 0x3c(r1)
	clrlwi   r6, r0, 0x18
	cror     2, 1, 2
	bne      lbl_8043BFC8
	lfs      f1, lbl_805208CC@sda21(r2)
	fadds    f1, f1, f5
	b        lbl_8043BFD0

lbl_8043BFC8:
	lfs      f1, lbl_805208CC@sda21(r2)
	fsubs    f1, f5, f1

lbl_8043BFD0:
	fctiwz   f2, f1
	lfs      f1, lbl_805208C0@sda21(r2)
	fcmpo    cr0, f6, f1
	stfd     f2, 0x40(r1)
	lwz      r0, 0x44(r1)
	clrlwi   r5, r0, 0x18
	cror     2, 1, 2
	bne      lbl_8043BFFC
	lfs      f1, lbl_805208CC@sda21(r2)
	fadds    f1, f1, f6
	b        lbl_8043C004

lbl_8043BFFC:
	lfs      f1, lbl_805208CC@sda21(r2)
	fsubs    f1, f6, f1

lbl_8043C004:
	fctiwz   f2, f1
	lfs      f1, lbl_805208C0@sda21(r2)
	fcmpo    cr0, f0, f1
	stfd     f2, 0x48(r1)
	lwz      r0, 0x4c(r1)
	clrlwi   r4, r0, 0x18
	cror     2, 1, 2
	bne      lbl_8043C030
	lfs      f1, lbl_805208CC@sda21(r2)
	fadds    f0, f1, f0
	b        lbl_8043C038

lbl_8043C030:
	lfs      f1, lbl_805208CC@sda21(r2)
	fsubs    f0, f0, f1

lbl_8043C038:
	lbz      r3, 0x74(r31)
	fctiwz   f3, f0
	lis      r0, 0x4330
	lfd      f2, lbl_805208D8@sda21(r2)
	stw      r0, 0x58(r1)
	lfs      f0, 0x7c(r31)
	stw      r3, 0x5c(r1)
	lfd      f1, 0x58(r1)
	stfd     f3, 0x50(r1)
	fsubs    f2, f1, f2
	lfs      f1, lbl_805208E4@sda21(r2)
	lwz      r0, 0x54(r1)
	stb      r4, 0xd(r1)
	fmuls    f0, f2, f0
	stb      r0, 0xc(r1)
	fcmpo    cr0, f0, f1
	stb      r5, 0xe(r1)
	stb      r6, 0xf(r1)
	ble      lbl_8043C088
	fmr      f0, f1

lbl_8043C088:
	lbz      r3, 0x75(r31)
	lis      r0, 0x4330
	stw      r0, 0x60(r1)
	lfd      f4, lbl_805208D8@sda21(r2)
	stw      r3, 0x64(r1)
	lfs      f2, 0x80(r31)
	lfd      f3, 0x60(r1)
	lfs      f1, lbl_805208E4@sda21(r2)
	fsubs    f3, f3, f4
	fmuls    f6, f3, f2
	fcmpo    cr0, f6, f1
	ble      lbl_8043C0BC
	fmr      f6, f1

lbl_8043C0BC:
	lbz      r3, 0x76(r31)
	lis      r0, 0x4330
	stw      r0, 0x68(r1)
	lfd      f4, lbl_805208D8@sda21(r2)
	stw      r3, 0x6c(r1)
	lfs      f2, 0x84(r31)
	lfd      f3, 0x68(r1)
	lfs      f1, lbl_805208E4@sda21(r2)
	fsubs    f3, f3, f4
	fmuls    f5, f3, f2
	fcmpo    cr0, f5, f1
	ble      lbl_8043C0F0
	fmr      f5, f1

lbl_8043C0F0:
	lbz      r3, 0x77(r31)
	lis      r0, 0x4330
	stw      r0, 0x70(r1)
	lfd      f4, lbl_805208D8@sda21(r2)
	stw      r3, 0x74(r1)
	lfs      f2, 0x88(r31)
	lfd      f3, 0x70(r1)
	lfs      f1, lbl_805208E4@sda21(r2)
	fsubs    f3, f3, f4
	fmuls    f2, f3, f2
	fcmpo    cr0, f2, f1
	ble      lbl_8043C124
	fmr      f2, f1

lbl_8043C124:
	lfs      f1, lbl_805208C0@sda21(r2)
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_8043C140
	lfs      f1, lbl_805208CC@sda21(r2)
	fadds    f1, f1, f2
	b        lbl_8043C148

lbl_8043C140:
	lfs      f1, lbl_805208CC@sda21(r2)
	fsubs    f1, f2, f1

lbl_8043C148:
	fctiwz   f2, f1
	lfs      f1, lbl_805208C0@sda21(r2)
	fcmpo    cr0, f5, f1
	stfd     f2, 0x78(r1)
	lwz      r0, 0x7c(r1)
	clrlwi   r6, r0, 0x18
	cror     2, 1, 2
	bne      lbl_8043C174
	lfs      f1, lbl_805208CC@sda21(r2)
	fadds    f1, f1, f5
	b        lbl_8043C17C

lbl_8043C174:
	lfs      f1, lbl_805208CC@sda21(r2)
	fsubs    f1, f5, f1

lbl_8043C17C:
	fctiwz   f2, f1
	lfs      f1, lbl_805208C0@sda21(r2)
	fcmpo    cr0, f6, f1
	stfd     f2, 0x80(r1)
	lwz      r0, 0x84(r1)
	clrlwi   r5, r0, 0x18
	cror     2, 1, 2
	bne      lbl_8043C1A8
	lfs      f1, lbl_805208CC@sda21(r2)
	fadds    f1, f1, f6
	b        lbl_8043C1B0

lbl_8043C1A8:
	lfs      f1, lbl_805208CC@sda21(r2)
	fsubs    f1, f6, f1

lbl_8043C1B0:
	fctiwz   f2, f1
	lfs      f1, lbl_805208C0@sda21(r2)
	fcmpo    cr0, f0, f1
	stfd     f2, 0x88(r1)
	lwz      r0, 0x8c(r1)
	clrlwi   r0, r0, 0x18
	cror     2, 1, 2
	bne      lbl_8043C1DC
	lfs      f1, lbl_805208CC@sda21(r2)
	fadds    f0, f1, f0
	b        lbl_8043C1E4

lbl_8043C1DC:
	lfs      f1, lbl_805208CC@sda21(r2)
	fsubs    f0, f0, f1

lbl_8043C1E4:
	fctiwz   f0, f0
	stb      r5, 0xa(r1)
	li       r3, 0x80
	li       r4, 0
	stb      r0, 9(r1)
	li       r5, 4
	stfd     f0, 0x90(r1)
	lwz      r0, 0x94(r1)
	stb      r6, 0xb(r1)
	stb      r0, 8(r1)
	bl       GXBegin
	lis      r12, 0xCC008000@ha
	lfs      f0, lbl_805208C0@sda21(r2)
	stfs     f28, 0xCC008000@l(r12)
	li       r7, 0
	lbz      r11, 8(r1)
	li       r6, 0x10
	stfs     f29, -0x8000(r12)
	lbz      r10, 9(r1)
	stfs     f0, -0x8000(r12)
	lbz      r9, 0xa(r1)
	stb      r11, -0x8000(r12)
	lbz      r8, 0xb(r1)
	stb      r10, -0x8000(r12)
	lbz      r5, 0xc(r1)
	stb      r9, -0x8000(r12)
	lbz      r4, 0xd(r1)
	stb      r8, -0x8000(r12)
	lbz      r3, 0xe(r1)
	stb      r7, -0x8000(r12)
	lbz      r0, 0xf(r1)
	stb      r6, -0x8000(r12)
	stfs     f28, -0x8000(r12)
	stfs     f30, -0x8000(r12)
	stfs     f0, -0x8000(r12)
	stb      r5, -0x8000(r12)
	stb      r4, -0x8000(r12)
	stb      r3, -0x8000(r12)
	stb      r0, -0x8000(r12)
	stb      r7, -0x8000(r12)
	stb      r7, -0x8000(r12)
	stfs     f31, -0x8000(r12)
	stfs     f30, -0x8000(r12)
	stfs     f0, -0x8000(r12)
	stb      r5, -0x8000(r12)
	stb      r4, -0x8000(r12)
	stb      r3, -0x8000(r12)
	stb      r0, -0x8000(r12)
	stb      r6, -0x8000(r12)
	stb      r7, -0x8000(r12)
	stfs     f31, -0x8000(r12)
	stfs     f29, -0x8000(r12)
	stfs     f0, -0x8000(r12)
	stb      r11, -0x8000(r12)
	stb      r10, -0x8000(r12)
	stb      r9, -0x8000(r12)
	stb      r8, -0x8000(r12)
	stb      r6, -0x8000(r12)
	stb      r6, -0x8000(r12)
	psq_l    f31, 216(r1), 0, qr0
	lfd      f31, 0xd0(r1)
	psq_l    f30, 200(r1), 0, qr0
	lfd      f30, 0xc0(r1)
	psq_l    f29, 184(r1), 0, qr0
	lfd      f29, 0xb0(r1)
	psq_l    f28, 168(r1), 0, qr0
	lfd      f28, 0xa0(r1)
	lwz      r0, 0xe4(r1)
	lwz      r31, 0x9c(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043C304
 * Size:	000010
 */
void TRenderingProcessor::reset(void)
{
	/*
	lfs      f0, lbl_805208C0@sda21(r2)
	stfs     f0, 0x54(r3)
	stfs     f0, 0x58(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043C314
 * Size:	000128
 */
void TRenderingProcessor::calcWidth(JUTFont*, int, float, bool)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	mr       r29, r4
	fmr      f31, f1
	mr       r3, r29
	mr       r30, r5
	lwz      r12, 0(r29)
	mr       r31, r6
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	xoris    r0, r3, 0x8000
	lis      r3, 0x4330
	stw      r0, 0x14(r1)
	lbz      r0, 5(r29)
	stw      r3, 0x10(r1)
	lfd      f1, lbl_805208D0@sda21(r2)
	cmplwi   r0, 0
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f1
	fdivs    f31, f31, f0
	beq      lbl_8043C3A4
	lwz      r0, 8(r29)
	stw      r3, 0x10(r1)
	xoris    r0, r0, 0x8000
	stw      r0, 0x14(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f1
	fmuls    f1, f31, f0
	b        lbl_8043C418

lbl_8043C3A4:
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	addi     r5, r1, 8
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r31, 0x18
	bne      lbl_8043C3F8
	lbz      r4, 9(r1)
	lis      r0, 0x4330
	lbz      r3, 8(r1)
	stw      r0, 0x10(r1)
	add      r0, r4, r3
	lfd      f1, lbl_805208D0@sda21(r2)
	xoris    r0, r0, 0x8000
	stw      r0, 0x14(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f1
	fmuls    f1, f31, f0
	b        lbl_8043C418

lbl_8043C3F8:
	lbz      r3, 9(r1)
	lis      r0, 0x4330
	stw      r0, 0x10(r1)
	lfd      f1, lbl_805208D8@sda21(r2)
	stw      r3, 0x14(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f1
	fmuls    f1, f0, f31

lbl_8043C418:
	psq_l    f31, 56(r1), 0, qr0
	lwz      r0, 0x44(r1)
	lfd      f31, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043C43C
 * Size:	000024
 */
void TRenderingProcessor::setLineWidth(void)
{
	/*
	lwz      r0, 0x8c(r3)
	clrlwi.  r0, r0, 0x1f
	beqlr
	lbz      r0, 0xa4(r3)
	lfs      f0, 0x90(r3)
	lwz      r3, 0xa8(r3)
	slwi     r0, r0, 2
	stfsx    f0, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043C460
 * Size:	0000D8
 */
void TRenderingProcessor::resetLineWidth(void)
{
	/*
	li       r0, 4
	lfs      f0, lbl_805208C0@sda21(r2)
	li       r11, 0
	mtctr    r0

lbl_8043C470:
	lwz      r4, 0xa8(r3)
	addi     r10, r11, 4
	addi     r9, r11, 8
	addi     r8, r11, 0xc
	stfsx    f0, r4, r11
	addi     r7, r11, 0x10
	addi     r6, r11, 0x14
	addi     r5, r11, 0x18
	lwz      r4, 0xa8(r3)
	addi     r0, r11, 0x1c
	stfsx    f0, r4, r10
	addi     r10, r11, 0x24
	lwz      r4, 0xa8(r3)
	stfsx    f0, r4, r9
	addi     r9, r11, 0x28
	lwz      r4, 0xa8(r3)
	stfsx    f0, r4, r8
	addi     r8, r11, 0x2c
	lwz      r4, 0xa8(r3)
	stfsx    f0, r4, r7
	addi     r7, r11, 0x30
	lwz      r4, 0xa8(r3)
	stfsx    f0, r4, r6
	addi     r6, r11, 0x34
	lwz      r4, 0xa8(r3)
	stfsx    f0, r4, r5
	addi     r5, r11, 0x38
	lwz      r4, 0xa8(r3)
	stfsx    f0, r4, r0
	addi     r0, r11, 0x3c
	addi     r11, r11, 0x20
	lwz      r4, 0xa8(r3)
	stfsx    f0, r4, r11
	addi     r11, r11, 0x20
	lwz      r4, 0xa8(r3)
	stfsx    f0, r4, r10
	lwz      r4, 0xa8(r3)
	stfsx    f0, r4, r9
	lwz      r4, 0xa8(r3)
	stfsx    f0, r4, r8
	lwz      r4, 0xa8(r3)
	stfsx    f0, r4, r7
	lwz      r4, 0xa8(r3)
	stfsx    f0, r4, r6
	lwz      r4, 0xa8(r3)
	stfsx    f0, r4, r5
	lwz      r4, 0xa8(r3)
	stfsx    f0, r4, r0
	bdnz     lbl_8043C470
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043C538
 * Size:	000040
 */
void TRenderingProcessor::setOnePageLine(void)
{
	/*
	lwz      r0, 0x8c(r3)
	clrlwi.  r0, r0, 0x1f
	beqlr
	li       r5, 0
	b        lbl_8043C568

lbl_8043C54C:
	lwz      r4, 0xac(r3)
	lbzx     r0, r4, r5
	cmplwi   r0, 0
	bne      lbl_8043C564
	lbz      r0, 0xa5(r3)
	stbx     r0, r4, r5

lbl_8043C564:
	addi     r5, r5, 1

lbl_8043C568:
	lbz      r0, 0xa4(r3)
	cmpw     r5, r0
	blt      lbl_8043C54C
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043C578
 * Size:	0000D8
 */
void TRenderingProcessor::resetOnePageLine(void)
{
	/*
	li       r0, 4
	li       r12, 0
	mtctr    r0

lbl_8043C584:
	lwz      r4, 0xac(r3)
	li       r11, 0
	addi     r10, r12, 1
	addi     r9, r12, 2
	stbx     r11, r4, r12
	addi     r8, r12, 3
	addi     r7, r12, 4
	addi     r6, r12, 5
	lwz      r4, 0xac(r3)
	addi     r5, r12, 6
	addi     r0, r12, 7
	stbx     r11, r4, r10
	addi     r10, r12, 9
	lwz      r4, 0xac(r3)
	stbx     r11, r4, r9
	addi     r9, r12, 0xa
	lwz      r4, 0xac(r3)
	stbx     r11, r4, r8
	addi     r8, r12, 0xb
	lwz      r4, 0xac(r3)
	stbx     r11, r4, r7
	addi     r7, r12, 0xc
	lwz      r4, 0xac(r3)
	stbx     r11, r4, r6
	addi     r6, r12, 0xd
	lwz      r4, 0xac(r3)
	stbx     r11, r4, r5
	addi     r5, r12, 0xe
	lwz      r4, 0xac(r3)
	stbx     r11, r4, r0
	addi     r0, r12, 0xf
	addi     r12, r12, 8
	lwz      r4, 0xac(r3)
	stbx     r11, r4, r12
	addi     r12, r12, 8
	lwz      r4, 0xac(r3)
	stbx     r11, r4, r10
	lwz      r4, 0xac(r3)
	stbx     r11, r4, r9
	lwz      r4, 0xac(r3)
	stbx     r11, r4, r8
	lwz      r4, 0xac(r3)
	stbx     r11, r4, r7
	lwz      r4, 0xac(r3)
	stbx     r11, r4, r6
	lwz      r4, 0xac(r3)
	stbx     r11, r4, r5
	lwz      r4, 0xac(r3)
	stbx     r11, r4, r0
	bdnz     lbl_8043C584
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void TRenderingProcessor::resetPageInfo(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8043C650
 * Size:	00008C
 */
void TRenderingProcessor::setPageInfo(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lbz      r0, 0xa6(r3)
	cmplwi   r0, 0xa
	blt      lbl_8043C68C
	lis      r3, lbl_8049ABE8@ha
	lis      r5, lbl_8049AC00@ha
	addi     r3, r3, lbl_8049ABE8@l
	li       r4, 0x625
	addi     r5, r5, lbl_8049AC00@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8043C68C:
	lbz      r0, 0xa6(r31)
	lbz      r4, 0xa4(r31)
	lwz      r3, 0xb0(r31)
	slwi     r0, r0, 1
	addi     r4, r4, -1
	add      r3, r3, r0
	stb      r4, 1(r3)
	lbz      r0, 0xa6(r31)
	cmplwi   r0, 9
	bge      lbl_8043C6C8
	lwz      r3, 0xb0(r31)
	rlwinm   r0, r0, 1, 0x17, 0x1e
	lbz      r4, 0xa4(r31)
	add      r3, r3, r0
	stb      r4, 2(r3)

lbl_8043C6C8:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043C6DC
 * Size:	000020
 */
void TRenderingProcessor::preProcCode(unsigned int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       preProcCenteringCode__Q25P2JME19TRenderingProcessorFUi
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043C6FC
 * Size:	000020
 */
void TRenderingProcessor::preProcID(unsigned int, unsigned int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       preProcCenteringID__Q25P2JME19TRenderingProcessorFUiUi
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000260
 */
void TRenderingProcessor::preProcCenteringPre(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00011C
 */
void TRenderingProcessor::preProcCenteringPost(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8043C71C
 * Size:	00039C
 */
void TRenderingProcessor::preProcCenteringCode(unsigned int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r10, 0
	lfs      f0, lbl_805208C0@sda21(r2)
	stw      r0, 0x14(r1)
	li       r0, 4
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x8c(r3)
	ori      r3, r3, 1
	stw      r3, 0x8c(r30)
	stb      r10, 0xa4(r30)
	mtctr    r0

lbl_8043C758:
	lwz      r3, 0xa8(r30)
	addi     r9, r10, 4
	addi     r8, r10, 8
	addi     r7, r10, 0xc
	stfsx    f0, r3, r10
	addi     r6, r10, 0x10
	addi     r5, r10, 0x14
	addi     r4, r10, 0x18
	lwz      r3, 0xa8(r30)
	addi     r0, r10, 0x1c
	stfsx    f0, r3, r9
	addi     r9, r10, 0x24
	lwz      r3, 0xa8(r30)
	stfsx    f0, r3, r8
	addi     r8, r10, 0x28
	lwz      r3, 0xa8(r30)
	stfsx    f0, r3, r7
	addi     r7, r10, 0x2c
	lwz      r3, 0xa8(r30)
	stfsx    f0, r3, r6
	addi     r6, r10, 0x30
	lwz      r3, 0xa8(r30)
	stfsx    f0, r3, r5
	addi     r5, r10, 0x34
	lwz      r3, 0xa8(r30)
	stfsx    f0, r3, r4
	addi     r4, r10, 0x38
	lwz      r3, 0xa8(r30)
	stfsx    f0, r3, r0
	addi     r0, r10, 0x3c
	addi     r10, r10, 0x20
	lwz      r3, 0xa8(r30)
	stfsx    f0, r3, r10
	addi     r10, r10, 0x20
	lwz      r3, 0xa8(r30)
	stfsx    f0, r3, r9
	lwz      r3, 0xa8(r30)
	stfsx    f0, r3, r8
	lwz      r3, 0xa8(r30)
	stfsx    f0, r3, r7
	lwz      r3, 0xa8(r30)
	stfsx    f0, r3, r6
	lwz      r3, 0xa8(r30)
	stfsx    f0, r3, r5
	lwz      r3, 0xa8(r30)
	stfsx    f0, r3, r4
	lwz      r3, 0xa8(r30)
	stfsx    f0, r3, r0
	bdnz     lbl_8043C758
	li       r11, 0
	li       r0, 4
	stb      r11, 0xa5(r30)
	mtctr    r0

lbl_8043C82C:
	lwz      r4, 0xac(r30)
	li       r3, 0
	addi     r10, r11, 1
	addi     r9, r11, 2
	stbx     r3, r4, r11
	addi     r8, r11, 3
	addi     r7, r11, 4
	addi     r6, r11, 5
	lwz      r4, 0xac(r30)
	addi     r5, r11, 6
	addi     r0, r11, 7
	stbx     r3, r4, r10
	addi     r10, r11, 9
	lwz      r4, 0xac(r30)
	stbx     r3, r4, r9
	addi     r9, r11, 0xa
	lwz      r4, 0xac(r30)
	stbx     r3, r4, r8
	addi     r8, r11, 0xb
	lwz      r4, 0xac(r30)
	stbx     r3, r4, r7
	addi     r7, r11, 0xc
	lwz      r4, 0xac(r30)
	stbx     r3, r4, r6
	addi     r6, r11, 0xd
	lwz      r4, 0xac(r30)
	stbx     r3, r4, r5
	addi     r5, r11, 0xe
	lwz      r4, 0xac(r30)
	stbx     r3, r4, r0
	addi     r0, r11, 0xf
	addi     r11, r11, 8
	lwz      r4, 0xac(r30)
	stbx     r3, r4, r11
	addi     r11, r11, 8
	lwz      r4, 0xac(r30)
	stbx     r3, r4, r10
	lwz      r4, 0xac(r30)
	stbx     r3, r4, r9
	lwz      r4, 0xac(r30)
	stbx     r3, r4, r8
	lwz      r4, 0xac(r30)
	stbx     r3, r4, r7
	lwz      r4, 0xac(r30)
	stbx     r3, r4, r6
	lwz      r4, 0xac(r30)
	stbx     r3, r4, r5
	lwz      r4, 0xac(r30)
	stbx     r3, r4, r0
	bdnz     lbl_8043C82C
	li       r0, 2
	mtctr    r0

lbl_8043C8FC:
	lwz      r4, 0xb0(r30)
	li       r12, 0
	addi     r0, r3, 1
	addi     r10, r3, 2
	stbx     r12, r4, r3
	addi     r9, r3, 3
	addi     r8, r3, 4
	addi     r7, r3, 5
	lwz      r11, 0xb0(r30)
	addi     r6, r3, 6
	addi     r5, r3, 7
	addi     r4, r3, 8
	stbx     r12, r11, r0
	addi     r0, r3, 9
	addi     r3, r3, 0xa
	lwz      r11, 0xb0(r30)
	stbx     r12, r11, r10
	lwz      r10, 0xb0(r30)
	stbx     r12, r10, r9
	lwz      r9, 0xb0(r30)
	stbx     r12, r9, r8
	lwz      r8, 0xb0(r30)
	stbx     r12, r8, r7
	lwz      r7, 0xb0(r30)
	stbx     r12, r7, r6
	lwz      r6, 0xb0(r30)
	stbx     r12, r6, r5
	lwz      r5, 0xb0(r30)
	stbx     r12, r5, r4
	lwz      r4, 0xb0(r30)
	stbx     r12, r4, r0
	bdnz     lbl_8043C8FC
	lfs      f0, lbl_805208C0@sda21(r2)
	mr       r3, r30
	li       r4, 0
	stfs     f0, 0xb4(r30)
	bl       reset___Q28JMessage10TProcessorFPCc
	srwi     r4, r31, 0x10
	mr       r3, r30
	clrlwi   r5, r31, 0x10
	bl       setBegin_messageCode__Q28JMessage10TProcessorFUsUs
	mr       r3, r30
	li       r4, 0
	bl       process__Q28JMessage19TRenderingProcessorFPCc
	lwz      r0, 0x8c(r30)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8043C9CC
	lbz      r0, 0xa4(r30)
	lfs      f0, 0x90(r30)
	lwz      r3, 0xa8(r30)
	slwi     r0, r0, 2
	stfsx    f0, r3, r0

lbl_8043C9CC:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x8c(r30)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8043CA1C
	li       r4, 0
	b        lbl_8043CA10

lbl_8043C9F4:
	lwz      r3, 0xac(r30)
	lbzx     r0, r3, r4
	cmplwi   r0, 0
	bne      lbl_8043CA0C
	lbz      r0, 0xa5(r30)
	stbx     r0, r3, r4

lbl_8043CA0C:
	addi     r4, r4, 1

lbl_8043CA10:
	lbz      r0, 0xa4(r30)
	cmpw     r4, r0
	blt      lbl_8043C9F4

lbl_8043CA1C:
	lwz      r0, 0x8c(r30)
	rlwinm.  r0, r0, 0, 3, 3
	bne      lbl_8043CA8C
	lbz      r0, 0xa6(r30)
	cmplwi   r0, 0xa
	blt      lbl_8043CA50
	lis      r3, lbl_8049ABE8@ha
	lis      r5, lbl_8049AC00@ha
	addi     r3, r3, lbl_8049ABE8@l
	li       r4, 0x625
	addi     r5, r5, lbl_8049AC00@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8043CA50:
	lbz      r0, 0xa6(r30)
	lbz      r4, 0xa4(r30)
	lwz      r3, 0xb0(r30)
	slwi     r0, r0, 1
	addi     r4, r4, -1
	add      r3, r3, r0
	stb      r4, 1(r3)
	lbz      r0, 0xa6(r30)
	cmplwi   r0, 9
	bge      lbl_8043CA8C
	lwz      r3, 0xb0(r30)
	rlwinm   r0, r0, 1, 0x17, 0x1e
	lbz      r4, 0xa4(r30)
	add      r3, r3, r0
	stb      r4, 2(r3)

lbl_8043CA8C:
	lwz      r0, 0x8c(r30)
	rlwinm   r0, r0, 0, 0, 0x1e
	stw      r0, 0x8c(r30)
	lfs      f0, 0x94(r30)
	stfs     f0, 0xb4(r30)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043CAB8
 * Size:	0003AC
 */
void TRenderingProcessor::preProcCenteringID(unsigned int, unsigned int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	li       r10, 0
	lfs      f0, lbl_805208C0@sda21(r2)
	stw      r0, 0x24(r1)
	li       r0, 4
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r3, 0x8c(r3)
	ori      r3, r3, 1
	stw      r3, 0x8c(r29)
	stb      r10, 0xa4(r29)
	mtctr    r0

lbl_8043CAFC:
	lwz      r3, 0xa8(r29)
	addi     r9, r10, 4
	addi     r8, r10, 8
	addi     r7, r10, 0xc
	stfsx    f0, r3, r10
	addi     r6, r10, 0x10
	addi     r5, r10, 0x14
	addi     r4, r10, 0x18
	lwz      r3, 0xa8(r29)
	addi     r0, r10, 0x1c
	stfsx    f0, r3, r9
	addi     r9, r10, 0x24
	lwz      r3, 0xa8(r29)
	stfsx    f0, r3, r8
	addi     r8, r10, 0x28
	lwz      r3, 0xa8(r29)
	stfsx    f0, r3, r7
	addi     r7, r10, 0x2c
	lwz      r3, 0xa8(r29)
	stfsx    f0, r3, r6
	addi     r6, r10, 0x30
	lwz      r3, 0xa8(r29)
	stfsx    f0, r3, r5
	addi     r5, r10, 0x34
	lwz      r3, 0xa8(r29)
	stfsx    f0, r3, r4
	addi     r4, r10, 0x38
	lwz      r3, 0xa8(r29)
	stfsx    f0, r3, r0
	addi     r0, r10, 0x3c
	addi     r10, r10, 0x20
	lwz      r3, 0xa8(r29)
	stfsx    f0, r3, r10
	addi     r10, r10, 0x20
	lwz      r3, 0xa8(r29)
	stfsx    f0, r3, r9
	lwz      r3, 0xa8(r29)
	stfsx    f0, r3, r8
	lwz      r3, 0xa8(r29)
	stfsx    f0, r3, r7
	lwz      r3, 0xa8(r29)
	stfsx    f0, r3, r6
	lwz      r3, 0xa8(r29)
	stfsx    f0, r3, r5
	lwz      r3, 0xa8(r29)
	stfsx    f0, r3, r4
	lwz      r3, 0xa8(r29)
	stfsx    f0, r3, r0
	bdnz     lbl_8043CAFC
	li       r11, 0
	li       r0, 4
	stb      r11, 0xa5(r29)
	mtctr    r0

lbl_8043CBD0:
	lwz      r4, 0xac(r29)
	li       r3, 0
	addi     r10, r11, 1
	addi     r9, r11, 2
	stbx     r3, r4, r11
	addi     r8, r11, 3
	addi     r7, r11, 4
	addi     r6, r11, 5
	lwz      r4, 0xac(r29)
	addi     r5, r11, 6
	addi     r0, r11, 7
	stbx     r3, r4, r10
	addi     r10, r11, 9
	lwz      r4, 0xac(r29)
	stbx     r3, r4, r9
	addi     r9, r11, 0xa
	lwz      r4, 0xac(r29)
	stbx     r3, r4, r8
	addi     r8, r11, 0xb
	lwz      r4, 0xac(r29)
	stbx     r3, r4, r7
	addi     r7, r11, 0xc
	lwz      r4, 0xac(r29)
	stbx     r3, r4, r6
	addi     r6, r11, 0xd
	lwz      r4, 0xac(r29)
	stbx     r3, r4, r5
	addi     r5, r11, 0xe
	lwz      r4, 0xac(r29)
	stbx     r3, r4, r0
	addi     r0, r11, 0xf
	addi     r11, r11, 8
	lwz      r4, 0xac(r29)
	stbx     r3, r4, r11
	addi     r11, r11, 8
	lwz      r4, 0xac(r29)
	stbx     r3, r4, r10
	lwz      r4, 0xac(r29)
	stbx     r3, r4, r9
	lwz      r4, 0xac(r29)
	stbx     r3, r4, r8
	lwz      r4, 0xac(r29)
	stbx     r3, r4, r7
	lwz      r4, 0xac(r29)
	stbx     r3, r4, r6
	lwz      r4, 0xac(r29)
	stbx     r3, r4, r5
	lwz      r4, 0xac(r29)
	stbx     r3, r4, r0
	bdnz     lbl_8043CBD0
	li       r0, 2
	mtctr    r0

lbl_8043CCA0:
	lwz      r4, 0xb0(r29)
	li       r12, 0
	addi     r0, r3, 1
	addi     r10, r3, 2
	stbx     r12, r4, r3
	addi     r9, r3, 3
	addi     r8, r3, 4
	addi     r7, r3, 5
	lwz      r11, 0xb0(r29)
	addi     r6, r3, 6
	addi     r5, r3, 7
	addi     r4, r3, 8
	stbx     r12, r11, r0
	addi     r0, r3, 9
	addi     r3, r3, 0xa
	lwz      r11, 0xb0(r29)
	stbx     r12, r11, r10
	lwz      r10, 0xb0(r29)
	stbx     r12, r10, r9
	lwz      r9, 0xb0(r29)
	stbx     r12, r9, r8
	lwz      r8, 0xb0(r29)
	stbx     r12, r8, r7
	lwz      r7, 0xb0(r29)
	stbx     r12, r7, r6
	lwz      r6, 0xb0(r29)
	stbx     r12, r6, r5
	lwz      r5, 0xb0(r29)
	stbx     r12, r5, r4
	lwz      r4, 0xb0(r29)
	stbx     r12, r4, r0
	bdnz     lbl_8043CCA0
	lfs      f0, lbl_805208C0@sda21(r2)
	mr       r3, r29
	li       r4, 0
	stfs     f0, 0xb4(r29)
	bl       reset___Q28JMessage10TProcessorFPCc
	mr       r3, r29
	mr       r4, r30
	mr       r5, r31
	li       r6, 0
	bl       setBegin_messageID__Q28JMessage10TProcessorFUlUlPb
	mr       r3, r29
	li       r4, 0
	bl       process__Q28JMessage19TRenderingProcessorFPCc
	lwz      r0, 0x8c(r29)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8043CD74
	lbz      r0, 0xa4(r29)
	lfs      f0, 0x90(r29)
	lwz      r3, 0xa8(r29)
	slwi     r0, r0, 2
	stfsx    f0, r3, r0

lbl_8043CD74:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x8c(r29)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8043CDC4
	li       r4, 0
	b        lbl_8043CDB8

lbl_8043CD9C:
	lwz      r3, 0xac(r29)
	lbzx     r0, r3, r4
	cmplwi   r0, 0
	bne      lbl_8043CDB4
	lbz      r0, 0xa5(r29)
	stbx     r0, r3, r4

lbl_8043CDB4:
	addi     r4, r4, 1

lbl_8043CDB8:
	lbz      r0, 0xa4(r29)
	cmpw     r4, r0
	blt      lbl_8043CD9C

lbl_8043CDC4:
	lwz      r0, 0x8c(r29)
	rlwinm.  r0, r0, 0, 3, 3
	bne      lbl_8043CE34
	lbz      r0, 0xa6(r29)
	cmplwi   r0, 0xa
	blt      lbl_8043CDF8
	lis      r3, lbl_8049ABE8@ha
	lis      r5, lbl_8049AC00@ha
	addi     r3, r3, lbl_8049ABE8@l
	li       r4, 0x625
	addi     r5, r5, lbl_8049AC00@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8043CDF8:
	lbz      r0, 0xa6(r29)
	lbz      r4, 0xa4(r29)
	lwz      r3, 0xb0(r29)
	slwi     r0, r0, 1
	addi     r4, r4, -1
	add      r3, r3, r0
	stb      r4, 1(r3)
	lbz      r0, 0xa6(r29)
	cmplwi   r0, 9
	bge      lbl_8043CE34
	lwz      r3, 0xb0(r29)
	rlwinm   r0, r0, 1, 0x17, 0x1e
	lbz      r4, 0xa4(r29)
	add      r3, r3, r0
	stb      r4, 2(r3)

lbl_8043CE34:
	lwz      r0, 0x8c(r29)
	rlwinm   r0, r0, 0, 0, 0x1e
	stw      r0, 0x8c(r29)
	lfs      f0, 0x94(r29)
	stfs     f0, 0xb4(r29)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043CE64
 * Size:	000008
 */
void TRenderingProcessor::setFont(JUTFont* a1)
{
	// Generated from stw r4, 0x4C(r3)
	_4C = a1;
}

/*
 * --INFO--
 * Address:	8043CE6C
 * Size:	00044C
 */
void TRenderingProcessor::setTextBoxInfo(J2DPane*)
{
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stfd     f31, 0x80(r1)
	psq_st   f31, 136(r1), 0, qr0
	stfd     f30, 0x70(r1)
	psq_st   f30, 120(r1), 0, qr0
	stw      r31, 0x6c(r1)
	stw      r30, 0x68(r1)
	stw      r29, 0x64(r1)
	stw      r28, 0x60(r1)
	mr       r31, r4
	mr       r30, r3
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x10
	cmplwi   r0, 0x13
	beq      lbl_8043CEDC
	lis      r3, lbl_8049ABE8@ha
	lis      r5, lbl_8049AC00@ha
	addi     r3, r3, lbl_8049ABE8@l
	li       r4, 0x697
	addi     r5, r5, lbl_8049AC00@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8043CEDC:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x10
	cmplwi   r0, 0x13
	bne      lbl_8043D288
	mr       r4, r31
	li       r28, -1
	lwz      r12, 0(r31)
	addi     r3, r1, 0x34
	stw      r28, 0x40(r1)
	lbz      r11, 0x104(r31)
	lbz      r10, 0x105(r31)
	lbz      r9, 0x106(r31)
	lbz      r8, 0x107(r31)
	stw      r28, 0x44(r1)
	lbz      r7, 0x108(r31)
	lbz      r6, 0x109(r31)
	lbz      r5, 0x10a(r31)
	lbz      r0, 0x10b(r31)
	lwz      r12, 0xb0(r12)
	stb      r11, 0x40(r1)
	stb      r10, 0x41(r1)
	stb      r9, 0x42(r1)
	stb      r8, 0x43(r1)
	stb      r7, 0x44(r1)
	stb      r6, 0x45(r1)
	stb      r5, 0x46(r1)
	stb      r0, 0x47(r1)
	stw      r28, 0x3c(r1)
	stw      r28, 0x38(r1)
	mtctr    r12
	bctrl
	mr       r4, r31
	lbz      r7, 0x34(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x30
	lbz      r6, 0x35(r1)
	lbz      r5, 0x36(r1)
	lbz      r0, 0x37(r1)
	lwz      r12, 0xb4(r12)
	stb      r7, 0x38(r1)
	stb      r6, 0x39(r1)
	stb      r5, 0x3a(r1)
	stb      r0, 0x3b(r1)
	mtctr    r12
	bctrl
	lbz      r3, 0xb3(r31)
	lis      r0, 0x4330
	lwz      r28, 0x38(r1)
	stw      r3, 0x4c(r1)
	lwz      r29, 0x40(r1)
	stw      r0, 0x48(r1)
	lfd      f2, lbl_805208D8@sda21(r2)
	lfd      f1, 0x48(r1)
	lfs      f0, lbl_805208E4@sda21(r2)
	fsubs    f1, f1, f2
	stw      r28, 0x18(r1)
	lwz      r12, 0x44(r1)
	stw      r29, 0x14(r1)
	fdivs    f0, f1, f0
	lbz      r5, 0x30(r1)
	stw      r12, 0x10(r1)
	lbz      r4, 0x31(r1)
	stw      r28, 0xc(r1)
	lbz      r3, 0x32(r1)
	lbz      r0, 0x33(r1)
	stb      r5, 0x3c(r1)
	lbz      r5, 0x18(r1)
	stb      r4, 0x3d(r1)
	lbz      r4, 0x19(r1)
	stb      r3, 0x3e(r1)
	lbz      r3, 0x1a(r1)
	stb      r0, 0x3f(r1)
	lbz      r10, 0x1b(r1)
	lwz      r0, 0x3c(r1)
	stfs     f0, 0x78(r30)
	lbz      r9, 0x14(r1)
	stw      r0, 0x1c(r1)
	lbz      r8, 0x15(r1)
	lbz      r7, 0x1c(r1)
	lbz      r6, 0x1d(r1)
	stb      r7, 0x60(r30)
	lbz      r7, 0x1e(r1)
	stb      r6, 0x61(r30)
	lbz      r6, 0x1f(r1)
	stb      r7, 0x62(r30)
	lbz      r7, 0x16(r1)
	stb      r6, 0x63(r30)
	lbz      r6, 0x17(r1)
	stb      r5, 0x5c(r30)
	lbz      r5, 0x10(r1)
	stb      r4, 0x5d(r30)
	lbz      r4, 0x11(r1)
	stb      r3, 0x5e(r30)
	lbz      r3, 0x12(r1)
	stb      r10, 0x5f(r30)
	lbz      r11, 0x13(r1)
	stb      r9, 0xd4(r30)
	lbz      r10, 0xc(r1)
	stb      r8, 0xd5(r30)
	lbz      r9, 0xd(r1)
	stw      r0, 8(r1)
	lbz      r8, 0xe(r1)
	stb      r7, 0xd6(r30)
	lbz      r7, 0xf(r1)
	stb      r6, 0xd7(r30)
	lbz      r6, 8(r1)
	stb      r5, 0xd8(r30)
	lbz      r5, 9(r1)
	stb      r4, 0xd9(r30)
	lbz      r4, 0xa(r1)
	stb      r3, 0xda(r30)
	lbz      r3, 0xb(r1)
	stb      r11, 0xdb(r30)
	stb      r10, 0xcc(r30)
	stb      r9, 0xcd(r30)
	stb      r8, 0xce(r30)
	stb      r7, 0xcf(r30)
	stb      r6, 0xd0(r30)
	stb      r5, 0xd1(r30)
	stb      r4, 0xd2(r30)
	stb      r3, 0xd3(r30)
	lfs      f0, 0x114(r31)
	stw      r29, 0x2c(r1)
	stfs     f0, 0xbc(r30)
	stfs     f0, 0xc4(r30)
	lfs      f0, 0x118(r31)
	stw      r12, 0x28(r1)
	stfs     f0, 0xc0(r30)
	stfs     f0, 0xc8(r30)
	lfs      f1, 0x28(r31)
	lfs      f0, 0x20(r31)
	stw      r28, 0x24(r1)
	fsubs    f0, f1, f0
	stw      r0, 0x20(r1)
	stfs     f0, 0x38(r30)
	lfs      f1, 0x2c(r31)
	lfs      f0, 0x24(r31)
	fsubs    f0, f1, f0
	stfs     f0, 0x3c(r30)
	lwz      r3, 0x4c(r30)
	lfs      f31, 0x11c(r31)
	lwz      r12, 0(r3)
	lfs      f30, 0x120(r31)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x54(r1)
	lfd      f1, lbl_805208D0@sda21(r2)
	stw      r0, 0x50(r1)
	lfd      f0, 0x50(r1)
	fsubs    f0, f0, f1
	fdivs    f0, f31, f0
	stfs     f0, 0xe8(r30)
	lwz      r3, 0x4c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x5c(r1)
	lfd      f1, lbl_805208D0@sda21(r2)
	stw      r0, 0x58(r1)
	lfd      f0, 0x58(r1)
	fsubs    f0, f0, f1
	fdivs    f0, f30, f0
	stfs     f0, 0xec(r30)
	lbz      r0, 0x130(r31)
	rlwinm   r0, r0, 0x1e, 0x1e, 0x1f
	cmpwi    r0, 1
	beq      lbl_8043D1F4
	bge      lbl_8043D1B0
	cmpwi    r0, 0
	bge      lbl_8043D1BC
	b        lbl_8043D20C

lbl_8043D1B0:
	cmpwi    r0, 3
	bge      lbl_8043D20C
	b        lbl_8043D1D8

lbl_8043D1BC:
	lwz      r0, 0x8c(r30)
	rlwinm   r0, r0, 0, 0x1c, 0x18
	stw      r0, 0x8c(r30)
	lwz      r0, 0x8c(r30)
	ori      r0, r0, 0x20
	stw      r0, 0x8c(r30)
	b        lbl_8043D20C

lbl_8043D1D8:
	lwz      r0, 0x8c(r30)
	rlwinm   r0, r0, 0, 0x1c, 0x18
	stw      r0, 0x8c(r30)
	lwz      r0, 0x8c(r30)
	ori      r0, r0, 0x10
	stw      r0, 0x8c(r30)
	b        lbl_8043D20C

lbl_8043D1F4:
	lwz      r0, 0x8c(r30)
	rlwinm   r0, r0, 0, 0x1c, 0x18
	stw      r0, 0x8c(r30)
	lwz      r0, 0x8c(r30)
	ori      r0, r0, 0x40
	stw      r0, 0x8c(r30)

lbl_8043D20C:
	lbz      r0, 0x130(r31)
	clrlwi   r0, r0, 0x1e
	cmpwi    r0, 1
	beq      lbl_8043D254
	bge      lbl_8043D22C
	cmpwi    r0, 0
	bge      lbl_8043D238
	b        lbl_8043D288

lbl_8043D22C:
	cmpwi    r0, 3
	bge      lbl_8043D288
	b        lbl_8043D270

lbl_8043D238:
	lwz      r0, 0x8c(r30)
	rlwinm   r0, r0, 0, 0x18, 0x14
	stw      r0, 0x8c(r30)
	lwz      r0, 0x8c(r30)
	ori      r0, r0, 0x200
	stw      r0, 0x8c(r30)
	b        lbl_8043D288

lbl_8043D254:
	lwz      r0, 0x8c(r30)
	rlwinm   r0, r0, 0, 0x18, 0x14
	stw      r0, 0x8c(r30)
	lwz      r0, 0x8c(r30)
	ori      r0, r0, 0x400
	stw      r0, 0x8c(r30)
	b        lbl_8043D288

lbl_8043D270:
	lwz      r0, 0x8c(r30)
	rlwinm   r0, r0, 0, 0x18, 0x14
	stw      r0, 0x8c(r30)
	lwz      r0, 0x8c(r30)
	ori      r0, r0, 0x100
	stw      r0, 0x8c(r30)

lbl_8043D288:
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	lwz      r31, 0x6c(r1)
	lwz      r30, 0x68(r1)
	lwz      r29, 0x64(r1)
	lwz      r0, 0x94(r1)
	lwz      r28, 0x60(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043D2B8
 * Size:	000070
 */
TRenderingProcessor::~TRenderingProcessor(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8043D30C
	lis      r4, __vt__Q25P2JME19TRenderingProcessor@ha
	addi     r0, r4, __vt__Q25P2JME19TRenderingProcessor@l
	stw      r0, 0(r30)
	beq      lbl_8043D2FC
	lis      r5, __vt__Q25P2JME23TRenderingProcessorBase@ha
	li       r4, 0
	addi     r0, r5, __vt__Q25P2JME23TRenderingProcessorBase@l
	stw      r0, 0(r30)
	bl       __dt__Q28JMessage19TRenderingProcessorFv

lbl_8043D2FC:
	extsh.   r0, r31
	ble      lbl_8043D30C
	mr       r3, r30
	bl       __dl__FPv

lbl_8043D30C:
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
 * Address:	8043D328
 * Size:	000004
 */
void TRenderingProcessorBase::do_character(int) { }
} // namespace P2JME
