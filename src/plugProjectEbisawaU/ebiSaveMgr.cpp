#include "ebi/Save.h"
#include "Controller.h"

static const char name[] = "ebiSaveMgr";

namespace ebi {

namespace Save {

TMgr* TMgr::msInstance;

/*
 * --INFO--
 * Address:	803DB190
 * Size:	00034C
 */
void FSMStateMachine::init(TMgr*)
{
	create(StateCount);
	registerState(new FSMState(Standby, "Standby"));
	registerState(new FSMState_DoYouSave);
	registerState(new FSMState_DoYouContinue);
	registerState(new FSMState_MountCheck);
	registerState(new FSMState_GetPlayerHeader);
	registerState(new FSMState_CheckBeforeSave);
	registerState(new FSMState_NowSave);
	registerState(new FSMState_AfterSave);
	registerState(new FSMState_CardError);
}

/*
 * --INFO--
 * Address:	803DB4DC
 * Size:	00002C
 */
void FSMState::init(TMgr* mgr, Game::StateArg* arg) { do_init(mgr, arg); }

/*
 * --INFO--
 * Address:	803DB50C
 * Size:	00002C
 */
void FSMState::exec(TMgr* mgr) { do_exec(mgr); }

/*
 * --INFO--
 * Address:	803DB53C
 * Size:	00004C
 */
void FSMState_DoYouSave::do_init(TMgr* mgr, Game::StateArg*)
{
	mgr->mSaveMenu.openScreen(nullptr);
	mgr->mSaveMenu.openMsg(Screen::TSaveMenu::MESSAGE_SaveOption);
}

/*
 * --INFO--
 * Address:	803DB588
 * Size:	000144
 */
void FSMState_DoYouSave::do_exec(TMgr* mgr)
{
	if (!mgr->mSaveMenu.isFinishMsg()) {
		return;
	}

	switch (mgr->mSaveMenu.mSelectState) {
	case 0:
		transit(mgr, MountCheck, nullptr);
		break;
	case 1:
		if (mgr->mSaveType) {
			mgr->mSaveMenu.closeScreen(nullptr);
			if (mgr->mSaveMenu.isFinishScreen()) {
				mgr->goEnd_(TMgr::End_2);
			}
		} else {
			transit(mgr, DoYouContinue, nullptr);
		}
		break;
	case 2:
		mgr->mSaveMenu.closeScreen(nullptr);
		if (mgr->mSaveMenu.isFinishScreen()) {
			mgr->goEnd_(TMgr::End_1);
		}
		break;
	}
}

/*
 * --INFO--
 * Address:	803DB6FC
 * Size:	000028
 */
void FSMState_DoYouContinue::do_init(TMgr* mgr, Game::StateArg*) { mgr->mSaveMenu.openMsg(Screen::TSaveMenu::MESSAGE_NoSaveOption); }

/*
 * --INFO--
 * Address:	803DB724
 * Size:	000114
 */
void FSMState_DoYouContinue::do_exec(TMgr* mgr)
{
	if (!mgr->mSaveMenu.isFinishMsg()) {
		return;
	}

	switch (mgr->mSaveMenu.mSelectState) {
	case 0:
		mgr->mSaveMenu.closeScreen(nullptr);
		if (mgr->mSaveMenu.isFinishScreen()) {
			mgr->goEnd_(TMgr::End_2);
		}
		break;
	case 1:
		mgr->mSaveMenu.closeScreen(nullptr);
		if (mgr->mSaveMenu.isFinishScreen()) {
			mgr->goEnd_(TMgr::End_3);
		}
		break;
	case 2:
		transit(mgr, DoYouSave, nullptr);
		break;
	}
}

/*
 * --INFO--
 * Address:	803DB838
 * Size:	00000C
 */
void FSMState_CardRequest::do_init(TMgr*, Game::StateArg*) { mState = 0; }

/*
 * --INFO--
 * Address:	803DB844
 * Size:	000264
 */
void FSMState_CardRequest::do_exec(TMgr* mgr)
{
	switch (mState) {
	case 0:
		bool check = false;
		if (!sys->mCardMgr->mIsCard && sys->mCardMgr->checkStatus() != MemoryCardMgr::INSIDESTATUS_Unk11) {
			check = true;
		}
		if (check) {
			P2ASSERTLINE(159, do_cardRequest(mgr));
			mState = 1;
		}
		break;
	case 1:
		check = false;
		if (!sys->mCardMgr->mIsCard && sys->mCardMgr->checkStatus() != MemoryCardMgr::INSIDESTATUS_Unk11) {
			check = true;
		}
		if (check) {
			mCardStatus = sys->mCardMgr->getCardStatus();
			sys->mCardMgr->getCardStatus();
			mState = 2;
		}
		break;
	case 2: {
		switch (mCardStatus) {
		case 2:
			do_transitCardReady(mgr);
			break;
		case 0:
			do_transitCardNoCard(mgr);
			break;
		case 5:
			do_transitCardIOError(mgr);
			break;
		case 6:
			do_transitCardWrongDevice(mgr);
			break;
		case 7:
			do_transitCardWrongSector(mgr);
			break;
		case 3:
			do_transitCardBroken(mgr);
			break;
		case 4:
			do_transitCardEncoding(mgr);
			break;
		case 8:
			do_transitCardNoFileSpace(mgr);
			break;
		case 9:
			do_transitCardNoFileEntry(mgr);
			break;
		case 1:
			do_transitCardFileOpenError(mgr);
			break;
		case 14:
			do_transitCardSerialNoError(mgr);
			break;
		case 13:
			do_transitCardPlayerDataBroken(mgr);
			break;
		default:
			JUT_PANICLINE(227, "P2Assert");
		}
	} break;
	}
}

/*
 * --INFO--
 * Address:	803DBAA8
 * Size:	00003C
 */
void FSMState_CardRequest::do_transitCardNoCard(TMgr* mgr)
{
	CardErrorArg arg(CardError::TMgr::Start_NoCard2);

	transit(mgr, CardError, &arg);
}

/*
 * --INFO--
 * Address:	803DBAE4
 * Size:	00003C
 */
void FSMState_CardRequest::do_transitCardIOError(TMgr* mgr)
{
	CardErrorArg arg(CardError::TMgr::Start_IOError2);

	transit(mgr, CardError, &arg);
}

/*
 * --INFO--
 * Address:	803DBB20
 * Size:	00003C
 */
void FSMState_CardRequest::do_transitCardWrongDevice(TMgr* mgr)
{
	CardErrorArg arg(CardError::TMgr::Start_WrongDevice2);

	transit(mgr, CardError, &arg);
}

/*
 * --INFO--
 * Address:	803DBB5C
 * Size:	00003C
 */
void FSMState_CardRequest::do_transitCardWrongSector(TMgr* mgr)
{
	CardErrorArg arg(CardError::TMgr::Start_WrongSector2);

	transit(mgr, CardError, &arg);
}

/*
 * --INFO--
 * Address:	803DBB98
 * Size:	00003C
 */
void FSMState_CardRequest::do_transitCardBroken(TMgr* mgr)
{
	CardErrorArg arg(CardError::TMgr::Start_DataBrokenAndDoYouFormat2);

	transit(mgr, CardError, &arg);
}

/*
 * --INFO--
 * Address:	803DBBD4
 * Size:	00003C
 */
void FSMState_CardRequest::do_transitCardEncoding(TMgr* mgr)
{
	CardErrorArg arg(CardError::TMgr::Start_DataBrokenAndDoYouFormat2);

	transit(mgr, CardError, &arg);
}

/*
 * --INFO--
 * Address:	803DBC10
 * Size:	00003C
 */
void FSMState_CardRequest::do_transitCardNoFileSpace(TMgr* mgr)
{
	CardErrorArg arg(CardError::TMgr::Start_OverCapacity2);

	transit(mgr, CardError, &arg);
}

/*
 * --INFO--
 * Address:	803DBC4C
 * Size:	00003C
 */
void FSMState_CardRequest::do_transitCardNoFileEntry(TMgr* mgr)
{
	CardErrorArg arg(CardError::TMgr::Start_OverCapacity2);

	transit(mgr, CardError, &arg);
}

/*
 * --INFO--
 * Address:	803DBC88
 * Size:	00003C
 */
void FSMState_CardRequest::do_transitCardFileOpenError(TMgr* mgr)
{
	CardErrorArg arg(CardError::TMgr::Start_DoYouCreateNewFile2);

	transit(mgr, CardError, &arg);
}

/*
 * --INFO--
 * Address:	803DBCC4
 * Size:	00003C
 */
void FSMState_CardRequest::do_transitCardSerialNoError(TMgr* mgr)
{
	CardErrorArg arg(CardError::TMgr::Start_SerialNoError);

	transit(mgr, CardError, &arg);
}

/*
 * --INFO--
 * Address:	803DBD00
 * Size:	00002C
 */
void FSMState_CardRequest::do_transitCardPlayerDataBroken(TMgr* mgr) { do_transitCardReady(mgr); }

/*
 * --INFO--
 * Address:	803DBD2C
 * Size:	000028
 */
bool FSMState_MountCheck::do_cardRequest(TMgr*) { return sys->mCardMgr->resetError(); }

/*
 * --INFO--
 * Address:	803DBD54
 * Size:	000034
 */
void FSMState_MountCheck::do_transitCardReady(TMgr* mgr) { transit(mgr, GetPlayerHeader, nullptr); }

/*
 * --INFO--
 * Address:	803DBD88
 * Size:	00002C
 */
bool FSMState_GetPlayerHeader::do_cardRequest(TMgr* mgr) { return sys->mCardMgr->getPlayerHeader(&mgr->mPlayerFileInfo); }

/*
 * --INFO--
 * Address:	803DBDB4
 * Size:	0000F8
 */
void FSMState_GetPlayerHeader::do_transitCardReady(TMgr* mgr)
{
	if ((mgr->mPlayerFileInfo.isNewFile(0) || mgr->mPlayerFileInfo.isBrokenFile(0))
	    && (mgr->mPlayerFileInfo.isNewFile(1) || mgr->mPlayerFileInfo.isBrokenFile(1))
	    && (mgr->mPlayerFileInfo.isNewFile(2) || mgr->mPlayerFileInfo.isBrokenFile(2))) {
		NowSaveArg arg(true);
		transit(mgr, NowSave, &arg);
	} else {
		transit(mgr, CheckBeforeSave, nullptr);
	}
}

/*
 * --INFO--
 * Address:	803DBEAC
 * Size:	000038
 */
void FSMState_GetPlayerHeader::do_transitCardSerialNoError(TMgr* mgr) { JUT_PANICLINE(349, "P2Assert"); }

/*
 * --INFO--
 * Address:	803DBEE4
 * Size:	000028
 */
bool FSMState_CheckBeforeSave::do_cardRequest(TMgr*) { return sys->mCardMgr->checkBeforeSave(); }

/*
 * --INFO--
 * Address:	803DBF0C
 * Size:	00003C
 */
void FSMState_CheckBeforeSave::do_transitCardReady(TMgr* mgr)
{
	NowSaveArg arg(false);
	transit(mgr, NowSave, &arg);
}

/*
 * --INFO--
 * Address:	803DBF48
 * Size:	0000D0
 */
void FSMState_NowSave::do_init(TMgr* mgr, Game::StateArg* arg)
{
	P2ASSERTLINE(381, arg);
	NowSaveArg* sarg = static_cast<NowSaveArg*>(arg);
	mIsErrorState    = sarg->mMesgType;

	mgr->mSaveMenu.openScreen(nullptr);
	if (mgr->mIsStoryGameSave == TRUE) {
		mState = 2;
	} else {
		mState = 0;
	}

	mgr->mSaveMenu.openMsg(Screen::TSaveMenu::MESSAGE_Saving);

	u32 count     = 1.0f / sys->mDeltaTime;
	mgr->mCounter = count;
	mgr->_3CC     = count;

	mgr->mMemCardErrorMgr.forceQuitSeq();
}

/*
 * --INFO--
 * Address:	803DC018
 * Size:	000424
 */
void FSMState_NowSave::do_exec(TMgr* mgr)
{
	if (isSaveError()) {
		CardErrorArg arg(CardError::TMgr::Start_FailToSave_NoCard);

		transit(mgr, CardError, &arg);
		return;
	}

	switch (mState) {
	case 0:
		if (sys->mCardMgr->isSaveInvalid()) {
			bool valid;
			if (mIsErrorState) {
				valid = sys->mCardMgr->savePlayerNoCheckSerialNumber(-1);
			} else {
				valid = sys->mCardMgr->savePlayer(-1);
			}
			P2ASSERTLINE(428, valid);
			mState = 1;
		}
		break;
	case 1:
		if (sys->mCardMgr->isSaveInvalid()) {
			mCardStatus = sys->mCardMgr->getCardStatus();
			sys->mCardMgr->getCardStatus();
			switch (mCardStatus) {
			case 2:
				if (!mgr->mIsStoryGameSave) {
					mState = 4;
				} else {
					mState = 2;
				}
				break;
			case 14:
				mState = 4;
				break;
			default:
				mState = 4;
				break;
			}
		}
		break;
	case 2:
		if (sys->mCardMgr->isSaveInvalid()) {
			P2ASSERTLINE(476, sys->mCardMgr->saveGameOption());
			mState = 3;
		}
		break;
	case 3:
		if (sys->mCardMgr->isSaveInvalid()) {
			mCardStatus = sys->mCardMgr->getCardStatus();
			sys->mCardMgr->getCardStatus();
			mState = 4;
		}
		break;
	case 4:
		if (mgr->mCounter * sys->mDeltaTime < 0.5f && mgr->mController->mButton.mButtonDown & Controller::PRESS_A) {
			mgr->mSaveMenu.closeMsg();
		}

		if (mgr->mCounter == 0) {
			mgr->mSaveMenu.closeMsg();
		}

		if (mgr->mSaveMenu.isFinishMsg()) {
			switch (mCardStatus) {
			case 2:
				transit(mgr, AfterSave, nullptr);
				break;
			case 0:
				CardErrorArg arg1(CardError::TMgr::Start_FailToSave_NoCard);
				transit(mgr, CardError, &arg1);
				break;
			case 14:
				CardErrorArg arg2(CardError::TMgr::Start_SerialNoError);
				transit(mgr, CardError, &arg2);
				break;
			default:
				CardErrorArg arg3(CardError::TMgr::Start_FailToSave_IOError);
				transit(mgr, CardError, &arg3);
				break;
			}
		}
		break;
	}
}

/*
 * --INFO--
 * Address:	803DC43C
 * Size:	000050
 */
void FSMState_AfterSave::do_init(TMgr* mgr, Game::StateArg*)
{
	mgr->mSaveMenu.openMsg(Screen::TSaveMenu::MESSAGE_SaveSuccess);

	u32 count     = 1.0f / sys->mDeltaTime;
	mgr->mCounter = count;
	mgr->_3CC     = count;
}

/*
 * --INFO--
 * Address:	803DC48C
 * Size:	0000D8
 */
void FSMState_AfterSave::do_exec(TMgr* mgr)
{
	if (mgr->mCounter * sys->mDeltaTime < 0.5f && mgr->mController->mButton.mButtonDown & Controller::PRESS_A) {
		mgr->mSaveMenu.closeMsg();
	}

	if (mgr->mCounter == 0) {
		mgr->mSaveMenu.closeMsg();
	}

	if (mgr->mSaveMenu.isFinishMsg()) {
		mgr->mSaveMenu.closeScreen(nullptr);
	}

	if (mgr->mSaveMenu.isFinishScreen()) {
		mgr->goEnd_(TMgr::End_0);
	}
}

/*
 * --INFO--
 * Address:	803DC564
 * Size:	000068
 */
void FSMState_CardError::do_init(TMgr* mgr, Game::StateArg* arg)
{
	CardErrorArg* sarg = static_cast<CardErrorArg*>(arg);
	P2ASSERTLINE(594, arg);
	mgr->mMemCardErrorMgr.startSeq(sarg->mStartType);
	mgr->mSaveMenu.noMsg();
}

/*
 * --INFO--
 * Address:	803DC5CC
 * Size:	000104
 */
void FSMState_CardError::do_exec(TMgr* mgr)
{
	if (!mgr->mMemCardErrorMgr.isGetEnd()) {
		return;
	}

	switch (mgr->mMemCardErrorMgr.mEndStat) {
	case CardError::TMgr::End_3:
		if (mgr->_47A) {
			transit(mgr, DoYouSave, nullptr);
			mgr->mMemCardErrorMgr.forceQuitSeq();
		} else {
			mgr->goEnd_(TMgr::End_4);
		}
		break;
	case CardError::TMgr::End_4:
		transit(mgr, MountCheck, nullptr);
		break;
	default:
		JUT_PANICLINE(621, "想定外です。ありえねー\0"); // "Unexpected. Impossible"
		JUT_PANICLINE(622, "P2Assert");
		break;
	}
}

/*
 * --INFO--
 * Address:	803DC6D0
 * Size:	00014C
 */
TMgr::~TMgr() { msInstance = nullptr; }
} // namespace Save

/*
 * --INFO--
 * Address:	803DC6D0
 * Size:	00014C
 */
CardError::TMgr::~TMgr() { } // TODO: this should be weak as per map, but inlines in above dtor if made weak

namespace Save {
/*
 * --INFO--
 * Address:	803DC870
 * Size:	000048
 */
TMgr* TMgr::createInstance()
{
	if (!msInstance) {
		msInstance = new TMgr;
	}

	return msInstance;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void TMgr::deleteInstance()
{
	delete msInstance;
	msInstance = nullptr;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
TMgr* TMgr::getInstance() { return msInstance; }

/*
 * --INFO--
 * Address:	803DC8B8
 * Size:	000058
 */
void TMgr::onDvdErrorOccured()
{
	if (!msInstance) {
		return;
	}

	if (!msInstance->isFinish()) {
		msInstance->mDVDErrorSuspended = true;
		msInstance->forceQuit();
	} else {
		msInstance->mDVDErrorSuspended = false;
	}
}

/*
 * --INFO--
 * Address:	803DC910
 * Size:	000044
 */
void TMgr::onDvdErrorRecovered()
{
	if (msInstance && msInstance->mDVDErrorSuspended) {
		msInstance->start();
		msInstance->mDVDErrorSuspended = false;
	}
}

/*
 * --INFO--
 * Address:	803DC954
 * Size:	0000D4
 */
TMgr::TMgr()
    : mCounter(0)
    , _3CC(0)
{
	mStateMachine.init(this);
	mStateMachine.start(this, Standby, nullptr);

	mIsStoryGameSave   = FALSE;
	mSaveType          = 0;
	mIsAutosaveOn      = false;
	_47A               = true;
	mDVDErrorSuspended = false;
}

/*
 * --INFO--
 * Address:	803DCBFC
 * Size:	000080
 */
void TMgr::start()
{
	if (!mIsAutosaveOn) {
		mStateMachine.transit(this, DoYouSave, nullptr);
	} else {
		mStateMachine.transit(this, MountCheck, nullptr);
	}

	update();
}

/*
 * --INFO--
 * Address:	803DCC7C
 * Size:	000064
 */
void TMgr::forceQuit()
{
	mStateMachine.start(this, Standby, nullptr);
	mMemCardErrorMgr.forceQuitSeq();
	mSaveMenu.killScreen();
}

/*
 * --INFO--
 * Address:	803DCCE0
 * Size:	00004C
 */
bool TMgr::isFinish()
{
	if (getStateID() == Standby && !mDVDErrorSuspended) {
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	803DCD2C
 * Size:	000068
 */
void TMgr::goEnd_(TMgr::enumEnd end)
{
	mCurrStateID = end;
	mStateMachine.transit(this, Standby, nullptr);
	mSaveMenu.killScreen();
	mMemCardErrorMgr.forceQuitSeq();
}

/*
 * --INFO--
 * Address:	803DCD94
 * Size:	000098
 */
void TMgr::update()
{
	mStateMachine.exec(this);
	if (getStateID() == Standby) {
		return;
	}

	sys->mCardMgr->update();
	mMemCardErrorMgr.update();
	mSaveMenu.update();
	if (mCounter) {
		mCounter--;
	}
}

/*
 * --INFO--
 * Address:	803DCE2C
 * Size:	000050
 */
void TMgr::draw()
{
	if (getStateID() == Standby) {
		return;
	}

	mSaveMenu.draw();
	mMemCardErrorMgr.draw();
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void TMgr::showInfo()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803DCE7C
 * Size:	000058
 */
int TMgr::getStateID()
{
	P2ASSERTLINE(824, mCurrentState);
	return mCurrentState->mId;
}

} // namespace Save

} // namespace ebi
