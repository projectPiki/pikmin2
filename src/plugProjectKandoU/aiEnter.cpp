#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047F3C0
    lbl_8047F3C0:
        .4byte 0x6169456E
        .4byte 0x7465722E
        .4byte 0x63707000
    .global lbl_8047F3CC
    lbl_8047F3CC:
        .asciz "P2Assert"
        .skip 3
    .global lbl_8047F3D8
    lbl_8047F3D8:
        .4byte 0x436C696D
        .4byte 0x62416374
        .4byte 0x696F6E41
        .4byte 0x72670000
    .global lbl_8047F3E8
    lbl_8047F3E8:
        .4byte 0x476F746F
        .4byte 0x506F7341
        .4byte 0x6374696F
        .4byte 0x6E417267
        .4byte 0x00000000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q26PikiAI7ActExit
    __vt__Q26PikiAI7ActExit:
        .4byte 0
        .4byte 0
        .4byte init__Q26PikiAI7ActExitFPQ26PikiAI9ActionArg
        .4byte exec__Q26PikiAI7ActExitFv
        .4byte cleanup__Q26PikiAI7ActExitFv
        .4byte emotion_success__Q26PikiAI6ActionFv
        .4byte emotion_fail__Q26PikiAI6ActionFv
        .4byte applicable__Q26PikiAI6ActionFv
        .4byte getNextAIType__Q26PikiAI6ActionFv
        .4byte bounceCallback__Q26PikiAI6ActionFPQ24Game4PikiPQ23Sys8Triangle
        .4byte
   collisionCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9CollEvent .4byte
   platCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9PlatEvent .4byte
   doDirectDraw__Q26PikiAI6ActionFR8Graphics .4byte
   "wallCallback__Q26PikiAI6ActionFR10Vector3<f>" .4byte
   getInfo__Q26PikiAI6ActionFPc .global __vt__Q26PikiAI14ClimbActionArg
    __vt__Q26PikiAI14ClimbActionArg:
        .4byte 0
        .4byte 0
        .4byte getName__Q26PikiAI14ClimbActionArgFv
    .global __vt__Q26PikiAI16GotoPosActionArg
    __vt__Q26PikiAI16GotoPosActionArg:
        .4byte 0
        .4byte 0
        .4byte getName__Q26PikiAI16GotoPosActionArgFv
    .global __vt__Q26PikiAI8ActEnter
    __vt__Q26PikiAI8ActEnter:
        .4byte 0
        .4byte 0
        .4byte init__Q26PikiAI8ActEnterFPQ26PikiAI9ActionArg
        .4byte exec__Q26PikiAI8ActEnterFv
        .4byte cleanup__Q26PikiAI8ActEnterFv
        .4byte emotion_success__Q26PikiAI6ActionFv
        .4byte emotion_fail__Q26PikiAI6ActionFv
        .4byte applicable__Q26PikiAI6ActionFv
        .4byte getNextAIType__Q26PikiAI6ActionFv
        .4byte bounceCallback__Q26PikiAI6ActionFPQ24Game4PikiPQ23Sys8Triangle
        .4byte
   collisionCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9CollEvent .4byte
   platCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9PlatEvent .4byte
   doDirectDraw__Q26PikiAI6ActionFR8Graphics .4byte
   "wallCallback__Q26PikiAI6ActionFR10Vector3<f>" .4byte
   getInfo__Q26PikiAI6ActionFPc .4byte
   onKeyEvent__Q26PikiAI8ActEnterFRCQ28SysShape8KeyEvent .4byte 0 .4byte 0
        .4byte "@96@4@onKeyEvent__Q26PikiAI8ActEnterFRCQ28SysShape8KeyEvent"

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80519110
    lbl_80519110:
        .4byte 0x456E7465
        .4byte 0x72000000
    .global lbl_80519118
    lbl_80519118:
        .4byte 0x00000000
    .global lbl_8051911C
    lbl_8051911C:
        .4byte 0x47000000
    .global lbl_80519120
    lbl_80519120:
        .4byte 0x42080000
    .global lbl_80519124
    lbl_80519124:
        .4byte 0x40C90FDB
    .global lbl_80519128
    lbl_80519128:
        .4byte 0x43A2F983
    .global lbl_8051912C
    lbl_8051912C:
        .4byte 0xC3A2F983
    .global lbl_80519130
    lbl_80519130:
        .4byte 0x41A00000
    .global lbl_80519134
    lbl_80519134:
        .4byte 0x40400000
    .global lbl_80519138
    lbl_80519138:
        .4byte 0x41200000
        .4byte 0x00000000
    .global lbl_80519140
    lbl_80519140:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80519148
    lbl_80519148:
        .4byte 0x42480000
    .global lbl_8051914C
    lbl_8051914C:
        .float 0.25
    .global lbl_80519150
    lbl_80519150:
        .4byte 0x3FA66666
    .global lbl_80519154
    lbl_80519154:
        .float 1.0
    .global lbl_80519158
    lbl_80519158:
        .4byte 0x42DC0000
    .global lbl_8051915C
    lbl_8051915C:
        .float 0.05
    .global lbl_80519160
    lbl_80519160:
        .4byte 0x45786974
        .4byte 0x00000000
    .global lbl_80519168
    lbl_80519168:
        .4byte 0x42C80000
    .global lbl_8051916C
    lbl_8051916C:
        .4byte 0x43700000
    .global lbl_80519170
    lbl_80519170:
        .4byte 0x42700000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	801A2720
 * Size:	0000D0
 */
PikiAI::ActEnter::ActEnter(Game::Piki* p)
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
	beq      lbl_801A2758
	addi     r0, r31, 0x60
	lis      r3, __vt__Q28SysShape14MotionListener@ha
	stw      r0, 0xc(r31)
	addi     r0, r3, __vt__Q28SysShape14MotionListener@l
	stw      r0, 0x60(r31)

lbl_801A2758:
	mr       r3, r31
	mr       r4, r30
	bl       __ct__Q26PikiAI6ActionFPQ24Game4Piki
	lis      r3, __vt__Q26PikiAI8ActEnter@ha
	addi     r0, r31, 0x60
	addi     r4, r3, __vt__Q26PikiAI8ActEnter@l
	li       r3, 0x1c
	stw      r4, 0(r31)
	addi     r5, r4, 0x40
	lwz      r4, 0xc(r31)
	stw      r5, 0(r4)
	lwz      r4, 0xc(r31)
	subf     r0, r4, r0
	stw      r0, 4(r4)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801A27A8
	mr       r4, r30
	bl       __ct__Q26PikiAI10ActGotoPosFPQ24Game4Piki
	mr       r0, r3

lbl_801A27A8:
	stw      r0, 0x14(r31)
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801A27C8
	mr       r4, r30
	bl       __ct__Q26PikiAI8ActClimbFPQ24Game4Piki
	mr       r0, r3

lbl_801A27C8:
	stw      r0, 0x18(r31)
	addi     r0, r2, lbl_80519110@sda21
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
 * Address:	801A27F0
 * Size:	000338
 */
void PikiAI::ActEnter::init(PikiAI::ActionArg*)
{
	/*
	stwu     r1, -0xc0(r1)
	mflr     r0
	stw      r0, 0xc4(r1)
	stfd     f31, 0xb0(r1)
	psq_st   f31, 184(r1), 0, qr0
	stfd     f30, 0xa0(r1)
	psq_st   f30, 168(r1), 0, qr0
	stfd     f29, 0x90(r1)
	psq_st   f29, 152(r1), 0, qr0
	stfd     f28, 0x80(r1)
	psq_st   f28, 136(r1), 0, qr0
	stw      r31, 0x7c(r1)
	stw      r30, 0x78(r1)
	stw      r29, 0x74(r1)
	li       r0, 0
	mr       r30, r3
	stw      r0, 0x1c(r3)
	mr       r31, r4
	stw      r0, 0x20(r3)
	lwz      r3, 4(r4)
	lhz      r3, 0x128(r3)
	cmplwi   r3, 0x402
	beq      lbl_801A2854
	cmplwi   r3, 0x403
	bne      lbl_801A2858

lbl_801A2854:
	li       r0, 1

lbl_801A2858:
	clrlwi.  r0, r0, 0x18
	bne      lbl_801A287C
	lis      r3, lbl_8047F3C0@ha
	lis      r5, lbl_8047F3CC@ha
	addi     r3, r3, lbl_8047F3C0@l
	li       r4, 0x77
	addi     r5, r5, lbl_8047F3CC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801A287C:
	lwz      r3, 4(r30)
	li       r4, 0x1e
	li       r5, 0x1e
	li       r6, 0
	lwz      r12, 0(r3)
	li       r7, 0
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	lwz      r3, 4(r30)
	lfs      f0, lbl_80519118@sda21(r2)
	stfs     f0, 0x1e4(r3)
	stfs     f0, 0x1e8(r3)
	stfs     f0, 0x1ec(r3)
	lwz      r0, 4(r31)
	stw      r0, 0x24(r30)
	lwz      r4, 0x24(r30)
	lhz      r0, 0x22e(r4)
	cmplwi   r0, 4
	bne      lbl_801A2A2C
	addi     r3, r1, 8
	bl       getInStart_UFO__Q24Game5OnyonFv
	lfs      f31, 8(r1)
	lfs      f30, 0xc(r1)
	lfs      f29, 0x10(r1)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x44(r1)
	lfd      f3, lbl_80519140@sda21(r2)
	stw      r0, 0x40(r1)
	lfs      f1, lbl_8051911C@sda21(r2)
	lfd      f2, 0x40(r1)
	lfs      f0, lbl_80519120@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f28, f0, f1
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x4c(r1)
	lfd      f3, lbl_80519140@sda21(r2)
	stw      r0, 0x48(r1)
	lfs      f2, lbl_8051911C@sda21(r2)
	lfd      f0, 0x48(r1)
	lfs      f1, lbl_80519124@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_80519118@sda21(r2)
	fdivs    f2, f3, f2
	fmuls    f3, f1, f2
	fmr      f1, f3
	fcmpo    cr0, f3, f0
	bge      lbl_801A2954
	fneg     f1, f3

lbl_801A2954:
	lfs      f2, lbl_80519128@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_80519118@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0x50(r1)
	lwz      r0, 0x54(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f1, f28, f0
	bge      lbl_801A29B0
	lfs      f0, lbl_8051912C@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x58(r1)
	lwz      r0, 0x5c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_801A29C8

lbl_801A29B0:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0x60(r1)
	lwz      r0, 0x64(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_801A29C8:
	fmuls    f3, f28, f0
	lfs      f0, lbl_80519118@sda21(r2)
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	fadds    f1, f29, f1
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	fadds    f2, f30, f0
	fadds    f3, f31, f3
	lfs      f0, lbl_80519130@sda21(r2)
	lis      r3, __vt__Q26PikiAI16GotoPosActionArg@ha
	stw      r0, 0x28(r1)
	addi     r0, r3, __vt__Q26PikiAI16GotoPosActionArg@l
	addi     r4, r1, 0x28
	stw      r0, 0x28(r1)
	stfs     f3, 0x2c(r1)
	stfs     f2, 0x30(r1)
	stfs     f1, 0x34(r1)
	stfs     f0, 0x38(r1)
	lwz      r3, 0x14(r30)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r0, 2
	sth      r0, 0x10(r30)
	b        lbl_801A2AEC

lbl_801A2A2C:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x64(r1)
	lfd      f3, lbl_80519140@sda21(r2)
	stw      r0, 0x60(r1)
	lfs      f1, lbl_8051911C@sda21(r2)
	lfd      f2, 0x60(r1)
	lfs      f0, lbl_80519134@sda21(r2)
	fsubs    f2, f2, f3
	lwz      r3, 4(r31)
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x58(r1)
	lwz      r29, 0x5c(r1)
	mr       r4, r29
	bl       getFootPart__Q24Game5OnyonFi
	stw      r3, 0x1c(r30)
	lis      r4, __vt__Q26PikiAI9ActionArg@ha
	lis      r3, __vt__Q26PikiAI16GotoPosActionArg@ha
	lfs      f0, lbl_80519138@sda21(r2)
	lwz      r6, 0x1c(r30)
	addi     r5, r4, __vt__Q26PikiAI9ActionArg@l
	addi     r0, r3, __vt__Q26PikiAI16GotoPosActionArg@l
	mr       r4, r29
	stw      r6, 0x20(r30)
	lwz      r3, 0x1c(r30)
	stw      r5, 0x14(r1)
	stw      r0, 0x14(r1)
	lfs      f1, 0x4c(r3)
	stfs     f1, 0x18(r1)
	lfs      f1, 0x50(r3)
	stfs     f1, 0x1c(r1)
	lfs      f1, 0x54(r3)
	stfs     f1, 0x20(r1)
	stfs     f0, 0x24(r1)
	lwz      r3, 4(r31)
	bl       getLegPart__Q24Game5OnyonFi
	stw      r3, 0x1c(r30)
	addi     r4, r1, 0x14
	lwz      r3, 0x14(r30)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	sth      r0, 0x10(r30)

lbl_801A2AEC:
	psq_l    f31, 184(r1), 0, qr0
	lfd      f31, 0xb0(r1)
	psq_l    f30, 168(r1), 0, qr0
	lfd      f30, 0xa0(r1)
	psq_l    f29, 152(r1), 0, qr0
	lfd      f29, 0x90(r1)
	psq_l    f28, 136(r1), 0, qr0
	lfd      f28, 0x80(r1)
	lwz      r31, 0x7c(r1)
	lwz      r30, 0x78(r1)
	lwz      r0, 0xc4(r1)
	lwz      r29, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0xc0
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A2B28
 * Size:	000240
 */
void PikiAI::ActEnter::exec(void)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	mr       r30, r3
	lhz      r0, 0x10(r3)
	cmpwi    r0, 2
	beq      lbl_801A2CF0
	bge      lbl_801A2B68
	cmpwi    r0, 0
	beq      lbl_801A2B78
	bge      lbl_801A2C64
	b        lbl_801A2D44

lbl_801A2B68:
	cmpwi    r0, 4
	beq      lbl_801A2D20
	bge      lbl_801A2D44
	b        lbl_801A2D40

lbl_801A2B78:
	lwz      r4, 0x20(r30)
	cmplwi   r4, 0
	beq      lbl_801A2BA0
	lwz      r3, 0x14(r30)
	lfs      f0, 0x4c(r4)
	stfs     f0, 0x10(r3)
	lfs      f0, 0x50(r4)
	stfs     f0, 0x14(r3)
	lfs      f0, 0x54(r4)
	stfs     f0, 0x18(r3)

lbl_801A2BA0:
	lwz      r3, 0x14(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0
	bne      lbl_801A2D44
	lwz      r4, 0x1c(r30)
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	lfs      f0, lbl_80519148@sda21(r2)
	lis      r3, __vt__Q26PikiAI14ClimbActionArg@ha
	stw      r0, 0x20(r1)
	addi     r3, r3, __vt__Q26PikiAI14ClimbActionArg@l
	li       r0, 1
	stw      r3, 0x20(r1)
	addi     r3, r1, 0x14
	stw      r4, 0x24(r1)
	stfs     f0, 0x28(r1)
	stb      r0, 0x2c(r1)
	lwz      r4, 4(r30)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 4(r30)
	lwz      r4, 0x24(r30)
	lwz      r5, 0x1c(r30)
	bl       startStick__Q24Game8CreatureFPQ24Game8CreatureP8CollPart
	lwz      r4, 4(r30)
	addi     r3, r1, 8
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x18(r30)
	addi     r4, r1, 0x20
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r0, 1
	li       r5, 0x2815
	sth      r0, 0x10(r30)
	li       r6, 1
	lwz      r3, 4(r30)
	lwz      r4, 0x24(r30)
	bl       startSound__Q24Game4PikiFPQ24Game8CreatureUlb
	b        lbl_801A2D44

lbl_801A2C64:
	lwz      r3, 0x18(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r4, 4(r30)
	mr       r31, r3
	lfs      f0, lbl_8051914C@sda21(r2)
	lfs      f31, 0x108(r4)
	fcmpo    cr0, f31, f0
	bge      lbl_801A2CB8
	fdivs    f31, f31, f0
	mr       r3, r4
	bl       getBaseScale__Q24Game4PikiFv
	fmuls    f0, f31, f1
	stfs     f0, 0x5c(r30)
	lfs      f0, 0x5c(r30)
	lwz      r3, 4(r30)
	stfs     f0, 0x168(r3)
	stfs     f0, 0x16c(r3)
	stfs     f0, 0x170(r3)

lbl_801A2CB8:
	cmpwi    r31, 0
	bne      lbl_801A2D44
	lwz      r3, 4(r30)
	bl       endStick__Q24Game8CreatureFv
	lwz      r3, 4(r30)
	li       r5, 0x281d
	lwz      r4, 0x24(r30)
	li       r6, 1
	bl       startSound__Q24Game4PikiFPQ24Game8CreatureUlb
	lwz      r3, 0x24(r30)
	lwz      r4, 4(r30)
	bl       enterPiki__Q24Game5OnyonFPQ24Game4Piki
	li       r3, 0
	b        lbl_801A2D48

lbl_801A2CF0:
	lwz      r3, 0x14(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0
	bne      lbl_801A2D44
	li       r0, 3
	mr       r3, r30
	sth      r0, 0x10(r30)
	bl       initStay__Q26PikiAI8ActEnterFv
	b        lbl_801A2D44

lbl_801A2D20:
	bl       execSuck__Q26PikiAI8ActEnterFv
	cmpwi    r3, 0
	bne      lbl_801A2D44
	lwz      r3, 0x24(r30)
	lwz      r4, 4(r30)
	bl       enterPiki__Q24Game5OnyonFPQ24Game4Piki
	li       r3, 0
	b        lbl_801A2D48

lbl_801A2D40:
	bl       execStay__Q26PikiAI8ActEnterFv

lbl_801A2D44:
	li       r3, 1

lbl_801A2D48:
	psq_l    f31, 72(r1), 0, qr0
	lwz      r0, 0x54(r1)
	lfd      f31, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A2D68
 * Size:	000068
 */
void PikiAI::ActEnter::cleanup(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 4(r3)
	bl       endStick__Q24Game8CreatureFv
	lwz      r3, 4(r31)
	li       r4, 1
	lwz      r12, 0(r3)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	lwz      r3, 4(r31)
	bl       getBaseScale__Q24Game4PikiFv
	stfs     f1, 0x5c(r31)
	lfs      f0, 0x5c(r31)
	lwz      r3, 4(r31)
	stfs     f0, 0x168(r3)
	stfs     f0, 0x16c(r3)
	stfs     f0, 0x170(r3)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A2DD0
 * Size:	000004
 */
void PikiAI::ActEnter::onKeyEvent(SysShape::KeyEvent const&) { }

/*
 * --INFO--
 * Address:	801A2DD4
 * Size:	000078
 */
void PikiAI::ActEnter::initStay(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lfs      f0, lbl_80519150@sda21(r2)
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	addi     r3, r1, 8
	stfs     f0, 0x40(r31)
	lwz      r4, 0x24(r31)
	bl       getInEnd_UFO__Q24Game5OnyonFv
	lfs      f2, 8(r1)
	addi     r4, r1, 0x14
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	lwz      r3, 4(r31)
	bl       "turnTo__Q24Game8FakePikiFR10Vector3<f>"
	lwz      r3, 4(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x1d8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A2E4C
 * Size:	000064
 */
void PikiAI::ActEnter::execStay(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f1, lbl_80519118@sda21(r2)
	stw      r0, 0x14(r1)
	lwz      r4, sys@sda21(r13)
	lfs      f2, 0x40(r3)
	lfs      f0, 0x54(r4)
	fsubs    f0, f2, f0
	stfs     f0, 0x40(r3)
	lwz      r4, 4(r3)
	stfs     f1, 0x1e4(r4)
	stfs     f1, 0x1e8(r4)
	stfs     f1, 0x1ec(r4)
	lfs      f0, 0x40(r3)
	fcmpo    cr0, f0, f1
	cror     2, 0, 2
	bne      lbl_801A2E9C
	li       r0, 4
	sth      r0, 0x10(r3)
	bl       initSuck__Q26PikiAI8ActEnterFv

lbl_801A2E9C:
	lwz      r0, 0x14(r1)
	li       r3, 1
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A2EB0
 * Size:	0001A0
 */
void PikiAI::ActEnter::initSuck(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	addi     r3, r1, 0x14
	lwz      r4, 0x24(r31)
	bl       getInEnd_UFO__Q24Game5OnyonFv
	lfs      f1, 0x14(r1)
	addi     r3, r1, 8
	lfs      f0, lbl_80519134@sda21(r2)
	stfs     f1, 0x28(r31)
	lfs      f1, 0x18(r1)
	stfs     f1, 0x2c(r31)
	lfs      f1, 0x1c(r1)
	stfs     f1, 0x30(r31)
	lfs      f1, 0x2c(r31)
	fsubs    f0, f1, f0
	stfs     f0, 0x2c(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x28(r31)
	lfs      f1, 8(r1)
	lfs      f0, 0xc(r1)
	lfs      f3, 0x2c(r31)
	fsubs    f1, f2, f1
	lfs      f5, 0x30(r31)
	lfs      f4, 0x10(r1)
	fsubs    f3, f3, f0
	lfs      f2, lbl_80519118@sda21(r2)
	stfs     f1, 0x34(r31)
	fsubs    f1, f5, f4
	stfs     f3, 0x38(r31)
	stfs     f1, 0x3c(r31)
	stfs     f2, 0x38(r31)
	lfs      f4, 0x34(r31)
	lfs      f3, 0x38(r31)
	lfs      f5, 0x3c(r31)
	fmuls    f1, f4, f4
	fmuls    f3, f3, f3
	fmuls    f5, f5, f5
	fadds    f1, f1, f3
	fadds    f1, f5, f1
	fcmpo    cr0, f1, f2
	ble      lbl_801A2F8C
	fmadds   f1, f4, f4, f3
	fadds    f3, f5, f1
	fcmpo    cr0, f3, f2
	ble      lbl_801A2F90
	frsqrte  f1, f3
	fmuls    f3, f1, f3
	b        lbl_801A2F90

lbl_801A2F8C:
	fmr      f3, f2

lbl_801A2F90:
	lfs      f1, lbl_80519118@sda21(r2)
	fcmpo    cr0, f3, f1
	ble      lbl_801A2FCC
	lfs      f2, lbl_80519154@sda21(r2)
	lfs      f1, 0x34(r31)
	fdivs    f2, f2, f3
	fmuls    f1, f1, f2
	stfs     f1, 0x34(r31)
	lfs      f1, 0x38(r31)
	fmuls    f1, f1, f2
	stfs     f1, 0x38(r31)
	lfs      f1, 0x3c(r31)
	fmuls    f1, f1, f2
	stfs     f1, 0x3c(r31)
	b        lbl_801A2FD0

lbl_801A2FCC:
	fmr      f3, f1

lbl_801A2FD0:
	stfs     f3, 0x48(r31)
	li       r0, 0
	lfs      f1, lbl_80519154@sda21(r2)
	li       r4, 0x281f
	lfs      f2, 0x2c(r31)
	li       r5, 1
	fsubs    f2, f2, f0
	fabs     f2, f2
	frsp     f2, f2
	stfs     f2, 0x44(r31)
	stfs     f0, 0x2c(r31)
	lfs      f0, 0x48(r31)
	fneg     f0, f0
	stfs     f0, 0x40(r31)
	stb      r0, 0x4c(r31)
	stfs     f1, 0x5c(r31)
	lwz      r3, 4(r31)
	bl       startSound__Q24Game4PikiFUlb
	lwz      r3, 4(r31)
	li       r4, 0x23
	li       r5, 0x23
	li       r6, 0
	lwz      r12, 0(r3)
	li       r7, 0
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A3050
 * Size:	00018C
 */
void PikiAI::ActEnter::execSuck(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lbz      r0, 0x4c(r3)
	cmplwi   r0, 0
	beq      lbl_801A3088
	lwz      r3, 4(r31)
	addi     r4, r31, 0x50
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	li       r3, 0
	b        lbl_801A31C8

lbl_801A3088:
	lfs      f9, 0x44(r31)
	addi     r4, r1, 8
	lfs      f0, 0x48(r31)
	li       r5, 0
	fneg     f1, f9
	lfs      f8, 0x40(r31)
	fmuls    f0, f0, f0
	lfs      f2, 0x38(r31)
	lfs      f4, 0x3c(r31)
	fmuls    f6, f8, f8
	fdivs    f7, f1, f0
	lfs      f0, 0x34(r31)
	lfs      f3, 0x2c(r31)
	lfs      f5, 0x30(r31)
	lfs      f1, 0x28(r31)
	fmuls    f2, f2, f8
	fmuls    f4, f4, f8
	fmuls    f0, f0, f8
	fadds    f2, f3, f2
	fmadds   f6, f7, f6, f9
	fadds    f3, f5, f4
	fadds    f1, f1, f0
	stfs     f2, 0xc(r1)
	fadds    f0, f2, f6
	stfs     f3, 0x10(r1)
	stfs     f1, 8(r1)
	stfs     f0, 0xc(r1)
	lwz      r3, 4(r31)
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	lfs      f0, 0x5c(r31)
	lwz      r3, 4(r31)
	lfs      f3, lbl_80519158@sda21(r2)
	stfs     f0, 0x168(r3)
	lfs      f2, lbl_80519118@sda21(r2)
	stfs     f0, 0x16c(r3)
	stfs     f0, 0x170(r3)
	lwz      r3, sys@sda21(r13)
	lfs      f0, 0x40(r31)
	lfs      f1, 0x54(r3)
	fmadds   f0, f3, f1, f0
	stfs     f0, 0x40(r31)
	lfs      f0, 0x40(r31)
	fcmpo    cr0, f0, f2
	cror     2, 1, 2
	bne      lbl_801A3174
	li       r0, 1
	li       r4, 0x281d
	stb      r0, 0x4c(r31)
	li       r5, 1
	lfs      f0, 8(r1)
	stfs     f0, 0x50(r31)
	lfs      f0, 0xc(r1)
	stfs     f0, 0x54(r31)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x58(r31)
	lwz      r3, 4(r31)
	bl       startSound__Q24Game4PikiFUlb
	li       r3, 0
	b        lbl_801A31C8

lbl_801A3174:
	fneg     f1, f0
	lfs      f0, 0x48(r31)
	fdivs    f1, f1, f0
	fcmpo    cr0, f1, f2
	bge      lbl_801A318C
	fmr      f1, f2

lbl_801A318C:
	lfs      f0, lbl_80519118@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_801A31AC
	ble      lbl_801A31A8
	frsqrte  f0, f1
	fmuls    f0, f0, f1
	b        lbl_801A31AC

lbl_801A31A8:
	fmr      f0, f1

lbl_801A31AC:
	stfs     f0, 0x5c(r31)
	lfs      f0, lbl_8051915C@sda21(r2)
	lfs      f1, 0x5c(r31)
	fcmpo    cr0, f1, f0
	bge      lbl_801A31C4
	stfs     f0, 0x5c(r31)

lbl_801A31C4:
	li       r3, 1

lbl_801A31C8:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A31DC
 * Size:	000070
 */
PikiAI::ActExit::ActExit(Game::Piki* p)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       __ct__Q26PikiAI6ActionFPQ24Game4Piki
	lis      r4, __vt__Q26PikiAI7ActExit@ha
	li       r3, 0x24
	addi     r0, r4, __vt__Q26PikiAI7ActExit@l
	stw      r0, 0(r30)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801A3224
	mr       r4, r31
	bl       __ct__Q26PikiAI8ActClimbFPQ24Game4Piki
	mr       r0, r3

lbl_801A3224:
	stw      r0, 0xc(r30)
	addi     r0, r2, lbl_80519160@sda21
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
 * Address:	801A324C
 * Size:	000204
 */
void PikiAI::ActExit::init(PikiAI::ActionArg*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	stw      r30, 0x28(r1)
	mr       r30, r3
	lwz      r3, 4(r4)
	lhz      r0, 0x128(r3)
	cmplwi   r0, 0x402
	beq      lbl_801A3294
	lis      r3, lbl_8047F3C0@ha
	lis      r5, lbl_8047F3CC@ha
	addi     r3, r3, lbl_8047F3C0@l
	li       r4, 0x205
	addi     r5, r5, lbl_8047F3CC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801A3294:
	lwz      r3, 4(r30)
	li       r4, 0x1e
	li       r5, 0x1e
	li       r6, 0
	lwz      r12, 0(r3)
	li       r7, 0
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	lwz      r3, 4(r30)
	lfs      f0, lbl_80519118@sda21(r2)
	stfs     f0, 0x1e4(r3)
	stfs     f0, 0x1e8(r3)
	stfs     f0, 0x1ec(r3)
	bl       rand
	xoris    r0, r3, 0x8000
	lis      r3, 0x4330
	stw      r0, 0x1c(r1)
	lwz      r0, 4(r31)
	stw      r3, 0x18(r1)
	lfd      f2, lbl_80519140@sda21(r2)
	lfd      f0, 0x18(r1)
	lfs      f1, lbl_8051911C@sda21(r2)
	fsubs    f2, f0, f2
	stw      r0, 0x14(r30)
	lfs      f0, lbl_80519134@sda21(r2)
	lwz      r3, 4(r31)
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r4, 0x24(r1)
	bl       getLegPart__Q24Game5OnyonFi
	stw      r3, 0x10(r30)
	lis      r4, __vt__Q26PikiAI9ActionArg@ha
	lis      r3, __vt__Q26PikiAI14ClimbActionArg@ha
	lfs      f0, lbl_80519168@sda21(r2)
	lwz      r6, 0x10(r30)
	addi     r4, r4, __vt__Q26PikiAI9ActionArg@l
	li       r0, 0
	addi     r3, r3, __vt__Q26PikiAI14ClimbActionArg@l
	stw      r4, 8(r1)
	addi     r4, r6, 0x4c
	li       r5, 0
	stw      r3, 8(r1)
	stw      r6, 0xc(r1)
	stfs     f0, 0x10(r1)
	stb      r0, 0x14(r1)
	lwz      r3, 4(r30)
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	lwz      r3, 4(r30)
	lwz      r4, 0x14(r30)
	lwz      r5, 0x10(r30)
	bl       startStick__Q24Game8CreatureFPQ24Game8CreatureP8CollPart
	lwz      r3, 0xc(r30)
	addi     r4, r1, 8
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 4(r30)
	li       r5, 0x281e
	lwz      r4, 4(r31)
	li       r6, 1
	bl       startSound__Q24Game4PikiFPQ24Game8CreatureUlb
	lis      r3, "zero__10Vector3<f>"@ha
	lwz      r4, 4(r30)
	lfsu     f1, "zero__10Vector3<f>"@l(r3)
	lfs      f0, lbl_80519118@sda21(r2)
	stfs     f1, 0x168(r4)
	lfs      f1, 4(r3)
	stfs     f1, 0x16c(r4)
	lfs      f1, 8(r3)
	stfs     f1, 0x170(r4)
	lwz      r3, 4(r30)
	stfs     f0, 0x138(r3)
	lwz      r3, 4(r30)
	stfs     f0, 0x13c(r3)
	lwz      r3, 4(r30)
	stfs     f0, 0x140(r3)
	lwz      r3, 4(r30)
	stfs     f0, 0x148(r3)
	lwz      r3, 4(r30)
	stfs     f0, 0x14c(r3)
	lwz      r3, 4(r30)
	stfs     f0, 0x150(r3)
	lwz      r3, 4(r30)
	stfs     f0, 0x158(r3)
	lwz      r3, 4(r30)
	stfs     f0, 0x15c(r3)
	lwz      r3, 4(r30)
	stfs     f0, 0x160(r3)
	lwz      r3, 4(r30)
	lwz      r4, 0x174(r3)
	addi     r3, r3, 0x138
	lwz      r4, 8(r4)
	addi     r4, r4, 0x24
	bl       PSMTXCopy
	lwz      r3, 4(r30)
	lwz      r3, 0x174(r3)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
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
 * Address:	801A3450
 * Size:	0000A8
 */
void PikiAI::ActExit::exec(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0xc(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r4, 4(r30)
	mr       r31, r3
	lfs      f0, lbl_8051914C@sda21(r2)
	lfs      f31, 0x108(r4)
	fcmpo    cr0, f31, f0
	bge      lbl_801A34C4
	fdivs    f31, f31, f0
	mr       r3, r4
	bl       getBaseScale__Q24Game4PikiFv
	fmuls    f0, f31, f1
	stfs     f0, 0x18(r30)
	lfs      f0, 0x18(r30)
	lwz      r3, 4(r30)
	stfs     f0, 0x168(r3)
	stfs     f0, 0x16c(r3)
	stfs     f0, 0x170(r3)

lbl_801A34C4:
	cmpwi    r31, 0
	bne      lbl_801A34D4
	li       r3, 0
	b        lbl_801A34D8

lbl_801A34D4:
	li       r3, 1

lbl_801A34D8:
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A34F8
 * Size:	0000C8
 */
void PikiAI::ActExit::cleanup(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r3, 4(r3)
	lfs      f31, 0x108(r3)
	bl       getBaseScale__Q24Game4PikiFv
	stfs     f1, 0x18(r31)
	lfs      f0, 0x18(r31)
	lwz      r3, 4(r31)
	stfs     f0, 0x168(r3)
	stfs     f0, 0x16c(r3)
	stfs     f0, 0x170(r3)
	lwz      r3, 4(r31)
	bl       endStick__Q24Game8CreatureFv
	lwz      r3, 4(r31)
	li       r4, 1
	lwz      r12, 0(r3)
	lwz      r12, 0x1d8(r12)
	mtctr    r12
	bctrl
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f1, lbl_80519140@sda21(r2)
	stw      r0, 8(r1)
	lfs      f3, lbl_8051911C@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f2, lbl_80519170@sda21(r2)
	fsubs    f4, f0, f1
	lfs      f1, lbl_8051916C@sda21(r2)
	lwz      r3, 4(r31)
	lfs      f0, lbl_80519118@sda21(r2)
	fdivs    f3, f4, f3
	stfs     f0, 0x200(r3)
	fmadds   f1, f2, f3, f1
	fmuls    f1, f1, f31
	stfs     f1, 0x204(r3)
	stfs     f0, 0x208(r3)
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A35C0
 * Size:	00000C
 */
void PikiAI::ClimbActionArg::getName(void)
{
	/*
	lis      r3, lbl_8047F3D8@ha
	addi     r3, r3, lbl_8047F3D8@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A35CC
 * Size:	00000C
 */
void PikiAI::GotoPosActionArg::getName(void)
{
	/*
	lis      r3, lbl_8047F3E8@ha
	addi     r3, r3, lbl_8047F3E8@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A35D8
 * Size:	000014
 */
void @96 @4 @PikiAI::ActEnter::onKeyEvent(SysShape::KeyEvent const&)
{
	/*
	li       r11, 4
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -96
	b        onKeyEvent__Q26PikiAI8ActEnterFRCQ28SysShape8KeyEvent
	*/
}
