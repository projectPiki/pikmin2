#ifndef _GAME_ENEMYSTATEMACHINE_H
#define _GAME_ENEMYSTATEMACHINE_H

#include "types.h"

struct Graphics;

namespace Game {
struct EnemyBase;
struct StateArg;
struct EnemyFSMState;

/**
 * Base of EnemyBaseFSM::StateMachine, which is the generic lifecycle FSM that
 * every teki has. Note that this DOES NOT inherit from Game::StateMachine, as
 * much as it looks like it should. No, seriously, why didn't they just do that?
 * Is this a case of Pikmin 1 legacy code? :thinking:
 */
struct EnemyStateMachine {
	inline EnemyStateMachine()
	    : mPreviousID(-1)
	{
	}

	virtual void init(EnemyBase* enemy);                   // _08 (weak)
	virtual void start(EnemyBase*, int, StateArg*);        // _0C
	virtual void exec(EnemyBase* enemy);                   // _10
	virtual void transit(EnemyBase*, int, StateArg*);      // _14
	virtual void doDirectDraw(EnemyBase*, Graphics&);      // _18
	virtual EnemyFSMState* getCurrState(EnemyBase*);       // _1C
	virtual void setCurrState(EnemyBase*, EnemyFSMState*); // _20

	void create(int stateCount);
	int getCurrID(EnemyBase*);
	const char* getCurrName(EnemyBase*);
	void registerState(EnemyFSMState*);

	// Unused/inlined functions:
	void restart(EnemyBase*);
	void resume(EnemyBase*);

	// _00 VTBL
	// Array of pointers to registered states, of length `mLimit`.
	EnemyFSMState** mStates;

	// Count of registered states.
	int mCount; // _08

	// Maximum number of states that can be registered.
	int mLimit; // _0C

	// Array of state IDs, indexed by their index in mStates.
	int* mIndexToIDArray; // _10

	// Array of state indices in mStates, indexed by their state ID.
	int* mIdToIndexArray; // _14

	// ID of previous state.
	int mPreviousID; // _18
};

struct EnemyFSMState {
	inline EnemyFSMState(int stateID, const char* name)
	    : mStateID(stateID)
	    , mStateMachine(nullptr)
	    , mName(name)
	{
	}

	inline EnemyFSMState(int stateID)
	    : mStateID(stateID)
	    , mStateMachine(nullptr)
	{
	}

	virtual void init(EnemyBase* enemy, StateArg* settings) { }                  // _08 (weak)
	virtual void exec(EnemyBase* enemy) { }                                      // _0C (weak)
	virtual void cleanup(EnemyBase* enemy) { }                                   // _10 (weak)
	virtual void resume(EnemyBase* enemy) { }                                    // _14 (weak)
	virtual void restart(EnemyBase* enemy) { }                                   // _18 (weak)
	virtual void transit(EnemyBase* enemy, int nextStateID, StateArg* settings); // _1C
	virtual void doDirectDraw(EnemyBase* enemy, Graphics& gfx) { }               // _20 (weak)

	// _00 = VTBL
	int mStateID;                     // _04
	EnemyStateMachine* mStateMachine; // _08
	const char* mName;                // _0C
};
} // namespace Game

#endif
