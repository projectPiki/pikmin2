#ifndef _GAME_ENEMYSTATEMACHINE_H
#define _GAME_ENEMYSTATEMACHINE_H

#include "types.h"

struct Graphics;

namespace Game {
struct EnemyBase;
struct StateArg;
struct EnemyFSMState;

/*
 * Base of EnemyBaseFSM::StateMachine, which is the generic lifecycle FSM that
 * every teki has. Note that this DOES NOT inherit from Game::StateMachine, as
 * much as it looks like it should. No, seriously, why didn't they just do that?
 * Is this a case of Pikmin 1 legacy code? :thinking:
 */
struct EnemyStateMachine {
	virtual void init(EnemyBase*);                         // _00
	virtual void start(EnemyBase*, int, StateArg*);        // _04
	virtual void exec(EnemyBase*);                         // _08
	virtual void transit(EnemyBase*, int, StateArg*);      // _0C
	virtual void doDirectDraw(EnemyBase*, Graphics&);      // _10
	virtual EnemyFSMState* getCurrState(EnemyBase*);       // _14
	virtual void setCurrState(EnemyBase*, EnemyFSMState*); // _18

	void create(int);
	int getCurrID(EnemyBase*);
	const char* getCurrName(EnemyBase*);
	void registerState(EnemyFSMState*);

	// Unused/inlined functions:
	void restart(EnemyBase*);
	void resume(EnemyBase*);

	// _00 VTBL
	// Array of pointers to registered states, of length `m_limit`.
	EnemyFSMState** m_states;

	// Count of registered states.
	int m_count; // _08

	// Maximum number of states that can be registered.
	int m_limit; // _0C

	// Array of state IDs, indexed by their index in m_states.
	int* m_indexToIDArray; // _10

	// Array of state indices in m_states, indexed by their state ID.
	int* m_idToIndexArray; // _14

	// ID of previous state.
	int m_previousID; // _18
};

struct EnemyFSMState {
	inline EnemyFSMState(int stateID, const char* name)
	    : m_stateID(stateID)
	    , m_stateMachine(nullptr)
	    , m_name(name)
	{
	}
	virtual void init(EnemyBase*, StateArg*);         // _00
	virtual void exec(EnemyBase*);                    // _04
	virtual void cleanup(EnemyBase*);                 // _08
	virtual void resume(EnemyBase*);                  // _0C
	virtual void restart(EnemyBase*);                 // _10
	virtual void transit(EnemyBase*, int, StateArg*); // _14
	virtual void doDirectDraw(EnemyBase*, Graphics&); // _18

	// _00 VTBL
	int m_stateID;
	EnemyStateMachine* m_stateMachine;
	const char* m_name;
};
} // namespace Game

#endif
