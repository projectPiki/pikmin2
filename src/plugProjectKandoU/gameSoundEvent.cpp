#include "types.h"

#include "Game/GameSystem.h"
#include "Game/TSoundEvent.h"

namespace Game {
/*
 * --INFO--
 * Address:	8022EBCC
 * Size:	00001C
 */
TSoundEvent::TSoundEvent()
    : m_state(TSE_Inactive)
{
	m_state    = TSE_Inactive;
	m_timer    = 0;
	m_duration = 30;
}

/*
 * --INFO--
 * Address:	8022EBE8
 * Size:	000048
 */
u32 TSoundEvent::event()
{
	m_timer = Game::gameSystem->m_frameTimer;
	if (!(m_state & TSE_Active)) {
		m_state |= TSE_Active;
		return TSE_Active;
	}

	if (m_state & TSE_ApplyTransition) {
		m_state &= ~TSE_ApplyTransition;
		return TSE_Apply;
	}

	return TSE_Inactive;
}

/*
 * --INFO--
 * Address:	8022EC30
 * Size:	000010
 */
void TSoundEvent::finish(void) { m_state |= TSE_Finish; }

/*
 * --INFO--
 * Address:	8022EC40
 * Size:	000074
 */
u32 TSoundEvent::update()
{
	// Checks if the event isn't finished, has gone over the duration of the
	// event, is active and hasn't been applied yet, and then changes the state
	// to transition to apply the event.
	if (!(m_state & TSE_Finish) && Game::gameSystem->calcFrameDist(m_timer) > m_duration && m_state & TSE_Active
	    && !(m_state & TSE_ApplyTransition)) {
		m_state |= TSE_ApplyTransition;
		return TSE_ApplyTransition;
	}

	return TSE_Inactive;
}
} // namespace Game
