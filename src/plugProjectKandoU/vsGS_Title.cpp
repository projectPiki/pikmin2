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
#include "Morimura/VsSelect.h"
#include "Controller.h"
#include "TParticle2dMgr.h"
#include "Game/Navi.h"
#include "System.h"
#include "nans.h"

static const char vsGSTitleUnusedArray[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
static const char vsGSTitleName[]        = "vsGS_Title";

namespace {
char* cMaps[4] = { "caveinfo.txt", "caveinfo_metal.txt", "caveinfo_conc.txt", "caveinfo_tsuchi.txt" };
}

namespace Game {
namespace VsGame {
/*
 * --INFO--
 * Address:	80228328
 * Size:	0000F8
 */
TitleState::TitleState()
    : State(VGS_Title)
{
	m_player1Controller = new Controller(JUTGamePad::PORT_0);
	m_delegate          = new Delegate<Game::VsGame::TitleState>(this, &dvdload);
	m_player2Controller = new Controller(JUTGamePad::PORT_1);
}
/*
 * --INFO--
 * Address:	80228420
 * Size:	000134
 */
void TitleState::init(VsGameSection* section, StateArg* arg)
{
	naviMgr->clearDeadCount();
	section->_1F0[1]     = 0.0f;
	section->_1F0[0]     = 0.0f;
	section->m_pokoCount = 0;
	section->m_timeLimit = 0.0f;
	section->clearGetDopeCount();
	section->clearGetCherryCount();
	section->m_currentFloor = 0;

	TitleArg* titleArg = static_cast<TitleArg*>(arg);
	if (titleArg && titleArg->_00) {
		section->clearHeap();
	}

	section->_205 = true;
	section->_208 = false;
	m_heap        = nullptr;
	m_expHeap     = nullptr;

	m_titleStage = VSTITLE_PrepareInfo;
	_2C          = 0;

	m_caveInfoType = VSCAVEINFO_Default;
	strcpy(section->m_caveInfoFilename, cMaps[m_caveInfoType]);

	_20        = 0;
	m_stageNum = section->m_challengeStageList->m_stageData.getChildCount(); // Stage Num

	section->refreshHIO();
	section->initPlayData();
	Screen::gGame2DMgr->m_screenMgr->reset();

	section->m_challengeStageData = nullptr;
	section->m_VsStageData        = nullptr;
}

static const char unusedVsTitleString[] = "コンクリート"; // 'concrete'

/*
 * --INFO--
 * Address:	80228554
 * Size:	0003F4
 */
void TitleState::dvdload()
{
	PSGame::SceneInfo scene;
	if (gameSystem->isChallengeMode()) {
		scene.m_gameType = PSGame::SceneInfo::TITLE_17;
	} else {
		scene.m_gameType = PSGame::SceneInfo::TITLE_19;
	}
	scene._07 = 0;
	static_cast<PSGame::PikSceneMgr*>(PSSystem::getSceneMgr())->newAndSetCurrentScene(&scene);

	PSSystem::SceneMgr* sceneMgr = PSSystem::getSceneMgr();
	sceneMgr->checkScene();
	sceneMgr->m_scenes->m_child->scene1stLoadSync();

	sceneMgr = PSSystem::getSceneMgr();
	sceneMgr->checkScene();
	sceneMgr->m_scenes->m_child->startMainSeq();

	m_challengeTitleInfo = new Challenge2D_TitleInfo(getChallengeStageNum());
	m_vsTitleInfo        = new Vs2D_TitleInfo(getVsStageNum());

	for (int i = 0; i < 5; i++) {
		sys->getPlayCommonData()->challenge_get_CourseState(i);
	}

	for (int i = 0; i < getChallengeStageNum(); i++) {
		PlayChallengeGameData::CourseState* scores = sys->getPlayCommonData()->challenge_get_CourseState(i);
		Challenge2D_TitleInfo::Info* displayData   = (*m_challengeTitleInfo)(i);
		ChallengeGame::StageData* fileData         = m_section->m_challengeStageList->getStageData(i);

		if (fileData) {
			displayData->m_floorCount     = fileData->m_floorCounts;
			displayData->m_timeLimit      = (int)fileData->m_timeLimit;
			displayData->m_sprayCounts[0] = fileData->m_startNumBitter;
			displayData->m_sprayCounts[1] = fileData->m_startNumSpicy;
			displayData->m_pikiContainer  = &fileData->m_pikiContainer;
			displayData->m_highscore1     = &scores->m_highscores[0];
			displayData->m_highscore2     = &scores->m_highscores[1];
			displayData->m_stageIndex     = fileData->m_stageIndex;
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
		VsGame::StageData* fileData       = m_section->m_VsStageList->getStageData(i);
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
void TitleState::exec(VsGameSection* section)
{
	if (gameSystem->m_mode == GSM_VERSUS_MODE) {
		execVs(section);
	} else {
		execChallenge(section);
	}
}

/*
 * --INFO--
 * Address:	80228980
 * Size:	0002DC
 */
void TitleState::execChallenge(VsGameSection* section)
{
	switch (m_titleStage) {
	case VSTITLE_PrepareInfo:
		m_heap    = getCurrentHeap();
		m_expHeap = makeExpHeap(m_heap->getFreeSize(), m_heap, true);
		m_expHeap->becomeCurrentHeap();

		m_titleStage = VSTITLE_PrepareDisp;
		m_section    = section;

		sys->dvdLoadUseCallBack(&section->m_dvdThreadCommand, m_delegate);
		return;

	case VSTITLE_PrepareDisp:
		if (section->m_dvdThreadCommand.m_mode == 2) {
			m_titleStage = VSTITLE_Display;

			Morimura::DispMemberChallengeSelect select;
			select.m_titleInfo          = m_challengeTitleInfo;
			select.m_selectedStageIndex = section->m_challengeStageNum;
			select.m_debugExpHeap       = m_expHeap;
			select.m_playType           = (gameSystem->isMultiplayerMode() > 0); // sure.

			Screen::gGame2DMgr->setGamePad(m_player1Controller);
			Screen::gGame2DMgr->open_ChallengeSelect(select);
		}
		return;

	case VSTITLE_Display:
		int stageNumber;
		int playType;
		int check = Screen::gGame2DMgr->check_ChallengeSelect(stageNumber, playType);
		switch (check) {
		case 2:
			section->m_isMenuRunning = true;
			return;

		case 3:
			OSReport("from Morimun:STATE_GO:stageNo=%d:playType=%d\n", stageNumber, playType);

			if (section->m_isVersusMode) {
				gameSystem->m_mode = GSM_VERSUS_MODE;
			} else if (!playType) {
				gameSystem->m_mode = GSM_ONE_PLAYER_CHALLENGE;
			} else {
				gameSystem->m_mode = GSM_TWO_PLAYER_CHALLENGE;
			}

			LoadArg load(0, 0, 0);
			ChallengeGame::StageData* data = section->m_challengeStageList->getStageData(stageNumber);

			P2ASSERTLINE(323, data);
			section->m_challengeStageData = data;
			section->m_challengeStageNum  = stageNumber;

			strcpy(section->m_caveInfoFilename, data->m_caveInfoFilename);

			load._04              = 0; // why...
			section->m_container1 = data->m_pikiContainer;

			playData->setDopeCount(0, data->m_startNumSpicy);
			playData->setDopeCount(1, data->m_startNumBitter);

			section->m_timeLimit = 0.0f;
			data->m_pikiContainer.dump("PikiContainer");

			transit(section, VGS_Load, &load);
			break;
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
 * Address:	80228C8C
 * Size:	000430
 */
void TitleState::execVs(VsGameSection* section)
{
	switch (m_titleStage) {
	case VSTITLE_PrepareInfo:
		m_heap    = getCurrentHeap();
		m_expHeap = makeExpHeap(m_heap->getFreeSize(), m_heap, true);
		m_expHeap->becomeCurrentHeap();

		m_titleStage = VSTITLE_PrepareDisp;
		m_section    = section;
		sys->dvdLoadUseCallBack(&section->m_dvdThreadCommand, m_delegate);
		return;

	case VSTITLE_PrepareDisp:
		if (section->m_dvdThreadCommand.m_mode == 2) {
			m_titleStage = VSTITLE_Display;

			Morimura::DispMemberVsSelect select;
			select.m_titleInfo      = m_vsTitleInfo;
			select.m_stageNumber    = section->m_VsStageNum;
			select.m_debugExpHeap   = m_expHeap;
			select.m_olimarHandicap = section->m_olimarHandicap;
			select.m_louieHandicap  = section->m_louieHandicap;
			select.m_redWinCount    = section->mRedWinCount;
			select.m_blueWinCount   = section->mBlueWinCount;
			select.m_vsWinner       = section->m_vsWinner;
			select.m_stageCount     = section->m_VsStageList->m_stageData.getChildCount();

			Screen::gGame2DMgr->setGamePad(m_player1Controller);
			Screen::gGame2DMgr->open_VsSelect(select);
		}
		return;

	case VSTITLE_Display:
		JUTGamePad::CStick* stick = &m_player1Controller->m_padSStick;
		f32 y                     = stick->m_yPos;
		f32 x                     = stick->m_xPos;
		Vector3f stickPos         = Vector3f(x, 0.0f, y);

		Vector3f directions[4];
		directions[0]    = Vector3f(0.0f, 0.0f, 1.0f);  // UP
		directions[1]    = Vector3f(1.0f, 0.0f, 0.0f);  // RIGHT
		directions[2]    = Vector3f(0.0f, 0.0f, -1.0f); // DOWN
		directions[3]    = Vector3f(-1.0f, 0.0f, 0.0f); // LEFT
		int vsEditArr[4] = { 0, 1, 2, -1 };

		// if c-stick is pointing a direction, adjust editNumber
		if (stickMagnitude(stickPos) > 0.5f) {
			f32 highest     = 0.0f;
			int vsEditIndex = 0;
			for (int i = 0; i < 4; i++) {
				f32 stickWeight = dot(directions[i], stickPos);
				if (stickWeight > highest) {
					highest     = stickWeight;
					vsEditIndex = i; // up = 0, right = 1, down = 2, left = 3
				}
			}
			section->m_editNumber = vsEditArr[vsEditIndex]; // up  = 0, right = 1, down = 2, left = -1

		} else {                        // no c-stick input
			section->m_editNumber = -2; // random?
		}

		int stageNumber;
		int check = Screen::gGame2DMgr->check_VsSelect(stageNumber, section->m_olimarHandicap, section->m_louieHandicap);
		switch (check) {
		case 2:
			section->m_isMenuRunning = true;
			return;
		case 3:
			gameSystem->m_mode = GSM_VERSUS_MODE;

			LoadArg load(0, 0, 0);
			VsGame::StageData* data = section->m_VsStageList->getStageData(stageNumber);

			P2ASSERTLINE(451, data);
			section->m_VsStageData = data;
			section->m_VsStageNum  = stageNumber;

			strcpy(section->m_caveInfoFilename, data->m_caveInfoFilename);
			strcpy(section->m_editFilename, data->m_stageLayoutFilePath);

			load._04              = 0; // why...
			section->m_container1 = data->m_pikiContainer;

			playData->setDopeCount(0, data->m_startNumSpicy);
			playData->setDopeCount(1, data->m_startNumBitter);

			section->m_timeLimit = 0.999f + data->m_timeLimit;
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
void TitleState::draw(VsGameSection* section, Graphics& gfx)
{
	if (m_titleStage != VSTITLE_Display) {
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
void TitleState::cleanup(VsGameSection* section)
{
	PSSystem::SceneMgr* sceneMgr = PSSystem::getSceneMgr();
	PSSystem::checkSceneMgr(sceneMgr);
	sceneMgr->deleteCurrentScene();

	particle2dMgr->killAll();

	m_expHeap->freeAll();
	m_expHeap->destroy();
	m_expHeap = nullptr;
	m_heap->becomeCurrentHeap();
}
} // namespace VsGame
} // namespace Game
