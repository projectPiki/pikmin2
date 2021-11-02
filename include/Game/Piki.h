#ifndef _GAME_PIKI_H
#define _GAME_PIKI_H

#include "types.h"

namespace Game {
typedef enum EPikiColor {
	Blue    = 0,
	Red     = 1,
	Yellow  = 2,
	Purple  = 3,
	White   = 4,
	Bulbmin = 5,
	Carrot  = 6,
} EPikiColor;

typedef enum EPikiHappa {
	Leaf       = 0,
	Bud        = 1,
	Flower     = 2,
	Bud_Red    = 3,
	Flower_Red = 4,
} EPikiHappa;

namespace Game {
	struct PikiFSM;
} // namespace Game

struct Piki {
	u8 _00[0x28C];
	Game::PikiFSM* m_fsm; // _28C
	u8 _290[0x38];        // _290
};
} // namespace Game

#endif
