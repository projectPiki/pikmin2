#include "types.h"

#include "Game/PelletCarry.h"
#include "System.h"

namespace Game {
/*
 * --INFO--
 * Address:	80234EF8
 * Size:	000030
 */
PelletCarry::PelletCarry() { reset(); }

/*
 * --INFO--
 * Address:	80234F28
 * Size:	000028
 */
void PelletCarry::reset()
{
	m_state         = PCS_Idle;
	m_position.x    = 0.0f;
	m_position.y    = 0.0f;
	m_position.z    = 0.0f;
	m_timer         = 0.0f;
	m_carryStrength = 0.0f;
}

/*
 * --INFO--
 * Address:	80234F50
 * Size:	000084
 */
bool PelletCarry::pull(u16 state, Vector3f& newPos, f32 carryAmt)
{
	if (m_state == PCS_Idle || m_state == state) {
		m_state         = state;
		m_position.x    = newPos.x;
		m_position.y    = newPos.y;
		m_position.z    = newPos.z;
		m_carryStrength = carryAmt;

		return true;
	} else if (carryAmt > m_carryStrength) {
		m_state         = state;
		m_position.x    = newPos.x;
		m_position.y    = newPos.y;
		m_position.z    = newPos.z;
		m_carryStrength = carryAmt;
		m_timer         = 0.5f;

		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	80234FD4
 * Size:	000034
 */
bool PelletCarry::pullable(u16 state, f32 carryAmt)
{
	if (m_state == PCS_Idle || m_state == state) {
		return true;
	}

	return carryAmt > m_carryStrength;
}

/*
 * --INFO--
 * Address:	80235008
 * Size:	000034
 */
void PelletCarry::giveup(u16 state)
{
	if (m_state != state) {
		return;
	}

	m_state         = PCS_Idle;
	m_position.x    = 0.0f;
	m_position.y    = 0.0f;
	m_position.z    = 0.0f;
	m_carryStrength = 0.0f;
}

/*
 * --INFO--
 * Address:	8023503C
 * Size:	000064
 */
bool PelletCarry::frameWork(Vector3f& newPos)
{
	// Work done in a frame
	if (m_state != PCS_Idle) {
		if (m_timer > 0.0f) {
			m_timer -= sys->m_deltaTime;
			newPos.x = 0.0f;
			newPos.y = 0.0f;
			newPos.z = 0.0f;
		} else {
			newPos.x = m_position.x;
			newPos.y = m_position.y;
			newPos.z = m_position.z;
		}

		return true;
	}

	return false;
}
} // namespace Game
