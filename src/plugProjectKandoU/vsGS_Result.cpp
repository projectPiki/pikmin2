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
#include "Morimura/challengeResult2d.h"
#include "Controller.h"
#include "TParticle2dMgr.h"
#include "System.h"
#include "nans.h"

namespace Game {
namespace VsGame {

static const char vsGSResultUnusedArray[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
static const char vsGSResultName[]        = "vsGS_Result";

/**
 * @note Address: 0x8022C7F4
 * @note Size: 0x104
 */
ResultState::ResultState()
    : State(VGS_Result)
{
	mEndFlags.clear();
	mPlayer1Controller = new Controller(JUTGamePad::PORT_0);
	mPlayer2Controller = new Controller(JUTGamePad::PORT_1);
	mDelegate          = new Delegate<ResultState>(this, &dvdload);
}

/**
 * @note Address: 0x8022C8F8
 * @note Size: 0xBC
 */
void ResultState::init(VsGameSection* section, StateArg* stateArg)
{
	Screen::gGame2DMgr->mScreenMgr->reset();
	Screen::gGame2DMgr->setGamePad(mPlayer1Controller);

	moviePlayer->clearSuspendedDemo();

	P2ASSERTLINE(48, stateArg);
	ResultArg* resultArg = static_cast<ResultArg*>(stateArg);
	mEndFlags.typeView   = resultArg->mEndFlag.typeView;

	mHeap        = nullptr;
	mExpHeap     = nullptr;
	mResultStage = VSRES_PrepareInfo;

	section->refreshHIO();
}

/**
 * @note Address: 0x8022C9B4
 * @note Size: 0x2A8
 */
void ResultState::prepareMorimuraInfo(VsGameSection* section)
{
	if (!isNormalEnd()) { // Pikmin extinction / gave up / captain down
		section->mTimeLimit = 0.0f;
	}

	mPikminLeft    = GameStat::alivePikis;
	mPokoTimeScore = section->mPokoCount + (int)section->mTimeLimit;

	BOOL isMultiplayer = FALSE;
	if (gameSystem->isMultiplayerMode()) {
		isMultiplayer = TRUE;
	}

	Highscore* highScore = sys->getPlayCommonData()->challenge_getHighscore(section->mChallengeStageNum, isMultiplayer);

	int stageIndex = section->mChallengeStageNum;
	mResultInfo    = new Challenge2D_ResultInfo;

	ChallengeGame::StageData* stageData = section->mChallengeStageList->getStageData(stageIndex);

	mResultInfo->mDisplayFlag.clear();

	if (!gameSystem->isMultiplayerMode()) {
		mResultInfo->setDisplayFlag(CHAL2D_Multiplayer);
	}

	if (isNormalEnd()) {
		mResultInfo->setDisplayFlag(CHAL2D_SuccessEnd);
		if (section->mIsChallengePerfect) {
			mResultInfo->setDisplayFlag(CHAL2D_PerfectEnd);
		}
	}

	mResultInfo->mDisplayIndex = stageData->mStageIndex;
	mResultInfo->mStageIndex   = stageIndex;
	mResultInfo->mTimeLeft     = (int)section->mTimeLimit;
	mResultInfo->mPokos        = section->mPokoCount * 10;
	mResultInfo->mPikminLeft   = mPikminLeft * 10;
	mResultInfo->mScore        = mResultInfo->mPokos + mResultInfo->mTimeLeft + mResultInfo->mPikminLeft;
	mResultInfo->mHighScore    = highScore;

	if (sys->getPlayCommonData()->challenge_checkClear(stageIndex)) {
		mResultInfo->setDisplayFlag(CHAL2D_Cleared);
	}

	if (sys->getPlayCommonData()->challenge_checkKunsho(stageIndex)) {
		mResultInfo->setDisplayFlag(CHAL2D_PinkFlower);
	}

	if (isNormalEnd()) {
		if (!sys->getPlayCommonData()->challenge_checkClear(stageIndex)) {
			int courseID = sys->getPlayCommonData()->challenge_openNewCourse();
			OSReport("＠＠＠ Course %d Opened !!\n", courseID);
			sys->getPlayCommonData()->challenge_setClear(stageIndex);
		}

		if (section->mIsChallengePerfect) {
			sys->getPlayCommonData()->challenge_setKunsho(stageIndex);
		}
	}
}

/**
 * @note Address: 0x8022CC5C
 * @note Size: 0x13C
 */
void ResultState::dvdload()
{
	PSGame::SceneInfo scene;
	scene.mSceneType = PSGame::SceneInfo::CHALLENGE_RESULTS;
	scene.mCameras   = 0;

	static_cast<PSGame::PikSceneMgr*>(PSSystem::getSceneMgr())->newAndSetCurrentScene(scene);
	PSSystem::getSceneMgr()->doFirstLoad();
	PSSystem::getSceneMgr()->doStartMainSeq();
}

/**
 * @note Address: 0x8022CD98
 * @note Size: 0x17C
 */
void ResultState::exec(VsGameSection* section)
{
	switch (mResultStage) {
	case VSRES_PrepareInfo:
		section->clearHeap();
		mHeap    = JKRGetCurrentHeap();
		mExpHeap = makeExpHeap(mHeap->getFreeSize(), mHeap, true);
		mExpHeap->becomeCurrentHeap();

		prepareMorimuraInfo(section);
		mResultStage = VSRES_PrepareDisp;

		sys->dvdLoadUseCallBack(&section->mDvdThreadCommand, mDelegate);
		return;

	case VSRES_PrepareDisp:
		if (section->mDvdThreadCommand.mMode == DvdThreadCommand::CM_Completed) {
			mResultStage = VSRES_Display;
			Morimura::DispMemberChallengeResult result;
			result.mResultInfo = mResultInfo;
			result.mHeap       = mExpHeap;
			Screen::gGame2DMgr->setGamePad(mPlayer1Controller);
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

/**
 * @note Address: 0x8022CF14
 * @note Size: 0x88
 */
void ResultState::draw(VsGameSection* section, Graphics& gfx)
{
	if (mResultStage != VSRES_Display) {
		return;
	}

	gfx.mPerspGraph.setPort();
	particle2dMgr->draw(1, 0);

	Screen::gGame2DMgr->draw(gfx);

	gfx.mPerspGraph.setPort();
	particle2dMgr->draw(0, 0);
}

/**
 * @note Address: 0x8022CF9C
 * @note Size: 0xCC
 */
void ResultState::cleanup(VsGameSection* section)
{
	PSMGetSceneMgrCheck()->deleteCurrentScene();

	particle2dMgr->killAll();

	mExpHeap->freeAll();
	mExpHeap->destroy();
	mExpHeap = nullptr;
	mHeap->becomeCurrentHeap();

	section->mPokoCount = 0;
	section->mTimeLimit = 0;
}
} // namespace VsGame
} // namespace Game
