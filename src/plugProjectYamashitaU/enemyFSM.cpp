#include "Game/EnemyBase.h"
#include "Game/EnemyStateMachine.h"
#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	8013070C
 * Size:	000030
 */
void EnemyFSMState::transit(EnemyBase* obj, int id, StateArg* arg) { mStateMachine->transit(obj, id, arg); }

/*
 * --INFO--
 * Address:	8013073C
 * Size:	00005C
 */
void EnemyStateMachine::doDirectDraw(EnemyBase* obj, Graphics& gfx) { getCurrState(obj)->doDirectDraw(obj, gfx); }

/*
 * --INFO--
 * Address:	80130798
 * Size:	000080
 */
void EnemyStateMachine::start(EnemyBase* obj, int id, StateArg* arg)
{
	setCurrState(obj, nullptr);
	transit(obj, id, arg);
}

/*
 * @matchedSize
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void EnemyStateMachine::resume(EnemyBase* obj)
{
	// UNUSED OR INLINED FUNCTION
	getCurrState(obj)->resume(obj);
}

/*
 * @matchedSize
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void EnemyStateMachine::restart(EnemyBase* obj)
{
	// UNUSED OR INLINED FUNCTION
	getCurrState(obj)->restart(obj);
}

/*
 * --INFO--
 * Address:	80130818
 * Size:	00004C
 */
void EnemyStateMachine::exec(EnemyBase* obj) { getCurrState(obj)->exec(obj); }

/*
 * --INFO--
 * Address:	80130864
 * Size:	0000A4
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

/*
 * --INFO--
 * Address:	80130908
 * Size:	000084
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

/*
 * --INFO--
 * Address:	8013098C
 * Size:	000070
 */
int EnemyStateMachine::getCurrID(EnemyBase* obj)
{
	if (getCurrState(obj)) {
		return getCurrState(obj)->mStateID;
	}
	return -1;
}

/*
 * --INFO--
 * Address:	801309FC
 * Size:	000070
 */
const char* EnemyStateMachine::getCurrName(EnemyBase* obj)
{
	if (getCurrState(obj)) {
		return getCurrState(obj)->mName;
	}
	return "no name";
}

/*
 * --INFO--
 * Address:	80130A6C
 * Size:	00011C
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

/*
 * --INFO--
 * Address:	80130B88
 * Size:	000008
 */
void EnemyStateMachine::setCurrState(EnemyBase* obj, EnemyFSMState* state) { obj->mCurrentLifecycleState = state; }

/*
 * --INFO--
 * Address:	80130B90
 * Size:	000008
 */
EnemyFSMState* EnemyStateMachine::getCurrState(EnemyBase* obj) { return obj->mCurrentLifecycleState; }

/*
 * --INFO--
 * Address:	80130B98
 * Size:	000004
 */
void EnemyStateMachine::init(EnemyBase*) { }
} // namespace Game
