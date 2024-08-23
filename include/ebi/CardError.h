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

enum StateID {
	CARDERROR_Standby,                     // 0
	CARDERROR_EmptyScreen,                 // 1
	CARDERROR_NoCard,                      // 2
	CARDERROR_IOError,                     // 3
	CARDERROR_WrongDevice,                 // 4
	CARDERROR_WrongSector,                 // 5
	CARDERROR_OverCapacity,                // 6
	CARDERROR_InitCardOnIPL,               // 7
	CARDERROR_CardNotUsable,               // 8
	CARDERROR_NoFileForSave,               // 9
	CARDERROR_FinishFormat,                // 10
	CARDERROR_FinishCreateNewFile,         // 11
	CARDERROR_SerialNoError,               // 12
	CARDERROR_FailToFormat_NoCard,         // 13
	CARDERROR_FailToFormat_IOError,        // 14
	CARDERROR_FailToCreateNewFile_NoCard,  // 15
	CARDERROR_FailToCreateNewFile_IOError, // 16
	CARDERROR_FailToSave_NoCard,           // 17
	CARDERROR_FailToSave_IOError,          // 18
	CARDERROR_DataBrokenAndDoYouFormat,    // 19
	CARDERROR_DoYouOpenIPL,                // 20
	CARDERROR_DoYouFormat,                 // 21
	CARDERROR_DoYouCreateNewFile,          // 22
	CARDERROR_DoYouStartGameWithoutSave,   // 23
	CARDERROR_GameCantSave,                // 24
	CARDERROR_NowFormat,                   // 25
	CARDERROR_NowCreateNewFile,            // 26
	CARDERROR_StateCount                   // 27 (NOT A REAL STATE)
};

struct FSMStateMachine : public Game::StateMachine<TMgr> {
	virtual void init(TMgr*); // _08

	// _00     = VTBL
	// _00-_1C = Game::StateMachine
};

////////////////////////////////////////////////////////////
// BASE STATES
struct FSMState : public Game::FSMState<TMgr> {
	inline FSMState(int stateID, char* name)
	    : Game::FSMState<TMgr>(stateID)
	{
		mName = name;
	}

	virtual void init(TMgr* mgr, Game::StateArg* settings); // _08
	virtual void exec(TMgr* mgr);                           // _0C
	virtual void do_init(TMgr*, Game::StateArg*) { }        // _20 (weak)
	virtual void do_exec(TMgr*) { }                         // _24 (weak)

	// _00     = VTBL
	// _00-_0C = Game::FSMState
	char* mName;
};

struct FSMState_NoCard : public FSMState {
	FSMState_NoCard(int id, char* name)
	    : FSMState(id, name)
	{
	}

	virtual void do_init(TMgr*, Game::StateArg*); // _20
	virtual void do_exec(TMgr*);                  // _24
	virtual void do_open(TMgr*)          = 0;     // _28
	virtual void do_transit(TMgr*)       = 0;     // _2C
	virtual void do_transitOnCard(TMgr*) = 0;     // _30

	// _00     = VTBL
	// _00-_10 = FSMState
	bool mIsClosed;
};

struct FSMState_CardRequest : public FSMState {
	FSMState_CardRequest(int id, char* name)
	    : FSMState(id, name)
	{
	}

	virtual void do_init(TMgr*, Game::StateArg*);    // _20
	virtual void do_exec(TMgr*);                     // _24
	virtual void do_open(TMgr*)             = 0;     // _28
	virtual bool do_cardRequest()           = 0;     // _2C
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
	// _00-_10 = FSMState
	int mState;
	int mCardStatus;
};

struct FSMState_Question : public FSMState {
	inline FSMState_Question(int id, char* name)
	    : FSMState(id, name)
	{
	}

	virtual void do_init(TMgr*, Game::StateArg*); // _20
	virtual void do_exec(TMgr*);                  // _24
	virtual void do_open(TMgr*)       = 0;        // _28
	virtual void do_transitYes(TMgr*) = 0;        // _2C
	virtual void do_transitNo(TMgr*)  = 0;        // _30

	// _00     = VTBL
	// _00-_10 = FSMState
	bool mDoCheckCard;
};

struct FSMState_Warning : public FSMState {
	inline FSMState_Warning(int id, char* name)
	    : FSMState(id, name)
	{
	}

	virtual void do_init(TMgr*, Game::StateArg*); // _20
	virtual void do_exec(TMgr*);                  // _24
	virtual void do_open(TMgr*)    = 0;           // _28
	virtual void do_transit(TMgr*) = 0;           // _2C

	// _00     = VTBL
	// _00-_10 = FSMState
	bool mCanClose;    // _10
	bool mIsClosed;    // _11
	bool mDoCheckCard; // _12
};
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
// QUESTION STATES
struct FSMState_Q00_DataBrokenAndDoYouFormat : public FSMState_Question {
	inline FSMState_Q00_DataBrokenAndDoYouFormat()
	    : FSMState_Question(CARDERROR_DataBrokenAndDoYouFormat, "Q00_DataBrokenAndDoYouFormat")
	{
	}

	virtual void do_open(TMgr*);       // _28
	virtual void do_transitYes(TMgr*); // _2C
	virtual void do_transitNo(TMgr*);  // _30

	// _00     = VTBL
	// _00-_0C = FSMState_Question
};

struct FSMState_Q01_DoYouOpenIPL : public FSMState_Question {
	inline FSMState_Q01_DoYouOpenIPL()
	    : FSMState_Question(CARDERROR_DoYouOpenIPL, "FSMState_Q01_DoYouOpenIPL")
	{
	}

	virtual void do_open(TMgr*);       // _28
	virtual void do_transitYes(TMgr*); // _2C
	virtual void do_transitNo(TMgr*);  // _30

	// _00     = VTBL
	// _00-_0C = FSMState_Question
};

struct FSMState_Q02_DoYouFormat : public FSMState_Question {
	inline FSMState_Q02_DoYouFormat()
	    : FSMState_Question(CARDERROR_DoYouFormat, "Q02_DoYouFormat")
	{
	}

	virtual void do_open(TMgr*);       // _28
	virtual void do_transitYes(TMgr*); // _2C
	virtual void do_transitNo(TMgr*);  // _30

	// _00     = VTBL
	// _00-_0C = FSMState_Question
};

struct FSMState_Q03_DoYouCreateNewFile : public FSMState_Question {
	inline FSMState_Q03_DoYouCreateNewFile()
	    : FSMState_Question(CARDERROR_DoYouCreateNewFile, "Q03_DoYouCreateNewFile")
	{
	}

	virtual void do_open(TMgr*);       // _28
	virtual void do_transitYes(TMgr*); // _2C
	virtual void do_transitNo(TMgr*);  // _30

	// _00     = VTBL
	// _00-_0C = FSMState_Question
};

struct FSMState_Q04_DoYouStartGameWithoutSave : public FSMState_Question {
	inline FSMState_Q04_DoYouStartGameWithoutSave()
	    : FSMState_Question(CARDERROR_DoYouStartGameWithoutSave, "Q04_DoYouStartGameWithoutSave")
	{
	}

	virtual void do_open(TMgr*);       // _28
	virtual void do_transitYes(TMgr*); // _2C
	virtual void do_transitNo(TMgr*);  // _30

	// _00     = VTBL
	// _00-_0C = FSMState_Question
};

struct FSMState_Q05_GameCantSave : public FSMState_Question {
	inline FSMState_Q05_GameCantSave()
	    : FSMState_Question(CARDERROR_GameCantSave, "Q05_GameCantSave")
	{
	}

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
	inline FSMState_W00_NoCard()
	    : FSMState_NoCard(CARDERROR_NoCard, "W00_NoCard")
	{
	}

	virtual void do_open(TMgr*);          // _28
	virtual void do_transit(TMgr*);       // _2C
	virtual void do_transitOnCard(TMgr*); // _30

	// _00     = VTBL
	// _00-_0C = FSMState_NoCard
};

struct FSMState_W01_IOError : public FSMState_Warning {
	inline FSMState_W01_IOError()
	    : FSMState_Warning(CARDERROR_IOError, "W01_IOError")
	{
	}

	virtual void do_open(TMgr*);    // _28
	virtual void do_transit(TMgr*); // _2C

	// _00     = VTBL
	// _00-_0C = FSMState_Warning
};

struct FSMState_W02_WrongDevice : public FSMState_Warning {
	inline FSMState_W02_WrongDevice()
	    : FSMState_Warning(CARDERROR_WrongDevice, "W02_WrongDevice")
	{
	}

	virtual void do_open(TMgr*);    // _28
	virtual void do_transit(TMgr*); // _2C

	// _00     = VTBL
	// _00-_0C = FSMState_Warning
};

struct FSMState_W03_WrongSector : public FSMState_Warning {
	inline FSMState_W03_WrongSector()
	    : FSMState_Warning(CARDERROR_WrongSector, "W03_WrongSector")
	{
	}

	virtual void do_open(TMgr*);    // _28
	virtual void do_transit(TMgr*); // _2C

	// _00     = VTBL
	// _00-_0C = FSMState_Warning
};

struct FSMState_W04_OverCapacity : public FSMState_Warning {
	inline FSMState_W04_OverCapacity()
	    : FSMState_Warning(CARDERROR_OverCapacity, "W04_OverCapacity")
	{
	}

	virtual void do_open(TMgr*);    // _28
	virtual void do_transit(TMgr*); // _2C

	// _00     = VTBL
	// _00-_0C = FSMState_Warning
};

struct FSMState_W05_InitCardOnIPL : public FSMState_Warning {
	inline FSMState_W05_InitCardOnIPL()
	    : FSMState_Warning(CARDERROR_InitCardOnIPL, "W05_InitCardOnIPL")
	{
	}

	virtual void do_open(TMgr*);    // _28
	virtual void do_transit(TMgr*); // _2C

	// _00     = VTBL
	// _00-_0C = FSMState_Warning
};

struct FSMState_W06_CardNotUsable : public FSMState_Warning {
	inline FSMState_W06_CardNotUsable()
	    : FSMState_Warning(CARDERROR_CardNotUsable, "W06_CardNotUsable")
	{
	}

	virtual void do_open(TMgr*);    // _28
	virtual void do_transit(TMgr*); // _2C

	// _00     = VTBL
	// _00-_0C = FSMState_Warning
};

struct FSMState_W07_NoFileForSave : public FSMState_Warning {
	inline FSMState_W07_NoFileForSave()
	    : FSMState_Warning(CARDERROR_NoFileForSave, "W07_NoFileForSave")
	{
	}

	virtual void do_open(TMgr*);    // _28
	virtual void do_transit(TMgr*); // _2C

	// _00     = VTBL
	// _00-_0C = FSMState_Warning
};

struct FSMState_W08_FinishFormat : public FSMState_Warning {
	inline FSMState_W08_FinishFormat()
	    : FSMState_Warning(CARDERROR_FinishFormat, "W08_FinishFormat")
	{
	}

	virtual void do_open(TMgr*);    // _28
	virtual void do_transit(TMgr*); // _2C

	// _00     = VTBL
	// _00-_0C = FSMState_Warning
};

struct FSMState_W09_FinishCreateNewFile : public FSMState_Warning {
	inline FSMState_W09_FinishCreateNewFile()
	    : FSMState_Warning(CARDERROR_FinishCreateNewFile, "W09_FinishCreateNewFile")
	{
	}

	virtual void do_open(TMgr*);    // _28
	virtual void do_transit(TMgr*); // _2C

	// _00     = VTBL
	// _00-_0C = FSMState_Warning
};

struct FSMState_W10_SerialNoError : public FSMState_Warning {
	inline FSMState_W10_SerialNoError()
	    : FSMState_Warning(CARDERROR_SerialNoError, "W10_SerialNoError")
	{
	}

	virtual void do_open(TMgr*);    // _28
	virtual void do_transit(TMgr*); // _2C

	// _00     = VTBL
	// _00-_0C = FSMState_Warning
};
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
// WARNING FAIL STATES
struct FSMState_WF0_FailToFormat_NoCard : public FSMState_Warning {
	inline FSMState_WF0_FailToFormat_NoCard()
	    : FSMState_Warning(CARDERROR_FailToFormat_NoCard, "WF0_FailToFormat_NoCard")
	{
	}

	virtual void do_open(TMgr*);    // _28
	virtual void do_transit(TMgr*); // _2C

	// _00     = VTBL
	// _00-_0C = FSMState_Warning
};

struct FSMState_WF1_FailToFormat_IOError : public FSMState_Warning {
	inline FSMState_WF1_FailToFormat_IOError()
	    : FSMState_Warning(CARDERROR_FailToFormat_IOError, "WF1_FailToFormat_IOError")
	{
	}

	virtual void do_open(TMgr*);    // _28
	virtual void do_transit(TMgr*); // _2C

	// _00     = VTBL
	// _00-_0C = FSMState_Warning
};

struct FSMState_WF2_FailToCreateNewFile_NoCard : public FSMState_Warning {
	inline FSMState_WF2_FailToCreateNewFile_NoCard()
	    : FSMState_Warning(CARDERROR_FailToCreateNewFile_NoCard, "WF2_FailToCreateNewFile_NoCard")
	{
	}

	virtual void do_open(TMgr*);    // _28
	virtual void do_transit(TMgr*); // _2C

	// _00     = VTBL
	// _00-_0C = FSMState_Warning
};

struct FSMState_WF3_FailToCreateNewFile_IOError : public FSMState_Warning {
	inline FSMState_WF3_FailToCreateNewFile_IOError()
	    : FSMState_Warning(CARDERROR_FailToCreateNewFile_IOError, "WF3_FailToCreateNewFile_IOError")
	{
	}

	virtual void do_open(TMgr*);    // _28
	virtual void do_transit(TMgr*); // _2C

	// _00     = VTBL
	// _00-_0C = FSMState_Warning
};

struct FSMState_WF4_FailToSave_NoCard : public FSMState_Warning {
	inline FSMState_WF4_FailToSave_NoCard()
	    : FSMState_Warning(CARDERROR_FailToSave_NoCard, "WF4_FailToSave_NoCard")
	{
	}

	virtual void do_open(TMgr*);    // _28
	virtual void do_transit(TMgr*); // _2C

	// _00     = VTBL
	// _00-_0C = FSMState_Warning
};

struct FSMState_WF5_FailToSave_IOError : public FSMState_Warning {
	inline FSMState_WF5_FailToSave_IOError()
	    : FSMState_Warning(CARDERROR_FailToSave_IOError, "WF5_FailToSave_IOError")
	{
	}

	virtual void do_open(TMgr*);    // _28
	virtual void do_transit(TMgr*); // _2C

	// _00     = VTBL
	// _00-_0C = FSMState_Warning
};
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
// CARD REQUEST STATES
struct FSMState_WN0_NowFormat : public FSMState_CardRequest {
	inline FSMState_WN0_NowFormat()
	    : FSMState_CardRequest(CARDERROR_NowFormat, "WN0_NowFormat")
	{
	}

	virtual void do_open(TMgr*);               // _28
	virtual bool do_cardRequest();             // _2C
	virtual void do_transitCardReady(TMgr*);   // _30
	virtual void do_transitCardNoCard(TMgr*);  // _34
	virtual void do_transitCardIOError(TMgr*); // _38

	// _00     = VTBL
	// _00-_0C = FSMState_CardRequest
};

struct FSMState_WN1_NowCreateNewFile : public FSMState_CardRequest {
	inline FSMState_WN1_NowCreateNewFile()
	    : FSMState_CardRequest(CARDERROR_NowCreateNewFile, "WN1_NowCreateNewFile")
	{
	}

	virtual void do_open(TMgr*);               // _28
	virtual bool do_cardRequest();             // _2C
	virtual void do_transitCardReady(TMgr*);   // _30
	virtual void do_transitCardNoCard(TMgr*);  // _34
	virtual void do_transitCardIOError(TMgr*); // _38

	// _00     = VTBL
	// _00-_0C = FSMState_CardRequest
};
////////////////////////////////////////////////////////////

struct TMgr {
	typedef FSMState StateType;

	enum enumStart {
		Start_NoCard_FS,
		Start_IOError_FS,
		Start_WrongDevice_FS,
		Start_WrongSector_FS,
		Start_DataBrokenAndDoYouFormat_FS,
		Start_OverCapacity_FS,
		Start_DoYouCreateNewFile_FS,
		Start_NoCard_Save,
		Start_IOError_Save,
		Start_WrongDevice_Save,
		Start_WrongSector_Save,
		Start_DataBrokenAndDoYouFormat_Save,
		Start_OverCapacity_Save,
		Start_DoYouCreateNewFile_Save,
		Start_SerialNoError,
		Start_FailToSave_NoCard,
		Start_FailToSave_IOError
	};

	enum enumEnd { End_0, End_StartWithoutSave, End_OpenFileSelect, End_RestartSaveOption, End_GoToCheckCard };

	enum parentMenuType { Parent_FileSelect, Parent_Save };

	void startSeq(enumStart);
	void forceQuitSeq();
	void goEnd_(enumEnd);
	void checkAndTransitNoCard_();
	void update();
	void draw();
	bool isGetEnd();
	bool isFinish();
	void showInfo(s32, s32, s32, s32);
	int getStateID();

	inline void setCurrState(StateType* state) { mCurrentState = state; }
	inline StateType* getCurrState() { return mCurrentState; }

	TMgr();
	~TMgr();

	Screen::TMemoryCard mScreen;   // _000
	u32 mCounter;                  // _298
	u32 mCounterMax;               // _29C, isnt used for anything
	enumEnd mEndStat;              // _2A0
	int mParentMenuType;           // _2A4, 0 = file select, 1 = save
	FSMStateMachine mStateMachine; // _2A8
	FSMState* mCurrentState;       // _2C4
};
} // namespace CardError
} // namespace ebi

#endif
