#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80480CA0
    lbl_80480CA0:
        .4byte 0x61637442
        .4byte 0x7265616B
        .4byte 0x57616C6C
        .4byte 0x00000000
    .global lbl_80480CB0
    lbl_80480CB0:
        .4byte 0x42726561
        .4byte 0x6B526F63
        .4byte 0x6B000000
        .4byte 0x41637442
        .4byte 0x7265616B
        .4byte 0x526F636B
        .4byte 0x41726700
        .4byte 0x61694272
        .4byte 0x65616B52
        .4byte 0x6F636B2E
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
        .4byte 0x466F6C6C
        .4byte 0x6F775665
        .4byte 0x63746F72
        .4byte 0x4669656C
        .4byte 0x64416374
        .4byte 0x696F6E41
        .4byte 0x72670000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q26PikiAI12ActBreakRock
    __vt__Q26PikiAI12ActBreakRock:
        .4byte 0
        .4byte 0
        .4byte init__Q26PikiAI12ActBreakRockFPQ26PikiAI9ActionArg
        .4byte exec__Q26PikiAI12ActBreakRockFv
        .4byte cleanup__Q26PikiAI12ActBreakRockFv
        .4byte emotion_success__Q26PikiAI6ActionFv
        .4byte emotion_fail__Q26PikiAI6ActionFv
        .4byte applicable__Q26PikiAI6ActionFv
        .4byte getNextAIType__Q26PikiAI6ActionFv
        .4byte
   bounceCallback__Q26PikiAI12ActBreakRockFPQ24Game4PikiPQ23Sys8Triangle .4byte
   collisionCallback__Q26PikiAI12ActBreakRockFPQ24Game4PikiRQ24Game9CollEvent
        .4byte
   platCallback__Q26PikiAI12ActBreakRockFPQ24Game4PikiRQ24Game9PlatEvent .4byte
   doDirectDraw__Q26PikiAI6ActionFR8Graphics .4byte
   "wallCallback__Q26PikiAI6ActionFR10Vector3<f>" .4byte
   getInfo__Q26PikiAI6ActionFPc .4byte
   onKeyEvent__Q26PikiAI12ActBreakRockFRCQ28SysShape8KeyEvent .4byte 0 .4byte 0
        .4byte
   "@48@4@onKeyEvent__Q26PikiAI12ActBreakRockFRCQ28SysShape8KeyEvent" .4byte 0
*/

/*
 * --INFO--
 * Address:	801E36A0
 * Size:	0000F8
 */
PikiAI::ActBreakRock::ActBreakRock(Game::Piki*)
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
	beq      lbl_801E36D8
	addi     r0, r30, 0x30
	lis      r3, __vt__Q28SysShape14MotionListener@ha
	stw      r0, 0xc(r30)
	addi     r0, r3, __vt__Q28SysShape14MotionListener@l
	stw      r0, 0x30(r30)

lbl_801E36D8:
	mr       r3, r30
	mr       r4, r31
	bl       __ct__Q26PikiAI6ActionFPQ24Game4Piki
	lis      r3, __vt__Q26PikiAI12ActBreakRock@ha
	addi     r0, r30, 0x30
	addi     r4, r3, __vt__Q26PikiAI12ActBreakRock@l
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
	beq      lbl_801E372C
	mr       r5, r31
	li       r4, 1
	bl       __ct__Q26PikiAI14ActStickAttackFPQ24Game4Piki
	mr       r0, r3

lbl_801E372C:
	stw      r0, 0x18(r30)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801E374C
	mr       r4, r31
	bl       __ct__Q26PikiAI10ActGotoPosFPQ24Game4Piki
	mr       r0, r3

lbl_801E374C:
	stw      r0, 0x1c(r30)
	li       r3, 0x10
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801E376C
	mr       r4, r31
	bl       __ct__Q26PikiAI20ActFollowVectorFieldFPQ24Game4Piki
	mr       r0, r3

lbl_801E376C:
	lis      r3, lbl_80480CB0@ha
	stw      r0, 0x20(r30)
	addi     r0, r3, lbl_80480CB0@l
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
 * Address:	801E3798
 * Size:	0000C0
 */
void PikiAI::ActBreakRock::init(PikiAI::ActionArg*)
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
	lis      r4, lbl_80480CA0@ha
	stw      r28, 0x10(r1)
	mr       r28, r3
	addi     r31, r4, lbl_80480CA0@l
	beq      lbl_801E37FC
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
	beq      lbl_801E37FC
	li       r30, 1

lbl_801E37FC:
	clrlwi.  r0, r30, 0x18
	bne      lbl_801E3818
	addi     r3, r31, 0x2c
	addi     r5, r31, 0x3c
	li       r4, 0x50
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801E3818:
	lis      r3, workPikis__Q24Game8GameStat@ha
	lwz      r4, 4(r28)
	addi     r3, r3, workPikis__Q24Game8GameStat@l
	bl       inc__Q34Game8GameStat15PikiNaviCounterFPQ24Game4Piki
	lwz      r0, 4(r29)
	mr       r3, r28
	stw      r0, 0x10(r28)
	bl       initFollow__Q26PikiAI12ActBreakRockFv
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
 * Address:	801E3858
 * Size:	000068
 */
void PikiAI::ActBreakRock::initFollow()
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
 * Address:	801E38C0
 * Size:	00032C
 */
void PikiAI::ActBreakRock::exec()
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r3
	stw      r30, 0x48(r1)
	lwz      r3, 0x10(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801E38FC
	li       r3, 0
	b        lbl_801E3BD4

lbl_801E38FC:
	lhz      r0, 0x14(r31)
	cmpwi    r0, 1
	beq      lbl_801E3A2C
	bge      lbl_801E3918
	cmpwi    r0, 0
	bge      lbl_801E3B00
	b        lbl_801E3BD0

lbl_801E3918:
	cmpwi    r0, 3
	bge      lbl_801E3BD0
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
	lwz      r4, 0x10(r31)
	mr       r30, r3
	lhz      r0, 0x128(r4)
	cmplwi   r0, 0x40e
	bne      lbl_801E396C
	lwz      r3, 4(r31)
	li       r5, 0x284f
	li       r6, 1
	bl       startSound__Q24Game4PikiFPQ24Game8CreatureUlQ36PSGame5SeMgr7SetSeId

lbl_801E396C:
	cmpwi    r30, 1
	beq      lbl_801E3BD0
	lwz      r3, 0x10(r31)
	li       r30, -1
	lhz      r0, 0x128(r3)
	cmplwi   r0, 0x40e
	bne      lbl_801E398C
	li       r30, 0x3a

lbl_801E398C:
	lwz      r3, 4(r31)
	bl       getAttackDamage__Q24Game4PikiFv
	lwz      r4, 0x10(r31)
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	lis      r3, __vt__Q26PikiAI20StickAttackActionArg@ha
	stw      r0, 0x30(r1)
	addi     r3, r3, __vt__Q26PikiAI20StickAttackActionArg@l
	li       r0, 0
	stw      r3, 0x30(r1)
	stfs     f1, 0x34(r1)
	stw      r4, 0x38(r1)
	stw      r30, 0x3c(r1)
	stb      r0, 0x40(r1)
	lhz      r0, 0x128(r4)
	cmplwi   r0, 0x410
	beq      lbl_801E39D8
	cmplwi   r0, 0x40c
	bne      lbl_801E39E4

lbl_801E39D8:
	li       r0, 5
	stb      r0, 0x40(r1)
	b        lbl_801E3A08

lbl_801E39E4:
	cmplwi   r0, 0x40e
	bne      lbl_801E39F8
	li       r0, 6
	stb      r0, 0x40(r1)
	b        lbl_801E3A08

lbl_801E39F8:
	cmplwi   r0, 0x409
	bne      lbl_801E3A08
	li       r0, 7
	stb      r0, 0x40(r1)

lbl_801E3A08:
	lwz      r3, 0x18(r31)
	addi     r4, r1, 0x30
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r0, 2
	sth      r0, 0x14(r31)
	b        lbl_801E3BD0

lbl_801E3A2C:
	lwz      r3, 0x20(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0
	bne      lbl_801E3BD0
	lwz      r3, 0x10(r31)
	li       r30, -1
	lhz      r0, 0x128(r3)
	cmplwi   r0, 0x40e
	bne      lbl_801E3A60
	li       r30, 0x3a

lbl_801E3A60:
	lwz      r3, 4(r31)
	bl       getAttackDamage__Q24Game4PikiFv
	lwz      r4, 0x10(r31)
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	lis      r3, __vt__Q26PikiAI20StickAttackActionArg@ha
	stw      r0, 0x1c(r1)
	addi     r3, r3, __vt__Q26PikiAI20StickAttackActionArg@l
	li       r0, 0
	stw      r3, 0x1c(r1)
	stfs     f1, 0x20(r1)
	stw      r4, 0x24(r1)
	stw      r30, 0x28(r1)
	stb      r0, 0x2c(r1)
	lhz      r0, 0x128(r4)
	cmplwi   r0, 0x410
	beq      lbl_801E3AAC
	cmplwi   r0, 0x40c
	bne      lbl_801E3AB8

lbl_801E3AAC:
	li       r0, 5
	stb      r0, 0x2c(r1)
	b        lbl_801E3ADC

lbl_801E3AB8:
	cmplwi   r0, 0x40e
	bne      lbl_801E3ACC
	li       r0, 6
	stb      r0, 0x2c(r1)
	b        lbl_801E3ADC

lbl_801E3ACC:
	cmplwi   r0, 0x409
	bne      lbl_801E3ADC
	li       r0, 7
	stb      r0, 0x2c(r1)

lbl_801E3ADC:
	lwz      r3, 0x18(r31)
	addi     r4, r1, 0x1c
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r0, 2
	sth      r0, 0x14(r31)
	b        lbl_801E3BD0

lbl_801E3B00:
	lwz      r3, 0x1c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0
	bne      lbl_801E3BD0
	lwz      r3, 0x10(r31)
	li       r30, -1
	lhz      r0, 0x128(r3)
	cmplwi   r0, 0x40e
	bne      lbl_801E3B34
	li       r30, 0x3a

lbl_801E3B34:
	lwz      r3, 4(r31)
	bl       getAttackDamage__Q24Game4PikiFv
	lwz      r4, 0x10(r31)
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	lis      r3, __vt__Q26PikiAI20StickAttackActionArg@ha
	stw      r0, 8(r1)
	addi     r3, r3, __vt__Q26PikiAI20StickAttackActionArg@l
	li       r0, 0
	stw      r3, 8(r1)
	stfs     f1, 0xc(r1)
	stw      r4, 0x10(r1)
	stw      r30, 0x14(r1)
	stb      r0, 0x18(r1)
	lhz      r0, 0x128(r4)
	cmplwi   r0, 0x410
	beq      lbl_801E3B80
	cmplwi   r0, 0x40c
	bne      lbl_801E3B8C

lbl_801E3B80:
	li       r0, 5
	stb      r0, 0x18(r1)
	b        lbl_801E3BB0

lbl_801E3B8C:
	cmplwi   r0, 0x40e
	bne      lbl_801E3BA0
	li       r0, 6
	stb      r0, 0x18(r1)
	b        lbl_801E3BB0

lbl_801E3BA0:
	cmplwi   r0, 0x409
	bne      lbl_801E3BB0
	li       r0, 7
	stb      r0, 0x18(r1)

lbl_801E3BB0:
	lwz      r3, 0x18(r31)
	addi     r4, r1, 8
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r0, 2
	sth      r0, 0x14(r31)

lbl_801E3BD0:
	li       r3, 1

lbl_801E3BD4:
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E3BEC
 * Size:	00005C
 */
void PikiAI::ActBreakRock::cleanup()
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
	beq      lbl_801E3C20
	b        lbl_801E3C34

lbl_801E3C20:
	lwz      r3, 0x18(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_801E3C34:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801E3C48
 * Size:	0000F0
 */
void PikiAI::ActBreakRock::platCallback(Game::Piki*, Game::PlatEvent&)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	mr       r30, r3
	lhz      r0, 0x14(r3)
	cmplwi   r0, 1
	bne      lbl_801E3D20
	lwz      r3, 0x10(r30)
	li       r31, -1
	lhz      r0, 0x128(r3)
	cmplwi   r0, 0x40e
	bne      lbl_801E3C84
	li       r31, 0x3a

lbl_801E3C84:
	lwz      r3, 4(r30)
	bl       getAttackDamage__Q24Game4PikiFv
	lwz      r4, 0x10(r30)
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	lis      r3, __vt__Q26PikiAI20StickAttackActionArg@ha
	stw      r0, 8(r1)
	addi     r3, r3, __vt__Q26PikiAI20StickAttackActionArg@l
	li       r0, 0
	stw      r3, 8(r1)
	stfs     f1, 0xc(r1)
	stw      r4, 0x10(r1)
	stw      r31, 0x14(r1)
	stb      r0, 0x18(r1)
	lhz      r0, 0x128(r4)
	cmplwi   r0, 0x410
	beq      lbl_801E3CD0
	cmplwi   r0, 0x40c
	bne      lbl_801E3CDC

lbl_801E3CD0:
	li       r0, 5
	stb      r0, 0x18(r1)
	b        lbl_801E3D00

lbl_801E3CDC:
	cmplwi   r0, 0x40e
	bne      lbl_801E3CF0
	li       r0, 6
	stb      r0, 0x18(r1)
	b        lbl_801E3D00

lbl_801E3CF0:
	cmplwi   r0, 0x409
	bne      lbl_801E3D00
	li       r0, 7
	stb      r0, 0x18(r1)

lbl_801E3D00:
	lwz      r3, 0x18(r30)
	addi     r4, r1, 8
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r0, 2
	sth      r0, 0x14(r30)

lbl_801E3D20:
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
 * Address:	801E3D38
 * Size:	0000FC
 */
void PikiAI::ActBreakRock::collisionCallback(Game::Piki*, Game::CollEvent&)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	mr       r30, r3
	lwz      r0, 0(r5)
	lwz      r3, 0x10(r3)
	cmplw    r0, r3
	bne      lbl_801E3E1C
	lhz      r0, 0x14(r30)
	cmplwi   r0, 1
	bne      lbl_801E3E1C
	lhz      r0, 0x128(r3)
	li       r31, -1
	cmplwi   r0, 0x40e
	bne      lbl_801E3D80
	li       r31, 0x3a

lbl_801E3D80:
	lwz      r3, 4(r30)
	bl       getAttackDamage__Q24Game4PikiFv
	lwz      r4, 0x10(r30)
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	lis      r3, __vt__Q26PikiAI20StickAttackActionArg@ha
	stw      r0, 8(r1)
	addi     r3, r3, __vt__Q26PikiAI20StickAttackActionArg@l
	li       r0, 0
	stw      r3, 8(r1)
	stfs     f1, 0xc(r1)
	stw      r4, 0x10(r1)
	stw      r31, 0x14(r1)
	stb      r0, 0x18(r1)
	lhz      r0, 0x128(r4)
	cmplwi   r0, 0x410
	beq      lbl_801E3DCC
	cmplwi   r0, 0x40c
	bne      lbl_801E3DD8

lbl_801E3DCC:
	li       r0, 5
	stb      r0, 0x18(r1)
	b        lbl_801E3DFC

lbl_801E3DD8:
	cmplwi   r0, 0x40e
	bne      lbl_801E3DEC
	li       r0, 6
	stb      r0, 0x18(r1)
	b        lbl_801E3DFC

lbl_801E3DEC:
	cmplwi   r0, 0x409
	bne      lbl_801E3DFC
	li       r0, 7
	stb      r0, 0x18(r1)

lbl_801E3DFC:
	lwz      r3, 0x18(r30)
	addi     r4, r1, 8
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r0, 2
	sth      r0, 0x14(r30)

lbl_801E3E1C:
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
 * Address:	801E3E34
 * Size:	000004
 */
void PikiAI::ActBreakRock::bounceCallback(Game::Piki*, Sys::Triangle*) { }

/*
 * --INFO--
 * Address:	801E3E38
 * Size:	000004
 */
void PikiAI::ActBreakRock::onKeyEvent(const SysShape::KeyEvent&) { }

/*
 * --INFO--
 * Address:	801E3E3C
 * Size:	000014
 */
void PikiAI::ActBreakRock::@48 @4 @onKeyEvent(const SysShape::KeyEvent&)
{
	/*
	li       r11, 4
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -48
	b        onKeyEvent__Q26PikiAI12ActBreakRockFRCQ28SysShape8KeyEvent
	*/
}
