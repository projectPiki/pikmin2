#include "Game/GameSystem.h"
#include "DynamicsParms.h"
#include "CellMgrParms.h"
#include "Game/DynParticle.h"
#include "Game/AIConstants.h"
#include "Game/Stickers.h"
#include "Game/gameStat.h"
#include "Game/MoviePlayer.h"
#include "SysShape/Model.h"
#include "nans.h"

static const int unusedArray[] = { 0, 0, 0 };
static const char name[]       = "gameSystem";

#define FRAMECOUNT_MAX 0x40000000

namespace Game {

GameSystem* gameSystem;
OptimiseController* OptimiseController::mInstance;

/*
 * --INFO--
 * Address:	801B4A80
 * Size:	000100
 */
GameSystem::GameSystem(BaseGameSection* section)
{
	mSection    = section;
	mMode       = GSM_STORY_MODE;
	mXfbTexture = nullptr;
	DynamicsParms::globalInstance();
	CellMgrParms::globalInstance();
	mFlags.clear();
	OptimiseController::globalInstance();
	mIsMoviePause = false;
}

/*
 * --INFO--
 * Address:	801B4B80
 * Size:	0000E8
 */
GameSystem::~GameSystem() { OptimiseController::deleteInstance(); }

/*
 * --INFO--
 * Address:	801B4C68
 * Size:	0000F0
 */
void GameSystem::init()
{
	mIsMoviePause = false;
	mFlags.clear();
	mFrameTimer = 0;

	sys->heapStatusStart("DynParticle", nullptr);
	dynParticleMgr = new DynParticleMgr(512);
	sys->heapStatusEnd("DynParticle");

	_aiConstants = new AIConstants;

	Stickers::initialise();
	GameStat::clear();

	mIsFrozen     = false;
	_49           = 0;
	mIsPaused     = 0;
	mIsPausedSoft = false;

	mTimeMgr = new TimeMgr;
	mTimeMgr->loadSettingFile("user/Abe/time/time.ini");
	mTimeMgr->setFlag(TIMEFLAG_Stopped);
}

/*
 * --INFO--
 * Address:	801B4D58
 * Size:	000020
 */
int GameSystem::calcFrameDist(int time)
{
	int timeFromEnd = (FRAMECOUNT_MAX - time);
	if ((int)mFrameTimer >= time) {
		return mFrameTimer - time;
	}
	return timeFromEnd + mFrameTimer;
}

/*
 * --INFO--
 * Address:	801B4D78
 * Size:	0000DC
 */
void GameSystem::startFrame()
{
	if (mIsPaused) {
		mIsPaused--;
	}

	mFrameTimer++;
	if ((int)mFrameTimer > FRAMECOUNT_MAX) {
		mFrameTimer = 0;
	}

	cellMgr->initFrame();
	collisionUpdateMgr->update();

	if (!paused() && !mIsFrozen && !isFlag(GAMESYS_Unk4) && !paused_soft() && (!moviePlayer || moviePlayer->mDemoState == 0)
	    && (int)gameSystem->mTimeMgr->mDayCount != 0) {
		mTimeMgr->update();
	}
}

/*
 * --INFO--
 * Address:	801B4E54
 * Size:	000018
 */
void GameSystem::endFrame()
{
	if (mIsPaused) {
		mIsPaused--;
	}
}

/*
 * --INFO--
 * Address:	801B4E6C
 * Size:	000038
 */
void GameSystem::startFadeout(f32 speed)
{
	if (mSection) {
		mSection->startFadeout(speed);
	}
}

/*
 * --INFO--
 * Address:	801B4EA4
 * Size:	000038
 */
void GameSystem::startFadein(f32 speed)
{
	if (mSection) {
		mSection->startFadein(speed);
	}
}

/*
 * --INFO--
 * Address:	801B4EDC
 * Size:	000038
 */
void GameSystem::startFadeoutin(f32 speed)
{
	if (mSection) {
		mSection->startFadeoutin(speed);
	}
}

/*
 * --INFO--
 * Address:	801B4F14
 * Size:	000038
 */
void GameSystem::startFadeblack()
{
	if (mSection) {
		mSection->startFadeblack();
	}
}

/*
 * --INFO--
 * Address:	801B4F4C
 * Size:	000038
 */
void GameSystem::startFadewhite()
{
	if (mSection) {
		mSection->startFadewhite();
	}
}

/*
 * --INFO--
 * Address:	801B4F84
 * Size:	000008
 */
void GameSystem::setMoviePause(bool isMoviePause, char*) { mIsMoviePause = isMoviePause; }

/*
 * --INFO--
 * Address:	801B4F8C
 * Size:	000008
 */
void GameSystem::setFrozen(bool isFrozen, char*) { mIsFrozen = isFrozen; }

/*
 * --INFO--
 * Address:	801B4F94
 * Size:	00002C
 */
u32 GameSystem::setPause(bool isPausedSoft, char* str, int pauseID) { startPause(isPausedSoft, pauseID, str); }

/*
 * --INFO--
 * Address:	801B4FC0
 * Size:	000008
 */
bool GameSystem::paused_soft() { return mIsPausedSoft; }

/*
 * --INFO--
 * Address:	801B4FC8
 * Size:	000028
 */
bool GameSystem::paused()
{
	if (!mIsPaused && mIsPausedSoft) {
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	801B4FF0
 * Size:	000050
 */
int GameSystem::startPause(bool isPausedSoft, int pauseID, char* str)
{
	if (isPausedSoft) {
		if (paused()) {
			return 1;
		}
	}
	mIsPaused     = pauseID;
	int prev      = mIsPausedSoft;
	mIsPausedSoft = isPausedSoft;
	return prev;
}

/*
 * --INFO--
 * Address:	801B5040
 * Size:	00002C
 */
void GameSystem::setDrawBuffer(int id)
{
	if (mSection) {
		mSection->setDrawBuffer(id);
	}
}

/*
 * --INFO--
 * Address:	801B506C
 * Size:	00000C
 */
GameLightMgr* GameSystem::getLightMgr() { return mSection->mLightMgr; }

/*
 * --INFO--
 * Address:	801B5078
 * Size:	000274
 */
void GameSystem::doAnimation()
{
	Iterator<GenericObjectMgr> it(this);
	CI_LOOP(it)
	{
		GenericObjectMgr* obj = *it;

		if (paused()) {
			if (obj->pausable()) {
				continue;
			}
		} else if (mIsFrozen) {
			if (obj->frozenable()) {
				continue;
			}
		}

		obj->doAnimation();
	}
}

/*
 * --INFO--
 * Address:	801B52EC
 * Size:	0001E4
 */
void GameSystem::doEntry()
{
	Iterator<GenericObjectMgr> it(this);
	CI_LOOP(it)
	{
		GenericObjectMgr* obj = *it;
		obj->doEntry();
	}
}

/*
 * --INFO--
 * Address:	801B54D0
 * Size:	0001F4
 */
void GameSystem::doSetView(int viewportNumber)
{
	Iterator<GenericObjectMgr> it(this);
	CI_LOOP(it)
	{
		GenericObjectMgr* obj = *it;
		obj->doSetView(viewportNumber);
	}
}

/*
 * --INFO--
 * Address:	801B56C4
 * Size:	000404
 */
void GameSystem::doViewCalc()
{
	if (BaseGameSection::sOptDraw <= 1) {
		Iterator<GenericObjectMgr> it(this);
		CI_LOOP(it)
		{
			GenericObjectMgr* obj = *it;
			obj->doViewCalc();
		}
	} else {
		bool flag = SysShape::Model::viewCalcMode == 0;
		Iterator<GenericObjectMgr> it(this);
		CI_LOOP(it)
		{
			GenericObjectMgr* obj = *it;
			if ((u8)flag || (int)obj->getMatrixLoadType() != 1) {
				obj->doViewCalc();
			}
		}
	}
}

/*
 * --INFO--
 * Address:	801B5AC8
 * Size:	000284
 */
void GameSystem::doSimulation(f32 speed)
{
	Iterator<GenericObjectMgr> it(this);
	CI_LOOP(it)
	{
		GenericObjectMgr* obj = *it;

		if (paused()) {
			if (obj->pausable()) {
				continue;
			}
		} else if (mIsFrozen) {
			if (obj->frozenable()) {
				continue;
			}
		}

		obj->doSimulation(speed);
	}
}

/*
 * --INFO--
 * Address:	801B5D4C
 * Size:	0001F4
 */
void GameSystem::doSimpleDraw(Viewport* vp)
{
	Iterator<GenericObjectMgr> it(this);
	CI_LOOP(it)
	{
		GenericObjectMgr* obj = *it;
		obj->doSimpleDraw(vp);
	}
}

/*
 * --INFO--
 * Address:	801B5F40
 * Size:	000004
 */
void GameSystem::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	801B5F44
 * Size:	000004
 */
void GameSystem::directDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	801B5F48
 * Size:	00006C
 */
void GameSystem::addObjectMgr(GenericObjectMgr* mgr)
{
	TObjectNode<GenericObjectMgr>* node = new TObjectNode<GenericObjectMgr>;
	node->mContents                     = mgr;
	mNode.add(node);
}

/*
 * --INFO--
 * Address:	801B5FB4
 * Size:	000020
 */
void GameSystem::detachObjectMgr(GenericObjectMgr* mgr) { delNode(mgr); }

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void GameSystem::detachAllMgr()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801B5FD4
 * Size:	000024
 */
void GameSystem::addObjectMgr_reuse(TObjectNode<GenericObjectMgr>* obj) { mNode.add(obj); }

/*
 * --INFO--
 * Address:	801B5FF8
 * Size:	000058
 */
TObjectNode<GenericObjectMgr>* GameSystem::detachObjectMgr_reuse(GenericObjectMgr* obj)
{
	FOREACH_NODE(TObjectNode<GenericObjectMgr>, mNode.mChild, node)
	{
		if (node->mContents == obj) {
			node->del();
			return node;
		}
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000FC
 */
OptimiseController::OptimiseController()
    : Parameters(nullptr, "Dynamics")
    , mC000(this, 'c000', "ピクミン首", true, false, true)              // 'pikmin neck'
    , mC001(this, 'c001', "コリジョンバッファ有効", false, false, true) // 'collision buffer enabled'
{
}

/*
 * --INFO--
 * Address:	801B6050
 * Size:	000068
 */
OptimiseController::~OptimiseController() { mInstance = nullptr; }

/*
 * --INFO--
 * Address:	801B60B8
 * Size:	00010C
 */
void OptimiseController::globalInstance()
{
	if (!mInstance)
		mInstance = new OptimiseController;
}

/*
 * --INFO--
 * Address:	801B61C4
 * Size:	000048
 */
void OptimiseController::deleteInstance()
{
	if (!mInstance) {
		delete mInstance;
	}
	mInstance = nullptr;
}

} // namespace Game
