#include "ebi/CardError.h"
#include "System.h"
#include "MemoryCardMgr.h"
#include "Game/MemoryCard/Mgr.h"

namespace ebi {
namespace CardError {

static const char unusedCardMgrName[] = "ebiCardMgr";

/**
 * @note Address: 0x803D1104
 * @note Size: 0xA2C
 */
void FSMStateMachine::init(TMgr* mgr)
{
	create(CARDERROR_StateCount);

	registerState(new FSMState(CARDERROR_Standby, "Standby"));
	registerState(new FSMState(CARDERROR_EmptyScreen, "EmptyScreen"));
	registerState(new FSMState_W00_NoCard);
	registerState(new FSMState_W01_IOError);
	registerState(new FSMState_W02_WrongDevice);
	registerState(new FSMState_W03_WrongSector);
	registerState(new FSMState_W04_OverCapacity);
	registerState(new FSMState_W05_InitCardOnIPL);
	registerState(new FSMState_W06_CardNotUsable);
	registerState(new FSMState_W07_NoFileForSave);
	registerState(new FSMState_W08_FinishFormat);
	registerState(new FSMState_W09_FinishCreateNewFile);
	registerState(new FSMState_W10_SerialNoError);
	registerState(new FSMState_WF0_FailToFormat_NoCard);
	registerState(new FSMState_WF1_FailToFormat_IOError);
	registerState(new FSMState_WF2_FailToCreateNewFile_NoCard);
	registerState(new FSMState_WF3_FailToCreateNewFile_IOError);
	registerState(new FSMState_WF4_FailToSave_NoCard);
	registerState(new FSMState_WF5_FailToSave_IOError);
	registerState(new FSMState_Q00_DataBrokenAndDoYouFormat);
	registerState(new FSMState_Q01_DoYouOpenIPL);
	registerState(new FSMState_Q02_DoYouFormat);
	registerState(new FSMState_Q03_DoYouCreateNewFile);
	registerState(new FSMState_Q04_DoYouStartGameWithoutSave);
	registerState(new FSMState_Q05_GameCantSave);
	registerState(new FSMState_WN0_NowFormat);
	registerState(new FSMState_WN1_NowCreateNewFile);
}

/**
 * @note Address: 0x803D1B30
 * @note Size: 0x2C
 */
void FSMState::init(TMgr* mgr, Game::StateArg* arg) { do_init(mgr, arg); }

/**
 * @note Address: 0x803D1B60
 * @note Size: 0x2C
 */
void FSMState::exec(TMgr* mgr) { do_exec(mgr); }

/**
 * @note Address: 0x803D1B90
 * @note Size: 0x84
 */
void FSMState_Warning::do_init(TMgr* mgr, Game::StateArg*)
{
	mIsClosed = false;
	mCanClose = false;

	u32 rate         = 0.0f / sys->mDeltaTime;
	mgr->mCounter    = rate;
	mgr->mCounterMax = rate;

	mDoCheckCard          = false;
	mgr->mScreen.mCanExit = true;
	do_open(mgr);
}

/**
 * @note Address: 0x803D1C14
 * @note Size: 0xA4
 */
void FSMState_Warning::do_exec(TMgr* mgr)
{
	if (mDoCheckCard) {
		mgr->checkAndTransitNoCard_();
	}

	if (!mgr->mCounter && mCanClose && !mIsClosed) {
		mgr->mScreen.close();
		mIsClosed = true;
	}

	if (mgr->mScreen.isFinish()) {
		do_transit(mgr);
	}
}

/**
 * @note Address: 0x803D1CB8
 * @note Size: 0x3C
 */
void FSMState_Question::do_init(TMgr* mgr, Game::StateArg*)
{
	mDoCheckCard          = false;
	mgr->mScreen.mCanExit = true;
	do_open(mgr);
}

/**
 * @note Address: 0x803D1CF4
 * @note Size: 0x98
 */
void FSMState_Question::do_exec(TMgr* mgr)
{
	if (mDoCheckCard) {
		mgr->checkAndTransitNoCard_();
	}

	if (mgr->mScreen.isFinish()) {
		if (mgr->mScreen.mSelectionIdx == 1) {
			do_transitYes(mgr);
		} else {
			do_transitNo(mgr);
		}
	}
}

/**
 * @note Address: 0x803D1D8C
 * @note Size: 0x74
 */
void FSMState_CardRequest::do_init(TMgr* mgr, Game::StateArg*)
{
	mgr->mScreen.mCanExit = false;
	mState                = 0;

	u32 rate         = 3.0f / sys->mDeltaTime;
	mgr->mCounter    = rate;
	mgr->mCounterMax = rate;

	do_open(mgr);
}

/**
 * @note Address: 0x803D1E00
 * @note Size: 0x350
 */
void FSMState_CardRequest::do_exec(TMgr* mgr)
{
	bool check = sys->mCardMgr->isCardInvalid();

	if (check && (int)sys->mCardMgr->getCardStatus() == 0) {
		check = true;
	} else {
		check = false;
	}

	if (check) {
		mCardStatus = sys->mCardMgr->getCardStatus();
		mgr->mScreen.close();
	}

	switch (mState) // todo: enums for both of these switches
	{
	case 0:
		if (sys->mCardMgr->isCardInvalid()) {
			if (do_cardRequest()) {
				mState = 1;
			} else {
				JUT_PANICLINE(191, "P2Assert");
			}
		}
		break;
	case 1:
		if (sys->mCardMgr->isCardInvalid()) {
			mCardStatus = (int)sys->mCardMgr->getCardStatus();
			if (mCardStatus != CARDERROR_NoCard) {
				sys->mCardMgr->getCardStatus();
			}

			mState = 2;
		}
		break;
	case 2:
		if (!mgr->mCounter) {
			mgr->mScreen.close();
		}

		if (!mgr->mScreen.isFinish()) {
			break;
		}

		mgr->mScreen.mCanExit = true;

		switch (mCardStatus) {
		case Game::MemoryCard::Mgr::MCS_IOError:
			do_transitCardReady(mgr);
			break;
		case Game::MemoryCard::Mgr::MCS_Ready:
			do_transitCardNoCard(mgr);
			break;
		case Game::MemoryCard::Mgr::MCS_Broken:
			do_transitCardIOError(mgr);
			break;
		case Game::MemoryCard::Mgr::MCS_Encoding:
			do_transitCardWrongDevice(mgr);
			break;
		case Game::MemoryCard::Mgr::MCS_NoFileSpace:
			do_transitCardWrongSector(mgr);
			break;
		case Game::MemoryCard::Mgr::MCS_WrongDevice:
			do_transitCardBroken(mgr);
			break;
		case Game::MemoryCard::Mgr::MCS_WrongSector:
			do_transitCardEncoding(mgr);
			break;
		case Game::MemoryCard::Mgr::MCS_NoFileEntry:
			do_transitCardNoFileSpace(mgr);
			break;
		case Game::MemoryCard::Mgr::MCS_FileOpenError:
			do_transitCardNoFileEntry(mgr);
			break;
		case Game::MemoryCard::Mgr::MCS_NoCard:
			do_transitCardFileOpenError(mgr);
			break;
		case Game::MemoryCard::Mgr::MCS_PlayerDataBroken:
			do_transitCardSerialNoError(mgr);
			break;
		default:
			JUT_PANICLINE(266, "P2Assert");
			break;
		}
	}
}

/**
 * @note Address: 0x803D2150
 * @note Size: 0x64
 */
void FSMState_CardRequest::do_transitCardNoCard(TMgr* mgr)
{
	if (mgr->mParentMenuType == CardError::TMgr::Parent_FileSelect) {
		transit(mgr, CARDERROR_NoCard, nullptr);
	} else if (mgr->mParentMenuType == CardError::TMgr::Parent_Save) {
		transit(mgr, CARDERROR_NoCard, nullptr);
	}
}

/**
 * @note Address: 0x803D21E4
 * @note Size: 0x64
 */
void FSMState_CardRequest::do_transitCardIOError(TMgr* mgr)
{
	if (mgr->mParentMenuType == CardError::TMgr::Parent_FileSelect) {
		transit(mgr, CARDERROR_IOError, nullptr);
	} else if (mgr->mParentMenuType == CardError::TMgr::Parent_Save) {
		transit(mgr, CARDERROR_IOError, nullptr);
	}
}

/**
 * @note Address: 0x803D2248
 * @note Size: 0x64
 */
void FSMState_CardRequest::do_transitCardWrongDevice(TMgr* mgr)
{
	if (mgr->mParentMenuType == CardError::TMgr::Parent_FileSelect) {
		transit(mgr, CARDERROR_WrongDevice, nullptr);
	} else if (mgr->mParentMenuType == CardError::TMgr::Parent_Save) {
		transit(mgr, CARDERROR_WrongDevice, nullptr);
	}
}

/**
 * @note Address: 0x803D22AC
 * @note Size: 0x64
 */
void FSMState_CardRequest::do_transitCardWrongSector(TMgr* mgr)
{
	if (mgr->mParentMenuType == CardError::TMgr::Parent_FileSelect) {
		transit(mgr, CARDERROR_WrongSector, nullptr);
	} else if (mgr->mParentMenuType == CardError::TMgr::Parent_Save) {
		transit(mgr, CARDERROR_WrongSector, nullptr);
	}
}

/**
 * @note Address: 0x803D2310
 * @note Size: 0x64
 */
void FSMState_CardRequest::do_transitCardBroken(TMgr* mgr)
{
	if (mgr->mParentMenuType == CardError::TMgr::Parent_FileSelect) {
		transit(mgr, CARDERROR_DataBrokenAndDoYouFormat, nullptr);
	} else if (mgr->mParentMenuType == CardError::TMgr::Parent_Save) {
		transit(mgr, CARDERROR_DataBrokenAndDoYouFormat, nullptr);
	}
}

/**
 * @note Address: 0x803D2374
 * @note Size: 0x64
 */
void FSMState_CardRequest::do_transitCardEncoding(TMgr* mgr)
{
	if (mgr->mParentMenuType == CardError::TMgr::Parent_FileSelect) {
		transit(mgr, CARDERROR_DataBrokenAndDoYouFormat, nullptr);
	} else if (mgr->mParentMenuType == CardError::TMgr::Parent_Save) {
		transit(mgr, CARDERROR_DataBrokenAndDoYouFormat, nullptr);
	}
}

/**
 * @note Address: 0x803D23D8
 * @note Size: 0x64
 */
void FSMState_CardRequest::do_transitCardNoFileSpace(TMgr* mgr)
{
	if (mgr->mParentMenuType == CardError::TMgr::Parent_FileSelect) {
		transit(mgr, CARDERROR_OverCapacity, nullptr);
	} else if (mgr->mParentMenuType == CardError::TMgr::Parent_Save) {
		transit(mgr, CARDERROR_OverCapacity, nullptr);
	}
}

/**
 * @note Address: 0x803D243C
 * @note Size: 0x64
 */
void FSMState_CardRequest::do_transitCardNoFileEntry(TMgr* mgr)
{
	if (mgr->mParentMenuType == CardError::TMgr::Parent_FileSelect) {
		transit(mgr, CARDERROR_OverCapacity, nullptr);
	} else if (mgr->mParentMenuType == CardError::TMgr::Parent_Save) {
		transit(mgr, CARDERROR_OverCapacity, nullptr);
	}
}

/**
 * @note Address: 0x803D24A0
 * @note Size: 0x64
 */
void FSMState_CardRequest::do_transitCardFileOpenError(TMgr* mgr)
{
	if (mgr->mParentMenuType == CardError::TMgr::Parent_FileSelect) {
		transit(mgr, CARDERROR_DoYouCreateNewFile, nullptr);
	} else if (mgr->mParentMenuType == CardError::TMgr::Parent_Save) {
		transit(mgr, CARDERROR_DoYouCreateNewFile, nullptr);
	}
}

/**
 * @note Address: 0x803D2504
 * @note Size: 0x68
 */
void FSMState_CardRequest::do_transitCardSerialNoError(TMgr* mgr)
{
	if (mgr->mParentMenuType == CardError::TMgr::Parent_FileSelect) {
		P2ASSERTLINE(361, false);
	} else if (mgr->mParentMenuType == CardError::TMgr::Parent_Save) {
		transit(mgr, CARDERROR_SerialNoError, nullptr);
	}
}

/**
 * @note Address: 0x803D256C
 * @note Size: 0x34
 */
void FSMState_NoCard::do_init(TMgr* mgr, Game::StateArg*)
{
	mIsClosed = false;
	do_open(mgr);
}

/**
 * @note Address: 0x803D25A0
 * @note Size: 0xB0
 */
void FSMState_NoCard::do_exec(TMgr* mgr)
{
	u8 stat = sys->mCardMgr->isCardNotReady();
	if (stat) {
		mgr->mScreen.close();
		mIsClosed = true;
	}

	if (mgr->mScreen.isFinish()) {
		if (mIsClosed) {
			do_transitOnCard(mgr);
		} else {
			do_transit(mgr);
		}
	}
}

/**
 * @note Address: 0x803D2650
 * @note Size: 0x94
 */
TMgr::TMgr()
    : mCounter(0)
    , mCounterMax(0)
{
	mStateMachine.init(this);
	mStateMachine.start(this, CARDERROR_Standby, nullptr);
}

} // namespace CardError

namespace Screen {

/**
 * @note Address: 0x803D2718
 * @note Size: 0x460
 */
TMemoryCard::~TMemoryCard() { }

/**
 * @note Address: 0x803D2B78
 * @note Size: 0x4C8
 */
TMemoryCard::TMemoryCard()
    : mState(0)
    , mInputDelay(0)
    , mInputDelayMax(0)
    , mMsgAlpha(0)
    , mAlphaMod(0)
    , mCanExit(1)
    , mPaneMsg1(nullptr)
    , mPaneMsg2(nullptr)
    , mPaneMsg3(nullptr)
    , mPaneMsg4(nullptr)
{
}

} // namespace Screen

namespace CardError {

/**
 * @note Address: 0x803D3040
 * @note Size: 0x378
 */
void TMgr::startSeq(enumStart id)
{
	mEndStat = End_0;
	P2ASSERTBOUNDSLINE(412, 0, id, 17);
	switch (id) {
	case Start_NoCard_FS:
		mParentMenuType = Parent_FileSelect;
		mStateMachine.start(this, CARDERROR_NoCard, nullptr);
		break;
	case Start_IOError_FS:
		mParentMenuType = Parent_FileSelect;
		mStateMachine.start(this, CARDERROR_IOError, nullptr);
		break;
	case Start_WrongDevice_FS:
		mParentMenuType = Parent_FileSelect;
		mStateMachine.start(this, CARDERROR_WrongDevice, nullptr);
		break;
	case Start_WrongSector_FS:
		mParentMenuType = Parent_FileSelect;
		mStateMachine.start(this, CARDERROR_WrongSector, nullptr);
		break;
	case Start_DataBrokenAndDoYouFormat_FS:
		mParentMenuType = Parent_FileSelect;
		mStateMachine.start(this, CARDERROR_DataBrokenAndDoYouFormat, nullptr);
		break;
	case Start_OverCapacity_FS:
		mParentMenuType = Parent_FileSelect;
		mStateMachine.start(this, CARDERROR_OverCapacity, nullptr);
		break;
	case Start_DoYouCreateNewFile_FS:
		mParentMenuType = Parent_FileSelect;
		mStateMachine.start(this, CARDERROR_DoYouCreateNewFile, nullptr);
		break;
	case Start_NoCard_Save:
		mParentMenuType = Parent_Save;
		mStateMachine.start(this, CARDERROR_NoCard, nullptr);
		break;
	case Start_IOError_Save:
		mParentMenuType = Parent_Save;
		mStateMachine.start(this, CARDERROR_IOError, nullptr);
		break;
	case Start_WrongDevice_Save:
		mParentMenuType = Parent_Save;
		mStateMachine.start(this, CARDERROR_WrongDevice, nullptr);
		break;
	case Start_WrongSector_Save:
		mParentMenuType = Parent_Save;
		mStateMachine.start(this, CARDERROR_WrongSector, nullptr);
		break;
	case Start_DataBrokenAndDoYouFormat_Save:
		mParentMenuType = Parent_Save;
		mStateMachine.start(this, CARDERROR_DataBrokenAndDoYouFormat, nullptr);
		break;
	case Start_OverCapacity_Save:
		mParentMenuType = Parent_Save;
		mStateMachine.start(this, CARDERROR_OverCapacity, nullptr);
		break;
	case Start_DoYouCreateNewFile_Save:
		mParentMenuType = Parent_Save;
		mStateMachine.start(this, CARDERROR_DoYouCreateNewFile, nullptr);
		break;
	case Start_SerialNoError:
		mParentMenuType = Parent_Save;
		mStateMachine.start(this, CARDERROR_SerialNoError, nullptr);
		break;
	case Start_FailToSave_NoCard:
		mParentMenuType = Parent_Save;
		mStateMachine.start(this, CARDERROR_FailToSave_NoCard, nullptr);
		break;
	case Start_FailToSave_IOError:
		mParentMenuType = Parent_Save;
		mStateMachine.start(this, CARDERROR_FailToSave_IOError, nullptr);
		break;
	}
}

/**
 * @note Address: 0x803D33B8
 * @note Size: 0x50
 */
void TMgr::forceQuitSeq()
{
	mStateMachine.start(this, CARDERROR_Standby, nullptr);
	mScreen.killScreen();
}

/**
 * @note Address: 0x803D3408
 * @note Size: 0x44
 */
void TMgr::goEnd_(enumEnd end)
{
	mEndStat = end;
	mStateMachine.transit(this, CARDERROR_EmptyScreen, nullptr);
}

/**
 * @note Address: 0x803D344C
 * @note Size: 0xE0
 */
void TMgr::checkAndTransitNoCard_()
{
	bool check = sys->mCardMgr->isCardInvalid();
	if (check && (int)sys->mCardMgr->isCardReady()) {
		check = true;
	} else {
		check = false;
	}

	if (check) {
		if (mParentMenuType == Parent_FileSelect) {
			mStateMachine.transit(this, CARDERROR_NoCard, nullptr);
		} else if (mParentMenuType == Parent_Save) {
			mStateMachine.transit(this, CARDERROR_NoCard, nullptr);
		}
	}
}

/**
 * @note Address: 0x803D352C
 * @note Size: 0x6C
 */
void TMgr::update()
{
	mStateMachine.exec(this);
	if (getStateID() == CARDERROR_Standby) {
		return;
	}

	mScreen.update();
	if (mCounter) {
		mCounter--;
	}
}

/**
 * @note Address: 0x803D3598
 * @note Size: 0x3C
 */
void TMgr::draw()
{
	if (getStateID() != CARDERROR_Standby) {
		mScreen.draw();
	}
}

/**
 * @note Address: 0x803D35D4
 * @note Size: 0x50
 */
bool TMgr::isGetEnd()
{
	if ((getStateID() == CARDERROR_Standby) || (getStateID() == CARDERROR_EmptyScreen)) {
		return true;
	}

	return false;
}

/**
 * @note Address: N/A
 * @note Size: 0x28
 */
bool TMgr::isFinish()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void TMgr::showInfo(s32, s32, s32, s32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x803D3624
 * @note Size: 0x58
 */
int TMgr::getStateID()
{
	P2ASSERTLINE(760, mCurrentState);
	return mCurrentState->mId;
}

} // namespace CardError
} // namespace ebi
