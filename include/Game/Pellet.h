#ifndef _GAME_PELLET_H
#define _GAME_PELLET_H

#include "Game/Creature.h"
#include "types.h"

namespace Game {
struct Pellet : public Creature {
	u8 _00[0x458]; // _00
};
} // namespace Game

#endif
