#include "types.h"
#include "nans.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_vsGS_Title_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80483458
    lbl_80483458:
        .skip 0xC
    .global lbl_80483464
    lbl_80483464:
        .asciz "vsGS_Title"
        .skip 1
    .global lbl_80483470
    lbl_80483470:
        .asciz "caveinfo.txt"
        .skip 3
    .global lbl_80483480
    lbl_80483480:
        .asciz "caveinfo_metal.txt"
        .skip 1
    .global lbl_80483494
    lbl_80483494:
        .asciz "caveinfo_conc.txt"
        .skip 2
    .global lbl_804834A8
    lbl_804834A8:
        .asciz "caveinfo_tsuchi.txt"
        .4byte 0x83528393
        .4byte 0x834E838A
        .4byte 0x815B8367
        .4byte 0x00000000
    .global lbl_804834CC
    lbl_804834CC:
        .asciz "PSGame.h"
        .skip 3
    .global lbl_804834D8
    lbl_804834D8:
        .asciz "P2Assert"
        .skip 3
        .asciz "PSScene.h"
        .skip 2
        .asciz "from Morimun:STATE_GO:stageNo=%d:playType=%d\n"
        .skip 2
        .asciz "vsGS_Title.cpp"
        .skip 1
        .asciz "PikiContainer"
        .skip 2
        .4byte 0x00000000
        .4byte 0x00000001
        .4byte 0x00000002
        .4byte 0xFFFFFFFF

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804C0DE8
    lbl_804C0DE8:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global "cMaps__24@unnamed@vsGS_Title_cpp@"
    "cMaps__24@unnamed@vsGS_Title_cpp@":
        .4byte lbl_80483470
        .4byte lbl_80483480
        .4byte lbl_80483494
        .4byte lbl_804834A8
    .global lbl_804C0E04
    lbl_804C0E04:
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte dvdload__Q34Game6VsGame10TitleStateFv
    .global __vt__Q28Morimura18DispMemberVsSelect
    __vt__Q28Morimura18DispMemberVsSelect:
        .4byte 0
        .4byte 0
        .4byte getSize__Q28Morimura18DispMemberVsSelectFv
        .4byte getOwnerID__Q28Morimura18DispMemberVsSelectFv
        .4byte getMemberID__Q28Morimura18DispMemberVsSelectFv
        .4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
    .global __vt__Q28Morimura25DispMemberChallengeSelect
    __vt__Q28Morimura25DispMemberChallengeSelect:
        .4byte 0
        .4byte 0
        .4byte getSize__Q28Morimura25DispMemberChallengeSelectFv
        .4byte getOwnerID__Q28Morimura25DispMemberChallengeSelectFv
        .4byte getMemberID__Q28Morimura25DispMemberChallengeSelectFv
        .4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
    .global __vt__Q34Game6VsGame10TitleState
    __vt__Q34Game6VsGame10TitleState:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game6VsGame10TitleStateFPQ24Game13VsGameSectionPQ24Game8StateArg
        .4byte exec__Q34Game6VsGame10TitleStateFPQ24Game13VsGameSection
        .4byte cleanup__Q34Game6VsGame10TitleStateFPQ24Game13VsGameSection
        .4byte
   "resume__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
        .4byte
   "restart__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
        .4byte
   "transit__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSectioniPQ24Game8StateArg"
        .4byte
   draw__Q34Game6VsGame10TitleStateFPQ24Game13VsGameSectionR8Graphics .4byte
   pre2dDraw__Q34Game6VsGame5StateFR8GraphicsPQ24Game13VsGameSection .4byte
   onOrimaDown__Q34Game6VsGame5StateFPQ24Game13VsGameSectioni .4byte
   onMovieStart__Q34Game6VsGame5StateFPQ24Game13VsGameSectionPQ24Game11MovieConfigUlUl
        .4byte
   onMovieDone__Q34Game6VsGame5StateFPQ24Game13VsGameSectionPQ24Game11MovieConfigUlUl
        .4byte
   onNextFloor__Q34Game6VsGame5StateFPQ24Game13VsGameSectionPQ34Game8ItemHole4Item
        .4byte on_section_fadeout__Q34Game6VsGame5StateFPQ24Game13VsGameSection
        .4byte goingToCave__Q34Game6VsGame5StateFPQ24Game13VsGameSection
        .4byte onBattleFinished__Q34Game6VsGame5StateFPQ24Game13VsGameSectionib
        .4byte
   onRedOrBlueSuckStart__Q34Game6VsGame5StateFPQ24Game13VsGameSectionib .4byte
   isCardUsable__Q34Game6VsGame5StateFPQ24Game13VsGameSection .global
   "__vt__36Delegate<Q34Game6VsGame10TitleState>"
    "__vt__36Delegate<Q34Game6VsGame10TitleState>":
        .4byte 0
        .4byte 0
        .4byte "invoke__36Delegate<Q34Game6VsGame10TitleState>Fv"
    .global __vt__Q34Game6VsGame5State
    __vt__Q34Game6VsGame5State:
        .4byte 0
        .4byte 0
        .4byte
   "init__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSectionPQ24Game8StateArg"
        .4byte
   "exec__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
        .4byte
   "cleanup__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
        .4byte
   "resume__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
        .4byte
   "restart__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
        .4byte
   "transit__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSectioniPQ24Game8StateArg"
        .4byte draw__Q34Game6VsGame5StateFPQ24Game13VsGameSectionR8Graphics
        .4byte pre2dDraw__Q34Game6VsGame5StateFR8GraphicsPQ24Game13VsGameSection
        .4byte onOrimaDown__Q34Game6VsGame5StateFPQ24Game13VsGameSectioni
        .4byte
   onMovieStart__Q34Game6VsGame5StateFPQ24Game13VsGameSectionPQ24Game11MovieConfigUlUl
        .4byte
   onMovieDone__Q34Game6VsGame5StateFPQ24Game13VsGameSectionPQ24Game11MovieConfigUlUl
        .4byte
   onNextFloor__Q34Game6VsGame5StateFPQ24Game13VsGameSectionPQ34Game8ItemHole4Item
        .4byte on_section_fadeout__Q34Game6VsGame5StateFPQ24Game13VsGameSection
        .4byte goingToCave__Q34Game6VsGame5StateFPQ24Game13VsGameSection
        .4byte onBattleFinished__Q34Game6VsGame5StateFPQ24Game13VsGameSectionib
        .4byte
   onRedOrBlueSuckStart__Q34Game6VsGame5StateFPQ24Game13VsGameSectionib .4byte
   isCardUsable__Q34Game6VsGame5StateFPQ24Game13VsGameSection .global
   "__vt__Q24Game32FSMState<Q24Game13VsGameSection>"
    "__vt__Q24Game32FSMState<Q24Game13VsGameSection>":
        .4byte 0
        .4byte 0
        .4byte
   "init__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSectionPQ24Game8StateArg"
        .4byte
   "exec__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
        .4byte
   "cleanup__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
        .4byte
   "resume__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
        .4byte
   "restart__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
        .4byte
   "transit__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSectioniPQ24Game8StateArg"
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515C60
    lbl_80515C60:
        .skip 0x4
    .global lbl_80515C64
    lbl_80515C64:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051A250
    lbl_8051A250:
        .4byte 0x00000000
    .global lbl_8051A254
    lbl_8051A254:
        .float 1.0
    .global lbl_8051A258
    lbl_8051A258:
        .4byte 0xBF800000
    .global lbl_8051A25C
    lbl_8051A25C:
        .float 0.5
    .global lbl_8051A260
    lbl_8051A260:
        .4byte 0x3F7FBE77
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	80228328
 * Size:	0000F8
 */
VsGame::TitleState::TitleState(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__Q24Game32FSMState<Q24Game13VsGameSection>"@ha
	li       r5, 0
	stw      r0, 0x24(r1)
	addi     r0, r4, "__vt__Q24Game32FSMState<Q24Game13VsGameSection>"@l
	lis      r4, __vt__Q34Game6VsGame5State@ha
	stw      r31, 0x1c(r1)
	mr       r31, r3
	addi     r4, r4, __vt__Q34Game6VsGame5State@l
	stw      r0, 0(r3)
	lis      r3, __vt__Q34Game6VsGame10TitleState@ha
	addi     r0, r3, __vt__Q34Game6VsGame10TitleState@l
	stw      r5, 4(r31)
	li       r3, 0xb0
	stw      r5, 8(r31)
	stw      r4, 0(r31)
	stw      r0, 0(r31)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80228388
	li       r4, 0
	bl       __ct__10ControllerFQ210JUTGamePad8EPadPort
	mr       r0, r3

lbl_80228388:
	stw      r0, 0x30(r31)
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802283E4
	lis      r4, lbl_804C0E04@ha
	lis      r5, __vt__9IDelegate@ha
	addi     r8, r4, lbl_804C0E04@l
	lis      r4, "__vt__36Delegate<Q34Game6VsGame10TitleState>"@ha
	lwz      r7, 0(r8)
	addi     r5, r5, __vt__9IDelegate@l
	lwz      r6, 4(r8)
	addi     r0, r4, "__vt__36Delegate<Q34Game6VsGame10TitleState>"@l
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

lbl_802283E4:
	stw      r3, 0x1c(r31)
	li       r3, 0xb0
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80228404
	li       r4, 1
	bl       __ct__10ControllerFQ210JUTGamePad8EPadPort
	mr       r0, r3

lbl_80228404:
	stw      r0, 0x34(r31)
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
 * Address:	80228420
 * Size:	000134
 */
void VsGame::TitleState::init(Game::VsGameSection*, Game::StateArg*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r3, naviMgr__4Game@sda21(r13)
	bl       clearDeadCount__Q24Game7NaviMgrFv
	lfs      f0, lbl_8051A250@sda21(r2)
	li       r0, 0
	mr       r3, r30
	stfs     f0, 0x1f4(r30)
	stfs     f0, 0x1f0(r30)
	stw      r0, 0x3bc(r30)
	stfs     f0, 0x3c0(r30)
	bl       clearGetDopeCount__Q24Game13VsGameSectionFv
	mr       r3, r30
	bl       clearGetCherryCount__Q24Game13VsGameSectionFv
	li       r0, 0
	cmplwi   r31, 0
	stw      r0, 0x324(r30)
	beq      lbl_80228498
	lbz      r0, 0(r31)
	cmplwi   r0, 0
	beq      lbl_80228498
	mr       r3, r30
	bl       clearHeap__Q24Game15BaseGameSectionFv

lbl_80228498:
	li       r0, 1
	lis      r3, "cMaps__24@unnamed@vsGS_Title_cpp@"@ha
	stb      r0, 0x205(r30)
	li       r0, 0
	addi     r4, r3, "cMaps__24@unnamed@vsGS_Title_cpp@"@l
	addi     r3, r30, 0x224
	stw      r0, 0x208(r30)
	stw      r0, 0x18(r29)
	stw      r0, 0x14(r29)
	stb      r0, 0x10(r29)
	stw      r0, 0x2c(r29)
	stw      r0, 0x24(r29)
	lwz      r0, 0x24(r29)
	slwi     r0, r0, 2
	lwzx     r4, r4, r0
	bl       strcpy
	li       r0, 0
	stw      r0, 0x20(r29)
	lwz      r3, 0x20c(r30)
	lwzu     r12, 0x18(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x28(r29)
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	bl       initPlayData__Q24Game13VsGameSectionFv
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	lwz      r3, 0x18(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, 0x334(r30)
	stw      r0, 0x33c(r30)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void VsGame::TitleState::initNext(Game::VsGameSection*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80228554
 * Size:	0003F4
 */
void VsGame::TitleState::dvdload(void)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	lis      r4, lbl_80483458@ha
	stw      r0, 0x64(r1)
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	stw      r29, 0x54(r1)
	mr       r29, r3
	addi     r3, r1, 8
	stw      r28, 0x50(r1)
	addi     r28, r4, lbl_80483458@l
	bl       __ct__Q26PSGame9SceneInfoFv
	lwz      r4, gameSystem__4Game@sda21(r13)
	li       r3, 0
	lwz      r0, 0x44(r4)
	cmpwi    r0, 2
	beq      lbl_802285A0
	cmpwi    r0, 3
	bne      lbl_802285A4

lbl_802285A0:
	li       r3, 1

lbl_802285A4:
	clrlwi.  r0, r3, 0x18
	beq      lbl_802285B8
	li       r0, 0x11
	stb      r0, 0xe(r1)
	b        lbl_802285C0

lbl_802285B8:
	li       r0, 0x13
	stb      r0, 0xe(r1)

lbl_802285C0:
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	li       r3, 0
	stb      r3, 0xf(r1)
	cmplwi   r0, 0
	bne      lbl_802285E8
	addi     r3, r28, 0x74
	addi     r5, r28, 0x80
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802285E8:
	lwz      r3, spSceneMgr__8PSSystem@sda21(r13)
	addi     r4, r1, 8
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80228620
	addi     r3, r28, 0x74
	addi     r5, r28, 0x80
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80228620:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_80228644
	addi     r3, r28, 0x8c
	addi     r5, r28, 0x80
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80228644:
	lwz      r3, 4(r30)
	lwz      r3, 4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8022867C
	addi     r3, r28, 0x74
	addi     r5, r28, 0x80
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8022867C:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_802286A0
	addi     r3, r28, 0x8c
	addi     r5, r28, 0x80
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802286A0:
	lwz      r3, 4(r30)
	lwz      r3, 4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	li       r3, 8
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_802286D4
	li       r4, 0x1e
	bl       __ct__Q24Game21Challenge2D_TitleInfoFi
	mr       r0, r3

lbl_802286D4:
	stw      r0, 0x3c(r29)
	li       r3, 8
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_80228710
	lwz      r3, 0x38(r29)
	lwz      r3, 0x210(r3)
	lwzu     r12, 0x18(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	mr       r3, r28
	bl       __ct__Q24Game14Vs2D_TitleInfoFi
	mr       r28, r3

lbl_80228710:
	stw      r28, 0x40(r29)
	li       r28, 0

lbl_80228718:
	lwz      r3, sys@sda21(r13)
	bl       getPlayCommonData__6SystemFv
	mr       r4, r28
	bl       challenge_get_CourseState__Q24Game14PlayCommonDataFi
	addi     r28, r28, 1
	cmpwi    r28, 5
	blt      lbl_80228718
	li       r30, 0

lbl_80228738:
	lwz      r3, sys@sda21(r13)
	bl       getPlayCommonData__6SystemFv
	mr       r4, r30
	bl       challenge_get_CourseState__Q24Game14PlayCommonDataFi
	mr       r28, r3
	lwz      r3, 0x3c(r29)
	mr       r4, r30
	bl       __cl__Q24Game21Challenge2D_TitleInfoFi
	lwz      r5, 0x38(r29)
	mr       r31, r3
	mr       r4, r30
	lwz      r3, 0x20c(r5)
	bl       getStageData__Q34Game13ChallengeGame9StageListFi
	cmplwi   r3, 0
	beq      lbl_802288A0
	lwz      r0, 0x6c(r3)
	addi     r6, r3, 0x18
	addi     r5, r28, 4
	addi     r4, r28, 0x10
	stw      r0, 0(r31)
	li       r0, 0
	lfs      f0, 0x60(r3)
	fctiwz   f0, f0
	stfd     f0, 0x40(r1)
	lwz      r7, 0x44(r1)
	stw      r7, 0xc(r31)
	lwz      r7, 0x64(r3)
	stw      r7, 4(r31)
	lwz      r7, 0x68(r3)
	stw      r7, 8(r31)
	stw      r6, 0x10(r31)
	stw      r5, 0x14(r31)
	stw      r4, 0x18(r31)
	lwz      r3, 0x74(r3)
	stw      r3, 0x1c(r31)
	stb      r0, 0x20(r31)
	lwz      r3, sys@sda21(r13)
	bl       getPlayCommonData__6SystemFv
	mr       r4, r30
	bl       challenge_checkOpen__Q24Game14PlayCommonDataFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_802287EC
	lbz      r0, 0x20(r31)
	ori      r0, r0, 1
	stb      r0, 0x20(r31)

lbl_802287EC:
	lwz      r3, sys@sda21(r13)
	bl       getPlayCommonData__6SystemFv
	mr       r4, r30
	bl       challenge_checkClear__Q24Game14PlayCommonDataFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_80228810
	lbz      r0, 0x20(r31)
	ori      r0, r0, 2
	stb      r0, 0x20(r31)

lbl_80228810:
	lwz      r3, sys@sda21(r13)
	bl       getPlayCommonData__6SystemFv
	mr       r4, r30
	bl       challenge_checkJustOpen__Q24Game14PlayCommonDataFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_80228834
	lbz      r0, 0x20(r31)
	ori      r0, r0, 8
	stb      r0, 0x20(r31)

lbl_80228834:
	lwz      r3, sys@sda21(r13)
	bl       getPlayCommonData__6SystemFv
	mr       r4, r30
	bl       challenge_checkJustClear__Q24Game14PlayCommonDataFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_80228858
	lbz      r0, 0x20(r31)
	ori      r0, r0, 0x10
	stb      r0, 0x20(r31)

lbl_80228858:
	lwz      r3, sys@sda21(r13)
	bl       getPlayCommonData__6SystemFv
	mr       r4, r30
	bl       challenge_checkJustKunsho__Q24Game14PlayCommonDataFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_8022887C
	lbz      r0, 0x20(r31)
	ori      r0, r0, 0x20
	stb      r0, 0x20(r31)

lbl_8022887C:
	lwz      r3, sys@sda21(r13)
	bl       getPlayCommonData__6SystemFv
	mr       r4, r30
	bl       challenge_checkKunsho__Q24Game14PlayCommonDataFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_802288A0
	lbz      r0, 0x20(r31)
	ori      r0, r0, 4
	stb      r0, 0x20(r31)

lbl_802288A0:
	addi     r30, r30, 1
	cmpwi    r30, 0x1e
	blt      lbl_80228738
	li       r28, 0

lbl_802288B0:
	lwz      r3, sys@sda21(r13)
	bl       getPlayCommonData__6SystemFv
	mr       r4, r28
	bl       challenge_get_CourseState__Q24Game14PlayCommonDataFi
	addi     r28, r28, 1
	cmpwi    r28, 5
	blt      lbl_802288B0
	li       r28, 0
	b        lbl_80228908

lbl_802288D4:
	lwz      r3, 0x40(r29)
	mr       r4, r28
	bl       __cl__Q24Game14Vs2D_TitleInfoFi
	lwz      r5, 0x38(r29)
	mr       r30, r3
	mr       r4, r28
	lwz      r3, 0x210(r5)
	bl       getStageData__Q34Game6VsGame9StageListFi
	cmplwi   r3, 0
	beq      lbl_80228904
	lwz      r0, 0x6c(r3)
	stw      r0, 0(r30)

lbl_80228904:
	addi     r28, r28, 1

lbl_80228908:
	lwz      r3, 0x38(r29)
	lwz      r3, 0x210(r3)
	lwzu     r12, 0x18(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpw     r28, r3
	blt      lbl_802288D4
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	lwz      r29, 0x54(r1)
	lwz      r28, 0x50(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	80228948
 * Size:	000038
 */
void VsGame::TitleState::exec(Game::VsGameSection*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r5, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r5)
	cmpwi    r0, 1
	bne      lbl_8022896C
	bl       execVs__Q34Game6VsGame10TitleStateFPQ24Game13VsGameSection
	b        lbl_80228970

lbl_8022896C:
	bl       execChallenge__Q34Game6VsGame10TitleStateFPQ24Game13VsGameSection

lbl_80228970:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80228980
 * Size:	0002DC
 */
void VsGame::TitleState::execChallenge(Game::VsGameSection*)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r4
	stw      r30, 0x48(r1)
	mr       r30, r3
	lis      r3, lbl_80483458@ha
	stw      r29, 0x44(r1)
	stw      r28, 0x40(r1)
	addi     r28, r3, lbl_80483458@l
	lbz      r0, 0x10(r30)
	cmpwi    r0, 1
	beq      lbl_80228A20
	bge      lbl_802289C8
	cmpwi    r0, 0
	bge      lbl_802289D4
	b        lbl_80228C1C

lbl_802289C8:
	cmpwi    r0, 3
	bge      lbl_80228C1C
	b        lbl_80228AD8

lbl_802289D4:
	lwz      r0, sCurrentHeap__7JKRHeap@sda21(r13)
	stw      r0, 0x18(r30)
	lwz      r28, 0x18(r30)
	mr       r3, r28
	bl       getFreeSize__7JKRHeapFv
	mr       r4, r28
	li       r5, 1
	bl       create__10JKRExpHeapFUlP7JKRHeapb
	stw      r3, 0x14(r30)
	lwz      r3, 0x14(r30)
	bl       becomeCurrentHeap__7JKRHeapFv
	li       r0, 1
	addi     r4, r31, 0x184
	stb      r0, 0x10(r30)
	stw      r31, 0x38(r30)
	lwz      r3, sys@sda21(r13)
	lwz      r5, 0x1c(r30)
	bl       dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
	b        lbl_80228C3C

lbl_80228A20:
	lwz      r0, 0x19c(r31)
	cmpwi    r0, 2
	bne      lbl_80228C3C
	li       r0, 2
	lis      r3, __vt__Q32og6Screen14DispMemberBase@ha
	stb      r0, 0x10(r30)
	li       r4, 0
	addi     r0, r3, __vt__Q32og6Screen14DispMemberBase@l
	lis      r3, __vt__Q28Morimura25DispMemberChallengeSelect@ha
	stw      r0, 0x1c(r1)
	addi     r3, r3, __vt__Q28Morimura25DispMemberChallengeSelect@l
	li       r0, -1
	lwz      r5, gameSystem__4Game@sda21(r13)
	stw      r4, 0x20(r1)
	stw      r3, 0x1c(r1)
	stw      r4, 0x24(r1)
	stw      r4, 0x28(r1)
	stw      r0, 0x2c(r1)
	stw      r4, 0x30(r1)
	stw      r4, 0x34(r1)
	stw      r4, 0x38(r1)
	stw      r4, 0x3c(r1)
	lwz      r0, 0x3c(r30)
	stw      r0, 0x24(r1)
	lwz      r0, 0x338(r31)
	stw      r0, 0x30(r1)
	lwz      r0, 0x14(r30)
	stw      r0, 0x28(r1)
	lwz      r0, 0x44(r5)
	cmpwi    r0, 1
	beq      lbl_80228AA4
	cmpwi    r0, 3
	bne      lbl_80228AA8

lbl_80228AA4:
	li       r4, 1

lbl_80228AA8:
	clrlwi   r4, r4, 0x18
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	neg      r0, r4
	or       r0, r0, r4
	srwi     r0, r0, 0x1f
	stw      r0, 0x34(r1)
	lwz      r4, 0x30(r30)
	bl       setGamePad__Q26Screen9Game2DMgrFP10Controller
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	addi     r4, r1, 0x1c
	bl
open_ChallengeSelect__Q26Screen9Game2DMgrFRQ28Morimura25DispMemberChallengeSelect
	b        lbl_80228C3C

lbl_80228AD8:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	addi     r4, r1, 0xc
	addi     r5, r1, 8
	bl       check_ChallengeSelect__Q26Screen9Game2DMgrFRiRi
	cmpwi    r3, 3
	beq      lbl_80228B0C
	bge      lbl_80228C1C
	cmpwi    r3, 2
	bge      lbl_80228B00
	b        lbl_80228C1C

lbl_80228B00:
	li       r0, 1
	stb      r0, 0x204(r31)
	b        lbl_80228C3C

lbl_80228B0C:
	lwz      r4, 0xc(r1)
	addi     r3, r28, 0x98
	lwz      r5, 8(r1)
	crclr    6
	bl       OSReport
	lbz      r0, 0x174(r31)
	cmplwi   r0, 0
	beq      lbl_80228B3C
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r0, 1
	stw      r0, 0x44(r3)
	b        lbl_80228B64

lbl_80228B3C:
	lwz      r0, 8(r1)
	cmpwi    r0, 0
	bne      lbl_80228B58
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r0, 2
	stw      r0, 0x44(r3)
	b        lbl_80228B64

lbl_80228B58:
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r0, 3
	stw      r0, 0x44(r3)

lbl_80228B64:
	li       r0, 0
	lwz      r4, 0xc(r1)
	stw      r0, 0x10(r1)
	stw      r0, 0x14(r1)
	stb      r0, 0x18(r1)
	lwz      r3, 0x20c(r31)
	bl       getStageData__Q34Game13ChallengeGame9StageListFi
	or.      r29, r3, r3
	bne      lbl_80228B9C
	addi     r3, r28, 0xc8
	addi     r5, r28, 0x80
	li       r4, 0x143
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80228B9C:
	stw      r29, 0x334(r31)
	addi     r3, r31, 0x224
	addi     r4, r29, 0x20
	lwz      r0, 0xc(r1)
	stw      r0, 0x338(r31)
	bl       strcpy
	li       r0, 0
	addi     r3, r31, 0x214
	stw      r0, 0x14(r1)
	addi     r4, r29, 0x18
	bl       __as__Q24Game13PikiContainerFRQ24Game13PikiContainer
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0
	lwz      r5, 0x68(r29)
	bl       setDopeCount__Q24Game8PlayDataFii
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 1
	lwz      r5, 0x64(r29)
	bl       setDopeCount__Q24Game8PlayDataFii
	lfs      f0, lbl_8051A250@sda21(r2)
	addi     r3, r29, 0x18
	addi     r4, r28, 0xd8
	stfs     f0, 0x3c0(r31)
	bl       dump__Q24Game13PikiContainerFPc
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	addi     r6, r1, 0x10
	li       r5, 1
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80228C1C:
	mr       r3, r31
	bl       doUpdate__Q24Game14BaseHIOSectionFv
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       update__Q26Screen9Game2DMgrFv
	lwz      r3, particle2dMgr@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80228C3C
	bl       update__14TParticle2dMgrFv

lbl_80228C3C:
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	lwz      r29, 0x44(r1)
	lwz      r28, 0x40(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	80228C5C
 * Size:	000030
 */
void transit__Q24Game32FSMState<Game::VsGameSection> FPQ24Game13VsGameSectioniPQ24Game8StateArg(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80228C8C
 * Size:	000430
 */
void VsGame::TitleState::execVs(Game::VsGameSection*)
{
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	stw      r0, 0xa4(r1)
	stw      r31, 0x9c(r1)
	stw      r30, 0x98(r1)
	mr       r30, r4
	stw      r29, 0x94(r1)
	mr       r29, r3
	lis      r3, lbl_80483458@ha
	stw      r28, 0x90(r1)
	addi     r31, r3, lbl_80483458@l
	lbz      r0, 0x10(r29)
	cmpwi    r0, 1
	beq      lbl_80228D2C
	bge      lbl_80228CD4
	cmpwi    r0, 0
	bge      lbl_80228CE0
	b        lbl_8022907C

lbl_80228CD4:
	cmpwi    r0, 3
	bge      lbl_8022907C
	b        lbl_80228E0C

lbl_80228CE0:
	lwz      r0, sCurrentHeap__7JKRHeap@sda21(r13)
	stw      r0, 0x18(r29)
	lwz      r28, 0x18(r29)
	mr       r3, r28
	bl       getFreeSize__7JKRHeapFv
	mr       r4, r28
	li       r5, 1
	bl       create__10JKRExpHeapFUlP7JKRHeapb
	stw      r3, 0x14(r29)
	lwz      r3, 0x14(r29)
	bl       becomeCurrentHeap__7JKRHeapFv
	li       r0, 1
	addi     r4, r30, 0x184
	stb      r0, 0x10(r29)
	stw      r30, 0x38(r29)
	lwz      r3, sys@sda21(r13)
	lwz      r5, 0x1c(r29)
	bl       dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
	b        lbl_8022909C

lbl_80228D2C:
	lwz      r0, 0x19c(r30)
	cmpwi    r0, 2
	bne      lbl_8022909C
	li       r0, 2
	lis      r6, __vt__Q28Morimura18DispMemberVsSelect@ha
	lis      r3, __vt__Q32og6Screen14DispMemberBase@ha
	stb      r0, 0x10(r29)
	addi     r0, r3, __vt__Q32og6Screen14DispMemberBase@l
	li       r7, 0
	stw      r0, 0x58(r1)
	li       r5, -1
	li       r4, 3
	addi     r6, r6, __vt__Q28Morimura18DispMemberVsSelect@l
	stw      r7, 0x5c(r1)
	lwz      r3, mRedWinCount__Q24Game13VsGameSection@sda21(r13)
	stw      r6, 0x58(r1)
	lwz      r0, mBlueWinCount__Q24Game13VsGameSection@sda21(r13)
	stw      r7, 0x60(r1)
	stw      r7, 0x64(r1)
	stw      r7, 0x68(r1)
	stw      r5, 0x6c(r1)
	stw      r7, 0x70(r1)
	stw      r4, 0x74(r1)
	stw      r4, 0x78(r1)
	stw      r7, 0x7c(r1)
	stw      r7, 0x80(r1)
	stw      r5, 0x84(r1)
	stw      r7, 0x88(r1)
	stw      r7, 0x8c(r1)
	lwz      r4, 0x40(r29)
	stw      r4, 0x60(r1)
	lwz      r4, 0x340(r30)
	stw      r4, 0x70(r1)
	lwz      r4, 0x14(r29)
	stw      r4, 0x64(r1)
	lwz      r4, 0x344(r30)
	stw      r4, 0x74(r1)
	lwz      r4, 0x348(r30)
	stw      r4, 0x78(r1)
	stw      r3, 0x7c(r1)
	stw      r0, 0x80(r1)
	lwz      r0, 0x34c(r30)
	stw      r0, 0x84(r1)
	lwz      r3, 0x210(r30)
	lwzu     r12, 0x18(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x88(r1)
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	lwz      r4, 0x30(r29)
	bl       setGamePad__Q26Screen9Game2DMgrFP10Controller
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	addi     r4, r1, 0x58
	bl       open_VsSelect__Q26Screen9Game2DMgrFRQ28Morimura18DispMemberVsSelect
	b        lbl_8022909C

lbl_80228E0C:
	lwz      r3, 0x30(r29)
	lfs      f3, lbl_8051A250@sda21(r2)
	lfs      f5, 0x5c(r3)
	lfs      f6, 0x58(r3)
	fmuls    f4, f5, f5
	lfs      f2, lbl_8051A254@sda21(r2)
	fmadds   f0, f6, f6, f3
	lfs      f1, lbl_8051A258@sda21(r2)
	lwz      r5, 0xe8(r31)
	lwz      r4, 0xec(r31)
	fadds    f4, f4, f0
	lwz      r3, 0xf0(r31)
	lwz      r0, 0xf4(r31)
	stfs     f3, 0x28(r1)
	fcmpo    cr0, f4, f3
	stfs     f3, 0x2c(r1)
	stfs     f2, 0x30(r1)
	stfs     f2, 0x34(r1)
	stfs     f3, 0x38(r1)
	stfs     f3, 0x3c(r1)
	stfs     f3, 0x40(r1)
	stfs     f3, 0x44(r1)
	stfs     f1, 0x48(r1)
	stfs     f1, 0x4c(r1)
	stfs     f3, 0x50(r1)
	stfs     f3, 0x54(r1)
	stw      r5, 0x18(r1)
	stw      r4, 0x1c(r1)
	stw      r3, 0x20(r1)
	stw      r0, 0x24(r1)
	ble      lbl_80228E98
	ble      lbl_80228E9C
	frsqrte  f0, f4
	fmuls    f4, f0, f4
	b        lbl_80228E9C

lbl_80228E98:
	fmr      f4, f3

lbl_80228E9C:
	lfs      f0, lbl_8051A25C@sda21(r2)
	fcmpo    cr0, f4, f0
	ble      lbl_80228F64
	lfs      f4, lbl_8051A250@sda21(r2)
	li       r0, 0
	lfs      f0, 0x2c(r1)
	lfs      f2, 0x28(r1)
	fmr      f1, f4
	fmuls    f0, f0, f4
	lfs      f3, 0x30(r1)
	fmadds   f0, f2, f6, f0
	fmadds   f0, f3, f5, f0
	fcmpo    cr0, f0, f4
	ble      lbl_80228EDC
	fmr      f4, f0
	li       r0, 0

lbl_80228EDC:
	lfs      f0, 0x38(r1)
	lfs      f2, 0x34(r1)
	fmuls    f0, f0, f1
	lfs      f3, 0x3c(r1)
	fmadds   f0, f2, f6, f0
	fmadds   f0, f3, f5, f0
	fcmpo    cr0, f0, f4
	ble      lbl_80228F04
	fmr      f4, f0
	li       r0, 1

lbl_80228F04:
	lfs      f0, 0x44(r1)
	lfs      f2, 0x40(r1)
	fmuls    f0, f0, f1
	lfs      f3, 0x48(r1)
	fmadds   f0, f2, f6, f0
	fmadds   f0, f3, f5, f0
	fcmpo    cr0, f0, f4
	ble      lbl_80228F2C
	fmr      f4, f0
	li       r0, 2

lbl_80228F2C:
	lfs      f0, 0x50(r1)
	lfs      f2, 0x4c(r1)
	fmuls    f0, f0, f1
	lfs      f3, 0x54(r1)
	fmadds   f0, f2, f6, f0
	fmadds   f0, f3, f5, f0
	fcmpo    cr0, f0, f4
	ble      lbl_80228F50
	li       r0, 3

lbl_80228F50:
	slwi     r0, r0, 2
	addi     r3, r1, 0x18
	lwzx     r0, r3, r0
	stw      r0, 0x328(r30)
	b        lbl_80228F6C

lbl_80228F64:
	li       r0, -2
	stw      r0, 0x328(r30)

lbl_80228F6C:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	addi     r4, r1, 8
	addi     r5, r30, 0x344
	addi     r6, r30, 0x348
	bl       check_VsSelect__Q26Screen9Game2DMgrFRiRiRi
	cmpwi    r3, 3
	beq      lbl_80228FA4
	bge      lbl_8022907C
	cmpwi    r3, 2
	bge      lbl_80228F98
	b        lbl_8022907C

lbl_80228F98:
	li       r0, 1
	stb      r0, 0x204(r30)
	b        lbl_8022909C

lbl_80228FA4:
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r4, 1
	li       r0, 0
	stw      r4, 0x44(r3)
	stw      r0, 0xc(r1)
	lwz      r4, 8(r1)
	stw      r0, 0x10(r1)
	stb      r0, 0x14(r1)
	lwz      r3, 0x210(r30)
	bl       getStageData__Q34Game6VsGame9StageListFi
	or.      r28, r3, r3
	bne      lbl_80228FE8
	addi     r3, r31, 0xc8
	addi     r5, r31, 0x80
	li       r4, 0x1c3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80228FE8:
	stw      r28, 0x33c(r30)
	addi     r3, r30, 0x224
	addi     r4, r28, 0x20
	lwz      r0, 8(r1)
	stw      r0, 0x340(r30)
	bl       strcpy
	addi     r3, r30, 0x2a4
	addi     r4, r28, 0x70
	bl       strcpy
	li       r0, 0
	addi     r3, r30, 0x214
	stw      r0, 0x10(r1)
	addi     r4, r28, 0x18
	bl       __as__Q24Game13PikiContainerFRQ24Game13PikiContainer
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0
	lwz      r5, 0x68(r28)
	bl       setDopeCount__Q24Game8PlayDataFii
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 1
	lwz      r5, 0x64(r28)
	bl       setDopeCount__Q24Game8PlayDataFii
	lfs      f1, lbl_8051A260@sda21(r2)
	addi     r3, r28, 0x18
	lfs      f0, 0x60(r28)
	addi     r4, r31, 0xd8
	fadds    f0, f1, f0
	stfs     f0, 0x3c0(r30)
	bl       dump__Q24Game13PikiContainerFPc
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	addi     r6, r1, 0xc
	li       r5, 1
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8022907C:
	mr       r3, r30
	bl       doUpdate__Q24Game14BaseHIOSectionFv
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       update__Q26Screen9Game2DMgrFv
	lwz      r3, particle2dMgr@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8022909C
	bl       update__14TParticle2dMgrFv

lbl_8022909C:
	lwz      r0, 0xa4(r1)
	lwz      r31, 0x9c(r1)
	lwz      r30, 0x98(r1)
	lwz      r29, 0x94(r1)
	lwz      r28, 0x90(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802290BC
 * Size:	000088
 */
void VsGame::TitleState::draw(Game::VsGameSection*, Graphics&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r5
	lbz      r0, 0x10(r3)
	cmplwi   r0, 2
	bne      lbl_80229130
	addi     r3, r31, 0x190
	lwz      r12, 0x190(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, particle2dMgr@sda21(r13)
	li       r4, 1
	li       r5, 0
	bl       draw__14TParticle2dMgrFUcUs
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	mr       r4, r31
	bl       draw__Q26Screen9Game2DMgrFR8Graphics
	addi     r3, r31, 0x190
	lwz      r12, 0x190(r31)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, particle2dMgr@sda21(r13)
	li       r4, 0
	li       r5, 0
	bl       draw__14TParticle2dMgrFUcUs

lbl_80229130:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80229144
 * Size:	0000B0
 */
void VsGame::TitleState::cleanup(Game::VsGameSection*)
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
	bne      lbl_80229184
	lis      r3, lbl_804834CC@ha
	lis      r5, lbl_804834D8@ha
	addi     r3, r3, lbl_804834CC@l
	li       r4, 0x1d3
	addi     r5, r5, lbl_804834D8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80229184:
	lwz      r31, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r31, 0
	bne      lbl_802291AC
	lis      r3, lbl_804834CC@ha
	lis      r5, lbl_804834D8@ha
	addi     r3, r3, lbl_804834CC@l
	li       r4, 0x1dc
	addi     r5, r5, lbl_804834D8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802291AC:
	mr       r3, r31
	bl       deleteCurrentScene__Q28PSSystem8SceneMgrFv
	lwz      r3, particle2dMgr@sda21(r13)
	bl       killAll__14TParticle2dMgrFv
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

/*
 * --INFO--
 * Address:	802291F4
 * Size:	000008
 */
u32 Morimura::DispMemberVsSelect::getSize(void) { return 0x38; }

/*
 * --INFO--
 * Address:	802291FC
 * Size:	00000C
 */
void Morimura::DispMemberVsSelect::getOwnerID(void)
{
	/*
	lis      r3, 0x4D524D52@ha
	addi     r3, r3, 0x4D524D52@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	80229208
 * Size:	000014
 */
void Morimura::DispMemberVsSelect::getMemberID(void)
{
	/*
	lis      r4, 0x4C454354@ha
	lis      r3, 0x56535345@ha
	addi     r4, r4, 0x4C454354@l
	addi     r3, r3, 0x56535345@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	8022921C
 * Size:	000008
 */
u32 Morimura::DispMemberChallengeSelect::getSize(void) { return 0x24; }

/*
 * --INFO--
 * Address:	80229224
 * Size:	00000C
 */
void Morimura::DispMemberChallengeSelect::getOwnerID(void)
{
	/*
	lis      r3, 0x4D524D52@ha
	addi     r3, r3, 0x4D524D52@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	80229230
 * Size:	000014
 */
void Morimura::DispMemberChallengeSelect::getMemberID(void)
{
	/*
	lis      r4, 0x4C454354@ha
	lis      r3, 0x43485345@ha
	addi     r4, r4, 0x4C454354@l
	addi     r3, r3, 0x43485345@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	80229244
 * Size:	000004
 */
void resume__Q24Game32FSMState<Game::VsGameSection> FPQ24Game13VsGameSection(void) { }

/*
 * --INFO--
 * Address:	80229248
 * Size:	000004
 */
void restart__Q24Game32FSMState<Game::VsGameSection> FPQ24Game13VsGameSection(void) { }

/*
 * --INFO--
 * Address:	8022924C
 * Size:	000030
 */
void Delegate<Game::VsGame::TitleState>::invoke()
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
 * Address:	8022927C
 * Size:	000028
 */
void __sinit_vsGS_Title_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804C0DE8@ha
	stw      r0, lbl_80515C60@sda21(r13)
	stfsu    f0, lbl_804C0DE8@l(r3)
	stfs     f0, lbl_80515C64@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
