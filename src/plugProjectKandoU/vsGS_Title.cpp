#include "types.h"
#include "Game/VsGame.h"
#include "Game/SingleGame.h"
#include "Game/MoviePlayer.h"
#include "Game/gameChallenge2D.h"
#include "Game/gameStat.h"
#include "Game/Data.h"
#include "PSSystem/PSGame.h"
#include "PSSystem/PSScene.h"
#include "PSGame/SceneInfo.h"
#include "PSGame/PikScene.h"
#include "Screen/Game2DMgr.h"
#include "Morimura/Challenge.h"
#include "Controller.h"
#include "TParticle2dMgr.h"
#include "Game/Navi.h"
#include "System.h"
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

namespace {
char* cMaps[4] = {"caveinfo.txt", "caveinfo_metal.txt", "caveinfo_conc.txt", "caveinfo_tsuchi.txt"};
}

namespace Game {
namespace VsGame {
/*
 * --INFO--
 * Address:	80228328
 * Size:	0000F8
 */
TitleState::TitleState() : State(VGS_Title) {
    m_player1Controller = new Controller(JUTGamePad::PORT_0);
    m_delegate = new Delegate<Game::VsGame::TitleState>(this, &dvdload);
    m_player2Controller = new Controller(JUTGamePad::PORT_1);
}
/*
 * --INFO--
 * Address:	80228420
 * Size:	000134
 */
void TitleState::init(VsGameSection* section, StateArg* arg) {
    naviMgr->clearDeadCount();
    section->_1F0[1] = 0.0f;
    section->_1F0[0] = 0.0f;
    section->m_pokoCount = 0;
    section->m_timeLimit = 0.0f;
    section->clearGetDopeCount();
    section->clearGetCherryCount();
    section->m_currentFloor = 0;
    TitleArg* titleArg= static_cast<TitleArg*>(arg);
    if (titleArg && titleArg->_00) {
        section->clearHeap();
    }
    section->_205 = true;
    section->_208 = false;
    m_heap = nullptr;
    m_expHeap = nullptr;
    _10 = 0;
    _2C = 0;
    _24 = 0;
    strcpy(section->m_caveInfoFilename, cMaps[_24]);
    _20 = 0;
    _28 = section->m_challengeStageList->m_stageData.getChildCount(); // Stage Num
    section->refreshHIO();
    section->initPlayData();
    Screen::gGame2DMgr->m_screenMgr->reset();
    section->m_challengeStageData = nullptr;
    section->m_VsStageData = nullptr;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
//void TitleState::initNext(Game::VsGameSection*)
//{
//	// UNUSED FUNCTION
//}

/*
 * --INFO--
 * Address:	80228554
 * Size:	0003F4
 */
void TitleState::dvdload() {
    PSGame::SceneInfo scene;
    if (gameSystem->isChallengeMode()) {
        scene.m_gameType = PSGame::SceneInfo::TITLE_17;
    }
    else {
        scene.m_gameType = PSGame::SceneInfo::TITLE_19;
    }
    scene._07 = 0;
    static_cast<PSGame::PikSceneMgr*>(getSceneMgr())->newAndSetCurrentScene(&scene);
    
    PSSystem::SceneMgr* sceneMgr = getSceneMgr();
    sceneMgr->checkScene();
    
    sceneMgr->m_scenes->m_child->scene1stLoadSync();
    sceneMgr = getSceneMgr();
    sceneMgr->checkScene();
    sceneMgr->m_scenes->m_child->startMainSeq();
    m_challengeTitleInfo = new Challenge2D_TitleInfo(getChallengeStageNum()); // Stage Num
    m_vsTitleInfo = new Vs2D_TitleInfo(getVsStageNum());
    for (int i = 0; i < 5; i++) {
        sys->getPlayCommonData()->challenge_get_CourseState(i);
    }
    for (int i = 0; i < getChallengeStageNum(); i++) {
        PlayChallengeGameData::CourseState* scores = sys->getPlayCommonData()->challenge_get_CourseState(i);
        Challenge2D_TitleInfo::Info* displayData = (*m_challengeTitleInfo)(i);
        ChallengeGame::StageData* fileData = m_section->m_challengeStageList->getStageData(i);
        if (fileData) {
            displayData->m_floorCount = fileData->m_floorCounts;
            displayData->_0C = (int)fileData->m_timeLimit;
            displayData->m_sprayCounts[0] = fileData->m_startNumBitter;
            displayData->m_sprayCounts[1] = fileData->m_startNumSpicy;
            displayData->m_pikiContainer = &fileData->m_pikiContainer;
            displayData->m_highscore1 = &scores->m_highscores[0];
            displayData->m_highscore2 = &scores->m_highscores[1];
            displayData->_1C = fileData->m_stageIndex;
            displayData->m_displayFlag.clear();
            if (sys->getPlayCommonData()->challenge_checkOpen(i)) {
                displayData->setDisplayFlag(PlayChallengeGameData::CourseState::CSF_IsOpen);
            }
            if (sys->getPlayCommonData()->challenge_checkClear(i)) {
                displayData->setDisplayFlag(PlayChallengeGameData::CourseState::CSF_IsClear);
            }
            if (sys->getPlayCommonData()->challenge_checkJustOpen(i)) {
                displayData->setDisplayFlag(PlayChallengeGameData::CourseState::CSF_WasOpen);
            }
            if (sys->getPlayCommonData()->challenge_checkJustClear(i)) {
                displayData->setDisplayFlag(PlayChallengeGameData::CourseState::CSF_WasClear);
            }
            if (sys->getPlayCommonData()->challenge_checkJustKunsho(i)) {
                displayData->setDisplayFlag(PlayChallengeGameData::CourseState::CSF_WasKunsho);
            }
            if (sys->getPlayCommonData()->challenge_checkKunsho(i)) {
                displayData->setDisplayFlag(PlayChallengeGameData::CourseState::CSF_IsKunsho);
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        sys->getPlayCommonData()->challenge_get_CourseState(i);
    }
    for (int i = 0; i < getVsStageNum(); i++) {
        Vs2D_TitleInfo::Info* displayData = (*m_vsTitleInfo)(i);
        VsGame::StageData* fileData = m_section->m_VsStageList->getStageData(i);
        if (fileData) {
            displayData->m_info = fileData->m_index2D;
        }
    }
}
/*
 * --INFO--
 * Address:	80228948
 * Size:	000038
 */
void TitleState::exec(VsGameSection* section) {
    if (gameSystem->m_mode == GSM_VERSUS_MODE) {
        execVs(section);
    }
    else {
        execChallenge(section);
    }
}


/*
 * --INFO--
 * Address:	80228980
 * Size:	0002DC
 */
void TitleState::execChallenge(Game::VsGameSection* section){
    switch (_10) {
        case 0:
            m_heap = getCurrentHeap();
            m_expHeap = makeExpHeap(m_heap->getFreeSize(), m_heap, true);
            m_expHeap->becomeCurrentHeap();
            _10 = 1;
            m_section = section;
            sys->dvdLoadUseCallBack(&section->m_dvdThreadCommand, m_delegate);
            return;
    
        case 1:
            if (section->m_dvdThreadCommand.m_mode == 2) {
                _10 = 2;
                Morimura::DispMemberChallengeSelect select;
                select.m_titleInfo = m_challengeTitleInfo;
                select.m_selectedStageIndex = section->m_challengeStageNum;
                select.m_debugExpHeap = m_expHeap;
                select.m_playType = (gameSystem->isMultiplayerMode() > 0);
                Screen::gGame2DMgr->setGamePad(m_player1Controller);
                Screen::gGame2DMgr->open_ChallengeSelect(select);
            }   
            return;

        case 2: 
            int stageNumber;
            int playType;
            int check = Screen::gGame2DMgr->check_ChallengeSelect(stageNumber, playType);
            switch (check) {
                case 2:
                    section->m_menuRunning = true;
                    return;
                case 3:
                    OSReport("from Morimun:STATE_GO:stageNo=%d:playType=%d\n", stageNumber, playType);
                    
                    if (section->m_isVersusMode) {
                        gameSystem->m_mode = GSM_VERSUS_MODE;
                    }
                    else {
                        if (!playType) {
                            gameSystem->m_mode = GSM_ONE_PLAYER_CHALLENGE;
                        }
                        else {
                            gameSystem->m_mode = GSM_TWO_PLAYER_CHALLENGE;
                        }
                    }
                    LoadArg load (0, 0, 0);
                    ChallengeGame::StageData* data = section->m_challengeStageList->getStageData(stageNumber);
                    
                    P2ASSERTLINE(0x143, data);
                    section->m_challengeStageData = data;
                    section->m_challengeStageNum = stageNumber;
                    strcpy(section->m_caveInfoFilename, data->m_caveInfoFilename);
                    load._04 = 0; // why...
                    section->m_container1 = data->m_pikiContainer;
                    playData->setDopeCount(0, data->m_startNumSpicy);
                    playData->setDopeCount(1, data->m_startNumBitter);
                    section->m_timeLimit = 0.0f;
                    data->m_pikiContainer.dump("PikiContainer");
                    transit(section, VGS_Load, &load);
            }
    }
    section->BaseHIOSection::doUpdate();
    Screen::gGame2DMgr->update();
    if (particle2dMgr) {
        particle2dMgr->update();
    }
}

/*
 * --INFO--
 * Address:	80228C5C
 * Size:	000030
 */
void ::Game::FSMState<Game::VsGameSection>::transit(Game::VsGameSection* section, int state, Game::StateArg* arg) {
    m_stateMachine->transit(section, state, arg);
}

/*
 * --INFO--
 * Address:	80228C8C
 * Size:	000430
 */
void TitleState::execVs(Game::VsGameSection* section) {
    switch (_10) {
        case 0:
            m_heap = getCurrentHeap();
            m_expHeap = makeExpHeap(m_heap->getFreeSize(), m_heap, true);
            m_expHeap->becomeCurrentHeap();
            _10 = 1;
            m_section = section;
            sys->dvdLoadUseCallBack(&section->m_dvdThreadCommand, m_delegate);
            return;
    
        case 1:
            if (section->m_dvdThreadCommand.m_mode == 2) {
                _10 = 2;
                Morimura::DispMemberVsSelect select;
                select.m_titleInfo = m_vsTitleInfo;
                select.m_stageNumber = section->m_VsStageNum;
                select.m_debugExpHeap = m_expHeap;
                select._1C = section->m_olimarHandicap;
                select._20 = section->m_louieHandicap;
                select.m_redWinCount = section->mRedWinCount;
                select.m_blueWinCount = section->mBlueWinCount;
                select._2C = section->m_vsWinner;
                select.m_stageCount = section->m_VsStageList->m_stageData.getChildCount();

                Screen::gGame2DMgr->setGamePad(m_player1Controller);
                Screen::gGame2DMgr->open_VsSelect(select);
            }   
            return;

        case 2: 

            JUTGamePad::CStick* stick = &m_player1Controller->m_padSStick;
            f32 y = stick->m_yPos;
            f32 x = stick->m_xPos;
            Vector3f stickPos = Vector3f(x, 0.0f, y);

            Vector3f directions[4];
            directions[0] = Vector3f(0.0f, 0.0f, -1.0f);
            directions[1] = Vector3f(-1.0f, 0.0f, 0.0f);
            directions[2] = Vector3f(0.0f, 0.0f, 1.0f);
            directions[3] = Vector3f(1.0f, 0.0f, 0.0f);
            int vsEditArr[4] = {0, 1, 2, -1};
            
            if (stickVec(stickPos) > 0.5f) {
                f32 highest = 0.0f;
                int vsEditIndex = 0;
                for (int i = 0; i < 4; i++) {
                    f32 stickWeight = dot(directions[i], stickPos);
                    if (stickWeight > highest) {
                        highest = stickWeight;
                        vsEditIndex = i;
                    }
                }
                section->m_editNumber = vsEditArr[vsEditIndex];
                
            }
            else {
                section->m_editNumber = -2;
            }
            int stageNumber;
            int check = Screen::gGame2DMgr->check_VsSelect(stageNumber, section->m_olimarHandicap, section->m_louieHandicap);
            switch (check) {
                case 2:
                    section->m_menuRunning = true;
                    return;
                case 3:
                    gameSystem->m_mode = GSM_VERSUS_MODE;
                    
                    LoadArg load (0, 0, 0);
                    VsGame::StageData* data = section->m_VsStageList->getStageData(stageNumber);
                    
                    P2ASSERTLINE(451, data);
                    section->m_VsStageData = data;
                    section->m_VsStageNum = stageNumber;
                    strcpy(section->m_caveInfoFilename, data->m_caveInfoFilename);
                    strcpy(section->m_editFilename, data->m_stageLayoutFilePath);
                    load._04 = 0; // why...
                    section->m_container1 = data->m_pikiContainer;
                    playData->setDopeCount(0, data->m_startNumSpicy);
                    playData->setDopeCount(1, data->m_startNumBitter);
                    section->m_timeLimit = 1.0f + data->m_timeLimit;
                    data->m_pikiContainer.dump("PikiContainer");
                    transit(section, VGS_Load, &load);
            }
            break;
    }
    section->BaseHIOSection::doUpdate();
    Screen::gGame2DMgr->update();
    if (particle2dMgr) {
        particle2dMgr->update();
    }
}

/*
 * --INFO--
 * Address:	802290BC
 * Size:	000088
 */
void TitleState::draw(Game::VsGameSection* section, Graphics& gfx) {
    if (_10 != 2) {
        return;
    }
    gfx.m_perspGraph.setPort();
    particle2dMgr->draw(1, 0);
    Screen::gGame2DMgr->draw(gfx);
    gfx.m_perspGraph.setPort();
    particle2dMgr->draw(0, 0);
}

/*
 * --INFO--
 * Address:	80229144
 * Size:	0000B0
 */
void Game::VsGame::TitleState::cleanup(Game::VsGameSection* section)
{
    PSSystem::SceneMgr* sceneMgr = getSceneMgr();
    
    P2ASSERTLINE(476, PSSystem::spSceneMgr);
    
    sceneMgr->deleteCurrentScene();
    particle2dMgr->killAll();
    m_expHeap->freeAll();
    m_expHeap->destroy();
    m_expHeap = nullptr;
    m_heap->becomeCurrentHeap();

}

} // namespace VsGame
} // namespace Game

/*
 * --INFO--
 * Address:	802291F4
 * Size:	000008
 */
u32 Morimura::DispMemberVsSelect::getSize(void) { 
	return sizeof(DispMemberVsSelect); 
}

/*
 * --INFO--
 * Address:	802291FC
 * Size:	00000C
 */
u32 Morimura::DispMemberVsSelect::getOwnerID(void) {
	return OWNER_MRMR;
}

/*
 * --INFO--
 * Address:	80229208
 * Size:	000014
 */
u64 Morimura::DispMemberVsSelect::getMemberID(void) {
	return MEMBER_VS_SELECT; 
}

/*
 * --INFO--
 * Address:	8022921C
 * Size:	000008
 */
u32 Morimura::DispMemberChallengeSelect::getSize(void) {
	return sizeof(DispMemberChallengeSelect); 
}

/*
 * --INFO--
 * Address:	80229224
 * Size:	00000C
 */
u32 Morimura::DispMemberChallengeSelect::getOwnerID(void) {
	return OWNER_MRMR;
}

/*
 * --INFO--
 * Address:	80229230
 * Size:	000014
 */
u64 Morimura::DispMemberChallengeSelect::getMemberID(void ){ 
	return MEMBER_CHALLENGE_SELECT; 
}

/*
 * --INFO--
 * Address:	80229244
 * Size:	000004
 */
namespace Game {
void FSMState<VsGameSection>::resume(Game::VsGameSection*) { }

/*
 * --INFO--
 * Address:	80229248
 * Size:	000004
 */
void FSMState<VsGameSection>::restart(Game::VsGameSection*) { }

/*
 * --INFO--
 * Address:	8022924C
 * Size:	000030
 */
void Delegate<Game::VsGame::TitleState>::invoke() {
    (m_object->*m_function)();
}
} // namespace Game
/*
 * --INFO--
 * Address:	8022927C
 * Size:	000028
 */
