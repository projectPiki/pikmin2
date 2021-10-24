#ifndef _GAME_PLATINSTANCE_H
#define _GAME_PLATINSTANCE_H

#include "types.h"

namespace Game {
struct PlatInstance {
	void setCollision(bool);

	u8 _00[0x108]; // _00
	u8 _108;       // _108
	u8 _109[3];    // _109, manual padding
	u8 _10C;       // _10C
};
} // namespace Game

#endif