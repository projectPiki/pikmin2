#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047F2A0
    lbl_8047F2A0:
        .asciz "actAttack"
        .skip 2
    lbl_8047F2AC:
        .4byte lbl_80519078
        .4byte lbl_8051907C
        .4byte lbl_80519080
        .4byte lbl_80519084
        .4byte lbl_80519088
    .global lbl_8047F2C0
    lbl_8047F2C0:
        .4byte 0x61747461
        .4byte 0x636B2025
        .4byte 0x73000000
        .4byte 0x41637441
        .4byte 0x74746163
        .4byte 0x6B417267
        .4byte 0x00000000
        .4byte 0x61694174
        .4byte 0x7461636B
        .4byte 0x2E637070
        .4byte 0x00000000
        .asciz "P2Assert"
        .skip 3
        .4byte 0x41637469
        .4byte 0x6F6E4172
        .4byte 0x67000000
    .global lbl_8047F304
    lbl_8047F304:
        .4byte 0x41707072
        .4byte 0x6F616368
        .4byte 0x506F7341
        .4byte 0x6374696F
        .4byte 0x6E417267
        .4byte 0x00000000
    .global lbl_8047F31C
    lbl_8047F31C:
        .4byte 0x53746963
        .4byte 0x6B417474
        .4byte 0x61636B41
        .4byte 0x6374696F
        .4byte 0x6E417267
        .4byte 0x00000000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__13FindCondition
    __vt__13FindCondition:
        .4byte 0
        .4byte 0
        .4byte satisfy__13FindConditionFP8CollPart
    .global "__vt__20Condition<8CollPart>"
    "__vt__20Condition<8CollPart>":
        .4byte 0
        .4byte 0
        .4byte 0
    .global __vt__Q26PikiAI20ApproachPosActionArg
    __vt__Q26PikiAI20ApproachPosActionArg:
        .4byte 0
        .4byte 0
        .4byte getName__Q26PikiAI20ApproachPosActionArgFv
    .global __vt__Q26PikiAI20StickAttackActionArg
    __vt__Q26PikiAI20StickAttackActionArg:
        .4byte 0
        .4byte 0
        .4byte getName__Q26PikiAI20StickAttackActionArgFv
    .global __vt__Q26PikiAI9ActAttack
    __vt__Q26PikiAI9ActAttack:
        .4byte 0
        .4byte 0
        .4byte init__Q26PikiAI9ActAttackFPQ26PikiAI9ActionArg
        .4byte exec__Q26PikiAI9ActAttackFv
        .4byte cleanup__Q26PikiAI9ActAttackFv
        .4byte emotion_success__Q26PikiAI9ActAttackFv
        .4byte emotion_fail__Q26PikiAI6ActionFv
        .4byte applicable__Q26PikiAI9ActAttackFv
        .4byte getNextAIType__Q26PikiAI9ActAttackFv
        .4byte bounceCallback__Q26PikiAI9ActAttackFPQ24Game4PikiPQ23Sys8Triangle
        .4byte
   collisionCallback__Q26PikiAI9ActAttackFPQ24Game4PikiRQ24Game9CollEvent .4byte
   platCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9PlatEvent .4byte
   doDirectDraw__Q26PikiAI6ActionFR8Graphics .4byte
   "wallCallback__Q26PikiAI6ActionFR10Vector3<f>" .4byte
   getInfo__Q26PikiAI9ActAttackFPc .4byte
   onKeyEvent__Q26PikiAI9ActAttackFRCQ28SysShape8KeyEvent .4byte 0 .4byte 0
        .4byte "@56@4@onKeyEvent__Q26PikiAI9ActAttackFRCQ28SysShape8KeyEvent"
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80519078
    lbl_80519078:
        .asciz "SA"
        .skip 1
    .global lbl_8051907C
    lbl_8051907C:
        .asciz "AJ"
        .skip 1
    .global lbl_80519080
    lbl_80519080:
        .asciz "JA"
        .skip 1
    .global lbl_80519084
    lbl_80519084:
        .asciz "JP"
        .skip 1
    .global lbl_80519088
    lbl_80519088:
        .asciz "LT"
        .skip 1
    .global lbl_8051908C
    lbl_8051908C:
        .asciz "Attack"
        .skip 1
    .global lbl_80519094
    lbl_80519094:
        .float 32768.0
    .global lbl_80519098
    lbl_80519098:
        .float 0.8
        .skip 4
    .global lbl_805190A0
    lbl_805190A0:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_805190A8
    lbl_805190A8:
        .4byte 0x41200000
    .global lbl_805190AC
    lbl_805190AC:
        .float -1.0
    .global lbl_805190B0
    lbl_805190B0:
        .4byte 0x40000000
    .global lbl_805190B4
    lbl_805190B4:
        .4byte 0x41A00000
    .global lbl_805190B8
    lbl_805190B8:
        .4byte 0x00000000
    .global lbl_805190BC
    lbl_805190BC:
        .float 1.0
    .global lbl_805190C0
    lbl_805190C0:
        .4byte 0x42C80000
    .global lbl_805190C4
    lbl_805190C4:
        .4byte 0x43480000
    .global lbl_805190C8
    lbl_805190C8:
        .float 0.5
*/

/*
 * --INFO--
 * Address:	801A04CC
 * Size:	000070
 */
void PikiAI::ActAttack::getInfo(char* dest)
{
	char* actions[] = { "SA", "AJ", "JA", "JP", "LT" };
	sprintf(dest, "attack %s", actions[_18]);
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x8048
	  stw       r0, 0x24(r1)
	  lwzu      r11, -0xD54(r5)
	  lhz       r0, 0x18(r3)
	  lis       r3, 0x8048
	  lwz       r10, 0x4(r5)
	  subi      r6, r3, 0xD40
	  lwz       r9, 0x8(r5)
	  mr        r3, r4
	  lwz       r8, 0xC(r5)
	  rlwinm    r0,r0,2,0,29
	  lwz       r7, 0x10(r5)
	  addi      r5, r1, 0x8
	  stw       r11, 0x8(r1)
	  mr        r4, r6
	  stw       r10, 0xC(r1)
	  stw       r9, 0x10(r1)
	  stw       r8, 0x14(r1)
	  stw       r7, 0x18(r1)
	  lwzx      r5, r5, r0
	  crclr     6, 0x6
	  bl        -0xD90F0
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801A053C
 * Size:	000044
 */
void PikiAI::ActAttack::emotion_success(void)
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
 * Address:	801A0580
 * Size:	0000D4
 */
PikiAI::ActAttack::ActAttack(Game::Piki* p)
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
	beq      lbl_801A05B8
	addi     r0, r31, 0x38
	lis      r3, __vt__Q28SysShape14MotionListener@ha
	stw      r0, 0xc(r31)
	addi     r0, r3, __vt__Q28SysShape14MotionListener@l
	stw      r0, 0x38(r31)

lbl_801A05B8:
	mr       r3, r31
	mr       r4, r30
	bl       __ct__Q26PikiAI6ActionFPQ24Game4Piki
	lis      r3, __vt__Q26PikiAI9ActAttack@ha
	addi     r0, r31, 0x38
	addi     r4, r3, __vt__Q26PikiAI9ActAttack@l
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
	beq      lbl_801A060C
	mr       r5, r30
	li       r4, 1
	bl       __ct__Q26PikiAI14ActStickAttackFPQ24Game4Piki
	mr       r0, r3

lbl_801A060C:
	stw      r0, 0x1c(r31)
	li       r3, 0x28
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801A062C
	mr       r4, r30
	bl       __ct__Q26PikiAI14ActApproachPosFPQ24Game4Piki
	mr       r0, r3

lbl_801A062C:
	stw      r0, 0x20(r31)
	addi     r0, r2, lbl_8051908C@sda21
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
 * Address:	801A0654
 * Size:	00011C
 */
void PikiAI::ActAttack::init(PikiAI::ActionArg*)
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
	lis      r4, lbl_8047F2A0@ha
	stw      r28, 0x10(r1)
	mr       r28, r3
	addi     r31, r4, lbl_8047F2A0@l
	beq      lbl_801A06B8
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	addi     r3, r31, 0x2c
	bl       strcmp
	cntlzw   r0, r3
	rlwinm.  r0, r0, 0x1b, 0x18, 0x1f
	beq      lbl_801A06B8
	li       r30, 1

lbl_801A06B8:
	clrlwi.  r0, r30, 0x18
	bne      lbl_801A06D4
	addi     r3, r31, 0x3c
	addi     r5, r31, 0x4c
	li       r4, 0x90
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801A06D4:
	lwz      r0, 4(r29)
	stw      r0, 0x10(r28)
	lwz      r0, 8(r29)
	stw      r0, 0x14(r28)
	lwz      r3, 4(r28)
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A0700
	mr       r3, r28
	bl       initStickAttack__Q26PikiAI9ActAttackFv
	b        lbl_801A0748

lbl_801A0700:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_805190A0@sda21(r2)
	stw      r0, 8(r1)
	lfs      f1, lbl_80519094@sda21(r2)
	lfd      f2, 8(r1)
	lfs      f0, lbl_80519098@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_801A0740
	mr       r3, r28
	bl       initJumpAdjust__Q26PikiAI9ActAttackFv
	b        lbl_801A0748

lbl_801A0740:
	mr       r3, r28
	bl       initAdjust__Q26PikiAI9ActAttackFv

lbl_801A0748:
	li       r0, 0
	stb      r0, 0x36(r28)
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
 * Address:	801A0770
 * Size:	000084
 */
void PikiAI::ActAttack::initStickAttack(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	lwz      r3, 4(r3)
	bl       getAttackDamage__Q24Game4PikiFv
	lwz      r5, 0x10(r31)
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	lis      r3, __vt__Q26PikiAI20StickAttackActionArg@ha
	stw      r0, 8(r1)
	addi     r4, r3, __vt__Q26PikiAI20StickAttackActionArg@l
	li       r3, 2
	li       r0, 0
	stw      r4, 8(r1)
	addi     r4, r1, 8
	stfs     f1, 0xc(r1)
	stw      r5, 0x10(r1)
	stw      r3, 0x14(r1)
	stb      r0, 0x18(r1)
	lwz      r3, 0x1c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	sth      r0, 0x18(r31)
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A07F4
 * Size:	0000A8
 */
void PikiAI::ActAttack::initAdjust(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	bl       calcAttackPos__Q26PikiAI9ActAttackFv
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	lfs      f1, 0x30(r31)
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	lis      r3, __vt__Q26PikiAI20ApproachPosActionArg@ha
	stw      r0, 8(r1)
	addi     r0, r3, __vt__Q26PikiAI20ApproachPosActionArg@l
	lfs      f0, lbl_805190A8@sda21(r2)
	li       r3, 0
	stw      r0, 8(r1)
	li       r0, 1
	fadds    f1, f0, f1
	lfs      f0, lbl_805190AC@sda21(r2)
	lfs      f2, 0x24(r31)
	addi     r4, r1, 8
	stfs     f2, 0xc(r1)
	lfs      f2, 0x28(r31)
	stfs     f2, 0x10(r1)
	lfs      f2, 0x2c(r31)
	stb      r3, 0x20(r1)
	stb      r3, 0x21(r1)
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	stb      r0, 0x20(r1)
	stb      r0, 0x21(r1)
	sth      r0, 0x18(r31)
	lwz      r3, 0x20(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
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
 * Address:	801A089C
 * Size:	0000AC
 */
void PikiAI::ActAttack::initJumpAdjust(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	bl       calcAttackPos__Q26PikiAI9ActAttackFv
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	lfs      f1, 0x30(r31)
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	lis      r3, __vt__Q26PikiAI20ApproachPosActionArg@ha
	stw      r0, 8(r1)
	addi     r0, r3, __vt__Q26PikiAI20ApproachPosActionArg@l
	lfs      f0, lbl_805190A8@sda21(r2)
	li       r5, 0
	stw      r0, 8(r1)
	li       r3, 1
	fadds    f1, f0, f1
	lfs      f0, lbl_805190B0@sda21(r2)
	lfs      f2, 0x24(r31)
	li       r0, 2
	addi     r4, r1, 8
	stfs     f2, 0xc(r1)
	lfs      f2, 0x28(r31)
	stfs     f2, 0x10(r1)
	lfs      f2, 0x2c(r31)
	stb      r5, 0x20(r1)
	stb      r5, 0x21(r1)
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	stb      r3, 0x20(r1)
	stb      r3, 0x21(r1)
	sth      r0, 0x18(r31)
	lwz      r3, 0x20(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
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
 * Address:	801A0948
 * Size:	00008C
 */
void PikiAI::ActAttack::applicable(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r3, 4(r3)
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A0974
	li       r3, 1
	b        lbl_801A09C0

lbl_801A0974:
	mr       r3, r31
	bl       calcAttackPos__Q26PikiAI9ActAttackFv
	lwz      r4, 4(r31)
	addi     r3, r1, 8
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x28(r31)
	lfs      f1, 0xc(r1)
	lfs      f0, lbl_805190B4@sda21(r2)
	fsubs    f1, f2, f1
	fabs     f1, f1
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	mfcr     r0
	rlwinm   r0, r0, 2, 0x1f, 0x1f
	cntlzw   r0, r0
	srwi     r3, r0, 5

lbl_801A09C0:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D8
 */
void PikiAI::ActAttack::initJump(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801A09D4
 * Size:	0001C4
 */
void PikiAI::ActAttack::calcAttackPos(void)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	li       r31, 0
	stw      r30, 0x48(r1)
	stw      r29, 0x44(r1)
	mr       r29, r3
	lwz      r3, 0x10(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A0A6C
	lwz      r30, 0x10(r29)
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x38
	beq      lbl_801A0A68
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x45
	beq      lbl_801A0A68
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x42
	bne      lbl_801A0A6C

lbl_801A0A68:
	li       r31, 1

lbl_801A0A6C:
	clrlwi.  r0, r31, 0x18
	beq      lbl_801A0B34
	lis      r4, "__vt__20Condition<8CollPart>"@ha
	lis      r3, __vt__13FindCondition@ha
	addi     r4, r4, "__vt__20Condition<8CollPart>"@l
	addi     r0, r1, 8
	stw      r4, 8(r1)
	addi     r3, r3, __vt__13FindCondition@l
	addi     r4, r1, 0x28
	stw      r3, 8(r1)
	stw      r0, 0x24(r1)
	lwz      r3, 4(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x10(r29)
	addi     r4, r1, 0x24
	lwz      r3, 0x114(r3)
	bl       findCollPart__8CollTreeFR15FindCollPartArg
	cmplwi   r3, 0
	beq      lbl_801A0AE8
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x24(r29)
	lfs      f0, 0x50(r3)
	stfs     f0, 0x28(r29)
	lfs      f0, 0x54(r3)
	stfs     f0, 0x2c(r29)
	lfs      f0, 0x1c(r3)
	stfs     f0, 0x30(r29)
	b        lbl_801A0B7C

lbl_801A0AE8:
	lwz      r4, 0x10(r29)
	addi     r3, r1, 0x18
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x18(r1)
	stfs     f0, 0x24(r29)
	lfs      f0, 0x1c(r1)
	stfs     f0, 0x28(r29)
	lfs      f0, 0x20(r1)
	stfs     f0, 0x2c(r29)
	lwz      r3, 0x10(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x30(r29)
	b        lbl_801A0B7C

lbl_801A0B34:
	lwz      r4, 0x10(r29)
	addi     r3, r1, 0xc
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0xc(r1)
	stfs     f0, 0x24(r29)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x28(r29)
	lfs      f0, 0x14(r1)
	stfs     f0, 0x2c(r29)
	lwz      r3, 0x10(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x30(r29)

lbl_801A0B7C:
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	lwz      r29, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A0B98
 * Size:	00094C
 */
void PikiAI::ActAttack::exec(void)
{
	/*
	stwu     r1, -0x110(r1)
	mflr     r0
	stw      r0, 0x114(r1)
	stw      r31, 0x10c(r1)
	mr       r31, r3
	stw      r30, 0x108(r1)
	stw      r29, 0x104(r1)
	lwz      r3, 0x10(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A0BD8
	li       r3, 0
	b        lbl_801A14C8

lbl_801A0BD8:
	lhz      r0, 0x18(r31)
	cmplwi   r0, 4
	beq      lbl_801A0CB4
	lwz      r3, 4(r31)
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A0CB4
	lwz      r3, 0x10(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xcc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A0C2C
	lwz      r3, 0x10(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xd0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A0CB4

lbl_801A0C2C:
	li       r0, 4
	sth      r0, 0x18(r31)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xf4(r1)
	lfd      f3, lbl_805190A0@sda21(r2)
	stw      r0, 0xf0(r1)
	lfs      f1, lbl_80519094@sda21(r2)
	lfd      f2, 0xf0(r1)
	lfs      f0, lbl_805190C8@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_801A0C74
	li       r0, 0x36
	sth      r0, 0x34(r31)
	b        lbl_801A0C7C

lbl_801A0C74:
	li       r0, 0x35
	sth      r0, 0x34(r31)

lbl_801A0C7C:
	cmplwi   r31, 0
	mr       r6, r31
	beq      lbl_801A0C8C
	lwz      r6, 0xc(r31)

lbl_801A0C8C:
	lwz      r3, 4(r31)
	li       r7, 0
	lha      r4, 0x34(r31)
	lwz      r12, 0(r3)
	mr       r5, r4
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stb      r0, 0x36(r31)

lbl_801A0CB4:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 1
	bne      lbl_801A0CF8
	lwz      r3, 0x10(r31)
	cmplwi   r3, 0
	beq      lbl_801A0CF8
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A0CF8
	bl       PSMGetPikiBattleD__Fv
	lbz      r4, 0x54(r3)
	addi     r0, r4, 1
	stb      r0, 0x54(r3)

lbl_801A0CF8:
	lhz      r0, 0x18(r31)
	cmpwi    r0, 3
	beq      lbl_801A1264
	bge      lbl_801A0D18
	cmpwi    r0, 0
	beq      lbl_801A0D24
	bge      lbl_801A0F70
	b        lbl_801A14C4

lbl_801A0D18:
	cmpwi    r0, 5
	bge      lbl_801A14C4
	b        lbl_801A1480

lbl_801A0D24:
	lwz      r3, 0x1c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0
	bne      lbl_801A0D48
	li       r3, 0
	b        lbl_801A14C8

lbl_801A0D48:
	cmpwi    r3, 2
	bne      lbl_801A14C4
	lwz      r3, 4(r31)
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A14C4
	lwz      r3, 0x10(r31)
	li       r30, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A0DDC
	lwz      r29, 0x10(r31)
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x38
	beq      lbl_801A0DD8
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x45
	beq      lbl_801A0DD8
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x42
	bne      lbl_801A0DDC

lbl_801A0DD8:
	li       r30, 1

lbl_801A0DDC:
	clrlwi.  r0, r30, 0x18
	beq      lbl_801A0EA4
	lis      r4, "__vt__20Condition<8CollPart>"@ha
	lis      r3, __vt__13FindCondition@ha
	addi     r4, r4, "__vt__20Condition<8CollPart>"@l
	addi     r0, r1, 0xc
	stw      r4, 0xc(r1)
	addi     r3, r3, __vt__13FindCondition@l
	addi     r4, r1, 0x80
	stw      r3, 0xc(r1)
	stw      r0, 0x7c(r1)
	lwz      r3, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x10(r31)
	addi     r4, r1, 0x7c
	lwz      r3, 0x114(r3)
	bl       findCollPart__8CollTreeFR15FindCollPartArg
	cmplwi   r3, 0
	beq      lbl_801A0E58
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x24(r31)
	lfs      f0, 0x50(r3)
	stfs     f0, 0x28(r31)
	lfs      f0, 0x54(r3)
	stfs     f0, 0x2c(r31)
	lfs      f0, 0x1c(r3)
	stfs     f0, 0x30(r31)
	b        lbl_801A0EEC

lbl_801A0E58:
	lwz      r4, 0x10(r31)
	addi     r3, r1, 0x2c
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x2c(r1)
	stfs     f0, 0x24(r31)
	lfs      f0, 0x30(r1)
	stfs     f0, 0x28(r31)
	lfs      f0, 0x34(r1)
	stfs     f0, 0x2c(r31)
	lwz      r3, 0x10(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x30(r31)
	b        lbl_801A0EEC

lbl_801A0EA4:
	lwz      r4, 0x10(r31)
	addi     r3, r1, 0x38
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x38(r1)
	stfs     f0, 0x24(r31)
	lfs      f0, 0x3c(r1)
	stfs     f0, 0x28(r31)
	lfs      f0, 0x40(r1)
	stfs     f0, 0x2c(r31)
	lwz      r3, 0x10(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x30(r31)

lbl_801A0EEC:
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	lfs      f0, 0x30(r31)
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	lis      r3, __vt__Q26PikiAI20ApproachPosActionArg@ha
	stw      r0, 0xd4(r1)
	addi     r0, r3, __vt__Q26PikiAI20ApproachPosActionArg@l
	lfs      f1, lbl_805190A8@sda21(r2)
	li       r5, 0
	stw      r0, 0xd4(r1)
	li       r3, 1
	fadds    f2, f1, f0
	lfs      f0, lbl_805190B0@sda21(r2)
	lfs      f1, 0x24(r31)
	li       r0, 2
	addi     r4, r1, 0xd4
	stfs     f1, 0xd8(r1)
	lfs      f1, 0x28(r31)
	stfs     f1, 0xdc(r1)
	lfs      f1, 0x2c(r31)
	stb      r5, 0xec(r1)
	stb      r5, 0xed(r1)
	stfs     f1, 0xe0(r1)
	stfs     f2, 0xe4(r1)
	stfs     f0, 0xe8(r1)
	stb      r3, 0xec(r1)
	stb      r3, 0xed(r1)
	sth      r0, 0x18(r31)
	lwz      r3, 0x20(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_801A14C4

lbl_801A0F70:
	lwz      r3, 0x10(r31)
	li       r29, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A0FEC
	lwz      r30, 0x10(r31)
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x38
	beq      lbl_801A0FE8
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x45
	beq      lbl_801A0FE8
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x42
	bne      lbl_801A0FEC

lbl_801A0FE8:
	li       r29, 1

lbl_801A0FEC:
	clrlwi.  r0, r29, 0x18
	beq      lbl_801A10B4
	lis      r4, "__vt__20Condition<8CollPart>"@ha
	lis      r3, __vt__13FindCondition@ha
	addi     r4, r4, "__vt__20Condition<8CollPart>"@l
	addi     r0, r1, 0x10
	stw      r4, 0x10(r1)
	addi     r3, r3, __vt__13FindCondition@l
	addi     r4, r1, 0xc4
	stw      r3, 0x10(r1)
	stw      r0, 0xc0(r1)
	lwz      r3, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x10(r31)
	addi     r4, r1, 0xc0
	lwz      r3, 0x114(r3)
	bl       findCollPart__8CollTreeFR15FindCollPartArg
	cmplwi   r3, 0
	beq      lbl_801A1068
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x24(r31)
	lfs      f0, 0x50(r3)
	stfs     f0, 0x28(r31)
	lfs      f0, 0x54(r3)
	stfs     f0, 0x2c(r31)
	lfs      f0, 0x1c(r3)
	stfs     f0, 0x30(r31)
	b        lbl_801A10FC

lbl_801A1068:
	lwz      r4, 0x10(r31)
	addi     r3, r1, 0x50
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x50(r1)
	stfs     f0, 0x24(r31)
	lfs      f0, 0x54(r1)
	stfs     f0, 0x28(r31)
	lfs      f0, 0x58(r1)
	stfs     f0, 0x2c(r31)
	lwz      r3, 0x10(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x30(r31)
	b        lbl_801A10FC

lbl_801A10B4:
	lwz      r4, 0x10(r31)
	addi     r3, r1, 0x5c
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x5c(r1)
	stfs     f0, 0x24(r31)
	lfs      f0, 0x60(r1)
	stfs     f0, 0x28(r31)
	lfs      f0, 0x64(r1)
	stfs     f0, 0x2c(r31)
	lwz      r3, 0x10(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x30(r31)

lbl_801A10FC:
	lwz      r3, 0x20(r31)
	lfs      f0, 0x24(r31)
	stfs     f0, 0x10(r3)
	lfs      f0, 0x28(r31)
	stfs     f0, 0x14(r3)
	lfs      f0, 0x2c(r31)
	stfs     f0, 0x18(r3)
	lwz      r3, 0x20(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0
	bne      lbl_801A1254
	lhz      r0, 0x18(r31)
	cmplwi   r0, 1
	bne      lbl_801A11A0
	lwz      r3, 4(r31)
	bl       getAttackDamage__Q24Game4PikiFv
	lwz      r5, 0x10(r31)
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	lis      r3, __vt__Q26PikiAI20StickAttackActionArg@ha
	stw      r0, 0xac(r1)
	addi     r4, r3, __vt__Q26PikiAI20StickAttackActionArg@l
	li       r3, 2
	li       r0, 0
	stw      r4, 0xac(r1)
	addi     r4, r1, 0xac
	stfs     f1, 0xb0(r1)
	stw      r5, 0xb4(r1)
	stw      r3, 0xb8(r1)
	stb      r0, 0xbc(r1)
	lwz      r3, 0x1c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	sth      r0, 0x18(r31)
	b        lbl_801A14C4

lbl_801A11A0:
	li       r0, 3
	addi     r3, r1, 0x44
	sth      r0, 0x18(r31)
	lwz      r4, 4(r31)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x28(r31)
	lfs      f0, 0x48(r1)
	lfs      f2, 0x2c(r31)
	fsubs    f3, f1, f0
	lfs      f0, 0x4c(r1)
	lfs      f1, 0x24(r31)
	fsubs    f4, f2, f0
	lfs      f0, 0x44(r1)
	fmuls    f3, f3, f3
	fsubs    f2, f1, f0
	lfs      f0, lbl_805190B8@sda21(r2)
	fmuls    f5, f4, f4
	fmadds   f1, f2, f2, f3
	fadds    f1, f5, f1
	fcmpo    cr0, f1, f0
	ble      lbl_801A1210
	ble      lbl_801A1214
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_801A1214

lbl_801A1210:
	fmr      f1, f0

lbl_801A1214:
	lfs      f0, lbl_805190B8@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_801A1230
	lfs      f0, lbl_805190BC@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f2, f2, f0
	fmuls    f4, f4, f0

lbl_801A1230:
	lfs      f0, lbl_805190C0@sda21(r2)
	lwz      r3, 4(r31)
	fmuls    f2, f0, f2
	lfs      f1, lbl_805190C4@sda21(r2)
	fmuls    f0, f0, f4
	stfs     f2, 0x200(r3)
	stfs     f1, 0x204(r3)
	stfs     f0, 0x208(r3)
	b        lbl_801A14C4

lbl_801A1254:
	cmpwi    r3, 2
	bne      lbl_801A14C4
	li       r3, 2
	b        lbl_801A14C8

lbl_801A1264:
	lwz      r3, 4(r31)
	lwz      r0, 0xc8(r3)
	cmplwi   r0, 0
	beq      lbl_801A14C4
	lwz      r3, 0x10(r31)
	li       r30, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A12F0
	lwz      r29, 0x10(r31)
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x38
	beq      lbl_801A12EC
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x45
	beq      lbl_801A12EC
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x42
	bne      lbl_801A12F0

lbl_801A12EC:
	li       r30, 1

lbl_801A12F0:
	clrlwi.  r0, r30, 0x18
	beq      lbl_801A13B8
	lis      r4, "__vt__20Condition<8CollPart>"@ha
	lis      r3, __vt__13FindCondition@ha
	addi     r4, r4, "__vt__20Condition<8CollPart>"@l
	addi     r0, r1, 8
	stw      r4, 8(r1)
	addi     r3, r3, __vt__13FindCondition@l
	addi     r4, r1, 0x6c
	stw      r3, 8(r1)
	stw      r0, 0x68(r1)
	lwz      r3, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x10(r31)
	addi     r4, r1, 0x68
	lwz      r3, 0x114(r3)
	bl       findCollPart__8CollTreeFR15FindCollPartArg
	cmplwi   r3, 0
	beq      lbl_801A136C
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x24(r31)
	lfs      f0, 0x50(r3)
	stfs     f0, 0x28(r31)
	lfs      f0, 0x54(r3)
	stfs     f0, 0x2c(r31)
	lfs      f0, 0x1c(r3)
	stfs     f0, 0x30(r31)
	b        lbl_801A1400

lbl_801A136C:
	lwz      r4, 0x10(r31)
	addi     r3, r1, 0x14
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x14(r1)
	stfs     f0, 0x24(r31)
	lfs      f0, 0x18(r1)
	stfs     f0, 0x28(r31)
	lfs      f0, 0x1c(r1)
	stfs     f0, 0x2c(r31)
	lwz      r3, 0x10(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x30(r31)
	b        lbl_801A1400

lbl_801A13B8:
	lwz      r4, 0x10(r31)
	addi     r3, r1, 0x20
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x20(r1)
	stfs     f0, 0x24(r31)
	lfs      f0, 0x24(r1)
	stfs     f0, 0x28(r31)
	lfs      f0, 0x28(r1)
	stfs     f0, 0x2c(r31)
	lwz      r3, 0x10(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x30(r31)

lbl_801A1400:
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	lfs      f0, 0x30(r31)
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	lis      r3, __vt__Q26PikiAI20ApproachPosActionArg@ha
	stw      r0, 0x90(r1)
	addi     r0, r3, __vt__Q26PikiAI20ApproachPosActionArg@l
	lfs      f1, lbl_805190A8@sda21(r2)
	li       r3, 0
	stw      r0, 0x90(r1)
	li       r0, 1
	fadds    f2, f1, f0
	lfs      f0, lbl_805190AC@sda21(r2)
	lfs      f1, 0x24(r31)
	addi     r4, r1, 0x90
	stfs     f1, 0x94(r1)
	lfs      f1, 0x28(r31)
	stfs     f1, 0x98(r1)
	lfs      f1, 0x2c(r31)
	stb      r3, 0xa8(r1)
	stb      r3, 0xa9(r1)
	stfs     f1, 0x9c(r1)
	stfs     f2, 0xa0(r1)
	stfs     f0, 0xa4(r1)
	stb      r0, 0xa8(r1)
	stb      r0, 0xa9(r1)
	sth      r0, 0x18(r31)
	lwz      r3, 0x20(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_801A14C4

lbl_801A1480:
	lwz      r3, 4(r31)
	lha      r4, 0x34(r31)
	bl       assertMotion__Q24Game8FakePikiFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A149C
	li       r0, 1
	stb      r0, 0x36(r31)

lbl_801A149C:
	lwz      r3, 4(r31)
	lfs      f0, lbl_805190B8@sda21(r2)
	stfs     f0, 0x1e4(r3)
	stfs     f0, 0x1e8(r3)
	stfs     f0, 0x1ec(r3)
	lbz      r0, 0x36(r31)
	cmplwi   r0, 0
	beq      lbl_801A14C4
	li       r3, 2
	b        lbl_801A14C8

lbl_801A14C4:
	li       r3, 1

lbl_801A14C8:
	lwz      r0, 0x114(r1)
	lwz      r31, 0x10c(r1)
	lwz      r30, 0x108(r1)
	lwz      r29, 0x104(r1)
	mtlr     r0
	addi     r1, r1, 0x110
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A14E4
 * Size:	000054
 */
void PikiAI::ActAttack::cleanup(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_805190B8@sda21(r2)
	stw      r0, 0x14(r1)
	lwz      r4, 4(r3)
	stfs     f0, 0x1e4(r4)
	stfs     f0, 0x1e8(r4)
	stfs     f0, 0x1ec(r4)
	lhz      r0, 0x18(r3)
	cmpwi    r0, 0
	beq      lbl_801A1514
	b        lbl_801A1528

lbl_801A1514:
	lwz      r3, 0x1c(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_801A1528:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A1538
 * Size:	0000E0
 */
void PikiAI::ActAttack::collisionCallback(Game::Piki*, Game::CollEvent&)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r5
	stw      r30, 0x28(r1)
	mr       r30, r4
	stw      r29, 0x24(r1)
	mr       r29, r3
	lwz      r3, 0(r5)
	lwz      r0, 0x10(r29)
	cmplw    r3, r0
	bne      lbl_801A15FC
	lhz      r0, 0x18(r29)
	cmplwi   r0, 3
	bne      lbl_801A15FC
	lwz      r3, 4(r31)
	cmplwi   r3, 0
	beq      lbl_801A15FC
	bl       isStickable__8CollPartFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A15FC
	lwz      r4, 0(r31)
	mr       r3, r30
	lwz      r5, 4(r31)
	bl       startStick__Q24Game8CreatureFPQ24Game8CreatureP8CollPart
	lwz      r3, 4(r29)
	bl       getAttackDamage__Q24Game4PikiFv
	lwz      r5, 0x10(r29)
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	lis      r3, __vt__Q26PikiAI20StickAttackActionArg@ha
	stw      r0, 8(r1)
	addi     r4, r3, __vt__Q26PikiAI20StickAttackActionArg@l
	li       r3, 2
	li       r0, 0
	stw      r4, 8(r1)
	addi     r4, r1, 8
	stfs     f1, 0xc(r1)
	stw      r5, 0x10(r1)
	stw      r3, 0x14(r1)
	stb      r0, 0x18(r1)
	lwz      r3, 0x1c(r29)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	sth      r0, 0x18(r29)

lbl_801A15FC:
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
 * Address:	801A1618
 * Size:	00024C
 */
void PikiAI::ActAttack::bounceCallback(Game::Piki*, Sys::Triangle*)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stw      r31, 0x6c(r1)
	mr       r31, r3
	stw      r30, 0x68(r1)
	stw      r29, 0x64(r1)
	lhz      r0, 0x18(r3)
	cmplwi   r0, 3
	bne      lbl_801A1848
	lwz      r3, 0x10(r31)
	li       r29, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A16BC
	lwz      r30, 0x10(r31)
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x38
	beq      lbl_801A16B8
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x45
	beq      lbl_801A16B8
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x42
	bne      lbl_801A16BC

lbl_801A16B8:
	li       r29, 1

lbl_801A16BC:
	clrlwi.  r0, r29, 0x18
	beq      lbl_801A1784
	lis      r4, "__vt__20Condition<8CollPart>"@ha
	lis      r3, __vt__13FindCondition@ha
	addi     r4, r4, "__vt__20Condition<8CollPart>"@l
	addi     r0, r1, 8
	stw      r4, 8(r1)
	addi     r3, r3, __vt__13FindCondition@l
	addi     r4, r1, 0x28
	stw      r3, 8(r1)
	stw      r0, 0x24(r1)
	lwz      r3, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x10(r31)
	addi     r4, r1, 0x24
	lwz      r3, 0x114(r3)
	bl       findCollPart__8CollTreeFR15FindCollPartArg
	cmplwi   r3, 0
	beq      lbl_801A1738
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x24(r31)
	lfs      f0, 0x50(r3)
	stfs     f0, 0x28(r31)
	lfs      f0, 0x54(r3)
	stfs     f0, 0x2c(r31)
	lfs      f0, 0x1c(r3)
	stfs     f0, 0x30(r31)
	b        lbl_801A17CC

lbl_801A1738:
	lwz      r4, 0x10(r31)
	addi     r3, r1, 0xc
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0xc(r1)
	stfs     f0, 0x24(r31)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x28(r31)
	lfs      f0, 0x14(r1)
	stfs     f0, 0x2c(r31)
	lwz      r3, 0x10(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x30(r31)
	b        lbl_801A17CC

lbl_801A1784:
	lwz      r4, 0x10(r31)
	addi     r3, r1, 0x18
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x18(r1)
	stfs     f0, 0x24(r31)
	lfs      f0, 0x1c(r1)
	stfs     f0, 0x28(r31)
	lfs      f0, 0x20(r1)
	stfs     f0, 0x2c(r31)
	lwz      r3, 0x10(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x30(r31)

lbl_801A17CC:
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	lfs      f0, 0x30(r31)
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	lis      r3, __vt__Q26PikiAI20ApproachPosActionArg@ha
	stw      r0, 0x38(r1)
	addi     r0, r3, __vt__Q26PikiAI20ApproachPosActionArg@l
	lfs      f1, lbl_805190A8@sda21(r2)
	li       r3, 0
	stw      r0, 0x38(r1)
	li       r0, 1
	fadds    f2, f1, f0
	lfs      f0, lbl_805190AC@sda21(r2)
	lfs      f1, 0x24(r31)
	addi     r4, r1, 0x38
	stfs     f1, 0x3c(r1)
	lfs      f1, 0x28(r31)
	stfs     f1, 0x40(r1)
	lfs      f1, 0x2c(r31)
	stb      r3, 0x50(r1)
	stb      r3, 0x51(r1)
	stfs     f1, 0x44(r1)
	stfs     f2, 0x48(r1)
	stfs     f0, 0x4c(r1)
	stb      r0, 0x50(r1)
	stb      r0, 0x51(r1)
	sth      r0, 0x18(r31)
	lwz      r3, 0x20(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_801A1848:
	lwz      r0, 0x74(r1)
	lwz      r31, 0x6c(r1)
	lwz      r30, 0x68(r1)
	lwz      r29, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A1864
 * Size:	000024
 */
void PikiAI::ActAttack::onKeyEvent(SysShape::KeyEvent const&)
{
	/*
	lwz      r0, 0x1c(r4)
	cmplwi   r0, 0x3e8
	bnelr
	lhz      r0, 0x18(r3)
	cmplwi   r0, 4
	bnelr
	li       r0, 1
	stb      r0, 0x36(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A1888
 * Size:	000058
 */
void FindCondition::satisfy(CollPart*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	lwz      r0, 0x10(r4)
	cmplwi   r0, 0
	bne      lbl_801A18C8
	lis      r5, 0x2A2A2A2A@ha
	addi     r3, r4, 0x30
	addi     r4, r5, 0x2A2A2A2A@l
	li       r5, 0x2a
	bl       match__4ID32FUlc
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A18C8
	li       r31, 1

lbl_801A18C8:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A18E0
 * Size:	00000C
 */
void PikiAI::ApproachPosActionArg::getName(void)
{
	/*
	lis      r3, lbl_8047F304@ha
	addi     r3, r3, lbl_8047F304@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A18EC
 * Size:	00000C
 */
void PikiAI::StickAttackActionArg::getName(void)
{
	/*
	lis      r3, lbl_8047F31C@ha
	addi     r3, r3, lbl_8047F31C@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A18F8
 * Size:	000008
 */
u32 PikiAI::ActAttack::getNextAIType(void) { return 0x1; }

/*
 * --INFO--
 * Address:	801A1900
 * Size:	000014
 */
void @56 @4 @PikiAI::ActAttack::onKeyEvent(SysShape::KeyEvent const&)
{
	/*
	li       r11, 4
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -56
	b        onKeyEvent__Q26PikiAI9ActAttackFRCQ28SysShape8KeyEvent
	*/
}
