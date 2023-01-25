#ifndef _GAME_ENEMYANIMKEYEVENT_H
#define _GAME_ENEMYANIMKEYEVENT_H

#include "SysShape/KeyEvent.h"

namespace Game {
/**
 * @size{0x28}
 */
struct EnemyAnimKeyEvent : public SysShape::KeyEvent {
	inline EnemyAnimKeyEvent() { mIsPlaying = false; }

	virtual ~EnemyAnimKeyEvent() { } // _08 (weak)

	bool mIsPlaying; // _24
};
} // namespace Game

#endif
