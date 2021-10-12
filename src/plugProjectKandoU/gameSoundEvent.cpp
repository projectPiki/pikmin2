#include "Game/GameSystem.h"
#include "Game/TSoundEvent.h"

/*
 * --INFO--
 * Address:	8022EBCC
 * Size:	00001C
 */
Game::TSoundEvent::TSoundEvent()
    : m_state(0)
{
	m_state = 0;
	_08     = 0;
	_04     = 30;
}

/*
 * --INFO--
 * Address:	8022EBE8
 * Size:	000048
 */
u32 Game::TSoundEvent::event()
{
	_08 = Game::gameSystem->_50;
	if (!(m_state & 1)) {
		m_state |= 1;
		return 1;
	}

	if (m_state & 2) {
		m_state &= ~2;
		return 3;
	}

	return 0;
}

/*
 * --INFO--
 * Address:	8022EC30
 * Size:	000010
 */
void Game::TSoundEvent::finish(void) { m_state |= Finish; }

/*
 * --INFO--
 * Address:	8022EC40
 * Size:	000074
 */
u32 Game::TSoundEvent::update()
{
	if (!(m_state & Finish) && Game::gameSystem->calcFrameDist(_08) > _04
	    && m_state & 1 && !(m_state & 2)) {
		m_state |= 2;
		return 2;
	}

	return 0;
}
