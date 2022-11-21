#include "og/newScreen/Floor.h"
#include "Game/VsGameSection.h"
#include "Controller.h"
#include "Game/gameStat.h"
#include "Screen/Game2DMgr.h"
#include "Radar.h"
#include "nans.h"
#include "types.h"
#include "Game/SingleGame.h"
#include "TParticle2dMgr.h"
#include "PSSystem/PSSystemIF.h"

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
namespace VsGame {

/*
 * --INFO--
 * Address:	8022D0E8
 * Size:	0000F0
 */
LoadState::LoadState() 
    : State(VGS_Load)
    , _20(0)
    , _24(0)
    , _28(0)
{
    m_controller = new Controller(JUTGamePad::PORT_0);
    m_delegate = new Delegate<Game::VsGame::LoadState>(this, &dvdLoad);
}

/*
 * --INFO--
 * Address:	8022D1D8
 * Size:	0000D0
 */
void LoadState::init(Game::VsGameSection* section, StateArg* args) {
    if (Radar::mgr) {
		Radar::mgr->clear();
    }
    
    Screen::gGame2DMgr->m_screenMgr->reset();
    m_section = section;
    Game::GameStat::clear();
    
    LoadArg* loadArg = static_cast<LoadArg*>(args);
    _20 = loadArg->_00;
    _24 = loadArg->_04;
    _28 = loadArg->_08;
    
    section->refreshHIO();
    _1C = 0;
    _9C = 0;
    _A0 = 15.0f;

    for (int i = 0; i < 7; i++) {
        section->m_marbleYellow[i] = nullptr;
    }
}


/*
 * --INFO--
 * Address:	8022D2A8
 * Size:	000024
 */
void LoadState::dvdLoad() {
    m_section->setupFloatMemory();
}

/*
 * --INFO--
 * Address:	8022D2CC
 * Size:	0002C4
 */
void LoadState::exec(VsGameSection* section) {
    if (!_1C) {
        if (_28) {
        sys->heapStatusDump(true);
        section->clearHeap();
        sys->heapStatusDump(true);
        }
        og::Screen::DispMemberFloor floor;
        floor._08 = section->getCurrFloor() + 1;
        ID32 id;
        if (gameSystem->isChallengeMode()) {
            sprintf(id.getStr(), "c_%02d", section->m_stageData->m_stageIndex);
        }
        else {
            sprintf(id.getStr(), "vs%02d", section->m_VsStageData->m_index2D);
        }
        id.updateID();
        floor.m_caveID = id.getID();
        Screen::gGame2DMgr->open_Floor(floor);
        sys->dvdLoadUseCallBack(&m_dvdThreadCommand, m_delegate);
        _1C = true;
        _9C = false;
    }
    else {
        section->BaseHIOSection::doUpdate();
        if (particle2dMgr) {
            particle2dMgr->update();
        }
        Screen::gGame2DMgr->update();
        if (gameSystem->m_mode == GSM_VERSUS_MODE && (_A0 > 0.0f)) {
            if (m_dvdThreadCommand.m_mode == 2) { // probably an enum
                Screen::gGame2DMgr->set_FloorVS_LoadEnd();
                if (m_controller->isButtonDown(JUTGamePad::PRESS_A | JUTGamePad::PRESS_START)) {
                    PSSystem::spSysIF->playSystemSe(PSSE_SY_FLOOR_COMPLETE, nullptr);
                    _A0 = 0.0f;
                }
            }
            _A0 -= sys->m_deltaTime;
        }
        if (!_9C && m_dvdThreadCommand.m_mode == 2) {
            if (gameSystem->isChallengeMode() || (gameSystem->m_mode == GSM_VERSUS_MODE && _A0 <= 0.0f)) {
                section->postSetupFloatMemory();
                _9C = true;
                if (!_24) {
                    transit(section, VSGAME_LoadState, nullptr);
                }
                else {
                    transit(section, VSGAME_ResultState, nullptr);
                }
            } 
        }
    }
}


/*
 * --INFO--
 * Address:	8022D590
 * Size:	00007C
 */
void LoadState::draw(VsGameSection* section, Graphics& graphic) {
    graphic.m_perspGraph.setPort();
    particle2dMgr->draw(1, 0); // I bet these are booleans
    Screen::gGame2DMgr->draw(graphic);
    graphic.m_perspGraph.setPort();
    particle2dMgr->draw(0, 0);
}


/*
 * --INFO--
 * Address:	8022D60C
 * Size:	000004
 */
void LoadState::cleanup(VsGameSection*) { }

} // namespace VsGame
} // namespace Game

/**
 * @reified{getSize__Q32og6Screen15DispMemberFloorFv}
 * @reified{getOwnerID__Q32og6Screen15DispMemberFloorFv}
 * @reified{getMemberID__Q32og6Screen15DispMemberFloorFv}
 * @generated{invoke__34Delegate<Q34Game6VsGame9LoadState>Fv}
 */
