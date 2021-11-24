#ifndef _GAME_STATEMACHINE_H
#define _GAME_STATEMACHINE_H

#include "types.h"

namespace Game {
template <typename T> struct StateMachine;

struct StateArg {
};

template <typename T> struct FSMState {
	virtual void init(T*, StateArg*)    = 0; // _00
	virtual void exec(T*)               = 0; // _04
	virtual void cleanup(T*)            = 0; // _08
	virtual void resume(T*)             = 0; // _0C
	virtual void restart(T*)            = 0; // _10
	virtual void transit(T*, StateArg*) = 0; // _14

	// VTBL _00
	int m_id;                        // _04
	StateMachine<T>* m_stateMachine; // _08
};

template <typename T> struct StateMachine {
	virtual void init(T*)                    = 0; // _00
	virtual u32 start(T*, int, StateArg*)    = 0; // _04
	virtual void exec(T*)                    = 0; // _08
	virtual void transit(T*, int, StateArg*) = 0; // _0C

	// VTBL _00
	FSMState<T>** m_states; // _04

	// Count of registered states.
	int m_count; // _08

	// Maximum number of states that can be registered.
	int m_limit; // _0C

	// Array of state IDs, indexed by their index in m_states.
	int* m_indexToIDArray; // _10

	// Array of state indices in m_states, indexed by their state ID.
	int* m_idToIndexArray; // _14

	// ID of current (active) state.
	int m_currentID; // _18
};
} // namespace Game

#endif
