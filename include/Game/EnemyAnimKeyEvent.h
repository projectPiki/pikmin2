#ifndef _GAME_ENEMYANIMKEYEVENT_H
#define _GAME_ENEMYANIMKEYEVENT_H

#include "SysShape/KeyEvent.h"

namespace Game {
/**
 * @size{0x28}
 */
struct EnemyAnimKeyEvent : public SysShape::KeyEvent {
	inline EnemyAnimKeyEvent() { m_running = 0;}

	virtual ~EnemyAnimKeyEvent(); // _00

	u8 m_running; // _24
};
} // namespace Game

#endif
