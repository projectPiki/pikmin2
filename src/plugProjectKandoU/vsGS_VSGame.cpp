#include "types.h"
#include "Game/GameSystem.h"
#include "PSSystem/PSGame.h"
#include "Game/VsGame/VsGame.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_vsGS_VsGame_cpp

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

void _Print(char*, ...)
{
	OSReport("\0\0\0\0\0\0\0\0\0\0\0");
	OSReport("vsGS_Game");
}

static u32 lbl_80515C90;
static u32 lbl_80515C94;

namespace Game {
namespace VsGame {
static f32 _data[3] = { 0.0f };

/*6
 * --INFO--
 * Address:	8022EA94
 * Size:	000044
 */
VSState::VSState()
    : GameState()
{
	m_id = 3;
}

/*
 * --INFO--
 * Address:	8022EAD8
 * Size:	0000CC
 */
void VSState::do_init(VsGameSection* gameSection)
{
	gameSystem->m_mode = GSM_VERSUS_MODE;

	gameSection->setPlayerMode(2);
	gameSection->setCamController();

	PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
	PSSystem::checkSceneMgr4();

	mgr->_04->_04->_1C();

	gameSection->createFallPikmins(gameSection->m_container, 0);
}
} // namespace VsGame
} // namespace Game

// WTF.
// /*
//  * --INFO--
//  * Address:	8022EBA4
//  * Size:	000028
//  */
// void __sinit_vsGS_VsGame_cpp(void)
// {
// 	/*
// 	lis      r4, __float_nan@ha
// 	li       r0, -1
// 	lfs      f0, __float_nan@l(r4)
// 	lis      r3, lbl_804C1158@ha
// 	stw      r0, lbl_80515C90@sda21(r13)
// 	stfsu    f0, lbl_804C1158@l(r3)
// 	stfs     f0, lbl_80515C94@sda21(r13)
// 	stfs     f0, 4(r3)
// 	stfs     f0, 8(r3)
// 	blr
// 	*/
// }
