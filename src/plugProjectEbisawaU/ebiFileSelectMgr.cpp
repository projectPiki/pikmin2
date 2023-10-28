#include "ebi/FileSelect.h"
#include "System.h"
#include "Game/MemoryCard/Mgr.h"
#include "MemoryCardMgr.h"

static const char name[] = "ebiFileSelectMgr";

namespace ebi {
namespace FileSelect {

TMgr* TMgr::msInstance;

/*
 * --INFO--
 * Address:	803E12E0
 * Size:	000248
 */
void FSMStateMachine::init(TMgr* mgr)
{
	create(FSStateCount);
	registerState(new FSMState(FSSTATE_Standby, "Standby"));
	registerState(new FSMState_EmptyUpdate);
	registerState(new FSMState_MountCheck);
	registerState(new FSMState_GetPlayerHeader);
	registerState(new FSMState_CardError);
	registerState(new FSMState_ScreenFileSelect);
}

/*
 * --INFO--
 * Address:	803E1528
 * Size:	00002C
 */
void FSMState::init(TMgr* mgr, Game::StateArg* arg) { do_init(mgr, arg); }

/*
 * --INFO--
 * Address:	803E1554
 * Size:	000004
 */
void FSMState::do_init(TMgr*, Game::StateArg*) { }

/*
 * --INFO--
 * Address:	803E1558
 * Size:	00002C
 */
void FSMState::exec(TMgr* mgr) { do_exec(mgr); }

/*
 * --INFO--
 * Address:	803E1584
 * Size:	000004
 */
void FSMState::do_exec(TMgr*) { }

/*
 * --INFO--
 * Address:	803E1588
 * Size:	000010
 */
void FSMState_EmptyUpdate::do_init(TMgr* mgr, Game::StateArg* arg)
{
	mCounter = 2;
	_14      = 2;
}

/*
 * --INFO--
 * Address:	803E1598
 * Size:	000054
 */
void FSMState_EmptyUpdate::do_exec(TMgr* mgr)
{
	if (mCounter) {
		mCounter--;
	}
	if (!mCounter) {
		transit(mgr, FSSTATE_MountCheck, nullptr);
	}
}

/*
 * --INFO--
 * Address:	803E161C
 * Size:	00000C
 */
void FSMState_CardRequest::do_init(TMgr* mgr, Game::StateArg* arg) { mState = 0; }

/*
 * --INFO--
 * Address:	803E1628
 * Size:	000278
 */
void FSMState_CardRequest::do_exec(TMgr* mgr)
{
	switch (mState) {
	case 0:
		bool check2 = (!sys->mCardMgr->mIsCard) && (sys->mCardMgr->checkStatus() != 11);
		if (check2) {
			P2ASSERTLINE(90, do_cardRequest(mgr));
			mState = 1;
		}
		break;
	case 1:
		bool check3 = (!sys->mCardMgr->mIsCard) && (sys->mCardMgr->checkStatus() != 11);
		if (check3) {
			mCardStatus = (int)static_cast<Game::MemoryCard::Mgr*>(sys->mCardMgr)->getCardStatus();
			static_cast<Game::MemoryCard::Mgr*>(sys->mCardMgr)->getCardStatus();
			mState = 2;
		}
		break;
	case 2:
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
		case Game::MemoryCard::Mgr::MCS_13:
			do_transitCardPlayerDataBroken(mgr);
			break;
		default:
			JUT_PANICLINE(150, "※メモリーカードエラー:想定外のケースです\n");
			JUT_PANICLINE(151, "P2Assert");
			break;
		}
	}
}

/*
 * --INFO--
 * Address:	803E18A0
 * Size:	00003C
 */
void FSMState_CardRequest::do_transitCardNoCard(TMgr* mgr)
{
	CardErrorStateArg arg;
	arg._00 = CardError::TMgr::Start_NoCard;
	transit(mgr, FSSTATE_CardError, &arg);
}

/*
 * --INFO--
 * Address:	803E18DC
 * Size:	00003C
 */
void FSMState_CardRequest::do_transitCardIOError(TMgr* mgr)
{
	CardErrorStateArg arg;
	arg._00 = CardError::TMgr::Start_IOError;
	transit(mgr, FSSTATE_CardError, &arg);
}

/*
 * --INFO--
 * Address:	803E1918
 * Size:	00003C
 */
void FSMState_CardRequest::do_transitCardWrongDevice(TMgr* mgr)
{
	CardErrorStateArg arg;
	arg._00 = CardError::TMgr::Start_WrongDevice;
	transit(mgr, FSSTATE_CardError, &arg);
}

/*
 * --INFO--
 * Address:	803E1954
 * Size:	00003C
 */
void FSMState_CardRequest::do_transitCardWrongSector(TMgr* mgr)
{
	CardErrorStateArg arg;
	arg._00 = CardError::TMgr::Start_WrongSector;
	transit(mgr, FSSTATE_CardError, &arg);
}

/*
 * --INFO--
 * Address:	803E1990
 * Size:	00003C
 */
void FSMState_CardRequest::do_transitCardBroken(TMgr* mgr)
{
	CardErrorStateArg arg;
	arg._00 = CardError::TMgr::Start_DataBrokenAndDoYouFormat;
	transit(mgr, FSSTATE_CardError, &arg);
}

/*
 * --INFO--
 * Address:	803E19CC
 * Size:	00003C
 */
void FSMState_CardRequest::do_transitCardEncoding(TMgr* mgr)
{
	CardErrorStateArg arg;
	arg._00 = CardError::TMgr::Start_DataBrokenAndDoYouFormat;
	transit(mgr, FSSTATE_CardError, &arg);
}

/*
 * --INFO--
 * Address:	803E1A08
 * Size:	00003C
 */
void FSMState_CardRequest::do_transitCardNoFileSpace(TMgr* mgr)
{
	CardErrorStateArg arg;
	arg._00 = CardError::TMgr::Start_OverCapacity;
	transit(mgr, FSSTATE_CardError, &arg);
}

/*
 * --INFO--
 * Address:	803E1A44
 * Size:	00003C
 */
void FSMState_CardRequest::do_transitCardNoFileEntry(TMgr* mgr)
{
	CardErrorStateArg arg;
	arg._00 = CardError::TMgr::Start_OverCapacity;
	transit(mgr, FSSTATE_CardError, &arg);
}

/*
 * --INFO--
 * Address:	803E1A80
 * Size:	00003C
 */
void FSMState_CardRequest::do_transitCardFileOpenError(TMgr* mgr)
{
	CardErrorStateArg arg;
	arg._00 = CardError::TMgr::Start_DoYouCreateNewFile;
	transit(mgr, FSSTATE_CardError, &arg);
}

/*
 * --INFO--
 * Address:	803E1ABC
 * Size:	00002C
 */
void FSMState_CardRequest::do_transitCardPlayerDataBroken(TMgr* mgr) { do_transitCardReady(mgr); }

/*
 * --INFO--
 * Address:	803E1AE8
 * Size:	000054
 */
void FSMState_CardRequest::do_transitCardSerialNoError(TMgr* mgr)
{
	JUT_PANICLINE(224, "※ロードでシリアルエラーはありえない\n"); // * There is no serial error during loading
	JUT_PANICLINE(225, "P2Assert");
}

/*
 * --INFO--
 * Address:	803E1B3C
 * Size:	000028
 */
bool FSMState_MountCheck::do_cardRequest(TMgr* mgr) { return static_cast<Game::MemoryCard::Mgr*>(sys->mCardMgr)->resetError(); }

/*
 * --INFO--
 * Address:	803E1B64
 * Size:	000034
 */
void FSMState_MountCheck::do_transitCardReady(TMgr* mgr) { transit(mgr, FSState_GetPlayerHeader, nullptr); }

/*
 * --INFO--
 * Address:	803E1B98
 * Size:	00002C
 */
bool FSMState_GetPlayerHeader::do_cardRequest(TMgr* mgr)
{
	return static_cast<Game::MemoryCard::Mgr*>(sys->mCardMgr)->getPlayerHeader(&mgr->mPlayer);
}

/*
 * --INFO--
 * Address:	803E1BC4
 * Size:	000034
 */
void FSMState_GetPlayerHeader::do_transitCardReady(TMgr* mgr) { transit(mgr, FSState_ScreenFileSelect, nullptr); }

/*
 * --INFO--
 * Address:	803E1BF8
 * Size:	000038
 */
void FSMState_GetPlayerHeader::do_transitCardSerialNoError(TMgr* mgr) { JUT_PANICLINE(261, "P2Assert"); }

/*
 * --INFO--
 * Address:	803E1C30
 * Size:	000044
 */
void FSMState_ScreenFileSelect::do_init(TMgr* mgr, Game::StateArg* arg)
{
	mgr->mMgrFS.perseInfo(mgr->mPlayer);
	mgr->mMgrFS.startSeq();
	mgr->mCardErrorMgr.forceQuitSeq();
}

/*
 * --INFO--
 * Address:	803E1C74
 * Size:	0000C4
 */
void FSMState_ScreenFileSelect::do_exec(TMgr* mgr)
{
	if (mgr->mMgrFS.isFinish()) {
		switch (mgr->mMgrFS.mEndStat) {
		case 1:
		case 2:
			transit(mgr, FSSTATE_MountCheck, nullptr);
			break;
		case 3:
			mgr->goEnd_(TMgr::End_2);
			break;
		case 4:
			mgr->goEnd_(TMgr::End_1);
			break;
		case 5:
			mgr->goEnd_(TMgr::End_3);
			break;
		}
	}
}

/*
 * --INFO--
 * Address:	803E1D38
 * Size:	000060
 */
void FSMState_CardError::do_init(TMgr* mgr, Game::StateArg* arg)
{
	CardErrorStateArg* carg = static_cast<CardErrorStateArg*>(arg);
	P2ASSERTLINE(319, arg);
	mgr->mCardErrorMgr.startSeq((CardError::TMgr::enumStart)carg->_00);
}

/*
 * --INFO--
 * Address:	803E1D98
 * Size:	0000B8
 */
void FSMState_CardError::do_exec(TMgr* mgr)
{
	if (mgr->mCardErrorMgr.isGetEnd()) {
		switch (mgr->mCardErrorMgr.mEndStat) {
		case 1:
			static_cast<Game::MemoryCard::Mgr*>(sys->mCardMgr)->loadPlayerForNoCard(0);
			mgr->goEnd_(TMgr::End_1);
			break;
		case 2:
			mgr->start();
			break;
		default:
			JUT_PANICLINE(342, "※　mgr->mCardErrorMgr->getEnd=%d ってありえない！\n", mgr->mCardErrorMgr.mEndStat);
			JUT_PANICLINE(343, "P2Assert");
		}
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C0
 */
TMgr::TMgr()
    : mCounter(0)
    , _F44(0)
{
	mFsm.init(this);
	mFsm.start(this, FSSTATE_Standby, 0);
	mInError = false;
}

#pragma dont_inline on
/*
 * --INFO--
 * Address:	803E1ED8
 * Size:	000084
 */
TMgr::~TMgr() { msInstance = nullptr; }
#pragma dont_inline reset

/*
 * --INFO--
 * Address:	803E1F5C
 * Size:	0000DC
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
void TMgr::deleteInstance() { delete msInstance; }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
TMgr* TMgr::getInstance() { return msInstance; }

/*
 * --INFO--
 * Address:	803E2038
 * Size:	000058
 */
void TMgr::onDvdErrorOccured()
{
	if (msInstance) {
		if (!msInstance->isFinish()) {
			msInstance->mInError = true;
			msInstance->forceQuit();
		} else {
			msInstance->mInError = false;
		}
	}
}

/*
 * --INFO--
 * Address:	803E2090
 * Size:	000044
 */
void TMgr::onDvdErrorRecovered()
{
	if (msInstance && msInstance->mInError) {
		msInstance->start();
		msInstance->mInError = false;
	}
}

/*
 * --INFO--
 * Address:	803E20D4
 * Size:	00004C
 */
void TMgr::start()
{
	_FE8   = true;
	mState = 0;
	mFsm.start(this, FSSTATE_EmptyUpdate, nullptr);
}

/*
 * --INFO--
 * Address:	803E2120
 * Size:	000058
 */
void TMgr::forceQuit()
{
	mFsm.start(this, FSSTATE_Standby, nullptr);
	mCardErrorMgr.forceQuitSeq();
	mMgrFS.forceQuitSeq();
}

/*
 * --INFO--
 * Address:	803E2178
 * Size:	00008C
 */
void TMgr::update()
{
	mFsm.exec(this);
	if (getStateID()) {
		sys->mCardMgr->update();
		mCardErrorMgr.update();
		mMgrFS.update();
		if (mCounter) {
			mCounter--;
		}
	}
}

/*
 * --INFO--
 * Address:	803E2204
 * Size:	000044
 */
void TMgr::draw()
{
	if (getStateID()) {
		mMgrFS.draw();
		mCardErrorMgr.draw();
	}
}

/*
 * --INFO--
 * Address:	803E2248
 * Size:	000004
 */
void TMgr::showInfo() { }

/*
 * --INFO--
 * Address:	803E224C
 * Size:	00004C
 */
bool TMgr::isFinish()
{
	if (!getStateID() && !mInError) {
		return true;
	} else {
		return false;
	}
}

/*
 * --INFO--
 * Address:	803E2298
 * Size:	00005C
 */
void TMgr::goEnd_(enumEnd end)
{
	mState = end;
	mFsm.transit(this, FSSTATE_Standby, nullptr);
	mMgrFS.forceQuitSeq();
	mCardErrorMgr.forceQuitSeq();
}

/*
 * --INFO--
 * Address:	803E22F4
 * Size:	000058
 */
int TMgr::getStateID()
{
	P2ASSERTLINE(534, mCurrentState);
	return mCurrentState->mId;
}

} // namespace FileSelect

} // namespace ebi
