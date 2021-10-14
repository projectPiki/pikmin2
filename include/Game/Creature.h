#ifndef _GAME_CREATURE_H
#define _GAME_CREATURE_H

#include "types.h"

namespace Game {
struct Creature {
	bool isStickTo();
	void endStick();

	bool isTeki();
	bool isNavi();

	u8 _00[0x178]; // _00
};
} // namespace Game

#endif
