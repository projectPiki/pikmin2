#include "types.h"
#include "nans.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_vsGS_Result_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80483720
    lbl_80483720:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x76734753
        .4byte 0x5F526573
        .4byte 0x756C7400
    .global lbl_80483738
    lbl_80483738:
        .4byte 0x76734753
        .4byte 0x5F526573
        .4byte 0x756C742E
        .4byte 0x63707000
    .global lbl_80483748
    lbl_80483748:
        .asciz "P2Assert"
        .skip 3
    .global lbl_80483754
    lbl_80483754:
        .4byte 0x81978197
        .4byte 0x81972043
        .4byte 0x6F757273
        .4byte 0x65202564
        .4byte 0x204F7065
        .4byte 0x6E656420
        .4byte 0x21210A00
    .global lbl_80483770
    lbl_80483770:
        .4byte 0x50534761
        .4byte 0x6D652E68
        .4byte 0x00000000
        .4byte 0x50535363
        .4byte 0x656E652E
        .4byte 0x68000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804C0FE0
    lbl_804C0FE0:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_804C0FEC
    lbl_804C0FEC:
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte dvdload__Q34Game6VsGame11ResultStateFv
    .global __vt__Q28Morimura25DispMemberChallengeResult
    __vt__Q28Morimura25DispMemberChallengeResult:
        .4byte 0
        .4byte 0
        .4byte getSize__Q28Morimura25DispMemberChallengeResultFv
        .4byte getOwnerID__Q28Morimura25DispMemberChallengeResultFv
        .4byte getMemberID__Q28Morimura25DispMemberChallengeResultFv
        .4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
    .global __vt__Q34Game6VsGame11ResultState
    __vt__Q34Game6VsGame11ResultState:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game6VsGame11ResultStateFPQ24Game13VsGameSectionPQ24Game8StateArg
        .4byte exec__Q34Game6VsGame11ResultStateFPQ24Game13VsGameSection
        .4byte cleanup__Q34Game6VsGame11ResultStateFPQ24Game13VsGameSection
        .4byte
   "resume__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
        .4byte
   "restart__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
        .4byte
   "transit__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSectioniPQ24Game8StateArg"
        .4byte
   draw__Q34Game6VsGame11ResultStateFPQ24Game13VsGameSectionR8Graphics .4byte
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
   "__vt__37Delegate<Q34Game6VsGame11ResultState>"
    "__vt__37Delegate<Q34Game6VsGame11ResultState>":
        .4byte 0
        .4byte 0
        .4byte "invoke__37Delegate<Q34Game6VsGame11ResultState>Fv"

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515C70
    lbl_80515C70:
        .skip 0x4
    .global lbl_80515C74
    lbl_80515C74:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051A2C0
    lbl_8051A2C0:
        .4byte 0x00000000
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	8022C7F4
 * Size:	000104
 */
VsGame::ResultState::ResultState(void)
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
	li       r0, 4
	lis      r3, __vt__Q34Game6VsGame11ResultState@ha
	stw      r0, 4(r31)
	addi     r0, r3, __vt__Q34Game6VsGame11ResultState@l
	li       r3, 0xb0
	stw      r5, 8(r31)
	stw      r4, 0(r31)
	stw      r0, 0(r31)
	stb      r5, 0x34(r31)
	stb      r5, 0x34(r31)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8022C860
	li       r4, 0
	bl       __ct__10ControllerFQ210JUTGamePad8EPadPort
	mr       r0, r3

lbl_8022C860:
	stw      r0, 0x10(r31)
	li       r3, 0xb0
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8022C880
	li       r4, 1
	bl       __ct__10ControllerFQ210JUTGamePad8EPadPort
	mr       r0, r3

lbl_8022C880:
	stw      r0, 0x14(r31)
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8022C8DC
	lis      r4, lbl_804C0FEC@ha
	lis      r5, __vt__9IDelegate@ha
	addi     r8, r4, lbl_804C0FEC@l
	lis      r4, "__vt__37Delegate<Q34Game6VsGame11ResultState>"@ha
	lwz      r7, 0(r8)
	addi     r5, r5, __vt__9IDelegate@l
	lwz      r6, 4(r8)
	addi     r0, r4, "__vt__37Delegate<Q34Game6VsGame11ResultState>"@l
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

lbl_8022C8DC:
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
 * Address:	8022C8F8
 * Size:	0000BC
 */
void VsGame::ResultState::init(Game::VsGameSection*, Game::StateArg*)
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
	lwz      r6, gGame2DMgr__6Screen@sda21(r13)
	lwz      r3, 0x18(r6)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	lwz      r4, 0x10(r29)
	bl       setGamePad__Q26Screen9Game2DMgrFP10Controller
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       clearSuspendedDemo__Q24Game11MoviePlayerFv
	cmplwi   r31, 0
	bne      lbl_8022C96C
	lis      r3, lbl_80483738@ha
	lis      r5, lbl_80483748@ha
	addi     r3, r3, lbl_80483738@l
	li       r4, 0x30
	addi     r5, r5, lbl_80483748@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8022C96C:
	lbz      r4, 0(r31)
	li       r0, 0
	mr       r3, r30
	stb      r4, 0x34(r29)
	stw      r0, 0x20(r29)
	stw      r0, 0x1c(r29)
	stb      r0, 0x18(r29)
	lwz      r12, 0(r30)
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl
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
 * Address:	8022C9B4
 * Size:	0002A8
 */
void VsGame::ResultState::prepareMorimuraInfo(Game::VsGameSection*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	lbz      r0, 0x34(r3)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_8022C9EC
	lfs      f0, lbl_8051A2C0@sda21(r2)
	stfs     f0, 0x3c0(r29)

lbl_8022C9EC:
	lis      r3, alivePikis__Q24Game8GameStat@ha
	lwzu     r12, alivePikis__Q24Game8GameStat@l(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x28(r28)
	li       r30, 0
	li       r3, 0
	lfs      f0, 0x3c0(r29)
	lwz      r4, 0x3bc(r29)
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	add      r0, r4, r0
	stw      r0, 0x30(r28)
	lwz      r4, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r4)
	cmpwi    r0, 1
	beq      lbl_8022CA40
	cmpwi    r0, 3
	bne      lbl_8022CA44

lbl_8022CA40:
	li       r3, 1

lbl_8022CA44:
	clrlwi.  r0, r3, 0x18
	beq      lbl_8022CA50
	li       r30, 1

lbl_8022CA50:
	lwz      r3, sys@sda21(r13)
	bl       getPlayCommonData__6SystemFv
	lwz      r4, 0x338(r29)
	mr       r5, r30
	bl       challenge_getHighscore__Q24Game14PlayCommonDataFii
	lwz      r30, 0x338(r29)
	mr       r31, r3
	li       r3, 0x20
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8022CA84
	bl       __ct__Q24Game22Challenge2D_ResultInfoFv
	mr       r0, r3

lbl_8022CA84:
	stw      r0, 0x38(r28)
	mr       r4, r30
	lwz      r3, 0x20c(r29)
	bl       getStageData__Q34Game13ChallengeGame9StageListFi
	lwz      r5, 0x38(r28)
	li       r4, 0
	stb      r4, 0(r5)
	lwz      r5, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r5)
	cmpwi    r0, 1
	beq      lbl_8022CAB8
	cmpwi    r0, 3
	bne      lbl_8022CABC

lbl_8022CAB8:
	li       r4, 1

lbl_8022CABC:
	clrlwi.  r0, r4, 0x18
	bne      lbl_8022CAD4
	lwz      r4, 0x38(r28)
	lbz      r0, 0(r4)
	ori      r0, r0, 1
	stb      r0, 0(r4)

lbl_8022CAD4:
	lbz      r0, 0x34(r28)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8022CB0C
	lwz      r4, 0x38(r28)
	lbz      r0, 0(r4)
	ori      r0, r0, 2
	stb      r0, 0(r4)
	lbz      r0, 0x205(r29)
	cmplwi   r0, 0
	beq      lbl_8022CB0C
	lwz      r4, 0x38(r28)
	lbz      r0, 0(r4)
	ori      r0, r0, 4
	stb      r0, 0(r4)

lbl_8022CB0C:
	lwz      r0, 0x74(r3)
	lwz      r3, 0x38(r28)
	stw      r0, 0x18(r3)
	lwz      r3, 0x38(r28)
	stw      r30, 4(r3)
	lfs      f0, 0x3c0(r29)
	lwz      r3, 0x38(r28)
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	stw      r0, 8(r3)
	lwz      r0, 0x3bc(r29)
	lwz      r3, 0x38(r28)
	mulli    r0, r0, 0xa
	stw      r0, 0xc(r3)
	lwz      r0, 0x28(r28)
	lwz      r3, 0x38(r28)
	mulli    r0, r0, 0xa
	stw      r0, 0x10(r3)
	lwz      r5, 0x38(r28)
	lwz      r4, 0x10(r5)
	lwz      r0, 8(r5)
	lwz      r3, 0xc(r5)
	add      r0, r0, r4
	add      r0, r3, r0
	stw      r0, 0x14(r5)
	lwz      r3, 0x38(r28)
	stw      r31, 0x1c(r3)
	lwz      r3, sys@sda21(r13)
	bl       getPlayCommonData__6SystemFv
	mr       r4, r30
	bl       challenge_checkClear__Q24Game14PlayCommonDataFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_8022CBA4
	lwz      r3, 0x38(r28)
	lbz      r0, 0(r3)
	ori      r0, r0, 8
	stb      r0, 0(r3)

lbl_8022CBA4:
	lwz      r3, sys@sda21(r13)
	bl       getPlayCommonData__6SystemFv
	mr       r4, r30
	bl       challenge_checkKunsho__Q24Game14PlayCommonDataFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_8022CBCC
	lwz      r3, 0x38(r28)
	lbz      r0, 0(r3)
	ori      r0, r0, 0x10
	stb      r0, 0(r3)

lbl_8022CBCC:
	lbz      r0, 0x34(r28)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8022CC3C
	lwz      r3, sys@sda21(r13)
	bl       getPlayCommonData__6SystemFv
	mr       r4, r30
	bl       challenge_checkClear__Q24Game14PlayCommonDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8022CC20
	lwz      r3, sys@sda21(r13)
	bl       getPlayCommonData__6SystemFv
	bl       challenge_openNewCourse__Q24Game14PlayCommonDataFv
	lis      r5, lbl_80483754@ha
	mr       r4, r3
	addi     r3, r5, lbl_80483754@l
	crclr    6
	bl       OSReport
	lwz      r3, sys@sda21(r13)
	bl       getPlayCommonData__6SystemFv
	mr       r4, r30
	bl       challenge_setClear__Q24Game14PlayCommonDataFi

lbl_8022CC20:
	lbz      r0, 0x205(r29)
	cmplwi   r0, 0
	beq      lbl_8022CC3C
	lwz      r3, sys@sda21(r13)
	bl       getPlayCommonData__6SystemFv
	mr       r4, r30
	bl       challenge_setKunsho__Q24Game14PlayCommonDataFi

lbl_8022CC3C:
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
 * Address:	........
 * Size:	000094
 */
void VsGame::ResultState::initNext(Game::VsGameSection*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8022CC5C
 * Size:	00013C
 */
void VsGame::ResultState::dvdload(void)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	lis      r4, lbl_80483720@ha
	stw      r0, 0x54(r1)
	addi     r3, r1, 8
	stw      r31, 0x4c(r1)
	addi     r31, r4, lbl_80483720@l
	stw      r30, 0x48(r1)
	bl       __ct__Q26PSGame9SceneInfoFv
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	li       r4, 0x10
	li       r3, 0
	stb      r4, 0xe(r1)
	cmplwi   r0, 0
	stb      r3, 0xf(r1)
	bne      lbl_8022CCB0
	addi     r3, r31, 0x50
	addi     r5, r31, 0x28
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8022CCB0:
	lwz      r3, spSceneMgr__8PSSystem@sda21(r13)
	addi     r4, r1, 8
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8022CCE8
	addi     r3, r31, 0x50
	addi     r5, r31, 0x28
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8022CCE8:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_8022CD0C
	addi     r3, r31, 0x5c
	addi     r5, r31, 0x28
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8022CD0C:
	lwz      r3, 4(r30)
	lwz      r3, 4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8022CD44
	addi     r3, r31, 0x50
	addi     r5, r31, 0x28
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8022CD44:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_8022CD68
	addi     r3, r31, 0x5c
	addi     r5, r31, 0x28
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8022CD68:
	lwz      r3, 4(r30)
	lwz      r3, 4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
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
 * Address:	8022CD98
 * Size:	00017C
 */
void VsGame::ResultState::exec(Game::VsGameSection*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	stw      r30, 0x28(r1)
	mr       r30, r3
	stw      r29, 0x24(r1)
	lbz      r0, 0x18(r3)
	cmpwi    r0, 1
	beq      lbl_8022CE3C
	bge      lbl_8022CDD4
	cmpwi    r0, 0
	bge      lbl_8022CDE0
	b        lbl_8022CEF0

lbl_8022CDD4:
	cmpwi    r0, 3
	bge      lbl_8022CEF0
	b        lbl_8022CEA8

lbl_8022CDE0:
	mr       r3, r31
	bl       clearHeap__Q24Game15BaseGameSectionFv
	lwz      r0, sCurrentHeap__7JKRHeap@sda21(r13)
	stw      r0, 0x20(r30)
	lwz      r29, 0x20(r30)
	mr       r3, r29
	bl       getFreeSize__7JKRHeapFv
	mr       r4, r29
	li       r5, 1
	bl       create__10JKRExpHeapFUlP7JKRHeapb
	stw      r3, 0x1c(r30)
	lwz      r3, 0x1c(r30)
	bl       becomeCurrentHeap__7JKRHeapFv
	mr       r3, r30
	mr       r4, r31
	bl prepareMorimuraInfo__Q34Game6VsGame11ResultStateFPQ24Game13VsGameSection
	li       r0, 1
	addi     r4, r31, 0x184
	stb      r0, 0x18(r30)
	lwz      r3, sys@sda21(r13)
	lwz      r5, 0x24(r30)
	bl       dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
	b        lbl_8022CEF8

lbl_8022CE3C:
	lwz      r0, 0x19c(r31)
	cmpwi    r0, 2
	bne      lbl_8022CEF0
	li       r0, 2
	lis      r3, __vt__Q32og6Screen14DispMemberBase@ha
	stb      r0, 0x18(r30)
	li       r4, 0
	addi     r0, r3, __vt__Q32og6Screen14DispMemberBase@l
	lis      r3, __vt__Q28Morimura25DispMemberChallengeResult@ha
	stw      r0, 8(r1)
	addi     r0, r3, __vt__Q28Morimura25DispMemberChallengeResult@l
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	stw      r4, 0xc(r1)
	stw      r0, 8(r1)
	stw      r4, 0x10(r1)
	stw      r4, 0x14(r1)
	stw      r4, 0x18(r1)
	lwz      r0, 0x38(r30)
	stw      r0, 0x10(r1)
	lwz      r0, 0x1c(r30)
	stw      r0, 0x14(r1)
	lwz      r4, 0x10(r30)
	bl       setGamePad__Q26Screen9Game2DMgrFP10Controller
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	addi     r4, r1, 8
	bl
open_ChallengeResult__Q26Screen9Game2DMgrFRQ28Morimura25DispMemberChallengeResult
	b        lbl_8022CEF0

lbl_8022CEA8:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       update__Q26Screen9Game2DMgrFv
	lwz      r3, particle2dMgr@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8022CEC0
	bl       update__14TParticle2dMgrFv

lbl_8022CEC0:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       isEndChallengeResult__Q26Screen9Game2DMgrFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8022CEF0
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8022CEF0:
	mr       r3, r31
	bl       doUpdate__Q24Game14BaseHIOSectionFv

lbl_8022CEF8:
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
 * Address:	8022CF14
 * Size:	000088
 */
void VsGame::ResultState::draw(Game::VsGameSection*, Graphics&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r5
	lbz      r0, 0x18(r3)
	cmplwi   r0, 2
	bne      lbl_8022CF88
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

lbl_8022CF88:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8022CF9C
 * Size:	0000CC
 */
void VsGame::ResultState::cleanup(Game::VsGameSection*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8022CFE4
	lis      r3, lbl_80483770@ha
	lis      r5, lbl_80483748@ha
	addi     r3, r3, lbl_80483770@l
	li       r4, 0x1d3
	addi     r5, r5, lbl_80483748@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8022CFE4:
	lwz      r31, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r31, 0
	bne      lbl_8022D00C
	lis      r3, lbl_80483770@ha
	lis      r5, lbl_80483748@ha
	addi     r3, r3, lbl_80483770@l
	li       r4, 0x1dc
	addi     r5, r5, lbl_80483748@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8022D00C:
	mr       r3, r31
	bl       deleteCurrentScene__Q28PSSystem8SceneMgrFv
	lwz      r3, particle2dMgr@sda21(r13)
	bl       killAll__14TParticle2dMgrFv
	lwz      r3, 0x1c(r29)
	bl       freeAll__7JKRHeapFv
	lwz      r3, 0x1c(r29)
	bl       destroy__7JKRHeapFv
	li       r0, 0
	stw      r0, 0x1c(r29)
	lwz      r3, 0x20(r29)
	bl       becomeCurrentHeap__7JKRHeapFv
	li       r0, 0
	lfs      f0, lbl_8051A2C0@sda21(r2)
	stw      r0, 0x3bc(r30)
	stfs     f0, 0x3c0(r30)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8022D068
 * Size:	000008
 */
u32 Morimura::DispMemberChallengeResult::getSize(void) { return 0x14; }

/*
 * --INFO--
 * Address:	8022D070
 * Size:	00000C
 */
void Morimura::DispMemberChallengeResult::getOwnerID(void)
{
	/*
	lis      r3, 0x4D524D52@ha
	addi     r3, r3, 0x4D524D52@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	8022D07C
 * Size:	000014
 */
void Morimura::DispMemberChallengeResult::getMemberID(void)
{
	/*
	lis      r4, 0x53554C54@ha
	lis      r3, 0x43485245@ha
	addi     r4, r4, 0x53554C54@l
	addi     r3, r3, 0x43485245@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	8022D090
 * Size:	000030
 */
void Delegate<Game::VsGame::ResultState>::invoke()
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
 * Address:	8022D0C0
 * Size:	000028
 */
void __sinit_vsGS_Result_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804C0FE0@ha
	stw      r0, lbl_80515C70@sda21(r13)
	stfsu    f0, lbl_804C0FE0@l(r3)
	stfs     f0, lbl_80515C74@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
