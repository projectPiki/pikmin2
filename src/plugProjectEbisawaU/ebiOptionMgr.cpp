#include "PowerPC_EABI_Support/Runtime/runtime.h"
#include "ebi/Option.h"
#include "ebi/Save.h"
#include "ebi/E2DCallBack.h"
#include "Graphics.h"
#include "P2Macros.h"
#include "PSSystem/PSSystemIF.h"
#include "Screen/Game2DMgr.h"
#include "SoundID.h"
#include "System.h"

/**
 * @note Address: N/A
 * @note Size: 0xE4
 */
static void _Print(char* name, ...) { OSReport("ebiOptionMgr"); }

namespace ebi {
namespace Option {
/**
 * @note Address: 0x803CE8F8
 * @note Size: 0x2D8
 */
void FSMStateMachine::init(TMgr*)
{
	create(StateNum);
	registerState(new FSMState(Standby, "Standby"));
	registerState(new FSMState_LoadOption(LoadOption, "LoadOption"));
	registerState(new FSMState_ScreenOpen(ScreenOpen, "ScreenOpen"));
	registerState(new FSMState_ScreenWait(ScreenWait, "ScreenWait"));
	registerState(new FSMState_ScreenClose(ScreenClose, "ScreenClose"));
	registerState(new FSMState_SaveMgr(SaveMgr, "SaveMgr"));
	registerState(new FSMState_WaitCloseForNoCard(WaitCloseForNoCard, "WaitCloseForNoCard"));
	registerState(new FSMState_WorldMapInfoWindow(WorldMapInfoWindow, "WorldMapInfoWindow"));
}

/**
 * @note Address: 0x803CEBD0
 * @note Size: 0x2C
 */
void FSMState::init(TMgr* obj, Game::StateArg* arg) { do_init(obj, arg); }

/**
 * @note Address: 0x803CEBFC
 * @note Size: 0x4
 */
void FSMState::do_init(TMgr*, Game::StateArg* arg) { }

/**
 * @note Address: 0x803CEC00
 * @note Size: 0x2C
 */
void FSMState::exec(TMgr* obj) { do_exec(obj); }

/**
 * @note Address: 0x803CEC2C
 * @note Size: 0x4
 */
void FSMState::do_exec(TMgr*) { }

/**
 * @note Address: 0x803CEC30
 * @note Size: 0x50
 */
void FSMState_ScreenOpen::do_init(TMgr* obj, Game::StateArg* arg)
{
	obj->mOptionScreen.mOptionParamA.loadRam();
	obj->mOptionScreen.mOptionParamB.loadRam();
	obj->mOptionScreen.openScreen(nullptr);
}

/**
 * @note Address: 0x803CEC80
 * @note Size: 0x64
 */
void FSMState_ScreenOpen::do_exec(TMgr* obj)
{
	if (obj->mOptionScreen.isWaitScreen()) {
		transit(obj, ScreenWait, nullptr);
	}
}

/**
 * @note Address: 0x803CED14
 * @note Size: 0xC
 */
void FSMState_ScreenWait::do_init(TMgr* obj, Game::StateArg* arg) { obj->mOptionScreen.mEnabled = 1; }

/**
 * @note Address: 0x803CED20
 * @note Size: 0x144
 */
void FSMState_ScreenWait::do_exec(TMgr* mgr)
{
	switch (mgr->mOptionScreen.mExitStatus) {
	case Screen::TOption::OptionState_Unk1:
	case Screen::TOption::OptionState_SelRumble:
	case Screen::TOption::OptionState_SelSoundMode:
	case Screen::TOption::OptionState_SelBgmVol:
	case Screen::TOption::OptionState_SelSfxVol:
	case Screen::TOption::OptionState_SelDeflicker:
	case Screen::TOption::OptionState_Unk8:
		mgr->mOptionScreen.mOptionParamA.saveRam();
		break;
	case Screen::TOption::OptionState_SelSaveGame:
		mgr->mOptionScreen.mOptionParamA.saveRam();
		mgr->mOptionScreen.mEnabled = false;
		if (isSaveError()) {
			transit(mgr, WaitCloseForNoCard, 0);
			return;
		}
		transit(mgr, SaveMgr, 0);
		return;
	case Screen::TOption::OptionState_Exit:
		mgr->mOptionScreen.mEnabled = false;
		transit(mgr, WorldMapInfoWindow, 0);
		break;
	}
}

/**
 * @note Address: 0x803CEE64
 * @note Size: 0x3C
 */
void FSMState_ScreenClose::do_init(TMgr* obj, Game::StateArg* arg)
{
	obj->mIsFinished = true;
	obj->mOptionScreen.closeScreen(nullptr);
}

/**
 * @note Address: 0x803CEEA0
 * @note Size: 0x4C
 */
void FSMState_ScreenClose::do_exec(TMgr* obj)
{
	if (obj->mOptionScreen.isFinishScreen()) {
		obj->goEnd_();
	}
}

/**
 * @note Address: 0x803CEEEC
 * @note Size: 0x44
 */
void FSMState_WaitCloseForNoCard::do_init(TMgr* obj, Game::StateArg* arg)
{
	u32 inverseDeltaTime = 1.0f / sys->mDeltaTime;
	mWaitTimer           = inverseDeltaTime;
	mWaitTimerMax        = inverseDeltaTime;
}

/**
 * @note Address: 0x803CEF30
 * @note Size: 0x84
 */
void FSMState_WaitCloseForNoCard::do_exec(TMgr* obj)
{
	if (mWaitTimer) {
		mWaitTimer--;
	}
	if (mWaitTimer == 0) {
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_OK, 0);
		transit(obj, ScreenClose, nullptr);
	}
}

/**
 * @note Address: 0x803CEFB4
 * @note Size: 0xB8
 */
void FSMState_WorldMapInfoWindow::do_init(TMgr* obj, Game::StateArg* arg)
{
	::Screen::gGame2DMgr->mScreenMgr->reset();
	og::Screen::DispMemberWorldMapInfoWin0 disp;
	disp.mMsgIDNo        = '6017_00';
	disp.mStartSelection = 1;
	::Screen::gGame2DMgr->open_WorldMapInfoWin0(disp);
}

/**
 * @note Address: 0x803CF06C
 * @note Size: 0xA0
 */
void FSMState_WorldMapInfoWindow::do_exec(TMgr* obj)
{
	switch (::Screen::gGame2DMgr->check_WorldMapInfoWin0()) {
	case ::Screen::Game2DMgr::CHECK2D_WorldMapInfoWin0_Cancel:
		transit(obj, ScreenWait, nullptr);
		break;
	case ::Screen::Game2DMgr::CHECK2D_WorldMapInfoWin0_Confirm:
		obj->mOptionScreen.mOptionParamB.saveRam();
		transit(obj, ScreenClose, nullptr);
		break;
	}
}

/**
 * @note Address: 0x803CF10C
 * @note Size: 0xC
 */
void FSMState_LoadOption::do_init(TMgr* obj, Game::StateArg* arg) { mStatus = 0; }

/**
 * @note Address: 0x803CF118
 * @note Size: 0x1A0
 */
void FSMState_LoadOption::do_exec(TMgr* mgr)
{
	switch (mStatus) {
	case 0:
		if (isSaveError()) {
			transit(mgr, ScreenOpen, 0);
		} else {
			if (sys->mCardMgr->isCardInvalid()) {
				bool check = sys->mCardMgr->loadGameOption();
				if (check) {
					mStatus = 1;
				} else {
					JUT_PANICLINE(239, "fail to memory card Request even if finish task\n");
				}
			}
		}
		break;
	case 1:
		if (sys->mCardMgr->isCardInvalid()) {
			sys->mCardMgr->getCardStatus();
			transit(mgr, ScreenOpen, 0);
		}
		break;
	}
}

/**
 * @note Address: 0x803CF2B8
 * @note Size: 0x2C
 */
void FSMState_SaveMgr::do_init(TMgr* obj, Game::StateArg* arg)
{
	obj->mOptionScreen.mEnabled = 0;
	obj->mSaveMgr->start();
}

/**
 * @note Address: 0x803CF2E4
 * @note Size: 0x100
 */
void FSMState_SaveMgr::do_exec(TMgr* obj)
{
	if (obj->mSaveMgr->isFinish()) {
		switch (obj->mSaveMgr->mEndState) {
		case Save::TMgr::End_SaveDone:
			transit(obj, ScreenClose, nullptr);
			break;
		case Save::TMgr::End_Cancel:
			transit(obj, ScreenWait, nullptr);
			break;
		case Save::TMgr::End_SelectNoSave:
			transit(obj, ScreenClose, nullptr);
			break;
		case Save::TMgr::End_Error:
			transit(obj, ScreenWait, nullptr);
			break;
		}
	}
}

/**
 * @note Address: 0x803CF3E4
 * @note Size: 0xC0
 */
TMgr::TMgr()
    : mOptionScreen()
    , mIsFinished(false)
    , mStateMachine()
{
	mStateMachine.init(this);
	mStateMachine.start(this, Standby, nullptr);
	mSaveMgr                   = Save::TMgr::createInstance();
	mSaveMgr->mIsStoryGameSave = true;
	mSaveMgr->mSaveType        = 1;
	mSaveMgr->mIsAutosaveOn    = true;
	mSaveMgr->mDoRetryOnError  = 0;
}

/**
 * @note Address: 0x803D00C0
 * @note Size: 0x88
 */
void TMgr::loadResource()
{
	sys->heapStatusStart("Option::TMgr::loadResource", nullptr);
	mOptionScreen.loadResource();
	sys->heapStatusEnd("Option::TMgr::loadResource");

	mSaveMgr->doLoadMenuResource();
}

/**
 * @note Address: 0x803D0148
 * @note Size: 0x4C
 */
void TMgr::setController(Controller* controller)
{
	mController = controller;
	mOptionScreen.setController(controller);
	mSaveMgr->setControllers(controller);
}

/**
 * @note Address: 0x803D0194
 * @note Size: 0x3C
 */
void TMgr::start() { mStateMachine.transit(this, LoadOption, nullptr); }

/**
 * @note Address: N/A
 * @note Size: 0x64
 */
void TMgr::forceQuit()
{
	// UNUSED FUNCTION
	mOptionScreen.killScreen();
	mSaveMgr->forceQuit();
	::Screen::gGame2DMgr->mScreenMgr->reset();
}

/**
 * @note Address: 0x803D01D0
 * @note Size: 0x28
 */
bool TMgr::isFinish() { return u8(getStateID() == 0); }

/**
 * @note Address: 0x803D01F8
 * @note Size: 0x7C
 */
void TMgr::goEnd_()
{
	mStateMachine.transit(this, Standby, nullptr);
	forceQuit();
}

/**
 * @note Address: 0x803D0274
 * @note Size: 0x94
 */
void TMgr::update()
{
	mIsFinished = false;
	mStateMachine.exec(this);
	if (getStateID()) {
		sys->mCardMgr->update();
		mOptionScreen.update();
		mSaveMgr->update();
	}
	::Screen::gGame2DMgr->update();
}

/**
 * @note Address: 0x803D0308
 * @note Size: 0x90
 */
void TMgr::draw()
{
	if (getStateID()) {
		sys->mGfx->mPerspGraph.setPort();
		mOptionScreen.draw();
		sys->mGfx->mPerspGraph.setPort();
		mSaveMgr->draw();
	}
	::Screen::gGame2DMgr->draw(*sys->mGfx);
}

/**
 * @note Address: N/A
 * @note Size: 0x24
 */
void TMgr::showInfo()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x803D0398
 * @note Size: 0x58
 */
int TMgr::getStateID()
{
	P2ASSERTLINE(430, mCurrentState);
	return mCurrentState->mId;
}

} // namespace Option
} // namespace ebi
