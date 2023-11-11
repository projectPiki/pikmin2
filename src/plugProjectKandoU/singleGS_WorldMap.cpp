#include "Game/GameSystem.h"
#include "Game/MoviePlayer.h"
#include "Game/Navi.h"
#include "Game/gamePlayData.h"
#include "Screen/Game2DMgr.h"
#include "Game/SingleGame.h"
#include "kh/khWorldMap.h"
#include "PSGame/SceneInfo.h"
#include "PSSystem/PSGame.h"
#include "PSGame/PikScene.h"
#include "TParticle2dMgr.h"
#include "JSystem/J2D/J2DPrint.h"
#include "nans.h"

// probably have this somewhere easy to find
#define MAX_LEVELS 4

static const u32 padding[]    = { 0, 0, 0 };
static const char className[] = "SingleGS_Game";

static int sParentHeapFreeSize;
static int sParentHeapFreeSize_Last;

namespace Game {
namespace SingleGame {

/*
 * --INFO--
 * Address:	8021B94C
 * Size:	0000E4
 */
SelectState::SelectState()
    : State(SGS_Select)
{
	mController       = new Controller(JUTGamePad::PORT_0);
	mDvdLoadCallback  = new Delegate<SelectState>(this, &dvdload);
	mPreviousCourseID = -1;
}

/*
 * --INFO--
 * Address:	8021BA30
 * Size:	000098
 */
void SelectState::init(SingleGameSection*, StateArg*)
{
	moviePlayer->reset();
	mState      = SELECTSTATE_Init;
	mParentHeap = nullptr;
	mWMapHeap   = nullptr;
	Screen::gGame2DMgr->mScreenMgr->reset();
	sParentHeapFreeSize_Last = sParentHeapFreeSize;
	sParentHeapFreeSize      = JKRHeap::sCurrentHeap->getFreeSize();
	JKRHeap::sCurrentHeap->getFreeSize();
	JKRHeap::sCurrentHeap->getTotalFreeSize();
	playData->mDeadNaviID = 0;
	naviMgr->clearDeadCount();
	mNewLevelOpen = false;
}

/*
 * --INFO--
 * Address:	8021BAC8
 * Size:	000260
 */
void SelectState::initNext(SingleGameSection* section)
{
	sys->setFrameRate(1);
	mState = SELECTSTATE_Load;

	mParentHeap = JKRHeap::sCurrentHeap;
	mParentHeap->getFreeSize();
	sParentHeapFreeSize = mParentHeap->getFreeSize();
	mParentHeap->getFreeSize();
	mParentHeap->getTotalFreeSize();
	mWMapHeap = JKRExpHeap::create(mParentHeap->getFreeSize(), mParentHeap, true);
	mWMapHeap->becomeCurrentHeap();

	if (playData->courseOpen(2) && (playData->isStoryFlag(STORY_DebtPaid)) && !playData->courseOpen(3)) {
		playData->openCourse(3);
	}
	if (playData->courseOpen(1)) {
		playData->setDemoFlag(DEMO_First_Globe_Day_End);
		playData->setDemoFlag(DEMO_First_Cave_Return);
	}

	bool anyFirstTimes = false;
	for (int i = 0; i < MAX_LEVELS; i++) {
		if (playData->courseFirstTime(i)) {
			anyFirstTimes = true;
		}
	}
	mNewLevelOpen = anyFirstTimes;

	mWorldMap = new kh::Screen::WorldMap;
	WorldMap::InitArg arg;

	arg.mCurrentDay = gameSystem->mTimeMgr->mDayCount + 1;
	arg.mStages     = stageList;
	arg.mHeap       = mWMapHeap;
	arg.mController = mController;

	if (mPreviousCourseID == -1) {
		arg.mInitialCourseIndex = playData->getCurrentCourseIndex();
	} else {
		arg.mInitialCourseIndex = mPreviousCourseID;
	}

	arg.mHasNewPiklopediaEntries    = playData->mTekiStatMgr.whatsNew();
	arg.mHasNewTreasureHoardEntries = playData->hasPelletZukanWhatsNew();
	arg.mDoNewEntriesEfx            = section->_228;
	section->_228                   = 1;
	static_cast<Game::WorldMap::Base*>(mWorldMap)->init(arg);

	section->mDisplayWiper = section->mWipeInFader;
	section->mWipeInFader->start(1.0f);

	section->refreshHIO();
	mController->setButtonRepeat(0x3000000, 0x1E, 1);
	sys->dvdLoadUseCallBack(&section->mDvdThread, mDvdLoadCallback);
}

/*
 * --INFO--
 * Address:	8021BD2C
 * Size:	00030C
 */
void SelectState::dvdload()
{
	PSGame::SceneInfo info;
	if (mNewLevelOpen) {
		info.mSceneType = PSGame::SceneInfo::WORLD_MAP_NEWLEVEL;
	} else {
		info.mSceneType = PSGame::SceneInfo::WORLD_MAP_NORMAL;
	}
	info.mCameras = 0;

	JUT_ASSERTLINE(394, PSSystem::getSceneMgr(), "PSGetSceneMgr null\n");

	static_cast<PSGame::PikSceneMgr*>(PSSystem::getSceneMgr())->newAndSetCurrentScene(info);
	static_cast<PSGame::PikSceneMgr*>(PSSystem::getSceneMgr())->doFirstLoad();
	static_cast<PSGame::PikSceneMgr*>(PSSystem::getSceneMgr())->doStartMainSeq();

	if (JKRGetCurrentHeap() != mWMapHeap) {
		JUT_PANICLINE(401, "MOC = Mouse on Cars!\n");
	}

	void* handle = JKRDvdRipper::loadToMainRAM("user/Ebisawa/effect/eff2d_world_map.jpc", nullptr, Switch_0, 0, 0,
	                                           JKRDvdRipper::ALLOC_DIR_TOP, 0, nullptr, nullptr);
	JUT_ASSERTLINE(410, handle, "WORLD_MAP_JPC");
	JPAResourceManager* jpamgr = new JPAResourceManager(handle, JKRGetCurrentHeap());
	JPAEmitterManager* jpaemit = new JPAEmitterManager(1000, 256, JKRGetCurrentHeap(), 8, 8);
	JUT_ASSERTLINE(416, particle2dMgr, "particle2dMgr null\n");
	particle2dMgr->setSceneEmitterAndResourceManager(jpaemit, jpamgr);

	if (JKRGetCurrentHeap() != mWMapHeap) {
		JUT_PANICLINE(420, "MOC = Mouse on Cars!\n");
	}

	JUT_ASSERTLINE(423, mWorldMap, "mWorldMap null\n");
	static_cast<Game::WorldMap::Base*>(mWorldMap)->loadResource();

	if (JKRGetCurrentHeap() != mWMapHeap) {
		JUT_PANICLINE(427, "MOC = Mouse on Cars!\n");
	}
}

/*
 * --INFO--
 * Address:	8021C03C
 * Size:	0002AC
 */
void SelectState::exec(SingleGameSection* game)
{
	switch (mState) {
	case SELECTSTATE_Init: {
		initNext(game);
		break;
	}
	case SELECTSTATE_Load: {
		if (game->mDvdThread.mMode == 2)
			mState = SELECTSTATE_Draw;
		break;
	}
	default: {
		if (mWMapHeap) {
			game->BaseHIOSection::doUpdate();
			WorldMap::UpdateArg arg;
			arg.mCourseInfo = nullptr;
			arg.mStatus     = WorldMap::WMapUpdate_0;
			static_cast<Game::WorldMap::Base*>(mWorldMap)->update(arg);

			switch (arg.mStatus) {
			case WorldMap::WMapUpdate_GoToLoad: {
				mPreviousCourseID = -1;
				ZukanState* state = static_cast<ZukanState*>(game->mFsm->getState(SGS_Zukan));
				if (state) {
					state->_110 = -1;
					state->_114 = -1;
				}
				if (arg.mCourseInfo) {
					CourseInfo* info = arg.mCourseInfo;
					game->_228       = 0;
					playData->setPelletZukanOutOfDateAll();
					playData->mTekiStatMgr.setOutOfDateAll();
					game->mDisplayWiper = game->mWipeInFader;
					game->mWipeInFader->start(4.0f);
					game->mCurrentCourseInfo = info;
					LoadArg larg(0, false, true, false);
					transit(game, SGS_Load, &larg);
				}
				break;
			}
			case WorldMap::WMapUpdate_2: {
				ZukanStateArg sarg;
				sarg.mZukanType = 1;
				sarg.mCourseID  = 0;
				transit(game, SGS_Zukan, &sarg);
				break;
			}
			case WorldMap::WMapUpdate_GoToZukan: {
				ZukanStateArg sarg;
				sarg.mZukanType = 1;
				sarg.mCourseID  = 0;
				if (arg.mCourseInfo) {
					sarg.mCourseID    = arg.mCourseInfo->mCourseIndex;
					mPreviousCourseID = sarg.mCourseID;
				} else {
					sarg.mCourseID = 2;
				}
				transit(game, SGS_Zukan, &sarg);
				break;
			}
			case WorldMap::WMapUpdate_ReturnToTitle: {
				mPreviousCourseID = -1;
				ZukanState* state = static_cast<ZukanState*>(game->mFsm->getState(SGS_Zukan));
				if (state) {
					state->_110 = -1;
					state->_114 = -1;
				}
				game->_228 = 0;
				game->flow_goto_title();
				return;
			}
			case WorldMap::WMapUpdate_4: {
				ZukanStateArg sarg2;
				sarg2.mZukanType = 0;
				sarg2.mCourseID  = 0;
				if (arg.mCourseInfo) {
					sarg2.mCourseID   = arg.mCourseInfo->mCourseIndex;
					mPreviousCourseID = sarg2.mCourseID;
				} else {
					sarg2.mCourseID = 2;
				}
				transit(game, SGS_Zukan, &sarg2);
				break;
			}
			}
			if (particle2dMgr) {
				particle2dMgr->update();
			}
		}
	}
	}
}

/*
 * --INFO--
 * Address:	8021C2EC
 * Size:	0002D0
 */
void SelectState::draw(SingleGameSection* game, Graphics& gfx)
{
	if (mWMapHeap && mState == SELECTSTATE_Draw) {
		gfx.mOrthoGraph.setPort();

		gfx.mPerspGraph.setPort();
		static_cast<Game::WorldMap::Base*>(mWorldMap)->draw1st(gfx);

		gfx.mPerspGraph.setPort();
		particle2dMgr->draw(3, 0);

		gfx.mPerspGraph.setPort();
		static_cast<Game::WorldMap::Base*>(mWorldMap)->draw2nd(gfx);

		gfx.mPerspGraph.setPort();
		particle2dMgr->draw(2, 0);

		gfx.mPerspGraph.setPort();
		static_cast<Game::WorldMap::Base*>(mWorldMap)->draw3rd(gfx);

		gfx.mPerspGraph.setPort();
		particle2dMgr->draw(4, 0);

		gfx.mPerspGraph.setPort();
		static_cast<Game::WorldMap::Base*>(mWorldMap)->draw4th(gfx);

		gfx.mPerspGraph.setPort();
		particle2dMgr->draw(1, 0);

		gfx.mPerspGraph.setPort();
		particle2dMgr->draw(0, 0);

		if (sParentHeapFreeSize && sParentHeapFreeSize_Last && (sParentHeapFreeSize != sParentHeapFreeSize_Last)) {
			gfx.mOrthoGraph.setPort();
			J2DPrint print(JFWSystem::systemFont, 0.0f);
			print.initiate();
			print.mCharColor.set(JUtility::TColor(255, 19, 55, 255));
			print.mGradientColor.set(JUtility::TColor(0, 0, 0, 255));
			print.mGlyphWidth  = 16.0f;
			print.mGlyphHeight = 16.0f;
			print.print(60.0f, 120.0f, "* %d %d %d", sParentHeapFreeSize_Last - sParentHeapFreeSize, sParentHeapFreeSize_Last,
			            sParentHeapFreeSize);
		}
	}
}

/*
 * --INFO--
 * Address:	8021C5CC
 * Size:	0000F4
 */
void SelectState::cleanup(SingleGameSection* game)
{
	PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
	PSSystem::checkSceneMgr(mgr);
	mgr->deleteCurrentScene();

	playData->doneWorldMapEffect();
	particle2dMgr->killAll();
	particle2dMgr->clearSceneEmitterAndResourceManager();
	mWMapHeap->freeAll();
	mWMapHeap->destroy();
	mWMapHeap = nullptr;
	mParentHeap->becomeCurrentHeap();
	sys->setFrameRate(2);
	JUT_ASSERTLINE(732, sParentHeapFreeSize == (int)mParentHeap->getFreeSize(), "damek\n");
}

} // namespace SingleGame
} // namespace Game
