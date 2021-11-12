#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_vsGS_VSGame_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80483850
    lbl_80483850:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x76734753
        .4byte 0x5F47616D
        .4byte 0x65000000
        .4byte 0x50534761
        .4byte 0x6D652E68
        .4byte 0x00000000
        .asciz "P2Assert"
        .skip 3
        .4byte 0x50535363
        .4byte 0x656E652E
        .4byte 0x68000000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804C1158
    lbl_804C1158:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q34Game6VsGame7VSState
    __vt__Q34Game6VsGame7VSState:
        .4byte 0
        .4byte 0
        .4byte
   init__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionPQ24Game8StateArg
        .4byte exec__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection
        .4byte cleanup__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection
        .4byte
   "resume__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
        .4byte
   "restart__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
        .4byte
   "transit__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSectioniPQ24Game8StateArg"
        .4byte draw__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionR8Graphics
        .4byte
   pre2dDraw__Q34Game6VsGame9GameStateFR8GraphicsPQ24Game13VsGameSection .4byte
   onOrimaDown__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectioni .4byte
   onMovieStart__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionPQ24Game11MovieConfigUlUl
        .4byte
   onMovieDone__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionPQ24Game11MovieConfigUlUl
        .4byte
   onNextFloor__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionPQ34Game8ItemHole4Item
        .4byte
   on_section_fadeout__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection .4byte
   goingToCave__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection .4byte
   onBattleFinished__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionib .4byte
   onRedOrBlueSuckStart__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionib
        .4byte isCardUsable__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection
        .4byte
   drawStatus__Q34Game6VsGame9GameStateFR8GraphicsPQ24Game13VsGameSection .4byte
   do_init__Q34Game6VsGame7VSStateFPQ24Game13VsGameSection

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515C90
    lbl_80515C90:
        .skip 0x4
    .global lbl_80515C94
    lbl_80515C94:
        .skip 0x4
*/

namespace Game {

struct VsGameSection;
struct StateArg;

struct VsGame {

	struct GameState {
		virtual void init(Game::VsGameSection*, Game::StateArg*);
		virtual void exec(Game::VsGameSection*);
		virtual void cleanup(VsGameSection*);
		// WTF are these symbols?
	};

	struct VSState {
	};
};

/*
 * --INFO--
 * Address:	8022EA94
 * Size:	000044
 */
VsGame::VSState::VSState(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q34Game6VsGame9GameStateFv
	lis      r3, __vt__Q34Game6VsGame7VSState@ha
	li       r0, 3
	addi     r4, r3, __vt__Q34Game6VsGame7VSState@l
	mr       r3, r31
	stw      r4, 0(r31)
	stw      r0, 4(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8022EAD8
 * Size:	0000CC
 */
void VsGame::VSState::do_init(Game::VsGameSection*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	li       r0, 1
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	lis      r4, lbl_80483850@ha
	lwz      r3, gameSystem__4Game@sda21(r13)
	addi     r31, r4, lbl_80483850@l
	li       r4, 2
	stw      r0, 0x44(r3)
	mr       r3, r29
	bl       setPlayerMode__Q24Game15BaseGameSectionFi
	mr       r3, r29
	bl       setCamController__Q24Game15BaseGameSectionFv
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8022EB3C
	addi     r3, r31, 0x18
	addi     r5, r31, 0x24
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8022EB3C:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_8022EB60
	addi     r3, r31, 0x30
	addi     r5, r31, 0x24
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8022EB60:
	lwz      r3, 4(r30)
	lwz      r3, 4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	mr       r3, r29
	addi     r4, r29, 0x214
	li       r5, 0
	bl       createFallPikmins__Q24Game13VsGameSectionFRQ24Game13PikiContaineri
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8022EBA4
 * Size:	000028
 */
void __sinit_vsGS_VSGame_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804C1158@ha
	stw      r0, lbl_80515C90@sda21(r13)
	stfsu    f0, lbl_804C1158@l(r3)
	stfs     f0, lbl_80515C94@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
