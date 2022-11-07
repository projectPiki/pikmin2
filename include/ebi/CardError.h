#ifndef _EBI_CARDERROR_H
#define _EBI_CARDERROR_H

#include "types.h"
#include "ebi/Screen/TScreenBase.h"
#include "ebi/Screen/TMemoryCard.h"
#include "Game/StateMachine.h"

struct Controller;

namespace ebi {
namespace CardError {
struct TMgr;

struct FSMStateMachine : public Game::StateMachine<TMgr> {
	virtual void init(TMgr*); // _08

	// _00     = VTBL
	// _00-_1C = Game::StateMachine
};

////////////////////////////////////////////////////////////
// BASE STATES
struct FSMState : public Game::FSMState<TMgr> {
	inline FSMState(int stateID); // likely

	virtual void init(TMgr*, Game::StateArg*);    // _08 (weak)
	virtual void exec(TMgr*);                     // _0C (weak)
	virtual void do_init(TMgr*, Game::StateArg*); // _20 (weak)
	virtual void do_exec(TMgr*);                  // _24 (weak)

	// _00     = VTBL
	// _00-_0C = Game::FSMState
};

struct FSMState_NoCard : public FSMState {
	// could inherit from FSMState_Warning? unsure.
	inline FSMState_NoCard(); // likely

	virtual void do_init(TMgr*, Game::StateArg*); // _20
	virtual void do_exec(TMgr*);                  // _24
	virtual void do_open(TMgr*)          = 0;     // _28
	virtual void do_transit(TMgr*)       = 0;     // _2C
	virtual void do_transitOnCard(TMgr*) = 0;     // _30

	// _00     = VTBL
	// _00-_0C = FSMState
};

struct FSMState_CardRequest : public FSMState {
	inline FSMState_CardRequest(); // likely

	virtual void do_init(TMgr*, Game::StateArg*);    // _20
	virtual void do_exec(TMgr*);                     // _24
	virtual void do_open(TMgr*)             = 0;     // _28
	virtual void do_cardRequest()           = 0;     // _2C
	virtual void do_transitCardReady(TMgr*) = 0;     // _30
	virtual void do_transitCardNoCard(TMgr*);        // _34
	virtual void do_transitCardIOError(TMgr*);       // _38
	virtual void do_transitCardWrongDevice(TMgr*);   // _3C
	virtual void do_transitCardWrongSector(TMgr*);   // _40
	virtual void do_transitCardBroken(TMgr*);        // _44
	virtual void do_transitCardEncoding(TMgr*);      // _48
	virtual void do_transitCardNoFileSpace(TMgr*);   // _4C
	virtual void do_transitCardNoFileEntry(TMgr*);   // _50
	virtual void do_transitCardFileOpenError(TMgr*); // _54
	virtual void do_transitCardSerialNoError(TMgr*); // _58

	// _00     = VTBL
	// _00-_0C = FSMState
};

struct FSMState_Question : public FSMState {
	inline FSMState_Question(); // likely

	virtual void do_init(TMgr*, Game::StateArg*); // _20
	virtual void do_exec(TMgr*);                  // _24
	virtual void do_open(TMgr*)       = 0;        // _28
	virtual void do_transitYes(TMgr*) = 0;        // _2C
	virtual void do_transitNo(TMgr*)  = 0;        // _30

	// _00     = VTBL
	// _00-_0C = FSMState
};

struct FSMState_Warning : public FSMState {
	inline FSMState_Warning(); // likely

	virtual void do_init(TMgr*, Game::StateArg*); // _20
	virtual void do_exec(TMgr*);                  // _24
	virtual void do_open(TMgr*)    = 0;           // _28
	virtual void do_transit(TMgr*) = 0;           // _2C

	// _00     = VTBL
	// _00-_0C = FSMState
};
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
// QUESTION STATES
struct FSMState_Q00_DataBrokenAndDoYouFormat : public FSMState_Question {
	inline FSMState_Q00_DataBrokenAndDoYouFormat(); // likely

	virtual void do_open(TMgr*);       // _28
	virtual void do_transitYes(TMgr*); // _2C
	virtual void do_transitNo(TMgr*);  // _30

	// _00     = VTBL
	// _00-_0C = FSMState_Question
};

struct FSMState_Q01_DoYouOpenIPL : public FSMState_Question {
	inline FSMState_Q01_DoYouOpenIPL(); // likely

	virtual void do_open(TMgr*);       // _28
	virtual void do_transitYes(TMgr*); // _2C
	virtual void do_transitNo(TMgr*);  // _30

	// _00     = VTBL
	// _00-_0C = FSMState_Question
};

struct FSMState_Q02_DoYouFormat : public FSMState_Question {
	inline FSMState_Q02_DoYouFormat(); // likely

	virtual void do_open(TMgr*);       // _28
	virtual void do_transitYes(TMgr*); // _2C
	virtual void do_transitNo(TMgr*);  // _30

	// _00     = VTBL
	// _00-_0C = FSMState_Question
};

struct FSMState_Q03_DoYouCreateNewFile : public FSMState_Question {
	inline FSMState_Q03_DoYouCreateNewFile(); // likely

	virtual void do_open(TMgr*);       // _28
	virtual void do_transitYes(TMgr*); // _2C
	virtual void do_transitNo(TMgr*);  // _30

	// _00     = VTBL
	// _00-_0C = FSMState_Question
};

struct FSMState_Q04_DoYouStartGameWithoutSave : public FSMState_Question {
	inline FSMState_Q04_DoYouStartGameWithoutSave(); // likely

	virtual void do_open(TMgr*);       // _28
	virtual void do_transitYes(TMgr*); // _2C
	virtual void do_transitNo(TMgr*);  // _30

	// _00     = VTBL
	// _00-_0C = FSMState_Question
};

struct FSMState_Q05_GameCantSave : public FSMState_Question {
	inline FSMState_Q05_GameCantSave(); // likely

	virtual void do_open(TMgr*);       // _28
	virtual void do_transitYes(TMgr*); // _2C
	virtual void do_transitNo(TMgr*);  // _30

	// _00     = VTBL
	// _00-_0C = FSMState_Question
};
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
// WARNING STATES
struct FSMState_W00_NoCard : public FSMState_NoCard {
	inline FSMState_W00_NoCard(); // likely

	virtual void do_open(TMgr*);          // _28
	virtual void do_transit(TMgr*);       // _2C
	virtual void do_transitOnCard(TMgr*); // _30

	// _00     = VTBL
	// _00-_0C = FSMState_NoCard
};

struct FSMState_W01_IOError : public FSMState_Warning {
	inline FSMState_W01_IOError(); // likely

	virtual void do_open(TMgr*);    // _28
	virtual void do_transit(TMgr*); // _2C

	// _00     = VTBL
	// _00-_0C = FSMState_Warning
};

struct FSMState_W02_WrongDevice : public FSMState_Warning {
	inline FSMState_W02_WrongDevice(); // likely

	virtual void do_open(TMgr*);    // _28
	virtual void do_transit(TMgr*); // _2C

	// _00     = VTBL
	// _00-_0C = FSMState_Warning
};

struct FSMState_W03_WrongSector : public FSMState_Warning {
	inline FSMState_W03_WrongSector(); // likely

	virtual void do_open(TMgr*);    // _28
	virtual void do_transit(TMgr*); // _2C

	// _00     = VTBL
	// _00-_0C = FSMState_Warning
};

struct FSMState_W04_OverCapacity : public FSMState_Warning {
	inline FSMState_W04_OverCapacity(); // likely

	virtual void do_open(TMgr*);    // _28
	virtual void do_transit(TMgr*); // _2C

	// _00     = VTBL
	// _00-_0C = FSMState_Warning
};

struct FSMState_W05_InitCardOnIPL : public FSMState_Warning {
	inline FSMState_W05_InitCardOnIPL(); // likely

	virtual void do_open(TMgr*);    // _28
	virtual void do_transit(TMgr*); // _2C

	// _00     = VTBL
	// _00-_0C = FSMState_Warning
};

struct FSMState_W06_CardNotUsable : public FSMState_Warning {
	inline FSMState_W06_CardNotUsable(); // likely

	virtual void do_open(TMgr*);    // _28
	virtual void do_transit(TMgr*); // _2C

	// _00     = VTBL
	// _00-_0C = FSMState_Warning
};

struct FSMState_W07_NoFileForSave : public FSMState_Warning {
	inline FSMState_W07_NoFileForSave(); // likely

	virtual void do_open(TMgr*);    // _28
	virtual void do_transit(TMgr*); // _2C

	// _00     = VTBL
	// _00-_0C = FSMState_Warning
};

struct FSMState_W08_FinishFormat : public FSMState_Warning {
	inline FSMState_W08_FinishFormat(); // likely

	virtual void do_open(TMgr*);    // _28
	virtual void do_transit(TMgr*); // _2C

	// _00     = VTBL
	// _00-_0C = FSMState_Warning
};

struct FSMState_W09_FinishCreateNewFile : public FSMState_Warning {
	inline FSMState_W09_FinishCreateNewFile(); // likely

	virtual void do_open(TMgr*);    // _28
	virtual void do_transit(TMgr*); // _2C

	// _00     = VTBL
	// _00-_0C = FSMState_Warning
};

struct FSMState_W10_SerialNoError : public FSMState_Warning {
	inline FSMState_W10_SerialNoError(); // likely

	virtual void do_open(TMgr*);    // _28
	virtual void do_transit(TMgr*); // _2C

	// _00     = VTBL
	// _00-_0C = FSMState_Warning
};
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
// WARNING FAIL STATES
struct FSMState_WF0_FailToFormat_NoCard : public FSMState_Warning {
	inline FSMState_WF0_FailToFormat_NoCard(); // likely

	virtual void do_open(TMgr*);    // _28
	virtual void do_transit(TMgr*); // _2C

	// _00     = VTBL
	// _00-_0C = FSMState_Warning
};

struct FSMState_WF1_FailToFormat_IOError : public FSMState_Warning {
	inline FSMState_WF1_FailToFormat_IOError(); // likely

	virtual void do_open(TMgr*);    // _28
	virtual void do_transit(TMgr*); // _2C

	// _00     = VTBL
	// _00-_0C = FSMState_Warning
};

struct FSMState_WF2_FailToCreateNewFile_NoCard : public FSMState_Warning {
	inline FSMState_WF2_FailToCreateNewFile_NoCard(); // likely

	virtual void do_open(TMgr*);    // _28
	virtual void do_transit(TMgr*); // _2C

	// _00     = VTBL
	// _00-_0C = FSMState_Warning
};

struct FSMState_WF3_FailToCreateNewFile_IOError : public FSMState_Warning {
	inline FSMState_WF3_FailToCreateNewFile_IOError(); // likely

	virtual void do_open(TMgr*);    // _28
	virtual void do_transit(TMgr*); // _2C

	// _00     = VTBL
	// _00-_0C = FSMState_Warning
};

struct FSMState_WF4_FailToSave_NoCard : public FSMState_Warning {
	inline FSMState_WF4_FailToSave_NoCard(); // likely

	virtual void do_open(TMgr*);    // _28
	virtual void do_transit(TMgr*); // _2C

	// _00     = VTBL
	// _00-_0C = FSMState_Warning
};

struct FSMState_WF5_FailToSave_IOError : public FSMState_Warning {
	inline FSMState_WF5_FailToSave_IOError(); // likely

	virtual void do_open(TMgr*);    // _28
	virtual void do_transit(TMgr*); // _2C

	// _00     = VTBL
	// _00-_0C = FSMState_Warning
};
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
// CARD REQUEST STATES
struct FSMState_WN0_NowFormat : public FSMState_CardRequest {
	inline FSMState_WN0_NowFormat(); // likely

	virtual void do_open(TMgr*);               // _28
	virtual void do_cardRequest();             // _2C
	virtual void do_transitCardReady(TMgr*);   // _30
	virtual void do_transitCardNoCard(TMgr*);  // _34
	virtual void do_transitCardIOError(TMgr*); // _38

	// _00     = VTBL
	// _00-_0C = FSMState_CardRequest
};

struct FSMState_WN1_NowCreateNewFile : public FSMState_CardRequest {
	inline FSMState_WN1_NowCreateNewFile(); // likely

	virtual void do_open(TMgr*);               // _28
	virtual void do_cardRequest();             // _2C
	virtual void do_transitCardReady(TMgr*);   // _30
	virtual void do_transitCardNoCard(TMgr*);  // _34
	virtual void do_transitCardIOError(TMgr*); // _38

	// _00     = VTBL
	// _00-_0C = FSMState_CardRequest
};
////////////////////////////////////////////////////////////

struct TMgr : Screen::TMemoryCard {
	enum enumStart {

	};

	TMgr();

	// _00-_298 = TMemoryCard
	u8 _298[0x8];                   // _298, unknown
	u32 _2A0;                       // _2A0, unknown
	int _2A4;                       // _2A4
	FSMStateMachine m_stateMachine; // _2A8
	u32 _2C4;                       // _2C4, unknown
};
} // namespace CardError
} // namespace ebi

#endif
