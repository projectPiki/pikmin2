#include "Game/MoviePlayer.h"
#include "Screen/Game2DMgr.h"
#include "System.h"
#include "types.h"
#include "Game/SingleGame.h"
#include "nans.h"
#include "PSGame/SceneInfo.h"
#include "PSSystem/PSGame.h"
#include "PSM/Scene.h"
#include "TParticle2dMgr.h"
#include "Game/GameSystem.h"

static const u32 unused[3] = { 0, 0, 0 };
static const char name[]   = "SingleGS_Game";

namespace Game {
namespace SingleGame {

/**
 * @note Address: 0x8021C718
 * @note Size: 0xA8
 */
FileState::FileState()
    : State(SGS_File)
{
	mMainController  = new Controller(JUTGamePad::PORT_0);
	mDebugController = new Controller(JUTGamePad::PORT_2);
	mBackupHeap      = nullptr;
	mMainHeap        = nullptr;
}

/**
 * @note Address: 0x8021C7C0
 * @note Size: 0x9C
 */
void FileState::init(SingleGameSection* section, StateArg* arg)
{
	moviePlayer->reset();
	mIsNotInitialized      = true;
	section->mDisplayWiper = section->mWipeInFader;
	section->mWipeInFader->start(1.0f);
	section->refreshHIO();
	Screen::gGame2DMgr->mScreenMgr->reset();
	sys->setFrameRate(1);
	playData->mDeadNaviID = 0;
}

/**
 * @note Address: 0x8021C85C
 * @note Size: 0x19C
 */
void FileState::dvdload()
{
	PSGame::SceneInfo info;
	info.mSceneType = PSGame::SceneInfo::FILE_SELECT;
	info.mCameras   = 0;

	static_cast<PSGame::PikSceneMgr*>(PSSystem::getSceneMgr())->newAndSetCurrentScene(info);
	PSSystem::getSceneMgr()->doFirstLoad();
	PSSystem::getSceneMgr()->doStartMainSeq();

	mFSMgr = ebi::FileSelect::TMgr::createInstance();
	mFSMgr->doLoadMenuResource();
	mFSMgr->setControllers(mMainController);

	playData->reset();
}

/**
 * @note Address: 0x8021C9F8
 * @note Size: 0x194
 */
void FileState::exec(SingleGameSection* game)
{
	if (mIsNotInitialized) {
		mBackupHeap = JKRGetCurrentHeap();
		mMainHeap   = JKRExpHeap::create(mBackupHeap->getFreeSize(), mBackupHeap, true);
		mMainHeap->becomeCurrentHeap();

		mLoadDelegate = new Delegate<FileState>(this, dvdload);
		game->loadSync(mLoadDelegate, false);
		mFSMgr->start();
		mIsNotInitialized = false;

	} else if (mMainHeap) {
		if (particle2dMgr) {
			particle2dMgr->update();
		}

		game->BaseHIOSection::doUpdate();
		mFSMgr->update();

		if (mFSMgr->isFinish()) {
			switch (mFSMgr->mEndState) {
			case ebi::FileSelect::TMgr::End_StartGame:
				startGame(game);
				break;

			case ebi::FileSelect::TMgr::End_StartNewGame:
				gameSystem->mTimeMgr->mDayCount = 0;
				startGame(game);
				break;

			case ebi::FileSelect::TMgr::End_ReturnToTitle:
				game->flow_goto_title();
			}
		}
	}
}

/**
 * @note Address: 0x8021CB8C
 * @note Size: 0x27C
 */
void FileState::startGame(SingleGameSection* game)
{
	int saveFlag = playData->mLoadType;
	if (particle2dMgr) {
		particle2dMgr->killAll();
	}

	switch (saveFlag) {
	case STORYSAVE_NewFile: {
		MovieArg arg(THPPlayer::OPENING_GameStart);
		transit(game, SGS_Movie, &arg);
		break;
	}

	case STORYSAVE_WorldMap: {
		transit(game, SGS_Select, nullptr);
		break;
	}

	case STORYSAVE_Overworld: {
		game->mDisplayWiper = game->mWipeInFader;
		game->mWipeInFader->start(4.0f);
		game->mCurrentCourseInfo = playData->getCurrentCourse();
		P2ASSERTLINE(469, game->mCurrentCourseInfo);

		u16 loadtype = MapEnter_CaveGeyser;
		if (playData->mDeadNaviID & 1 && playData->mDeadNaviID & 2) {
			loadtype = MapEnter_CaveNavisDown;
		}
		LoadArg arg(loadtype, false, true, false);
		transit(game, SGS_Load, &arg);
		break;
	}

	case STORYSAVE_Cave: {
		ID32 id;
		int floor;
		CourseInfo* info = playData->getCurrentCourse();
		playData->getCurrentCave(id, floor);
		game->mCurrentCourseInfo = info;
		game->mCurrentFloor      = floor;
		game->mCaveIndex         = id.getID();
		game->mInCave            = true;
		game->mCaveID            = id;
		strcpy(game->mCaveFilename, info->getCaveinfoFilename_FromID(id));
		game->loadMainMapSituation();
		// MapEnter type isnt used when loading into caves
		LoadArg arg(MapEnter_NewDay, true, true, false);
		transit(game, SGS_Load, &arg);
		break;
	}

	case STORYSAVE_DebtPaid: {
		EndingArg arg(EndingState::Ending_SkipMovie);
		transit(game, SGS_Ending, &arg);
		break;
	}

	default:
		JUT_PANICLINE(529, "unknown saveFlag (%d)\n", saveFlag);
	}
}

/**
 * @note Address: 0x8021CE08
 * @note Size: 0xC0
 */
void FileState::draw(SingleGameSection* game, Graphics& gfx)
{
	if (mMainHeap) {
		gfx.mPerspGraph.setPort();
		particle2dMgr->draw(1, 0);
		gfx.mOrthoGraph.setPort();
		gfx.mPerspGraph.setPort();
		mFSMgr->draw();
		gfx.mPerspGraph.setPort();
		particle2dMgr->draw(0, 0);
		mFSMgr->showInfo();
	}
}

/**
 * @note Address: 0x8021CEC8
 * @note Size: 0xD4
 */
void FileState::cleanup(SingleGameSection* game)
{
	PSSystem::SceneMgr* sceneMgr = PSSystem::getSceneMgr();
	PSSystem::validateSceneMgr(sceneMgr);
	sceneMgr->deleteCurrentScene();
	mFSMgr->forceQuit();
	mMainHeap->freeAll();
	mMainHeap->destroy();
	mMainHeap = nullptr;
	mBackupHeap->becomeCurrentHeap();
	sys->setFrameRate(2);
	Screen::gGame2DMgr->mScreenMgr->reset();
}

} // namespace SingleGame
} // namespace Game
