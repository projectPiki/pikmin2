#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80482138
    lbl_80482138:
        .asciz "aiTeki.cpp"
        .skip 1
    .global lbl_80482144
    lbl_80482144:
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q26PikiAI7ActTeki
    __vt__Q26PikiAI7ActTeki:
        .4byte 0
        .4byte 0
        .4byte init__Q26PikiAI7ActTekiFPQ26PikiAI9ActionArg
        .4byte exec__Q26PikiAI7ActTekiFv
        .4byte cleanup__Q26PikiAI7ActTekiFv
        .4byte emotion_success__Q26PikiAI7ActTekiFv
        .4byte emotion_fail__Q26PikiAI6ActionFv
        .4byte applicable__Q26PikiAI6ActionFv
        .4byte getNextAIType__Q26PikiAI7ActTekiFv
        .4byte bounceCallback__Q26PikiAI6ActionFPQ24Game4PikiPQ23Sys8Triangle
        .4byte
   collisionCallback__Q26PikiAI7ActTekiFPQ24Game4PikiRQ24Game9CollEvent .4byte
   platCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9PlatEvent .4byte
   doDirectDraw__Q26PikiAI7ActTekiFR8Graphics .4byte
   "wallCallback__Q26PikiAI6ActionFR10Vector3<f>" .4byte
   getInfo__Q26PikiAI6ActionFPc .4byte
   onKeyEvent__Q26PikiAI7ActTekiFRCQ28SysShape8KeyEvent .4byte 0 .4byte 0 .4byte
   "@72@4@onKeyEvent__Q26PikiAI7ActTekiFRCQ28SysShape8KeyEvent" .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80519F68
    lbl_80519F68:
        .4byte 0x54656B69
        .4byte 0x00000000
    .global lbl_80519F70
    lbl_80519F70:
        .4byte 0x00000000
    .global lbl_80519F74
    lbl_80519F74:
        .4byte 0x46480000
    .global lbl_80519F78
    lbl_80519F78:
        .4byte 0x42C80000
    .global lbl_80519F7C
    lbl_80519F7C:
        .float 1.0
    .global lbl_80519F80
    lbl_80519F80:
        .4byte 0x47000000
    .global lbl_80519F84
    lbl_80519F84:
        .float 0.5
    .global lbl_80519F88
    lbl_80519F88:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80519F90
    lbl_80519F90:
        .4byte 0x42480000
    .global lbl_80519F94
    lbl_80519F94:
        .4byte 0x41200000
    .global lbl_80519F98
    lbl_80519F98:
        .float 0.3
    .global lbl_80519F9C
    lbl_80519F9C:
        .float 0.1
    .global lbl_80519FA0
    lbl_80519FA0:
        .4byte 0xBDCCCCCD
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	8021295C
 * Size:	000090
 */
PikiAI::ActTeki::ActTeki(Game::Piki* p)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	beq      lbl_8021298C
	addi     r0, r31, 0x48
	lis      r3, __vt__Q28SysShape14MotionListener@ha
	stw      r0, 0xc(r31)
	addi     r0, r3, __vt__Q28SysShape14MotionListener@l
	stw      r0, 0x48(r31)

lbl_8021298C:
	mr       r3, r31
	mr       r4, r5
	bl       __ct__Q26PikiAI6ActionFPQ24Game4Piki
	lis      r3, __vt__Q26PikiAI7ActTeki@ha
	addi     r5, r31, 0x48
	addi     r3, r3, __vt__Q26PikiAI7ActTeki@l
	addi     r4, r2, lbl_80519F68@sda21
	stw      r3, 0(r31)
	addi     r7, r3, 0x40
	li       r0, 0
	mr       r3, r31
	lwz      r6, 0xc(r31)
	stw      r7, 0(r6)
	lwz      r6, 0xc(r31)
	subf     r5, r6, r5
	stw      r5, 4(r6)
	stw      r4, 8(r31)
	stw      r0, 0x10(r31)
	stw      r0, 0x18(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802129EC
 * Size:	00010C
 */
void PikiAI::ActTeki::init(PikiAI::ActionArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bne      lbl_80212A28
	lis      r3, lbl_80482138@ha
	lis      r5, lbl_80482144@ha
	addi     r3, r3, lbl_80482138@l
	li       r4, 0x5b
	addi     r5, r5, lbl_80482144@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80212A28:
	lwz      r0, 4(r31)
	li       r4, 0
	lfs      f0, lbl_80519F70@sda21(r2)
	li       r3, 1
	stw      r0, 0x10(r30)
	li       r0, -1
	stfs     f0, 0x2c(r30)
	stfs     f0, 0x30(r30)
	stfs     f0, 0x34(r30)
	stfs     f0, 0x38(r30)
	stfs     f0, 0x3c(r30)
	stfs     f0, 0x40(r30)
	stfs     f0, 0x44(r30)
	stw      r4, 0x18(r30)
	stfs     f0, 0x20(r30)
	stw      r3, 0x28(r30)
	stw      r0, 0x1c(r30)
	stfs     f0, 0x24(r30)
	stb      r4, 0x14(r30)
	lwz      r3, 0x10(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80212AB4
	lwz      r3, 0x10(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x43
	bne      lbl_80212AB4
	li       r0, 1
	stb      r0, 0x14(r30)

lbl_80212AB4:
	li       r0, 0
	li       r4, 0x1e
	stb      r0, 0x15(r30)
	li       r5, 0x1e
	li       r6, 0
	li       r7, 0
	lwz      r3, 4(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
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
 * Address:	80212AF8
 * Size:	000178
 */
void PikiAI::ActTeki::exec(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r3, 0x10(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80212B98
	lbz      r0, 0x14(r31)
	cmplwi   r0, 0
	beq      lbl_80212B58
	li       r0, 0
	stb      r0, 0x14(r31)
	lbz      r0, sTekiChappyFlag__Q24Game12BaseHIOParms@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80212B58
	lis      r3, alivePikis__Q24Game8GameStat@ha
	lwz      r4, 4(r31)
	addi     r3, r3, alivePikis__Q24Game8GameStat@l
	bl       inc__Q34Game8GameStat11PikiCounterFPQ24Game4Piki

lbl_80212B58:
	lwz      r3, 4(r31)
	bl       getStateID__Q24Game4PikiFv
	cmpwi    r3, 0x15
	beq      lbl_80212B90
	li       r0, 3
	addi     r6, r1, 8
	sth      r0, 8(r1)
	li       r5, 0x15
	lwz      r4, 4(r31)
	lwz      r3, 0x28c(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_80212B90:
	li       r3, 1
	b        lbl_80212C5C

lbl_80212B98:
	lwz      r3, 0x10(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xcc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80212BC4
	li       r0, 1
	li       r3, 0
	stb      r0, 0x15(r31)
	b        lbl_80212C5C

lbl_80212BC4:
	lwz      r3, 0x10(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80212C18
	lwz      r3, 0x10(r31)
	lwz      r0, 0x1e0(r3)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	beq      lbl_80212C18
	lwz      r12, 0(r3)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x29
	bne      lbl_80212C18
	li       r0, 1
	li       r3, 0
	stb      r0, 0x15(r31)
	b        lbl_80212C5C

lbl_80212C18:
	lwz      r5, 4(r31)
	lis      r3, __vt__Q24Game11Interaction@ha
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lis      r3, __vt__Q24Game25InteractFuefukiTimerReset@ha
	stw      r0, 0xc(r1)
	addi     r0, r3, __vt__Q24Game25InteractFuefukiTimerReset@l
	addi     r4, r1, 0xc
	stw      r5, 0x10(r1)
	stw      r0, 0xc(r1)
	lwz      r3, 0x10(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       test_0__Q26PikiAI7ActTekiFv
	li       r3, 1

lbl_80212C5C:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80212C70
 * Size:	000050
 */
void PikiAI::ActTeki::emotion_success(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lbz      r0, 0x15(r3)
	cmplwi   r0, 0
	beq      lbl_80212CB0
	li       r0, 2
	addi     r6, r1, 8
	sth      r0, 8(r1)
	li       r5, 0x13
	lwz      r4, 4(r3)
	lwz      r3, 0x28c(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_80212CB0:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80212CC0
 * Size:	000314
 */
void PikiAI::ActTeki::makeTarget(void)
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
	stfd     f27, 0x90(r1)
	psq_st   f27, 152(r1), 0, qr0
	stfd     f26, 0x80(r1)
	psq_st   f26, 136(r1), 0, qr0
	stfd     f25, 0x70(r1)
	psq_st   f25, 120(r1), 0, qr0
	stfd     f24, 0x60(r1)
	psq_st   f24, 104(r1), 0, qr0
	stfd     f23, 0x50(r1)
	psq_st   f23, 88(r1), 0, qr0
	stfd     f22, 0x40(r1)
	psq_st   f22, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	stw      r29, 0x34(r1)
	mr       r29, r3
	addi     r3, r1, 0x14
	lwz      r4, 4(r29)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x10(r29)
	addi     r3, r1, 8
	lfs      f30, 0x14(r1)
	lwz      r12, 0(r4)
	lfs      f29, 0x18(r1)
	lwz      r12, 8(r12)
	lfs      f28, 0x1c(r1)
	mtctr    r12
	bctrl
	lfs      f27, 0xc(r1)
	lfs      f25, 8(r1)
	fsubs    f2, f27, f29
	lfs      f26, 0x10(r1)
	fsubs    f1, f25, f30
	lfs      f0, lbl_80519F70@sda21(r2)
	fsubs    f3, f26, f28
	fmuls    f2, f2, f2
	fmuls    f3, f3, f3
	fmadds   f1, f1, f1, f2
	fadds    f31, f3, f1
	fcmpo    cr0, f31, f0
	ble      lbl_80212DAC
	ble      lbl_80212DB0
	frsqrte  f0, f31
	fmuls    f31, f0, f31
	b        lbl_80212DB0

lbl_80212DAC:
	fmr      f31, f0

lbl_80212DB0:
	lfs      f0, lbl_80519F70@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_80212DC0
	b        lbl_80212DC4

lbl_80212DC0:
	fmr      f31, f0

lbl_80212DC4:
	lwz      r3, 0x10(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x154(r12)
	mtctr    r12
	bctrl
	or.      r31, r3, r3
	beq      lbl_80212F68
	lwz      r3, 0x18(r29)
	lfs      f24, lbl_80519F74@sda21(r2)
	cmplwi   r3, 0
	beq      lbl_80212E3C
	lfs      f0, 4(r3)
	lfs      f2, 8(r3)
	fsubs    f3, f27, f0
	lfs      f1, 0(r3)
	fsubs    f2, f26, f2
	lfs      f0, lbl_80519F70@sda21(r2)
	fsubs    f1, f25, f1
	fmuls    f3, f3, f3
	fmuls    f2, f2, f2
	fmadds   f1, f1, f1, f3
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80212E34
	ble      lbl_80212E38
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80212E38

lbl_80212E34:
	fmr      f1, f0

lbl_80212E38:
	fmr      f24, f1

lbl_80212E3C:
	mr       r3, r31
	li       r4, 0
	bl       get__Q24Game9FootmarksFi
	lfs      f22, lbl_80519F70@sda21(r2)
	stw      r3, 0x18(r29)
	fmr      f23, f22
	lwz      r3, 8(r31)
	addi     r30, r3, -1
	b        lbl_80212F00

lbl_80212E60:
	mr       r3, r31
	mr       r4, r30
	bl       get__Q24Game9FootmarksFi
	lfs      f4, 4(r3)
	lfs      f3, 8(r3)
	fsubs    f1, f4, f29
	lfs      f5, 0(r3)
	fsubs    f2, f3, f28
	fsubs    f0, f5, f30
	fmuls    f1, f1, f1
	fmuls    f6, f2, f2
	fsubs    f3, f26, f3
	fmadds   f0, f0, f0, f1
	fsubs    f2, f27, f4
	fsubs    f1, f25, f5
	fadds    f0, f6, f0
	fcmpo    cr0, f0, f22
	fmuls    f0, f2, f2
	fmuls    f2, f3, f3
	fmadds   f0, f1, f1, f0
	fadds    f1, f2, f0
	fcmpo    cr0, f1, f22
	ble      lbl_80212ECC
	ble      lbl_80212ED0
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80212ED0

lbl_80212ECC:
	fmr      f1, f22

lbl_80212ED0:
	fcmpo    cr0, f1, f23
	ble      lbl_80212EDC
	b        lbl_80212EE0

lbl_80212EDC:
	fmr      f1, f23

lbl_80212EE0:
	fcmpo    cr0, f24, f1
	ble      lbl_80212EFC
	lfs      f0, lbl_80519F78@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80212EFC
	stw      r3, 0x18(r29)
	b        lbl_80212F08

lbl_80212EFC:
	addi     r30, r30, -1

lbl_80212F00:
	cmpwi    r30, 0
	bge      lbl_80212E60

lbl_80212F08:
	lwz      r0, 0x18(r29)
	cmplwi   r0, 0
	beq      lbl_80212F68
	lfs      f0, lbl_80519F78@sda21(r2)
	li       r0, 0
	stw      r0, 0x28(r29)
	fcmpo    cr0, f31, f0
	ble      lbl_80212F34
	lfs      f0, lbl_80519F7C@sda21(r2)
	stfs     f0, 0x24(r29)
	b        lbl_80212F68

lbl_80212F34:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x24(r1)
	lfd      f3, lbl_80519F88@sda21(r2)
	stw      r0, 0x20(r1)
	lfs      f1, lbl_80519F80@sda21(r2)
	lfd      f2, 0x20(r1)
	lfs      f0, lbl_80519F84@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmadds   f0, f0, f1, f0
	stfs     f0, 0x24(r29)

lbl_80212F68:
	psq_l    f31, 216(r1), 0, qr0
	lfd      f31, 0xd0(r1)
	psq_l    f30, 200(r1), 0, qr0
	lfd      f30, 0xc0(r1)
	psq_l    f29, 184(r1), 0, qr0
	lfd      f29, 0xb0(r1)
	psq_l    f28, 168(r1), 0, qr0
	lfd      f28, 0xa0(r1)
	psq_l    f27, 152(r1), 0, qr0
	lfd      f27, 0x90(r1)
	psq_l    f26, 136(r1), 0, qr0
	lfd      f26, 0x80(r1)
	psq_l    f25, 120(r1), 0, qr0
	lfd      f25, 0x70(r1)
	psq_l    f24, 104(r1), 0, qr0
	lfd      f24, 0x60(r1)
	psq_l    f23, 88(r1), 0, qr0
	lfd      f23, 0x50(r1)
	psq_l    f22, 72(r1), 0, qr0
	lfd      f22, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r0, 0xe4(r1)
	lwz      r29, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80212FD4
 * Size:	000344
 */
void PikiAI::ActTeki::test_0(void)
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
	stw      r31, 0x4c(r1)
	mr       r31, r3
	lwz      r0, 0x28(r3)
	cmpwi    r0, 1
	beq      lbl_8021301C
	bge      lbl_802132EC
	cmpwi    r0, 0
	bge      lbl_802130F0
	b        lbl_802132EC

lbl_8021301C:
	lwz      r4, 4(r31)
	addi     r3, r1, 0x2c
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x10(r31)
	addi     r3, r1, 0x20
	lfs      f31, 0x2c(r1)
	lwz      r12, 0(r4)
	lfs      f30, 0x30(r1)
	lwz      r12, 8(r12)
	lfs      f29, 0x34(r1)
	mtctr    r12
	bctrl
	lfs      f0, 0x24(r1)
	lfs      f2, 0x20(r1)
	fsubs    f3, f0, f30
	lfs      f1, 0x28(r1)
	fsubs    f2, f2, f31
	lfs      f0, lbl_80519F70@sda21(r2)
	fsubs    f1, f1, f29
	fmuls    f3, f3, f3
	fmuls    f4, f1, f1
	fmadds   f1, f2, f2, f3
	fadds    f3, f4, f1
	fcmpo    cr0, f3, f0
	ble      lbl_8021309C
	ble      lbl_802130A0
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_802130A0

lbl_8021309C:
	fmr      f3, f0

lbl_802130A0:
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x20(r31)
	lfs      f0, 0x54(r3)
	lfs      f1, lbl_80519F70@sda21(r2)
	fsubs    f0, f2, f0
	stfs     f0, 0x20(r31)
	lwz      r3, 4(r31)
	stfs     f1, 0x1e4(r3)
	stfs     f1, 0x1e8(r3)
	stfs     f1, 0x1ec(r3)
	lfs      f0, 0x20(r31)
	fcmpo    cr0, f0, f1
	cror     2, 0, 2
	beq      lbl_802130E4
	lfs      f0, lbl_80519F78@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_802132EC

lbl_802130E4:
	mr       r3, r31
	bl       makeTarget__Q26PikiAI7ActTekiFv
	b        lbl_802132EC

lbl_802130F0:
	lwz      r4, 4(r31)
	addi     r3, r1, 0x14
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x18(r31)
	lfs      f2, 0x18(r1)
	lfs      f3, 4(r3)
	lfs      f1, 0(r3)
	lfs      f0, 0x14(r1)
	fsubs    f4, f3, f2
	lfs      f3, 8(r3)
	fsubs    f2, f1, f0
	lfs      f0, 0x1c(r1)
	fmuls    f5, f4, f4
	lfs      f1, lbl_80519F70@sda21(r2)
	fsubs    f3, f3, f0
	stfs     f4, 0x3c(r1)
	fmuls    f0, f2, f2
	stfs     f2, 0x38(r1)
	fmuls    f4, f3, f3
	stfs     f3, 0x40(r1)
	fadds    f0, f0, f5
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80213178
	fmadds   f0, f2, f2, f5
	fadds    f31, f4, f0
	fcmpo    cr0, f31, f1
	ble      lbl_8021317C
	frsqrte  f0, f31
	fmuls    f31, f0, f31
	b        lbl_8021317C

lbl_80213178:
	fmr      f31, f1

lbl_8021317C:
	lfs      f0, lbl_80519F70@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_802131B8
	lfs      f0, lbl_80519F7C@sda21(r2)
	lfs      f2, 0x38(r1)
	fdivs    f3, f0, f31
	lfs      f1, 0x3c(r1)
	lfs      f0, 0x40(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x38(r1)
	stfs     f1, 0x3c(r1)
	stfs     f0, 0x40(r1)
	b        lbl_802131BC

lbl_802131B8:
	fmr      f31, f0

lbl_802131BC:
	lfs      f0, lbl_80519F78@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_802131D4
	mr       r3, r31
	bl       makeTarget__Q26PikiAI7ActTekiFv
	b        lbl_80213208

lbl_802131D4:
	lfs      f0, lbl_80519F90@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_80213208
	lwz      r4, 4(r31)
	li       r0, 1
	lfs      f0, lbl_80519F70@sda21(r2)
	mr       r3, r31
	stfs     f0, 0x1e4(r4)
	stfs     f0, 0x1e8(r4)
	stfs     f0, 0x1ec(r4)
	stw      r0, 0x28(r31)
	bl       setTimer__Q26PikiAI7ActTekiFv
	b        lbl_802132EC

lbl_80213208:
	lfs      f0, lbl_80519F90@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_802132DC
	lwz      r4, 0x10(r31)
	addi     r3, r1, 8
	lwz      r12, 0(r4)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	lfs      f7, 0xc(r1)
	lfs      f3, 0x10(r1)
	fmuls    f1, f7, f7
	lfs      f8, 8(r1)
	fmuls    f2, f3, f3
	lfs      f0, lbl_80519F70@sda21(r2)
	fmadds   f1, f8, f8, f1
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80213264
	ble      lbl_80213268
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80213268

lbl_80213264:
	fmr      f1, f0

lbl_80213268:
	lfs      f0, lbl_80519F70@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80213288
	lfs      f0, lbl_80519F7C@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f8, f8, f0
	fmuls    f7, f7, f0
	fmuls    f3, f3, f0

lbl_80213288:
	lfs      f6, lbl_80519F84@sda21(r2)
	addi     r4, r1, 0x38
	lfs      f2, 0x40(r1)
	lfs      f1, 0x3c(r1)
	fmuls    f4, f3, f6
	lfs      f0, 0x38(r1)
	fmuls    f5, f2, f6
	fmuls    f3, f1, f6
	fmuls    f2, f7, f6
	fadds    f4, f5, f4
	fmuls    f1, f0, f6
	fmuls    f0, f8, f6
	fadds    f2, f3, f2
	stfs     f4, 0x40(r1)
	fadds    f0, f1, f0
	stfs     f2, 0x3c(r1)
	stfs     f0, 0x38(r1)
	lwz      r3, 4(r31)
	lfs      f1, 0x24(r31)
	bl       "setSpeed__Q24Game4PikiFfR10Vector3<f>"
	b        lbl_802132EC

lbl_802132DC:
	lwz      r3, 4(r31)
	addi     r4, r1, 0x38
	lfs      f1, 0x24(r31)
	bl       "setSpeed__Q24Game4PikiFfR10Vector3<f>"

lbl_802132EC:
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	psq_l    f29, 88(r1), 0, qr0
	lfd      f29, 0x50(r1)
	lwz      r0, 0x84(r1)
	lwz      r31, 0x4c(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	80213318
 * Size:	000058
 */
void PikiAI::ActTeki::doDirectDraw(Graphics&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r7, r3
	stw      r0, 0x14(r1)
	lwz      r0, 0x18(r3)
	cmplwi   r0, 0
	beq      lbl_80213360
	li       r6, 0xff
	li       r5, 0x64
	stb      r6, 0x84(r4)
	li       r0, 0xa
	lfs      f1, lbl_80519F94@sda21(r2)
	mr       r3, r4
	stb      r5, 0x85(r4)
	stb      r0, 0x86(r4)
	stb      r6, 0x87(r4)
	lwz      r4, 0x18(r7)
	bl       "drawSphere__8GraphicsFR10Vector3<f>f"

lbl_80213360:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80213370
 * Size:	000130
 */
void PikiAI::ActTeki::setTimer(void)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stfd     f30, 0x40(r1)
	psq_st   f30, 72(r1), 0, qr0
	stfd     f29, 0x30(r1)
	psq_st   f29, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	mr       r31, r3
	addi     r3, r1, 0x14
	lwz      r4, 4(r31)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x10(r31)
	addi     r3, r1, 8
	lfs      f31, 0x14(r1)
	lwz      r12, 0(r4)
	lfs      f30, 0x18(r1)
	lwz      r12, 8(r12)
	lfs      f29, 0x1c(r1)
	mtctr    r12
	bctrl
	lfs      f0, 0xc(r1)
	lfs      f2, 8(r1)
	fsubs    f3, f0, f30
	lfs      f1, 0x10(r1)
	fsubs    f2, f2, f31
	lfs      f0, lbl_80519F70@sda21(r2)
	fsubs    f1, f1, f29
	fmuls    f3, f3, f3
	fmuls    f4, f1, f1
	fmadds   f1, f2, f2, f3
	fadds    f1, f4, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8021341C
	ble      lbl_80213420
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80213420

lbl_8021341C:
	fmr      f1, f0

lbl_80213420:
	lfs      f0, lbl_80519F78@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80213434
	lfs      f29, lbl_80519F98@sda21(r2)
	b        lbl_80213438

lbl_80213434:
	lfs      f29, lbl_80519F9C@sda21(r2)

lbl_80213438:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x24(r1)
	lfd      f3, lbl_80519F88@sda21(r2)
	stw      r0, 0x20(r1)
	lfs      f2, lbl_80519F80@sda21(r2)
	lfd      f0, 0x20(r1)
	lfs      f1, lbl_80519F84@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_80519F7C@sda21(r2)
	fdivs    f2, f3, f2
	fmadds   f0, f1, f2, f0
	fmuls    f0, f29, f0
	stfs     f0, 0x20(r31)
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	psq_l    f30, 72(r1), 0, qr0
	lfd      f30, 0x40(r1)
	psq_l    f29, 56(r1), 0, qr0
	lfd      f29, 0x30(r1)
	lwz      r0, 0x64(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0002E4
 */
void PikiAI::ActTeki::test_1(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000404
 */
void PikiAI::ActTeki::test_2(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802134A0
 * Size:	000004
 */
void PikiAI::ActTeki::cleanup(void) { }

/*
 * --INFO--
 * Address:	802134A4
 * Size:	0000E8
 */
void PikiAI::ActTeki::collisionCallback(Game::Piki*, Game::CollEvent&)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stfd     f30, 0x40(r1)
	psq_st   f30, 72(r1), 0, qr0
	stfd     f29, 0x30(r1)
	psq_st   f29, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	lwz      r4, 0(r5)
	mr       r31, r3
	addi     r3, r1, 0x14
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 4(r31)
	addi     r3, r1, 8
	lfs      f31, 0x14(r1)
	lwz      r12, 0(r4)
	lfs      f30, 0x18(r1)
	lwz      r12, 8(r12)
	lfs      f29, 0x1c(r1)
	mtctr    r12
	bctrl
	lfs      f0, 0xc(r1)
	lfs      f2, 8(r1)
	fsubs    f0, f0, f30
	lfs      f1, 0x30(r31)
	lfs      f4, 0x10(r1)
	fsubs    f2, f2, f31
	lfs      f3, 0x2c(r31)
	fmuls    f1, f1, f0
	fsubs    f4, f4, f29
	lfs      f5, 0x34(r31)
	lfs      f0, lbl_80519F70@sda21(r2)
	fmadds   f1, f3, f2, f1
	fmadds   f1, f5, f4, f1
	fcmpo    cr0, f1, f0
	stfs     f1, 0x44(r31)
	ble      lbl_80213558
	lfs      f0, lbl_80519F9C@sda21(r2)
	stfs     f0, 0x44(r31)
	b        lbl_80213560

lbl_80213558:
	lfs      f0, lbl_80519FA0@sda21(r2)
	stfs     f0, 0x44(r31)

lbl_80213560:
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	psq_l    f30, 72(r1), 0, qr0
	lfd      f30, 0x40(r1)
	psq_l    f29, 56(r1), 0, qr0
	lfd      f29, 0x30(r1)
	lwz      r0, 0x64(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	8021358C
 * Size:	000004
 */
void PikiAI::ActTeki::onKeyEvent(SysShape::KeyEvent const&) { }

/*
 * --INFO--
 * Address:	80213590
 * Size:	000008
 */
u32 PikiAI::ActTeki::getNextAIType(void) { return 0x1; }

/*
 * --INFO--
 * Address:	80213598
 * Size:	000014
 */
void @72 @4 @PikiAI::ActTeki::onKeyEvent(SysShape::KeyEvent const&)
{
	/*
	li       r11, 4
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -72
	b        onKeyEvent__Q26PikiAI7ActTekiFRCQ28SysShape8KeyEvent
	*/
}
