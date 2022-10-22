#include "JSystem/JFW/JFWDisplay.h"
#include "Dolphin/os.h"
#include "JSystem/JFW/JFWAlarm.h"
#include "JSystem/JSupport/JSUList.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_JFWDisplay_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_804789E0
    lbl_804789E0:
        .4byte 0x47502073
        .4byte 0x74617475
        .4byte 0x73202564
        .4byte 0x25642564
        .4byte 0x25642564
        .4byte 0x2564202D
        .4byte 0x2D3E2000
        .4byte 0x47502068
        .4byte 0x616E6720
        .4byte 0x64756520
        .4byte 0x746F2058
        .4byte 0x46207374
        .4byte 0x616C6C20
        .4byte 0x6275672E
        .4byte 0x0A000000
        .4byte 0x47502068
        .4byte 0x616E6720
        .4byte 0x64756520
        .4byte 0x746F2075
        .4byte 0x6E746572
        .4byte 0x6D696E61
        .4byte 0x74656420
        .4byte 0x7072696D
        .4byte 0x69746976
        .4byte 0x652E0A00
        .4byte 0x47502068
        .4byte 0x616E6720
        .4byte 0x64756520
        .4byte 0x746F2069
        .4byte 0x6C6C6567
        .4byte 0x616C2069
        .4byte 0x6E737472
        .4byte 0x75637469
        .4byte 0x6F6E2E0A
        .4byte 0x00000000
        .4byte 0x47502061
        .4byte 0x70706561
        .4byte 0x72732074
        .4byte 0x6F206265
        .4byte 0x206E6F74
        .4byte 0x2068756E
        .4byte 0x67202877
        .4byte 0x61697469
        .4byte 0x6E672066
        .4byte 0x6F722069
        .4byte 0x6E707574
        .4byte 0x292E0A00
        .4byte 0x47502069
        .4byte 0x7320696E
        .4byte 0x20756E6B
        .4byte 0x6E6F776E
        .4byte 0x20737461
        .4byte 0x74652E0A
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global e_mtx
    e_mtx:
        .float 1.0
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .float 1.0
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .float 1.0
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global clear_z_TX
    clear_z_TX:
        .4byte 0x00FF00FF
        .4byte 0x00FF00FF
        .4byte 0x00FF00FF
        .4byte 0x00FF00FF
        .4byte 0x00FF00FF
        .4byte 0x00FF00FF
        .4byte 0x00FF00FF
        .4byte 0x00FF00FF
        .4byte 0xFFFFFFFF
        .4byte 0xFFFFFFFF
        .4byte 0xFFFFFFFF
        .4byte 0xFFFFFFFF
        .4byte 0xFFFFFFFF
        .4byte 0xFFFFFFFF
        .4byte 0xFFFFFFFF
        .4byte 0xFFFFFFFF
    .global __vt__10JFWDisplay
    __vt__10JFWDisplay:
        .4byte 0
        .4byte 0
        .4byte beginRender__10JFWDisplayFv
        .4byte endRender__10JFWDisplayFv
        .4byte endFrame__10JFWDisplayFv
        .4byte __dt__10JFWDisplayFv
        .4byte 0
        .4byte 0

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global sList__8JFWAlarm
    sList__8JFWAlarm:
        .skip 0xC

    .section .sbss # 0x80514D80 - 0x80516360
    .global sManager__10JFWDisplay
    sManager__10JFWDisplay:
        .skip 0x4
    .global prevFrame$3378
    prevFrame$3378:
        .skip 0x4
    .global init$3379
    init$3379:
        .skip 0x8
    .global nextTick$3423
    nextTick$3423:
        .skip 0x4
    .global lbl_8051507C
    lbl_8051507C:
        .skip 0x4
    .global init$3424
    init$3424:
        .skip 0x4
    .global nextCount$3431
    nextCount$3431:
        .skip 0x4
    .global init$3432
    init$3432:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516B10
    lbl_80516B10:
        .4byte 0x00000000
    .global lbl_80516B14
    lbl_80516B14:
        .float -1.0
    .global lbl_80516B18
    lbl_80516B18:
        .float 1.0
        .4byte 0x00000000
    .global lbl_80516B20
    lbl_80516B20:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_80516B28
    lbl_80516B28:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80516B30
    lbl_80516B30:
        .4byte 0x3FE00000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void JFWDisplay::ctor_subroutine(bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
JFWDisplay::JFWDisplay(JKRHeap*, JUTXfb::EXfbNumber, bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D0
 */
JFWDisplay::JFWDisplay(void*, bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
JFWDisplay::JFWDisplay(void*, void*, bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F0
 */
JFWDisplay::JFWDisplay(void*, void*, void*, bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80089AAC
 * Size:	00007C
 */
JFWDisplay::~JFWDisplay()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80089B0C
	lis      r4, __vt__10JFWDisplay@ha
	addi     r0, r4, __vt__10JFWDisplay@l
	stw      r0, 0(r30)
	lwz      r0, sManager__8JUTVideo@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_80089AEC
	li       r4, 2
	bl       waitBlanking__10JFWDisplayFi

lbl_80089AEC:
	bl       destroy__10JUTProcBarFv
	bl       destroyManager__6JUTXfbFv
	li       r3, 0
	extsh.   r0, r31
	stw      r3, 0x10(r30)
	ble      lbl_80089B0C
	mr       r3, r30
	bl       __dl__FPv

lbl_80089B0C:
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
 * Address:	80089B28
 * Size:	00011C
 */
JFWDisplay* JFWDisplay::createManager(const _GXRenderModeObj*, JKRHeap*, JUTXfb::EXfbNumber, bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  mr.       r0, r3
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r6
	  stw       r29, 0x14(r1)
	  mr        r29, r5
	  stw       r28, 0x10(r1)
	  mr        r28, r4
	  beq-      .loc_0x3C
	  lwz       r3, -0x76E0(r13)
	  mr        r4, r0
	  bl        -0x55EF0

	.loc_0x3C:
	  lwz       r0, -0x7618(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xF8
	  li        r3, 0x3C
	  bl        -0x65CD0
	  mr.       r31, r3
	  beq-      .loc_0xF4
	  lis       r4, 0x804A
	  lis       r3, 0x100
	  addi      r4, r4, 0x3080
	  li        r0, -0x1
	  stw       r4, 0x0(r31)
	  li        r5, 0x3
	  li        r4, 0
	  subi      r3, r3, 0x1
	  stw       r0, 0x8(r31)
	  li        r0, 0x1
	  lfs       f0, -0x7850(r2)
	  stb       r30, 0x24(r31)
	  sth       r5, 0x26(r31)
	  stb       r4, 0x8(r31)
	  stb       r4, 0x9(r31)
	  stb       r4, 0xA(r31)
	  stb       r4, 0xB(r31)
	  stw       r3, 0xC(r31)
	  sth       r4, 0x14(r31)
	  stw       r4, 0x4(r31)
	  sth       r0, 0x1C(r31)
	  stw       r4, 0x20(r31)
	  stfs      f0, 0x28(r31)
	  stw       r4, 0x30(r31)
	  bl        0x68FC8
	  stw       r3, 0x2C(r31)
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x34(r31)
	  sth       r0, 0x38(r31)
	  stb       r0, 0x3A(r31)
	  stw       r0, 0x18(r31)
	  bl        0xC44
	  bl        -0x5AC10
	  bl        -0x5AAA4
	  mr        r3, r28
	  mr        r4, r29
	  bl        -0x55F04
	  stw       r3, 0x10(r31)

	.loc_0xF4:
	  stw       r31, -0x7618(r13)

	.loc_0xF8:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r3, -0x7618(r13)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00010C
 */
JFWDisplay* JFWDisplay::createManager(const _GXRenderModeObj*, void*, bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00011C
 */
JFWDisplay* JFWDisplay::createManager(const _GXRenderModeObj*, void*, void*, bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00010C
 */
JFWDisplay* JFWDisplay::createManager(const _GXRenderModeObj*, void*, void*, void*, bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80089C44
 * Size:	000044
 */
void JFWDisplay::destroyManager()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, sManager__10JFWDisplay@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80089C70
	lwz      r12, 0(r3)
	li       r4, 1
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_80089C70:
	li       r0, 0
	stw      r0, sManager__10JFWDisplay@sda21(r13)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void callDirectDraw()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000104
 */
void JFWDisplay::prepareCopyDisp()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00010C
 */
void JFWDisplay::drawendXfb_single()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001E0
 */
void JFWDisplay::exchangeXfb_double()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A8
 */
void JFWDisplay::exchangeXfb_triple()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000124
 */
void JFWDisplay::copyXfb_triple()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void JFWDisplay::preGX()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00010C
 */
void JFWDisplay::endGX()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80089C88
 * Size:	000478
 */
void JFWDisplay::beginRender()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x38(r1)
	stmw     r27, 0x24(r1)
	mr       r30, r3
	lwz      r29, sManager__10JUTProcBar@sda21(r13)
	bl       OSGetTick
	lis      r5, 0x800000F8@ha
	lis      r4, 0x431BDE83@ha
	lwz      r0, 0x800000F8@l(r5)
	addi     r4, r4, 0x431BDE83@l
	lwz      r5, 0x50(r29)
	srwi     r0, r0, 2
	mulhwu   r0, r4, r0
	subf     r3, r5, r3
	slwi     r3, r3, 3
	srwi     r0, r0, 0xf
	divwu    r0, r3, r0
	stw      r0, 0x54(r29)
	lwz      r0, 0x54(r29)
	cmplwi   r0, 0
	bne      lbl_80089CEC
	li       r0, 1
	stw      r0, 0x54(r29)

lbl_80089CEC:
	lwz      r27, sManager__10JUTProcBar@sda21(r13)
	li       r4, 0xff
	li       r3, 0x81
	li       r0, 0x1e
	stb      r4, 0x60(r27)
	stb      r3, 0x61(r27)
	stb      r0, 0x62(r27)
	bl       OSGetTick
	stw      r3, 0x50(r27)
	li       r4, 0xff
	li       r3, 0x81
	li       r0, 0x1e
	lwz      r27, sManager__10JUTProcBar@sda21(r13)
	stb      r4, 0x10(r27)
	stb      r3, 0x11(r27)
	stb      r0, 0x12(r27)
	bl       OSGetTick
	stw      r3, 0(r27)
	lwz      r3, 0x20(r30)
	lhz      r4, 0x1c(r30)
	bl       waitForTick__FUlUs
	lwz      r3, sManager__8JUTVideo@sda21(r13)
	bl       waitRetraceIfNeed__8JUTVideoFv
	bl       OSGetTick
	lwz      r0, 0x2c(r30)
	subf     r0, r0, r3
	stw      r0, 0x30(r30)
	stw      r3, 0x2c(r30)
	lwz      r3, sVideoLastTick__8JUTVideo@sda21(r13)
	lwz      r0, 0x2c(r30)
	subf     r0, r3, r0
	stw      r0, 0x34(r30)
	lwz      r29, sManager__10JUTProcBar@sda21(r13)
	bl       OSGetTick
	lis      r5, 0x800000F8@ha
	lis      r4, 0x431BDE83@ha
	lwz      r0, 0x800000F8@l(r5)
	addi     r4, r4, 0x431BDE83@l
	lwz      r5, 0(r29)
	srwi     r0, r0, 2
	mulhwu   r0, r4, r0
	subf     r3, r5, r3
	slwi     r3, r3, 3
	srwi     r0, r0, 0xf
	divwu    r0, r3, r0
	stw      r0, 4(r29)
	lwz      r0, 4(r29)
	cmplwi   r0, 0
	bne      lbl_80089DB8
	li       r0, 1
	stw      r0, 4(r29)

lbl_80089DB8:
	lwz      r27, sManager__10JUTProcBar@sda21(r13)
	li       r4, 0xff
	li       r3, 0x81
	li       r0, 0x1e
	stb      r4, 0x24(r27)
	stb      r3, 0x25(r27)
	stb      r0, 0x26(r27)
	bl       OSGetTick
	stw      r3, 0x14(r27)
	lwz      r31, sManager__6JUTXfb@sda21(r13)
	lwz      r0, 0x10(r31)
	cmpwi    r0, 2
	beq      lbl_80089E48
	bge      lbl_80089DFC
	cmpwi    r0, 1
	bge      lbl_80089E08
	b        lbl_8008A07C

lbl_80089DFC:
	cmpwi    r0, 4
	bge      lbl_8008A07C
	b        lbl_80089FFC

lbl_80089E08:
	lwz      r0, 0x1c(r31)
	cmpwi    r0, 2
	beq      lbl_80089E34
	li       r0, 1
	mr       r3, r30
	stw      r0, 0x1c(r31)
	addi     r4, r1, 0x10
	lwz      r0, 8(r30)
	stw      r0, 0x10(r1)
	bl       clearEfb__10JFWDisplayF8_GXColor
	b        lbl_80089E3C

lbl_80089E34:
	li       r0, 1
	stw      r0, 0x1c(r31)

lbl_80089E3C:
	lha      r0, 0x38(r30)
	sth      r0, 0x14(r31)
	b        lbl_8008A07C

lbl_80089E48:
	lha      r3, 0x16(r31)
	lha      r0, 0x18(r31)
	cmpw     r3, r0
	bne      lbl_80089FD0
	lha      r0, 0x14(r31)
	cmpwi    r0, 0
	blt      lbl_80089FB0
	lwz      r3, sManager__8JUTVideo@sda21(r13)
	lwz      r3, 4(r3)
	lhz      r27, 6(r3)
	lhz      r28, 4(r3)
	lhz      r4, 8(r3)
	mr       r3, r27
	bl       GXGetYScaleFactor
	fmr      f31, f1
	mr       r3, r27
	bl       GXGetNumXfbLines
	lwz      r0, 8(r30)
	mr       r29, r3
	addi     r3, r1, 8
	stw      r0, 8(r1)
	lwz      r4, 0xc(r30)
	bl       GXSetCopyClear
	mr       r5, r28
	mr       r6, r27
	li       r3, 0
	li       r4, 0
	bl       GXSetDispCopySrc
	mr       r3, r28
	mr       r4, r29
	bl       GXSetDispCopyDst
	fmr      f1, f31
	bl       GXSetDispCopyYScale
	bl       VIFlush
	lwz      r3, sManager__8JUTVideo@sda21(r13)
	li       r5, 1
	lwz      r4, 4(r3)
	lbz      r3, 0x19(r4)
	addi     r6, r4, 0x32
	addi     r4, r4, 0x1a
	bl       GXSetCopyFilter
	lhz      r3, 0x26(r30)
	bl       GXSetCopyClamp
	lhz      r3, 0x14(r30)
	bl       GXSetDispCopyGamma
	li       r3, 1
	li       r4, 3
	li       r5, 1
	bl       GXSetZMode
	lbz      r0, 0x24(r30)
	cmplwi   r0, 0
	beq      lbl_80089F20
	li       r3, 1
	bl       GXSetAlphaUpdate

lbl_80089F20:
	lha      r3, 0x14(r31)
	extsh.   r0, r3
	blt      lbl_80089F38
	slwi     r0, r3, 2
	lwzx     r3, r31, r0
	b        lbl_80089F3C

lbl_80089F38:
	li       r3, 0

lbl_80089F3C:
	li       r4, 1
	bl       GXCopyDisp
	lwz      r0, 0x18(r30)
	cmpwi    r0, 0
	bne      lbl_80089F64
	lha      r0, 0x14(r31)
	sth      r0, 0x16(r31)
	bl       GXDrawDone
	bl       dummyNoDrawWait__8JUTVideoFv
	b        lbl_80089F68

lbl_80089F64:
	bl       drawDoneStart__8JUTVideoFv

lbl_80089F68:
	lwz      r0, 0x18(r30)
	cmpwi    r0, 0
	bne      lbl_80089FB0
	lwz      r7, sManager__6JUTXfb@sda21(r13)
	lwz      r3, sManager__8JUTVideo@sda21(r13)
	lha      r0, 0x14(r7)
	lwz      r4, 4(r3)
	cmpwi    r0, 0
	lwz      r3, sDirectPrint__14JUTDirectPrint@sda21(r13)
	lhz      r5, 4(r4)
	lhz      r6, 6(r4)
	blt      lbl_80089FA4
	slwi     r0, r0, 2
	lwzx     r4, r7, r0
	b        lbl_80089FA8

lbl_80089FA4:
	li       r4, 0

lbl_80089FA8:
	bl       changeFrameBuffer__14JUTDirectPrintFPvUsUs
	bl       flushMessage__12JUTAssertionFv

lbl_80089FB0:
	lha      r0, 0x14(r31)
	srwi     r3, r0, 0x1f
	sth      r0, 0x16(r31)
	addi     r3, r3, -1
	xori     r0, r0, 1
	and      r0, r0, r3
	sth      r0, 0x14(r31)
	b        lbl_8008A07C

lbl_80089FD0:
	lwz      r0, 8(r30)
	mr       r3, r30
	addi     r4, r1, 0xc
	stw      r0, 0xc(r1)
	bl       clearEfb__10JFWDisplayF8_GXColor
	lha      r0, 0x14(r31)
	cmpwi    r0, 0
	bge      lbl_8008A07C
	li       r0, 0
	sth      r0, 0x14(r31)
	b        lbl_8008A07C

lbl_80089FFC:
	lha      r7, 0x14(r31)
	extsh.   r0, r7
	blt      lbl_8008A03C
	lwz      r4, sManager__8JUTVideo@sda21(r13)
	extsh.   r0, r7
	lwz      r3, sDirectPrint__14JUTDirectPrint@sda21(r13)
	lwz      r4, 4(r4)
	lhz      r5, 4(r4)
	lhz      r6, 6(r4)
	blt      lbl_8008A030
	slwi     r0, r7, 2
	lwzx     r4, r31, r0
	b        lbl_8008A034

lbl_8008A030:
	li       r4, 0

lbl_8008A034:
	bl       changeFrameBuffer__14JUTDirectPrintFPvUsUs
	bl       flushMessage__12JUTAssertionFv

lbl_8008A03C:
	lha      r0, 0x14(r31)
	sth      r0, 0x16(r31)
	lha      r3, 0x14(r31)
	lha      r4, 0x18(r31)
	addi     r0, r3, 1
	extsh    r3, r0

lbl_8008A054:
	extsh    r0, r3
	cmpwi    r0, 3
	bge      lbl_8008A068
	extsh.   r0, r3
	bge      lbl_8008A06C

lbl_8008A068:
	li       r3, 0

lbl_8008A06C:
	extsh    r0, r3
	cmpw     r0, r4
	beq      lbl_8008A054
	sth      r3, 0x14(r31)

lbl_8008A07C:
	bl       GXInvalidateTexAll
	bl       GXInvalidateVtxCache
	lwz      r3, sManager__8JUTVideo@sda21(r13)
	lwz      r3, 4(r3)
	lbz      r0, 0x19(r3)
	cmplwi   r0, 0
	beq      lbl_8008A0B0
	li       r3, 2
	li       r4, 0
	bl       GXSetPixelFmt
	li       r3, 1
	bl       GXSetDither
	b        lbl_8008A0E8

lbl_8008A0B0:
	lbz      r0, 0x24(r30)
	cmplwi   r0, 0
	beq      lbl_8008A0D4
	li       r3, 1
	li       r4, 0
	bl       GXSetPixelFmt
	li       r3, 1
	bl       GXSetDither
	b        lbl_8008A0E8

lbl_8008A0D4:
	li       r3, 0
	li       r4, 0
	bl       GXSetPixelFmt
	li       r3, 0
	bl       GXSetDither

lbl_8008A0E8:
	lfd      f31, 0x38(r1)
	lmw      r27, 0x24(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008A100
 * Size:	000340
 */
void JFWDisplay::endRender()
{
	/*
	stwu     r1, -0x120(r1)
	mflr     r0
	stw      r0, 0x124(r1)
	stfd     f31, 0x110(r1)
	psq_st   f31, 280(r1), 0, qr0
	stmw     r27, 0xfc(r1)
	lwz      r5, sManager__8JUTVideo@sda21(r13)
	lis      r4, 0x4330
	lfs      f1, lbl_80516B10@sda21(r2)
	mr       r30, r3
	lwz      r6, 4(r5)
	addi     r3, r1, 0x10
	stw      r4, 0xe8(r1)
	fmr      f2, f1
	lhz      r5, 4(r6)
	lhz      r0, 6(r6)
	stw      r5, 0xec(r1)
	lfd      f4, lbl_80516B20@sda21(r2)
	lfd      f0, 0xe8(r1)
	stw      r0, 0xf4(r1)
	fsubs    f3, f0, f4
	lfs      f5, lbl_80516B14@sda21(r2)
	stw      r4, 0xf0(r1)
	lfs      f6, lbl_80516B18@sda21(r2)
	lfd      f0, 0xf0(r1)
	fsubs    f4, f0, f4
	bl       __ct__13J2DOrthoGraphFffffff
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	beq      lbl_8008A188
	addi     r3, r1, 0x10
	bl       setPort__13J2DOrthoGraphFv
	lwz      r3, 4(r30)
	bl       control__8JUTFaderFv

lbl_8008A188:
	addi     r3, r1, 0x10
	bl       setPort__13J2DOrthoGraphFv
	lwz      r3, sDebugPrint__10JUTDbPrint@sda21(r13)
	bl       flush__10JUTDbPrintFv
	lwz      r0, sManager__17JUTConsoleManager@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8008A1B4
	addi     r3, r1, 0x10
	bl       setPort__13J2DOrthoGraphFv
	lwz      r3, sManager__17JUTConsoleManager@sda21(r13)
	bl       draw__17JUTConsoleManagerCFv

lbl_8008A1B4:
	addi     r3, r1, 0x10
	bl       setPort__13J2DOrthoGraphFv
	lwz      r3, sManager__10JUTProcBar@sda21(r13)
	bl       draw__10JUTProcBarFv
	lwz      r0, 0x18(r30)
	cmpwi    r0, 0
	bne      lbl_8008A1E0
	lwz      r3, sManager__6JUTXfb@sda21(r13)
	lwz      r0, 0x10(r3)
	cmpwi    r0, 1
	bne      lbl_8008A1E4

lbl_8008A1E0:
	bl       flushMessage_dbPrint__12JUTAssertionFv

lbl_8008A1E4:
	bl       GXFlush
	lis      r4, __vt__13J2DOrthoGraph@ha
	lis      r3, __vt__14J2DGrafContext@ha
	addi     r0, r4, __vt__13J2DOrthoGraph@l
	lwz      r31, sManager__6JUTXfb@sda21(r13)
	stw      r0, 0x10(r1)
	addi     r0, r3, __vt__14J2DGrafContext@l
	stw      r0, 0x10(r1)
	lwz      r0, 0x10(r31)
	cmpwi    r0, 2
	beq      lbl_8008A3F8
	bge      lbl_8008A220
	cmpwi    r0, 1
	bge      lbl_8008A22C
	b        lbl_8008A3F8

lbl_8008A220:
	cmpwi    r0, 4
	bge      lbl_8008A3F8
	b        lbl_8008A308

lbl_8008A22C:
	lha      r0, 0x14(r31)
	cmpwi    r0, 0
	blt      lbl_8008A3F8
	lwz      r3, sManager__8JUTVideo@sda21(r13)
	lwz      r3, 4(r3)
	lhz      r27, 6(r3)
	lhz      r28, 4(r3)
	lhz      r4, 8(r3)
	mr       r3, r27
	bl       GXGetYScaleFactor
	fmr      f31, f1
	mr       r3, r27
	bl       GXGetNumXfbLines
	lwz      r0, 8(r30)
	mr       r29, r3
	addi     r3, r1, 0xc
	stw      r0, 0xc(r1)
	lwz      r4, 0xc(r30)
	bl       GXSetCopyClear
	mr       r5, r28
	mr       r6, r27
	li       r3, 0
	li       r4, 0
	bl       GXSetDispCopySrc
	mr       r3, r28
	mr       r4, r29
	bl       GXSetDispCopyDst
	fmr      f1, f31
	bl       GXSetDispCopyYScale
	bl       VIFlush
	lwz      r3, sManager__8JUTVideo@sda21(r13)
	li       r5, 1
	lwz      r4, 4(r3)
	lbz      r3, 0x19(r4)
	addi     r6, r4, 0x32
	addi     r4, r4, 0x1a
	bl       GXSetCopyFilter
	lhz      r3, 0x26(r30)
	bl       GXSetCopyClamp
	lhz      r3, 0x14(r30)
	bl       GXSetDispCopyGamma
	li       r3, 1
	li       r4, 3
	li       r5, 1
	bl       GXSetZMode
	lbz      r0, 0x24(r30)
	cmplwi   r0, 0
	beq      lbl_8008A2F4
	li       r3, 1
	bl       GXSetAlphaUpdate

lbl_8008A2F4:
	bl       JFWDrawDoneAlarm__Fv
	bl       GXFlush
	lha      r0, 0x14(r31)
	sth      r0, 0x16(r31)
	b        lbl_8008A3F8

lbl_8008A308:
	lha      r0, 0x14(r31)
	cmpwi    r0, 0
	blt      lbl_8008A3F8
	lwz      r3, sManager__8JUTVideo@sda21(r13)
	lwz      r3, 4(r3)
	lhz      r28, 6(r3)
	lhz      r27, 4(r3)
	lhz      r4, 8(r3)
	mr       r3, r28
	bl       GXGetYScaleFactor
	fmr      f31, f1
	mr       r3, r28
	bl       GXGetNumXfbLines
	lwz      r0, 8(r30)
	mr       r29, r3
	addi     r3, r1, 8
	stw      r0, 8(r1)
	lwz      r4, 0xc(r30)
	bl       GXSetCopyClear
	mr       r5, r27
	mr       r6, r28
	li       r3, 0
	li       r4, 0
	bl       GXSetDispCopySrc
	mr       r3, r27
	mr       r4, r29
	bl       GXSetDispCopyDst
	fmr      f1, f31
	bl       GXSetDispCopyYScale
	bl       VIFlush
	lwz      r3, sManager__8JUTVideo@sda21(r13)
	li       r5, 1
	lwz      r4, 4(r3)
	lbz      r3, 0x19(r4)
	addi     r6, r4, 0x32
	addi     r4, r4, 0x1a
	bl       GXSetCopyFilter
	lhz      r3, 0x26(r30)
	bl       GXSetCopyClamp
	lhz      r3, 0x14(r30)
	bl       GXSetDispCopyGamma
	li       r3, 1
	li       r4, 3
	li       r5, 1
	bl       GXSetZMode
	lbz      r0, 0x24(r30)
	cmplwi   r0, 0
	beq      lbl_8008A3D0
	li       r3, 1
	bl       GXSetAlphaUpdate

lbl_8008A3D0:
	lha      r3, 0x14(r31)
	extsh.   r0, r3
	blt      lbl_8008A3E8
	slwi     r0, r3, 2
	lwzx     r3, r31, r0
	b        lbl_8008A3EC

lbl_8008A3E8:
	li       r3, 0

lbl_8008A3EC:
	li       r4, 1
	bl       GXCopyDisp
	bl       GXPixModeSync

lbl_8008A3F8:
	lwz      r27, sManager__10JUTProcBar@sda21(r13)
	li       r4, 0xff
	li       r3, 0x81
	li       r0, 0x1e
	stb      r4, 0x38(r27)
	stb      r3, 0x39(r27)
	stb      r0, 0x3a(r27)
	bl       OSGetTick
	stw      r3, 0x28(r27)
	mr       r3, r30
	bl       calcCombinationRatio__10JFWDisplayFv
	psq_l    f31, 280(r1), 0, qr0
	lfd      f31, 0x110(r1)
	lmw      r27, 0xfc(r1)
	lwz      r0, 0x124(r1)
	mtlr     r0
	addi     r1, r1, 0x120
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008A440
 * Size:	000198
 */
void JFWDisplay::endFrame()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r31, sManager__10JUTProcBar@sda21(r13)
	bl       OSGetTick
	lis      r5, 0x800000F8@ha
	lis      r4, 0x431BDE83@ha
	lwz      r0, 0x800000F8@l(r5)
	addi     r4, r4, 0x431BDE83@l
	lwz      r5, 0x28(r31)
	srwi     r0, r0, 2
	mulhwu   r0, r4, r0
	subf     r3, r5, r3
	slwi     r3, r3, 3
	srwi     r0, r0, 0xf
	divwu    r0, r3, r0
	stw      r0, 0x2c(r31)
	lwz      r0, 0x2c(r31)
	cmplwi   r0, 0
	bne      lbl_8008A49C
	li       r0, 1
	stw      r0, 0x2c(r31)

lbl_8008A49C:
	lwz      r31, sManager__10JUTProcBar@sda21(r13)
	li       r4, 0xff
	li       r3, 0x81
	li       r0, 0x1e
	stb      r4, 0x4c(r31)
	stb      r3, 0x4d(r31)
	stb      r0, 0x4e(r31)
	bl       OSGetTick
	stw      r3, 0x3c(r31)
	lwz      r3, sManager__6JUTXfb@sda21(r13)
	lwz      r0, 0x10(r3)
	cmpwi    r0, 2
	beq      lbl_8008A4E4
	bge      lbl_8008A4D8
	b        lbl_8008A4F8

lbl_8008A4D8:
	cmpwi    r0, 4
	bge      lbl_8008A4F8
	b        lbl_8008A4F0

lbl_8008A4E4:
	bl       JFWDrawDoneAlarm__Fv
	bl       GXFlush
	b        lbl_8008A4F8

lbl_8008A4F0:
	bl       JFWDrawDoneAlarm__Fv
	bl       GXFlush

lbl_8008A4F8:
	lwz      r31, sManager__10JUTProcBar@sda21(r13)
	bl       OSGetTick
	lis      r5, 0x800000F8@ha
	lis      r4, 0x431BDE83@ha
	lwz      r0, 0x800000F8@l(r5)
	addi     r4, r4, 0x431BDE83@l
	lwz      r5, 0x3c(r31)
	srwi     r0, r0, 2
	mulhwu   r0, r4, r0
	subf     r3, r5, r3
	slwi     r3, r3, 3
	srwi     r0, r0, 0xf
	divwu    r0, r3, r0
	stw      r0, 0x40(r31)
	lwz      r0, 0x40(r31)
	cmplwi   r0, 0
	bne      lbl_8008A544
	li       r0, 1
	stw      r0, 0x40(r31)

lbl_8008A544:
	lwz      r31, sManager__10JUTProcBar@sda21(r13)
	bl       OSGetTick
	lis      r5, 0x800000F8@ha
	lis      r4, 0x431BDE83@ha
	lwz      r0, 0x800000F8@l(r5)
	addi     r4, r4, 0x431BDE83@l
	lwz      r5, 0x14(r31)
	srwi     r0, r0, 2
	mulhwu   r0, r4, r0
	subf     r3, r5, r3
	slwi     r3, r3, 3
	srwi     r0, r0, 0xf
	divwu    r0, r3, r0
	stw      r0, 0x18(r31)
	lwz      r0, 0x18(r31)
	cmplwi   r0, 0
	bne      lbl_8008A590
	li       r0, 1
	stw      r0, 0x18(r31)

lbl_8008A590:
	lbz      r0, init$3379@sda21(r13)
	extsb.   r0, r0
	bne      lbl_8008A5AC
	bl       VIGetRetraceCount
	li       r0, 1
	stw      r3, prevFrame$3378@sda21(r13)
	stb      r0, init$3379@sda21(r13)

lbl_8008A5AC:
	bl       VIGetRetraceCount
	lwz      r0, prevFrame$3378@sda21(r13)
	lwz      r4, sManager__10JUTProcBar@sda21(r13)
	subf     r0, r0, r3
	stw      r0, 0x104(r4)
	stw      r3, prevFrame$3378@sda21(r13)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008A5D8
 * Size:	000050
 */
void JFWDisplay::waitBlanking(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	b        lbl_8008A604

lbl_8008A5F8:
	lwz      r3, 0x20(r30)
	lhz      r4, 0x1c(r30)
	bl       waitForTick__FUlUs

lbl_8008A604:
	cmpwi    r31, 0
	addi     r31, r31, -1
	bgt      lbl_8008A5F8
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
 * Address:	8008A628
 * Size:	000120
 */
void waitForTick(unsigned long, unsigned short)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	or.      r31, r3, r3
	stw      r30, 0x18(r1)
	mr       r30, r4
	beq      lbl_8008A6C8
	lbz      r0, init$3424@sda21(r13)
	extsb.   r0, r0
	bne      lbl_8008A668
	bl       OSGetTime
	li       r0, 1
	stw      r4, lbl_8051507C@sda21(r13)
	stw      r3, nextTick$3423@sda21(r13)
	stb      r0, init$3424@sda21(r13)

lbl_8008A668:
	bl       OSGetTime
	mr       r8, r3
	b        lbl_8008A68C

lbl_8008A674:
	subfc    r6, r4, r6
	lwz      r3, sManager__10JFWDisplay@sda21(r13)
	subfe    r5, r8, r7
	bl       threadSleep__10JFWDisplayFx
	bl       OSGetTime
	mr       r8, r3

lbl_8008A68C:
	lwz      r7, nextTick$3423@sda21(r13)
	xoris    r5, r8, 0x8000
	lwz      r6, lbl_8051507C@sda21(r13)
	xoris    r3, r7, 0x8000
	subfc    r0, r6, r4
	subfe    r3, r3, r5
	subfe    r3, r5, r5
	neg.     r3, r3
	bne      lbl_8008A674
	addc     r3, r4, r31
	li       r0, 0
	adde     r0, r8, r0
	stw      r3, lbl_8051507C@sda21(r13)
	stw      r0, nextTick$3423@sda21(r13)
	b        lbl_8008A730

lbl_8008A6C8:
	lbz      r0, init$3432@sda21(r13)
	extsb.   r0, r0
	bne      lbl_8008A6E4
	bl       VIGetRetraceCount
	li       r0, 1
	stw      r3, nextCount$3431@sda21(r13)
	stb      r0, init$3432@sda21(r13)

lbl_8008A6E4:
	clrlwi.  r0, r30, 0x10
	li       r30, 1
	beq      lbl_8008A6F4
	mr       r30, r0

lbl_8008A6F4:
	li       r31, 0

lbl_8008A6F8:
	lwz      r3, sManager__8JUTVideo@sda21(r13)
	addi     r4, r1, 8
	li       r5, 1
	addi     r3, r3, 0x38
	bl       OSReceiveMessage
	cmpwi    r3, 0
	bne      lbl_8008A718
	stw      r31, 8(r1)

lbl_8008A718:
	lwz      r0, nextCount$3431@sda21(r13)
	lwz      r3, 8(r1)
	subf.    r0, r0, r3
	blt      lbl_8008A6F8
	add      r0, r3, r30
	stw      r0, nextCount$3431@sda21(r13)

lbl_8008A730:
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
 * Address:	8008A748
 * Size:	000040
 */
void JFWThreadAlarmHandler(OSAlarm*, OSContext*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, sList__8JFWAlarm@ha
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r4, sList__8JFWAlarm@l
	addi     r4, r31, 0x2c
	bl       remove__10JSUPtrListFP10JSUPtrLink
	lwz      r3, 0x28(r31)
	bl       OSResumeThread
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008A788
 * Size:	0000BC
 */
void JFWDisplay::threadSleep(long long)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	addi     r4, r1, 8
	stw      r31, 0x5c(r1)
	addi     r31, r1, 0x34
	mr       r3, r31
	stw      r30, 0x58(r1)
	stw      r29, 0x54(r1)
	mr       r29, r5
	stw      r28, 0x50(r1)
	mr       r28, r6
	bl       __ct__10JSUPtrLinkFPv
	addi     r3, r1, 8
	bl       OSCreateAlarm
	bl       OSGetCurrentThread
	stw      r3, 0x30(r1)
	bl       OSDisableInterrupts
	lis      r4, sList__8JFWAlarm@ha
	mr       r30, r3
	addi     r0, r4, sList__8JFWAlarm@l
	mr       r4, r31
	mr       r3, r0
	bl       append__10JSUPtrListFP10JSUPtrLink
	lis      r3, JFWThreadAlarmHandler__FP7OSAlarmP9OSContext@ha
	mr       r6, r28
	addi     r7, r3, JFWThreadAlarmHandler__FP7OSAlarmP9OSContext@l
	mr       r5, r29
	addi     r3, r1, 8
	bl       OSSetAlarm
	lwz      r3, 0x30(r1)
	bl       OSSuspendThread
	mr       r3, r30
	bl       OSRestoreInterrupts
	cmplwi   r31, 0
	beq      lbl_8008A824
	mr       r3, r31
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_8008A824:
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	lwz      r29, 0x54(r1)
	lwz      r28, 0x50(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
JFWAlarm::~JFWAlarm()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
// void JSULink<JFWAlarm>::~JSULink()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000158
 */
void JFWDisplay::changeToSingleXfb(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void JFWDisplay::changeToDoubleXfb()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00019C
 */
void JFWDisplay::deleteToSingleXfb(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001C8
 */
void JFWDisplay::deleteToSingleXfb(void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void JFWDisplay::addToDoubleXfb(void*, bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void JFWDisplay::addToDoubleXfb(JKRHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8008A844
 * Size:	000074
 */
void JFWDisplay::clearEfb_init()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, clear_z_tobj@ha
	lis      r4, clear_z_TX@ha
	stw      r0, 0x14(r1)
	addi     r3, r3, clear_z_tobj@l
	li       r5, 4
	addi     r4, r4, clear_z_TX@l
	li       r6, 4
	li       r7, 0x16
	li       r8, 1
	li       r9, 1
	li       r10, 0
	bl       GXInitTexObj
	lfs      f1, lbl_80516B10@sda21(r2)
	lis      r3, clear_z_tobj@ha
	addi     r3, r3, clear_z_tobj@l
	li       r4, 0
	fmr      f2, f1
	li       r5, 0
	fmr      f3, f1
	li       r6, 0
	li       r7, 0
	li       r8, 0
	bl       GXInitTexObjLOD
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void JFWDisplay::clearEfb()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8008A8B8
 * Size:	000044
 */
void JFWDisplay::clearEfb(_GXColor)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	addi     r8, r1, 8
	lwz      r0, 0(r4)
	li       r4, 0
	lwz      r5, sManager__8JUTVideo@sda21(r13)
	lwz      r7, 4(r5)
	li       r5, 0
	lhz      r6, 4(r7)
	lhz      r7, 6(r7)
	stw      r0, 8(r1)
	bl       clearEfb__10JFWDisplayFiiii8_GXColor
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008A8FC
 * Size:	000370
 */
void JFWDisplay::clearEfb(int, int, int, int, _GXColor)
{
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	lfs      f1, lbl_80516B10@sda21(r2)
	stw      r0, 0x94(r1)
	lis      r0, 0x4330
	lfd      f4, lbl_80516B20@sda21(r2)
	fmr      f3, f1
	stmw     r24, 0x70(r1)
	mr       r29, r3
	fmr      f5, f1
	lfs      f6, lbl_80516B18@sda21(r2)
	stw      r0, 0x50(r1)
	mr       r30, r4
	mr       r31, r5
	stw      r0, 0x58(r1)
	mr       r24, r6
	mr       r25, r7
	mr       r26, r8
	lwz      r9, sManager__8JUTVideo@sda21(r13)
	lwz      r3, 4(r9)
	lhz      r28, 4(r3)
	lhz      r27, 6(r3)
	addi     r3, r1, 0xc
	stw      r28, 0x5c(r1)
	stw      r27, 0x54(r1)
	lfd      f0, 0x58(r1)
	lfd      f2, 0x50(r1)
	fsubs    f2, f2, f4
	fsubs    f4, f0, f4
	bl       C_MTXOrtho
	addi     r3, r1, 0xc
	li       r4, 1
	bl       GXSetProjection
	lis      r0, 0x4330
	lfs      f1, lbl_80516B10@sda21(r2)
	stw      r28, 0x64(r1)
	lfd      f4, lbl_80516B20@sda21(r2)
	fmr      f2, f1
	stw      r0, 0x60(r1)
	fmr      f5, f1
	lfs      f6, lbl_80516B18@sda21(r2)
	lfd      f0, 0x60(r1)
	stw      r27, 0x6c(r1)
	fsubs    f3, f0, f4
	stw      r0, 0x68(r1)
	lfd      f0, 0x68(r1)
	fsubs    f4, f0, f4
	bl       GXSetViewport
	mr       r5, r28
	mr       r6, r27
	li       r3, 0
	li       r4, 0
	bl       GXSetScissor
	lis      r3, e_mtx@ha
	li       r4, 0
	addi     r3, r3, e_mtx@l
	bl       GXLoadPosMtxImm
	li       r3, 0
	bl       GXSetCurrentMtx
	bl       GXClearVtxDesc
	li       r3, 9
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0xd
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0
	li       r4, 9
	li       r5, 0
	li       r6, 2
	li       r7, 0
	bl       GXSetVtxAttrFmt
	li       r3, 0
	li       r4, 0xd
	li       r5, 1
	li       r6, 0
	li       r7, 0
	bl       GXSetVtxAttrFmt
	li       r3, 0
	bl       GXSetNumChans
	li       r3, 4
	li       r4, 0
	li       r5, 0
	li       r6, 0
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
	li       r3, 1
	bl       GXSetNumTexGens
	li       r3, 0
	li       r4, 1
	li       r5, 4
	li       r6, 0x3c
	li       r7, 0
	li       r8, 0x7d
	bl       GXSetTexCoordGen2
	lis      r3, clear_z_tobj@ha
	li       r4, 0
	addi     r3, r3, clear_z_tobj@l
	bl       GXLoadTexObj
	li       r3, 1
	bl       GXSetNumTevStages
	lwz      r0, 0(r26)
	addi     r4, r1, 8
	li       r3, 1
	stw      r0, 8(r1)
	bl       GXSetTevColor
	li       r3, 0
	li       r4, 0
	li       r5, 0
	li       r6, 0xff
	bl       GXSetTevOrder
	li       r3, 0
	li       r4, 0xf
	li       r5, 0xf
	li       r6, 0xf
	li       r7, 2
	bl       GXSetTevColorIn
	li       r3, 0
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 1
	li       r8, 0
	bl       GXSetTevColorOp
	li       r3, 0
	li       r4, 7
	li       r5, 7
	li       r6, 7
	li       r7, 1
	bl       GXSetTevAlphaIn
	li       r3, 0
	li       r4, 0
	li       r5, 0
	li       r6, 0
	li       r7, 1
	li       r8, 0
	bl       GXSetTevAlphaOp
	li       r3, 7
	li       r4, 0
	li       r5, 1
	li       r6, 7
	li       r7, 0
	bl       GXSetAlphaCompare
	li       r3, 2
	li       r4, 0x16
	li       r5, 0
	bl       GXSetZTexture
	li       r3, 0
	bl       GXSetZCompLoc
	li       r3, 0
	li       r4, 0
	li       r5, 0
	li       r6, 5
	bl       GXSetBlendMode
	lbz      r0, 0x24(r29)
	cmplwi   r0, 0
	beq      lbl_8008ABAC
	li       r3, 1
	bl       GXSetAlphaUpdate
	li       r3, 1
	li       r4, 0
	bl       GXSetDstAlpha

lbl_8008ABAC:
	li       r3, 1
	li       r4, 7
	li       r5, 1
	bl       GXSetZMode
	li       r3, 2
	bl       GXSetCullMode
	li       r3, 0x80
	li       r4, 0
	li       r5, 4
	bl       GXBegin
	lis      r7, 0xCC008000@ha
	li       r6, 0
	sth      r30, 0xCC008000@l(r7)
	add      r8, r30, r24
	li       r0, 1
	add      r9, r31, r25
	sth      r31, -0x8000(r7)
	li       r3, 0
	li       r4, 0x16
	li       r5, 0
	stb      r6, -0x8000(r7)
	stb      r6, -0x8000(r7)
	sth      r8, -0x8000(r7)
	sth      r31, -0x8000(r7)
	stb      r0, -0x8000(r7)
	stb      r6, -0x8000(r7)
	sth      r8, -0x8000(r7)
	sth      r9, -0x8000(r7)
	stb      r0, -0x8000(r7)
	stb      r0, -0x8000(r7)
	sth      r30, -0x8000(r7)
	sth      r9, -0x8000(r7)
	stb      r6, -0x8000(r7)
	stb      r0, -0x8000(r7)
	bl       GXSetZTexture
	li       r3, 1
	bl       GXSetZCompLoc
	lbz      r0, 0x24(r29)
	cmplwi   r0, 0
	beq      lbl_8008AC58
	li       r3, 0
	li       r4, 0
	bl       GXSetDstAlpha

lbl_8008AC58:
	lmw      r24, 0x70(r1)
	lwz      r0, 0x94(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001D4
 */
void JFWDisplay::clearAllXfb()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8008AC6C
 * Size:	00008C
 */
void JFWDisplay::calcCombinationRatio()
{
	/*
	stwu     r1, -0x20(r1)
	lwz      r5, sVideoInterval__8JUTVideo@sda21(r13)
	lwz      r6, 0x30(r3)
	mr       r7, r5
	slwi     r0, r6, 1
	b        lbl_8008AC88

lbl_8008AC84:
	add      r7, r7, r5

lbl_8008AC88:
	cmpw     r7, r0
	blt      lbl_8008AC84
	lwz      r4, 0x34(r3)
	subf     r0, r0, r7
	subf.    r4, r4, r0
	bge      lbl_8008ACA4
	add      r4, r4, r5

lbl_8008ACA4:
	lis      r0, 0x4330
	xoris    r4, r4, 0x8000
	stw      r4, 0xc(r1)
	lfd      f1, lbl_80516B28@sda21(r2)
	stw      r0, 8(r1)
	lfd      f2, lbl_80516B20@sda21(r2)
	lfd      f0, 8(r1)
	stw      r6, 0x14(r1)
	fsubs    f3, f0, f1
	lfs      f0, lbl_80516B18@sda21(r2)
	stw      r0, 0x10(r1)
	lfd      f1, 0x10(r1)
	fsubs    f1, f1, f2
	fdivs    f1, f3, f1
	stfs     f1, 0x28(r3)
	lfs      f1, 0x28(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_8008ACF0
	stfs     f0, 0x28(r3)

lbl_8008ACF0:
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JFWDisplay::frameToTick(float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8008ACF8
 * Size:	0000F0
 */
void JFWDrawDoneAlarm()
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	addi     r4, r1, 8
	stw      r31, 0x5c(r1)
	addi     r31, r1, 0x34
	mr       r3, r31
	stw      r30, 0x58(r1)
	bl       __ct__10JSUPtrLinkFPv
	bl       OSDisableInterrupts
	mr       r0, r3
	addi     r3, r1, 8
	mr       r30, r0
	bl       OSCreateAlarm
	lis      r3, sList__8JFWAlarm@ha
	mr       r4, r31
	addi     r3, r3, sList__8JFWAlarm@l
	bl       append__10JSUPtrListFP10JSUPtrLink
	mr       r3, r30
	bl       OSRestoreInterrupts
	lis      r3, 0x800000F8@ha
	lis      r0, 0x4330
	lwz      r3, 0x800000F8@l(r3)
	stw      r0, 0x48(r1)
	srwi     r0, r3, 2
	lfd      f1, lbl_80516B20@sda21(r2)
	stw      r0, 0x4c(r1)
	lfd      f2, lbl_80516B30@sda21(r2)
	lfd      f0, 0x48(r1)
	fsub     f0, f0, f1
	fmul     f1, f2, f0
	bl       __cvt_dbl_usll
	lis      r6, JFWGXAbortAlarmHandler__FP7OSAlarmP9OSContext@ha
	mr       r5, r3
	addi     r7, r6, JFWGXAbortAlarmHandler__FP7OSAlarmP9OSContext@l
	addi     r3, r1, 8
	mr       r6, r4
	bl       OSSetAlarm
	bl       GXDrawDone
	bl       OSDisableInterrupts
	mr       r30, r3
	addi     r3, r1, 8
	bl       OSCancelAlarm
	lis      r3, sList__8JFWAlarm@ha
	mr       r4, r31
	addi     r3, r3, sList__8JFWAlarm@l
	bl       remove__10JSUPtrListFP10JSUPtrLink
	mr       r3, r30
	bl       OSRestoreInterrupts
	cmplwi   r31, 0
	beq      lbl_8008ADD0
	mr       r3, r31
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_8008ADD0:
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008ADE8
 * Size:	000040
 */
void JFWGXAbortAlarmHandler(OSAlarm*, OSContext*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       diagnoseGpHang__Fv
	bl       GXAbortFrame
	li       r0, 0x61
	lis      r4, 0xCC008000@ha
	lis      r3, 0x5800000F@ha
	stb      r0, 0xCC008000@l(r4)
	addi     r0, r3, 0x5800000F@l
	stw      r0, -0x8000(r4)
	bl       GXSetDrawDone
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008AE28
 * Size:	0001BC
 */
void diagnoseGpHang()
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	lis      r4, lbl_804789E0@ha
	stw      r0, 0x54(r1)
	addi     r3, r1, 0x24
	addi     r5, r1, 0x1c
	addi     r6, r1, 0x20
	stmw     r27, 0x3c(r1)
	addi     r31, r4, lbl_804789E0@l
	addi     r4, r1, 0x28
	bl       GXReadXfRasMetric
	addi     r3, r1, 0x14
	addi     r4, r1, 0x18
	addi     r5, r1, 0xc
	addi     r6, r1, 0x10
	bl       GXReadXfRasMetric
	lwz      r8, 0x20(r1)
	addi     r3, r1, 8
	lwz      r6, 0x10(r1)
	mr       r4, r3
	lwz      r10, 0x28(r1)
	mr       r7, r3
	subf     r8, r8, r6
	lwz      r9, 0x18(r1)
	neg      r6, r8
	lwz      r5, 0x1c(r1)
	lwz      r0, 0xc(r1)
	or       r6, r6, r8
	subf     r8, r10, r9
	lwz      r9, 0x24(r1)
	cntlzw   r10, r8
	subf     r5, r5, r0
	neg      r0, r5
	lwz      r8, 0x14(r1)
	or       r0, r0, r5
	srwi     r5, r6, 0x1f
	subf     r6, r9, r8
	rlwinm   r30, r10, 0x1b, 0x18, 0x1f
	cntlzw   r6, r6
	srwi     r0, r0, 0x1f
	mr       r28, r5
	addi     r5, r1, 0xa
	rlwinm   r29, r6, 0x1b, 0x18, 0x1f
	mr       r27, r0
	addi     r6, r1, 9
	bl       GXGetGPStatus
	lbz      r4, 0xa(r1)
	mr       r6, r30
	lbz      r5, 9(r1)
	mr       r7, r29
	mr       r8, r28
	mr       r9, r27
	addi     r3, r31, 0
	crclr    6
	bl       OSReport
	cmplwi   r29, 0
	bne      lbl_8008AF24
	cmplwi   r28, 0
	beq      lbl_8008AF24
	addi     r3, r31, 0x1c
	crclr    6
	bl       OSReport
	b        lbl_8008AFD0

lbl_8008AF24:
	cmplwi   r30, 0
	bne      lbl_8008AF4C
	cmplwi   r29, 0
	beq      lbl_8008AF4C
	cmplwi   r28, 0
	beq      lbl_8008AF4C
	addi     r3, r31, 0x3c
	crclr    6
	bl       OSReport
	b        lbl_8008AFD0

lbl_8008AF4C:
	lbz      r3, 9(r1)
	cmplwi   r3, 0
	bne      lbl_8008AF80
	cmplwi   r30, 0
	beq      lbl_8008AF80
	cmplwi   r29, 0
	beq      lbl_8008AF80
	cmplwi   r28, 0
	beq      lbl_8008AF80
	addi     r3, r31, 0x64
	crclr    6
	bl       OSReport
	b        lbl_8008AFD0

lbl_8008AF80:
	lbz      r0, 0xa(r1)
	cmplwi   r0, 0
	beq      lbl_8008AFC4
	cmplwi   r3, 0
	beq      lbl_8008AFC4
	cmplwi   r30, 0
	beq      lbl_8008AFC4
	cmplwi   r29, 0
	beq      lbl_8008AFC4
	cmplwi   r28, 0
	beq      lbl_8008AFC4
	cmplwi   r27, 0
	beq      lbl_8008AFC4
	addi     r3, r31, 0x8c
	crclr    6
	bl       OSReport
	b        lbl_8008AFD0

lbl_8008AFC4:
	addi     r3, r31, 0xbc
	crclr    6
	bl       OSReport

lbl_8008AFD0:
	lmw      r27, 0x3c(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008AFE4
 * Size:	000094
 */
void JFWDisplay::setForOSResetSystem()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, sList__8JFWAlarm@ha
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	lwz      r31, sList__8JFWAlarm@l(r3)
	b        lbl_8008B00C

lbl_8008B000:
	lwz      r3, 0(r31)
	bl       OSCancelAlarm
	lwz      r31, 0xc(r31)

lbl_8008B00C:
	cmplwi   r31, 0
	bne      lbl_8008B000
	bl       destroyManager__8JUTVideoFv
	li       r3, 1
	bl       VISetBlack
	bl       VIFlush
	bl       VIWaitForRetrace
	lwz      r3, sManager__10JFWDisplay@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8008B064
	li       r0, 0
	stw      r0, 4(r3)
	lwz      r3, sManager__10JFWDisplay@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8008B05C
	lwz      r12, 0(r3)
	li       r4, 1
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8008B05C:
	li       r0, 0
	stw      r0, sManager__10JFWDisplay@sda21(r13)

lbl_8008B064:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008B078
 * Size:	000048
 */
void __sinit_JFWDisplay_cpp(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r3, sList__8JFWAlarm@ha
	li       r4, 0
	stw      r0, 0x14(r1)
	addi     r3, r3, sList__8JFWAlarm@l
	bl       __ct__10JSUPtrListFb
	lis      r3, sList__8JFWAlarm@ha
	lis      r4, "__dt__18JSUList<8JFWAlarm>Fv"@ha
	lis      r5, lbl_804F0520@ha
	addi     r3, r3, sList__8JFWAlarm@l
	addi     r4, r4, "__dt__18JSUList<8JFWAlarm>Fv"@l
	addi     r5, r5, lbl_804F0520@l
	bl       __register_global_object
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008B0C0
 * Size:	000054
 */
// void JSUList<JFWAlarm>::~JSUList()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r4
// 	stw      r30, 8(r1)
// 	or.      r30, r3, r3
// 	beq      lbl_8008B0F8
// 	li       r4, 0
// 	bl       __dt__10JSUPtrListFv
// 	extsh.   r0, r31
// 	ble      lbl_8008B0F8
// 	mr       r3, r30
// 	bl       __dl__FPv

// lbl_8008B0F8:
// 	lwz      r0, 0x14(r1)
// 	mr       r3, r30
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }
