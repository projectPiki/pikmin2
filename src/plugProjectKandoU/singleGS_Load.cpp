#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_singleGS_Load_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80483D50
    lbl_80483D50:
        .asciz "singleGS_Load.cpp"
        .skip 2
    .global lbl_80483D64
    lbl_80483D64:
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804C15C0
    lbl_804C15C0:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q32og6Screen20DispMemberCourseName
    __vt__Q32og6Screen20DispMemberCourseName:
        .4byte 0
        .4byte 0
        .4byte getSize__Q32og6Screen20DispMemberCourseNameFv
        .4byte getOwnerID__Q32og6Screen20DispMemberCourseNameFv
        .4byte getMemberID__Q32og6Screen20DispMemberCourseNameFv
        .4byte doSetSubMemberAll__Q32og6Screen14DispMemberBaseFv
    .global __vt__Q34Game10SingleGame9LoadState
    __vt__Q34Game10SingleGame9LoadState:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game10SingleGame9LoadStateFPQ24Game17SingleGameSectionPQ24Game8StateArg
        .4byte exec__Q34Game10SingleGame9LoadStateFPQ24Game17SingleGameSection
        .4byte
   cleanup__Q34Game10SingleGame9LoadStateFPQ24Game17SingleGameSection .4byte
   "resume__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
        .4byte
   "restart__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
        .4byte
   "transit__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSectioniPQ24Game8StateArg"
        .4byte
   draw__Q34Game10SingleGame9LoadStateFPQ24Game17SingleGameSectionR8Graphics
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
   0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515CB8
    lbl_80515CB8:
        .skip 0x4
    .global lbl_80515CBC
    lbl_80515CBC:
        .skip 0x4
*/

namespace Game {

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void SingleGame::_Print(char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80239E84
 * Size:	0000B4
 */
void SingleGame::LoadState::init(Game::SingleGameSection*, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r5
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       reset__Q24Game11MoviePlayerFv
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	lwz      r3, 0x18(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r3, mgr__5Radar@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80239ED0
	bl       clear__Q25Radar3MgrFv

lbl_80239ED0:
	cmplwi   r31, 0
	bne      lbl_80239EF4
	lis      r3, lbl_80483D50@ha
	lis      r5, lbl_80483D64@ha
	addi     r3, r3, lbl_80483D50@l
	li       r4, 0x21
	addi     r5, r5, lbl_80483D64@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80239EF4:
	lhz      r3, 4(r31)
	li       r0, 0
	sth      r3, 0x24(r30)
	lbz      r3, 1(r31)
	stb      r3, 0x29(r30)
	lbz      r3, 0(r31)
	stb      r3, 0x27(r30)
	lbz      r3, 2(r31)
	stb      r3, 0x28(r30)
	stb      r0, 0x26(r30)
	stb      r0, 0x14(r30)
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
 * Address:	........
 * Size:	000160
 */
void SingleGame::LoadState::initNext(Game::SingleGameSection*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80239F38
 * Size:	000238
 */
void SingleGame::LoadState::exec(Game::SingleGameSection*)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r4
	stw      r30, 0x38(r1)
	mr       r30, r3
	lbz      r0, 0x26(r3)
	cmplwi   r0, 0
	bne      lbl_8023A090
	li       r0, 1
	stb      r0, 0x26(r30)
	lbz      r0, 0x29(r30)
	cmplwi   r0, 0
	bne      lbl_80239F7C
	mr       r3, r31
	bl       clearHeap__Q24Game15BaseGameSectionFv

lbl_80239F7C:
	lbz      r0, 0x27(r30)
	cmplwi   r0, 0
	bne      lbl_80239F94
	lbz      r0, 0x28(r30)
	cmplwi   r0, 0
	beq      lbl_8023A024

lbl_80239F94:
	lbz      r0, 0x28(r30)
	cmplwi   r0, 0
	beq      lbl_80239FAC
	lwz      r3, 0x248(r31)
	addi     r0, r3, 1
	stw      r0, 0x248(r31)

lbl_80239FAC:
	li       r0, 1
	lis      r3, __vt__Q32og6Screen14DispMemberBase@ha
	stb      r0, 0x23c(r31)
	li       r7, 0
	addi     r0, r3, __vt__Q32og6Screen14DispMemberBase@l
	lis      r4, __vt__Q32og6Screen15DispMemberFloor@ha
	lis      r3, 0x745F3031@ha
	stw      r0, 0x1c(r1)
	addi     r6, r4, __vt__Q32og6Screen15DispMemberFloor@l
	li       r5, 0x37
	addi     r0, r3, 0x745F3031@l
	stw      r7, 0x20(r1)
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	addi     r4, r1, 0x1c
	stw      r6, 0x1c(r1)
	stw      r5, 0x24(r1)
	stb      r7, 0x2c(r1)
	stb      r7, 0x2d(r1)
	stw      r0, 0x28(r1)
	stb      r7, 0x2e(r1)
	lwz      r5, 0x248(r31)
	addi     r0, r5, 1
	stw      r0, 0x24(r1)
	lwz      r0, 0x190(r31)
	stw      r0, 0x28(r1)
	bl       open_Floor__Q26Screen9Game2DMgrFRQ32og6Screen15DispMemberFloor
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r0, 1
	stb      r0, 0x48(r3)
	b        lbl_8023A078

lbl_8023A024:
	lwz      r6, 0x22c(r31)
	lis      r4, __vt__Q32og6Screen14DispMemberBase@ha
	lis      r3, __vt__Q32og6Screen20DispMemberCourseName@ha
	li       r5, 0
	lwz      r6, 0x48(r6)
	addi     r4, r4, __vt__Q32og6Screen14DispMemberBase@l
	addi     r0, r3, __vt__Q32og6Screen20DispMemberCourseName@l
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	stw      r4, 0xc(r1)
	addi     r4, r1, 0xc
	stw      r5, 0x14(r1)
	stw      r5, 0x10(r1)
	stw      r0, 0xc(r1)
	stb      r5, 0x18(r1)
	stb      r5, 0x19(r1)
	stw      r6, 0x14(r1)
	bl open_CourseName__Q26Screen9Game2DMgrFRQ32og6Screen20DispMemberCourseName
	li       r0, 0
	stb      r0, 0x23c(r31)
	lwz      r3, gameSystem__4Game@sda21(r13)
	stb      r0, 0x48(r3)

lbl_8023A078:
	bl       clear__Q24Game8GameStatFv
	li       r0, 0
	stw      r0, 0x10(r30)
	stb      r0, 0x15(r30)
	stb      r0, 0x14(r30)
	b        lbl_8023A158

lbl_8023A090:
	lbz      r0, 0x14(r30)
	cmplwi   r0, 0
	beq      lbl_8023A0C0
	lbz      r0, 0x15(r30)
	cmplwi   r0, 0
	bne      lbl_8023A0C0
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x1b8
	lwz      r5, 0x224(r31)
	bl       dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
	li       r0, 1
	stb      r0, 0x15(r30)

lbl_8023A0C0:
	lwz      r0, 0x1d0(r31)
	cmpwi    r0, 2
	bne      lbl_8023A140
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x124(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x23c(r31)
	cmplwi   r0, 0
	beq      lbl_8023A110
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 4
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8023A140

lbl_8023A110:
	lhz      r7, 0x24(r30)
	li       r0, 1
	mr       r3, r30
	mr       r4, r31
	stb      r0, 8(r1)
	addi     r6, r1, 8
	li       r5, 3
	sth      r7, 0xa(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8023A140:
	lwz      r3, particle2dMgr@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8023A150
	bl       update__14TParticle2dMgrFv

lbl_8023A150:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       update__Q26Screen9Game2DMgrFv

lbl_8023A158:
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8023A170
 * Size:	000090
 */
void SingleGame::LoadState::draw(Game::SingleGameSection*, Graphics&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r5
	lbz      r0, 0x26(r3)
	cmplwi   r0, 0
	beq      lbl_8023A1EC
	li       r0, 1
	stb      r0, 0x14(r3)
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

lbl_8023A1EC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8023A200
 * Size:	000004
 */
void SingleGame::LoadState::cleanup(Game::SingleGameSection*) { }

} // namespace Game

namespace og {

namespace Screen {

/*
 * --INFO--
 * Address:	8023A204
 * Size:	000008
 */
u32 DispMemberCourseName::getSize(void) { return 0x10; }

/*
 * --INFO--
 * Address:	8023A20C
 * Size:	00000C
 */
void DispMemberCourseName::getOwnerID(void)
{
	/*
lis      r3, 0x004F4741@ha
addi     r3, r3, 0x004F4741@l
blr
	*/
}

/*
 * --INFO--
 * Address:	8023A218
 * Size:	000010
 */
void DispMemberCourseName::getMemberID(void)
{
	/*
lis      r4, 0x55525345@ha
li       r3, 0x434f
addi     r4, r4, 0x55525345@l
blr
	*/
}

} // namespace Screen

} // namespace og

/*
 * --INFO--
 * Address:	8023A228
 * Size:	000028
 */
void __sinit_singleGS_Load_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804C15C0@ha
	stw      r0, lbl_80515CB8@sda21(r13)
	stfsu    f0, lbl_804C15C0@l(r3)
	stfs     f0, lbl_80515CBC@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
