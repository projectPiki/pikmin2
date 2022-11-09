#include "og/newScreen/Floor.h"
#include "nans.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_vsGS_Load_cpp

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804C1068
    lbl_804C1068:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_804C1074
    lbl_804C1074:
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte dvdLoad__Q34Game6VsGame9LoadStateFv
    .global __vt__Q32og6Screen15DispMemberFloor
    __vt__Q32og6Screen15DispMemberFloor:
        .4byte 0
        .4byte 0
        .4byte getSize__Q32og6Screen15DispMemberFloorFv
        .4byte getOwnerID__Q32og6Screen15DispMemberFloorFv
        .4byte getMemberID__Q32og6Screen15DispMemberFloorFv
        .4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
    .global __vt__Q34Game6VsGame9LoadState
    __vt__Q34Game6VsGame9LoadState:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game6VsGame9LoadStateFPQ24Game13VsGameSectionPQ24Game8StateArg
        .4byte exec__Q34Game6VsGame9LoadStateFPQ24Game13VsGameSection
        .4byte cleanup__Q34Game6VsGame9LoadStateFPQ24Game13VsGameSection
        .4byte
   "resume__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
        .4byte
   "restart__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
        .4byte
   "transit__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSectioniPQ24Game8StateArg"
        .4byte draw__Q34Game6VsGame9LoadStateFPQ24Game13VsGameSectionR8Graphics
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
   "__vt__34Delegate<Q34Game6VsGame9LoadState>"
    "__vt__34Delegate<Q34Game6VsGame9LoadState>":
        .4byte 0
        .4byte 0
        .4byte "invoke__34Delegate<Q34Game6VsGame9LoadState>Fv"

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515C78
    lbl_80515C78:
        .skip 0x4
    .global lbl_80515C7C
    lbl_80515C7C:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051A2C8
    lbl_8051A2C8:
        .4byte 0x41700000
    .global lbl_8051A2CC
    lbl_8051A2CC:
        .4byte 0x635F2530
        .4byte 0x32640000
    .global lbl_8051A2D4
    lbl_8051A2D4:
        .4byte 0x76732530
        .4byte 0x32640000
    .global lbl_8051A2DC
    lbl_8051A2DC:
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	8022D0E8
 * Size:	0000F0
 */
VsGame::LoadState::LoadState(void)
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
	li       r0, 1
	lis      r3, __vt__Q34Game6VsGame9LoadState@ha
	stw      r0, 4(r31)
	addi     r0, r3, __vt__Q34Game6VsGame9LoadState@l
	addi     r3, r31, 0x30
	stw      r5, 8(r31)
	stw      r4, 0(r31)
	stw      r0, 0(r31)
	stw      r5, 0x20(r31)
	stw      r5, 0x24(r31)
	stb      r5, 0x28(r31)
	bl       __ct__16DvdThreadCommandFv
	li       r3, 0xb0
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8022D160
	li       r4, 0
	bl       __ct__10ControllerFQ210JUTGamePad8EPadPort
	mr       r0, r3

lbl_8022D160:
	stw      r0, 0x14(r31)
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8022D1BC
	lis      r4, lbl_804C1074@ha
	lis      r5, __vt__9IDelegate@ha
	addi     r8, r4, lbl_804C1074@l
	lis      r4, "__vt__34Delegate<Q34Game6VsGame9LoadState>"@ha
	lwz      r7, 0(r8)
	addi     r5, r5, __vt__9IDelegate@l
	lwz      r6, 4(r8)
	addi     r0, r4, "__vt__34Delegate<Q34Game6VsGame9LoadState>"@l
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

lbl_8022D1BC:
	stw      r3, 0x2c(r31)
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
 * Address:	8022D1D8
 * Size:	0000D0
 */
void VsGame::LoadState::init(Game::VsGameSection*, Game::StateArg*)
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
	lwz      r0, mgr__5Radar@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8022D210
	mr       r3, r0
	bl       clear__Q25Radar3MgrFv

lbl_8022D210:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	lwz      r3, 0x18(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r30, 0x18(r29)
	bl       clear__Q24Game8GameStatFv
	lwz      r0, 0(r31)
	mr       r3, r30
	stw      r0, 0x20(r29)
	lwz      r0, 4(r31)
	stw      r0, 0x24(r29)
	lbz      r0, 8(r31)
	stb      r0, 0x28(r29)
	lwz      r12, 0(r30)
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	lfs      f0, lbl_8051A2C8@sda21(r2)
	stb      r0, 0x1c(r29)
	stb      r0, 0x9c(r29)
	stfs     f0, 0xa0(r29)
	stw      r0, 0x388(r30)
	stw      r0, 0x38c(r30)
	stw      r0, 0x390(r30)
	stw      r0, 0x394(r30)
	stw      r0, 0x398(r30)
	stw      r0, 0x39c(r30)
	stw      r0, 0x3a0(r30)
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
 * Address:	8022D2A8
 * Size:	000024
 */
void VsGame::LoadState::dvdLoad(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x18(r3)
	bl       setupFloatMemory__Q24Game15BaseGameSectionFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8022D2CC
 * Size:	0002C4
 */
void VsGame::LoadState::exec(Game::VsGameSection*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	stw      r30, 0x28(r1)
	mr       r30, r3
	lbz      r0, 0x1c(r3)
	cmplwi   r0, 0
	bne      lbl_8022D420
	lbz      r0, 0x28(r30)
	cmplwi   r0, 0
	beq      lbl_8022D320
	lwz      r3, sys@sda21(r13)
	li       r4, 1
	bl       heapStatusDump__6SystemFb
	mr       r3, r31
	bl       clearHeap__Q24Game15BaseGameSectionFv
	lwz      r3, sys@sda21(r13)
	li       r4, 1
	bl       heapStatusDump__6SystemFb

lbl_8022D320:
	lis      r3, __vt__Q32og6Screen14DispMemberBase@ha
	li       r6, 0
	addi     r0, r3, __vt__Q32og6Screen14DispMemberBase@l
	lis      r4, __vt__Q32og6Screen15DispMemberFloor@ha
	lis      r3, 0x745F3031@ha
	stw      r0, 0x14(r1)
	addi     r5, r4, __vt__Q32og6Screen15DispMemberFloor@l
	li       r4, 0x37
	addi     r0, r3, 0x745F3031@l
	stw      r6, 0x18(r1)
	mr       r3, r31
	stw      r5, 0x14(r1)
	stw      r4, 0x1c(r1)
	stb      r6, 0x24(r1)
	stb      r6, 0x25(r1)
	stw      r0, 0x20(r1)
	stb      r6, 0x26(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	addi     r0, r3, 1
	addi     r3, r1, 8
	stw      r0, 0x1c(r1)
	bl       __ct__4ID32Fv
	lwz      r4, gameSystem__4Game@sda21(r13)
	li       r3, 0
	lwz      r0, 0x44(r4)
	cmpwi    r0, 2
	beq      lbl_8022D3A0
	cmpwi    r0, 3
	bne      lbl_8022D3A4

lbl_8022D3A0:
	li       r3, 1

lbl_8022D3A4:
	clrlwi.  r0, r3, 0x18
	beq      lbl_8022D3C8
	lwz      r5, 0x334(r31)
	addi     r3, r1, 8
	addi     r4, r2, lbl_8051A2CC@sda21
	lwz      r5, 0x74(r5)
	crclr    6
	bl       sprintf
	b        lbl_8022D3E0

lbl_8022D3C8:
	lwz      r5, 0x33c(r31)
	addi     r3, r1, 8
	addi     r4, r2, lbl_8051A2D4@sda21
	lwz      r5, 0x6c(r5)
	crclr    6
	bl       sprintf

lbl_8022D3E0:
	addi     r3, r1, 8
	bl       updateID__4ID32Fv
	lwz      r0, 0x10(r1)
	addi     r4, r1, 0x14
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	stw      r0, 0x20(r1)
	bl       open_Floor__Q26Screen9Game2DMgrFRQ32og6Screen15DispMemberFloor
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x30
	lwz      r5, 0x2c(r30)
	bl       dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
	li       r3, 1
	li       r0, 0
	stb      r3, 0x1c(r30)
	stb      r0, 0x9c(r30)
	b        lbl_8022D578

lbl_8022D420:
	mr       r3, r31
	bl       doUpdate__Q24Game14BaseHIOSectionFv
	lwz      r3, particle2dMgr@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8022D438
	bl       update__14TParticle2dMgrFv

lbl_8022D438:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       update__Q26Screen9Game2DMgrFv
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 1
	bne      lbl_8022D4B0
	lfs      f1, 0xa0(r30)
	lfs      f0, lbl_8051A2DC@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8022D4B0
	lwz      r0, 0x48(r30)
	cmpwi    r0, 2
	bne      lbl_8022D49C
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       set_FloorVS_LoadEnd__Q26Screen9Game2DMgrFv
	lwz      r3, 0x14(r30)
	lwz      r0, 0x1c(r3)
	andi.    r0, r0, 0x1100
	beq      lbl_8022D49C
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1886
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lfs      f0, lbl_8051A2DC@sda21(r2)
	stfs     f0, 0xa0(r30)

lbl_8022D49C:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0xa0(r30)
	lfs      f0, 0x54(r3)
	fsubs    f0, f1, f0
	stfs     f0, 0xa0(r30)

lbl_8022D4B0:
	lbz      r0, 0x9c(r30)
	cmplwi   r0, 0
	bne      lbl_8022D578
	lwz      r0, 0x48(r30)
	cmpwi    r0, 2
	bne      lbl_8022D578
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r0, 0
	lwz      r3, 0x44(r3)
	cmpwi    r3, 2
	beq      lbl_8022D4E4
	cmpwi    r3, 3
	bne      lbl_8022D4E8

lbl_8022D4E4:
	li       r0, 1

lbl_8022D4E8:
	clrlwi.  r0, r0, 0x18
	bne      lbl_8022D50C
	cmpwi    r3, 1
	bne      lbl_8022D578
	lfs      f1, 0xa0(r30)
	lfs      f0, lbl_8051A2DC@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8022D578

lbl_8022D50C:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x124(r12)
	mtctr    r12
	bctrl
	li       r0, 1
	stb      r0, 0x9c(r30)
	lwz      r0, 0x24(r30)
	cmpwi    r0, 0
	bne      lbl_8022D558
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 2
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8022D578

lbl_8022D558:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 3
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8022D578:
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
 * Address:	8022D590
 * Size:	00007C
 */
void VsGame::LoadState::draw(Game::VsGameSection*, Graphics&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r5
	addi     r3, r31, 0x190
	lwz      r12, 0x190(r5)
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
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8022D60C
 * Size:	000004
 */
void VsGame::LoadState::cleanup(Game::VsGameSection*) { }

} // namespace Game

/**
 * @reified{getSize__Q32og6Screen15DispMemberFloorFv}
 * @reified{getOwnerID__Q32og6Screen15DispMemberFloorFv}
 * @reified{getMemberID__Q32og6Screen15DispMemberFloorFv}
 * @generated{invoke__34Delegate<Q34Game6VsGame9LoadState>Fv}
 */

/*
 * --INFO--
 * Address:	8022D664
 * Size:	000028
 */
void __sinit_vsGS_Load_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804C1068@ha
	stw      r0, lbl_80515C78@sda21(r13)
	stfsu    f0, lbl_804C1068@l(r3)
	stfs     f0, lbl_80515C7C@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
