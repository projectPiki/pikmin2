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
#include "System.h"
#include "nans.h"

namespace Game {
namespace VsGame {

static const char vsGSResultUnusedArray[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
static const char vsGSResultName[]        = "vsGS_Result";

/*
 * --INFO--
 * Address:	8022C7F4
 * Size:	000104
 */
ResultState::ResultState()
    : State(VGS_Result)
{
	m_endFlags.clear();
	m_player1Controller = new Controller(JUTGamePad::PORT_0);
	m_player2Controller = new Controller(JUTGamePad::PORT_1);
	m_delegate          = new Delegate<ResultState>(this, &dvdload);
}

/*
 * --INFO--
 * Address:	8022C8F8
 * Size:	0000BC
 */
void ResultState::init(VsGameSection* section, StateArg* stateArg)
{
	Screen::gGame2DMgr->m_screenMgr->reset();
	Screen::gGame2DMgr->setGamePad(m_player1Controller);

	moviePlayer->clearSuspendedDemo();

	P2ASSERTLINE(48, stateArg);
	ResultArg* resultArg = static_cast<ResultArg*>(stateArg);
	m_endFlags.typeView  = resultArg->m_isNormalEnd;

	m_heap        = nullptr;
	m_expHeap     = nullptr;
	m_resultStage = VSRES_PrepareInfo;

	section->refreshHIO();
}

/*
 * --INFO--
 * Address:	8022C9B4
 * Size:	0002A8
 */
void ResultState::prepareMorimuraInfo(VsGameSection* section)
{
	if (!isNormalEnd()) { // Pikmin extinction / gave up / captain down
		section->m_timeLimit = 0.0f;
	}

	m_pikminLeft    = GameStat::alivePikis;
	m_pokoTimeScore = section->m_pokoCount + (int)section->m_timeLimit;

	BOOL isMultiplayer = FALSE;
	if (gameSystem->isMultiplayerMode()) {
		isMultiplayer = TRUE;
	}

	Highscore* highScore = sys->getPlayCommonData()->challenge_getHighscore(section->m_challengeStageNum, isMultiplayer);

	int stageIndex = section->m_challengeStageNum;
	m_resultInfo   = new Challenge2D_ResultInfo;

	ChallengeGame::StageData* stageData = section->m_challengeStageList->getStageData(stageIndex);

	m_resultInfo->m_displayFlag.clear();

	if (!gameSystem->isMultiplayerMode()) {
		m_resultInfo->setDisplayFlag(CHAL2D_Multiplayer);
	}

	if (isNormalEnd()) {
		m_resultInfo->setDisplayFlag(CHAL2D_SuccessEnd);
		if (section->_205) {
			m_resultInfo->setDisplayFlag(CHAL2D_PerfectEnd);
		}
	}

	m_resultInfo->m_displayIndex = stageData->m_stageIndex;
	m_resultInfo->m_stageIndex   = stageIndex;
	m_resultInfo->m_timeLeft     = (int)section->m_timeLimit;
	m_resultInfo->m_pokos        = section->m_pokoCount * 10;
	m_resultInfo->m_pikminLeft   = m_pikminLeft * 10;
	m_resultInfo->m_score        = m_resultInfo->m_pokos + m_resultInfo->m_timeLeft + m_resultInfo->m_pikminLeft;
	m_resultInfo->m_highScore    = highScore;

	if (sys->getPlayCommonData()->challenge_checkClear(stageIndex)) {
		m_resultInfo->setDisplayFlag(CHAL2D_Cleared);
	}

	if (sys->getPlayCommonData()->challenge_checkKunsho(stageIndex)) {
		m_resultInfo->setDisplayFlag(CHAL2D_PinkFlower);
	}

	if (isNormalEnd()) {
		if (!sys->getPlayCommonData()->challenge_checkClear(stageIndex)) {
			int courseID = sys->getPlayCommonData()->challenge_openNewCourse();
			OSReport("——— Course %d Opened !!\n", courseID);
			sys->getPlayCommonData()->challenge_setClear(stageIndex);
		}

		if (section->_205) {
			sys->getPlayCommonData()->challenge_setKunsho(stageIndex);
		}
	}
}

/*
 * --INFO--
 * Address:	8022CC5C
 * Size:	00013C
 */
void ResultState::dvdload()
{
	PSGame::SceneInfo scene;
	scene.m_gameType = 0x10;
	scene._07        = 0;
	static_cast<PSGame::PikSceneMgr*>(PSSystem::getSceneMgr())->newAndSetCurrentScene(&scene);

	PSSystem::SceneMgr* sceneMgr = PSSystem::getSceneMgr();
	sceneMgr->checkScene();

	sceneMgr->m_scenes->m_child->scene1stLoadSync();
	sceneMgr = PSSystem::getSceneMgr();
	sceneMgr->checkScene();
	sceneMgr->m_scenes->m_child->startMainSeq();
}

/*
 * --INFO--
 * Address:	8022CD98
 * Size:	00017C
 */
void ResultState::exec(VsGameSection* section)
{
	switch (m_resultStage) {
	case VSRES_PrepareInfo:
		section->clearHeap();
		m_heap    = getCurrentHeap();
		m_expHeap = makeExpHeap(m_heap->getFreeSize(), m_heap, true);
		m_expHeap->becomeCurrentHeap();

		prepareMorimuraInfo(section);
		m_resultStage = VSRES_PrepareDisp;

		sys->dvdLoadUseCallBack(&section->m_dvdThreadCommand, m_delegate);
		return;

	case VSRES_PrepareDisp:
		if (section->m_dvdThreadCommand.m_mode == 2) {
			m_resultStage = VSRES_Display;
			Morimura::DispMemberChallengeResult result;
			result.m_resultInfo = m_resultInfo;
			result.m_heap       = m_expHeap;
			Screen::gGame2DMgr->setGamePad(m_player1Controller);
			Screen::gGame2DMgr->open_ChallengeResult(result);
		}
		break;

	case VSRES_Display:
		Screen::gGame2DMgr->update();
		if (particle2dMgr) {
			particle2dMgr->update();
		}

		if (Screen::gGame2DMgr->isEndChallengeResult()) {
			transit(section, VGS_Title, nullptr);
		}
		break;
	}

	section->BaseHIOSection::doUpdate();
}

/*
 * --INFO--
 * Address:	8022CF14
 * Size:	000088
 */
void ResultState::draw(VsGameSection* section, Graphics& gfx)
{
	if (m_resultStage != VSRES_Display) {
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
 * Address:	8022CF9C
 * Size:	0000CC
 */
void ResultState::cleanup(VsGameSection* section)
{
	PSSystem::SceneMgr* sceneMgr = PSSystem::getSceneMgr();
	PSSystem::checkSceneMgr(sceneMgr);
	sceneMgr->deleteCurrentScene();

	particle2dMgr->killAll();

	m_expHeap->freeAll();
	m_expHeap->destroy();
	m_expHeap = nullptr;
	m_heap->becomeCurrentHeap();

	section->m_pokoCount = 0;
	section->m_timeLimit = 0;
}
} // namespace VsGame
} // namespace Game
