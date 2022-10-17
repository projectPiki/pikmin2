#include "Game/EnemyBase.h"
#include "Game/EnemyStateMachine.h"
#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	8013070C
 * Size:	000030
 */
void EnemyFSMState::transit(EnemyBase* obj, int id, StateArg* arg) { m_stateMachine->transit(obj, id, arg); }

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
	m_limit          = limit;
	m_count          = 0;
	m_states         = new EnemyFSMState*[m_limit];
	m_indexToIDArray = new int[m_limit];
	m_idToIndexArray = new int[m_limit];
	for (int i = 0; i < m_limit; i++) {
		m_states[i]         = nullptr;
		m_indexToIDArray[i] = -1;
		m_idToIndexArray[i] = -1;
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
	if (m_count >= m_limit) {
		return;
	}
	m_states[m_count] = newState;
	// TODO: This looks weird. How would they really have written it?
	if (!(0 <= newState->m_stateID && newState->m_stateID < m_limit)) {
		check = false;
	} else {
		check = true;
	}
	if (check == false) {
		return;
	}
	newState->m_stateMachine              = this;
	m_indexToIDArray[m_count]             = newState->m_stateID;
	m_idToIndexArray[newState->m_stateID] = m_count;
	m_count++;
}

/*
 * --INFO--
 * Address:	8013098C
 * Size:	000070
 */
int EnemyStateMachine::getCurrID(EnemyBase* obj)
{
	if (getCurrState(obj)) {
		return getCurrState(obj)->m_stateID;
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
		return getCurrState(obj)->m_name;
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
	int index = m_idToIndexArray[id];
	if (getCurrState(obj)) {
		getCurrState(obj)->cleanup(obj);
		m_previousID = getCurrState(obj)->m_stateID;
	}

	ASSERT_HANG(index < m_limit);
	setCurrState(obj, m_states[index]);
	getCurrState(obj)->init(obj, arg);
}

/*
 * --INFO--
 * Address:	80130B88
 * Size:	000008
 */
void EnemyStateMachine::setCurrState(EnemyBase* obj, EnemyFSMState* state) { obj->m_currentLifecycleState = state; }

/*
 * --INFO--
 * Address:	80130B90
 * Size:	000008
 */
EnemyFSMState* EnemyStateMachine::getCurrState(EnemyBase* obj) { return obj->m_currentLifecycleState; }

/*
 * --INFO--
 * Address:	80130B98
 * Size:	000004
 */
void EnemyStateMachine::init(EnemyBase*) { }
} // namespace Game
