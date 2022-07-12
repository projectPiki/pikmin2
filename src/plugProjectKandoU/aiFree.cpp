#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047F260
    lbl_8047F260:
        .asciz "ActFreeArg"
        .skip 1
        .asciz "aiFree.cpp"
        .skip 1
        .asciz "P2Assert"
        .skip 3
        .asciz "ActionArg"
        .skip 2
    .global lbl_8047F290
    lbl_8047F290:
        .asciz "GatherActionArg"

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q26PikiAI15GatherActionArg
    __vt__Q26PikiAI15GatherActionArg:
        .4byte 0
        .4byte 0
        .4byte getName__Q26PikiAI15GatherActionArgFv
    .global __vt__Q26PikiAI7ActFree
    __vt__Q26PikiAI7ActFree:
        .4byte 0
        .4byte 0
        .4byte init__Q26PikiAI7ActFreeFPQ26PikiAI9ActionArg
        .4byte exec__Q26PikiAI7ActFreeFv
        .4byte cleanup__Q26PikiAI7ActFreeFv
        .4byte emotion_success__Q26PikiAI6ActionFv
        .4byte emotion_fail__Q26PikiAI6ActionFv
        .4byte applicable__Q26PikiAI6ActionFv
        .4byte getNextAIType__Q26PikiAI7ActFreeFv
        .4byte bounceCallback__Q26PikiAI6ActionFPQ24Game4PikiPQ23Sys8Triangle
        .4byte
   collisionCallback__Q26PikiAI7ActFreeFPQ24Game4PikiRQ24Game9CollEvent .4byte
   platCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9PlatEvent .4byte
   doDirectDraw__Q26PikiAI6ActionFR8Graphics .4byte
   "wallCallback__Q26PikiAI6ActionFR10Vector3<f>" .4byte
   getInfo__Q26PikiAI6ActionFPc .4byte
   onKeyEvent__Q26PikiAI7ActFreeFRCQ28SysShape8KeyEvent .4byte 0 .4byte 0 .4byte
   "@32@4@onKeyEvent__Q26PikiAI7ActFreeFRCQ28SysShape8KeyEvent"

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80519058
    lbl_80519058:
        .asciz "Free"
        .skip 3
    .global lbl_80519060
    lbl_80519060:
        .float 0.0
    .global lbl_80519064
    lbl_80519064:
        .float 32768.0
    .global lbl_80519068
    lbl_80519068:
        .float 30.0
    .global lbl_8051906C
    lbl_8051906C:
        .float 0.5
    .global lbl_80519070
    lbl_80519070:
        .4byte 0x43300000
        .4byte 0x80000000
*/

#include "PikiAI.h"

namespace PikiAI {
struct ActFree { };
} // namespace PikiAI

/*
 * --INFO--
 * Address:	8019FF38
 * Size:	0000D0
 */
PikiAI::ActFree::ActFree(Game::Piki*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	mr       r30, r5
	beq      lbl_8019FF70
	addi     r0, r31, 0x20
	lis      r3, __vt__Q28SysShape14MotionListener@ha
	stw      r0, 0xc(r31)
	addi     r0, r3, __vt__Q28SysShape14MotionListener@l
	stw      r0, 0x20(r31)

lbl_8019FF70:
	mr       r3, r31
	mr       r4, r30
	bl       __ct__Q26PikiAI6ActionFPQ24Game4Piki
	lis      r3, __vt__Q26PikiAI7ActFree@ha
	addi     r0, r31, 0x20
	addi     r4, r3, __vt__Q26PikiAI7ActFree@l
	li       r3, 0x20
	stw      r4, 0(r31)
	addi     r5, r4, 0x40
	lwz      r4, 0xc(r31)
	stw      r5, 0(r4)
	lwz      r4, 0xc(r31)
	subf     r0, r4, r0
	stw      r0, 4(r4)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8019FFC0
	mr       r4, r30
	bl       __ct__Q26PikiAI9ActGatherFPQ24Game4Piki
	mr       r0, r3

lbl_8019FFC0:
	stw      r0, 0x14(r31)
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8019FFE0
	mr       r4, r30
	bl       __ct__Q26PikiAI7ActBoreFPQ24Game4Piki
	mr       r0, r3

lbl_8019FFE0:
	stw      r0, 0x18(r31)
	addi     r0, r2, lbl_80519058@sda21
	mr       r3, r31
	stw      r0, 8(r31)
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
 * Address:	801A0008
 * Size:	000190
 */
void PikiAI::ActFree::init(PikiAI::ActionArg*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r5, lbl_8047F260@ha
	stw      r0, 0x34(r1)
	li       r0, 0
	stw      r31, 0x2c(r1)
	mr       r31, r3
	stw      r30, 0x28(r1)
	addi     r30, r5, lbl_8047F260@l
	stw      r29, 0x24(r1)
	mr       r29, r4
	lwz      r3, 4(r3)
	stw      r0, 0x2c4(r3)
	lwz      r3, 4(r31)
	lwz      r3, 0x250(r3)
	bl       becomeFree__Q23PSM4PikiFv
	li       r0, 0
	cmplwi   r29, 0
	sth      r0, 0x10(r31)
	mr       r5, r29
	beq      lbl_801A00B4
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	addi     r3, r30, 0
	bl       strcmp
	cntlzw   r0, r3
	rlwinm.  r0, r0, 0x1b, 0x18, 0x1f
	bne      lbl_801A009C
	addi     r3, r30, 0xc
	addi     r5, r30, 0x18
	li       r4, 0x77
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801A009C:
	lbz      r0, 4(r29)
	mr       r5, r29
	cmplwi   r0, 0
	beq      lbl_801A00B4
	li       r0, 1
	sth      r0, 0x10(r31)

lbl_801A00B4:
	lhz      r0, 0x10(r31)
	cmpwi    r0, 1
	beq      lbl_801A00C4
	b        lbl_801A0118

lbl_801A00C4:
	lis      r4, __vt__Q26PikiAI9ActionArg@ha
	lis      r3, __vt__Q26PikiAI15GatherActionArg@ha
	addi     r0, r4, __vt__Q26PikiAI9ActionArg@l
	addi     r4, r1, 8
	stw      r0, 8(r1)
	addi     r0, r3, __vt__Q26PikiAI15GatherActionArg@l
	stw      r0, 8(r1)
	lfs      f0, 8(r5)
	stfs     f0, 0xc(r1)
	lfs      f0, 0xc(r5)
	stfs     f0, 0x10(r1)
	lfs      f0, 0x10(r5)
	stfs     f0, 0x14(r1)
	lfs      f0, 0x14(r5)
	stfs     f0, 0x18(r1)
	lwz      r3, 0x14(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_801A0150

lbl_801A0118:
	lwz      r3, 4(r31)
	li       r4, 0x1f
	li       r5, 0x1f
	li       r6, 0
	lwz      r12, 0(r3)
	li       r7, 0
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	lwz      r3, 4(r31)
	lfs      f0, lbl_80519060@sda21(r2)
	stfs     f0, 0x1e4(r3)
	stfs     f0, 0x1e8(r3)
	stfs     f0, 0x1ec(r3)

lbl_801A0150:
	lwz      r3, 4(r31)
	li       r4, 1
	bl       setPastel__Q24Game4PikiFb
	lwz      r3, 4(r31)
	li       r4, 1
	bl       setFreeLightEffect__Q24Game4PikiFb
	lwz      r3, 4(r31)
	li       r4, 1
	bl       attachRadar__Q24Game4PikiFb
	li       r0, 0
	sth      r0, 0x1c(r31)
	lwz      r0, 0x34(r1)
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
 * Address:	801A0198
 * Size:	0001D0
 */
void PikiAI::ActFree::exec(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	stw      r30, 0x28(r1)
	lhz      r0, 0x10(r3)
	cmpwi    r0, 2
	beq      lbl_801A0238
	bge      lbl_801A02A4
	cmpwi    r0, 1
	bge      lbl_801A01CC
	b        lbl_801A02A4

lbl_801A01CC:
	lwz      r3, 0x14(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0
	bne      lbl_801A034C
	li       r0, 0
	sth      r0, 0x10(r31)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	lfd      f3, lbl_80519070@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f1, lbl_80519064@sda21(r2)
	lfd      f2, 0x10(r1)
	lfs      f0, lbl_80519068@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r3, 0x1c(r1)
	addi     r0, r3, 0x96
	sth      r0, 0x1c(r31)
	b        lbl_801A034C

lbl_801A0238:
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	li       r5, 0
	li       r0, 1
	stb      r5, 0xd(r1)
	mr       r30, r3
	addi     r4, r1, 0xc
	stb      r5, 0xc(r1)
	stb      r0, 0xd(r1)
	lwz      r3, 4(r31)
	bl       invokeAIFree__Q24Game4PikiFRQ34Game4Piki15InvokeAIFreeArg
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A0280
	lwz      r3, 0x18(r31)
	bl       finish__Q26PikiAI7ActBoreFv

lbl_801A0280:
	cmpwi    r30, 0
	beq      lbl_801A0290
	cmpwi    r30, 2
	bne      lbl_801A034C

lbl_801A0290:
	li       r3, 0
	li       r0, 0x5a
	sth      r3, 0x10(r31)
	sth      r0, 0x1c(r31)
	b        lbl_801A034C

lbl_801A02A4:
	lwz      r3, 4(r31)
	li       r0, 0
	lfs      f0, lbl_80519060@sda21(r2)
	addi     r4, r1, 8
	stfs     f0, 0x1e4(r3)
	stfs     f0, 0x1e8(r3)
	stfs     f0, 0x1ec(r3)
	stb      r0, 8(r1)
	stb      r0, 9(r1)
	lwz      r3, 4(r31)
	bl       invokeAIFree__Q24Game4PikiFRQ34Game4Piki15InvokeAIFreeArg
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A02E0
	li       r3, 0
	b        lbl_801A0350

lbl_801A02E0:
	lhz      r3, 0x1c(r31)
	cmplwi   r3, 0
	beq      lbl_801A02F8
	addi     r0, r3, -1
	sth      r0, 0x1c(r31)
	b        lbl_801A034C

lbl_801A02F8:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x1c(r1)
	lfd      f3, lbl_80519070@sda21(r2)
	stw      r0, 0x18(r1)
	lfs      f1, lbl_80519064@sda21(r2)
	lfd      f2, 0x18(r1)
	lfs      f0, lbl_8051906C@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_801A034C
	lwz      r3, 0x18(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r0, 2
	sth      r0, 0x10(r31)

lbl_801A034C:
	li       r3, 1

lbl_801A0350:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A0368
 * Size:	00004C
 */
void PikiAI::ActFree::cleanup(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 4(r3)
	bl       setFreeLightEffect__Q24Game4PikiFb
	lwz      r3, 4(r31)
	li       r4, 0
	bl       attachRadar__Q24Game4PikiFb
	lwz      r3, 4(r31)
	lwz      r3, 0x250(r3)
	bl       becomeNotFree__Q23PSM4PikiFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A03B4
 * Size:	000004
 */
void PikiAI::ActFree::onKeyEvent(SysShape::KeyEvent const&) { }

/*
 * --INFO--
 * Address:	801A03B8
 * Size:	0000EC
 */
void PikiAI::ActFree::collisionCallback(Game::Piki*, Game::CollEvent&)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	mr       r30, r5
	stw      r29, 0x24(r1)
	mr       r29, r4
	lwz      r3, 0(r5)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A0488
	lwz      r31, 0(r30)
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A0488
	lwz      r0, 0x278(r31)
	cmplwi   r0, 0
	beq      lbl_801A0488
	mr       r3, r31
	bl       formationable__Q24Game4NaviFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A0488
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	li       r4, 2
	lhz      r5, 0x2dc(r31)
	bl       startRumble__Q24Game9RumbleMgrFii
	lwz      r4, 0(r30)
	lis      r3, __vt__Q24Game11Interaction@ha
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lis      r3, __vt__Q24Game11InteractFue@ha
	stw      r0, 8(r1)
	addi     r6, r3, __vt__Q24Game11InteractFue@l
	li       r5, 0
	li       r0, 1
	stw      r4, 0xc(r1)
	mr       r3, r29
	addi     r4, r1, 8
	stw      r6, 8(r1)
	stb      r5, 0x10(r1)
	stb      r0, 0x11(r1)
	lwz      r12, 0(r29)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_801A0488:
	lwz      r0, 0x34(r1)
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
 * Address:	801A04A4
 * Size:	00000C
 */
void PikiAI::GatherActionArg::getName(void)
{
	/*
	lis      r3, lbl_8047F290@ha
	addi     r3, r3, lbl_8047F290@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A04B0
 * Size:	000008
 */
u32 PikiAI::ActFree::getNextAIType(void) { return 0x2; }

/*
 * --INFO--
 * Address:	801A04B8
 * Size:	000014
 */
void @32 @4 @PikiAI::ActFree::onKeyEvent(SysShape::KeyEvent const&)
{
	/*
	li       r11, 4
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -32
	b        onKeyEvent__Q26PikiAI7ActFreeFRCQ28SysShape8KeyEvent
	*/
}
