#ifndef _EBI_OPTION_H
#define _EBI_OPTION_H

#include "types.h"
#include "ebi/Screen/TScreenBase.h"
#include "ebi/Screen/TOption.h"
#include "Game/StateMachine.h"
#include "Game/MemoryCard/Mgr.h"

struct Controller;

namespace ebi {
namespace Option {
struct TMgr;

enum StateID {
	Standby = 0,
	LoadOption,
	ScreenOpen,
	ScreenWait,
	ScreenClose,
	SaveMgr,
	WaitCloseForNoCard,
	WorldMapInfoWindow,
	StateNum,
};

struct FSMStateMachine : public Game::StateMachine<TMgr> {
	virtual void init(TMgr*); // _08

	// _00     = VTBL
	// _00-_1C = Game::StateMachine
};

// TODO: Additional state data members, if any.
struct FSMState : public Game::FSMState<TMgr> {
	inline FSMState(int id, const char* name)
	    : Game::FSMState<TMgr>(id)
	    , mName(name)
	{
	}

	virtual void init(TMgr*, Game::StateArg*);    // _08 (weak)
	virtual void exec(TMgr*);                     // _0C (weak)
	virtual void do_init(TMgr*, Game::StateArg*); // _20 (weak)
	virtual void do_exec(TMgr*);                  // _24 (weak)

	// probably a better place to put this
	inline bool isSaveError()
	{
		if (sys->mCardMgr->isSaveInvalid() && sys->mCardMgr->isCardReady()) {
			return true;
		}
		return false;
	}

	// _00     = VTBL
	// _00-_0C = Game::FSMState
	const char* mName; // _0C
};

struct FSMState_LoadOption : public ebi::Option::FSMState {
	inline FSMState_LoadOption(int id, const char* name)
	    : FSMState(id, name)
	{
	}

	virtual void do_init(TMgr*, Game::StateArg*); // _20
	virtual void do_exec(TMgr*);                  // _24

	// _00     = VTBL
	// _00-_10 = FSMState
	u32 mStatus; // _10
};

struct FSMState_SaveMgr : public FSMState {
	inline FSMState_SaveMgr(int id, const char* name)
	    : FSMState(id, name)
	{
	}

	virtual void do_init(TMgr*, Game::StateArg*); // _20
	virtual void do_exec(TMgr*);                  // _24

	// _00     = VTBL
	// _00-_10 = FSMState
};

struct FSMState_ScreenClose : public FSMState {
	inline FSMState_ScreenClose(int id, const char* name)
	    : FSMState(id, name)
	{
	}

	virtual void do_init(TMgr*, Game::StateArg*); // _20
	virtual void do_exec(TMgr*);                  // _24

	// _00     = VTBL
	// _00-_10 = FSMState
};

struct FSMState_ScreenOpen : public FSMState {
	inline FSMState_ScreenOpen(int id, const char* name)
	    : FSMState(id, name)
	{
	}

	virtual void do_init(TMgr*, Game::StateArg*); // _20
	virtual void do_exec(TMgr*);                  // _24

	// _00     = VTBL
	// _00-_10 = FSMState
};

struct FSMState_ScreenWait : public FSMState {
	inline FSMState_ScreenWait(int id, const char* name)
	    : FSMState(id, name)
	{
	}

	virtual void do_init(TMgr*, Game::StateArg*); // _20
	virtual void do_exec(TMgr*);                  // _24

	// _00     = VTBL
	// _00-_10 = FSMState
};

struct FSMState_WaitCloseForNoCard : public FSMState {
	inline FSMState_WaitCloseForNoCard(int id, const char* name)
	    : FSMState(id, name)
	    , mWaitTimer(0)
	    , mWaitTimerMax(0)
	{
	}

	virtual void do_init(TMgr*, Game::StateArg*); // _20
	virtual void do_exec(TMgr*);                  // _24

	// _00     = VTBL
	// _00-_10 = FSMState
	u32 mWaitTimer;    // _10
	u32 mWaitTimerMax; // _14
};

struct FSMState_WorldMapInfoWindow : public FSMState {
	inline FSMState_WorldMapInfoWindow(int id, const char* name)
	    : FSMState(id, name)
	{
	}

	virtual void do_init(TMgr*, Game::StateArg*); // _20
	virtual void do_exec(TMgr*);                  // _24

	// _00     = VTBL
	// _00-_10 = FSMState
};

struct TMgr {
	typedef FSMState StateType;
	TMgr();

	~TMgr() { }

	void draw();
	int getStateID();
	void goEnd_();
	bool isFinish();
	void loadResource();
	void setController(Controller*);
	void start();
	void update();

	void forceQuit();
	void showInfo();

	inline void setCurrState(StateType* state) { mCurrentState = state; }
	inline StateType* getCurrState() { return mCurrentState; }

	Screen::TOption mOptionScreen; // _000
	ebi::Save::TMgr* mSaveMgr;     // _F18
	Controller* mController;       // _F1C
	bool mIsFinished;              // _F20
	FSMStateMachine mStateMachine; // _F24
	FSMState* mCurrentState;       // _F3C
};
} // namespace Option
} // namespace ebi

#endif
