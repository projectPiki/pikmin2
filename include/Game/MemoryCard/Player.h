#ifndef _GAME_MEMORYCARD_PLAYER_H
#define _GAME_MEMORYCARD_PLAYER_H

#include "types.h"

namespace Game {
namespace MemoryCard {
struct Player {
	Player();

	u8 _00;  // _00
	u8 _01;  // _01
	u16 _02; // _02
	u32 _04; // _04
	u32 _08; // _08
	u32 _0C; // _0C
	u32 _10; // _10
	u32 _14; // _14
	u32 _18; // _18
	u32 _1C; // _1C
	u32 _20; // _20
	u32 _24; // _24
	u32 _28; // _28
	u32 _2C; // _2C
	u32 _30; // _30
};

struct PlayerInfoHeader {
	u32 _00;        // _00
	u32 _04;        // _04
	u8 _08;         // _08
	Player mPlayer; // _0C
};
} // namespace MemoryCard
} // namespace Game

#endif
