#include "types.h"
#include "Game/SingleGame.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_singleGS_Ending_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_804839B0
    lbl_804839B0:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x53696E67
        .4byte 0x6C654753
        .4byte 0x5F456E64
        .4byte 0x696E6700
    .global lbl_804839CC
    lbl_804839CC:
        .4byte 0x50534761
        .4byte 0x6D652E68
        .4byte 0x00000000
    .global lbl_804839D8
    lbl_804839D8:
        .asciz "P2Assert"
        .skip 3
        .4byte 0x50535363
        .4byte 0x656E652E
        .4byte 0x68000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804C1370
    lbl_804C1370:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_804C137C
    lbl_804C137C:
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte dvdload__Q34Game10SingleGame11EndingStateFv
    .global lbl_804C1388
    lbl_804C1388:
        .4byte lbl_80232A9C
        .4byte lbl_80232B20
        .4byte lbl_80232BDC
        .4byte lbl_80232C28
        .4byte lbl_80232CA4
        .4byte lbl_80232E04
        .4byte lbl_80232E58
        .4byte lbl_80232F24
        .4byte lbl_80232FA4
        .4byte lbl_802330E4
        .4byte lbl_80233224
    .global __vt__Q32og6Screen22DispMemberFinalMessage
    __vt__Q32og6Screen22DispMemberFinalMessage:
        .4byte 0
        .4byte 0
        .4byte getSize__Q32og6Screen22DispMemberFinalMessageFv
        .4byte getOwnerID__Q32og6Screen22DispMemberFinalMessageFv
        .4byte getMemberID__Q32og6Screen22DispMemberFinalMessageFv
        .4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
    .global __vt__Q34Game10SingleGame11EndingState
    __vt__Q34Game10SingleGame11EndingState:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game10SingleGame11EndingStateFPQ24Game17SingleGameSectionPQ24Game8StateArg
        .4byte
   exec__Q34Game10SingleGame11EndingStateFPQ24Game17SingleGameSection .4byte
   cleanup__Q34Game10SingleGame11EndingStateFPQ24Game17SingleGameSection .4byte
   "resume__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
        .4byte
   "restart__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
        .4byte
   "transit__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSectioniPQ24Game8StateArg"
        .4byte
   draw__Q34Game10SingleGame11EndingStateFPQ24Game17SingleGameSectionR8Graphics
        .4byte
   onOrimaDown__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectioni .4byte
   onMovieStart__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ24Game11MovieConfigUlUl
        .4byte
   onMovieDone__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ24Game11MovieConfigUlUl
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
   on_demo_timer__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionUl .4byte
   do_dvdload__Q34Game10SingleGame11EndingStateFv .global
   "__vt__42Delegate<Q34Game10SingleGame11EndingState>"
    "__vt__42Delegate<Q34Game10SingleGame11EndingState>":
        .4byte 0
        .4byte 0
        .4byte "invoke__42Delegate<Q34Game10SingleGame11EndingState>Fv"
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515CA0
    lbl_80515CA0:
        .skip 0x4
    .global lbl_80515CA4
    lbl_80515CA4:
        .skip 0x4
*/

namespace Game {

/*
 * --INFO--
 * Address:	802326A8
 * Size:	0000E0
 */
SingleGame::EndingState::EndingState(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__Q24Game36FSMState<Q24Game17SingleGameSection>"@ha
	li       r5, 0
	stw      r0, 0x24(r1)
	addi     r0, r4, "__vt__Q24Game36FSMState<Q24Game17SingleGameSection>"@l
	lis      r4, __vt__Q34Game10SingleGame5State@ha
	stw      r31, 0x1c(r1)
	mr       r31, r3
	addi     r4, r4, __vt__Q34Game10SingleGame5State@l
	stw      r0, 0(r3)
	li       r0, 0xb
	lis      r3, __vt__Q34Game10SingleGame11EndingState@ha
	stw      r0, 4(r31)
	addi     r0, r3, __vt__Q34Game10SingleGame11EndingState@l
	li       r3, 0xb0
	stw      r5, 8(r31)
	stw      r4, 0(r31)
	stw      r0, 0(r31)
	stb      r5, 0x10(r31)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80232710
	li       r4, 0
	bl       __ct__10ControllerFQ210JUTGamePad8EPadPort
	mr       r0, r3

lbl_80232710:
	stw      r0, 0x28(r31)
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8023276C
	lis      r4, lbl_804C137C@ha
	lis      r5, __vt__9IDelegate@ha
	addi     r8, r4, lbl_804C137C@l
	lis      r4, "__vt__42Delegate<Q34Game10SingleGame11EndingState>"@ha
	lwz      r7, 0(r8)
	addi     r5, r5, __vt__9IDelegate@l
	lwz      r6, 4(r8)
	addi     r0, r4, "__vt__42Delegate<Q34Game10SingleGame11EndingState>"@l
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

lbl_8023276C:
	stw      r3, 0x24(r31)
	mr       r3, r31
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80232788
 * Size:	0000D4
 */
void SingleGame::EndingState::init(Game::SingleGameSection*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	stw      r0, 0x14(r3)
	stw      r0, 0x18(r3)
	stb      r0, 0x11(r3)
	lbz      r0, 0(r5)
	stb      r0, 0x10(r3)
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	lwz      r4, 0x28(r30)
	bl       setGamePad__Q26Screen9Game2DMgrFP10Controller
	li       r0, 0
	stw      r0, 0x1c(r30)
	stb      r0, 0x20(r30)
	stw      r0, 0x2c(r30)
	lbz      r0, 0x10(r30)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_80232830
	lwz      r5, playData__4Game@sda21(r13)
	mr       r3, r30
	mr       r4, r31
	li       r6, 0
	lwz      r31, 0xe8(r5)
	lwz      r5, 0xb4(r5)
	bl
accountEarnings__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ24Game16PelletCropMemoryb
	lwz      r3, playData__4Game@sda21(r13)
	stw      r31, 0xe8(r3)
	lwz      r3, playData__4Game@sda21(r13)
	lwz      r3, 0xb4(r3)
	bl       clear__Q24Game16PelletCropMemoryFv
	lwz      r3, playData__4Game@sda21(r13)
	bl       setPikminCounts_Today__Q24Game8PlayDataFv
	lwz      r3, playData__4Game@sda21(r13)
	bl       setPikminCounts_Yesterday__Q24Game8PlayDataFv
	bl       account_today_adjust__Q24Game8BirthMgrFv
	bl       account_today__Q24Game8BirthMgrFv
	bl       account_today__Q24Game8DeathMgrFv

lbl_80232830:
	lwz      r3, playData__4Game@sda21(r13)
	li       r0, 0
	stb      r0, 0x20(r3)
	lwz      r3, naviMgr__4Game@sda21(r13)
	bl       clearDeadCount__Q24Game7NaviMgrFv
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
 * Size:	0000BC
 */
void SingleGame::EndingState::initNext(Game::SingleGameSection*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8023285C
 * Size:	0001C8
 */
void SingleGame::EndingState::dvdload(void)
{
	/*
	stwu     r1, -0x150(r1)
	mflr     r0
	lis      r4, lbl_804839B0@ha
	stw      r0, 0x154(r1)
	stw      r31, 0x14c(r1)
	mr       r31, r3
	addi     r3, r1, 0x108
	stw      r30, 0x148(r1)
	addi     r30, r4, lbl_804839B0@l
	stw      r29, 0x144(r1)
	bl       __ct__Q26PSGame9SceneInfoFv
	lbz      r0, 0x10(r31)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_802328A0
	li       r0, 0xe
	stb      r0, 0x10e(r1)
	b        lbl_802328A8

lbl_802328A0:
	li       r0, 0xf
	stb      r0, 0x10e(r1)

lbl_802328A8:
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	li       r3, 0
	stb      r3, 0x10f(r1)
	cmplwi   r0, 0
	bne      lbl_802328D0
	addi     r3, r30, 0x1c
	addi     r5, r30, 0x28
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802328D0:
	lwz      r3, spSceneMgr__8PSSystem@sda21(r13)
	addi     r4, r1, 0x108
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80232908
	addi     r3, r30, 0x1c
	addi     r5, r30, 0x28
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80232908:
	lwz      r29, spSceneMgr__8PSSystem@sda21(r13)
	lwz      r0, 4(r29)
	cmplwi   r0, 0
	bne      lbl_8023292C
	addi     r3, r30, 0x34
	addi     r5, r30, 0x28
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8023292C:
	lwz      r3, 4(r29)
	lwz      r3, 4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lbz      r3, 0x10(r31)
	clrlwi.  r0, r3, 0x1f
	bne      lbl_80232A08
	rlwinm.  r0, r3, 0, 0x1e, 0x1e
	bne      lbl_802329BC
	bl       account_today__Q24Game8BirthMgrFv
	bl       account_today__Q24Game8DeathMgrFv
	lwz      r4, gameSystem__4Game@sda21(r13)
	lwz      r3, sys@sda21(r13)
	lwz      r4, 0x40(r4)
	lwz      r29, 0x218(r4)
	bl       getPlayCommonData__6SystemFv
	mr       r4, r29
	addi     r5, r1, 0xc8
	addi     r6, r1, 0x88
	bl       entryHighscores_clear__Q24Game14PlayCommonDataFiPiPi
	lwz      r3, sys@sda21(r13)
	bl       getPlayCommonData__6SystemFv
	mr       r4, r3
	addi     r3, r1, 0xc8
	lwz      r5, 4(r4)
	addi     r4, r1, 0x88
	bl
createDispMember__Q32kh6Screen16SceneFinalResultFPCiPCiPPQ24Game9Highscore stw
r3, 0x2c(r31) b        lbl_80232A08

lbl_802329BC:
	bl       account_today__Q24Game8BirthMgrFv
	bl       account_today__Q24Game8DeathMgrFv
	lwz      r4, gameSystem__4Game@sda21(r13)
	lwz      r3, sys@sda21(r13)
	lwz      r4, 0x40(r4)
	lwz      r29, 0x218(r4)
	bl       getPlayCommonData__6SystemFv
	mr       r4, r29
	addi     r5, r1, 0x48
	addi     r6, r1, 8
	bl       entryHighscores_complete__Q24Game14PlayCommonDataFiPiPi
	lwz      r3, sys@sda21(r13)
	bl       getPlayCommonData__6SystemFv
	mr       r4, r3
	addi     r3, r1, 0x48
	lwz      r5, 8(r4)
	addi     r4, r1, 8
	bl
createDispMember__Q32kh6Screen16SceneFinalResultFPCiPCiPPQ24Game9Highscore stw
r3, 0x2c(r31)

lbl_80232A08:
	lwz      r0, 0x154(r1)
	lwz      r31, 0x14c(r1)
	lwz      r30, 0x148(r1)
	lwz      r29, 0x144(r1)
	mtlr     r0
	addi     r1, r1, 0x150
	blr
	*/
}

/*
 * --INFO--
 * Address:	80232A24
 * Size:	000004
 */
void SingleGame::EndingState::do_dvdload(void) { }

/*
 * --INFO--
 * Address:	80232A28
 * Size:	000850
 */
void SingleGame::EndingState::exec(Game::SingleGameSection*)
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stw      r31, 0x7c(r1)
	stw      r30, 0x78(r1)
	mr       r30, r4
	stw      r29, 0x74(r1)
	mr       r29, r3
	lis      r3, lbl_804839B0@ha
	lwz      r0, 0x14(r29)
	addi     r31, r3, lbl_804839B0@l
	cmplwi   r0, 0
	bne      lbl_80232A68
	lbz      r0, 0x11(r29)
	cmplwi   r0, 0
	bne      lbl_8023325C

lbl_80232A68:
	mr       r3, r30
	bl       doUpdate__Q24Game14BaseHIOSectionFv
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       update__Q26Screen9Game2DMgrFv
	lbz      r0, 0x11(r29)
	cmplwi   r0, 0xa
	bgt      lbl_8023325C
	lis      r3, lbl_804C1388@ha
	slwi     r0, r0, 2
	addi     r3, r3, lbl_804C1388@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr
	.global  lbl_80232A9C

lbl_80232A9C:
	lbz      r0, 0x10(r29)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_80232AB0
	mr       r3, r30
	bl       clearHeap__Q24Game15BaseGameSectionFv

lbl_80232AB0:
	lwz      r0, sCurrentHeap__7JKRHeap@sda21(r13)
	stw      r0, 0x18(r29)
	lwz      r31, 0x18(r29)
	mr       r3, r31
	bl       getFreeSize__7JKRHeapFv
	mr       r4, r31
	li       r5, 1
	bl       create__10JKRExpHeapFUlP7JKRHeapb
	stw      r3, 0x14(r29)
	lwz      r3, 0x14(r29)
	bl       becomeCurrentHeap__7JKRHeapFv
	li       r3, 0xec
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80232AF4
	bl       __ct__Q24Game9THPPlayerFv
	mr       r0, r3

lbl_80232AF4:
	stw      r0, 0x1c(r29)
	li       r4, 0
	lwz      r3, 0x1c(r29)
	bl       init__Q24Game9THPPlayerFP7JKRHeap
	li       r0, 1
	addi     r4, r30, 0x1b8
	stb      r0, 0x11(r29)
	lwz      r3, sys@sda21(r13)
	lwz      r5, 0x24(r29)
	bl       dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
	b        lbl_8023325C
	.global  lbl_80232B20

lbl_80232B20:
	lwz      r0, 0x1d0(r30)
	cmpwi    r0, 2
	bne      lbl_8023325C
	lbz      r0, 0x10(r29)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80232BD0
	li       r0, 6
	lis      r3, __vt__Q32og6Screen14DispMemberBase@ha
	stb      r0, 0x11(r29)
	li       r5, 0
	addi     r0, r3, __vt__Q32og6Screen14DispMemberBase@l
	lis      r3, __vt__Q32og6Screen22DispMemberFinalMessage@ha
	stw      r0, 0x14(r1)
	addi     r0, r3, __vt__Q32og6Screen22DispMemberFinalMessage@l
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	addi     r4, r1, 0x14
	stw      r5, 0x18(r1)
	stw      r0, 0x14(r1)
	stw      r5, 0x1c(r1)
	bl
open_FinalMessage__Q26Screen9Game2DMgrFRQ32og6Screen22DispMemberFinalMessage lwz
r0, spSceneMgr__8PSSystem@sda21(r13) cmplwi   r0, 0 bne      lbl_80232B90 addi
r3, r31, 0x1c addi     r5, r31, 0x28 li       r4, 0x1d3 crclr    6 bl
panic_f__12JUTExceptionFPCciPCce

lbl_80232B90:
	lwz      r29, spSceneMgr__8PSSystem@sda21(r13)
	lwz      r0, 4(r29)
	cmplwi   r0, 0
	bne      lbl_80232BB4
	addi     r3, r31, 0x34
	addi     r5, r31, 0x28
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80232BB4:
	lwz      r3, 4(r29)
	lwz      r3, 4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8023325C

lbl_80232BD0:
	li       r0, 2
	stb      r0, 0x11(r29)
	b        lbl_8023325C
	.global  lbl_80232BDC

lbl_80232BDC:
	lbz      r0, 0x10(r29)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_80232C08
	li       r3, 8
	li       r0, 1
	stb      r3, 0x11(r29)
	li       r4, 3
	stb      r0, 0x20(r29)
	lwz      r3, 0x1c(r29)
	bl       load__Q24Game9THPPlayerFQ34Game9THPPlayer11EMovieIndex
	b        lbl_8023325C

lbl_80232C08:
	li       r3, 3
	li       r0, 1
	stb      r3, 0x11(r29)
	li       r4, 2
	stb      r0, 0x20(r29)
	lwz      r3, 0x1c(r29)
	bl       load__Q24Game9THPPlayerFQ34Game9THPPlayer11EMovieIndex
	b        lbl_8023325C
	.global  lbl_80232C28

lbl_80232C28:
	lwz      r3, 0x1c(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x20(r29)
	cmplwi   r0, 0
	beq      lbl_80232C6C
	lwz      r3, 0x1c(r29)
	bl       isFinishLoading__Q24Game9THPPlayerFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8023325C
	li       r0, 0
	stb      r0, 0x20(r29)
	lwz      r3, 0x1c(r29)
	bl       play__Q24Game9THPPlayerFv
	b        lbl_8023325C

lbl_80232C6C:
	lwz      r3, 0x1c(r29)
	bl       isFinishPlaying__Q24Game9THPPlayerFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8023325C
	lwz      r3, 0x1c(r29)
	bl       stop__Q24Game9THPPlayerFv
	li       r3, 4
	li       r0, 1
	stb      r3, 0x11(r29)
	li       r4, 4
	stb      r0, 0x20(r29)
	lwz      r3, 0x1c(r29)
	bl       load__Q24Game9THPPlayerFQ34Game9THPPlayer11EMovieIndex
	b        lbl_8023325C
	.global  lbl_80232CA4

lbl_80232CA4:
	lwz      r3, 0x1c(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x20(r29)
	cmplwi   r0, 0
	beq      lbl_80232CE8
	lwz      r3, 0x1c(r29)
	bl       isFinishLoading__Q24Game9THPPlayerFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8023325C
	li       r0, 0
	stb      r0, 0x20(r29)
	lwz      r3, 0x1c(r29)
	bl       play__Q24Game9THPPlayerFv
	b        lbl_8023325C

lbl_80232CE8:
	lwz      r3, 0x1c(r29)
	bl       isFinishPlaying__Q24Game9THPPlayerFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8023325C
	lwz      r3, 0x1c(r29)
	bl       stop__Q24Game9THPPlayerFv
	li       r0, 5
	addi     r3, r1, 0x50
	stb      r0, 0x11(r29)
	li       r5, 0
	lwz      r4, 0x2c(r29)
	lwz      r6, 0x14(r29)
	bl
__ct__Q32kh6Screen15DispFinalResultFPQ32kh6Screen15TotalResultDataQ42kh6Screen15DispFinalResult10ResultTypeP7JKRHeap
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	lwz      r4, 0x28(r29)
	bl       setGamePad__Q26Screen9Game2DMgrFP10Controller
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	addi     r4, r1, 0x50
	bl open_FinalResult__Q26Screen9Game2DMgrFRQ32kh6Screen15DispFinalResult lwz
r0, spSceneMgr__8PSSystem@sda21(r13) cmplwi   r0, 0 bne      lbl_80232D54 addi
r3, r31, 0x1c addi     r5, r31, 0x28 li       r4, 0x1d3 crclr    6 bl
panic_f__12JUTExceptionFPCciPCce

lbl_80232D54:
	lwz      r29, spSceneMgr__8PSSystem@sda21(r13)
	lwz      r0, 4(r29)
	cmplwi   r0, 0
	bne      lbl_80232D78
	addi     r3, r31, 0x34
	addi     r5, r31, 0x28
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80232D78:
	lwz      r3, 4(r29)
	lwz      r3, 4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r3, playData__4Game@sda21(r13)
	bl       clearCurrentCave__Q24Game8PlayDataFv
	lwz      r3, sys@sda21(r13)
	li       r0, 1
	lwz      r3, 0x60(r3)
	stb      r0, 0x42(r3)
	lwz      r3, sys@sda21(r13)
	bl       getPlayCommonData__6SystemFv
	lbz      r0, 0(r3)
	li       r4, 2
	ori      r0, r0, 1
	stb      r0, 0(r3)
	lwz      r3, playData__4Game@sda21(r13)
	bl       courseOpen__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_80232DDC
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 3
	bl       openCourse__Q24Game8PlayDataFi

lbl_80232DDC:
	lwz      r5, playData__4Game@sda21(r13)
	li       r3, 4
	li       r0, 0
	lbz      r4, 0x2f(r5)
	ori      r4, r4, 1
	stb      r4, 0x2f(r5)
	lwz      r4, playData__4Game@sda21(r13)
	stb      r3, 0x19(r4)
	stw      r0, 0x1c(r4)
	b        lbl_8023325C
	.global  lbl_80232E04

lbl_80232E04:
	lwz      r3, particle2dMgr@sda21(r13)
	bl       update__14TParticle2dMgrFv
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       check_FinalResult__Q26Screen9Game2DMgrCFv
	cmpwi    r3, 0
	beq      lbl_8023325C
	li       r0, 6
	lis      r3, __vt__Q32og6Screen14DispMemberBase@ha
	stb      r0, 0x11(r29)
	li       r5, 0
	addi     r0, r3, __vt__Q32og6Screen14DispMemberBase@l
	lis      r3, __vt__Q32og6Screen22DispMemberFinalMessage@ha
	stw      r0, 8(r1)
	addi     r0, r3, __vt__Q32og6Screen22DispMemberFinalMessage@l
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	addi     r4, r1, 8
	stw      r5, 0xc(r1)
	stw      r0, 8(r1)
	stw      r5, 0x10(r1)
	bl
open_FinalMessage__Q26Screen9Game2DMgrFRQ32og6Screen22DispMemberFinalMessage b
lbl_8023325C .global  lbl_80232E58

lbl_80232E58:
	lwz      r3, particle2dMgr@sda21(r13)
	bl       update__14TParticle2dMgrFv
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       check_FinalMessage__Q26Screen9Game2DMgrCFv
	cmpwi    r3, 2
	beq      lbl_80232F18
	bge      lbl_8023325C
	cmpwi    r3, 1
	bge      lbl_80232E80
	b        lbl_8023325C

lbl_80232E80:
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80232EA0
	addi     r3, r31, 0x1c
	addi     r5, r31, 0x28
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80232EA0:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_80232EC4
	addi     r3, r31, 0x34
	addi     r5, r31, 0x28
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80232EC4:
	lwz      r3, 4(r30)
	li       r4, 0x1e
	lwz      r3, 4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	lwz      r3, 0x18(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	li       r3, 7
	li       r0, 1
	stb      r3, 0x11(r29)
	li       r4, 1
	stb      r0, 0x20(r29)
	lwz      r3, 0x1c(r29)
	bl       load__Q24Game9THPPlayerFQ34Game9THPPlayer11EMovieIndex
	b        lbl_8023325C

lbl_80232F18:
	mr       r3, r30
	bl       flow_goto_title__Q24Game17SingleGameSectionFv
	b        lbl_8023325C
	.global  lbl_80232F24

lbl_80232F24:
	lwz      r3, 0x1c(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x20(r29)
	cmplwi   r0, 0
	beq      lbl_80232F68
	lwz      r3, 0x1c(r29)
	bl       isFinishLoading__Q24Game9THPPlayerFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8023325C
	li       r0, 0
	stb      r0, 0x20(r29)
	lwz      r3, 0x1c(r29)
	bl       play__Q24Game9THPPlayerFv
	b        lbl_8023325C

lbl_80232F68:
	lwz      r3, 0x1c(r29)
	bl       isFinishPlaying__Q24Game9THPPlayerFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8023325C
	lwz      r3, 0x1c(r29)
	bl       stop__Q24Game9THPPlayerFv
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8023325C
	.global  lbl_80232FA4

lbl_80232FA4:
	lwz      r3, 0x1c(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x20(r29)
	cmplwi   r0, 0
	beq      lbl_80232FE8
	lwz      r3, 0x1c(r29)
	bl       isFinishLoading__Q24Game9THPPlayerFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8023325C
	li       r0, 0
	stb      r0, 0x20(r29)
	lwz      r3, 0x1c(r29)
	bl       play__Q24Game9THPPlayerFv
	b        lbl_8023325C

lbl_80232FE8:
	lwz      r3, 0x1c(r29)
	bl       isFinishPlaying__Q24Game9THPPlayerFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8023325C
	lwz      r3, 0x1c(r29)
	bl       stop__Q24Game9THPPlayerFv
	lwz      r4, 0x2c(r29)
	addi     r3, r1, 0x38
	lwz      r6, 0x14(r29)
	li       r5, 1
	bl
__ct__Q32kh6Screen15DispFinalResultFPQ32kh6Screen15TotalResultDataQ42kh6Screen15DispFinalResult10ResultTypeP7JKRHeap
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	lwz      r4, 0x28(r29)
	bl       setGamePad__Q26Screen9Game2DMgrFP10Controller
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	addi     r4, r1, 0x38
	bl open_FinalResult__Q26Screen9Game2DMgrFRQ32kh6Screen15DispFinalResult lwz
r0, spSceneMgr__8PSSystem@sda21(r13) cmplwi   r0, 0 bne      lbl_8023304C addi
r3, r31, 0x1c addi     r5, r31, 0x28 li       r4, 0x1d3 crclr    6 bl
panic_f__12JUTExceptionFPCciPCce

lbl_8023304C:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_80233070
	addi     r3, r31, 0x34
	addi     r5, r31, 0x28
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80233070:
	lwz      r3, 4(r30)
	lwz      r3, 4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r3, playData__4Game@sda21(r13)
	bl       clearCurrentCave__Q24Game8PlayDataFv
	lwz      r3, sys@sda21(r13)
	li       r0, 1
	lwz      r3, 0x60(r3)
	stb      r0, 0x42(r3)
	lwz      r3, sys@sda21(r13)
	bl       getPlayCommonData__6SystemFv
	lbz      r6, 0(r3)
	li       r5, 0xa
	li       r4, 1
	li       r0, 0
	ori      r6, r6, 2
	stb      r6, 0(r3)
	lwz      r6, playData__4Game@sda21(r13)
	lbz      r3, 0x2f(r6)
	ori      r3, r3, 2
	stb      r3, 0x2f(r6)
	stb      r5, 0x11(r29)
	lwz      r3, playData__4Game@sda21(r13)
	stb      r4, 0x19(r3)
	stw      r0, 0x1c(r3)
	b        lbl_8023325C
	.global  lbl_802330E4

lbl_802330E4:
	lwz      r3, 0x1c(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x20(r29)
	cmplwi   r0, 0
	beq      lbl_80233128
	lwz      r3, 0x1c(r29)
	bl       isFinishLoading__Q24Game9THPPlayerFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8023325C
	li       r0, 0
	stb      r0, 0x20(r29)
	lwz      r3, 0x1c(r29)
	bl       play__Q24Game9THPPlayerFv
	b        lbl_8023325C

lbl_80233128:
	lwz      r3, 0x1c(r29)
	bl       isFinishPlaying__Q24Game9THPPlayerFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8023325C
	lwz      r3, 0x1c(r29)
	bl       stop__Q24Game9THPPlayerFv
	lwz      r4, 0x2c(r29)
	addi     r3, r1, 0x20
	lwz      r6, 0x14(r29)
	li       r5, 1
	bl
__ct__Q32kh6Screen15DispFinalResultFPQ32kh6Screen15TotalResultDataQ42kh6Screen15DispFinalResult10ResultTypeP7JKRHeap
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	lwz      r4, 0x28(r29)
	bl       setGamePad__Q26Screen9Game2DMgrFP10Controller
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	addi     r4, r1, 0x20
	bl open_FinalResult__Q26Screen9Game2DMgrFRQ32kh6Screen15DispFinalResult lwz
r0, spSceneMgr__8PSSystem@sda21(r13) cmplwi   r0, 0 bne      lbl_8023318C addi
r3, r31, 0x1c addi     r5, r31, 0x28 li       r4, 0x1d3 crclr    6 bl
panic_f__12JUTExceptionFPCciPCce

lbl_8023318C:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_802331B0
	addi     r3, r31, 0x34
	addi     r5, r31, 0x28
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802331B0:
	lwz      r3, 4(r30)
	lwz      r3, 4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r3, playData__4Game@sda21(r13)
	bl       clearCurrentCave__Q24Game8PlayDataFv
	lwz      r3, sys@sda21(r13)
	li       r0, 1
	lwz      r3, 0x60(r3)
	stb      r0, 0x42(r3)
	lwz      r3, sys@sda21(r13)
	bl       getPlayCommonData__6SystemFv
	lbz      r6, 0(r3)
	li       r5, 0xa
	li       r4, 1
	li       r0, 0
	ori      r6, r6, 2
	stb      r6, 0(r3)
	lwz      r6, playData__4Game@sda21(r13)
	lbz      r3, 0x2f(r6)
	ori      r3, r3, 2
	stb      r3, 0x2f(r6)
	stb      r5, 0x11(r29)
	lwz      r3, playData__4Game@sda21(r13)
	stb      r4, 0x19(r3)
	stw      r0, 0x1c(r3)
	b        lbl_8023325C
	.global  lbl_80233224

lbl_80233224:
	lwz      r3, particle2dMgr@sda21(r13)
	bl       update__14TParticle2dMgrFv
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       check_FinalResult__Q26Screen9Game2DMgrCFv
	cmpwi    r3, 0
	beq      lbl_8023325C
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8023325C:
	lwz      r0, 0x84(r1)
	lwz      r31, 0x7c(r1)
	lwz      r30, 0x78(r1)
	lwz      r29, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	80233278
 * Size:	0000D4
 */
void SingleGame::EndingState::draw(Game::SingleGameSection*, Graphics&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r5
	stw      r30, 8(r1)
	mr       r30, r4
	lwz      r0, 0x14(r3)
	cmplwi   r0, 0
	beq      lbl_80233334
	lwz      r3, 0x1c(r3)
	cmplwi   r3, 0
	beq      lbl_802332C0
	lwz      r12, 0(r3)
	mr       r4, r31
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl

lbl_802332C0:
	addi     r3, r31, 0x190
	lwz      r12, 0x190(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, particle2dMgr@sda21(r13)
	li       r4, 1
	li       r5, 0
	bl       draw__14TParticle2dMgrFUcUs
	addi     r3, r31, 0xbc
	lwz      r12, 0xbc(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	lwz      r12, 0x118(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x190
	lwz      r12, 0x190(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, particle2dMgr@sda21(r13)
	li       r4, 0
	li       r5, 0
	bl       draw__14TParticle2dMgrFUcUs

lbl_80233334:
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
 * Address:	8023334C
 * Size:	0000B8
 */
void SingleGame::EndingState::cleanup(Game::SingleGameSection*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8023338C
	lis      r3, lbl_804839CC@ha
	lis      r5, lbl_804839D8@ha
	addi     r3, r3, lbl_804839CC@l
	li       r4, 0x1d3
	addi     r5, r5, lbl_804839D8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8023338C:
	lwz      r31, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r31, 0
	bne      lbl_802333B4
	lis      r3, lbl_804839CC@ha
	lis      r5, lbl_804839D8@ha
	addi     r3, r3, lbl_804839CC@l
	li       r4, 0x1dc
	addi     r5, r5, lbl_804839D8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802333B4:
	mr       r3, r31
	bl       deleteCurrentScene__Q28PSSystem8SceneMgrFv
	lwz      r3, 0x1c(r30)
	cmplwi   r3, 0
	beq      lbl_802333CC
	bl       stop__Q24Game9THPPlayerFv

lbl_802333CC:
	lwz      r3, 0x14(r30)
	bl       freeAll__7JKRHeapFv
	lwz      r3, 0x14(r30)
	bl       destroy__7JKRHeapFv
	li       r0, 0
	stw      r0, 0x14(r30)
	lwz      r3, 0x18(r30)
	bl       becomeCurrentHeap__7JKRHeapFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

namespace og {
namespace Screen {

/*
 * --INFO--
 * Address:	80233404
 * Size:	000008
 */
u32 DispMemberFinalMessage::getSize(void) { return 0xC; }

/*
 * --INFO--
 * Address:	8023340C
 * Size:	00000C
 */
void DispMemberFinalMessage::getOwnerID(void)
{
	/*
lis      r3, 0x004F4741@ha
addi     r3, r3, 0x004F4741@l
blr
	*/
}

/*
 * --INFO--
 * Address:	80233418
 * Size:	000014
 */
void DispMemberFinalMessage::getMemberID(void)
{
	/*
lis      r4, 0x4C4D5347@ha
lis      r3, 0x46494E41@ha
addi     r4, r4, 0x4C4D5347@l
addi     r3, r3, 0x46494E41@l
blr
	*/
}

} // namespace Screen
} // namespace og

/*
 * --INFO--
 * Address:	8023342C
 * Size:	000030
 */
void Delegate<Game::SingleGame::EndingState>::invoke()
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
 * Address:	8023345C
 * Size:	000028
 */
void __sinit_singleGS_Ending_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804C1370@ha
	stw      r0, lbl_80515CA0@sda21(r13)
	stfsu    f0, lbl_804C1370@l(r3)
	stfs     f0, lbl_80515CA4@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
