#include "types.h"
#include "nans.h"
#include "Game/SingleGame.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_singleGS_MainResult_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80482598
    lbl_80482598:
        .4byte 0x7330325F
        .4byte 0x64617965
        .4byte 0x6E645F72
        .4byte 0x6573756C
        .4byte 0x74000000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804C0648
    lbl_804C0648:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_804C0654
    lbl_804C0654:
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte loadResource__Q34Game10SingleGame15MainResultStateFv
    .global lbl_804C0660
    lbl_804C0660:
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte beforeSave__Q34Game10SingleGame15MainResultStateFv
    .global __vt__Q32kh6Screen20DispDayEndResultTitl
    __vt__Q32kh6Screen20DispDayEndResultTitl:
        .4byte 0
        .4byte 0
        .4byte getSize__Q32kh6Screen20DispDayEndResultTitlFv
        .4byte getOwnerID__Q32kh6Screen20DispDayEndResultTitlFv
        .4byte getMemberID__Q32kh6Screen20DispDayEndResultTitlFv
        .4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
    .global __vt__Q32kh6Screen16DispDayEndResult
    __vt__Q32kh6Screen16DispDayEndResult:
        .4byte 0
        .4byte 0
        .4byte getSize__Q32kh6Screen16DispDayEndResultFv
        .4byte getOwnerID__Q32kh6Screen16DispDayEndResultFv
        .4byte getMemberID__Q32kh6Screen16DispDayEndResultFv
        .4byte doSetSubMemberAll__Q32kh6Screen16DispDayEndResultFv
    .global __vt__Q34Game10SingleGame15MainResultState
    __vt__Q34Game10SingleGame15MainResultState:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game10SingleGame15MainResultStateFPQ24Game17SingleGameSectionPQ24Game8StateArg
        .4byte
   exec__Q34Game10SingleGame15MainResultStateFPQ24Game17SingleGameSection .4byte
   cleanup__Q34Game10SingleGame15MainResultStateFPQ24Game17SingleGameSection
        .4byte
   "resume__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
        .4byte
   "restart__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
        .4byte
   "transit__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSectioniPQ24Game8StateArg"
        .4byte
   draw__Q34Game10SingleGame15MainResultStateFPQ24Game17SingleGameSectionR8Graphics
        .4byte
   onOrimaDown__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectioni .4byte
   onMovieStart__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ24Game11MovieConfigUlUl
        .4byte
   onMovieDone__Q34Game10SingleGame15MainResultStateFPQ24Game17SingleGameSectionPQ24Game11MovieConfigUlUl
        .4byte
   onMovieCommand__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectioni .4byte
   onHoleIn__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ34Game8ItemCave4Item
        .4byte
   onNextFloor__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ34Game8ItemHole4Item
        .4byte
   onFountainReturn__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ34Game15ItemBigFountain4Item
        .4byte
   on_section_fadeout__Q34Game10SingleGame5StateFPQ24Game17SingleGameSection
        .4byte
   on_demo_timer__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionUl
    .global __vt__Q34Game6Result5TNode
    __vt__Q34Game6Result5TNode:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game6Result5TNodeFv
        .4byte getChildCount__Q24Game5DNodeFv
    .global "__vt__46Delegate<Q34Game10SingleGame15MainResultState>"
    "__vt__46Delegate<Q34Game10SingleGame15MainResultState>":
        .4byte 0
        .4byte 0
        .4byte "invoke__46Delegate<Q34Game10SingleGame15MainResultState>Fv"

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515BF8
    lbl_80515BF8:
        .skip 0x4
    .global lbl_80515BFC
    lbl_80515BFC:
        .skip 0x4
    .global theTekiHeap
    theTekiHeap:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051A038
    lbl_8051A038:
        .4byte 0x00000000
    .global lbl_8051A03C
    lbl_8051A03C:
        .4byte 0x6D725F6C
        .4byte 0x6F616400
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	80219F48
 * Size:	000150
 */
SingleGame::MainResultState::MainResultState(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r4, "__vt__Q24Game36FSMState<Q24Game17SingleGameSection>"@ha
	li       r5, 0
	stw      r0, 0x34(r1)
	addi     r0, r4, "__vt__Q24Game36FSMState<Q24Game17SingleGameSection>"@l
	lis      r4, __vt__Q34Game10SingleGame5State@ha
	stw      r31, 0x2c(r1)
	mr       r31, r3
	addi     r4, r4, __vt__Q34Game10SingleGame5State@l
	stw      r0, 0(r3)
	li       r0, 7
	lis      r3, __vt__Q34Game10SingleGame15MainResultState@ha
	stw      r0, 4(r31)
	addi     r0, r3, __vt__Q34Game10SingleGame15MainResultState@l
	addi     r3, r31, 0x24
	stw      r5, 8(r31)
	stw      r4, 0(r31)
	stw      r0, 0(r31)
	bl       __ct__Q34Game12ResultTexMgr3MgrFv
	addi     r3, r31, 0x68
	bl       __ct__Q34Game6Result5TNodeFv
	addi     r3, r31, 0xcc
	bl       __ct__16DvdThreadCommandFv
	li       r3, 0xb0
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80219FC4
	li       r4, 0
	bl       __ct__10ControllerFQ210JUTGamePad8EPadPort
	mr       r0, r3

lbl_80219FC4:
	stw      r0, 0x18(r31)
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8021A020
	lis      r4, lbl_804C0654@ha
	lis      r5, __vt__9IDelegate@ha
	addi     r8, r4, lbl_804C0654@l
	lis      r4, "__vt__46Delegate<Q34Game10SingleGame15MainResultState>"@ha
	lwz      r7, 0(r8)
	addi     r5, r5, __vt__9IDelegate@l
	lwz      r6, 4(r8)
	addi     r0, r4, "__vt__46Delegate<Q34Game10SingleGame15MainResultState>"@l
	lwz      r4, 8(r8)
	stw      r7, 0x14(r1)
	stw      r5, 0(r3)
	stw      r0, 0(r3)
	stw      r31, 4(r3)
	stw      r7, 8(r3)
	stw      r6, 0xc(r3)
	stw      r6, 0x18(r1)
	stw      r4, 0x1c(r1)
	stw      r4, 0x10(r3)

lbl_8021A020:
	stw      r3, 0xc8(r31)
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8021A07C
	lis      r4, lbl_804C0660@ha
	lis      r5, __vt__9IDelegate@ha
	addi     r8, r4, lbl_804C0660@l
	lis      r4, "__vt__46Delegate<Q34Game10SingleGame15MainResultState>"@ha
	lwz      r7, 0(r8)
	addi     r5, r5, __vt__9IDelegate@l
	lwz      r6, 4(r8)
	addi     r0, r4, "__vt__46Delegate<Q34Game10SingleGame15MainResultState>"@l
	lwz      r4, 8(r8)
	stw      r7, 8(r1)
	stw      r5, 0(r3)
	stw      r0, 0(r3)
	stw      r31, 4(r3)
	stw      r7, 8(r3)
	stw      r6, 0xc(r3)
	stw      r6, 0xc(r1)
	stw      r4, 0x10(r1)
	stw      r4, 0x10(r3)

lbl_8021A07C:
	stw      r3, 0x13c(r31)
	mr       r3, r31
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8021A098
 * Size:	000060
 */
Result::TNode::~TNode(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8021A0DC
	lis      r5, __vt__Q34Game6Result5TNode@ha
	li       r4, 0
	addi     r0, r5, __vt__Q34Game6Result5TNode@l
	stw      r0, 0(r30)
	bl       __dt__Q24Game5DNodeFv
	extsh.   r0, r31
	ble      lbl_8021A0DC
	mr       r3, r30
	bl       __dl__FPv

lbl_8021A0DC:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8021A0F8
 * Size:	000104
 */
void SingleGame::MainResultState::init(Game::SingleGameSection*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r3, r31
	  lwz       r5, -0x6C18(r13)
	  lbz       r0, 0x3C(r5)
	  ori       r0, r0, 0x4
	  stb       r0, 0x3C(r5)
	  stw       r31, 0x138(r30)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xC8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r5, -0x6B70(r13)
	  mr        r3, r30
	  mr        r4, r31
	  li        r6, 0
	  lwz       r31, 0xE8(r5)
	  lwz       r5, 0xB4(r5)
	  bl        -0xC7BCC
	  lwz       r3, -0x6B70(r13)
	  addi      r4, r30, 0xCC
	  stw       r31, 0xE8(r3)
	  lwz       r3, -0x6514(r13)
	  lwz       r5, 0xC8(r30)
	  bl        0x208DCC
	  li        r0, 0
	  sth       r0, 0x10(r30)
	  stw       r0, 0xC0(r30)
	  lwz       r3, -0x6B70(r13)
	  stb       r0, 0x20(r3)
	  lwz       r3, -0x6D20(r13)
	  bl        -0xBEF98
	  lwz       r3, -0x6E20(r13)
	  bl        -0x10C5A0
	  lwz       r0, -0x6E28(r13)
	  stw       r3, -0x6A80(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0xB4
	  mr        r3, r0
	  bl        -0xF5B24

	.loc_0xB4:
	  lwz       r3, -0x6D20(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x98(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6BC8(r13)
	  bl        -0x34F80
	  lwz       r4, -0x6CE0(r13)
	  cmplwi    r4, 0
	  beq-      .loc_0xE0
	  addi      r4, r4, 0x1C

	.loc_0xE0:
	  lwz       r3, -0x6C18(r13)
	  bl        -0x641E4
	  stw       r3, 0xC4(r30)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8021A1FC
 * Size:	000024
 */
void SingleGame::MainResultState::beforeSave(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, playData__4Game@sda21(r13)
	bl       setPikminCounts_Yesterday__Q24Game8PlayDataFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8021A220
 * Size:	000088
 */
void SingleGame::MainResultState::loadResource(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x24(r1)
	li       r0, -1
	addi     r4, r1, 8
	stw      r31, 0x1c(r1)
	mr       r31, r3
	addi     r3, r31, 0x24
	stw      r5, 0x10(r1)
	lwz      r7, theTekiHeap@sda21(r13)
	stw      r5, 0xc(r1)
	lwz      r6, mgr__Q24Game13PelletOtakara@sda21(r13)
	stw      r5, 8(r1)
	lwz      r5, mgr__Q24Game10PelletItem@sda21(r13)
	stb      r0, 0x14(r1)
	stw      r7, 0x10(r1)
	lwz      r0, 8(r6)
	stw      r0, 8(r1)
	lwz      r0, 8(r5)
	stw      r0, 0xc(r1)
	stw      r7, 0xc0(r31)
	bl       create__Q34Game12ResultTexMgr3MgrFRQ34Game12ResultTexMgr3Arg
	mr       r3, r31
	bl       createResultNodes__Q34Game10SingleGame15MainResultStateFv
	lwz      r3, particleMgr@sda21(r13)
	bl       killAll__11ParticleMgrFv
	lwz      r3, shadowMgr__4Game@sda21(r13)
	bl       killAll__Q24Game9ShadowMgrFv
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
 * Size:	000148
 */
unknown SingleGame::MainResultState::open2D(Game::SingleGameSection*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8021A2A8
 * Size:	0003E8
 */
void SingleGame::MainResultState::exec(Game::SingleGameSection*)
{
	/*
	stwu     r1, -0xc0(r1)
	mflr     r0
	stw      r0, 0xc4(r1)
	stmw     r27, 0xac(r1)
	mr       r30, r3
	mr       r31, r4
	lhz      r0, 0x10(r3)
	cmpwi    r0, 2
	beq      lbl_8021A3B0
	bge      lbl_8021A2E0
	cmpwi    r0, 0
	beq      lbl_8021A2F0
	bge      lbl_8021A380
	b        lbl_8021A5B8

lbl_8021A2E0:
	cmpwi    r0, 4
	beq      lbl_8021A550
	bge      lbl_8021A5B8
	b        lbl_8021A4E8

lbl_8021A2F0:
	lwz      r0, 0xe4(r30)
	cmpwi    r0, 2
	bne      lbl_8021A374
	li       r0, 2
	lis      r3, lbl_80482598@ha
	sth      r0, 0x10(r30)
	addi     r5, r3, lbl_80482598@l
	lfs      f0, lbl_8051A038@sda21(r2)
	li       r0, 0
	lwz      r6, 0xc8(r31)
	addi     r4, r1, 8
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r5, 8(r1)
	stw      r0, 0xc(r1)
	stw      r6, 0x14(r1)
	stfs     f0, 0x20(r1)
	stfs     f0, 0x24(r1)
	stfs     f0, 0x28(r1)
	stfs     f0, 0x2c(r1)
	stw      r0, 0x30(r1)
	stw      r0, 0x18(r1)
	stw      r0, 0x10(r1)
	stw      r0, 0x34(r1)
	stw      r0, 0x1c(r1)
	stw      r0, 0x38(r1)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r4, 0
	addi     r5, r2, lbl_8051A03C@sda21
	li       r6, 3
	bl       setPause__Q24Game10GameSystemFbPci
	li       r0, 0
	stw      r0, 0x20(r30)

lbl_8021A374:
	mr       r3, r31
	bl       doUpdate__Q24Game14BaseHIOSectionFv
	b        lbl_8021A67C

lbl_8021A380:
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x14(r30)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_8051A038@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0x14(r30)
	lfs      f1, 0x14(r30)
	fcmpo    cr0, f1, f0
	bge      lbl_8021A5B8
	li       r0, 3
	sth      r0, 0x10(r30)
	b        lbl_8021A5B8

lbl_8021A3B0:
	lwz      r3, 0x20(r30)
	addi     r0, r3, 1
	cmpwi    r0, 0xc7
	stw      r0, 0x20(r30)
	bge      lbl_8021A3D4
	lwz      r3, 0x18(r30)
	lwz      r0, 0x1c(r3)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	beq      lbl_8021A5B8

lbl_8021A3D4:
	li       r0, 3
	sth      r0, 0x10(r30)
	lwz      r3, playData__4Game@sda21(r13)
	bl       clearCurrentCave__Q24Game8PlayDataFv
	lwz      r3, 0x13c(r30)
	li       r0, 1
	lwz      r4, playData__4Game@sda21(r13)
	stb      r0, 0x19(r4)
	stw      r3, 0x1c(r4)
	lwz      r4, playData__4Game@sda21(r13)
	lwz      r6, 0xe8(r4)
	cmpwi    r6, 0xbb8
	bge      lbl_8021A410
	li       r29, 0x31
	b        lbl_8021A468

lbl_8021A410:
	cmpwi    r6, 0x1388
	bge      lbl_8021A420
	li       r29, 0x32
	b        lbl_8021A468

lbl_8021A420:
	cmpwi    r6, 0x1f40
	bge      lbl_8021A430
	li       r29, 0x33
	b        lbl_8021A468

lbl_8021A430:
	cmpwi    r6, 0x2710
	bge      lbl_8021A440
	li       r29, 0x34
	b        lbl_8021A468

lbl_8021A440:
	lbz      r3, 0x2f(r4)
	rlwinm.  r0, r3, 0, 0x1e, 0x1e
	beq      lbl_8021A454
	li       r29, 0x37
	b        lbl_8021A468

lbl_8021A454:
	rlwinm.  r0, r3, 0, 0x1d, 0x1d
	beq      lbl_8021A464
	li       r29, 0x36
	b        lbl_8021A468

lbl_8021A464:
	li       r29, 0x35

lbl_8021A468:
	lbz      r0, 0x2f(r4)
	lis      r3, __vt__Q32og6Screen14DispMemberBase@ha
	lwz      r5, 0xbc(r4)
	addi     r10, r3, __vt__Q32og6Screen14DispMemberBase@l
	lwz      r28, 0xb8(r30)
	lis      r4, __vt__Q32kh6Screen16DispDayEndResult@ha
	li       r9, 0
	lis      r3, __vt__Q32kh6Screen20DispDayEndResultTitl@ha
	clrlwi   r7, r0, 0x1f
	addi     r8, r4, __vt__Q32kh6Screen16DispDayEndResult@l
	stw      r10, 0x3c(r1)
	addi     r0, r3, __vt__Q32kh6Screen20DispDayEndResultTitl@l
	lwz      r27, theTekiHeap@sda21(r13)
	addi     r3, r1, 0x4c
	stw      r10, 0x44(r1)
	addi     r4, r30, 0x68
	stw      r9, 0x40(r1)
	stw      r8, 0x3c(r1)
	stw      r9, 0x48(r1)
	stw      r0, 0x44(r1)
	bl       __ct__Q32kh6Screen20DispDayEndResultItemFPQ34Game6Result5TNodeiib
	mr       r4, r28
	addi     r3, r1, 0x70
	bl       __ct__Q32kh6Screen20DispDayEndResultIncPFPCQ32kh6Screen4IncP
	mr       r4, r27
	mr       r5, r29
	addi     r3, r1, 0x80
	bl
__ct__Q32kh6Screen20DispDayEndResultMailFP7JKRHeapQ32kh6Screen12MailCategory lwz
r3, gGame2DMgr__6Screen@sda21(r13) addi     r4, r1, 0x3c bl
open_DayEndResult__Q26Screen9Game2DMgrFRQ32kh6Screen16DispDayEndResult b
lbl_8021A5B8

lbl_8021A4E8:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       check_DayEndResult__Q26Screen9Game2DMgrCFv
	cmpwi    r3, 2
	beq      lbl_8021A51C
	bge      lbl_8021A5B8
	cmpwi    r3, 1
	bge      lbl_8021A508
	b        lbl_8021A5B8

lbl_8021A508:
	lwz      r3, moviePlayer__4Game@sda21(r13)
	li       r4, 1
	li       r5, 0
	bl       unsuspend__Q24Game11MoviePlayerFlb
	b        lbl_8021A5B8

lbl_8021A51C:
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       stop__Q24Game11MoviePlayerFv
	mr       r3, r31
	bl       clearHeap__Q24Game15BaseGameSectionFv
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8021A67C

lbl_8021A550:
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x14(r30)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_8051A038@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0x14(r30)
	lfs      f1, 0x14(r30)
	fcmpo    cr0, f1, f0
	bge      lbl_8021A67C
	mr       r3, r31
	bl       clearHeap__Q24Game15BaseGameSectionFv
	lwz      r3, 0x8c(r30)
	b        lbl_8021A588

lbl_8021A584:
	lwz      r3, 0x18(r3)

lbl_8021A588:
	cmplwi   r3, 0
	bne      lbl_8021A584
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8021A67C
	b        lbl_8021A67C

lbl_8021A5B8:
	lwz      r3, mgr__Q24Game9ItemOnyon@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, mgr__Q24Game9ItemOnyon@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, mgr__Q24Game9ItemOnyon@sda21(r13)
	lwz      r4, sys@sda21(r13)
	lwz      r12, 0(r3)
	lfs      f1, 0x54(r4)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r3, sys@sda21(r13)
	lwz      r3, 0x24(r3)
	lwz      r27, 0x25c(r3)
	bl       setViewCalcModeInd__Q28SysShape5ModelFv
	mr       r3, r31
	mr       r4, r27
	li       r5, 0
	bl       j3dSetView__Q24Game15BaseGameSectionFP8Viewportb
	lwz      r3, moviePlayer__4Game@sda21(r13)
	li       r5, 0
	lwz      r4, 0x10c(r31)
	bl       update__Q24Game11MoviePlayerFP10ControllerP10Controller
	lwz      r3, particle2dMgr@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8021A63C
	bl       update__14TParticle2dMgrFv

lbl_8021A63C:
	lwz      r3, particleMgr@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8021A658
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_8021A658:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       update__Q26Screen9Game2DMgrFv
	lwz      r3, 0x128(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       doUpdate__Q24Game14BaseHIOSectionFv

lbl_8021A67C:
	lmw      r27, 0xac(r1)
	lwz      r0, 0xc4(r1)
	mtlr     r0
	addi     r1, r1, 0xc0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8021A690
 * Size:	000030
 */
void SingleGame::MainResultState::onMovieDone(Game::SingleGameSection*, Game::MovieConfig*, unsigned long, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x4328(r2)
	  stw       r0, 0x14(r1)
	  li        r0, 0x4
	  sth       r0, 0x10(r3)
	  stfs      f0, 0x14(r3)
	  bl        0x24CD8C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8021A6C0
 * Size:	00035C
 */
void SingleGame::MainResultState::createResultNodes(void)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stmw     r20, 0x10(r1)
	mr       r31, r3
	lwz      r30, sCurrentHeap__7JKRHeap@sda21(r13)
	lwz      r3, 0xc0(r3)
	bl       becomeCurrentHeap__7JKRHeapFv
	lwz      r3, playData__4Game@sda21(r13)
	li       r26, 0
	lwz      r29, mgr__Q24Game10PelletItem@sda21(r13)
	lwz      r28, 0xb4(r3)
	addi     r27, r28, 0xc
	b        lbl_8021A7D8

lbl_8021A6F8:
	mr       r3, r27
	mr       r4, r26
	bl       __cl__Q24Game11KindCounterFi
	lbz      r0, 0(r3)
	cmplwi   r0, 0
	beq      lbl_8021A7D4
	mr       r3, r29
	mr       r4, r26
	bl       getPelletConfig__Q24Game13BasePelletMgrFi
	mr       r24, r3
	lhz      r3, 0x254(r3)
	addi     r3, r3, -1
	bl       getOffsetFromDictionaryNo__Q34Game10PelletList3MgrFi
	bl       convertByMorimun__Q34Game6Result5TNodeFi
	mr       r0, r3
	mr       r20, r4
	li       r3, 0x50
	mr       r21, r0
	bl       __nw__FUl
	or.      r23, r3, r3
	beq      lbl_8021A754
	bl       __ct__Q34Game6Result5TNodeFv
	mr       r23, r3

lbl_8021A754:
	lwz      r22, 0x170(r24)
	mr       r3, r27
	mr       r4, r26
	bl       __cl__Q24Game11KindCounterFi
	lbz      r0, 0(r3)
	mr       r3, r27
	mr       r4, r26
	mullw    r25, r22, r0
	bl       __cl__Q24Game11KindCounterFi
	lbz      r24, 0(r3)
	mr       r4, r26
	addi     r3, r31, 0x24
	bl       getItemTexture__Q34Game12ResultTexMgr3MgrFi
	mr       r7, r3
	mr       r3, r23
	mr       r6, r20
	mr       r5, r21
	mr       r8, r24
	mr       r9, r25
	mr       r10, r22
	bl       setTNode__Q34Game6Result5TNodeFUxP10JUTTextureiii
	mr       r4, r23
	addi     r3, r31, 0x68
	bl       add__Q24Game5DNodeFPQ24Game5DNode
	mr       r3, r27
	mr       r4, r26
	bl       __cl__Q24Game11KindCounterFi
	lwz      r4, playData__4Game@sda21(r13)
	lbz      r3, 0(r3)
	lwz      r0, 0xbc(r4)
	add      r0, r0, r3
	stw      r0, 0xbc(r4)

lbl_8021A7D4:
	addi     r26, r26, 1

lbl_8021A7D8:
	lhz      r0, 0(r27)
	cmpw     r26, r0
	blt      lbl_8021A6F8
	lwz      r29, mgr__Q24Game13PelletOtakara@sda21(r13)
	addi     r26, r28, 4
	li       r27, 0
	b        lbl_8021A8D4

lbl_8021A7F4:
	mr       r3, r26
	mr       r4, r27
	bl       __cl__Q24Game11KindCounterFi
	lbz      r0, 0(r3)
	cmplwi   r0, 0
	beq      lbl_8021A8D0
	mr       r3, r29
	mr       r4, r27
	bl       getPelletConfig__Q24Game13BasePelletMgrFi
	mr       r24, r3
	lhz      r3, 0x254(r3)
	addi     r3, r3, -1
	bl       getOffsetFromDictionaryNo__Q34Game10PelletList3MgrFi
	bl       convertByMorimun__Q34Game6Result5TNodeFi
	mr       r0, r3
	mr       r21, r4
	li       r3, 0x50
	mr       r20, r0
	bl       __nw__FUl
	or.      r23, r3, r3
	beq      lbl_8021A850
	bl       __ct__Q34Game6Result5TNodeFv
	mr       r23, r3

lbl_8021A850:
	lwz      r22, 0x170(r24)
	mr       r3, r26
	mr       r4, r27
	bl       __cl__Q24Game11KindCounterFi
	lbz      r0, 0(r3)
	mr       r3, r26
	mr       r4, r27
	mullw    r24, r22, r0
	bl       __cl__Q24Game11KindCounterFi
	lbz      r25, 0(r3)
	mr       r4, r27
	addi     r3, r31, 0x24
	bl       getOtakaraTexture__Q34Game12ResultTexMgr3MgrFi
	mr       r7, r3
	mr       r3, r23
	mr       r6, r21
	mr       r5, r20
	mr       r8, r25
	mr       r9, r24
	mr       r10, r22
	bl       setTNode__Q34Game6Result5TNodeFUxP10JUTTextureiii
	mr       r4, r23
	addi     r3, r31, 0x68
	bl       add__Q24Game5DNodeFPQ24Game5DNode
	mr       r3, r26
	mr       r4, r27
	bl       __cl__Q24Game11KindCounterFi
	lwz      r4, playData__4Game@sda21(r13)
	lbz      r3, 0(r3)
	lwz      r0, 0xbc(r4)
	add      r0, r0, r3
	stw      r0, 0xbc(r4)

lbl_8021A8D0:
	addi     r27, r27, 1

lbl_8021A8D4:
	lhz      r0, 0(r26)
	cmpw     r27, r0
	blt      lbl_8021A7F4
	lwz      r22, mgr__Q24Game13PelletCarcass@sda21(r13)
	addi     r20, r28, 0x14
	li       r26, 0
	li       r27, 0
	li       r21, 0
	b        lbl_8021A954

lbl_8021A8F8:
	mr       r3, r20
	mr       r4, r21
	bl       __cl__Q24Game11KindCounterFi
	lbz      r0, 0(r3)
	cmplwi   r0, 0
	beq      lbl_8021A950
	mr       r3, r22
	mr       r4, r21
	bl       getPelletConfig__Q24Game13BasePelletMgrFi
	mr       r28, r3
	mr       r3, r20
	mr       r4, r21
	bl       __cl__Q24Game11KindCounterFi
	lbz      r0, 0(r3)
	mr       r3, r20
	lwz      r23, 0x170(r28)
	mr       r4, r21
	add      r27, r27, r0
	bl       __cl__Q24Game11KindCounterFi
	lbz      r0, 0(r3)
	mullw    r0, r0, r23
	add      r26, r26, r0

lbl_8021A950:
	addi     r21, r21, 1

lbl_8021A954:
	lhz      r0, 0(r20)
	cmpw     r21, r0
	blt      lbl_8021A8F8
	cmpwi    r27, 0
	ble      lbl_8021A9C4
	lwz      r4, playData__4Game@sda21(r13)
	li       r3, 0x50
	lwz      r0, 0xbc(r4)
	add      r0, r0, r27
	stw      r0, 0xbc(r4)
	bl       __nw__FUl
	or.      r23, r3, r3
	beq      lbl_8021A990
	bl       __ct__Q34Game6Result5TNodeFv
	mr       r23, r3

lbl_8021A990:
	addi     r3, r31, 0x24
	bl       getCarcassTexture__Q34Game12ResultTexMgr3MgrFv
	mr       r7, r3
	mr       r3, r23
	mr       r8, r27
	mr       r9, r26
	li       r6, 0
	li       r5, 0
	li       r10, -1
	bl       setTNode__Q34Game6Result5TNodeFUxP10JUTTextureiii
	mr       r4, r23
	addi     r3, r31, 0x68
	bl       add__Q24Game5DNodeFPQ24Game5DNode

lbl_8021A9C4:
	lwz      r3, playData__4Game@sda21(r13)
	lwz      r3, 0xb4(r3)
	bl       clear__Q24Game16PelletCropMemoryFv
	li       r3, 0x74
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8021A9E8
	bl       __ct__Q32kh6Screen4IncPFv
	mr       r0, r3

lbl_8021A9E8:
	stw      r0, 0xb8(r31)
	li       r0, 0
	stb      r0, 0x1c(r31)
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	lwz      r4, 0x18(r31)
	bl       setGamePad__Q26Screen9Game2DMgrFP10Controller
	mr       r3, r30
	bl       becomeCurrentHeap__7JKRHeapFv
	lmw      r20, 0x10(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8021AA1C
 * Size:	000094
 */
void SingleGame::MainResultState::draw(Game::SingleGameSection*, Graphics&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r5
	stw      r30, 8(r1)
	mr       r30, r4
	lhz      r0, 0x10(r3)
	cmplwi   r0, 2
	beq      lbl_8021AA54
	cmplwi   r0, 3
	beq      lbl_8021AA54
	cmplwi   r0, 4
	bne      lbl_8021AA98

lbl_8021AA54:
	lwz      r3, cameraMgr__4Game@sda21(r13)
	bl       update__Q24Game9CameraMgrFv
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	lwz      r12, 0x10c(r12)
	mtctr    r12
	bctrl
	lwz      r3, moviePlayer__4Game@sda21(r13)
	mr       r4, r31
	bl       drawLoading__Q24Game11MoviePlayerFR8Graphics
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	lwz      r12, 0x110(r12)
	mtctr    r12
	bctrl

lbl_8021AA98:
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
 * Address:	8021AAB0
 * Size:	00007C
 */
void SingleGame::MainResultState::cleanup(Game::SingleGameSection*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r4, gGame2DMgr__6Screen@sda21(r13)
	lwz      r3, 0x18(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r3, playData__4Game@sda21(r13)
	lwz      r3, 0xb4(r3)
	bl       clear__Q24Game16PelletCropMemoryFv
	lwz      r4, 0xc4(r31)
	cmplwi   r4, 0
	beq      lbl_8021AAFC
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl
"addObjectMgr_reuse__Q24Game10GameSystemFP31TObjectNode<16GenericObjectMgr>"

lbl_8021AAFC:
	lwz      r3, 0x138(r31)
	li       r0, 0
	stw      r0, 0x168(r3)
	lwz      r3, gameSystem__4Game@sda21(r13)
	lbz      r0, 0x3c(r3)
	rlwinm   r0, r0, 0, 0x1e, 0x1c
	stb      r0, 0x3c(r3)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

namespace kh {
namespace Screen {

/*
 * --INFO--
 * Address:	8021AB2C
 * Size:	000008
 */
u32 DispDayEndResultTitl::getSize(void) { return 0x8; }

/*
 * --INFO--
 * Address:	8021AB34
 * Size:	000008
 */
u32 DispDayEndResultTitl::getOwnerID(void) { return 0x4B48; }

/*
 * --INFO--
 * Address:	8021AB3C
 * Size:	000014
 */
void DispDayEndResultTitl::getMemberID(void)
{
	/*
lis      r4, 0x5449544C@ha
lis      r3, 0x4445525F@ha
addi     r4, r4, 0x5449544C@l
addi     r3, r3, 0x4445525F@l
blr
	*/
}

/*
 * --INFO--
 * Address:	8021AB50
 * Size:	000008
 */
u32 DispDayEndResult::getSize(void) { return 0x68; }

/*
 * --INFO--
 * Address:	8021AB58
 * Size:	000008
 */
u32 DispDayEndResult::getOwnerID(void) { return 0x4B48; }

/*
 * --INFO--
 * Address:	8021AB60
 * Size:	000014
 */
void DispDayEndResult::getMemberID(void)
{
	/*
lis      r4, 0x52534C54@ha
lis      r3, 0x0044455F@ha
addi     r4, r4, 0x52534C54@l
addi     r3, r3, 0x0044455F@l
blr
	*/
}

/*
 * --INFO--
 * Address:	8021AB74
 * Size:	000054
 */
void DispDayEndResult::doSetSubMemberAll(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r3
addi     r4, r31, 8
bl setSubMember__Q32og6Screen14DispMemberBaseFPQ32og6Screen14DispMemberBase
mr       r3, r31
addi     r4, r31, 0x10
bl setSubMember__Q32og6Screen14DispMemberBaseFPQ32og6Screen14DispMemberBase
mr       r3, r31
addi     r4, r31, 0x34
bl setSubMember__Q32og6Screen14DispMemberBaseFPQ32og6Screen14DispMemberBase
mr       r3, r31
addi     r4, r31, 0x44
bl setSubMember__Q32og6Screen14DispMemberBaseFPQ32og6Screen14DispMemberBase
lwz      r0, 0x14(r1)
lwz      r31, 0xc(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

} // namespace Screen
} // namespace kh

/*
 * --INFO--
 * Address:	8021ABC8
 * Size:	000030
 */
void Delegate<Game::SingleGame::MainResultState>::invoke()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r4, r3
	stw      r0, 0x14(r1)
	addi     r12, r4, 8
	lwz      r3, 4(r3)
	bl       __ptmf_scall
	nop
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8021ABF8
 * Size:	000028
 */
void __sinit_singleGS_MainResult_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804C0648@ha
	stw      r0, lbl_80515BF8@sda21(r13)
	stfsu    f0, lbl_804C0648@l(r3)
	stfs     f0, lbl_80515BFC@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
