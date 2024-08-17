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

/**
 * @note Address: 0x801B4A80
 * @note Size: 0x100
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

/**
 * @note Address: 0x801B4B80
 * @note Size: 0xE8
 */
GameSystem::~GameSystem() { OptimiseController::deleteInstance(); }

/**
 * @note Address: 0x801B4C68
 * @note Size: 0xF0
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
	mUnused       = 0;
	mIsPaused     = 0;
	mIsPausedSoft = false;

	mTimeMgr = new TimeMgr;
	mTimeMgr->loadSettingFile("user/Abe/time/time.ini");
	mTimeMgr->setFlag(TIMEFLAG_Stopped);
}

/**
 * @note Address: 0x801B4D58
 * @note Size: 0x20
 */
int GameSystem::calcFrameDist(int time)
{
	int timeFromEnd = (FRAMECOUNT_MAX - time);
	if ((int)mFrameTimer >= time) {
		return mFrameTimer - time;
	}
	return timeFromEnd + mFrameTimer;
}

/**
 * @note Address: 0x801B4D78
 * @note Size: 0xDC
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

	if (!paused() && !mIsFrozen && !isFlag(GAMESYS_DisablePause) && !paused_soft()
	    && (!moviePlayer || moviePlayer->mDemoState == DEMOSTATE_Inactive) && (int)gameSystem->mTimeMgr->mDayCount != 0) {
		mTimeMgr->update();
	}
}

/**
 * @note Address: 0x801B4E54
 * @note Size: 0x18
 */
void GameSystem::endFrame()
{
	if (mIsPaused) {
		mIsPaused--;
	}
}

/**
 * @note Address: 0x801B4E6C
 * @note Size: 0x38
 */
void GameSystem::startFadeout(f32 speed)
{
	if (mSection) {
		mSection->startFadeout(speed);
	}
}

/**
 * @note Address: 0x801B4EA4
 * @note Size: 0x38
 */
void GameSystem::startFadein(f32 speed)
{
	if (mSection) {
		mSection->startFadein(speed);
	}
}

/**
 * @note Address: 0x801B4EDC
 * @note Size: 0x38
 */
void GameSystem::startFadeoutin(f32 speed)
{
	if (mSection) {
		mSection->startFadeoutin(speed);
	}
}

/**
 * @note Address: 0x801B4F14
 * @note Size: 0x38
 */
void GameSystem::startFadeblack()
{
	if (mSection) {
		mSection->startFadeblack();
	}
}

/**
 * @note Address: 0x801B4F4C
 * @note Size: 0x38
 */
void GameSystem::startFadewhite()
{
	if (mSection) {
		mSection->startFadewhite();
	}
}

/**
 * @note Address: 0x801B4F84
 * @note Size: 0x8
 */
void GameSystem::setMoviePause(bool isMoviePause, char*) { mIsMoviePause = isMoviePause; }

/**
 * @note Address: 0x801B4F8C
 * @note Size: 0x8
 */
void GameSystem::setFrozen(bool isFrozen, char*) { mIsFrozen = isFrozen; }

/**
 * @note Address: 0x801B4F94
 * @note Size: 0x2C
 */
u32 GameSystem::setPause(bool isPausedSoft, char* str, int pauseID) { startPause(isPausedSoft, pauseID, str); }

/**
 * @note Address: 0x801B4FC0
 * @note Size: 0x8
 */
bool GameSystem::paused_soft() { return mIsPausedSoft; }

/**
 * @note Address: 0x801B4FC8
 * @note Size: 0x28
 */
bool GameSystem::paused()
{
	if (!mIsPaused && mIsPausedSoft) {
		return true;
	}
	return false;
}

/**
 * @note Address: 0x801B4FF0
 * @note Size: 0x50
 */
int GameSystem::startPause(bool isPausedSoft, int pauseID, char* str)
{
	if (isPausedSoft && paused()) {
		return TRUE;
	}

	mIsPaused     = pauseID;
	int prev      = mIsPausedSoft;
	mIsPausedSoft = isPausedSoft;
	return prev;
}

/**
 * @note Address: 0x801B5040
 * @note Size: 0x2C
 */
void GameSystem::setDrawBuffer(int id)
{
	if (mSection) {
		mSection->setDrawBuffer(id);
	}
}

/**
 * @note Address: 0x801B506C
 * @note Size: 0xC
 */
GameLightMgr* GameSystem::getLightMgr() { return mSection->mLightMgr; }

/**
 * @note Address: 0x801B5078
 * @note Size: 0x274
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

/**
 * @note Address: 0x801B52EC
 * @note Size: 0x1E4
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

/**
 * @note Address: 0x801B54D0
 * @note Size: 0x1F4
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

/**
 * @note Address: 0x801B56C4
 * @note Size: 0x404
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

		return;
	}

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

/**
 * @note Address: 0x801B5AC8
 * @note Size: 0x284
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

/**
 * @note Address: 0x801B5D4C
 * @note Size: 0x1F4
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

/**
 * @note Address: 0x801B5F40
 * @note Size: 0x4
 */
void GameSystem::doDirectDraw(Graphics&) { }

/**
 * @note Address: 0x801B5F44
 * @note Size: 0x4
 */
void GameSystem::directDraw(Graphics&) { }

/**
 * @note Address: 0x801B5F48
 * @note Size: 0x6C
 */
void GameSystem::addObjectMgr(GenericObjectMgr* mgr)
{
	TObjectNode<GenericObjectMgr>* node = new TObjectNode<GenericObjectMgr>;
	node->mContents                     = mgr;
	mNode.add(node);
}

/**
 * @note Address: 0x801B5FB4
 * @note Size: 0x20
 */
void GameSystem::detachObjectMgr(GenericObjectMgr* mgr) { delNode(mgr); }

/**
 * @note Address: N/A
 * @note Size: 0x54
 */
void GameSystem::detachAllMgr()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x801B5FD4
 * @note Size: 0x24
 */
void GameSystem::addObjectMgr_reuse(TObjectNode<GenericObjectMgr>* obj) { mNode.add(obj); }

/**
 * @note Address: 0x801B5FF8
 * @note Size: 0x58
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

/**
 * @note Address: N/A
 * @note Size: 0xFC
 */
OptimiseController::OptimiseController()
    : Parameters(nullptr, "Dynamics")
    , mPikminNeck(this, 'c000', "ピクミン首", true, false, true)                          // 'pikmin neck'
    , mCollisionBufferEnabled(this, 'c001', "コリジョンバッファ有効", false, false, true) // 'collision buffer enabled'
{
}

/**
 * @note Address: 0x801B6050
 * @note Size: 0x68
 */
OptimiseController::~OptimiseController() { mInstance = nullptr; }

/**
 * @note Address: 0x801B60B8
 * @note Size: 0x10C
 */
void OptimiseController::globalInstance()
{
	if (!mInstance)
		mInstance = new OptimiseController;
}

/**
 * @note Address: 0x801B61C4
 * @note Size: 0x48
 */
void OptimiseController::deleteInstance()
{
	if (!mInstance) {
		delete mInstance;
	}
	mInstance = nullptr;
}

} // namespace Game
