#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_aiAction_cpp

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804B4A60
    lbl_804B4A60:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q26PikiAI6Action
    __vt__Q26PikiAI6Action:
        .4byte 0
        .4byte 0
        .4byte init__Q26PikiAI6ActionFPQ26PikiAI9ActionArg
        .4byte exec__Q26PikiAI6ActionFv
        .4byte cleanup__Q26PikiAI6ActionFv
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
   getInfo__Q26PikiAI6ActionFPc

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_805159D8
    lbl_805159D8:
        .skip 0x4
    .global lbl_805159DC
    lbl_805159DC:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80518F48
    lbl_80518F48:
        .4byte 0x41637469
        .4byte 0x6F6E0000
    .global lbl_80518F50
    lbl_80518F50:
        .4byte 0x25730000
    .global lbl_80518F54
    lbl_80518F54:
        .4byte 0x43960000
    .global lbl_80518F58
    lbl_80518F58:
        .4byte 0x00000000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	80196A18
 * Size:	00001C
 */
PikiAI::Action::Action(Game::Piki* p)
{
	_04 = piki;
	_08 = "Action";
	/*
	.loc_0x0:
	  lis       r5, 0x804B
	  subi      r0, r2, 0x5418
	  addi      r5, r5, 0x4A6C
	  stw       r5, 0x0(r3)
	  stw       r4, 0x4(r3)
	  stw       r0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80196A34
 * Size:	000030
 */
void PikiAI::Action::getInfo(char* dest)
{
	// dest = Action
	sprintf(dest, "%s", _08);
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r5, 0x8(r3)
	  mr        r3, r4
	  subi      r4, r2, 0x5410
	  crclr     6, 0x6
	  bl        -0xCF618
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80196A64
 * Size:	000280
 */
PikiAI::Brain::Brain(Game::Piki* p)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	mr       r30, r4
	stw      r0, 4(r3)
	li       r3, 0x38
	bl       __nwa__FUl
	stw      r3, 0(r31)
	li       r3, 0x74
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80196AB4
	mr       r5, r30
	li       r4, 1
	bl       __ct__Q26PikiAI12ActFormationFPQ24Game4Piki
	mr       r4, r3

lbl_80196AB4:
	mr       r3, r31
	bl       addAction__Q26PikiAI5BrainFPQ26PikiAI6Action
	li       r3, 0x28
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80196ADC
	mr       r5, r30
	li       r4, 1
	bl       __ct__Q26PikiAI7ActFreeFPQ24Game4Piki
	mr       r4, r3

lbl_80196ADC:
	mr       r3, r31
	bl       addAction__Q26PikiAI5BrainFPQ26PikiAI6Action
	li       r3, 0x68
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80196B04
	mr       r5, r30
	li       r4, 1
	bl       __ct__Q26PikiAI8ActEnterFPQ24Game4Piki
	mr       r4, r3

lbl_80196B04:
	mr       r3, r31
	bl       addAction__Q26PikiAI5BrainFPQ26PikiAI6Action
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80196B28
	mr       r4, r30
	bl       __ct__Q26PikiAI7ActExitFPQ24Game4Piki
	mr       r4, r3

lbl_80196B28:
	mr       r3, r31
	bl       addAction__Q26PikiAI5BrainFPQ26PikiAI6Action
	li       r3, 0x44
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80196B50
	mr       r5, r30
	li       r4, 1
	bl       __ct__Q26PikiAI12ActTransportFPQ24Game4Piki
	mr       r4, r3

lbl_80196B50:
	mr       r3, r31
	bl       addAction__Q26PikiAI5BrainFPQ26PikiAI6Action
	li       r3, 0x40
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80196B78
	mr       r5, r30
	li       r4, 1
	bl       __ct__Q26PikiAI9ActAttackFPQ24Game4Piki
	mr       r4, r3

lbl_80196B78:
	mr       r3, r31
	bl       addAction__Q26PikiAI5BrainFPQ26PikiAI6Action
	li       r3, 0x3c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80196BA0
	mr       r5, r30
	li       r4, 1
	bl       __ct__Q26PikiAI12ActBreakGateFPQ24Game4Piki
	mr       r4, r3

lbl_80196BA0:
	mr       r3, r31
	bl       addAction__Q26PikiAI5BrainFPQ26PikiAI6Action
	li       r3, 0x38
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80196BC8
	mr       r5, r30
	li       r4, 1
	bl       __ct__Q26PikiAI12ActBreakRockFPQ24Game4Piki
	mr       r4, r3

lbl_80196BC8:
	mr       r3, r31
	bl       addAction__Q26PikiAI5BrainFPQ26PikiAI6Action
	li       r3, 0x48
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80196BF0
	mr       r5, r30
	li       r4, 1
	bl       __ct__Q26PikiAI7ActCropFPQ24Game4Piki
	mr       r4, r3

lbl_80196BF0:
	mr       r3, r31
	bl       addAction__Q26PikiAI5BrainFPQ26PikiAI6Action
	li       r3, 0x34
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80196C14
	mr       r4, r30
	bl       __ct__Q26PikiAI7ActWeedFPQ24Game4Piki
	mr       r4, r3

lbl_80196C14:
	mr       r3, r31
	bl       addAction__Q26PikiAI5BrainFPQ26PikiAI6Action
	li       r3, 0x3c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80196C3C
	mr       r5, r30
	li       r4, 1
	bl       __ct__Q26PikiAI9ActBridgeFPQ24Game4Piki
	mr       r4, r3

lbl_80196C3C:
	mr       r3, r31
	bl       addAction__Q26PikiAI5BrainFPQ26PikiAI6Action
	li       r3, 0x50
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80196C64
	mr       r5, r30
	li       r4, 1
	bl       __ct__Q26PikiAI7ActTekiFPQ24Game4Piki
	mr       r4, r3

lbl_80196C64:
	mr       r3, r31
	bl       addAction__Q26PikiAI5BrainFPQ26PikiAI6Action
	li       r3, 0x30
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80196C8C
	mr       r5, r30
	li       r4, 1
	bl       __ct__Q26PikiAI9ActRescueFPQ24Game4Piki
	mr       r4, r3

lbl_80196C8C:
	mr       r3, r31
	bl       addAction__Q26PikiAI5BrainFPQ26PikiAI6Action
	li       r3, 0x28
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_80196CB4
	mr       r5, r30
	li       r4, 1
	bl       __ct__Q26PikiAI9ActBattleFPQ24Game4Piki
	mr       r4, r3

lbl_80196CB4:
	mr       r3, r31
	bl       addAction__Q26PikiAI5BrainFPQ26PikiAI6Action
	li       r0, -1
	mr       r3, r31
	stw      r0, 8(r31)
	stw      r30, 0xc(r31)
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
 * Address:	80196CE4
 * Size:	00001C
 */
void PikiAI::Brain::addAction(PikiAI::Action*)
{
	/*
	lwz      r6, 4(r3)
	lwz      r7, 0(r3)
	addi     r5, r6, 1
	slwi     r0, r6, 2
	stw      r5, 4(r3)
	stwx     r4, r7, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80196D00
 * Size:	000024
 */
void PikiAI::Brain::getCurrAction(void)
{
	/*
	lwz      r0, 8(r3)
	cmpwi    r0, -1
	beq      lbl_80196D1C
	lwz      r3, 0(r3)
	slwi     r0, r0, 2
	lwzx     r3, r3, r0
	blr

lbl_80196D1C:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void PikiAI::Brain::init(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80196D24
 * Size:	000258
 */
void PikiAI::Brain::exec(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	mr       r30, r3
	lwz      r0, 8(r3)
	cmpwi    r0, -1
	beq      lbl_80196D58
	lwz      r3, 0(r30)
	slwi     r0, r0, 2
	lwzx     r31, r3, r0
	b        lbl_80196D5C

lbl_80196D58:
	li       r31, 0

lbl_80196D5C:
	cmplwi   r31, 0
	beq      lbl_80196F64
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0
	bne      lbl_80196E70
	li       r3, 0
	li       r0, 1
	stb      r3, 0xc(r1)
	addi     r4, r1, 0xc
	stb      r3, 0xd(r1)
	stb      r0, 0xc(r1)
	lwz      r3, 0xc(r30)
	bl       invokeAIFree__Q24Game4PikiFRQ34Game4Piki15InvokeAIFreeArg
	clrlwi.  r0, r3, 0x18
	bne      lbl_80196E58
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 1
	beq      lbl_80196E48
	bge      lbl_80196E58
	cmpwi    r3, 0
	bge      lbl_80196DD4
	b        lbl_80196E58

lbl_80196DD4:
	mr       r3, r30
	bl       searchOrima__Q26PikiAI5BrainFv
	cmplwi   r3, 0
	beq      lbl_80196E34
	lwz      r7, 0xc(r30)
	lis      r6, __vt__Q26PikiAI9ActionArg@ha
	lis      r5, __vt__Q26PikiAI17CreatureActionArg@ha
	lis      r4, __vt__Q26PikiAI19ActFormationInitArg@ha
	stw      r3, 0x2c4(r7)
	li       r0, 0
	addi     r6, r6, __vt__Q26PikiAI9ActionArg@l
	addi     r7, r5, __vt__Q26PikiAI17CreatureActionArg@l
	stw      r6, 0x1c(r1)
	addi     r6, r4, __vt__Q26PikiAI19ActFormationInitArg@l
	addi     r5, r1, 0x1c
	li       r4, 0
	stw      r7, 0x1c(r1)
	stw      r3, 0x20(r1)
	mr       r3, r30
	stw      r6, 0x1c(r1)
	stb      r0, 0x24(r1)
	stb      r0, 0x25(r1)
	bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
	b        lbl_80196E58

lbl_80196E34:
	mr       r3, r30
	li       r4, 1
	li       r5, 0
	bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
	b        lbl_80196E58

lbl_80196E48:
	mr       r3, r30
	li       r4, 1
	li       r5, 0
	bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg

lbl_80196E58:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	b        lbl_80196F64

lbl_80196E70:
	cmpwi    r3, 2
	bne      lbl_80196F64
	li       r3, 0
	li       r0, 1
	stb      r3, 8(r1)
	addi     r4, r1, 8
	stb      r3, 9(r1)
	stb      r0, 8(r1)
	lwz      r3, 0xc(r30)
	bl       invokeAIFree__Q24Game4PikiFRQ34Game4Piki15InvokeAIFreeArg
	clrlwi.  r0, r3, 0x18
	bne      lbl_80196F50
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 1
	beq      lbl_80196F40
	bge      lbl_80196F50
	cmpwi    r3, 0
	bge      lbl_80196ECC
	b        lbl_80196F50

lbl_80196ECC:
	mr       r3, r30
	bl       searchOrima__Q26PikiAI5BrainFv
	cmplwi   r3, 0
	beq      lbl_80196F2C
	lwz      r7, 0xc(r30)
	lis      r6, __vt__Q26PikiAI9ActionArg@ha
	lis      r5, __vt__Q26PikiAI17CreatureActionArg@ha
	lis      r4, __vt__Q26PikiAI19ActFormationInitArg@ha
	stw      r3, 0x2c4(r7)
	li       r0, 0
	addi     r6, r6, __vt__Q26PikiAI9ActionArg@l
	addi     r7, r5, __vt__Q26PikiAI17CreatureActionArg@l
	stw      r6, 0x10(r1)
	addi     r6, r4, __vt__Q26PikiAI19ActFormationInitArg@l
	addi     r5, r1, 0x10
	li       r4, 0
	stw      r7, 0x10(r1)
	stw      r3, 0x14(r1)
	mr       r3, r30
	stw      r6, 0x10(r1)
	stb      r0, 0x18(r1)
	stb      r0, 0x19(r1)
	bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
	b        lbl_80196F50

lbl_80196F2C:
	mr       r3, r30
	li       r4, 1
	li       r5, 0
	bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
	b        lbl_80196F50

lbl_80196F40:
	mr       r3, r30
	li       r4, 1
	li       r5, 0
	bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg

lbl_80196F50:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl

lbl_80196F64:
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
 * Address:	80196F7C
 * Size:	000004
 */
void PikiAI::Action::emotion_fail(void) { }

/*
 * --INFO--
 * Address:	80196F80
 * Size:	000004
 */
void PikiAI::Action::emotion_success(void) { }

/*
 * --INFO--
 * Address:	80196F84
 * Size:	000008
 */
u32 PikiAI::Action::getNextAIType(void) { return 0x0; }

/*
 * --INFO--
 * Address:	80196F8C
 * Size:	000008
 */
u32 PikiAI::Action::exec(void) { return 0x1; }

/*
 * --INFO--
 * Address:	80196F94
 * Size:	000100
 */
void PikiAI::Brain::start(int, PikiAI::ActionArg*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r5
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r4, 0xc(r3)
	lwz      r0, 0xbc(r4)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	bne      lbl_80196FD4
	li       r0, -1
	stw      r0, 8(r29)
	b        lbl_80197078

lbl_80196FD4:
	lwz      r0, 8(r29)
	cmpwi    r0, -1
	beq      lbl_80196FF0
	lwz      r3, 0(r29)
	slwi     r0, r0, 2
	lwzx     r3, r3, r0
	b        lbl_80196FF4

lbl_80196FF0:
	li       r3, 0

lbl_80196FF4:
	cmplwi   r3, 0
	beq      lbl_8019700C
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_8019700C:
	stw      r31, 8(r29)
	lwz      r0, 8(r29)
	cmpwi    r0, -1
	beq      lbl_8019702C
	lwz      r3, 0(r29)
	slwi     r0, r0, 2
	lwzx     r31, r3, r0
	b        lbl_80197030

lbl_8019702C:
	li       r31, 0

lbl_80197030:
	cmplwi   r31, 0
	beq      lbl_80197050
	mr       r3, r31
	mr       r4, r30
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80197050:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80197074
	li       r3, 0
	b        lbl_80197078

lbl_80197074:
	li       r3, 1

lbl_80197078:
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
 * Address:	80197094
 * Size:	000008
 */
u32 PikiAI::Action::applicable(void) { return 0x1; }

/*
 * --INFO--
 * Address:	8019709C
 * Size:	000004
 */
void PikiAI::Action::init(PikiAI::ActionArg*) { }

/*
 * --INFO--
 * Address:	801970A0
 * Size:	000210
 */
void PikiAI::Brain::searchOrima(void)
{
	/*
	stwu     r1, -0xb0(r1)
	mflr     r0
	stw      r0, 0xb4(r1)
	stfd     f31, 0xa0(r1)
	psq_st   f31, 168(r1), 0, qr0
	stw      r31, 0x9c(r1)
	stw      r30, 0x98(r1)
	stw      r29, 0x94(r1)
	mr       r30, r3
	addi     r3, r1, 0x20
	bl       __ct__Q24Game15CellIteratorArgFv
	lwz      r4, 0xc(r30)
	addi     r3, r1, 0x14
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f3, 0x14(r1)
	addi     r3, r1, 0x40
	lfs      f2, 0x18(r1)
	addi     r4, r1, 0x20
	lfs      f1, 0x1c(r1)
	lfs      f0, lbl_80518F54@sda21(r2)
	stfs     f3, 0x20(r1)
	stfs     f2, 0x24(r1)
	stfs     f1, 0x28(r1)
	stfs     f0, 0x2c(r1)
	bl       __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
	lfs      f31, lbl_80518F54@sda21(r2)
	addi     r3, r1, 0x40
	li       r31, 0
	bl       first__Q24Game12CellIteratorFv
	b        lbl_80197278

lbl_80197124:
	addi     r3, r1, 0x40
	bl       __ml__Q24Game12CellIteratorFv
	lwz      r12, 0(r3)
	mr       r29, r3
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80197270
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80197270
	mr       r4, r29
	addi     r3, r1, 8
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x24(r1)
	lfs      f0, 0xc(r1)
	lfs      f3, 0x20(r1)
	fsubs    f4, f1, f0
	lfs      f2, 8(r1)
	lfs      f1, 0x28(r1)
	lfs      f0, 0x10(r1)
	fsubs    f3, f3, f2
	fmuls    f4, f4, f4
	fsubs    f2, f1, f0
	lfs      f0, lbl_80518F58@sda21(r2)
	fmadds   f1, f3, f3, f4
	fmuls    f2, f2, f2
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_801971CC
	ble      lbl_801971D0
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_801971D0

lbl_801971CC:
	fmr      f1, f0

lbl_801971D0:
	fcmpo    cr0, f1, f31
	bge      lbl_80197270
	lwz      r4, gameSystem__4Game@sda21(r13)
	mr       r5, r29
	lwz      r0, 0x44(r4)
	cmpwi    r0, 1
	bne      lbl_8019721C
	lhz      r0, 0x2dc(r29)
	cmplwi   r0, 0
	bne      lbl_8019720C
	lwz      r3, 0xc(r30)
	lbz      r0, 0x2b8(r3)
	cmpwi    r0, 1
	bne      lbl_80197270
	b        lbl_8019721C

lbl_8019720C:
	lwz      r3, 0xc(r30)
	lbz      r0, 0x2b8(r3)
	cmpwi    r0, 0
	bne      lbl_80197270

lbl_8019721C:
	lwz      r0, 0x278(r5)
	cmplwi   r0, 0
	beq      lbl_80197234
	fmr      f31, f1
	mr       r31, r5
	b        lbl_80197270

lbl_80197234:
	lwz      r3, 0x58(r4)
	lwz      r0, 0xe4(r3)
	cmpwi    r0, 0
	bne      lbl_8019725C
	lhz      r0, 0x2dc(r5)
	cmplwi   r0, 0
	bne      lbl_80197270
	fmr      f31, f1
	mr       r31, r5
	b        lbl_80197270

lbl_8019725C:
	lhz      r0, 0x2dc(r5)
	cmplwi   r0, 1
	bne      lbl_80197270
	fmr      f31, f1
	mr       r31, r5

lbl_80197270:
	addi     r3, r1, 0x40
	bl       next__Q24Game12CellIteratorFv

lbl_80197278:
	addi     r3, r1, 0x40
	bl       isDone__Q24Game12CellIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80197124
	mr       r3, r31
	psq_l    f31, 168(r1), 0, qr0
	lwz      r0, 0xb4(r1)
	lfd      f31, 0xa0(r1)
	lwz      r31, 0x9c(r1)
	lwz      r30, 0x98(r1)
	lwz      r29, 0x94(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}

/*
 * --INFO--
 * Address:	801972B0
 * Size:	000004
 */
void PikiAI::Action::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	801972B4
 * Size:	000028
 */
void __sinit_aiAction_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804B4A60@ha
	stw      r0, lbl_805159D8@sda21(r13)
	stfsu    f0, lbl_804B4A60@l(r3)
	stfs     f0, lbl_805159DC@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
