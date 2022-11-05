#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80480D40
    lbl_80480D40:
        .4byte 0x61637442
        .4byte 0x7265616B
        .4byte 0x57616C6C
        .4byte 0x00000000
        .4byte 0x41637443
        .4byte 0x726F7041
        .4byte 0x72670000
    .global lbl_80480D5C
    lbl_80480D5C:
        .4byte 0x61694372
        .4byte 0x6F702E63
        .4byte 0x70700000
    .global lbl_80480D68
    lbl_80480D68:
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
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q26PikiAI7ActCrop
    __vt__Q26PikiAI7ActCrop:
        .4byte 0
        .4byte 0
        .4byte init__Q26PikiAI7ActCropFPQ26PikiAI9ActionArg
        .4byte exec__Q26PikiAI7ActCropFv
        .4byte cleanup__Q26PikiAI7ActCropFv
        .4byte emotion_success__Q26PikiAI6ActionFv
        .4byte emotion_fail__Q26PikiAI6ActionFv
        .4byte applicable__Q26PikiAI6ActionFv
        .4byte getNextAIType__Q26PikiAI7ActCropFv
        .4byte bounceCallback__Q26PikiAI6ActionFPQ24Game4PikiPQ23Sys8Triangle
        .4byte
   collisionCallback__Q26PikiAI7ActCropFPQ24Game4PikiRQ24Game9CollEvent .4byte
   platCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9PlatEvent .4byte
   doDirectDraw__Q26PikiAI6ActionFR8Graphics .4byte
   "wallCallback__Q26PikiAI6ActionFR10Vector3<f>" .4byte
   getInfo__Q26PikiAI6ActionFPc .4byte
   onKeyEvent__Q26PikiAI7ActCropFRCQ28SysShape8KeyEvent .4byte 0 .4byte 0 .4byte
   "@64@4@onKeyEvent__Q26PikiAI7ActCropFRCQ28SysShape8KeyEvent" .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80519940
    lbl_80519940:
        .4byte 0x43726F70
        .4byte 0x00000000
    .global lbl_80519948
    lbl_80519948:
        .4byte 0x00000000
    .global lbl_8051994C
    lbl_8051994C:
        .float 1.0
    .global lbl_80519950
    lbl_80519950:
        .4byte 0x41C80000
    .global lbl_80519954
    lbl_80519954:
        .4byte 0x40000000
    .global lbl_80519958
    lbl_80519958:
        .4byte 0x41A00000
    .global lbl_8051995C
    lbl_8051995C:
        .4byte 0x47000000
    .global lbl_80519960
    lbl_80519960:
        .4byte 0x40C90FDB
        .4byte 0x00000000
    .global lbl_80519968
    lbl_80519968:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80519970
    lbl_80519970:
        .4byte 0x42200000
    .global lbl_80519974
    lbl_80519974:
        .4byte 0x43A2F983
    .global lbl_80519978
    lbl_80519978:
        .4byte 0xC3A2F983
    .global lbl_8051997C
    lbl_8051997C:
        .4byte 0x43480000
    .global lbl_80519980
    lbl_80519980:
        .4byte 0x3F666666
    .global lbl_80519984
    lbl_80519984:
        .4byte 0xBF666666
    .global lbl_80519988
    lbl_80519988:
        .4byte 0x41200000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	801E3E50
 * Size:	0000D4
 */
PikiAI::ActCrop::ActCrop(Game::Piki* p)
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
	beq      lbl_801E3E88
	addi     r0, r31, 0x40
	lis      r3, __vt__Q28SysShape14MotionListener@ha
	stw      r0, 0xc(r31)
	addi     r0, r3, __vt__Q28SysShape14MotionListener@l
	stw      r0, 0x40(r31)

lbl_801E3E88:
	mr       r3, r31
	mr       r4, r30
	bl       __ct__Q26PikiAI6ActionFPQ24Game4Piki
	lis      r3, __vt__Q26PikiAI7ActCrop@ha
	addi     r0, r31, 0x40
	addi     r4, r3, __vt__Q26PikiAI7ActCrop@l
	li       r3, 0x2c
	stw      r4, 0(r31)
	addi     r5, r4, 0x40
	lwz      r4, 0xc(r31)
	stw      r5, 0(r4)
	lwz      r4, 0xc(r31)
	subf     r0, r4, r0
	stw      r0, 4(r4)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801E3EDC
	mr       r5, r30
	li       r4, 1
	bl       __ct__Q26PikiAI14ActStickAttackFPQ24Game4Piki
	mr       r0, r3

lbl_801E3EDC:
	stw      r0, 0x2c(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801E3EFC
	mr       r4, r30
	bl       __ct__Q26PikiAI10ActGotoPosFPQ24Game4Piki
	mr       r0, r3

lbl_801E3EFC:
	stw      r0, 0x30(r31)
	addi     r0, r2, lbl_80519940@sda21
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
 * Address:	801E3F24
 * Size:	000108
 */
void PikiAI::ActCrop::init(PikiAI::ActionArg*)
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
	lis      r4, lbl_80480D40@ha
	stw      r28, 0x10(r1)
	mr       r28, r3
	addi     r31, r4, lbl_80480D40@l
	beq      lbl_801E3F88
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	addi     r3, r31, 0x10
	bl       strcmp
	cntlzw   r0, r3
	rlwinm.  r0, r0, 0x1b, 0x18, 0x1f
	beq      lbl_801E3F88
	li       r30, 1

lbl_801E3F88:
	clrlwi.  r0, r30, 0x18
	bne      lbl_801E3FA4
	addi     r3, r31, 0x1c
	addi     r5, r31, 0x28
	li       r4, 0x45
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E3FA4:
	lis      r3, workPikis__Q24Game8GameStat@ha
	lwz      r4, 4(r28)
	addi     r3, r3, workPikis__Q24Game8GameStat@l
	bl       inc__Q34Game8GameStat15PikiNaviCounterFPQ24Game4Piki
	lwz      r3, 4(r29)
	li       r0, 0
	stw      r3, 0x10(r28)
	stw      r0, 0x14(r28)
	lwz      r3, 4(r28)
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_801E4004
	lwz      r6, 4(r28)
	lis      r3, 0x746F7073@ha
	addi     r4, r3, 0x746F7073@l
	li       r5, 0x2a
	lwz      r3, 0xf8(r6)
	addi     r3, r3, 0x30
	bl       match__4ID32FUlc
	clrlwi.  r0, r3, 0x18
	beq      lbl_801E4004
	mr       r3, r28
	bl       initAttack__Q26PikiAI7ActCropFv
	b        lbl_801E400C

lbl_801E4004:
	mr       r3, r28
	bl       initGoto__Q26PikiAI7ActCropFv

lbl_801E400C:
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
 * Address:	801E402C
 * Size:	0002C8
 */
void PikiAI::ActCrop::execClimb()
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	mr       r31, r3
	lfs      f2, lbl_80519950@sda21(r2)
	lfs      f0, 0x18(r3)
	lfs      f1, 0x1c(r3)
	fmuls    f0, f0, f2
	lfs      f3, 0x20(r3)
	lwz      r3, 4(r3)
	fmuls    f1, f1, f2
	fmuls    f2, f3, f2
	stfs     f0, 0x200(r3)
	stfs     f1, 0x204(r3)
	stfs     f2, 0x208(r3)
	lwz      r3, 4(r31)
	lwz      r4, sys@sda21(r13)
	lwz      r12, 0(r3)
	lfs      f1, 0x54(r4)
	lwz      r12, 0x1d0(r12)
	mtctr    r12
	bctrl
	lfs      f1, lbl_80519954@sda21(r2)
	lfs      f0, 0x24(r31)
	lwz      r3, 4(r31)
	fmuls    f1, f1, f0
	lfs      f0, lbl_8051994C@sda21(r2)
	lfs      f2, 0x108(r3)
	fsubs    f0, f0, f1
	fcmpo    cr0, f2, f0
	ble      lbl_801E41C0
	lwz      r3, 0x14(r31)
	lwz      r3, 0x10(r3)
	cmplwi   r3, 0
	beq      lbl_801E41B4
	lbz      r0, 0x58(r3)
	cmplwi   r0, 2
	bne      lbl_801E41B4
	stw      r3, 0x14(r31)
	li       r4, 0x14
	li       r5, 0x14
	li       r6, 0
	lwz      r3, 4(r31)
	li       r7, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	lwz      r3, 4(r31)
	bl       endStick__Q24Game8CreatureFv
	lwz      r3, 4(r31)
	lwz      r4, 0x10(r31)
	lwz      r5, 0x14(r31)
	bl       startStick__Q24Game8CreatureFPQ24Game8CreatureP8CollPart
	lwz      r3, 0x14(r31)
	addi     r4, r1, 0x28
	bl       getTube__8CollPartFRQ23Sys4Tube
	addi     r3, r1, 0x28
	addi     r4, r31, 0x18
	bl       "getAxisVector__Q23Sys4TubeFR10Vector3<f>"
	lfs      f1, 0x2c(r1)
	lfs      f0, 0x38(r1)
	lfs      f3, 0x28(r1)
	fsubs    f4, f1, f0
	lfs      f2, 0x34(r1)
	lfs      f1, 0x30(r1)
	lfs      f0, 0x3c(r1)
	fsubs    f3, f3, f2
	fmuls    f4, f4, f4
	fsubs    f2, f1, f0
	lfs      f0, lbl_80519948@sda21(r2)
	fmadds   f1, f3, f3, f4
	fmuls    f2, f2, f2
	fadds    f31, f2, f1
	fcmpo    cr0, f31, f0
	ble      lbl_801E4178
	ble      lbl_801E417C
	frsqrte  f0, f31
	fmuls    f31, f0, f31
	b        lbl_801E417C

lbl_801E4178:
	fmr      f31, f0

lbl_801E417C:
	lfs      f0, lbl_80519948@sda21(r2)
	fcmpo    cr0, f31, f0
	bgt      lbl_801E41A4
	lis      r3, lbl_80480D5C@ha
	lis      r5, lbl_80480D68@ha
	addi     r3, r3, lbl_80480D5C@l
	li       r4, 0x66
	addi     r5, r5, lbl_80480D68@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E41A4:
	lfs      f0, lbl_8051994C@sda21(r2)
	fdivs    f0, f0, f31
	stfs     f0, 0x24(r31)
	b        lbl_801E42D4

lbl_801E41B4:
	mr       r3, r31
	bl       initAttack__Q26PikiAI7ActCropFv
	b        lbl_801E42D4

lbl_801E41C0:
	fneg     f0, f1
	fcmpo    cr0, f2, f0
	bge      lbl_801E42D4
	lwz      r3, 0x14(r31)
	lwz      r3, 0xc(r3)
	cmplwi   r3, 0
	beq      lbl_801E42CC
	lbz      r0, 0x58(r3)
	cmplwi   r0, 2
	bne      lbl_801E42CC
	stw      r3, 0x14(r31)
	li       r4, 0x14
	li       r5, 0x14
	li       r6, 0
	lwz      r3, 4(r31)
	li       r7, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	lwz      r3, 4(r31)
	bl       endStick__Q24Game8CreatureFv
	lwz      r3, 4(r31)
	lwz      r4, 0x10(r31)
	lwz      r5, 0x14(r31)
	bl       startStick__Q24Game8CreatureFPQ24Game8CreatureP8CollPart
	lwz      r3, 0x14(r31)
	addi     r4, r1, 8
	bl       getTube__8CollPartFRQ23Sys4Tube
	addi     r3, r1, 8
	addi     r4, r31, 0x18
	bl       "getAxisVector__Q23Sys4TubeFR10Vector3<f>"
	lfs      f1, 0xc(r1)
	lfs      f0, 0x18(r1)
	lfs      f3, 8(r1)
	fsubs    f4, f1, f0
	lfs      f2, 0x14(r1)
	lfs      f1, 0x10(r1)
	lfs      f0, 0x1c(r1)
	fsubs    f3, f3, f2
	fmuls    f4, f4, f4
	fsubs    f2, f1, f0
	lfs      f0, lbl_80519948@sda21(r2)
	fmadds   f1, f3, f3, f4
	fmuls    f2, f2, f2
	fadds    f31, f2, f1
	fcmpo    cr0, f31, f0
	ble      lbl_801E4290
	ble      lbl_801E4294
	frsqrte  f0, f31
	fmuls    f31, f0, f31
	b        lbl_801E4294

lbl_801E4290:
	fmr      f31, f0

lbl_801E4294:
	lfs      f0, lbl_80519948@sda21(r2)
	fcmpo    cr0, f31, f0
	bgt      lbl_801E42BC
	lis      r3, lbl_80480D5C@ha
	lis      r5, lbl_80480D68@ha
	addi     r3, r3, lbl_80480D5C@l
	li       r4, 0x66
	addi     r5, r5, lbl_80480D68@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E42BC:
	lfs      f0, lbl_8051994C@sda21(r2)
	fdivs    f0, f0, f31
	stfs     f0, 0x24(r31)
	b        lbl_801E42D4

lbl_801E42CC:
	li       r3, 2
	b        lbl_801E42D8

lbl_801E42D4:
	li       r3, 1

lbl_801E42D8:
	psq_l    f31, 88(r1), 0, qr0
	lwz      r0, 0x64(r1)
	lfd      f31, 0x50(r1)
	lwz      r31, 0x4c(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E42F4
 * Size:	000098
 */
void PikiAI::ActCrop::initGoto()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	addi     r3, r1, 8
	lwz      r4, 0x10(r31)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	lfs      f3, 8(r1)
	addi     r4, r3, __vt__Q26PikiAI9ActionArg@l
	lfs      f2, 0xc(r1)
	lfs      f1, 0x10(r1)
	lis      r3, __vt__Q26PikiAI16GotoPosActionArg@ha
	lfs      f0, lbl_80519958@sda21(r2)
	addi     r0, r3, __vt__Q26PikiAI16GotoPosActionArg@l
	stw      r4, 0x14(r1)
	addi     r4, r1, 0x14
	stw      r0, 0x14(r1)
	stfs     f3, 0x18(r1)
	stfs     f2, 0x1c(r1)
	stfs     f1, 0x20(r1)
	stfs     f0, 0x24(r1)
	lwz      r3, 0x30(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	sth      r0, 0x28(r31)
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E438C
 * Size:	0000FC
 */
void PikiAI::ActCrop::initAttack()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	mr       r30, r3
	lis      r3, 0x746F7073@ha
	lwz      r5, 0x10(r30)
	addi     r4, r3, 0x746F7073@l
	lwz      r3, 0x114(r5)
	bl       getCollPart__8CollTreeFUl
	or.      r31, r3, r3
	beq      lbl_801E440C
	lwz      r3, 4(r30)
	bl       endStick__Q24Game8CreatureFv
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x24(r1)
	mr       r5, r31
	lfd      f3, lbl_80519968@sda21(r2)
	stw      r0, 0x20(r1)
	lfs      f1, lbl_8051995C@sda21(r2)
	lfd      f2, 0x20(r1)
	lfs      f0, lbl_80519960@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	stfs     f0, 0x38(r30)
	lwz      r3, 4(r30)
	lwz      r4, 0x10(r30)
	bl       startStick__Q24Game8CreatureFPQ24Game8CreatureP8CollPart

lbl_801E440C:
	lwz      r3, 4(r30)
	bl       getAttackDamage__Q24Game4PikiFv
	lwz      r5, 0x10(r30)
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	lis      r3, __vt__Q26PikiAI20StickAttackActionArg@ha
	stw      r0, 8(r1)
	addi     r4, r3, __vt__Q26PikiAI20StickAttackActionArg@l
	li       r3, -1
	li       r0, 0
	stw      r4, 8(r1)
	addi     r4, r1, 8
	stfs     f1, 0xc(r1)
	stw      r5, 0x10(r1)
	stw      r3, 0x14(r1)
	stb      r0, 0x18(r1)
	lwz      r3, 0x2c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r3, 2
	li       r0, 1
	sth      r3, 0x28(r30)
	stb      r0, 0x3c(r30)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E4488
 * Size:	0006AC
 */
void PikiAI::ActCrop::exec()
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
	stw      r31, 0x8c(r1)
	stw      r30, 0x88(r1)
	mr       r31, r3
	lhz      r0, 0x28(r3)
	cmpwi    r0, 1
	beq      lbl_801E48F8
	bge      lbl_801E44E4
	cmpwi    r0, 0
	bge      lbl_801E49DC
	b        lbl_801E4AF0

lbl_801E44E4:
	cmpwi    r0, 3
	bge      lbl_801E4AF0
	lwz      r3, 0x10(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x224(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801E45E8
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x64(r1)
	lfd      f3, lbl_80519968@sda21(r2)
	stw      r0, 0x60(r1)
	lfs      f2, lbl_8051995C@sda21(r2)
	lfd      f0, 0x60(r1)
	lfs      f1, lbl_80519960@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_80519948@sda21(r2)
	fdivs    f2, f3, f2
	fmuls    f4, f1, f2
	fmr      f1, f4
	fcmpo    cr0, f4, f0
	bge      lbl_801E454C
	fneg     f1, f4

lbl_801E454C:
	lfs      f2, lbl_80519974@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_80519948@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	lfs      f3, lbl_80519970@sda21(r2)
	fcmpo    cr0, f4, f0
	fctiwz   f0, f1
	stfd     f0, 0x68(r1)
	lwz      r0, 0x6c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f3, f3, f0
	bge      lbl_801E45AC
	lfs      f0, lbl_80519978@sda21(r2)
	fmuls    f0, f4, f0
	fctiwz   f0, f0
	stfd     f0, 0x70(r1)
	lwz      r0, 0x74(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f1, f0
	b        lbl_801E45C4

lbl_801E45AC:
	fmuls    f0, f4, f2
	fctiwz   f0, f0
	stfd     f0, 0x78(r1)
	lwz      r0, 0x7c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r4, r0

lbl_801E45C4:
	lfs      f0, lbl_80519970@sda21(r2)
	li       r3, 2
	lwz      r4, 4(r31)
	fmuls    f1, f0, f1
	lfs      f0, lbl_8051997C@sda21(r2)
	stfs     f1, 0x200(r4)
	stfs     f0, 0x204(r4)
	stfs     f3, 0x208(r4)
	b        lbl_801E4AF4

lbl_801E45E8:
	lfs      f3, 0x38(r31)
	lfs      f0, lbl_80519948@sda21(r2)
	fmr      f1, f3
	fcmpo    cr0, f3, f0
	bge      lbl_801E4600
	fneg     f1, f3

lbl_801E4600:
	lfs      f2, lbl_80519974@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_80519948@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0x78(r1)
	lwz      r0, 0x7c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f31, 4(r3)
	bge      lbl_801E4658
	lfs      f0, lbl_80519978@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x70(r1)
	lwz      r0, 0x74(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f30, f0
	b        lbl_801E4670

lbl_801E4658:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0x68(r1)
	lwz      r0, 0x6c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f30, r4, r0

lbl_801E4670:
	lwz      r5, 0x10(r31)
	lis      r3, 0x746F7073@ha
	addi     r4, r3, 0x746F7073@l
	lwz      r3, 0x114(r5)
	bl       getCollPart__8CollTreeFUl
	lwz      r4, 4(r31)
	mr       r30, r3
	addi     r3, r1, 8
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0xc(r1)
	lfs      f0, 0x50(r30)
	lfs      f2, 0x10(r1)
	fsubs    f4, f1, f0
	lfs      f0, 0x54(r30)
	lfs      f1, 8(r1)
	fsubs    f5, f2, f0
	lfs      f0, 0x4c(r30)
	fmuls    f2, f4, f4
	fsubs    f3, f1, f0
	lfs      f0, lbl_80519948@sda21(r2)
	fmuls    f6, f5, f5
	fmadds   f1, f3, f3, f2
	fadds    f1, f6, f1
	fcmpo    cr0, f1, f0
	ble      lbl_801E46F0
	ble      lbl_801E46F4
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_801E46F4

lbl_801E46F0:
	fmr      f1, f0

lbl_801E46F4:
	lfs      f0, lbl_80519948@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_801E4714
	lfs      f0, lbl_8051994C@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f3, f3, f0
	fmuls    f4, f4, f0
	fmuls    f5, f5, f0

lbl_801E4714:
	lfs      f0, lbl_8051994C@sda21(r2)
	lfs      f2, lbl_80519948@sda21(r2)
	fmuls    f0, f0, f4
	lwz      r3, 4(r31)
	fmuls    f1, f2, f4
	fmadds   f0, f2, f3, f0
	fmadds   f1, f30, f3, f1
	fmadds   f28, f2, f5, f0
	fmadds   f29, f31, f5, f1
	fneg     f27, f28
	bl       endStick__Q24Game8CreatureFv
	lbz      r0, 0x3c(r31)
	cmplwi   r0, 0
	beq      lbl_801E4764
	lfs      f0, lbl_80519980@sda21(r2)
	fcmpo    cr0, f28, f0
	ble      lbl_801E477C
	li       r0, 0
	stb      r0, 0x3c(r31)
	b        lbl_801E477C

lbl_801E4764:
	lfs      f0, lbl_80519984@sda21(r2)
	fcmpo    cr0, f28, f0
	bge      lbl_801E4778
	li       r0, 1
	stb      r0, 0x3c(r31)

lbl_801E4778:
	fneg     f29, f29

lbl_801E477C:
	lfs      f2, lbl_80519948@sda21(r2)
	fmuls    f4, f30, f27
	lfs      f1, lbl_8051994C@sda21(r2)
	fmuls    f0, f31, f27
	fmuls    f5, f2, f29
	lwz      r3, 4(r31)
	fmuls    f3, f2, f27
	fmuls    f1, f1, f29
	lfs      f2, lbl_80519988@sda21(r2)
	fadds    f4, f4, f5
	fadds    f0, f0, f5
	fadds    f1, f3, f1
	stfs     f4, 0x200(r3)
	stfs     f1, 0x204(r3)
	stfs     f0, 0x208(r3)
	lwz      r3, 4(r31)
	lfs      f0, 0x200(r3)
	lfs      f1, 0x204(r3)
	fmuls    f0, f0, f2
	lfs      f3, 0x208(r3)
	fmuls    f1, f1, f2
	fmuls    f2, f3, f2
	stfs     f0, 0x200(r3)
	stfs     f1, 0x204(r3)
	stfs     f2, 0x208(r3)
	lwz      r3, 4(r31)
	lwz      r4, sys@sda21(r13)
	lwz      r12, 0(r3)
	lfs      f1, 0x54(r4)
	lwz      r12, 0x1d0(r12)
	mtctr    r12
	bctrl
	lwz      r3, 4(r31)
	mr       r5, r30
	lwz      r4, 0x10(r31)
	bl       startStick__Q24Game8CreatureFPQ24Game8CreatureP8CollPart
	lwz      r3, 0x2c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0
	bne      lbl_801E4AF0
	lwz      r5, 0x10(r31)
	lis      r3, 0x746F7073@ha
	addi     r4, r3, 0x746F7073@l
	lwz      r3, 0x114(r5)
	bl       getCollPart__8CollTreeFUl
	or.      r30, r3, r3
	beq      lbl_801E4890
	lwz      r3, 4(r31)
	bl       endStick__Q24Game8CreatureFv
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x7c(r1)
	mr       r5, r30
	lfd      f3, lbl_80519968@sda21(r2)
	stw      r0, 0x78(r1)
	lfs      f1, lbl_8051995C@sda21(r2)
	lfd      f2, 0x78(r1)
	lfs      f0, lbl_80519960@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	stfs     f0, 0x38(r31)
	lwz      r3, 4(r31)
	lwz      r4, 0x10(r31)
	bl       startStick__Q24Game8CreatureFPQ24Game8CreatureP8CollPart

lbl_801E4890:
	lwz      r3, 4(r31)
	bl       getAttackDamage__Q24Game4PikiFv
	lwz      r5, 0x10(r31)
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	lis      r3, __vt__Q26PikiAI20StickAttackActionArg@ha
	stw      r0, 0x48(r1)
	addi     r4, r3, __vt__Q26PikiAI20StickAttackActionArg@l
	li       r3, -1
	li       r0, 0
	stw      r4, 0x48(r1)
	addi     r4, r1, 0x48
	stfs     f1, 0x4c(r1)
	stw      r5, 0x50(r1)
	stw      r3, 0x54(r1)
	stb      r0, 0x58(r1)
	lwz      r3, 0x2c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r3, 2
	li       r0, 1
	sth      r3, 0x28(r31)
	stb      r0, 0x3c(r31)
	b        lbl_801E4AF0

lbl_801E48F8:
	bl       execClimb__Q26PikiAI7ActCropFv
	cmpwi    r3, 0
	bne      lbl_801E4AF4
	lwz      r5, 0x10(r31)
	lis      r3, 0x746F7073@ha
	addi     r4, r3, 0x746F7073@l
	lwz      r3, 0x114(r5)
	bl       getCollPart__8CollTreeFUl
	or.      r30, r3, r3
	beq      lbl_801E496C
	lwz      r3, 4(r31)
	bl       endStick__Q24Game8CreatureFv
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x7c(r1)
	mr       r5, r30
	lfd      f3, lbl_80519968@sda21(r2)
	stw      r0, 0x78(r1)
	lfs      f1, lbl_8051995C@sda21(r2)
	lfd      f2, 0x78(r1)
	lfs      f0, lbl_80519960@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	stfs     f0, 0x38(r31)
	lwz      r3, 4(r31)
	lwz      r4, 0x10(r31)
	bl       startStick__Q24Game8CreatureFPQ24Game8CreatureP8CollPart

lbl_801E496C:
	lwz      r3, 4(r31)
	bl       getAttackDamage__Q24Game4PikiFv
	lwz      r5, 0x10(r31)
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	lis      r3, __vt__Q26PikiAI20StickAttackActionArg@ha
	stw      r0, 0x34(r1)
	addi     r4, r3, __vt__Q26PikiAI20StickAttackActionArg@l
	li       r3, -1
	li       r0, 0
	stw      r4, 0x34(r1)
	addi     r4, r1, 0x34
	stfs     f1, 0x38(r1)
	stw      r5, 0x3c(r1)
	stw      r3, 0x40(r1)
	stb      r0, 0x44(r1)
	lwz      r3, 0x2c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r3, 2
	li       r0, 1
	sth      r3, 0x28(r31)
	li       r3, 1
	stb      r0, 0x3c(r31)
	b        lbl_801E4AF4
	b        lbl_801E4AF4

lbl_801E49DC:
	lwz      r3, 0x30(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0
	bne      lbl_801E4AF0
	li       r0, 1
	li       r4, 0x14
	sth      r0, 0x28(r31)
	li       r5, 0x14
	li       r6, 0
	li       r7, 0
	lwz      r3, 0x10(r31)
	lwz      r3, 0x114(r3)
	lwz      r3, 0(r3)
	lwz      r0, 0x10(r3)
	stw      r0, 0x14(r31)
	lwz      r3, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	lwz      r3, 4(r31)
	bl       endStick__Q24Game8CreatureFv
	lwz      r3, 4(r31)
	lwz      r4, 0x10(r31)
	lwz      r5, 0x14(r31)
	bl       startStick__Q24Game8CreatureFPQ24Game8CreatureP8CollPart
	lwz      r3, 0x14(r31)
	addi     r4, r1, 0x14
	bl       getTube__8CollPartFRQ23Sys4Tube
	addi     r3, r1, 0x14
	addi     r4, r31, 0x18
	bl       "getAxisVector__Q23Sys4TubeFR10Vector3<f>"
	lfs      f1, 0x18(r1)
	lfs      f0, 0x24(r1)
	lfs      f3, 0x14(r1)
	fsubs    f4, f1, f0
	lfs      f2, 0x20(r1)
	lfs      f1, 0x1c(r1)
	lfs      f0, 0x28(r1)
	fsubs    f3, f3, f2
	fmuls    f4, f4, f4
	fsubs    f2, f1, f0
	lfs      f0, lbl_80519948@sda21(r2)
	fmadds   f1, f3, f3, f4
	fmuls    f2, f2, f2
	fadds    f30, f2, f1
	fcmpo    cr0, f30, f0
	ble      lbl_801E4AB8
	ble      lbl_801E4ABC
	frsqrte  f0, f30
	fmuls    f30, f0, f30
	b        lbl_801E4ABC

lbl_801E4AB8:
	fmr      f30, f0

lbl_801E4ABC:
	lfs      f0, lbl_80519948@sda21(r2)
	fcmpo    cr0, f30, f0
	bgt      lbl_801E4AE4
	lis      r3, lbl_80480D5C@ha
	lis      r5, lbl_80480D68@ha
	addi     r3, r3, lbl_80480D5C@l
	li       r4, 0x66
	addi     r5, r5, lbl_80480D68@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E4AE4:
	lfs      f0, lbl_8051994C@sda21(r2)
	fdivs    f0, f0, f30
	stfs     f0, 0x24(r31)

lbl_801E4AF0:
	li       r3, 1

lbl_801E4AF4:
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
	lwz      r31, 0x8c(r1)
	lwz      r0, 0xe4(r1)
	lwz      r30, 0x88(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E4B34
 * Size:	000040
 */
void PikiAI::ActCrop::cleanup()
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
	lwz      r3, 4(r31)
	bl       endStick__Q24Game8CreatureFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E4B74
 * Size:	000004
 */
void PikiAI::ActCrop::collisionCallback(Game::Piki*, Game::CollEvent&) { }

/*
 * --INFO--
 * Address:	801E4B78
 * Size:	000004
 */
void PikiAI::ActCrop::onKeyEvent(const SysShape::KeyEvent&) { }

/*
 * --INFO--
 * Address:	801E4B7C
 * Size:	000008
 */
u32 PikiAI::ActCrop::getNextAIType() { return 0x1; }

/*
 * --INFO--
 * Address:	801E4B84
 * Size:	000014
 */
void PikiAI::ActCrop::@64 @4 @onKeyEvent(const SysShape::KeyEvent&)
{
	/*
	li       r11, 4
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -64
	b        onKeyEvent__Q26PikiAI7ActCropFRCQ28SysShape8KeyEvent
	*/
}
