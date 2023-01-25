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
	    : mId(id)
	    , mStateMachine(nullptr)
	{
	}

	virtual void init(T*, StateArg*) { }                          // _08
	virtual void exec(T*) { }                                     // _0C
	virtual void cleanup(T*) { }                                  // _10
	virtual void resume(T*) { }                                   // _14
	virtual void restart(T*) { }                                  // _18
	virtual void transit(T* obj, int stateID, StateArg* stateArg) // _1C
	{
		mStateMachine->transit(obj, stateID, stateArg);
	}

	// _00 VTBL
	int mId;                        // _04
	StateMachine<T>* mStateMachine; // _08
};

template <typename T>
struct StateMachine {
	inline StateMachine()
	    : mCurrentID(-1)
	{
	}

	virtual void init(T*);                    // _08
	virtual void start(T*, int, StateArg*);   // _0C
	virtual void exec(T*);                    // _10
	virtual void transit(T*, int, StateArg*); // _14

	// #pragma dont_inline on
	void create(int limit);
	// {
	// 	mLimit          = limit;
	// 	mCount          = 0;
	// 	mStates         = new FSMState<T>*[mLimit];
	// 	mIndexToIDArray = new int[mLimit];
	// 	mIdToIndexArray = new int[mLimit];
	// }

	void registerState(FSMState<T>* state);
	// {
	// 	if (mLimit <= mCount) {
	// 		return;
	// 	}
	// 	mStates[mCount] = state;
	// 	if (!(-1 < state->mId && state->mId < mLimit)) {
	// 		return;
	// 	}
	// 	state->mStateMachine = this;
	// 	mIndexToIDArray[mCount] = state->mId;
	// 	mIdToIndexArray[state->mId] = mCount;
	// 	mCount++;
	// }
	// #pragma dont_inline reset

	int getCurrID(T*);

	// _00	= VTBL
	FSMState<T>** mStates; // _04
	int mCount;            // _08, count of registered states
	int mLimit;            // _0C, max states that can be registered
	int* mIndexToIDArray;  // _10, state ID array, indexed by index in mStates
	int* mIdToIndexArray;  // _14, state indices array, indexed by state ID
	int mCurrentID;        // _18, ID of current/active state
};
} // namespace Game
#endif
