#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80480460
    lbl_80480460:
        .4byte 0x61637442
        .4byte 0x7265616B
        .4byte 0x57616C6C
        .4byte 0x00000000
    .global lbl_80480470
    lbl_80480470:
        .4byte 0x42726561
        .4byte 0x6B476174
        .4byte 0x65000000
        .4byte 0x41637442
        .4byte 0x7265616B
        .4byte 0x47617465
        .4byte 0x41726700
        .4byte 0x61694272
        .4byte 0x65616B47
        .4byte 0x6174652E
        .4byte 0x63707000
        .asciz "P2Assert"
        .skip 3
        .4byte 0x41637469
        .4byte 0x6F6E4172
        .4byte 0x67000000
        .4byte 0x53746963
        .4byte 0x6B417474
        .4byte 0x61636B41
        .4byte 0x6374696F
        .4byte 0x6E417267
        .4byte 0x00000000
        .4byte 0x476F746F
        .4byte 0x506F7341
        .4byte 0x6374696F
        .4byte 0x6E417267
        .4byte 0x00000000
    .global lbl_804804E0
    lbl_804804E0:
        .4byte 0x466F6C6C
        .4byte 0x6F775665
        .4byte 0x63746F72
        .4byte 0x4669656C
        .4byte 0x64416374
        .4byte 0x696F6E41
        .4byte 0x72670000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q26PikiAI26FollowVectorFieldActionArg
    __vt__Q26PikiAI26FollowVectorFieldActionArg:
        .4byte 0
        .4byte 0
        .4byte getName__Q26PikiAI26FollowVectorFieldActionArgFv
    .global __vt__Q26PikiAI12ActBreakGate
    __vt__Q26PikiAI12ActBreakGate:
        .4byte 0
        .4byte 0
        .4byte init__Q26PikiAI12ActBreakGateFPQ26PikiAI9ActionArg
        .4byte exec__Q26PikiAI12ActBreakGateFv
        .4byte cleanup__Q26PikiAI12ActBreakGateFv
        .4byte emotion_success__Q26PikiAI12ActBreakGateFv
        .4byte emotion_fail__Q26PikiAI6ActionFv
        .4byte applicable__Q26PikiAI6ActionFv
        .4byte getNextAIType__Q26PikiAI6ActionFv
        .4byte
   bounceCallback__Q26PikiAI12ActBreakGateFPQ24Game4PikiPQ23Sys8Triangle .4byte
   collisionCallback__Q26PikiAI12ActBreakGateFPQ24Game4PikiRQ24Game9CollEvent
        .4byte
   platCallback__Q26PikiAI12ActBreakGateFPQ24Game4PikiRQ24Game9PlatEvent .4byte
   doDirectDraw__Q26PikiAI6ActionFR8Graphics .4byte
   "wallCallback__Q26PikiAI6ActionFR10Vector3<f>" .4byte
   getInfo__Q26PikiAI6ActionFPc .4byte
   onKeyEvent__Q26PikiAI12ActBreakGateFRCQ28SysShape8KeyEvent .4byte 0 .4byte 0
        .4byte
   "@52@4@onKeyEvent__Q26PikiAI12ActBreakGateFRCQ28SysShape8KeyEvent"

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80519630
    lbl_80519630:
        .float 0.7
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	801D04E8
 * Size:	0000F8
 */
PikiAI::ActBreakGate::ActBreakGate(Game::Piki*)
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
	beq      lbl_801D0520
	addi     r0, r30, 0x34
	lis      r3, __vt__Q28SysShape14MotionListener@ha
	stw      r0, 0xc(r30)
	addi     r0, r3, __vt__Q28SysShape14MotionListener@l
	stw      r0, 0x34(r30)

lbl_801D0520:
	mr       r3, r30
	mr       r4, r31
	bl       __ct__Q26PikiAI6ActionFPQ24Game4Piki
	lis      r3, __vt__Q26PikiAI12ActBreakGate@ha
	addi     r0, r30, 0x34
	addi     r4, r3, __vt__Q26PikiAI12ActBreakGate@l
	li       r3, 0x2c
	stw      r4, 0(r30)
	addi     r5, r4, 0x40
	lwz      r4, 0xc(r30)
	stw      r5, 0(r4)
	lwz      r4, 0xc(r30)
	subf     r0, r4, r0
	stw      r0, 4(r4)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801D0574
	mr       r5, r31
	li       r4, 1
	bl       __ct__Q26PikiAI14ActStickAttackFPQ24Game4Piki
	mr       r0, r3

lbl_801D0574:
	stw      r0, 0x18(r30)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801D0594
	mr       r4, r31
	bl       __ct__Q26PikiAI10ActGotoPosFPQ24Game4Piki
	mr       r0, r3

lbl_801D0594:
	stw      r0, 0x1c(r30)
	li       r3, 0x10
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801D05B4
	mr       r4, r31
	bl       __ct__Q26PikiAI20ActFollowVectorFieldFPQ24Game4Piki
	mr       r0, r3

lbl_801D05B4:
	lis      r3, lbl_80480470@ha
	stw      r0, 0x20(r30)
	addi     r0, r3, lbl_80480470@l
	mr       r3, r30
	stw      r0, 8(r30)
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
 * Address:	801D05E0
 * Size:	0000C8
 */
void PikiAI::ActBreakGate::init(PikiAI::ActionArg*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	or.      r29, r4, r4
	lis      r4, lbl_80480460@ha
	stw      r28, 0x10(r1)
	mr       r28, r3
	addi     r31, r4, lbl_80480460@l
	beq      lbl_801D0644
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	addi     r3, r31, 0x1c
	bl       strcmp
	cntlzw   r0, r3
	rlwinm.  r0, r0, 0x1b, 0x18, 0x1f
	beq      lbl_801D0644
	li       r30, 1

lbl_801D0644:
	clrlwi.  r0, r30, 0x18
	bne      lbl_801D0660
	addi     r3, r31, 0x2c
	addi     r5, r31, 0x3c
	li       r4, 0x62
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801D0660:
	lis      r3, workPikis__Q24Game8GameStat@ha
	lwz      r4, 4(r28)
	addi     r3, r3, workPikis__Q24Game8GameStat@l
	bl       inc__Q34Game8GameStat15PikiNaviCounterFPQ24Game4Piki
	lwz      r4, 4(r29)
	li       r0, 0
	mr       r3, r28
	stw      r4, 0x10(r28)
	stb      r0, 0x24(r28)
	bl       initFollow__Q26PikiAI12ActBreakGateFv
	lwz      r0, 0x24(r1)
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
 * Address:	801D06A8
 * Size:	000068
 */
void PikiAI::ActBreakGate::initFollow()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	addi     r4, r1, 8
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	lwz      r5, 0x10(r31)
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	lis      r3, __vt__Q26PikiAI26FollowVectorFieldActionArg@ha
	stw      r0, 8(r1)
	addi     r0, r3, __vt__Q26PikiAI26FollowVectorFieldActionArg@l
	stw      r0, 8(r1)
	stw      r5, 0xc(r1)
	lwz      r3, 0x20(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r0, 1
	sth      r0, 0x14(r31)
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801D0710
 * Size:	000498
 */
void PikiAI::ActBreakGate::exec()
{
	/*
	stwu     r1, -0xb0(r1)
	mflr     r0
	stw      r0, 0xb4(r1)
	stw      r31, 0xac(r1)
	mr       r31, r3
	stw      r30, 0xa8(r1)
	lwz      r3, 0x10(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801D074C
	li       r3, 0
	b        lbl_801D0B90

lbl_801D074C:
	lhz      r0, 0x14(r31)
	cmpwi    r0, 1
	beq      lbl_801D097C
	bge      lbl_801D0768
	cmpwi    r0, 0
	bge      lbl_801D0A84
	b        lbl_801D0B8C

lbl_801D0768:
	cmpwi    r0, 3
	bge      lbl_801D0B8C
	lwz      r3, 0x20(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0
	bne      lbl_801D0888
	lwz      r3, 0x10(r31)
	li       r30, 1
	lbz      r0, 0x27c(r3)
	cmplwi   r0, 1
	bne      lbl_801D07BC
	li       r30, 2
	b        lbl_801D07CC

lbl_801D07BC:
	lbz      r0, 0x218(r3)
	cmplwi   r0, 0
	beq      lbl_801D07CC
	li       r30, 3

lbl_801D07CC:
	lbz      r0, 0x24(r31)
	cmplwi   r0, 0
	bne      lbl_801D082C
	lwz      r3, 4(r31)
	bl       getAttackDamage__Q24Game4PikiFv
	lwz      r5, 0x10(r31)
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	addi     r4, r1, 0x80
	lis      r3, __vt__Q26PikiAI20StickAttackActionArg@ha
	stw      r0, 0x80(r1)
	addi     r3, r3, __vt__Q26PikiAI20StickAttackActionArg@l
	li       r0, -1
	stw      r3, 0x80(r1)
	stfs     f1, 0x84(r1)
	stw      r5, 0x88(r1)
	stw      r0, 0x8c(r1)
	stb      r30, 0x90(r1)
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_801D087C

lbl_801D082C:
	lwz      r3, 4(r31)
	bl       getAttackDamage__Q24Game4PikiFv
	lwz      r5, 0x10(r31)
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	addi     r4, r1, 0x94
	lis      r3, __vt__Q26PikiAI20StickAttackActionArg@ha
	stw      r0, 0x94(r1)
	addi     r3, r3, __vt__Q26PikiAI20StickAttackActionArg@l
	li       r0, 0x19
	stw      r3, 0x94(r1)
	stfs     f1, 0x98(r1)
	stw      r5, 0x9c(r1)
	stw      r0, 0xa0(r1)
	stb      r30, 0xa4(r1)
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_801D087C:
	li       r0, 2
	sth      r0, 0x14(r31)
	b        lbl_801D0B8C

lbl_801D0888:
	cmpwi    r3, 2
	bne      lbl_801D0B90
	lwz      r3, 0x10(r31)
	li       r30, 1
	lbz      r0, 0x27c(r3)
	cmplwi   r0, 1
	bne      lbl_801D08AC
	li       r30, 2
	b        lbl_801D08BC

lbl_801D08AC:
	lbz      r0, 0x218(r3)
	cmplwi   r0, 0
	beq      lbl_801D08BC
	li       r30, 3

lbl_801D08BC:
	lbz      r0, 0x24(r31)
	cmplwi   r0, 0
	bne      lbl_801D091C
	lwz      r3, 4(r31)
	bl       getAttackDamage__Q24Game4PikiFv
	lwz      r5, 0x10(r31)
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	addi     r4, r1, 0x58
	lis      r3, __vt__Q26PikiAI20StickAttackActionArg@ha
	stw      r0, 0x58(r1)
	addi     r3, r3, __vt__Q26PikiAI20StickAttackActionArg@l
	li       r0, -1
	stw      r3, 0x58(r1)
	stfs     f1, 0x5c(r1)
	stw      r5, 0x60(r1)
	stw      r0, 0x64(r1)
	stb      r30, 0x68(r1)
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_801D096C

lbl_801D091C:
	lwz      r3, 4(r31)
	bl       getAttackDamage__Q24Game4PikiFv
	lwz      r5, 0x10(r31)
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	addi     r4, r1, 0x6c
	lis      r3, __vt__Q26PikiAI20StickAttackActionArg@ha
	stw      r0, 0x6c(r1)
	addi     r3, r3, __vt__Q26PikiAI20StickAttackActionArg@l
	li       r0, 0x19
	stw      r3, 0x6c(r1)
	stfs     f1, 0x70(r1)
	stw      r5, 0x74(r1)
	stw      r0, 0x78(r1)
	stb      r30, 0x7c(r1)
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_801D096C:
	li       r0, 2
	sth      r0, 0x14(r31)
	b        lbl_801D0B8C
	b        lbl_801D0B90

lbl_801D097C:
	lwz      r3, 0x20(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0
	bne      lbl_801D0B90
	lwz      r3, 0x10(r31)
	li       r30, 1
	lbz      r0, 0x27c(r3)
	cmplwi   r0, 1
	bne      lbl_801D09B4
	li       r30, 2
	b        lbl_801D09C4

lbl_801D09B4:
	lbz      r0, 0x218(r3)
	cmplwi   r0, 0
	beq      lbl_801D09C4
	li       r30, 3

lbl_801D09C4:
	lbz      r0, 0x24(r31)
	cmplwi   r0, 0
	bne      lbl_801D0A24
	lwz      r3, 4(r31)
	bl       getAttackDamage__Q24Game4PikiFv
	lwz      r5, 0x10(r31)
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	addi     r4, r1, 0x30
	lis      r3, __vt__Q26PikiAI20StickAttackActionArg@ha
	stw      r0, 0x30(r1)
	addi     r3, r3, __vt__Q26PikiAI20StickAttackActionArg@l
	li       r0, -1
	stw      r3, 0x30(r1)
	stfs     f1, 0x34(r1)
	stw      r5, 0x38(r1)
	stw      r0, 0x3c(r1)
	stb      r30, 0x40(r1)
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_801D0A74

lbl_801D0A24:
	lwz      r3, 4(r31)
	bl       getAttackDamage__Q24Game4PikiFv
	lwz      r5, 0x10(r31)
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	addi     r4, r1, 0x44
	lis      r3, __vt__Q26PikiAI20StickAttackActionArg@ha
	stw      r0, 0x44(r1)
	addi     r3, r3, __vt__Q26PikiAI20StickAttackActionArg@l
	li       r0, 0x19
	stw      r3, 0x44(r1)
	stfs     f1, 0x48(r1)
	stw      r5, 0x4c(r1)
	stw      r0, 0x50(r1)
	stb      r30, 0x54(r1)
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_801D0A74:
	li       r0, 2
	sth      r0, 0x14(r31)
	b        lbl_801D0B8C
	b        lbl_801D0B90

lbl_801D0A84:
	lwz      r3, 0x1c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0
	bne      lbl_801D0B90
	lwz      r3, 0x10(r31)
	li       r30, 1
	lbz      r0, 0x27c(r3)
	cmplwi   r0, 1
	bne      lbl_801D0ABC
	li       r30, 2
	b        lbl_801D0ACC

lbl_801D0ABC:
	lbz      r0, 0x218(r3)
	cmplwi   r0, 0
	beq      lbl_801D0ACC
	li       r30, 3

lbl_801D0ACC:
	lbz      r0, 0x24(r31)
	cmplwi   r0, 0
	bne      lbl_801D0B2C
	lwz      r3, 4(r31)
	bl       getAttackDamage__Q24Game4PikiFv
	lwz      r5, 0x10(r31)
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	addi     r4, r1, 8
	lis      r3, __vt__Q26PikiAI20StickAttackActionArg@ha
	stw      r0, 8(r1)
	addi     r3, r3, __vt__Q26PikiAI20StickAttackActionArg@l
	li       r0, -1
	stw      r3, 8(r1)
	stfs     f1, 0xc(r1)
	stw      r5, 0x10(r1)
	stw      r0, 0x14(r1)
	stb      r30, 0x18(r1)
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_801D0B7C

lbl_801D0B2C:
	lwz      r3, 4(r31)
	bl       getAttackDamage__Q24Game4PikiFv
	lwz      r5, 0x10(r31)
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	addi     r4, r1, 0x1c
	lis      r3, __vt__Q26PikiAI20StickAttackActionArg@ha
	stw      r0, 0x1c(r1)
	addi     r3, r3, __vt__Q26PikiAI20StickAttackActionArg@l
	li       r0, 0x19
	stw      r3, 0x1c(r1)
	stfs     f1, 0x20(r1)
	stw      r5, 0x24(r1)
	stw      r0, 0x28(r1)
	stb      r30, 0x2c(r1)
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_801D0B7C:
	li       r0, 2
	sth      r0, 0x14(r31)
	b        lbl_801D0B8C
	b        lbl_801D0B90

lbl_801D0B8C:
	li       r3, 1

lbl_801D0B90:
	lwz      r0, 0xb4(r1)
	lwz      r31, 0xac(r1)
	lwz      r30, 0xa8(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}

/*
 * --INFO--
 * Address:	801D0BA8
 * Size:	00005C
 */
void PikiAI::ActBreakGate::cleanup()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lis      r3, workPikis__Q24Game8GameStat@ha
	lwz      r4, 4(r31)
	addi     r3, r3, workPikis__Q24Game8GameStat@l
	bl       dec__Q34Game8GameStat15PikiNaviCounterFPQ24Game4Piki
	lhz      r0, 0x14(r31)
	cmpwi    r0, 2
	beq      lbl_801D0BDC
	b        lbl_801D0BF0

lbl_801D0BDC:
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_801D0BF0:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801D0C04
 * Size:	000044
 */
void PikiAI::ActBreakGate::emotion_success()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0x13
	stw      r0, 0x14(r1)
	li       r0, 1
	addi     r6, r1, 8
	sth      r0, 8(r1)
	lwz      r4, 4(r3)
	lwz      r3, 0x28c(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
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
 * Address:	801D0C48
 * Size:	000144
 */
void PikiAI::ActBreakGate::platCallback(Game::Piki*, Game::PlatEvent&)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lfs      f0, lbl_80519630@sda21(r2)
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r3
	stw      r30, 0x38(r1)
	lfs      f1, 8(r5)
	fcmpo    cr0, f1, f0
	ble      lbl_801D0C7C
	li       r0, 1
	stb      r0, 0x24(r31)
	b        lbl_801D0C84

lbl_801D0C7C:
	li       r0, 0
	stb      r0, 0x24(r31)

lbl_801D0C84:
	lhz      r0, 0x14(r31)
	cmplwi   r0, 1
	bne      lbl_801D0D74
	lwz      r3, 0x10(r31)
	li       r30, 1
	lbz      r0, 0x27c(r3)
	cmplwi   r0, 1
	bne      lbl_801D0CAC
	li       r30, 2
	b        lbl_801D0CBC

lbl_801D0CAC:
	lbz      r0, 0x218(r3)
	cmplwi   r0, 0
	beq      lbl_801D0CBC
	li       r30, 3

lbl_801D0CBC:
	lbz      r0, 0x24(r31)
	cmplwi   r0, 0
	bne      lbl_801D0D1C
	lwz      r3, 4(r31)
	bl       getAttackDamage__Q24Game4PikiFv
	lwz      r5, 0x10(r31)
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	addi     r4, r1, 8
	lis      r3, __vt__Q26PikiAI20StickAttackActionArg@ha
	stw      r0, 8(r1)
	addi     r3, r3, __vt__Q26PikiAI20StickAttackActionArg@l
	li       r0, -1
	stw      r3, 8(r1)
	stfs     f1, 0xc(r1)
	stw      r5, 0x10(r1)
	stw      r0, 0x14(r1)
	stb      r30, 0x18(r1)
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_801D0D6C

lbl_801D0D1C:
	lwz      r3, 4(r31)
	bl       getAttackDamage__Q24Game4PikiFv
	lwz      r5, 0x10(r31)
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	addi     r4, r1, 0x1c
	lis      r3, __vt__Q26PikiAI20StickAttackActionArg@ha
	stw      r0, 0x1c(r1)
	addi     r3, r3, __vt__Q26PikiAI20StickAttackActionArg@l
	li       r0, 0x19
	stw      r3, 0x1c(r1)
	stfs     f1, 0x20(r1)
	stw      r5, 0x24(r1)
	stw      r0, 0x28(r1)
	stb      r30, 0x2c(r1)
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_801D0D6C:
	li       r0, 2
	sth      r0, 0x14(r31)

lbl_801D0D74:
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	801D0D8C
 * Size:	000004
 */
void PikiAI::ActBreakGate::collisionCallback(Game::Piki*, Game::CollEvent&) { }

/*
 * --INFO--
 * Address:	801D0D90
 * Size:	000004
 */
void PikiAI::ActBreakGate::bounceCallback(Game::Piki*, Sys::Triangle*) { }

/*
 * --INFO--
 * Address:	801D0D94
 * Size:	000004
 */
void PikiAI::ActBreakGate::onKeyEvent(const SysShape::KeyEvent&) { }

/*
 * --INFO--
 * Address:	801D0D98
 * Size:	00000C
 */
void PikiAI::FollowVectorFieldActionArg::getName()
{
	/*
	lis      r3, lbl_804804E0@ha
	addi     r3, r3, lbl_804804E0@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	801D0DA4
 * Size:	000014
 */
void PikiAI::ActBreakGate::@52 @4 @onKeyEvent(const SysShape::KeyEvent&)
{
	/*
	li       r11, 4
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -52
	b        onKeyEvent__Q26PikiAI12ActBreakGateFRCQ28SysShape8KeyEvent
	*/
}
