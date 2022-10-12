#ifndef _GAME_STATEMACHINE_H
#define _GAME_STATEMACHINE_H

#include "types.h"

namespace Game {
template <typename T> struct StateMachine;

// TODO: WORK OUT WHAT'S HAPPENING WITH THIS BC IT MAKES NO SENSE
// see Earthquake::init (in enemyBase.cpp) vs InteractSuck::actPellet (in pelletMgr.cpp)
// should be size 0x4 and first variable should be void* or something, but Earthquake::init disagrees

// FROM INTNS: I had a similar issue about WTF to do, with the whole Interact struct, MAYBE this is an
// EMPTY struct that uses specialised classes to fill in extra information, something like that at least lol

struct StateArg {
	union {
		f32 f32;
		void* ptr;
		u8 bytes[4];
	} _00; // _00
};

template <typename T> struct FSMState {
	inline FSMState(int id)
	    : m_id(id)
	    , m_stateMachine(nullptr)
	{
	}

	virtual void init(T*, StateArg*);         // _08
	virtual void exec(T*);                    // _0C
	virtual void cleanup(T*);                 // _10
	virtual void resume(T*);                  // _14
	virtual void restart(T*);                 // _18
	virtual void transit(T*, int, StateArg*); // _1C

	// _00 = VTBL
	int m_id;                        // _04
	StateMachine<T>* m_stateMachine; // _08
};

template <typename T> struct StateMachine {
	inline StateMachine()
	    : m_currentID(-1)
	{
	}
	// virtual void init(T*)                    = 0; // _00
	// virtual void start(T*, int, StateArg*)    = 0; // _04
	// virtual void exec(T*)                    = 0; // _08
	// virtual void transit(T*, int, StateArg*) = 0; // _0C
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

#define SPECIALIZED_STATE_MACHINE_DECL(T)         \
	template <> struct StateMachine<T> {          \
		virtual void init(T*);                    \
		virtual void start(T*, int, StateArg*);   \
		virtual void exec(T*);                    \
		virtual void transit(T*, int, StateArg*); \
                                                  \
		void create(int);                         \
		void registerState(FSMState<T>*);         \
	}

// template <> void Game::FSMState<void>::transit(void* obj, int id, StateArg* arg) { m_stateMachine->transit(obj, id, arg); }

#endif
