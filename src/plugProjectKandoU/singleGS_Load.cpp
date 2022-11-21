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
	Screen::gGame2DMgr->m_screenMgr->reset();

	if (Radar::mgr) {
		Radar::mgr->clear();
	}

	P2ASSERTLINE(33, arg != nullptr);

	LoadArg* a = static_cast<LoadArg*>(arg);
	_24        = a->_04;
	_29        = a->_01;
	_27        = a->_00;
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
				gs->m_currentFloor++;
			}
			gs->m_inCave = true;
			og::Screen::DispMemberFloor dispFloor;

			dispFloor._08      = gs->m_currentFloor + 1;
			dispFloor.m_caveID = gs->_190;
			Screen::gGame2DMgr->open_Floor(dispFloor);
			gameSystem->m_inCave = true;

		} else {
			int courseIdx = gs->m_currentCourseInfo->m_courseIndex;
			og::Screen::DispMemberCourseName dispCourseName;
			dispCourseName.m_courseIndex = courseIdx;

			Screen::gGame2DMgr->open_CourseName(dispCourseName);
			gs->m_inCave         = false;
			gameSystem->m_inCave = false;
		}

		GameStat::clear();
		_10 = 0;
		_15 = false;
		_14 = false;

	} else {
		if (_14 && !_15) {
			sys->dvdLoadUseCallBack(&gs->_1B8, gs->_224);
			_15 = true;
		}
		if (gs->_1B8.m_mode == 2) {
			gs->postSetupFloatMemory();
			if (gs->m_inCave) {
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
		gfx.m_perspGraph.setPort();
		particle2dMgr->draw(1, 0);
		Screen::gGame2DMgr->draw(gfx);
		gfx.m_perspGraph.setPort();
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
