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

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
// void _Print(char*, ...)
//{
// UNUSED FUNCTION
//}

/*
 * --INFO--
 * Address:	80239E84
 * Size:	0000B4
 */
void LoadState::init(SingleGameSection* gs, StateArg* arg)
{
	moviePlayer->reset();
	Screen::gGame2DMgr->mScreenMgr->reset();

	if (Radar::mgr) {
		Radar::mgr->clear();
	}

	P2ASSERTLINE(33, arg != nullptr);

	LoadArg* a = static_cast<LoadArg*>(arg);
	_24        = a->_04;
	_29        = a->_01;
	_27        = a->mInCave;
	_28        = a->_02;

	_26 = false;
	_14 = false;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000160
 */
void LoadState::initNext(SingleGameSection* gs)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80239F38
 * Size:	000238
 */
void LoadState::exec(SingleGameSection* gs)
{
	if (!_26) {
		_26 = true;
		if (!_29) {
			gs->clearHeap();
		}

		if (_27 || _28) {
			if (_28) {
				gs->mCurrentFloor++;
			}
			gs->mInCave = true;
			og::Screen::DispMemberFloor dispFloor;

			dispFloor.mSublevel = gs->mCurrentFloor + 1;
			dispFloor.mCaveID   = gs->mCaveIndex;
			Screen::gGame2DMgr->open_Floor(dispFloor);
			gameSystem->mIsInCave = true;

		} else {
			int courseIdx = gs->mCurrentCourseInfo->mCourseIndex;
			og::Screen::DispMemberCourseName dispCourseName;
			dispCourseName.mCourseIndex = courseIdx;

			Screen::gGame2DMgr->open_CourseName(dispCourseName);
			gs->mInCave           = false;
			gameSystem->mIsInCave = false;
		}

		GameStat::clear();
		_10 = 0;
		_15 = false;
		_14 = false;

	} else {
		if (_14 && !_15) {
			sys->dvdLoadUseCallBack(&gs->mDvdThread, gs->_224);
			_15 = true;
		}
		if (gs->mDvdThread.mMode == 2) {
			gs->postSetupFloatMemory();
			if (gs->mInCave) {
				transit(gs, 4, nullptr);
			} else {
				GameArg arg(true, _24);
				transit(gs, SGS_Game, &arg);
			}
		}
		if (particle2dMgr) {
			particle2dMgr->update();
		}
		Screen::gGame2DMgr->update();
	}
}

/*
 * --INFO--
 * Address:	8023A170
 * Size:	000090
 */
void LoadState::draw(SingleGameSection* gs, Graphics& gfx)
{
	if (_26) {
		_14 = true;
		gfx.mPerspGraph.setPort();
		particle2dMgr->draw(1, 0);
		Screen::gGame2DMgr->draw(gfx);
		gfx.mPerspGraph.setPort();
		particle2dMgr->draw(0, 0);
	}
}

/*
 * --INFO--
 * Address:	8023A200
 * Size:	000004
 */
void LoadState::cleanup(SingleGameSection*) { }

} // namespace SingleGame
} // namespace Game
