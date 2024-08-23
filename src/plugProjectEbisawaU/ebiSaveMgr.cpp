#include "ebi/Save.h"
#include "Controller.h"
#include "ebi/Utility.h"

static const char name[] = "ebiSaveMgr";

namespace ebi {

namespace Save {

TMgr* TMgr::msInstance;

/**
 * @note Address: 0x803DB190
 * @note Size: 0x34C
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

/**
 * @note Address: 0x803DB4DC
 * @note Size: 0x2C
 */
void FSMState::init(TMgr* mgr, Game::StateArg* arg) { do_init(mgr, arg); }

/**
 * @note Address: 0x803DB50C
 * @note Size: 0x2C
 */
void FSMState::exec(TMgr* mgr) { do_exec(mgr); }

/**
 * @note Address: 0x803DB53C
 * @note Size: 0x4C
 */
void FSMState_DoYouSave::do_init(TMgr* mgr, Game::StateArg*)
{
	mgr->mSaveMenu.openScreen(nullptr);
	mgr->mSaveMenu.openMsg(Screen::TSaveMenu::MESSAGE_SaveOption);
}

/**
 * @note Address: 0x803DB588
 * @note Size: 0x144
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
				mgr->goEnd_(TMgr::End_SelectNoSave);
			}
		} else {
			transit(mgr, DoYouContinue, nullptr);
		}
		break;
	case 2:
		mgr->mSaveMenu.closeScreen(nullptr);
		if (mgr->mSaveMenu.isFinishScreen()) {
			mgr->goEnd_(TMgr::End_Cancel);
		}
		break;
	}
}

/**
 * @note Address: 0x803DB6FC
 * @note Size: 0x28
 */
void FSMState_DoYouContinue::do_init(TMgr* mgr, Game::StateArg*) { mgr->mSaveMenu.openMsg(Screen::TSaveMenu::MESSAGE_NoSaveOption); }

/**
 * @note Address: 0x803DB724
 * @note Size: 0x114
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
			mgr->goEnd_(TMgr::End_SelectNoSave);
		}
		break;
	case 1:
		mgr->mSaveMenu.closeScreen(nullptr);
		if (mgr->mSaveMenu.isFinishScreen()) {
			mgr->goEnd_(TMgr::End_ReturnToFS);
		}
		break;
	case 2:
		transit(mgr, DoYouSave, nullptr);
		break;
	}
}

/**
 * @note Address: 0x803DB838
 * @note Size: 0xC
 */
void FSMState_CardRequest::do_init(TMgr*, Game::StateArg*) { mState = 0; }

/**
 * @note Address: 0x803DB844
 * @note Size: 0x264
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

/**
 * @note Address: 0x803DBAA8
 * @note Size: 0x3C
 */
void FSMState_CardRequest::do_transitCardNoCard(TMgr* mgr)
{
	CardErrorArg arg(CardError::TMgr::Start_NoCard_Save);

	transit(mgr, CardError, &arg);
}

/**
 * @note Address: 0x803DBAE4
 * @note Size: 0x3C
 */
void FSMState_CardRequest::do_transitCardIOError(TMgr* mgr)
{
	CardErrorArg arg(CardError::TMgr::Start_IOError_Save);

	transit(mgr, CardError, &arg);
}

/**
 * @note Address: 0x803DBB20
 * @note Size: 0x3C
 */
void FSMState_CardRequest::do_transitCardWrongDevice(TMgr* mgr)
{
	CardErrorArg arg(CardError::TMgr::Start_WrongDevice_Save);

	transit(mgr, CardError, &arg);
}

/**
 * @note Address: 0x803DBB5C
 * @note Size: 0x3C
 */
void FSMState_CardRequest::do_transitCardWrongSector(TMgr* mgr)
{
	CardErrorArg arg(CardError::TMgr::Start_WrongSector_Save);

	transit(mgr, CardError, &arg);
}

/**
 * @note Address: 0x803DBB98
 * @note Size: 0x3C
 */
void FSMState_CardRequest::do_transitCardBroken(TMgr* mgr)
{
	CardErrorArg arg(CardError::TMgr::Start_DataBrokenAndDoYouFormat_Save);

	transit(mgr, CardError, &arg);
}

/**
 * @note Address: 0x803DBBD4
 * @note Size: 0x3C
 */
void FSMState_CardRequest::do_transitCardEncoding(TMgr* mgr)
{
	CardErrorArg arg(CardError::TMgr::Start_DataBrokenAndDoYouFormat_Save);

	transit(mgr, CardError, &arg);
}

/**
 * @note Address: 0x803DBC10
 * @note Size: 0x3C
 */
void FSMState_CardRequest::do_transitCardNoFileSpace(TMgr* mgr)
{
	CardErrorArg arg(CardError::TMgr::Start_OverCapacity_Save);

	transit(mgr, CardError, &arg);
}

/**
 * @note Address: 0x803DBC4C
 * @note Size: 0x3C
 */
void FSMState_CardRequest::do_transitCardNoFileEntry(TMgr* mgr)
{
	CardErrorArg arg(CardError::TMgr::Start_OverCapacity_Save);

	transit(mgr, CardError, &arg);
}

/**
 * @note Address: 0x803DBC88
 * @note Size: 0x3C
 */
void FSMState_CardRequest::do_transitCardFileOpenError(TMgr* mgr)
{
	CardErrorArg arg(CardError::TMgr::Start_DoYouCreateNewFile_Save);

	transit(mgr, CardError, &arg);
}

/**
 * @note Address: 0x803DBCC4
 * @note Size: 0x3C
 */
void FSMState_CardRequest::do_transitCardSerialNoError(TMgr* mgr)
{
	CardErrorArg arg(CardError::TMgr::Start_SerialNoError);

	transit(mgr, CardError, &arg);
}

/**
 * @note Address: 0x803DBD00
 * @note Size: 0x2C
 */
void FSMState_CardRequest::do_transitCardPlayerDataBroken(TMgr* mgr) { do_transitCardReady(mgr); }

/**
 * @note Address: 0x803DBD2C
 * @note Size: 0x28
 */
bool FSMState_MountCheck::do_cardRequest(TMgr*) { return sys->mCardMgr->resetError(); }

/**
 * @note Address: 0x803DBD54
 * @note Size: 0x34
 */
void FSMState_MountCheck::do_transitCardReady(TMgr* mgr) { transit(mgr, GetPlayerHeader, nullptr); }

/**
 * @note Address: 0x803DBD88
 * @note Size: 0x2C
 */
bool FSMState_GetPlayerHeader::do_cardRequest(TMgr* mgr) { return sys->mCardMgr->getPlayerHeader(&mgr->mPlayerFileInfo); }

/**
 * @note Address: 0x803DBDB4
 * @note Size: 0xF8
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

/**
 * @note Address: 0x803DBEAC
 * @note Size: 0x38
 */
void FSMState_GetPlayerHeader::do_transitCardSerialNoError(TMgr* mgr) { JUT_PANICLINE(349, "P2Assert"); }

/**
 * @note Address: 0x803DBEE4
 * @note Size: 0x28
 */
bool FSMState_CheckBeforeSave::do_cardRequest(TMgr*) { return sys->mCardMgr->checkBeforeSave(); }

/**
 * @note Address: 0x803DBF0C
 * @note Size: 0x3C
 */
void FSMState_CheckBeforeSave::do_transitCardReady(TMgr* mgr)
{
	NowSaveArg arg(false);
	transit(mgr, NowSave, &arg);
}

/**
 * @note Address: 0x803DBF48
 * @note Size: 0xD0
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

	u32 count           = 1.0f / sys->mDeltaTime;
	mgr->mCounter       = count;
	mgr->mCounterBackup = count;

	mgr->mMemCardErrorMgr.forceQuitSeq();
}

/**
 * @note Address: 0x803DC018
 * @note Size: 0x424
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
		if (mgr->mCounter * sys->mDeltaTime < 0.5f && mgr->mController->getButtonDown() & Controller::PRESS_A) {
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

/**
 * @note Address: 0x803DC43C
 * @note Size: 0x50
 */
void FSMState_AfterSave::do_init(TMgr* mgr, Game::StateArg*)
{
	mgr->mSaveMenu.openMsg(Screen::TSaveMenu::MESSAGE_SaveSuccess);

	u32 count           = 1.0f / sys->mDeltaTime;
	mgr->mCounter       = count;
	mgr->mCounterBackup = count;
}

/**
 * @note Address: 0x803DC48C
 * @note Size: 0xD8
 */
void FSMState_AfterSave::do_exec(TMgr* mgr)
{
	if (mgr->mCounter * sys->mDeltaTime < 0.5f && mgr->mController->getButtonDown() & Controller::PRESS_A) {
		mgr->mSaveMenu.closeMsg();
	}

	if (mgr->mCounter == 0) {
		mgr->mSaveMenu.closeMsg();
	}

	if (mgr->mSaveMenu.isFinishMsg()) {
		mgr->mSaveMenu.closeScreen(nullptr);
	}

	if (mgr->mSaveMenu.isFinishScreen()) {
		mgr->goEnd_(TMgr::End_SaveDone);
	}
}

/**
 * @note Address: 0x803DC564
 * @note Size: 0x68
 */
void FSMState_CardError::do_init(TMgr* mgr, Game::StateArg* arg)
{
	CardErrorArg* sarg = static_cast<CardErrorArg*>(arg);
	P2ASSERTLINE(594, arg);
	mgr->mMemCardErrorMgr.startSeq(sarg->mStartType);
	mgr->mSaveMenu.noMsg();
}

/**
 * @note Address: 0x803DC5CC
 * @note Size: 0x104
 */
void FSMState_CardError::do_exec(TMgr* mgr)
{
	if (!mgr->mMemCardErrorMgr.isGetEnd()) {
		return;
	}

	switch (mgr->mMemCardErrorMgr.mEndStat) {
	case CardError::TMgr::End_RestartSaveOption:
		if (mgr->mDoRetryOnError) {
			transit(mgr, DoYouSave, nullptr);
			mgr->mMemCardErrorMgr.forceQuitSeq();
		} else {
			mgr->goEnd_(TMgr::End_Error);
		}
		break;
	case CardError::TMgr::End_GoToCheckCard:
		transit(mgr, MountCheck, nullptr);
		break;
	default:
		JUT_PANICLINE(621, "想定外です。ありえねー"); // "Unexpected. Impossible"
		JUT_PANICLINE(622, "P2Assert");
		break;
	}
}

/**
 * @note Address: 0x803DC6D0
 * @note Size: 0x14C
 */
TMgr::~TMgr() { msInstance = nullptr; }
} // namespace Save

/**
 * @note Address: 0x803DC6D0
 * @note Size: 0x14C
 */
CardError::TMgr::~TMgr() { } // TODO: this should be weak as per map, but inlines in above dtor if made weak

namespace Save {
/**
 * @note Address: 0x803DC870
 * @note Size: 0x48
 */
TMgr* TMgr::createInstance()
{
	if (!msInstance) {
		msInstance = new TMgr;
	}

	return msInstance;
}

/**
 * @note Address: N/A
 * @note Size: 0x48
 */
void TMgr::deleteInstance()
{
	delete msInstance;
	msInstance = nullptr;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
TMgr* TMgr::getInstance() { return msInstance; }

/**
 * @note Address: 0x803DC8B8
 * @note Size: 0x58
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

/**
 * @note Address: 0x803DC910
 * @note Size: 0x44
 */
void TMgr::onDvdErrorRecovered()
{
	if (msInstance && msInstance->mDVDErrorSuspended) {
		msInstance->start();
		msInstance->mDVDErrorSuspended = false;
	}
}

/**
 * @note Address: 0x803DC954
 * @note Size: 0xD4
 */
TMgr::TMgr()
    : mCounter(0)
    , mCounterBackup(0)
{
	mStateMachine.init(this);
	mStateMachine.start(this, Standby, nullptr);

	mIsStoryGameSave   = FALSE;
	mSaveType          = 0;
	mIsAutosaveOn      = false;
	mDoRetryOnError    = true;
	mDVDErrorSuspended = false;
}

/**
 * @note Address: 0x803DCBFC
 * @note Size: 0x80
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

/**
 * @note Address: 0x803DCC7C
 * @note Size: 0x64
 */
void TMgr::forceQuit()
{
	mStateMachine.start(this, Standby, nullptr);
	mMemCardErrorMgr.forceQuitSeq();
	mSaveMenu.killScreen();
}

/**
 * @note Address: 0x803DCCE0
 * @note Size: 0x4C
 */
bool TMgr::isFinish()
{
	if (getStateID() == Standby && !mDVDErrorSuspended) {
		return true;
	}

	return false;
}

/**
 * @note Address: 0x803DCD2C
 * @note Size: 0x68
 */
void TMgr::goEnd_(TMgr::enumEnd end)
{
	mEndState = end;
	mStateMachine.transit(this, Standby, nullptr);
	mSaveMenu.killScreen();
	mMemCardErrorMgr.forceQuitSeq();
}

/**
 * @note Address: 0x803DCD94
 * @note Size: 0x98
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

/**
 * @note Address: 0x803DCE2C
 * @note Size: 0x50
 */
void TMgr::draw()
{
	if (getStateID() == Standby) {
		return;
	}

	mSaveMenu.draw();
	mMemCardErrorMgr.draw();
}

/**
 * @note Address: N/A
 * @note Size: 0x34
 */
void TMgr::showInfo()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x803DCE7C
 * @note Size: 0x58
 */
int TMgr::getStateID()
{
	P2ASSERTLINE(824, mCurrentState);
	return mCurrentState->mId;
}

} // namespace Save

} // namespace ebi
