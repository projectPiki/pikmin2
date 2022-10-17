#include "Section.h"
#include "JSystem/JKR/JKRHeap.h"
#include "JSystem/JUT/JUTException.h"
#include "System.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
        .4byte __sinit_section_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_804999F0
    lbl_804999F0:
        .skip 0xC
        .asciz "PSGame.h"
        .skip 3
        .asciz "P2Assert"
        .skip 3
        .asciz "PSScene.h"
        .skip 2
        .asciz "section.cpp"
        .asciz "no Display manager.\n"
        .skip 7

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804EBB80
    lbl_804EBB80:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__7Section
    __vt__7Section:
        .4byte 0
        .4byte 0
        .4byte __dt__7SectionFv
        .4byte run__7SectionFv
        .4byte update__7SectionFv
        .4byte draw__7SectionFR8Graphics
        .4byte init__7SectionFv
        .4byte drawInit__7SectionFR8Graphics
        .4byte drawInit__7SectionFR8GraphicsQ27Section13EDrawInitMode
        .4byte doExit__7SectionFv
        .4byte forceFinish__7SectionFv
        .4byte forceReset__7SectionFv
        .4byte getCurrentSection__7SectionFv
        .4byte doLoadingStart__7SectionFv
        .4byte doLoading__7SectionFv
        .4byte 0
        .4byte 0
        .4byte isFinishable__7SectionFv
    .global __vt__8ISection
    __vt__8ISection:
        .4byte 0
        .4byte 0
        .4byte __dt__8ISectionFv
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80516178
    lbl_80516178:
        .skip 0x4
    .global lbl_8051617C
    lbl_8051617C:
        .skip 0x4
    .global sPlayTime
    sPlayTime:
        .skip 0x4
    .global lbl_80516184
    lbl_80516184:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80520440
    lbl_80520440:
        .float 0.5
    .global lbl_80520444
    lbl_80520444:
        .float 0.016666668
    .global lbl_80520448
    lbl_80520448:
        .float 0.0
    .global lbl_8052044C
    lbl_8052044C:
        .asciz "draw"
        .skip 0x3
    .global lbl_80520454
    lbl_80520454:
        .asciz "update"
        .skip 0x1
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	80423770
 * Size:	000004
 */
void Section::init() { }

/*
 * --INFO--
 * Address:	80423774
 * Size:	0001D0
 */
Section::Section(JFWDisplay*, JKRHeap*, bool)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r27, 0x1c(r1)
	mr       r31, r3
	mr       r0, r31
	mr       r28, r4
	mr       r29, r5
	mr       r30, r6
	mr       r27, r0
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__8ISection@ha
	lis      r4, __vt__7Section@ha
	addi     r0, r3, __vt__8ISection@l
	li       r3, 0
	stw      r0, 0(r27)
	addi     r4, r4, __vt__7Section@l
	lfs      f0, lbl_80520440@sda21(r2)
	li       r0, 1
	stw      r4, 0(r31)
	cmplwi   r29, 0
	stb      r3, 0x37(r31)
	stw      r3, 0x1c(r31)
	stw      r3, 0x20(r31)
	stw      r3, 0x24(r31)
	stw      r3, 0x28(r31)
	stw      r3, 0x18(r31)
	stfs     f0, 0x30(r31)
	stb      r0, 0x34(r31)
	stb      r3, 0x36(r31)
	stb      r3, 0x35(r31)
	stb      r3, 0x38(r31)
	beq      lbl_80423820
	mr       r3, r29
	bl       getFreeSize__7JKRHeapFv
	mr       r4, r29
	li       r5, 1
	bl       create__10JKRExpHeapFUlP7JKRHeapb
	stw      r3, 0x1c(r31)
	lwz      r3, 0x1c(r31)
	bl       becomeCurrentHeap__7JKRHeapFv
	stw      r3, 0x20(r31)
	b        lbl_80423844

lbl_80423820:
	lwz      r3, sRootHeap__7JKRHeap@sda21(r13)
	bl       getFreeSize__7JKRHeapFv
	li       r4, 0
	li       r5, 1
	bl       create__10JKRExpHeapFUlP7JKRHeapb
	stw      r3, 0x1c(r31)
	lwz      r3, 0x1c(r31)
	bl       becomeCurrentHeap__7JKRHeapFv
	stw      r3, 0x20(r31)

lbl_80423844:
	clrlwi.  r0, r30, 0x18
	beq      lbl_80423904
	cmplwi   r28, 0
	beq      lbl_8042386C
	stw      r28, 0x24(r31)
	li       r0, 0
	lwz      r3, 4(r28)
	stw      r3, 0x28(r31)
	stb      r0, 0x35(r31)
	b        lbl_80423904

lbl_8042386C:
	lwz      r4, 0x1c(r31)
	li       r3, 0
	li       r5, 2
	li       r6, 0
	bl
createManager__10JFWDisplayFPC16_GXRenderModeObjP7JKRHeapQ26JUTXfb10EXfbNumberb
	stw      r3, 0x24(r31)
	li       r3, 0x28
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_804238D4
	li       r0, 0
	lwz      r6, sManager__8JUTVideo@sda21(r13)
	stb      r0, 8(r1)
	addi     r8, r1, 0xc
	li       r4, 0
	li       r5, 0
	stb      r0, 9(r1)
	stb      r0, 0xa(r1)
	stb      r0, 0xb(r1)
	lwz      r0, 8(r1)
	stw      r0, 0xc(r1)
	lwz      r7, 4(r6)
	lhz      r6, 4(r7)
	lhz      r7, 6(r7)
	bl       __ct__8JUTFaderFiiiiQ28JUtility6TColor
	mr       r0, r3

lbl_804238D4:
	stw      r0, 0x28(r31)
	li       r0, 1
	lwz      r4, 0x28(r31)
	lwz      r3, 0x24(r31)
	stw      r4, 4(r3)
	stb      r0, 0x35(r31)
	lwz      r3, sys@sda21(r13)
	lwz      r4, 0x24(r31)
	bl       setCurrentDisplay__6SystemFP10JFWDisplay
	lwz      r3, sys@sda21(r13)
	li       r4, 1
	bl       setFrameRate__6SystemFi

lbl_80423904:
	li       r3, 0x2a0
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8042391C
	bl       __ct__8GraphicsFv
	mr       r0, r3

lbl_8042391C:
	stw      r0, 0x2c(r31)
	mr       r3, r31
	lwz      r0, 0x2c(r31)
	lwz      r4, sys@sda21(r13)
	stw      r0, 0x24(r4)
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80423944
 * Size:	000060
 */
ISection::~ISection()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80423988
	lis      r5, __vt__8ISection@ha
	li       r4, 0
	addi     r0, r5, __vt__8ISection@l
	stw      r0, 0(r30)
	bl       __dt__11JKRDisposerFv
	extsh.   r0, r31
	ble      lbl_80423988
	mr       r3, r30
	bl       __dl__FPv

lbl_80423988:
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
 * Address:	804239A4
 * Size:	000120
 */
Section::~Section()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	or.      r28, r3, r3
	beq      lbl_80423AA0
	lis      r3, __vt__7Section@ha
	addi     r0, r3, __vt__7Section@l
	stw      r0, 0(r28)
	lbz      r0, 0x35(r28)
	cmplwi   r0, 0
	beq      lbl_80423A30
	lwz      r0, 0x24(r28)
	cmplwi   r0, 0
	beq      lbl_80423A30
	lwz      r3, 0x28(r28)
	cmplwi   r3, 0
	beq      lbl_80423A10
	lwz      r12, 0(r3)
	li       r4, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80423A10:
	lwz      r3, sManager__6JUTXfb@sda21(r13)
	bl       clearIndex__6JUTXfbFv
	bl       destroyManager__10JFWDisplayFv
	lwz      r3, sys@sda21(r13)
	lwz      r4, 0x24(r28)
	bl       clearCurrentDisplay__6SystemFP10JFWDisplay
	li       r0, 0
	stw      r0, 0x24(r28)

lbl_80423A30:
	lwz      r3, 0x1c(r28)
	cmplwi   r3, 0
	beq      lbl_80423A64
	bl       freeAll__7JKRHeapFv
	lwz      r3, 0x1c(r28)
	mr       r31, r3
	bl       getFreeSize__7JKRHeapFv
	addi     r30, r3, 4
	lwz      r3, 0x1c(r28)
	bl       destroy__7JKRHeapFv
	mr       r3, r31
	mr       r4, r30
	bl       DCStoreRange

lbl_80423A64:
	lwz      r3, sys@sda21(r13)
	li       r0, 0
	cmplwi   r28, 0
	stw      r0, 0x24(r3)
	beq      lbl_80423A90
	lis      r4, __vt__8ISection@ha
	mr       r3, r28
	addi     r0, r4, __vt__8ISection@l
	li       r4, 0
	stw      r0, 0(r28)
	bl       __dt__11JKRDisposerFv

lbl_80423A90:
	extsh.   r0, r29
	ble      lbl_80423AA0
	mr       r3, r28
	bl       __dl__FPv

lbl_80423AA0:
	lwz      r0, 0x24(r1)
	mr       r3, r28
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void Section::loading()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000120
 */
void Section::fadeIn()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001A4
 */
void Section::main()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001D0
 */
void Section::fadeOut()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80423AC4
 * Size:	0004B8
 */
void Section::run()
{
	// P2ASSERTLINE(543, m_display != nullptr);
	// m_display->waitBlanking(1);
	// doLoadingStart();
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
	stw      r28, 0x10(r1)
	mr       r30, r3
	lis      r3, lbl_804999F0@ha
	lwz      r0, 0x24(r30)
	addi     r31, r3, lbl_804999F0@l
	cmplwi   r0, 0
	bne      lbl_80423B1C
	addi     r3, r31, 0x30
	addi     r5, r31, 0x3c
	li       r4, 0x21f
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80423B1C:
	lwz      r3, 0x24(r30)
	li       r4, 1
	bl       waitBlanking__10JFWDisplayFi
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl

lbl_80423B3C:
	mr       r3, r30
	bl       beginFrame__7SectionFv
	mr       r3, r30
	bl       beginRender__7SectionFv
	mr       r3, r30
	bl       endRender__7SectionFv
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	mr       r29, r3
	mr       r3, r30
	bl       endFrame__7SectionFv
	clrlwi.  r0, r29, 0x18
	bne      lbl_80423B3C
	lwz      r3, sys@sda21(r13)
	bl       isDvdErrorOccured__6SystemFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80423B3C
	mr       r3, r30
	lwz      r4, 0x2c(r30)
	lwz      r12, 0(r30)
	li       r5, 0
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x30(r30)
	lfs      f1, lbl_80520444@sda21(r2)
	lfs      f0, lbl_80520448@sda21(r2)
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80423BD0
	lfs      f0, lbl_80520440@sda21(r2)
	fadds    f0, f0, f1
	b        lbl_80423BD8

lbl_80423BD0:
	lfs      f0, lbl_80520440@sda21(r2)
	fsubs    f0, f1, f0

lbl_80423BD8:
	fctiwz   f0, f0
	lwz      r3, 0x24(r30)
	lwz      r3, 4(r3)
	stfd     f0, 8(r1)
	cmplwi   r3, 0
	lwz      r4, 0xc(r1)
	beq      lbl_80423C04
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_80423C04:
	lfs      f30, lbl_80520448@sda21(r2)
	lfs      f31, lbl_80520444@sda21(r2)
	b        lbl_80423C5C

lbl_80423C10:
	mr       r3, r30
	bl       beginFrame__7SectionFv
	mr       r3, r30
	bl       beginRender__7SectionFv
	mr       r3, r30
	lwz      r4, 0x2c(r30)
	lwz      r12, 0(r30)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	bl       endRender__7SectionFv
	mr       r3, r30
	bl       endFrame__7SectionFv
	lwz      r3, sys@sda21(r13)
	bl       isDvdErrorOccured__6SystemFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80423C5C
	fadds    f30, f30, f31

lbl_80423C5C:
	lfs      f0, 0x30(r30)
	fcmpo    cr0, f30, f0
	blt      lbl_80423C10
	mr       r3, r30
	lwz      r4, 0x2c(r30)
	lwz      r12, 0(r30)
	li       r5, 1
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl

lbl_80423C84:
	lwz      r3, sys@sda21(r13)
	lwz      r3, 0x28(r3)
	bl       newFrame__9SysTimersFv
	mr       r3, r30
	bl       beginFrame__7SectionFv
	mr       r3, r30
	bl       beginRender__7SectionFv
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_8052044C@sda21
	li       r5, 1
	lwz      r3, 0x28(r3)
	bl       _start__9SysTimersFPcb
	mr       r3, r30
	lwz      r4, 0x2c(r30)
	lwz      r12, 0(r30)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_8052044C@sda21
	lwz      r3, 0x28(r3)
	bl       _stop__9SysTimersFPc
	mr       r3, r30
	bl       endRender__7SectionFv
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80520454@sda21
	li       r5, 1
	lwz      r3, 0x28(r3)
	bl       _start__9SysTimersFPcb
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80520454@sda21
	lwz      r3, 0x28(r3)
	bl       _stop__9SysTimersFPc
	mr       r3, r30
	bl       endFrame__7SectionFv
	lbz      r0, 0x37(r30)
	cmplwi   r0, 0
	bne      lbl_80423D3C
	lbz      r0, 0x34(r30)
	cmplwi   r0, 0
	bne      lbl_80423C84

lbl_80423D3C:
	lfs      f2, 0x30(r30)
	lfs      f1, lbl_80520444@sda21(r2)
	lfs      f0, lbl_80520448@sda21(r2)
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80423D64
	lfs      f0, lbl_80520440@sda21(r2)
	fadds    f0, f0, f1
	b        lbl_80423D6C

lbl_80423D64:
	lfs      f0, lbl_80520440@sda21(r2)
	fsubs    f0, f1, f0

lbl_80423D6C:
	fctiwz   f0, f0
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	stfd     f0, 8(r1)
	lwz      r29, 0xc(r1)
	bne      lbl_80423D98
	addi     r3, r31, 0xc
	addi     r5, r31, 0x18
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80423D98:
	lwz      r28, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r28, 0
	bne      lbl_80423DB8
	addi     r3, r31, 0xc
	addi     r5, r31, 0x18
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80423DB8:
	lwz      r0, 4(r28)
	cmplwi   r0, 0
	bne      lbl_80423DD8
	addi     r3, r31, 0x24
	addi     r5, r31, 0x18
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80423DD8:
	lwz      r3, 4(r28)
	lwz      r3, 4(r3)
	cmplwi   r3, 0
	beq      lbl_80423DFC
	lwz      r12, 0(r3)
	mr       r4, r29
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl

lbl_80423DFC:
	lwz      r3, 0x24(r30)
	lwz      r3, 4(r3)
	cmplwi   r3, 0
	beq      lbl_80423E20
	lwz      r12, 0(r3)
	mr       r4, r29
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_80423E20:
	mr       r3, r30
	lwz      r4, 0x2c(r30)
	lwz      r12, 0(r30)
	li       r5, 2
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lfs      f30, lbl_80520448@sda21(r2)
	b        lbl_80423EA8

lbl_80423E44:
	mr       r3, r30
	bl       beginFrame__7SectionFv
	mr       r3, r30
	bl       beginRender__7SectionFv
	mr       r3, r30
	lwz      r4, 0x2c(r30)
	lwz      r12, 0(r30)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	bl       endRender__7SectionFv
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	bl       endFrame__7SectionFv
	lwz      r3, sys@sda21(r13)
	bl       isDvdErrorOccured__6SystemFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80423EA8
	lfs      f0, lbl_80520444@sda21(r2)
	fadds    f30, f30, f0

lbl_80423EA8:
	lfs      f0, 0x30(r30)
	fcmpo    cr0, f30, f0
	blt      lbl_80423E44
	b        lbl_80423ED8

lbl_80423EB8:
	mr       r3, r30
	bl       beginFrame__7SectionFv
	mr       r3, r30
	bl       beginRender__7SectionFv
	mr       r3, r30
	bl       endRender__7SectionFv
	mr       r3, r30
	bl       endFrame__7SectionFv

lbl_80423ED8:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80423EB8
	lwz      r3, sys@sda21(r13)
	bl       isDvdErrorOccured__6SystemFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80423EB8
	lbz      r0, 0x37(r30)
	cmplwi   r0, 0
	beq      lbl_80423F4C

lbl_80423F10:
	mr       r3, r30
	bl       beginFrame__7SectionFv
	mr       r3, r30
	bl       beginRender__7SectionFv
	mr       r3, r30
	bl       endRender__7SectionFv
	mr       r3, r30
	bl       endFrame__7SectionFv
	lwz      r3, sys@sda21(r13)
	bl       dvdLoadSyncAllNoBlock__6SystemFv
	cmpwi    r3, 0
	bne      lbl_80423F10
	lbz      r0, gTHPReaderDvdAccess@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80423F10

lbl_80423F4C:
	psq_l    f31, 56(r1), 0, qr0
	lfd      f31, 0x30(r1)
	psq_l    f30, 40(r1), 0, qr0
	lfd      f30, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x44(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	80423F7C
 * Size:	000050
 */
void Section::exit()
{
	doExit();
	_20->becomeCurrentHeap();
	sys->initGenNode();
	sys->refreshGenNode();
}

/*
 * --INFO--
 * Address:	80423FCC
 * Size:	000024
 */
bool Section::beginFrame()
{
	return sys->beginFrame();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, sys@sda21(r13)
	bl       beginFrame__6SystemFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80423FF0
 * Size:	000024
 */
void Section::endFrame()
{
	sys->endFrame();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, sys@sda21(r13)
	bl       endFrame__6SystemFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80424014
 * Size:	000024
 */
void Section::beginRender()
{
	sys->beginRender();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, sys@sda21(r13)
	bl       beginRender__6SystemFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80424038
 * Size:	000040
 */
void Section::endRender()
{
	// if (_18 ) {
	// 	_18->_04();
	// }
	// sys->endRender();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x18(r3)
	cmplwi   r3, 0
	beq      lbl_80424060
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_80424060:
	lwz      r3, sys@sda21(r13)
	bl       endRender__6SystemFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80424078
 * Size:	00007C
 */
bool Section::update()
{
	if (sys->isDvdErrorOccured() == false) {
		return doUpdate();
	}
	sys->m_cardMgr->update();
	return false;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, sys@sda21(r13)
	bl       isDvdErrorOccured__6SystemFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_804240C0
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	mr       r31, r3
	b        lbl_804240D8

lbl_804240C0:
	lwz      r3, sys@sda21(r13)
	lwz      r3, 0x5c(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_804240D8:
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
 * Address:	804240F4
 * Size:	00005C
 */
void Section::draw(Graphics& gfx)
{
	if (sys->isDvdErrorOccured() == false) {
		doDraw(gfx);
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, sys@sda21(r13)
	bl       isDvdErrorOccured__6SystemFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80424138
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl

lbl_80424138:
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
 * Address:	80424150
 * Size:	000054
 */
void __sinit_section_cpp(void)
{
	/*
	lis      r3, 0x800000F8@ha
	lis      r4, __float_nan@ha
	lwz      r0, 0x800000F8@l(r3)
	li       r7, -1
	lfs      f0, __float_nan@l(r4)
	lis      r6, lbl_804EBB80@ha
	srwi     r5, r0, 2
	li       r3, 0x12c
	li       r4, 0
	stfsu    f0, lbl_804EBB80@l(r6)
	mulhwu   r0, r5, r3
	stw      r7, lbl_80516178@sda21(r13)
	stfs     f0, lbl_8051617C@sda21(r13)
	mullw    r3, r4, r3
	stfs     f0, 4(r6)
	stfs     f0, 8(r6)
	mulli    r4, r5, 0x12c
	add      r0, r0, r3
	stw      r0, sPlayTime@sda21(r13)
	stw      r4, lbl_80516184@sda21(r13)
	blr
	*/
}
