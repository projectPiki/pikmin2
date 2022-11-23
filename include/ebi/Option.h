#ifndef _EBI_OPTION_H
#define _EBI_OPTION_H

#include "types.h"
#include "ebi/Screen/TScreenBase.h"
#include "ebi/Screen/TOption.h"
#include "Game/StateMachine.h"

struct Controller;

namespace ebi {
namespace Option {
struct TMgr;

enum StateID { Standby = 0, LoadOption, ScreenOpen, ScreenWait, ScreenClose, SaveMgr, WaitCloseForNoCard, WorldMapInfoWindow };

struct FSMStateMachine : public Game::StateMachine<TMgr> {
	virtual void init(TMgr*); // _08

	// _00     = VTBL
	// _00-_1C = Game::StateMachine
};

// TODO: Additional state data members, if any.
struct FSMState : public Game::FSMState<TMgr> {
	inline FSMState(int id, const char* name)
	    : Game::FSMState<TMgr>(id)
	    , m_name(name)
	{
	}

	virtual void init(TMgr*, Game::StateArg*);    // _08 (weak)
	virtual void exec(TMgr*);                     // _0C (weak)
	virtual void do_init(TMgr*, Game::StateArg*); // _20 (weak)
	virtual void do_exec(TMgr*);                  // _24 (weak)

	// _00     = VTBL
	// _00-_0C = Game::FSMState
	const char* m_name; // _0C
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
	u32 _10; // _10
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
	    , _10(0)
	    , _14(0)
	{
	}

	virtual void do_init(TMgr*, Game::StateArg*); // _20
	virtual void do_exec(TMgr*);                  // _24

	// _00     = VTBL
	// _00-_10 = FSMState
	u32 _10; // _10
	u32 _14; // _14
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
	TMgr();

	~TMgr();

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

	Screen::TOption m_optionScreen; // _000
	ebi::Save::TMgr* m_saveMgr;     // _F18
	Controller* m_controller;       // _F1C
	u8 _F20;                        // _F20
	FSMStateMachine m_stateMachine; // _F24
	u8 _F28;                        // _F28
};
} // namespace Option
} // namespace ebi

#endif
