#include "ebi/CardError.h"
#include "System.h"
#include "MemoryCardMgr.h"
#include "Game/MemoryCard/Mgr.h"

namespace ebi {
namespace CardError {

static const char unusedCardMgrName[] = "ebiCardMgr";

/*
 * --INFO--
 * Address:	803D1104
 * Size:	000A2C
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

/*
 * --INFO--
 * Address:	803D1B30
 * Size:	00002C
 */
void FSMState::init(TMgr* mgr, Game::StateArg* arg) { do_init(mgr, arg); }

/*
 * --INFO--
 * Address:	803D1B60
 * Size:	00002C
 */
void FSMState::exec(TMgr* mgr) { do_exec(mgr); }

/*
 * --INFO--
 * Address:	803D1B90
 * Size:	000084
 */
void FSMState_Warning::do_init(TMgr* mgr, Game::StateArg*)
{
	mIsClosed = false;
	mCanClose = false;

	u32 rate      = 0.0f / sys->mDeltaTime;
	mgr->mCounter = rate;
	mgr->_29C     = rate;

	mDoCheckCard          = false;
	mgr->mScreen.mCanExit = true;
	do_open(mgr);
}

/*
 * --INFO--
 * Address:	803D1C14
 * Size:	0000A4
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

/*
 * --INFO--
 * Address:	803D1CB8
 * Size:	00003C
 */
void FSMState_Question::do_init(TMgr* mgr, Game::StateArg*)
{
	mDoCheckCard          = false;
	mgr->mScreen.mCanExit = true;
	do_open(mgr);
}

/*
 * --INFO--
 * Address:	803D1CF4
 * Size:	000098
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

/*
 * --INFO--
 * Address:	803D1D8C
 * Size:	000074
 */
void FSMState_CardRequest::do_init(TMgr* mgr, Game::StateArg*)
{
	mgr->mScreen.mCanExit = false;
	mState                = 0;

	u32 rate      = 3.0f / sys->mDeltaTime;
	mgr->mCounter = rate;
	mgr->_29C     = rate;

	do_open(mgr);
}

/*
 * --INFO--
 * Address:	803D1E00
 * Size:	000350
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

/*
 * --INFO--
 * Address:	803D2150
 * Size:	000064
 */
void FSMState_CardRequest::do_transitCardNoCard(TMgr* mgr)
{
	if (!mgr->mIsBroken) {
		transit(mgr, CARDERROR_NoCard, nullptr);
	} else if (mgr->mIsBroken == 1) {
		transit(mgr, CARDERROR_NoCard, nullptr);
	}
}

/*
 * --INFO--
 * Address:	803D21E4
 * Size:	000064
 */
void FSMState_CardRequest::do_transitCardIOError(TMgr* mgr)
{
	if (!mgr->mIsBroken) {
		transit(mgr, CARDERROR_IOError, nullptr);
	} else if (mgr->mIsBroken == 1) {
		transit(mgr, CARDERROR_IOError, nullptr);
	}
}

/*
 * --INFO--
 * Address:	803D2248
 * Size:	000064
 */
void FSMState_CardRequest::do_transitCardWrongDevice(TMgr* mgr)
{
	if (!mgr->mIsBroken) {
		transit(mgr, CARDERROR_WrongDevice, nullptr);
	} else if (mgr->mIsBroken == 1) {
		transit(mgr, CARDERROR_WrongDevice, nullptr);
	}
}

/*
 * --INFO--
 * Address:	803D22AC
 * Size:	000064
 */
void FSMState_CardRequest::do_transitCardWrongSector(TMgr* mgr)
{
	if (!mgr->mIsBroken) {
		transit(mgr, CARDERROR_WrongSector, nullptr);
	} else if (mgr->mIsBroken == 1) {
		transit(mgr, CARDERROR_WrongSector, nullptr);
	}
}

/*
 * --INFO--
 * Address:	803D2310
 * Size:	000064
 */
void FSMState_CardRequest::do_transitCardBroken(TMgr* mgr)
{
	if (!mgr->mIsBroken) {
		transit(mgr, CARDERROR_DataBrokenAndDoYouFormat, nullptr);
	} else if (mgr->mIsBroken == 1) {
		transit(mgr, CARDERROR_DataBrokenAndDoYouFormat, nullptr);
	}
}

/*
 * --INFO--
 * Address:	803D2374
 * Size:	000064
 */
void FSMState_CardRequest::do_transitCardEncoding(TMgr* mgr)
{
	if (!mgr->mIsBroken) {
		transit(mgr, CARDERROR_DataBrokenAndDoYouFormat, nullptr);
	} else if (mgr->mIsBroken == 1) {
		transit(mgr, CARDERROR_DataBrokenAndDoYouFormat, nullptr);
	}
}

/*
 * --INFO--
 * Address:	803D23D8
 * Size:	000064
 */
void FSMState_CardRequest::do_transitCardNoFileSpace(TMgr* mgr)
{
	if (!mgr->mIsBroken) {
		transit(mgr, CARDERROR_OverCapacity, nullptr);
	} else if (mgr->mIsBroken == 1) {
		transit(mgr, CARDERROR_OverCapacity, nullptr);
	}
}

/*
 * --INFO--
 * Address:	803D243C
 * Size:	000064
 */
void FSMState_CardRequest::do_transitCardNoFileEntry(TMgr* mgr)
{
	if (!mgr->mIsBroken) {
		transit(mgr, CARDERROR_OverCapacity, nullptr);
	} else if (mgr->mIsBroken == 1) {
		transit(mgr, CARDERROR_OverCapacity, nullptr);
	}
}

/*
 * --INFO--
 * Address:	803D24A0
 * Size:	000064
 */
void FSMState_CardRequest::do_transitCardFileOpenError(TMgr* mgr)
{
	if (!mgr->mIsBroken) {
		transit(mgr, CARDERROR_DoYouCreateNewFile, nullptr);
	} else if (mgr->mIsBroken == 1) {
		transit(mgr, CARDERROR_DoYouCreateNewFile, nullptr);
	}
}

/*
 * --INFO--
 * Address:	803D2504
 * Size:	000068
 */
void FSMState_CardRequest::do_transitCardSerialNoError(TMgr* mgr)
{
	if (!mgr->mIsBroken) {
		JUT_PANICLINE(361, "P2Assert");
	} else if (mgr->mIsBroken == 1) {
		transit(mgr, CARDERROR_SerialNoError, nullptr);
	}
}

/*
 * --INFO--
 * Address:	803D256C
 * Size:	000034
 */
void FSMState_NoCard::do_init(TMgr* mgr, Game::StateArg*)
{
	mIsClosed = false;
	do_open(mgr);
}

/*
 * --INFO--
 * Address:	803D25A0
 * Size:	0000B0
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

/*
 * --INFO--
 * Address:	803D2650
 * Size:	000094
 */
TMgr::TMgr()
    : mCounter(0)
    , _29C(0)
{
	mStateMachine.init(this);
	mStateMachine.start(this, CARDERROR_Standby, nullptr);
}

} // namespace CardError

namespace Screen {

/*
 * --INFO--
 * Address:	803D2718
 * Size:	000460
 */
TMemoryCard::~TMemoryCard() { }

/*
 * --INFO--
 * Address:	803D2B78
 * Size:	0004C8
 */
TMemoryCard::TMemoryCard()
    : mState(0)
    , mInputDelay(0)
    , _0C(0)
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

/*
 * --INFO--
 * Address:	803D3040
 * Size:	000378
 */
void TMgr::startSeq(enumStart id)
{
	mEndStat = 0;
	P2ASSERTBOUNDSLINE(412, 0, id, 17);
	switch (id) {
	case Start_NoCard:
		mIsBroken = 0;
		mStateMachine.start(this, CARDERROR_NoCard, nullptr);
		break;
	case Start_IOError:
		mIsBroken = 0;
		mStateMachine.start(this, CARDERROR_IOError, nullptr);
		break;
	case Start_WrongDevice:
		mIsBroken = 0;
		mStateMachine.start(this, CARDERROR_WrongDevice, nullptr);
		break;
	case Start_WrongSector:
		mIsBroken = 0;
		mStateMachine.start(this, CARDERROR_WrongSector, nullptr);
		break;
	case Start_DataBrokenAndDoYouFormat:
		mIsBroken = 0;
		mStateMachine.start(this, CARDERROR_DataBrokenAndDoYouFormat, nullptr);
		break;
	case Start_OverCapacity:
		mIsBroken = 0;
		mStateMachine.start(this, CARDERROR_OverCapacity, nullptr);
		break;
	case Start_DoYouCreateNewFile:
		mIsBroken = 0;
		mStateMachine.start(this, CARDERROR_DoYouCreateNewFile, nullptr);
		break;
	case Start_NoCard2:
		mIsBroken = 1;
		mStateMachine.start(this, CARDERROR_NoCard, nullptr);
		break;
	case Start_IOError2:
		mIsBroken = 1;
		mStateMachine.start(this, CARDERROR_IOError, nullptr);
		break;
	case Start_WrongDevice2:
		mIsBroken = 1;
		mStateMachine.start(this, CARDERROR_WrongDevice, nullptr);
		break;
	case Start_WrongSector2:
		mIsBroken = 1;
		mStateMachine.start(this, CARDERROR_WrongSector, nullptr);
		break;
	case Start_DataBrokenAndDoYouFormat2:
		mIsBroken = 1;
		mStateMachine.start(this, CARDERROR_DataBrokenAndDoYouFormat, nullptr);
		break;
	case Start_OverCapacity2:
		mIsBroken = 1;
		mStateMachine.start(this, CARDERROR_OverCapacity, nullptr);
		break;
	case Start_DoYouCreateNewFile2:
		mIsBroken = 1;
		mStateMachine.start(this, CARDERROR_DoYouCreateNewFile, nullptr);
		break;
	case Start_SerialNoError:
		mIsBroken = 1;
		mStateMachine.start(this, CARDERROR_SerialNoError, nullptr);
		break;
	case Start_FailToSave_NoCard:
		mIsBroken = 1;
		mStateMachine.start(this, CARDERROR_FailToSave_NoCard, nullptr);
		break;
	case Start_FailToSave_IOError:
		mIsBroken = 1;
		mStateMachine.start(this, CARDERROR_FailToSave_IOError, nullptr);
		break;
	}
}

/*
 * --INFO--
 * Address:	803D33B8
 * Size:	000050
 */
void TMgr::forceQuitSeq()
{
	mStateMachine.start(this, CARDERROR_Standby, nullptr);
	mScreen.killScreen();
}

/*
 * --INFO--
 * Address:	803D3408
 * Size:	000044
 */
void TMgr::goEnd_(enumEnd end)
{
	mEndStat = end;
	mStateMachine.transit(this, CARDERROR_EmptyScreen, nullptr);
}

/*
 * --INFO--
 * Address:	803D344C
 * Size:	0000E0
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
		if (mIsBroken == 0) {
			mStateMachine.transit(this, CARDERROR_NoCard, nullptr);
		} else if (mIsBroken == 1) {
			mStateMachine.transit(this, CARDERROR_NoCard, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	803D352C
 * Size:	00006C
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

/*
 * --INFO--
 * Address:	803D3598
 * Size:	00003C
 */
void TMgr::draw()
{
	if (getStateID() != CARDERROR_Standby) {
		mScreen.draw();
	}
}

/*
 * --INFO--
 * Address:	803D35D4
 * Size:	000050
 */
bool TMgr::isGetEnd()
{
	if ((getStateID() == CARDERROR_Standby) || (getStateID() == CARDERROR_EmptyScreen)) {
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
bool TMgr::isFinish()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void TMgr::showInfo(long, long, long, long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803D3624
 * Size:	000058
 */
int TMgr::getStateID()
{
	P2ASSERTLINE(760, mCurrentState);
	return mCurrentState->mId;
}

} // namespace CardError
} // namespace ebi
