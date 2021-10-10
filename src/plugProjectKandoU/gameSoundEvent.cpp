#include "Game/GameSystem.h"
#include "Game/TSoundEvent.h"

/*
 * --INFO--
 * Address:	8022EBCC
 * Size:	00001C
 */
Game::TSoundEvent::TSoundEvent()
    : _00(0)
{
	_00 = 0;
	_08 = 0;
	_04 = 30;
}

/*
 * --INFO--
 * Address:	8022EBE8
 * Size:	000048
 */
u32 Game::TSoundEvent::event()
{
	_08 = Game::gameSystem->_50;
	if (!(_00 & 1)) {
		_00 |= 1;
		return 1;
	}

	if (_00 & 2) {
		_00 &= ~2;
		return 3;
	}

	return 0;
}

/*
 * --INFO--
 * Address:	8022EC30
 * Size:	000010
 */
void Game::TSoundEvent::finish(void) { _00 |= 4; }

/*
 * --INFO--
 * Address:	8022EC40
 * Size:	000074
 */
u32 Game::TSoundEvent::update()
{
	if (!(_00 & 4) && Game::gameSystem->calcFrameDist(_08) > _04 && _00 & 1
	    && !(_00 & 2)) {
		_00 |= 2;
		return 2;
	}

	return 0;
}
