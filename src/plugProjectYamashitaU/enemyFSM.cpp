#include "Game/EnemyBase.h"
#include "Game/EnemyStateMachine.h"
#include "types.h"

namespace Game {

/**
 * @note Address: 0x8013070C
 * @note Size: 0x30
 */
void EnemyFSMState::transit(EnemyBase* obj, int id, StateArg* arg) { mStateMachine->transit(obj, id, arg); }

/**
 * @note Address: 0x8013073C
 * @note Size: 0x5C
 */
void EnemyStateMachine::doDirectDraw(EnemyBase* obj, Graphics& gfx) { getCurrState(obj)->doDirectDraw(obj, gfx); }

/**
 * @note Address: 0x80130798
 * @note Size: 0x80
 */
void EnemyStateMachine::start(EnemyBase* obj, int id, StateArg* arg)
{
	setCurrState(obj, nullptr);
	transit(obj, id, arg);
}

/**
 * @matchedSize
 * @note Address: N/A
 * @note Size: 0x4C
 */
void EnemyStateMachine::resume(EnemyBase* obj)
{
	// UNUSED OR INLINED FUNCTION
	getCurrState(obj)->resume(obj);
}

/**
 * @matchedSize
 * @note Address: N/A
 * @note Size: 0x4C
 */
void EnemyStateMachine::restart(EnemyBase* obj)
{
	// UNUSED OR INLINED FUNCTION
	getCurrState(obj)->restart(obj);
}

/**
 * @note Address: 0x80130818
 * @note Size: 0x4C
 */
void EnemyStateMachine::exec(EnemyBase* obj) { getCurrState(obj)->exec(obj); }

/**
 * @note Address: 0x80130864
 * @note Size: 0xA4
 */
void EnemyStateMachine::create(int limit)
{
	mLimit          = limit;
	mCount          = 0;
	mStates         = new EnemyFSMState*[mLimit];
	mIndexToIDArray = new int[mLimit];
	mIdToIndexArray = new int[mLimit];
	for (int i = 0; i < mLimit; i++) {
		mStates[i]         = nullptr;
		mIndexToIDArray[i] = -1;
		mIdToIndexArray[i] = -1;
	}
}

/**
 * @note Address: 0x80130908
 * @note Size: 0x84
 */
void EnemyStateMachine::registerState(EnemyFSMState* newState)
{
	bool check;
	if (mCount >= mLimit) {
		return;
	}
	mStates[mCount] = newState;
	// TODO: This looks weird. How would they really have written it?
	if (!(0 <= newState->mStateID && newState->mStateID < mLimit)) {
		check = false;
	} else {
		check = true;
	}
	if (check == false) {
		return;
	}
	newState->mStateMachine             = this;
	mIndexToIDArray[mCount]             = newState->mStateID;
	mIdToIndexArray[newState->mStateID] = mCount;
	mCount++;
}

/**
 * @note Address: 0x8013098C
 * @note Size: 0x70
 */
int EnemyStateMachine::getCurrID(EnemyBase* obj)
{
	if (getCurrState(obj)) {
		return getCurrState(obj)->mStateID;
	}
	return -1;
}

/**
 * @note Address: 0x801309FC
 * @note Size: 0x70
 */
const char* EnemyStateMachine::getCurrName(EnemyBase* obj)
{
	if (getCurrState(obj)) {
		return getCurrState(obj)->mName;
	}
	return "no name";
}

/**
 * @note Address: 0x80130A6C
 * @note Size: 0x11C
 */
void EnemyStateMachine::transit(EnemyBase* obj, int id, StateArg* arg)
{
	int index = mIdToIndexArray[id];
	if (getCurrState(obj)) {
		getCurrState(obj)->cleanup(obj);
		mPreviousID = getCurrState(obj)->mStateID;
	}

	ASSERT_HANG(index < mLimit);
	setCurrState(obj, mStates[index]);
	getCurrState(obj)->init(obj, arg);
}

/**
 * @note Address: 0x80130B88
 * @note Size: 0x8
 */
void EnemyStateMachine::setCurrState(EnemyBase* obj, EnemyFSMState* state) { obj->mCurrentLifecycleState = state; }

/**
 * @note Address: 0x80130B90
 * @note Size: 0x8
 */
EnemyFSMState* EnemyStateMachine::getCurrState(EnemyBase* obj) { return obj->mCurrentLifecycleState; }

/**
 * @note Address: 0x80130B98
 * @note Size: 0x4
 */
void EnemyStateMachine::init(EnemyBase*) { }
} // namespace Game
