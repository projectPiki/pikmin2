#include "types.h"
#include "nans.h"
#include "TParticle2dMgr.h"
#include "Game/gameStat.h"
#include "Game/SingleGame.h"
#include "Game/MoviePlayer.h"
#include "Screen/Game2DMgr.h"
#include "Game/GameSystem.h"
#include "Radar.h"

namespace Game {
namespace SingleGame {

/**
 * @note Address: N/A
 * @note Size: 0xE4
 */
// void _Print(char*, ...)
//{
// UNUSED FUNCTION
//}

/**
 * @note Address: 0x80239E84
 * @note Size: 0xB4
 */
void LoadState::init(SingleGameSection* game, StateArg* arg)
{
	moviePlayer->reset();
	Screen::gGame2DMgr->mScreenMgr->reset();

	if (Radar::mgr) {
		Radar::mgr->clear();
	}

	P2ASSERTLINE(33, arg != nullptr);

	LoadArg* a     = static_cast<LoadArg*>(arg);
	mGameLoadType  = a->mGameLoadType;
	mDontClearHeap = a->mDontClearHeap;
	mIsCaveLoad    = a->mInCave;
	mIsCaveDeeper  = a->mIsCaveDeeper;

	mIsInitialized = false;
	mHasDrawn      = false;
}

/**
 * @note Address: N/A
 * @note Size: 0x160
 */
void LoadState::initNext(SingleGameSection* game)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80239F38
 * @note Size: 0x238
 */
void LoadState::exec(SingleGameSection* game)
{
	if (!mIsInitialized) {
		mIsInitialized = true;
		if (!mDontClearHeap) {
			game->clearHeap();
		}

		if (mIsCaveLoad || mIsCaveDeeper) {
			if (mIsCaveDeeper) {
				game->mCurrentFloor++;
			}
			game->mInCave = true;
			og::Screen::DispMemberFloor dispFloor;

			dispFloor.mSublevel = game->mCurrentFloor + 1;
			dispFloor.mCaveID   = game->mCaveIndex;
			Screen::gGame2DMgr->open_Floor(dispFloor);
			gameSystem->mIsInCave = true;

		} else {
			int courseIdx = game->mCurrentCourseInfo->mCourseIndex;
			og::Screen::DispMemberCourseName dispCourseName;
			dispCourseName.mCourseIndex = courseIdx;

			Screen::gGame2DMgr->open_CourseName(dispCourseName);
			game->mInCave         = false;
			gameSystem->mIsInCave = false;
		}

		GameStat::clear();
		_10           = 0;
		mHasLoadBegun = false;
		mHasDrawn     = false;

	} else {
		if (mHasDrawn && !mHasLoadBegun) {
			sys->dvdLoadUseCallBack(&game->mDvdThread, game->mLoadGameCallback);
			mHasLoadBegun = true;
		}
		if (game->mDvdThread.mMode == DvdThreadCommand::CM_Completed) {
			game->postSetupFloatMemory();
			if (game->mInCave) {
				transit(game, SGS_Cave, nullptr);
			} else {
				GameArg arg(true, mGameLoadType);
				transit(game, SGS_Game, &arg);
			}
		}
		if (particle2dMgr) {
			particle2dMgr->update();
		}
		Screen::gGame2DMgr->update();
	}
}

/**
 * @note Address: 0x8023A170
 * @note Size: 0x90
 */
void LoadState::draw(SingleGameSection* game, Graphics& gfx)
{
	if (mIsInitialized) {
		mHasDrawn = true;
		gfx.mPerspGraph.setPort();
		particle2dMgr->draw(1, 0);
		Screen::gGame2DMgr->draw(gfx);
		gfx.mPerspGraph.setPort();
		particle2dMgr->draw(0, 0);
	}
}

/**
 * @note Address: 0x8023A200
 * @note Size: 0x4
 */
void LoadState::cleanup(SingleGameSection*) { }

} // namespace SingleGame
} // namespace Game
