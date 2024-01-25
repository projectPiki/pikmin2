#ifndef _EBI_FS_H
#define _EBI_FS_H

#include "types.h"
#include "ebi/Screen/TScreenBase.h"
#include "ebi/Screen/TMainScreen.h"
#include "ebi/Utility.h"
#include "Game/StateMachine.h"

struct Controller;

namespace Game {
namespace MemoryCard {
struct PlayerFileInfo;
}
} // namespace Game

namespace ebi {
namespace FS {
struct TMgr;

enum StateID {
	FSSTATE_Standby,
	FSSTATE_OpenScene,
	FSSTATE_CheckData,
	FSState_DecideData,
	FSSTATE_SelectData,
	FSSTATE_DataBroken,
	FSSTATE_NowDelete,
	FSSTATE_DoYouDelete,
	FSSTATE_WhichDataDoYouCopyTo,
	FSSTATE_FailToDelete,
	FSSTATE_FinishDelete,
	FSSTATE_DoYouOverwrite,
	FSSTATE_FailToCopy,
	FSSTATE_NowCopy,
	FSSTATE_FinishCopy,
	FSSTATE_StateCount,
};

struct FSMStateMachine : public Game::StateMachine<TMgr> {
	virtual void init(TMgr* mgr); // _08

	// _00     = VTBL
	// _00-_1C = Game::StateMachine
};

struct FSMState : public Game::FSMState<TMgr> {
	inline FSMState(int stateID, char* name)
	    : Game::FSMState<TMgr>(stateID)
	{
		mName = name;
	}

	virtual void init(TMgr* mgr, Game::StateArg*);       // _08 (weak)
	virtual void exec(TMgr* mgr);                        // _0C (weak)
	virtual void do_init(TMgr* mgr, Game::StateArg*) { } // _20 (weak)
	virtual void do_exec(TMgr* mgr) { }                  // _24 (weak)

	// _00     = VTBL
	// _00-_0C = Game::FSMState
	char* mName; // _0C
};

struct FSMState_CardTask : public FSMState {
	inline FSMState_CardTask(int stateID, char* name)
	    : FSMState(stateID, name)
	{
	}

	enum State {
		CardTaskState_doRequest    = 0,
		CardTaskState_getStatus    = 1,
		CardTaskState_waitCloseMsg = 2,
		CardTaskState_finish       = 3,
	};

	virtual void init(TMgr* mgr, Game::StateArg*);          // _08 (weak)
	virtual void exec(TMgr* mgr);                           // _0C
	virtual void do_init(TMgr* mgr, Game::StateArg*) { }    // _20 (weak)
	virtual bool do_cardRequest(TMgr* mgr)        = 0;      // _28
	virtual void do_transitCardReady(TMgr* mgr)   = 0;      // _2C
	virtual void do_transitCardNoCard(TMgr* mgr)  = 0;      // _30
	virtual void do_transitCardIOError(TMgr* mgr) = 0;      // _34
	virtual void do_transitCardPlayerDataBroken(TMgr* mgr); // _38
	virtual void do_close(TMgr* mgr) { }                    // _3C (weak)

	// _00     = VTBL
	// _00-_0C = FSMState
	int mCardStat;
	State mStatus; // _14
};

struct FSMState_SelectYesNo : public FSMState {
	inline FSMState_SelectYesNo(int stateID, char* name)
	    : FSMState(stateID, name)
	{
	}

	virtual void do_init(TMgr* mgr, Game::StateArg*);    // _20
	virtual void do_exec(TMgr* mgr);                     // _24
	virtual void do_set(TMgr* mgr, Game::StateArg*) = 0; // _28
	virtual void do_decide(TMgr* mgr) { }                // _2C (weak)

	// _00     = VTBL
	// _00-_0C = FSMState
	bool mYesNoState;  // _10
	int mMsgType;      // _14
	int mNextStateYes; // _18
	int mNextStateNo;  // _1C
	bool mClosedMsg;   // _20
	bool mIsSelected;  // _21
};

struct FSMState_Warning : public FSMState {
	inline FSMState_Warning(int stateID, char* name)
	    : FSMState(stateID, name)
	{
		mCounter    = 0;
		mCounterMax = 0;
	}

	virtual void do_init(TMgr* mgr, Game::StateArg*); // _20
	virtual void do_exec(TMgr* mgr);                  // _24
	virtual void do_open(TMgr* mgr)    = 0;           // _28
	virtual void do_transit(TMgr* mgr) = 0;           // _2C

	// _00     = VTBL
	// _00-_0C = FSMState
	bool mForceFinish;     // _10
	bool mCounterFinished; // _11
	u32 mCounter;          // _14
	u32 mCounterMax;       // _18
};

struct FSMState00_SelectData : public FSMState {
	inline FSMState00_SelectData()
	    : FSMState(FSSTATE_SelectData, "SelectData")
	{
		mCounter    = 0;
		mCounterMax = 0;
	}

	virtual void do_init(TMgr* mgr, Game::StateArg*); // _20
	virtual void do_exec(TMgr* mgr);                  // _24

	// _00     = VTBL
	// _00-_0C = FSMState
	bool mIsChangeSel;
	u32 mCounter;
	u32 mCounterMax;
};

struct FSMState00a_OpenScene : public FSMState {
	inline FSMState00a_OpenScene()
	    : FSMState(FSSTATE_OpenScene, "OpenScene")
	{
	}

	virtual void do_init(TMgr* mgr, Game::StateArg*); // _20
	virtual void do_exec(TMgr* mgr);                  // _24

	// _00     = VTBL
	// _00-_0C = FSMState
};

struct FSMState00b_CheckData : public FSMState {
	inline FSMState00b_CheckData()
	    : FSMState(FSSTATE_CheckData, "CheckData")
	{
	}

	enum State {
		CheckDataState_DoLoad    = 0,
		CheckDataState_GetStatus = 1,
		CheckDataState_Finish    = 2,
	};

	virtual void do_init(TMgr* mgr, Game::StateArg*); // _20
	virtual void do_exec(TMgr* mgr);                  // _24

	// _00     = VTBL
	// _00-_0C = FSMState
	State mStatus;
	int mCardState;
};

struct FSMState00c_DecideData : public FSMState {
	inline FSMState00c_DecideData()
	    : FSMState(FSState_DecideData, "DecideData")
	{
	}

	virtual void do_init(TMgr* mgr, Game::StateArg*); // _20
	virtual void do_exec(TMgr* mgr);                  // _24

	// _00     = VTBL
	// _00-_0C = FSMState
};

struct FSMState01_DataBroken : public FSMState_SelectYesNo {
	inline FSMState01_DataBroken()
	    : FSMState_SelectYesNo(FSSTATE_DataBroken, "DataBroken")
	{
	}

	virtual void do_set(TMgr* mgr, Game::StateArg*); // _28

	// _00     = VTBL
	// _00-_0C = FSMState_SelectYesNo
};

struct FSMState02_NowDelete : public FSMState_CardTask {
	inline FSMState02_NowDelete()
	    : FSMState_CardTask(FSSTATE_NowDelete, "NowDelete")
	{
	}

	virtual void cleanup(TMgr* mgr);                  // _10
	virtual void do_init(TMgr* mgr, Game::StateArg*); // _20
	virtual bool do_cardRequest(TMgr* mgr);           // _28
	virtual void do_transitCardReady(TMgr* mgr);      // _2C
	virtual void do_transitCardNoCard(TMgr* mgr);     // _30
	virtual void do_transitCardIOError(TMgr* mgr);    // _34
	virtual void do_close(TMgr* mgr);                 // _3C

	// _00     = VTBL
	// _00-_0C = FSMState_CardTask
};

struct FSMState03_DoYouDelete : public FSMState_SelectYesNo {
	inline FSMState03_DoYouDelete()
	    : FSMState_SelectYesNo(FSSTATE_DoYouDelete, "DoYouDelete")
	{
	}

	virtual void do_set(TMgr* mgr, Game::StateArg*); // _28
	virtual void do_decide(TMgr* mgr);               // _2C

	// _00     = VTBL
	// _00-_0C = FSMState_SelectYesNo
};

struct FSMState04_WhichDataDoYouCopyTo : public FSMState {
	inline FSMState04_WhichDataDoYouCopyTo()
	    : FSMState(FSSTATE_WhichDataDoYouCopyTo, "WhichDataDoYouCopyTo")
	{
	}

	enum State {
		CopyToState_Decide = 0,
		CopyToState_Finish = 1,
	};

	virtual void do_init(TMgr* mgr, Game::StateArg*); // _20
	virtual void do_exec(TMgr* mgr);                  // _24

	// _00     = VTBL
	// _00-_0C = FSMState
	bool mExitState;  // _10 (true if exiting via pressing B, false if by A)
	bool mIsChanging; // _11 (if true, re-open save data info after its done closing)
	State mStatus;    // _14
};

struct FSMState05_FailToDelete : public FSMState_Warning {
	inline FSMState05_FailToDelete()
	    : FSMState_Warning(FSSTATE_FailToDelete, "FailToDelete")
	{
	}

	virtual void do_open(TMgr* mgr);    // _28
	virtual void do_transit(TMgr* mgr); // _2C

	// _00     = VTBL
	// _00-_0C = FSMState_Warning
};

struct FSMState06_FinishDelete : public FSMState_Warning {
	inline FSMState06_FinishDelete()
	    : FSMState_Warning(FSSTATE_FinishDelete, "FinishDelete")
	{
	}

	virtual void do_open(TMgr* mgr);    // _28
	virtual void do_transit(TMgr* mgr); // _2C

	// _00     = VTBL
	// _00-_0C = FSMState_Warning
};

struct FSMState07_DoYouOverwrite : public FSMState_SelectYesNo {
	inline FSMState07_DoYouOverwrite()
	    : FSMState_SelectYesNo(FSSTATE_DoYouOverwrite, "DoYouOverwrite")
	{
	}

	virtual void do_set(TMgr* mgr, Game::StateArg*); // _28
	virtual void do_decide(TMgr* mgr);               // _2C

	// _00     = VTBL
	// _00-_0C = FSMState_SelectYesNo
};

struct FSMState08_FailToCopy : public FSMState_Warning {
	inline FSMState08_FailToCopy()
	    : FSMState_Warning(FSSTATE_FailToCopy, "FailToCopy")
	{
	}

	virtual void do_open(TMgr* mgr);    // _28
	virtual void do_transit(TMgr* mgr); // _2C

	// _00     = VTBL
	// _00-_0C = FSMState_Warning
};

struct FSMState09_NowCopy : public FSMState_CardTask {
	inline FSMState09_NowCopy()
	    : FSMState_CardTask(FSSTATE_NowCopy, "NowCopy")
	{
	}

	virtual void cleanup(TMgr* mgr);                  // _10
	virtual void do_init(TMgr* mgr, Game::StateArg*); // _20
	virtual bool do_cardRequest(TMgr* mgr);           // _28
	virtual void do_transitCardReady(TMgr* mgr);      // _2C
	virtual void do_transitCardNoCard(TMgr* mgr);     // _30
	virtual void do_transitCardIOError(TMgr* mgr);    // _34
	virtual void do_close(TMgr* mgr);                 // _3C

	// _00     = VTBL
	// _00-_0C = FSMState_CardTask
};

struct FSMState10_FinishCopy : public FSMState_Warning {
	inline FSMState10_FinishCopy()
	    : FSMState_Warning(FSSTATE_FinishCopy, "FinishCopy")
	{
	}

	virtual void do_open(TMgr* mgr);    // _28
	virtual void do_transit(TMgr* mgr); // _2C

	// _00     = VTBL
	// _00-_0C = FSMState_Warning
};

struct TMgr {
	typedef FSMState StateType;
	enum enumEnd { END_0, END_StartNoCard, END_2, END_OpenSaveFile, END_StartNewFile, END_Cancel };

	TMgr();

	~TMgr() { }
	void perseInfo(Game::MemoryCard::PlayerFileInfo& info);
	void startSeq();
	bool isFinish();
	void forceQuitSeq();
	void update();
	void draw();
	void setController(Controller* control);
	void goEnd_(enumEnd id);
	void checkAndTransitNoCard_();
	int getStateID();

	inline void setCurrState(StateType* state) { mCurrentState = state; }
	inline StateType* getCurrState() { return mCurrentState; }

	Screen::FileSelect::TMainScreen mMainScreen; // _00
	u32 mCounter;                                // _BF8
	u32 mCounterMax;                             // _BFC
	Controller* mController;                     // _C00
	EUTPadInterface_countNum mCountNumInterface; // _C04
	s32 mCurrSelection;                          // _C30 (Current actively selected save file)
	u32 mCopySelection;                          // _C34 (Selected save file to copy to)
	int mEndStat;                                // _C38
	bool mInSeq;                                 // _C3C
	FSMStateMachine mStateMachine;               // _C40
	FSMState* mCurrentState;                     // _C5C
	                                             // TODO: members
};
} // namespace FS
} // namespace ebi

#endif
