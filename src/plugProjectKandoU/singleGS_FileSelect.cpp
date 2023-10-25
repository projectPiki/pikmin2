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

/*
 * --INFO--
 * Address:	8021C718
 * Size:	0000A8
 */
FileState::FileState()
    : State(SGS_File)
{
	mMainController  = new Controller(JUTGamePad::PORT_0);
	mDebugController = new Controller(JUTGamePad::PORT_2);
	mBackupHeap      = nullptr;
	mMainHeap        = nullptr;
}

/*
 * --INFO--
 * Address:	8021C7C0
 * Size:	00009C
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

/*
 * --INFO--
 * Address:	8021C85C
 * Size:	00019C
 */
void FileState::dvdload()
{
	PSGame::SceneInfo info;
	info.mSceneType = PSGame::SceneInfo::FILE_SELECT;
	info.mCameras   = 0;

	static_cast<PSGame::PikSceneMgr*>(PSSystem::getSceneMgr())->newAndSetCurrentScene(info);

	PSSystem::SceneMgr* sceneMgr = PSSystem::getSceneMgr();
	sceneMgr->checkScene();
	sceneMgr->mScenes->mChild->scene1stLoadSync();

	sceneMgr = PSSystem::getSceneMgr();
	sceneMgr->checkScene();
	sceneMgr->mScenes->mChild->startMainSeq();

	mFSMgr                      = ebi::FileSelect::TMgr::createInstance();
	ebi::FileSelect::TMgr* tmgr = mFSMgr;
	tmgr->mMgrFS.mMainScreen.loadResource();
	JKRHeap* heap = JKRGetCurrentHeap();
	tmgr->mCardErrorMgr.mScreen.loadResource(heap);
	static_cast<Game::MemoryCard::Mgr*>(sys->mCardMgr)->loadResource(heap);
	Controller* input            = mMainController;
	ebi::FileSelect::TMgr* tmgr2 = mFSMgr;
	tmgr2->mMgrFS.setController(input);
	tmgr2->mCardErrorMgr.mScreen.mController = input;
	playData->reset();
}

/*
 * --INFO--
 * Address:	8021C9F8
 * Size:	000194
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
			switch (mFSMgr->mState) {
			case 2:
				startGame(game);
				break;

			case 1:
				gameSystem->mTimeMgr->mDayCount = 0;
				startGame(game);
				break;

			case 3:
				game->flow_goto_title();
			}
		}
	}
}

/*
 * --INFO--
 * Address:	8021CB8C
 * Size:	00027C
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

		u16 flag = 1;
		if (playData->mDeadNaviID & 1 && playData->mDeadNaviID & 2) {
			flag = 2;
		}
		LoadArg arg(flag, false, true, false);
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
		LoadArg arg(0, 1, 1, 0);
		transit(game, SGS_Load, &arg);
		break;
	}

	case STORYSAVE_DebtPaid: {
		EndingArg arg(1);
		transit(game, SGS_Ending, &arg);
		break;
	}

	default:
		JUT_PANICLINE(529, "unknown saveFlag (%d)\n", saveFlag);
	}
}

/*
 * --INFO--
 * Address:	8021CE08
 * Size:	0000C0
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

/*
 * --INFO--
 * Address:	8021CEC8
 * Size:	0000D4
 */
void FileState::cleanup(SingleGameSection* game)
{
	PSSystem::SceneMgr* sceneMgr = PSSystem::getSceneMgr();
	PSSystem::checkSceneMgr(sceneMgr);
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
