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

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char* name, ...) { OSReport("ebiOptionMgr"); }

namespace ebi {
namespace Option {
/*
 * --INFO--
 * Address:	803CE8F8
 * Size:	0002D8
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

/*
 * --INFO--
 * Address:	803CEBD0
 * Size:	00002C
 */
void FSMState::init(TMgr* obj, Game::StateArg* arg) { do_init(obj, arg); }

/*
 * --INFO--
 * Address:	803CEBFC
 * Size:	000004
 */
void FSMState::do_init(TMgr*, Game::StateArg* arg) { }

/*
 * --INFO--
 * Address:	803CEC00
 * Size:	00002C
 */
void FSMState::exec(TMgr* obj) { do_exec(obj); }

/*
 * --INFO--
 * Address:	803CEC2C
 * Size:	000004
 */
void FSMState::do_exec(TMgr*) { }

/*
 * --INFO--
 * Address:	803CEC30
 * Size:	000050
 */
void FSMState_ScreenOpen::do_init(TMgr* obj, Game::StateArg* arg)
{
	obj->mOptionScreen.mOptionParamA.loadRam();
	obj->mOptionScreen.mOptionParamB.loadRam();
	obj->mOptionScreen.openScreen(nullptr);
}

/*
 * --INFO--
 * Address:	803CEC80
 * Size:	000064
 */
void FSMState_ScreenOpen::do_exec(TMgr* obj)
{
	if (obj->mOptionScreen.isWaitScreen()) {
		transit(obj, ScreenWait, nullptr);
	}
}

/*
 * --INFO--
 * Address:	803CED14
 * Size:	00000C
 */
void FSMState_ScreenWait::do_init(TMgr* obj, Game::StateArg* arg) { obj->mOptionScreen.mEnabled = 1; }

/*
 * --INFO--
 * Address:	803CED20
 * Size:	000144
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

/*
 * --INFO--
 * Address:	803CEE64
 * Size:	00003C
 */
void FSMState_ScreenClose::do_init(TMgr* obj, Game::StateArg* arg)
{
	obj->mIsFinished = true;
	obj->mOptionScreen.closeScreen(nullptr);
}

/*
 * --INFO--
 * Address:	803CEEA0
 * Size:	00004C
 */
void FSMState_ScreenClose::do_exec(TMgr* obj)
{
	if (obj->mOptionScreen.isFinishScreen()) {
		obj->goEnd_();
	}
}

/*
 * --INFO--
 * Address:	803CEEEC
 * Size:	000044
 */
void FSMState_WaitCloseForNoCard::do_init(TMgr* obj, Game::StateArg* arg)
{
	u32 v1 = 1.0f / sys->mDeltaTime;
	_10    = v1;
	_14    = v1;
}

/*
 * --INFO--
 * Address:	803CEF30
 * Size:	000084
 */
void FSMState_WaitCloseForNoCard::do_exec(TMgr* obj)
{
	if (_10) {
		_10--;
	}
	if (_10 == 0) {
		PSSystem::spSysIF->playSystemSe(PSSE_SY_MEMORYCARD_OK, 0);
		transit(obj, ScreenClose, nullptr);
	}
}

/*
 * --INFO--
 * Address:	803CEFB4
 * Size:	0000B8
 */
void FSMState_WorldMapInfoWindow::do_init(TMgr* obj, Game::StateArg* arg)
{
	::Screen::gGame2DMgr->mScreenMgr->reset();
	og::Screen::DispMemberWorldMapInfoWin0 disp;
	disp.mMsgIDNo        = '6017_00';
	disp.mStartSelection = 1;
	::Screen::gGame2DMgr->open_WorldMapInfoWin0(disp);
}

/*
 * --INFO--
 * Address:	803CF06C
 * Size:	0000A0
 */
void FSMState_WorldMapInfoWindow::do_exec(TMgr* obj)
{
	switch (::Screen::gGame2DMgr->check_WorldMapInfoWin0()) {
	case 0:
		transit(obj, ScreenWait, nullptr);
		break;
	case 1:
		obj->mOptionScreen.mOptionParamB.saveRam();
		transit(obj, ScreenClose, nullptr);
		break;
	}
}

/*
 * --INFO--
 * Address:	803CF10C
 * Size:	00000C
 */
void FSMState_LoadOption::do_init(TMgr* obj, Game::StateArg* arg) { mStatus = 0; }

/*
 * --INFO--
 * Address:	803CF118
 * Size:	0001A0
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

/*
 * --INFO--
 * Address:	803CF2B8
 * Size:	00002C
 */
void FSMState_SaveMgr::do_init(TMgr* obj, Game::StateArg* arg)
{
	obj->mOptionScreen.mEnabled = 0;
	obj->mSaveMgr->start();
}

/*
 * --INFO--
 * Address:	803CF2E4
 * Size:	000100
 */
void FSMState_SaveMgr::do_exec(TMgr* obj)
{
	if (obj->mSaveMgr->isFinish()) {
		switch (obj->mSaveMgr->mCurrStateID) {
		case 0:
			transit(obj, ScreenClose, nullptr);
			break;
		case 1:
			transit(obj, ScreenWait, nullptr);
			break;
		case 2:
			transit(obj, ScreenClose, nullptr);
			break;
		case 4:
			transit(obj, ScreenWait, nullptr);
			break;
		}
	}
}

/*
 * --INFO--
 * Address:	803CF3E4
 * Size:	0000C0
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
	mSaveMgr->_47A             = 0;
}

/*
 * --INFO--
 * Address:	803D00C0
 * Size:	000088
 */
void TMgr::loadResource()
{
	sys->heapStatusStart("Option::TMgr::loadResource", nullptr);
	mOptionScreen.loadResource();
	sys->heapStatusEnd("Option::TMgr::loadResource");

	mSaveMgr->doLoadMenuResource();
}

/*
 * --INFO--
 * Address:	803D0148
 * Size:	00004C
 */
void TMgr::setController(Controller* controller)
{
	mController = controller;
	mOptionScreen.setController(controller);
	mSaveMgr->setControllers(controller);
}

/*
 * --INFO--
 * Address:	803D0194
 * Size:	00003C
 */
void TMgr::start() { mStateMachine.transit(this, LoadOption, nullptr); }

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void TMgr::forceQuit()
{
	// UNUSED FUNCTION
	mOptionScreen.killScreen();
	mSaveMgr->forceQuit();
	::Screen::gGame2DMgr->mScreenMgr->reset();
}

/*
 * --INFO--
 * Address:	803D01D0
 * Size:	000028
 */
bool TMgr::isFinish() { return u8(getStateID() == 0); }

/*
 * --INFO--
 * Address:	803D01F8
 * Size:	00007C
 */
void TMgr::goEnd_()
{
	mStateMachine.transit(this, Standby, nullptr);
	forceQuit();
}

/*
 * --INFO--
 * Address:	803D0274
 * Size:	000094
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

/*
 * --INFO--
 * Address:	803D0308
 * Size:	000090
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

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void TMgr::showInfo()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803D0398
 * Size:	000058
 */
int TMgr::getStateID()
{
	P2ASSERTLINE(430, mCurrentState);
	return mCurrentState->mId;
}

} // namespace Option
} // namespace ebi
