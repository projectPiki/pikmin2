#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80483CD0
    lbl_80483CD0:
        .asciz "actRescue"
        .skip 2
    .global lbl_80483CDC
    lbl_80483CDC:
        .asciz "aiRescue.cpp"
        .skip 3
    .global lbl_80483CEC
    lbl_80483CEC:
        .asciz "P2Assert"
        .skip 3
        .asciz "rhandjnt"
        .skip 3
        .asciz "ApproachPosActionArg"
        .skip 3
        .asciz "ActionArg"
        .skip 2

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__10WPFindCond
    __vt__10WPFindCond:
        .4byte 0
        .4byte 0
        .4byte satisfy__10WPFindCondFPQ24Game8WayPoint
    .global __vt__Q26PikiAI9ActRescue
    __vt__Q26PikiAI9ActRescue:
        .4byte 0
        .4byte 0
        .4byte init__Q26PikiAI9ActRescueFPQ26PikiAI9ActionArg
        .4byte exec__Q26PikiAI9ActRescueFv
        .4byte cleanup__Q26PikiAI9ActRescueFv
        .4byte emotion_success__Q26PikiAI9ActRescueFv
        .4byte emotion_fail__Q26PikiAI6ActionFv
        .4byte applicable__Q26PikiAI6ActionFv
        .4byte getNextAIType__Q26PikiAI9ActRescueFv
        .4byte bounceCallback__Q26PikiAI6ActionFPQ24Game4PikiPQ23Sys8Triangle
        .4byte
   collisionCallback__Q26PikiAI9ActRescueFPQ24Game4PikiRQ24Game9CollEvent .4byte
   platCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9PlatEvent .4byte
   doDirectDraw__Q26PikiAI9ActRescueFR8Graphics .4byte
   "wallCallback__Q26PikiAI6ActionFR10Vector3<f>" .4byte
   getInfo__Q26PikiAI6ActionFPc .4byte
   onKeyEvent__Q26PikiAI9ActRescueFRCQ28SysShape8KeyEvent .4byte 0 .4byte 0
        .4byte "@40@4@onKeyEvent__Q26PikiAI9ActRescueFRCQ28SysShape8KeyEvent"

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051A4F0
    lbl_8051A4F0:
        .4byte 0x52657363
        .4byte 0x75650000
    .global lbl_8051A4F8
    lbl_8051A4F8:
        .4byte 0x41200000
    .global lbl_8051A4FC
    lbl_8051A4FC:
        .4byte 0xBF800000
    .global lbl_8051A500
    lbl_8051A500:
        .4byte 0x437A0000
    .global lbl_8051A504
    lbl_8051A504:
        .4byte 0x40400000
    .global lbl_8051A508
    lbl_8051A508:
        .4byte 0x00000000
    .global lbl_8051A50C
    lbl_8051A50C:
        .float 0.5
    .global lbl_8051A510
    lbl_8051A510:
        .4byte 0x42480000
    .global lbl_8051A514
    lbl_8051A514:
        .4byte 0x40000000
    .global lbl_8051A518
    lbl_8051A518:
        .4byte 0x43A2F983
    .global lbl_8051A51C
    lbl_8051A51C:
        .4byte 0xC3A2F983
*/

/*
 * --INFO--
 * Address:	80238EB0
 * Size:	0000B8
 */
PikiAI::ActRescue::ActRescue(Game::Piki* p)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r5
	stw      r30, 8(r1)
	mr       r30, r3
	beq      lbl_80238EE8
	addi     r0, r30, 0x28
	lis      r3, __vt__Q28SysShape14MotionListener@ha
	stw      r0, 0xc(r30)
	addi     r0, r3, __vt__Q28SysShape14MotionListener@l
	stw      r0, 0x28(r30)

lbl_80238EE8:
	mr       r3, r30
	mr       r4, r31
	bl       __ct__Q26PikiAI6ActionFPQ24Game4Piki
	lis      r3, __vt__Q26PikiAI9ActRescue@ha
	addi     r5, r30, 0x28
	addi     r3, r3, __vt__Q26PikiAI9ActRescue@l
	li       r4, 0
	stw      r3, 0(r30)
	addi     r7, r3, 0x40
	addi     r0, r2, lbl_8051A4F0@sda21
	li       r3, 0x28
	lwz      r6, 0xc(r30)
	stw      r7, 0(r6)
	lwz      r6, 0xc(r30)
	subf     r5, r6, r5
	stw      r5, 4(r6)
	stb      r4, 0x14(r30)
	stw      r0, 8(r30)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80238F48
	mr       r4, r31
	bl       __ct__Q26PikiAI14ActApproachPosFPQ24Game4Piki
	mr       r0, r3

lbl_80238F48:
	stw      r0, 0x18(r30)
	mr       r3, r30
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
 * Address:	80238F68
 * Size:	0000C4
 */
void PikiAI::ActRescue::init(PikiAI::ActionArg*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	or.      r30, r4, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	bne      lbl_80238FA8
	lis      r3, lbl_80483CDC@ha
	lis      r5, lbl_80483CEC@ha
	addi     r3, r3, lbl_80483CDC@l
	li       r4, 0x2e
	addi     r5, r5, lbl_80483CEC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80238FA8:
	lwz      r3, 4(r30)
	li       r31, 0
	cmplwi   r3, 0
	beq      lbl_80238FD4
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80238FD4
	li       r31, 1

lbl_80238FD4:
	clrlwi.  r0, r31, 0x18
	bne      lbl_80238FF8
	lis      r3, lbl_80483CDC@ha
	lis      r5, lbl_80483CEC@ha
	addi     r3, r3, lbl_80483CDC@l
	li       r4, 0x30
	addi     r5, r5, lbl_80483CEC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80238FF8:
	lwz      r4, 4(r30)
	li       r0, 0
	mr       r3, r29
	stw      r4, 0x1c(r29)
	stw      r0, 0x20(r29)
	bl       initApproach__Q26PikiAI9ActRescueFv
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8023902C
 * Size:	000060
 */
void PikiAI::ActRescue::exec(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x10(r3)
	cmpwi    r0, 1
	beq      lbl_80239068
	bge      lbl_80239054
	cmpwi    r0, 0
	bge      lbl_80239060
	b        lbl_80239078

lbl_80239054:
	cmpwi    r0, 3
	bge      lbl_80239078
	b        lbl_80239070

lbl_80239060:
	bl       execApproach__Q26PikiAI9ActRescueFv
	b        lbl_8023907C

lbl_80239068:
	bl       execGo__Q26PikiAI9ActRescueFv
	b        lbl_8023907C

lbl_80239070:
	bl       execThrow__Q26PikiAI9ActRescueFv
	b        lbl_8023907C

lbl_80239078:
	li       r3, 1

lbl_8023907C:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C0
 */
void PikiAI::ActRescue::checkPikmin(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8023908C
 * Size:	0000AC
 */
void PikiAI::ActRescue::initApproach(void)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	li       r0, 0
	stw      r31, 0x3c(r1)
	mr       r31, r3
	stw      r0, 0x10(r3)
	addi     r3, r1, 8
	lwz      r4, 0x1c(r31)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	li       r0, 0
	addi     r4, r3, __vt__Q26PikiAI9ActionArg@l
	lfs      f4, 8(r1)
	lfs      f3, 0xc(r1)
	lis      r3, __vt__Q26PikiAI20ApproachPosActionArg@ha
	lfs      f2, 0x10(r1)
	addi     r3, r3, __vt__Q26PikiAI20ApproachPosActionArg@l
	stw      r4, 0x14(r1)
	addi     r4, r1, 0x14
	lfs      f1, lbl_8051A4F8@sda21(r2)
	lfs      f0, lbl_8051A4FC@sda21(r2)
	stw      r3, 0x14(r1)
	stfs     f4, 0x18(r1)
	stfs     f3, 0x1c(r1)
	stfs     f2, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	stb      r0, 0x2c(r1)
	stb      r0, 0x2d(r1)
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	80239138
 * Size:	00013C
 */
void PikiAI::ActRescue::execApproach(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	lwz      r3, 0x1c(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80239174
	li       r3, 2
	b        lbl_802391E0

lbl_80239174:
	lwz      r3, 0x1c(r30)
	bl       getStateID__Q24Game4PikiFv
	mr       r31, r3
	cmpwi    r31, 5
	beq      lbl_802391B4
	cmpwi    r31, 0xa
	beq      lbl_802391B4
	lwz      r3, 0x1c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x8c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802391B4
	li       r3, 0
	b        lbl_802391E0

lbl_802391B4:
	cmpwi    r31, 5
	bne      lbl_802391DC
	lwz      r3, 0x1c(r30)
	lwz      r0, 4(r30)
	lwz      r3, 0x290(r3)
	lwz      r3, 0x14(r3)
	cmplw    r3, r0
	beq      lbl_802391DC
	li       r3, 0
	b        lbl_802391E0

lbl_802391DC:
	li       r3, 1

lbl_802391E0:
	cmpwi    r3, 1
	beq      lbl_802391EC
	b        lbl_8023925C

lbl_802391EC:
	lwz      r4, 0x1c(r30)
	addi     r3, r1, 8
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0xc(r1)
	lfs      f2, 0x10(r1)
	lwz      r3, 0x18(r30)
	lfs      f0, 8(r1)
	stfs     f0, 0x10(r3)
	stfs     f1, 0x14(r3)
	stfs     f2, 0x18(r3)
	lwz      r3, 0x18(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0
	bne      lbl_80239248
	mr       r3, r30
	bl       initGo__Q26PikiAI9ActRescueFv
	b        lbl_80239258

lbl_80239248:
	cmpwi    r3, 2
	bne      lbl_80239258
	li       r3, 2
	b        lbl_8023925C

lbl_80239258:
	li       r3, 1

lbl_8023925C:
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
 * Address:	80239274
 * Size:	000150
 */
void PikiAI::ActRescue::initGo(void)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	lis      r4, __vt__10WPFindCond@ha
	stw      r0, 0x64(r1)
	li       r0, 1
	stw      r31, 0x5c(r1)
	mr       r31, r3
	lis      r3, "__vt__27Condition<Q24Game8WayPoint>"@ha
	stw      r0, 0x10(r31)
	addi     r0, r3, "__vt__27Condition<Q24Game8WayPoint>"@l
	lis      r3, __vt__Q24Game11WPCondition@ha
	stw      r0, 0xc(r1)
	addi     r0, r3, __vt__Q24Game11WPCondition@l
	addi     r3, r1, 0x10
	stw      r0, 0xc(r1)
	addi     r0, r4, __vt__10WPFindCond@l
	stw      r0, 0xc(r1)
	lwz      r4, 0x1c(r31)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f3, 0x10(r1)
	addi     r5, r1, 0xc
	lfs      f2, 0x14(r1)
	li       r0, 0
	lfs      f1, 0x18(r1)
	addi     r4, r1, 0x38
	lfs      f0, lbl_8051A4F8@sda21(r2)
	stfs     f3, 0x38(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f2, 0x3c(r1)
	stfs     f1, 0x40(r1)
	stw      r5, 0x44(r1)
	stb      r0, 0x48(r1)
	stfs     f0, 0x4c(r1)
	lwz      r3, 8(r3)
	bl       getNearestWayPoint__Q24Game8RouteMgrFRQ24Game11WPSearchArg
	stw      r3, 0x20(r31)
	lwz      r5, 0x20(r31)
	cmplwi   r5, 0
	beq      lbl_802393A8
	lis      r4, __vt__Q26PikiAI9ActionArg@ha
	lis      r3, __vt__Q26PikiAI20ApproachPosActionArg@ha
	addi     r0, r4, __vt__Q26PikiAI9ActionArg@l
	lfs      f1, lbl_8051A500@sda21(r2)
	stw      r0, 0x1c(r1)
	addi     r3, r3, __vt__Q26PikiAI20ApproachPosActionArg@l
	lfs      f0, lbl_8051A4FC@sda21(r2)
	li       r0, 0
	stw      r3, 0x1c(r1)
	addi     r4, r1, 0x1c
	lfs      f2, 0x4c(r5)
	stfs     f2, 0x20(r1)
	lfs      f2, 0x50(r5)
	stfs     f2, 0x24(r1)
	lfs      f2, 0x54(r5)
	stfs     f2, 0x28(r1)
	stfs     f1, 0x2c(r1)
	stfs     f0, 0x30(r1)
	stb      r0, 0x34(r1)
	stb      r0, 0x35(r1)
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 4(r31)
	addi     r6, r1, 8
	li       r5, 5
	stw      r0, 8(r1)
	lwz      r4, 0x1c(r31)
	lwz      r3, 0x28c(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_802393A8:
	li       r0, 0x64
	stb      r0, 0x24(r31)
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	802393C4
 * Size:	0001C0
 */
void PikiAI::ActRescue::execGo(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r4, lbl_80483CD0@ha
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	addi     r31, r4, lbl_80483CD0@l
	stw      r30, 0x28(r1)
	mr       r30, r3
	stw      r29, 0x24(r1)
	lwz      r3, 0x1c(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8023940C
	li       r3, 2
	b        lbl_80239478

lbl_8023940C:
	lwz      r3, 0x1c(r30)
	bl       getStateID__Q24Game4PikiFv
	mr       r29, r3
	cmpwi    r29, 5
	beq      lbl_8023944C
	cmpwi    r29, 0xa
	beq      lbl_8023944C
	lwz      r3, 0x1c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x8c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8023944C
	li       r3, 0
	b        lbl_80239478

lbl_8023944C:
	cmpwi    r29, 5
	bne      lbl_80239474
	lwz      r3, 0x1c(r30)
	lwz      r0, 4(r30)
	lwz      r3, 0x290(r3)
	lwz      r3, 0x14(r3)
	cmplw    r3, r0
	beq      lbl_80239474
	li       r3, 0
	b        lbl_80239478

lbl_80239474:
	li       r3, 1

lbl_80239478:
	cmpwi    r3, 1
	beq      lbl_80239484
	b        lbl_80239568

lbl_80239484:
	lwz      r0, 0x20(r30)
	cmplwi   r0, 0
	bne      lbl_80239498
	li       r3, 2
	b        lbl_80239568

lbl_80239498:
	lwz      r3, 0x18(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lbz      r4, 0x24(r30)
	addi     r4, r4, -1
	clrlwi.  r0, r4, 0x18
	stb      r4, 0x24(r30)
	bne      lbl_802394C4
	li       r3, 0

lbl_802394C4:
	cmpwi    r3, 0
	bne      lbl_802394D8
	mr       r3, r30
	bl       initThrow__Q26PikiAI9ActRescueFv
	b        lbl_802394E8

lbl_802394D8:
	cmpwi    r3, 2
	bne      lbl_802394E8
	li       r3, 2
	b        lbl_80239568

lbl_802394E8:
	lwz      r3, 4(r30)
	addi     r4, r31, 0x28
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	or.      r29, r3, r3
	bne      lbl_80239514
	addi     r3, r31, 0xc
	addi     r5, r31, 0x1c
	li       r4, 0xdc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80239514:
	lfs      f0, lbl_8051A508@sda21(r2)
	mr       r3, r29
	lfs      f1, lbl_8051A504@sda21(r2)
	stfs     f0, 0x18(r1)
	stfs     f1, 0x14(r1)
	stfs     f0, 0x1c(r1)
	bl       getWorldMatrix__Q28SysShape5JointFv
	addi     r4, r1, 0x14
	addi     r5, r1, 8
	bl       PSMTXMultVec
	lfs      f2, 8(r1)
	addi     r4, r1, 0x14
	lfs      f1, 0xc(r1)
	li       r5, 0
	lfs      f0, 0x10(r1)
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	lwz      r3, 0x1c(r30)
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	li       r3, 1

lbl_80239568:
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
 * Address:	80239584
 * Size:	000064
 */
void PikiAI::ActRescue::initThrow(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 2
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	stw      r0, 0x10(r3)
	mr       r6, r31
	beq      lbl_802395AC
	lwz      r6, 0xc(r31)

lbl_802395AC:
	lwz      r3, 4(r31)
	li       r4, 0x21
	li       r5, 0x21
	li       r7, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stb      r0, 0x14(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802395E8
 * Size:	000278
 */
void PikiAI::ActRescue::execThrow(void)
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stfd     f30, 0x60(r1)
	psq_st   f30, 104(r1), 0, qr0
	stfd     f29, 0x50(r1)
	psq_st   f29, 88(r1), 0, qr0
	stfd     f28, 0x40(r1)
	psq_st   f28, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	mr       r31, r3
	li       r4, 0x21
	lwz      r3, 4(r3)
	bl       assertMotion__Q24Game8FakePikiFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80239638
	li       r3, 2
	b        lbl_8023982C

lbl_80239638:
	lbz      r3, 0x14(r31)
	clrlwi.  r0, r3, 0x1f
	beq      lbl_80239818
	lwz      r3, 0x1c(r31)
	li       r4, 1
	li       r5, 0
	lwz      r3, 0x294(r3)
	bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
	lwz      r4, 0x1c(r31)
	li       r5, 6
	li       r6, 0
	lwz      r3, 0x28c(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	addi     r3, r1, 8
	stb      r0, 0x14(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x20(r31)
	lfs      f0, 0x10(r1)
	lfs      f2, 0x54(r3)
	lfs      f1, 0x4c(r3)
	fsubs    f2, f2, f0
	lfs      f0, 8(r1)
	lfs      f4, 0x50(r3)
	lfs      f3, 0xc(r1)
	fsubs    f1, f1, f0
	fmuls    f5, f2, f2
	lfs      f0, lbl_8051A508@sda21(r2)
	fsubs    f29, f4, f3
	fmadds   f30, f1, f1, f5
	fcmpo    cr0, f30, f0
	ble      lbl_802396E4
	ble      lbl_802396E8
	frsqrte  f0, f30
	fmuls    f30, f0, f30
	b        lbl_802396E8

lbl_802396E4:
	fmr      f30, f0

lbl_802396E8:
	lis      r3, atanTable___5JMath@ha
	addi     r3, r3, atanTable___5JMath@l
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	fmr      f31, f1
	bl       roundAng__Ff
	lwz      r3, 0x1c(r31)
	fabs     f29, f29
	lfs      f28, lbl_8051A50C@sda21(r2)
	stfs     f1, 0x1fc(r3)
	lwz      r3, 0x1c(r31)
	bl       getThrowHeight__Q24Game4PikiFv
	frsp     f2, f29
	lwz      r5, 0x1c(r31)
	lfs      f0, lbl_8051A510@sda21(r2)
	lbz      r0, 0x2b8(r5)
	fadds    f1, f1, f2
	cmpwi    r0, 3
	fadds    f2, f0, f1
	bne      lbl_8023973C
	lfs      f0, lbl_8051A50C@sda21(r2)
	fmuls    f28, f28, f0

lbl_8023973C:
	lfs      f1, lbl_8051A514@sda21(r2)
	fdivs    f2, f2, f28
	lwz      r3, _aiConstants__4Game@sda21(r13)
	lfs      f0, lbl_8051A508@sda21(r2)
	lfs      f4, lbl_8051A50C@sda21(r2)
	lfs      f3, 0x28(r3)
	fmuls    f1, f1, f28
	fmuls    f3, f4, f3
	fmr      f4, f31
	fdivs    f5, f30, f1
	fcmpo    cr0, f31, f0
	fmadds   f3, f28, f3, f2
	bge      lbl_80239774
	fneg     f4, f31

lbl_80239774:
	lfs      f2, lbl_8051A518@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051A508@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f4, f2
	fcmpo    cr0, f31, f0
	fctiwz   f0, f1
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f1, f5, f0
	bge      lbl_802397D0
	lfs      f0, lbl_8051A51C@sda21(r2)
	fmuls    f0, f31, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_802397E8

lbl_802397D0:
	fmuls    f0, f31, f2
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_802397E8:
	fmuls    f0, f5, f0
	stfs     f0, 0x200(r5)
	stfs     f3, 0x204(r5)
	stfs     f1, 0x208(r5)
	lwz      r3, 0x1c(r31)
	lfs      f0, 0x200(r3)
	stfs     f0, 0x1e4(r3)
	lfs      f0, 0x204(r3)
	stfs     f0, 0x1e8(r3)
	lfs      f0, 0x208(r3)
	stfs     f0, 0x1ec(r3)
	b        lbl_80239828

lbl_80239818:
	rlwinm.  r0, r3, 0, 0x1e, 0x1e
	beq      lbl_80239828
	li       r3, 0
	b        lbl_8023982C

lbl_80239828:
	li       r3, 1

lbl_8023982C:
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	psq_l    f29, 88(r1), 0, qr0
	lfd      f29, 0x50(r1)
	psq_l    f28, 72(r1), 0, qr0
	lfd      f28, 0x40(r1)
	lwz      r0, 0x84(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	80239860
 * Size:	00002C
 */
void PikiAI::ActRescue::onKeyEvent(SysShape::KeyEvent const&)
{
	/*
	lwz      r0, 0x1c(r4)
	cmplwi   r0, 2
	bne      lbl_8023987C
	lbz      r0, 0x14(r3)
	ori      r0, r0, 1
	stb      r0, 0x14(r3)
	blr

lbl_8023987C:
	lbz      r0, 0x14(r3)
	ori      r0, r0, 2
	stb      r0, 0x14(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8023988C
 * Size:	000004
 */
void PikiAI::ActRescue::emotion_success(void) { }

/*
 * --INFO--
 * Address:	80239890
 * Size:	000004
 */
void PikiAI::ActRescue::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	80239894
 * Size:	000004
 */
void PikiAI::ActRescue::cleanup(void) { }

/*
 * --INFO--
 * Address:	80239898
 * Size:	000004
 */
void PikiAI::ActRescue::collisionCallback(Game::Piki*, Game::CollEvent&) { }

/*
 * --INFO--
 * Address:	8023989C
 * Size:	000020
 */
void WPFindCond::satisfy(Game::WayPoint*)
{
	/*
	lbz      r4, 0x34(r4)
	li       r3, 0
	rlwinm.  r0, r4, 0, 0x1e, 0x1e
	bnelr
	clrlwi.  r0, r4, 0x1f
	bnelr
	li       r3, 1
	blr
	*/
}

/*
 * --INFO--
 * Address:	802398BC
 * Size:	000008
 */
u32 PikiAI::ActRescue::getNextAIType(void) { return 0x1; }

/*
 * --INFO--
 * Address:	802398C4
 * Size:	000014
 */
void @40 @4 @PikiAI::ActRescue::onKeyEvent(SysShape::KeyEvent const&)
{
	/*
	li       r11, 4
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -40
	b        onKeyEvent__Q26PikiAI9ActRescueFRCQ28SysShape8KeyEvent
	*/
}
