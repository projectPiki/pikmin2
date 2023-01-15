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
	create(6);
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
	m_counter = 2;
	_14       = 2;
}

/*
 * --INFO--
 * Address:	803E1598
 * Size:	000054
 */
void FSMState_EmptyUpdate::do_exec(TMgr* mgr)
{
	if (m_counter) {
		m_counter--;
	}
	if (!m_counter) {
		transit(mgr, FSSTATE_MountCheck, nullptr);
	}
}

/*
 * --INFO--
 * Address:	803E161C
 * Size:	00000C
 */
void FSMState_CardRequest::do_init(TMgr* mgr, Game::StateArg* arg) { m_state = 0; }

/*
 * --INFO--
 * Address:	803E1628
 * Size:	000278
 */
void FSMState_CardRequest::do_exec(TMgr* mgr)
{
	switch (m_state) {
	case 0:
		bool check2 = (!sys->m_cardMgr->_A8) && (sys->m_cardMgr->checkStatus() != 11);
		if (check2) {
			P2ASSERTLINE(90, do_cardRequest(mgr));
			m_state = 1;
		}
		break;
	case 1:
		bool check3 = (!sys->m_cardMgr->_A8) && (sys->m_cardMgr->checkStatus() != 11);
		if (check3) {
			m_cardStatus = (int)static_cast<Game::MemoryCard::Mgr*>(sys->m_cardMgr)->getCardStatus();
			static_cast<Game::MemoryCard::Mgr*>(sys->m_cardMgr)->getCardStatus();
			m_state = 2;
		}
		break;
	case 2:
		switch (m_cardStatus) {
		case Game::MemoryCard::Mgr::MCS_Ready:
			do_transitCardReady(mgr);
			break;
		case Game::MemoryCard::Mgr::MCS_NoCard:
			do_transitCardNoCard(mgr);
			break;
		case Game::MemoryCard::Mgr::MCS_IOError:
			do_transitCardIOError(mgr);
			break;
		case Game::MemoryCard::Mgr::MCS_WrongDevice:
			do_transitCardWrongDevice(mgr);
			break;
		case Game::MemoryCard::Mgr::MCS_WrongSector:
			do_transitCardWrongSector(mgr);
			break;
		case Game::MemoryCard::Mgr::MCS_Broken:
			do_transitCardBroken(mgr);
			break;
		case Game::MemoryCard::Mgr::MCS_Encoding:
			do_transitCardEncoding(mgr);
			break;
		case Game::MemoryCard::Mgr::MCS_NoFileSpace:
			do_transitCardNoFileSpace(mgr);
			break;
		case Game::MemoryCard::Mgr::MCS_NoFileEntry:
			do_transitCardNoFileEntry(mgr);
			break;
		case Game::MemoryCard::Mgr::MCS_FileOpenError:
			do_transitCardFileOpenError(mgr);
			break;
		case Game::MemoryCard::Mgr::MCS_SerialNoError:
			do_transitCardSerialNoError(mgr);
			break;
		case Game::MemoryCard::Mgr::MCS_PlayerDataBroken:
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
bool FSMState_MountCheck::do_cardRequest(TMgr* mgr) { return static_cast<Game::MemoryCard::Mgr*>(sys->m_cardMgr)->resetError(); }

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
	return static_cast<Game::MemoryCard::Mgr*>(sys->m_cardMgr)->getPlayerHeader(&mgr->m_player);
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
	mgr->m_mgrFS.perseInfo(mgr->m_player);
	mgr->m_mgrFS.startSeq();
	mgr->m_cardErrorMgr.forceQuitSeq();
}

/*
 * --INFO--
 * Address:	803E1C74
 * Size:	0000C4
 */
void FSMState_ScreenFileSelect::do_exec(TMgr* mgr)
{
	if (mgr->m_mgrFS.isFinish()) {
		switch (mgr->m_mgrFS._C38) {
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
	mgr->m_cardErrorMgr.startSeq((CardError::TMgr::enumStart)carg->_00);
}

/*
 * --INFO--
 * Address:	803E1D98
 * Size:	0000B8
 */
void FSMState_CardError::do_exec(TMgr* mgr)
{
	if (mgr->m_cardErrorMgr.isGetEnd()) {
		switch (mgr->m_cardErrorMgr.m_endStat) {
		case 1:
			static_cast<Game::MemoryCard::Mgr*>(sys->m_cardMgr)->loadPlayerForNoCard(0);
			mgr->goEnd_(TMgr::End_1);
			break;
		case 2:
			mgr->start();
			break;
		default:
			JUT_PANICLINE(342, "※ mgr->mCardErrorMgr->getEnd=%d ってありえない！\n", mgr->m_cardErrorMgr.m_endStat);
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
    : m_counter(0)
    , _F44(0)
{
	m_fsm.init(this);
	m_fsm.start(this, FSSTATE_Standby, 0);
	m_inError = false;
}

/*
 * --INFO--
 * Address:	803E1E50
 * Size:	000034
 */
void Game::StateMachine<ebi::FileSelect::TMgr>::start(ebi::FileSelect::TMgr* mgr, int stateID, Game::StateArg* stateArg)
{
	mgr->m_currentState = nullptr;
	transit(mgr, stateID, stateArg);
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
			msInstance->m_inError = true;
			msInstance->forceQuit();
		} else {
			msInstance->m_inError = false;
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
	if (msInstance && msInstance->m_inError) {
		msInstance->start();
		msInstance->m_inError = false;
	}
}

/*
 * --INFO--
 * Address:	803E20D4
 * Size:	00004C
 */
void TMgr::start()
{
	_FE8    = true;
	m_state = 0;
	m_fsm.start(this, FSSTATE_EmptyUpdate, nullptr);
}

/*
 * --INFO--
 * Address:	803E2120
 * Size:	000058
 */
void TMgr::forceQuit()
{
	m_fsm.start(this, FSSTATE_Standby, nullptr);
	m_cardErrorMgr.forceQuitSeq();
	m_mgrFS.forceQuitSeq();
}

/*
 * --INFO--
 * Address:	803E2178
 * Size:	00008C
 */
void TMgr::update()
{
	m_fsm.exec(this);
	if (getStateID()) {
		sys->m_cardMgr->update();
		m_cardErrorMgr.update();
		m_mgrFS.update();
		if (m_counter) {
			m_counter--;
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
		m_mgrFS.draw();
		m_cardErrorMgr.draw();
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
	if (!getStateID() && !m_inError) {
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
	m_state = end;
	m_fsm.transit(this, FSSTATE_Standby, nullptr);
	m_mgrFS.forceQuitSeq();
	m_cardErrorMgr.forceQuitSeq();
}

/*
 * --INFO--
 * Address:	803E22F4
 * Size:	000058
 */
int TMgr::getStateID()
{
	P2ASSERTLINE(534, m_currentState);
	return m_currentState->m_id;
}

/*
 * --INFO--
 * Address:	803E234C
 * Size:	000004
 */
void Game::FSMState<ebi::FileSelect::TMgr>::init(ebi::FileSelect::TMgr*, Game::StateArg*) { }

/*
 * --INFO--
 * Address:	803E2350
 * Size:	000004
 */
void Game::FSMState<ebi::FileSelect::TMgr>::exec(ebi::FileSelect::TMgr*) { }

/*
 * --INFO--
 * Address:	803E2354
 * Size:	000004
 */
void Game::FSMState<ebi::FileSelect::TMgr>::cleanup(ebi::FileSelect::TMgr*) { }

/*
 * --INFO--
 * Address:	803E2358
 * Size:	000004
 */
void Game::FSMState<ebi::FileSelect::TMgr>::resume(ebi::FileSelect::TMgr*) { }

/*
 * --INFO--
 * Address:	803E235C
 * Size:	000004
 */
void Game::FSMState<ebi::FileSelect::TMgr>::restart(ebi::FileSelect::TMgr*) { }

/*
 * --INFO--
 * Address:	803E2360
 * Size:	000004
 */
void Game::StateMachine<ebi::FileSelect::TMgr>::init(ebi::FileSelect::TMgr*) { }

/*
 * --INFO--
 * Address:	803E2364
 * Size:	000038
 */
void Game::StateMachine<ebi::FileSelect::TMgr>::exec(ebi::FileSelect::TMgr* mgr)
{
	if (mgr->m_currentState) {
		mgr->m_currentState->exec(mgr);
	}
}

/*
 * --INFO--
 * Address:	803E239C
 * Size:	000064
 */
void Game::StateMachine<ebi::FileSelect::TMgr>::create(int count)
{
	m_limit          = count;
	m_count          = 0;
	m_states         = new FSMState<ebi::FileSelect::TMgr>*[m_limit];
	m_indexToIDArray = new int[m_limit];
	m_idToIndexArray = new int[m_limit];
}

/*
 * --INFO--
 * Address:	803E2400
 * Size:	00009C
 */
void Game::StateMachine<ebi::FileSelect::TMgr>::transit(ebi::FileSelect::TMgr* mgr, int stateID, Game::StateArg* stateArg)
{
	int index                        = m_idToIndexArray[stateID];
	ebi::FileSelect::FSMState* state = mgr->m_currentState;
	if (state) {
		state->cleanup(mgr);
		m_currentID = state->m_id;
	}

	ASSERT_HANG(index < m_limit);

	state               = static_cast<ebi::FileSelect::FSMState*>(m_states[index]);
	mgr->m_currentState = state;
	state->init(mgr, stateArg);
}

/*
 * --INFO--
 * Address:	803E249C
 * Size:	000084
 */
void Game::StateMachine<ebi::FileSelect::TMgr>::registerState(Game::FSMState<ebi::FileSelect::TMgr>* newState)
{
	bool check;
	if (m_count >= m_limit) {
		return;
	}
	m_states[m_count] = newState;

	if (!(0 <= newState->m_id && newState->m_id < m_limit)) {
		check = false;
	} else {
		check = true;
	}
	if (check == false) {
		return;
	}
	newState->m_stateMachine         = this;
	m_indexToIDArray[m_count]        = newState->m_id;
	m_idToIndexArray[newState->m_id] = m_count;
	m_count++;
}

} // namespace FileSelect

} // namespace ebi
