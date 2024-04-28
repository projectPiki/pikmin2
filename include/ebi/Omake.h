#ifndef _EBI_OMAKE_H
#define _EBI_OMAKE_H

#include "types.h"
#include "ebi/Screen/TScreenBase.h"
#include "ebi/Screen/TOmake.h"
#include "Game/StateMachine.h"

struct Controller;

namespace ebi {
namespace Omake {
struct TMgr;
enum StateID { Standby, OmakeScreen, CardEScreen, SelectGame, Movie, StateCount };

struct FSMStateMachine : public Game::StateMachine<TMgr> {
	FSMStateMachine() { }

	virtual void init(TMgr*); // _08

	// _00     = VTBL
	// _00-_1C = Game::StateMachine
};

struct FSMState : public Game::FSMState<TMgr> {
	FSMState(int stateID, char* name)
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
	char* mName; // _0C
};

struct FSMState_CardEScreen : public FSMState {
	inline FSMState_CardEScreen()
	    : FSMState(CardEScreen, "FSMState_CardEScreen")
	{
	}

	virtual void do_init(TMgr*, Game::StateArg*); // _20
	virtual void do_exec(TMgr*);                  // _24

	// _00     = VTBL
	// _00-_10 = FSMState
};

struct FSMState_OmakeScreen : public FSMState {
	inline FSMState_OmakeScreen()
	    : FSMState(OmakeScreen, "FSMState_OmakeScreen")
	{
	}

	virtual void do_init(TMgr*, Game::StateArg*); // _20
	virtual void do_exec(TMgr*);                  // _24

	// _00     = VTBL
	// _00-_10 = FSMState
};

struct FSMState_SelectGame : public FSMState {

	enum StatusID { Idle, ProbeGBA, Transferring, Error, Finish };
	inline FSMState_SelectGame()
	    : FSMState(SelectGame, "FSMState_SelectGame")
	{
		mTimer    = 0;
		mTimerMax = 0;
	}

	virtual void do_init(TMgr*, Game::StateArg*); // _20
	virtual void do_exec(TMgr*);                  // _24

	// _00     = VTBL
	// _00-_10 = FSMState
	int mStatus;
	u32 mTimer;
	u32 mTimerMax;
};

struct TMgr {
	typedef FSMState StateType;
	TMgr();

	void draw();
	void forceQuit();
	int getMovieID();
	int getStateID();
	void goEnd_();
	bool isFinish();
	bool isMovieState();
	bool isTouchAnyKey_();
	void loadResource();
	void newCardEMgrAndTask();
	void restartFromMovieState();
	void start();
	void update();

	inline void setControllers(Controller* control)
	{
		mController = control;
		mOmake.setController(control);
		mOmakeCardE.mInput = control;
		mOmakeGame.setController(control);
	}

	inline void setCurrState(StateType* state) { mCurrentState = state; }
	inline StateType* getCurrState() { return mCurrentState; }

	Controller* mController;              // _000
	u8 _004[4];                           // _004
	ebi::Screen::TOmake mOmake;           // _008
	ebi::Screen::TOmakeCardE mOmakeCardE; // _468
	ebi::Screen::TOmakeGame mOmakeGame;   // _5DC
	bool mIsFinished;                     // _890
	u32 _894;                             // _894, both unused values?
	u32 _898;                             // _898
	FSMStateMachine mStateMachine;        // _89C
	FSMState* mCurrentState;              // _8B8
};
} // namespace Omake
} // namespace ebi

#endif
