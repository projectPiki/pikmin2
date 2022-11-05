#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047F338
    lbl_8047F338:
        .4byte 0x61637454
        .4byte 0x72616E73
        .4byte 0x706F7274
        .4byte 0x00000000
    .global lbl_8047F348
    lbl_8047F348:
        .4byte lbl_805190D0
        .4byte lbl_805190D8
        .4byte lbl_805190E0
    .global lbl_8047F354
    lbl_8047F354:
        .4byte 0x43415252
        .4byte 0x59202573
        .4byte 0x00000000
        .4byte 0x41637454
        .4byte 0x72616E73
        .4byte 0x706F7274
        .4byte 0x41726700
        .4byte 0x61695472
        .4byte 0x616E7370
        .4byte 0x6F72742E
        .4byte 0x63707000
        .asciz "P2Assert"
        .skip 3
        .4byte 0x41637469
        .4byte 0x6F6E4172
        .4byte 0x67000000
        .4byte 0x43726561
        .4byte 0x74757265
        .4byte 0x00000000
    .global lbl_8047F3A4
    lbl_8047F3A4:
        .4byte 0x50617468
        .4byte 0x4D6F7665
        .4byte 0x41726700
    .global lbl_8047F3B0
    lbl_8047F3B0:
        .4byte 0x476F746F
        .4byte 0x536C6F74
        .4byte 0x41726700
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q26PikiAI11PathMoveArg
    __vt__Q26PikiAI11PathMoveArg:
        .4byte 0
        .4byte 0
        .4byte getName__Q26PikiAI11PathMoveArgFv
    .global __vt__Q26PikiAI11GotoSlotArg
    __vt__Q26PikiAI11GotoSlotArg:
        .4byte 0
        .4byte 0
        .4byte getName__Q26PikiAI11GotoSlotArgFv
    .global __vt__Q26PikiAI12ActTransport
    __vt__Q26PikiAI12ActTransport:
        .4byte 0
        .4byte 0
        .4byte init__Q26PikiAI12ActTransportFPQ26PikiAI9ActionArg
        .4byte exec__Q26PikiAI12ActTransportFv
        .4byte cleanup__Q26PikiAI12ActTransportFv
        .4byte emotion_success__Q26PikiAI12ActTransportFv
        .4byte emotion_fail__Q26PikiAI12ActTransportFv
        .4byte applicable__Q26PikiAI6ActionFv
        .4byte getNextAIType__Q26PikiAI6ActionFv
        .4byte bounceCallback__Q26PikiAI6ActionFPQ24Game4PikiPQ23Sys8Triangle
        .4byte
   collisionCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9CollEvent .4byte
   platCallback__Q26PikiAI6ActionFPQ24Game4PikiRQ24Game9PlatEvent .4byte
   doDirectDraw__Q26PikiAI6ActionFR8Graphics .4byte
   "wallCallback__Q26PikiAI6ActionFR10Vector3<f>" .4byte
   getInfo__Q26PikiAI12ActTransportFPc .4byte
   onKeyEvent__Q26PikiAI12ActTransportFRCQ28SysShape8KeyEvent .4byte 0 .4byte 0
        .4byte
   "@60@4@onKeyEvent__Q26PikiAI12ActTransportFRCQ28SysShape8KeyEvent" .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805190D0
    lbl_805190D0:
        .ascii "SLOT"
        .skip 4
    .global lbl_805190D8
    lbl_805190D8:
        .ascii "LIFT"
        .skip 4
    .global lbl_805190E0
    lbl_805190E0:
        .ascii "MOVE"
        .skip 4
    .global lbl_805190E8
    lbl_805190E8:
        .asciz "Carry"
        .skip 2
    .global lbl_805190F0
    lbl_805190F0:
        .float 0.0
    .global lbl_805190F4
    lbl_805190F4:
        .float 32768.0
    .global lbl_805190F8
    lbl_805190F8:
        .float 5.0
    .global lbl_805190FC
    lbl_805190FC:
        .float 3.0
    .global lbl_80519100
    lbl_80519100:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80519108
    lbl_80519108:
        .float 11.0
*/

/*
 * --INFO--
 * Address:	801A1914
 * Size:	000064
 */
void PikiAI::ActTransport::getInfo(char*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, lbl_8047F348@ha
	stw      r0, 0x24(r1)
	addi     r6, r5, lbl_8047F348@l
	lwz      r5, 0(r6)
	lhz      r0, 0x18(r3)
	lis      r3, lbl_8047F354@ha
	lwz      r8, 4(r6)
	lwz      r7, 8(r6)
	slwi     r0, r0, 2
	stw      r5, 8(r1)
	addi     r6, r3, lbl_8047F354@l
	mr       r3, r4
	addi     r5, r1, 8
	stw      r8, 0xc(r1)
	mr       r4, r6
	stw      r7, 0x10(r1)
	lwzx     r5, r5, r0
	crclr    6
	bl       sprintf
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A1978
 * Size:	0000D0
 */
PikiAI::ActTransport::ActTransport(Game::Piki* p)
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
	beq      lbl_801A19B0
	addi     r0, r31, 0x3c
	lis      r3, __vt__Q28SysShape14MotionListener@ha
	stw      r0, 0xc(r31)
	addi     r0, r3, __vt__Q28SysShape14MotionListener@l
	stw      r0, 0x3c(r31)

lbl_801A19B0:
	mr       r3, r31
	mr       r4, r30
	bl       __ct__Q26PikiAI6ActionFPQ24Game4Piki
	lis      r3, __vt__Q26PikiAI12ActTransport@ha
	addi     r0, r31, 0x3c
	addi     r4, r3, __vt__Q26PikiAI12ActTransport@l
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
	beq      lbl_801A1A00
	mr       r4, r30
	bl       __ct__Q26PikiAI11ActGotoSlotFPQ24Game4Piki
	mr       r0, r3

lbl_801A1A00:
	stw      r0, 0x2c(r31)
	li       r3, 0xbc
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_801A1A20
	mr       r4, r30
	bl       __ct__Q26PikiAI11ActPathMoveFPQ24Game4Piki
	mr       r0, r3

lbl_801A1A20:
	stw      r0, 0x30(r31)
	addi     r0, r2, lbl_805190E8@sda21
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
 * Address:	801A1A48
 * Size:	00017C
 */
void PikiAI::ActTransport::init(PikiAI::ActionArg*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r5, workPikis__Q24Game8GameStat@ha
	lis      r6, lbl_8047F338@ha
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	addi     r3, r5, workPikis__Q24Game8GameStat@l
	stw      r30, 0x28(r1)
	addi     r30, r6, lbl_8047F338@l
	stw      r29, 0x24(r1)
	stw      r28, 0x20(r1)
	mr       r28, r4
	lwz      r4, 4(r31)
	bl       inc__Q34Game8GameStat15PikiNaviCounterFPQ24Game4Piki
	cmplwi   r28, 0
	li       r29, 0
	beq      lbl_801A1AC0
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	addi     r3, r30, 0x28
	bl       strcmp
	cntlzw   r0, r3
	rlwinm.  r0, r0, 0x1b, 0x18, 0x1f
	beq      lbl_801A1AC0
	li       r29, 1

lbl_801A1AC0:
	clrlwi.  r0, r29, 0x18
	bne      lbl_801A1ADC
	addi     r3, r30, 0x38
	addi     r5, r30, 0x48
	li       r4, 0xaf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801A1ADC:
	lwz      r0, 4(r28)
	li       r4, 0x1f
	li       r5, 0x1f
	li       r6, 0
	stw      r0, 0x10(r31)
	li       r7, 0
	lwz      r0, 8(r28)
	stw      r0, 0x14(r31)
	lfs      f0, 0xc(r28)
	stfs     f0, 0x1c(r31)
	lfs      f0, 0x10(r28)
	stfs     f0, 0x20(r31)
	lfs      f0, 0x14(r28)
	stfs     f0, 0x24(r31)
	lha      r0, 0x18(r28)
	sth      r0, 0x28(r31)
	lwz      r3, 4(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	lwz      r7, 4(r31)
	lis      r4, __vt__Q26PikiAI9ActionArg@ha
	lfs      f0, lbl_805190F0@sda21(r2)
	lis      r3, __vt__Q26PikiAI11GotoSlotArg@ha
	li       r6, 0
	addi     r5, r4, __vt__Q26PikiAI9ActionArg@l
	stfs     f0, 0x1e4(r7)
	addi     r3, r3, __vt__Q26PikiAI11GotoSlotArg@l
	li       r0, 1
	addi     r4, r1, 8
	stfs     f0, 0x1e8(r7)
	stfs     f0, 0x1ec(r7)
	sth      r6, 0x18(r31)
	lwz      r6, 0x10(r31)
	stw      r5, 8(r1)
	stw      r3, 8(r1)
	stw      r6, 0xc(r1)
	stb      r0, 0x10(r1)
	lwz      r3, 0x2c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r3, 0
	li       r0, 1
	stb      r3, 0x34(r31)
	stb      r3, 0x38(r31)
	stb      r3, 0x39(r31)
	stb      r0, 0x3a(r31)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A1BC4
 * Size:	000044
 */
void PikiAI::ActTransport::emotion_success(void)
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
 * Address:	801A1C08
 * Size:	000004
 */
void PikiAI::ActTransport::emotion_fail(void) { }

/*
 * --INFO--
 * Address:	801A1C0C
 * Size:	0003E8
 */
void PikiAI::ActTransport::exec(void)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	mr       r30, r3
	stw      r29, 0x34(r1)
	stw      r28, 0x30(r1)
	lwz      r3, 0x10(r3)
	cmplwi   r3, 0
	beq      lbl_801A1C6C
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A1C6C
	lwz      r3, 4(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x1ac(r12)
	mtctr    r12
	bctrl
	li       r3, 0
	b        lbl_801A1FD4

lbl_801A1C6C:
	lwz      r3, 0x10(r30)
	cmplwi   r3, 0
	beq      lbl_801A1C8C
	lwz      r0, 0xb8(r3)
	cmplwi   r0, 0
	beq      lbl_801A1C8C
	li       r31, 1
	b        lbl_801A1C90

lbl_801A1C8C:
	li       r31, 0

lbl_801A1C90:
	lhz      r0, 0x18(r30)
	cmpwi    r0, 1
	beq      lbl_801A1D08
	bge      lbl_801A1CAC
	cmpwi    r0, 0
	bge      lbl_801A1CB8
	b        lbl_801A1FCC

lbl_801A1CAC:
	cmpwi    r0, 3
	bge      lbl_801A1FCC
	b        lbl_801A1D2C

lbl_801A1CB8:
	clrlwi.  r0, r31, 0x18
	beq      lbl_801A1CCC
	stb      r31, 0x3a(r30)
	li       r3, 2
	b        lbl_801A1FD4

lbl_801A1CCC:
	lwz      r3, 0x2c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0
	bne      lbl_801A1CF4
	mr       r3, r30
	bl       initLift__Q26PikiAI12ActTransportFv
	b        lbl_801A1FCC

lbl_801A1CF4:
	cmpwi    r3, 2
	bne      lbl_801A1FCC
	stb      r31, 0x3a(r30)
	li       r3, 2
	b        lbl_801A1FD4

lbl_801A1D08:
	clrlwi.  r0, r31, 0x18
	bne      lbl_801A1D20
	stb      r31, 0x3a(r30)
	mr       r3, r30
	bl       execLift__Q26PikiAI12ActTransportFv
	b        lbl_801A1FD4

lbl_801A1D20:
	stb      r31, 0x3a(r30)
	li       r3, 1
	b        lbl_801A1FD4

lbl_801A1D2C:
	clrlwi.  r0, r31, 0x18
	beq      lbl_801A1D8C
	lwz      r3, 4(r30)
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A1D80
	lbz      r0, 0x38(r30)
	cmplwi   r0, 0
	beq      lbl_801A1D6C
	lwz      r3, 0x30(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stb      r0, 0x38(r30)

lbl_801A1D6C:
	lwz      r3, 4(r30)
	bl       finishMotion__Q24Game8FakePikiFv
	stb      r31, 0x3a(r30)
	li       r3, 0
	b        lbl_801A1FD4

lbl_801A1D80:
	stb      r31, 0x3a(r30)
	li       r3, 1
	b        lbl_801A1FD4

lbl_801A1D8C:
	lbz      r0, 0x3a(r30)
	cmplwi   r0, 0
	beq      lbl_801A1DC0
	lbz      r0, 0x39(r30)
	cmplwi   r0, 0
	beq      lbl_801A1DC0
	lwz      r3, 0x30(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stb      r0, 0x39(r30)

lbl_801A1DC0:
	lwz      r28, 0x10(r30)
	mr       r3, r28
	bl       getTotalCarryPikmins__Q24Game6PelletFv
	mr       r29, r3
	mr       r3, r28
	bl       getPelletConfigMin__Q24Game6PelletFv
	cmpw     r29, r3
	bge      lbl_801A1E20
	lwz      r3, 0x10(r30)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14c(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r28)
	lis      r4, "zero__10Vector3<f>"@ha
	mr       r3, r28
	lwz      r12, 0x68(r12)
	addi     r4, r4, "zero__10Vector3<f>"@l
	mtctr    r12
	bctrl
	stb      r31, 0x3a(r30)
	li       r3, 2
	b        lbl_801A1FD4

lbl_801A1E20:
	mr       r3, r30
	bl       isStickLeader__Q26PikiAI12ActTransportFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A1F58
	lbz      r0, 0x39(r30)
	cmplwi   r0, 0
	bne      lbl_801A1ECC
	lwz      r3, 0x10(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x1a8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x10(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x1ac(r12)
	mtctr    r12
	bctrl
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	lha      r6, 0x28(r30)
	lwz      r5, 0x10(r30)
	addi     r4, r3, __vt__Q26PikiAI9ActionArg@l
	lis      r3, __vt__Q26PikiAI11PathMoveArg@ha
	li       r0, 0
	stw      r4, 0x10(r1)
	addi     r3, r3, __vt__Q26PikiAI11PathMoveArg@l
	addi     r4, r1, 0x10
	stw      r3, 0x10(r1)
	stw      r5, 0x14(r1)
	lfs      f0, 0x1c(r30)
	stfs     f0, 0x18(r1)
	lfs      f0, 0x20(r30)
	stfs     f0, 0x1c(r1)
	lfs      f0, 0x24(r30)
	stfs     f0, 0x20(r1)
	sth      r6, 0x24(r1)
	stw      r0, 0x28(r1)
	lwz      r3, 0x30(r30)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r0, 1
	stb      r0, 0x39(r30)

lbl_801A1ECC:
	lwz      r3, 0x30(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	li       r0, 1
	cmpwi    r3, 0
	stb      r0, 0x38(r30)
	bne      lbl_801A1FCC
	lwz      r3, 0x30(r30)
	li       r4, 1
	lwz      r0, 0x34(r3)
	stw      r0, 0x14(r30)
	lwz      r3, 0x10(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x14c(r12)
	mtctr    r12
	bctrl
	lwz      r5, 0x14(r30)
	lis      r3, __vt__Q24Game11Interaction@ha
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lis      r3, __vt__Q24Game12InteractSuck@ha
	stw      r0, 8(r1)
	addi     r0, r3, __vt__Q24Game12InteractSuck@l
	addi     r4, r1, 8
	stw      r5, 0xc(r1)
	stw      r0, 8(r1)
	lwz      r3, 0x10(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	stb      r31, 0x3a(r30)
	li       r3, 0
	b        lbl_801A1FD4

lbl_801A1F58:
	lwz      r3, 4(r30)
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A1FA4
	lbz      r0, 0x38(r30)
	cmplwi   r0, 0
	beq      lbl_801A1F90
	lwz      r3, 0x30(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stb      r0, 0x38(r30)

lbl_801A1F90:
	lwz      r3, 4(r30)
	bl       finishMotion__Q24Game8FakePikiFv
	stb      r31, 0x3a(r30)
	li       r3, 0
	b        lbl_801A1FD4

lbl_801A1FA4:
	lbz      r0, 0x39(r30)
	cmplwi   r0, 0
	beq      lbl_801A1FCC
	lwz      r3, 0x30(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stb      r0, 0x39(r30)

lbl_801A1FCC:
	stb      r31, 0x3a(r30)
	li       r3, 1

lbl_801A1FD4:
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	lwz      r28, 0x30(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A1FF4
 * Size:	000078
 */
void PikiAI::ActTransport::cleanup(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lbz      r0, 0x39(r3)
	cmplwi   r0, 0
	beq      lbl_801A2028
	lwz      r3, 0x30(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_801A2028:
	lis      r3, workPikis__Q24Game8GameStat@ha
	lwz      r4, 4(r31)
	addi     r3, r3, workPikis__Q24Game8GameStat@l
	bl       dec__Q34Game8GameStat15PikiNaviCounterFPQ24Game4Piki
	lwz      r3, 4(r31)
	bl       endStick__Q24Game8CreatureFv
	lwz      r4, 4(r31)
	addi     r3, r1, 8
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A206C
 * Size:	00011C
 */
void PikiAI::ActTransport::onKeyEvent(SysShape::KeyEvent const&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 4(r3)
	lwz      r3, 0x1b8(r3)
	cmplwi   r3, 0
	beq      lbl_801A209C
	lha      r5, 0x20(r3)

lbl_801A209C:
	lwz      r0, 0x1c(r4)
	cmpwi    r0, 2
	beq      lbl_801A20C4
	bge      lbl_801A20B8
	cmpwi    r0, 1
	bge      lbl_801A20DC
	b        lbl_801A2170

lbl_801A20B8:
	cmpwi    r0, 0x3e8
	beq      lbl_801A215C
	b        lbl_801A2170

lbl_801A20C4:
	extsh    r0, r5
	cmpwi    r0, 0x28
	bne      lbl_801A2170
	li       r0, 1
	stb      r0, 0x34(r30)
	b        lbl_801A2170

lbl_801A20DC:
	lwz      r31, 0x10(r30)
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A2110
	lwz      r3, 4(r30)
	mr       r4, r31
	li       r5, 0x282e
	li       r6, 1
	bl       startSound__Q24Game4PikiFPQ24Game8CreatureUlQ36PSGame5SeMgr7SetSeId

lbl_801A2110:
	lhz      r0, 0x18(r30)
	cmplwi   r0, 1
	bne      lbl_801A2170
	lwz      r3, 0x10(r30)
	bl       getTotalCarryPikmins__Q24Game6PelletFv
	mr       r31, r3
	lwz      r3, 0x10(r30)
	bl       getPelletConfigMin__Q24Game6PelletFv
	cmpw     r31, r3
	bge      lbl_801A2170
	lha      r3, 0x36(r30)
	addi     r0, r3, -1
	sth      r0, 0x36(r30)
	lha      r0, 0x36(r30)
	cmpwi    r0, 0
	bge      lbl_801A2170
	lwz      r3, 4(r30)
	bl       finishMotion__Q24Game8FakePikiFv
	b        lbl_801A2170

lbl_801A215C:
	lhz      r0, 0x18(r30)
	cmplwi   r0, 1
	bne      lbl_801A2170
	mr       r3, r30
	bl       initLift__Q26PikiAI12ActTransportFv

lbl_801A2170:
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
 * Address:	........
 * Size:	000068
 */
void PikiAI::ActTransport::getNumStickers(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801A2188
 * Size:	00009C
 */
void PikiAI::ActTransport::isStickLeader(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r3, 4(r3)
	lwz      r3, 0xf4(r3)
	cmplwi   r3, 0
	beq      lbl_801A2204
	lwz      r30, 0xf0(r3)
	li       r31, 0
	b        lbl_801A21E8

lbl_801A21C0:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A21E4
	mr       r31, r30
	b        lbl_801A21F0

lbl_801A21E4:
	lwz      r30, 0xfc(r30)

lbl_801A21E8:
	cmplwi   r30, 0
	bne      lbl_801A21C0

lbl_801A21F0:
	lwz      r0, 4(r29)
	cmplw    r31, r0
	bne      lbl_801A2204
	li       r3, 1
	b        lbl_801A2208

lbl_801A2204:
	li       r3, 0

lbl_801A2208:
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
 * Address:	801A2224
 * Size:	0000BC
 */
void PikiAI::ActTransport::initLift(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	li       r0, 1
	stw      r31, 0x1c(r1)
	or.      r31, r3, r3
	sth      r0, 0x18(r3)
	mr       r6, r31
	beq      lbl_801A224C
	lwz      r6, 0xc(r31)

lbl_801A224C:
	lwz      r3, 4(r31)
	li       r4, 0x28
	li       r5, 0x28
	li       r7, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stb      r0, 0x34(r31)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	li       r5, 0x282c
	lfd      f3, lbl_80519100@sda21(r2)
	li       r6, 1
	stw      r0, 8(r1)
	lfs      f2, lbl_805190F4@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f1, lbl_805190FC@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_805190F8@sda21(r2)
	fdivs    f2, f3, f2
	fmadds   f0, f1, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	sth      r0, 0x36(r31)
	lwz      r3, 4(r31)
	lwz      r4, 0x10(r31)
	bl       startSound__Q24Game4PikiFPQ24Game8CreatureUlQ36PSGame5SeMgr7SetSeId
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A22E0
 * Size:	000414
 */
void PikiAI::ActTransport::execLift(void)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	li       r4, 0x28
	stw      r0, 0x64(r1)
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	mr       r30, r3
	stw      r29, 0x54(r1)
	lwz      r3, 4(r3)
	bl       assertMotion__Q24Game8FakePikiFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A2318
	li       r3, 2
	b        lbl_801A26D8

lbl_801A2318:
	lwz      r4, 0x10(r30)
	addi     r3, r1, 0x34
	li       r31, 0
	bl       __ct__Q24Game8StickersFPQ24Game8Creature
	li       r0, 0
	lis      r3, "__vt__26Iterator<Q24Game8Creature>"@ha
	addi     r4, r3, "__vt__26Iterator<Q24Game8Creature>"@l
	addi     r3, r1, 0x34
	cmplwi   r0, 0
	stw      r4, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801A2368
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801A2514

lbl_801A2368:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801A23D4

lbl_801A2380:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A2514
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801A23D4:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A2380
	b        lbl_801A2514

lbl_801A23F4:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r29, r3
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A2458
	mr       r3, r29
	bl       getCurrActionID__Q24Game4PikiFv
	cmpwi    r3, 4
	bne      lbl_801A2458
	mr       r3, r29
	bl       getCurrAction__Q24Game4PikiFv
	lbz      r0, 0x34(r3)
	cmplwi   r0, 0
	beq      lbl_801A2458
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lbz      r4, 0x2b8(r29)
	bl       getColorTransportScale__Q24Game7PikiMgrFi
	add      r31, r31, r3

lbl_801A2458:
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801A2484
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801A2514

lbl_801A2484:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801A24F8

lbl_801A24A4:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A2514
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801A24F8:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A24A4

lbl_801A2514:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801A23F4
	lbz      r0, 0x34(r30)
	lwz      r3, 0x10(r30)
	cmplwi   r0, 0
	beq      lbl_801A26C8
	bl       getPelletConfigMin__Q24Game6PelletFv
	cmpw     r31, r3
	blt      lbl_801A26C8
	cmplwi   r30, 0
	mr       r6, r30
	beq      lbl_801A2560
	lwz      r6, 0xc(r30)

lbl_801A2560:
	lwz      r3, 4(r30)
	li       r4, 0x29
	li       r5, 0x29
	li       r7, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	lwz      r3, 4(r30)
	bl       enableMotionBlend__Q24Game8FakePikiFv
	lwz      r3, 4(r30)
	lfs      f1, lbl_80519108@sda21(r2)
	addi     r3, r3, 0x1ac
	bl       setCurrFrame__Q28SysShape8AnimatorFf
	lwz      r3, 4(r30)
	lfs      f1, lbl_80519108@sda21(r2)
	addi     r3, r3, 0x1c8
	bl       setCurrFrame__Q28SysShape8AnimatorFf
	li       r0, 2
	sth      r0, 0x18(r30)
	lwz      r3, 4(r30)
	lwz      r3, 0xf4(r3)
	cmplwi   r3, 0
	beq      lbl_801A2610
	lwz      r31, 0xf0(r3)
	li       r29, 0
	b        lbl_801A25F4

lbl_801A25CC:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801A25F0
	mr       r29, r31
	b        lbl_801A25FC

lbl_801A25F0:
	lwz      r31, 0xfc(r31)

lbl_801A25F4:
	cmplwi   r31, 0
	bne      lbl_801A25CC

lbl_801A25FC:
	lwz      r0, 4(r30)
	cmplw    r29, r0
	bne      lbl_801A2610
	li       r0, 1
	b        lbl_801A2614

lbl_801A2610:
	li       r0, 0

lbl_801A2614:
	clrlwi.  r0, r0, 0x18
	beq      lbl_801A26C8
	lwz      r3, 0x10(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801A264C
	lwz      r3, 4(r30)
	li       r5, 0x282d
	lwz      r4, 0x10(r30)
	li       r6, 0
	bl       startSound__Q24Game4PikiFPQ24Game8CreatureUlb

lbl_801A264C:
	lwz      r3, 0x10(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x148(r12)
	mtctr    r12
	bctrl
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	lha      r6, 0x28(r30)
	lwz      r5, 0x10(r30)
	addi     r4, r3, __vt__Q26PikiAI9ActionArg@l
	lis      r3, __vt__Q26PikiAI11PathMoveArg@ha
	li       r0, 0
	stw      r4, 0x18(r1)
	addi     r3, r3, __vt__Q26PikiAI11PathMoveArg@l
	addi     r4, r1, 0x18
	stw      r3, 0x18(r1)
	stw      r5, 0x1c(r1)
	lfs      f0, 0x1c(r30)
	stfs     f0, 0x20(r1)
	lfs      f0, 0x20(r30)
	stfs     f0, 0x24(r1)
	lfs      f0, 0x24(r30)
	stfs     f0, 0x28(r1)
	sth      r6, 0x2c(r1)
	stw      r0, 0x30(r1)
	lwz      r3, 0x30(r30)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r0, 1
	stb      r0, 0x39(r30)

lbl_801A26C8:
	addi     r3, r1, 0x34
	li       r4, -1
	bl       __dt__Q24Game8StickersFv
	li       r3, 1

lbl_801A26D8:
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	lwz      r29, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A26F4
 * Size:	00000C
 */
void PikiAI::PathMoveArg::getName(void)
{
	/*
	lis      r3, lbl_8047F3A4@ha
	addi     r3, r3, lbl_8047F3A4@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A2700
 * Size:	00000C
 */
void PikiAI::GotoSlotArg::getName(void)
{
	/*
	lis      r3, lbl_8047F3B0@ha
	addi     r3, r3, lbl_8047F3B0@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	801A270C
 * Size:	000014
 */
void @60 @4 @PikiAI::ActTransport::onKeyEvent(SysShape::KeyEvent const&)
{
	/*
	li       r11, 4
	lwzx     r11, r3, r11
	add      r3, r3, r11
	addi     r3, r3, -60
	b        onKeyEvent__Q26PikiAI12ActTransportFRCQ28SysShape8KeyEvent
	*/
}
