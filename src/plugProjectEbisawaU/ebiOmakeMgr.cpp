#include "ebi/Omake.h"
#include "Game/Data.h"
#include "ebi/CardEReader.h"
#include "PSSystem/PSSystemIF.h"
#include "og/newScreen/ogUtil.h"

static void _Print(char* format, ...) { OSReport(format, __FILE__); }

namespace ebi {
namespace Omake {

/**
 * @note Address: 0x803EEBE8
 * @note Size: 0x1D0
 */
void FSMStateMachine::init(TMgr* mgr)
{
	create(StateCount);
	registerState(new FSMState(Standby, "Standby"));
	registerState(new FSMState_OmakeScreen);
	registerState(new FSMState_CardEScreen);
	registerState(new FSMState_SelectGame);
	registerState(new FSMState(Movie, "Movie状態"));
}

/**
 * @note Address: 0x803EEDB8
 * @note Size: 0x2C
 */
void FSMState::init(TMgr* mgr, Game::StateArg* arg) { do_init(mgr, arg); }

/**
 * @note Address: 0x803EEDE4
 * @note Size: 0x2C
 */
void FSMState::exec(TMgr* mgr) { do_exec(mgr); }

/**
 * @note Address: 0x803EEE10
 * @note Size: 0xDC
 */
void FSMState_OmakeScreen::do_init(TMgr* mgr, Game::StateArg*)
{
	if (!mgr->mStateMachine.mCurrentID) {

		Screen::ArgOpenOmake arg(sys->getPlayCommonData()->mChallengeFlags.isSet(1), sys->getPlayCommonData()->mChallengeFlags.isSet(2),
		                         sys->getPlayCommonData()->isPerfectChallenge());
		arg.mUnusedVal = -1;

		mgr->mOmake.openScreen(&arg);
	} else if (mgr->mOmake.mState2 == 1) {
		mgr->mOmake.openFromCardE_();
	} else {
		mgr->mOmake.openFromMovie_();
	}
}

/**
 * @note Address: 0x803EEEEC
 * @note Size: 0xA8
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

/**
 * @note Address: 0x803EEF94
 * @note Size: 0x34
 */
void FSMState_CardEScreen::do_init(TMgr* mgr, Game::StateArg* arg) { mgr->mOmakeCardE.openScreen(nullptr); }

/**
 * @note Address: 0x803EEFC8
 * @note Size: 0xA0
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

/**
 * @note Address: 0x803EF068
 * @note Size: 0x48
 */
void FSMState_SelectGame::do_init(TMgr* mgr, Game::StateArg*)
{
	mgr->mOmakeGame.openScreen(nullptr);
	mStatus = Idle;
}

/**
 * @note Address: 0x803EF0B0
 * @note Size: 0x378
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
			if (gCardEMgr->mEndStat == CardEReader::TMgr::Error_Success) {
				gCardEMgr->uploadToGBA(mgr->mOmakeGame.mSelection);
				mgr->mOmakeGame.openMsg(ebi::Screen::TOmakeGame::Transferring);
				u32 duration = 3.0f / sys->mDeltaTime;
				mTimer       = duration;
				mTimerMax    = duration;
				PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_DECIDE, 0);
				mStatus = Transferring;
			} else {
				PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
				mgr->mOmakeGame.openMsg(ebi::Screen::TOmakeGame::TransferUnable);
				u32 duration = 5.0f / sys->mDeltaTime;
				mTimer       = duration;
				mTimerMax    = duration;
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
			case CardEReader::TMgr::Error_Success:
				PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_OK, 0);
				mgr->mOmakeGame.openMsg(ebi::Screen::TOmakeGame::TransferFinished);
				u32 duration = 5.0f / sys->mDeltaTime;
				mTimer       = duration;
				mTimerMax    = duration;
				mStatus      = Finish;
				break;
			case CardEReader::TMgr::Error_UnableToTransfer:
				PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
				mgr->mOmakeGame.openMsg(ebi::Screen::TOmakeGame::TransferUnable);
				duration  = 5.0f / sys->mDeltaTime;
				mTimer    = duration;
				mTimerMax = duration;
				mStatus   = Error;
				break;
			case CardEReader::TMgr::Error_TransferFailed:
				PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_ERROR, 0);
				mgr->mOmakeGame.openMsg(ebi::Screen::TOmakeGame::TransferFailed);
				duration  = 5.0f / sys->mDeltaTime;
				mTimer    = duration;
				mTimerMax = duration;
				mStatus   = Error;
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
		if (mTimer > 2 && mgr->mController->getButtonDown() & Controller::PRESS_B) {
			PSSystem::spSysIF->playSystemSe(PSSE_SY_MENU_CANCEL, 0);
			mTimer    = 1;
			mTimerMax = 1;
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

/**
 * @note Address: 0x803EF428
 * @note Size: 0xB4
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

/**
 * @note Address: 0x803EF4DC
 * @note Size: 0xE8
 */
void TMgr::loadResource()
{
	sys->heapStatusStart("TOmakeMgr::loadResource", nullptr);

	char buf[PATH_MAX];
	og::newScreen::makeLanguageResName(buf, "omake.szs");
	JKRArchive* arc = JKRMountArchive(buf, JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
	P2ASSERTLINE(271, arc);

	mOmake.setArchive(arc);
	mOmakeCardE.setArchive(arc);
	mOmakeGame.setArchive(arc);

	sys->heapStatusEnd("TOmakeMgr::loadResource");
	gCardEMgr->loadResource();
}

/**
 * @note Address: 0x803EF5C4
 * @note Size: 0x50
 */
void TMgr::newCardEMgrAndTask()
{
	CardEReader::TMgr::globalInstance();
	gCardEMgr->init();
	JKRTask::create(64, 18, 0x4000, nullptr)->request(gCardEMgr_ThreadFunc, nullptr, nullptr);
}

/**
 * @note Address: 0x803EF614
 * @note Size: 0x3C
 */
void TMgr::start() { mStateMachine.transit(this, OmakeScreen, nullptr); }

/**
 * @note Address: 0x803EF650
 * @note Size: 0x3C
 */
void TMgr::goEnd_() { mStateMachine.transit(this, Standby, nullptr); }

/**
 * @note Address: N/A
 * @note Size: 0x84
 */
void TMgr::forceQuit()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x803EF68C
 * @note Size: 0x28
 */
bool TMgr::isFinish() { return u8(getStateID() == Standby); }

/**
 * @note Address: 0x803EF6B4
 * @note Size: 0xE0
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

/**
 * @note Address: 0x803EF794
 * @note Size: 0x80
 */
void TMgr::draw()
{
	if (getStateID() != Standby && getStateID() != Movie) {
		mOmake.draw();
		mOmakeCardE.draw();
		mOmakeGame.draw();
	}
}

/**
 * @note Address: 0x803EF814
 * @note Size: 0x2C
 */
bool TMgr::isMovieState() { return u8(getStateID() == Movie); }

/**
 * @note Address: 0x803EF840
 * @note Size: 0x54
 */
void TMgr::restartFromMovieState()
{
	if (getStateID() == Movie) {
		mStateMachine.transit(this, OmakeScreen, nullptr);
	}
}

/**
 * @note Address: 0x803EF894
 * @note Size: 0x8
 */
int TMgr::getMovieID() { return mOmake.mCurrSel; }

/**
 * @note Address: N/A
 * @note Size: 0x16C
 */
bool TMgr::isTouchAnyKey_()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x803EF89C
 * @note Size: 0x58
 */
int TMgr::getStateID()
{
	P2ASSERTLINE(460, mCurrentState);
	return mCurrentState->mId;
}

} // namespace Omake
} // namespace ebi
