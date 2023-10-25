#include "ebi/Omake.h"
#include "Game/Data.h"
#include "ebi/CardEReader.h"
#include "PSSystem/PSSystemIF.h"
#include "og/newScreen/ogUtil.h"

static void _Print(char* format, ...) { OSReport(format, __FILE__); }

namespace ebi {
namespace Omake {

/*
 * --INFO--
 * Address:	803EEBE8
 * Size:	0001D0
 */
void FSMStateMachine::init(TMgr* mgr)
{
	create(StateCount);
	registerState(new FSMState(Standby, "Standby"));
	registerState(new FSMState_OmakeScreen);
	registerState(new FSMState_CardEScreen);
	registerState(new FSMState_SelectGame);
	registerState(new FSMState(Movie, "Movieó‘Ô"));
}

/*
 * --INFO--
 * Address:	803EEDB8
 * Size:	00002C
 */
void FSMState::init(TMgr* mgr, Game::StateArg* arg) { do_init(mgr, arg); }

/*
 * --INFO--
 * Address:	803EEDE4
 * Size:	00002C
 */
void FSMState::exec(TMgr* mgr) { do_exec(mgr); }

/*
 * --INFO--
 * Address:	803EEE10
 * Size:	0000DC
 */
void FSMState_OmakeScreen::do_init(TMgr* mgr, Game::StateArg*)
{
	if (!mgr->mStateMachine.mCurrentID) {

		Screen::ArgOpenOmake arg(sys->getPlayCommonData()->mChallengeFlags.isSet(1), sys->getPlayCommonData()->mChallengeFlags.isSet(2),
		                         sys->getPlayCommonData()->isPerfectChallenge());
		arg._08 = -1;

		mgr->mOmake.openScreen(&arg);
	} else if (mgr->mOmake.mState2 == 1) {
		mgr->mOmake.openFromCardE_();
	} else {
		mgr->mOmake.openFromMovie_();
	}
}

/*
 * --INFO--
 * Address:	803EEEEC
 * Size:	0000A8
 */
void FSMState_OmakeScreen::do_exec(TMgr* mgr)
{
	if (mgr->mOmake.mState2 == 1) {
		transit(mgr, CardEScreen, nullptr);
	}
	if (mgr->mOmake.mState2 == 4) {
		transit(mgr, Movie, nullptr);
	}
	if (mgr->mOmake.isFinishScreen()) {
		mgr->goEnd_();
	}
}

/*
 * --INFO--
 * Address:	803EEF94
 * Size:	000034
 */
void FSMState_CardEScreen::do_init(TMgr* mgr, Game::StateArg* arg) { mgr->mOmakeCardE.openScreen(nullptr); }

/*
 * --INFO--
 * Address:	803EEFC8
 * Size:	0000A0
 */
void FSMState_CardEScreen::do_exec(TMgr* mgr)
{
	if (mgr->mOmakeCardE.isFinishScreen()) {
		if (mgr->mOmakeCardE.mExitState) {
			transit(mgr, OmakeScreen, nullptr);
		} else {
			transit(mgr, SelectGame, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	803EF068
 * Size:	000048
 */
void FSMState_SelectGame::do_init(TMgr* mgr, Game::StateArg*)
{
	mgr->mOmakeGame.openScreen(nullptr);
	mStatus = Idle;
}

/*
 * --INFO--
 * Address:	803EF0B0
 * Size:	000378
 */
void FSMState_SelectGame::do_exec(TMgr* mgr)
{
	switch (mStatus) {
	case Idle:
		if (mgr->mOmakeGame.isDelegateControl()) {
			gCardEMgr->probeAGB();
			mStatus = ProbeGBA;
		}
		if (mgr->mOmakeGame.isFinishScreen()) {
			mgr->mOmakeCardE.openScreen(nullptr);
			transit(mgr, CardEScreen, nullptr);
		}
		break;
	case ProbeGBA:
		if (gCardEMgr->isFinish()) {
			if (!gCardEMgr->mEndStat) {
				gCardEMgr->uploadToGBA(mgr->mOmakeGame.mSelection);
				mgr->mOmakeGame.openMsg(ebi::Screen::TOmakeGame::Transferring);
				u32 duration = 3.0f / sys->mDeltaTime;
				mTimer       = duration;
				_18          = duration;
				PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_DECIDE, 0);
				mStatus = Transferring;
			} else {
				PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
				mgr->mOmakeGame.openMsg(ebi::Screen::TOmakeGame::TransferUnable);
				u32 duration = 5.0f / sys->mDeltaTime;
				mTimer       = duration;
				_18          = duration;
				mStatus      = Error;
			}
		}
		break;
	case Transferring:
		if (mTimer)
			mTimer--;
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ACCESS, 0);
		if (gCardEMgr->isFinish() && !mTimer) {
			switch (gCardEMgr->mEndStat) {
			case 0:
				PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_OK, 0);
				mgr->mOmakeGame.openMsg(ebi::Screen::TOmakeGame::TransferFinished);
				u32 duration = 5.0f / sys->mDeltaTime;
				mTimer       = duration;
				_18          = duration;
				mStatus      = Finish;
				break;
			case 1:
				PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
				mgr->mOmakeGame.openMsg(ebi::Screen::TOmakeGame::TransferUnable);
				duration = 5.0f / sys->mDeltaTime;
				mTimer   = duration;
				_18      = duration;
				mStatus  = Error;
				break;
			case 2:
				PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
				mgr->mOmakeGame.openMsg(ebi::Screen::TOmakeGame::TransferFailed);
				duration = 5.0f / sys->mDeltaTime;
				mTimer   = duration;
				_18      = duration;
				mStatus  = Error;
				break;
			}
		}
		break;
	case Error:
		if (mTimer)
			mTimer--;
		if (!mTimer) {
			mgr->mOmakeGame.openMsg(ebi::Screen::TOmakeGame::GameDesc);
			mgr->mOmakeGame.setSelfControl();
			mStatus = Idle;
		}
		if (mTimer > 2 && mgr->mController->mButton.mButtonDown & Controller::PRESS_B) {
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CANCEL, 0);
			mTimer = 1;
			_18    = 1;
		}
		break;
	case Finish:
		if (mTimer)
			mTimer--;
		if (!mTimer) {
			mgr->mOmakeGame.openMsg(ebi::Screen::TOmakeGame::GameDesc);
			mgr->mOmakeGame.setSelfControl();
			mStatus = Idle;
		}
	}
}

/*
 * --INFO--
 * Address:	803EF428
 * Size:	0000B4
 */
TMgr::TMgr()
    : mController(nullptr)
    , mIsFinished(0)
    , _894(0)
    , _898(0)
{
	mStateMachine.init(this);
	mStateMachine.start(this, Standby, nullptr);
}

/*
 * --INFO--
 * Address:	803EF4DC
 * Size:	0000E8
 */
void TMgr::loadResource()
{
	sys->heapStatusStart("TOmakeMgr::loadResource", nullptr);

	char buf[256];
	og::newScreen::makeLanguageResName(buf, "omake.szs");
	JKRArchive* arc = JKRArchive::mount(buf, JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
	P2ASSERTLINE(271, arc);

	mOmake.setArchive(arc);
	mOmakeCardE.setArchive(arc);
	mOmakeGame.setArchive(arc);

	sys->heapStatusEnd("TOmakeMgr::loadResource");
	gCardEMgr->loadResource();
}

/*
 * --INFO--
 * Address:	803EF5C4
 * Size:	000050
 */
void TMgr::newCardEMgrAndTask()
{
	CardEReader::TMgr::globalInstance();
	gCardEMgr->init();
	JKRTask::create(64, 18, 0x4000, nullptr)->request(gCardEMgr_ThreadFunc, nullptr, nullptr);
}

/*
 * --INFO--
 * Address:	803EF614
 * Size:	00003C
 */
void TMgr::start() { mStateMachine.transit(this, OmakeScreen, nullptr); }

/*
 * --INFO--
 * Address:	803EF650
 * Size:	00003C
 */
void TMgr::goEnd_() { mStateMachine.transit(this, Standby, nullptr); }

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void TMgr::forceQuit()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803EF68C
 * Size:	000028
 */
bool TMgr::isFinish() { return u8(getStateID() == Standby); }

/*
 * --INFO--
 * Address:	803EF6B4
 * Size:	0000E0
 */
void TMgr::update()
{
	mIsFinished = false;
	u8 close    = mOmake.isCloseScreen();
	mStateMachine.exec(this);
	if (getStateID() != Standby) {
		if (getStateID() != Movie) {
			mOmake.update();
			mOmakeCardE.update();
			mOmakeGame.update();
			gCardEMgr->update();
			if (!close && mOmake.isCloseScreen()) {
				mIsFinished = true;
			}
		}
	}
}

/*
 * --INFO--
 * Address:	803EF794
 * Size:	000080
 */
void TMgr::draw()
{
	if (getStateID() != Standby && getStateID() != Movie) {
		mOmake.draw();
		mOmakeCardE.draw();
		mOmakeGame.draw();
	}
}

/*
 * --INFO--
 * Address:	803EF814
 * Size:	00002C
 */
bool TMgr::isMovieState() { return u8(getStateID() == Movie); }

/*
 * --INFO--
 * Address:	803EF840
 * Size:	000054
 */
void TMgr::restartFromMovieState()
{
	if (getStateID() == Movie) {
		mStateMachine.transit(this, OmakeScreen, nullptr);
	}
}

/*
 * --INFO--
 * Address:	803EF894
 * Size:	000008
 */
int TMgr::getMovieID() { return mOmake.mCurrSel; }

/*
 * --INFO--
 * Address:	........
 * Size:	00016C
 */
bool TMgr::isTouchAnyKey_()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803EF89C
 * Size:	000058
 */
int TMgr::getStateID()
{
	P2ASSERTLINE(460, mCurrentState);
	return mCurrentState->mId;
}

} // namespace Omake
} // namespace ebi
