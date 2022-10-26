#ifndef _GAME_STATEMACHINE_H
#define _GAME_STATEMACHINE_H

#include "types.h"

namespace Game {
template <typename T>
struct StateMachine;

// if it gets used, it's a derived struct.
struct StateArg {
};

template <typename T>
struct FSMState {
	inline FSMState(int id)
	    : m_id(id)
	    , m_stateMachine(nullptr)
	{
	}

	virtual void init(T*, StateArg*);                             // _08
	virtual void exec(T*);                                        // _0C
	virtual void cleanup(T*);                                     // _10
	virtual void resume(T*) { }                                   // _14
	virtual void restart(T*) { }                                  // _18
	virtual void transit(T* obj, int stateID, StateArg* stateArg) // _1C
	{
		m_stateMachine->transit(obj, stateID, stateArg);
	}

	// _00 VTBL
	int m_id;                        // _04
	StateMachine<T>* m_stateMachine; // _08
};

template <typename T>
struct StateMachine {
	inline StateMachine()
	    : m_currentID(-1)
	{
	}

	virtual void init(T*);                    // _08
	virtual void start(T*, int, StateArg*);   // _0C
	virtual void exec(T*);                    // _10
	virtual void transit(T*, int, StateArg*); // _14

	// #pragma dont_inline on
	void create(int limit);
	// {
	// 	m_limit          = limit;
	// 	m_count          = 0;
	// 	m_states         = new FSMState<T>*[m_limit];
	// 	m_indexToIDArray = new int[m_limit];
	// 	m_idToIndexArray = new int[m_limit];
	// }

	void registerState(FSMState<T>* state);
	// {
	// 	if (m_limit <= m_count) {
	// 		return;
	// 	}
	// 	m_states[m_count] = state;
	// 	if (!(-1 < state->m_id && state->m_id < m_limit)) {
	// 		return;
	// 	}
	// 	state->m_stateMachine = this;
	// 	m_indexToIDArray[m_count] = state->m_id;
	// 	m_idToIndexArray[state->m_id] = m_count;
	// 	m_count++;
	// }
	// #pragma dont_inline reset

	int getCurrID(T*);

	// _00	= VTBL
	FSMState<T>** m_states; // _04
	int m_count;            // _08, count of registered states
	int m_limit;            // _0C, max states that can be registered
	int* m_indexToIDArray;  // _10, state ID array, indexed by index in m_states
	int* m_idToIndexArray;  // _14, state indices array, indexed by state ID
	int m_currentID;        // _18, ID of current/active state
};
} // namespace Game
#endif
