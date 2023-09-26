#ifndef _GAME_MEMORYCARD_PLAYER_H
#define _GAME_MEMORYCARD_PLAYER_H

#include "types.h"

namespace Game {
namespace MemoryCard {
struct Player {
	Player();

	u8 mFlag;         // _00
	u8 _01;           // _01
	u16 _02;          // _02
	u32 _04;          // _04
	u32 mDay;         // _08
	u32 mRedPikis;    // _0C
	u32 mBluePikis;   // _10
	u32 mYellowPikis; // _14
	u32 mWhitePikis;  // _18
	u32 mPurplePikis; // _1C
	u32 mPokos;       // _20
	u32 mTreasures;   // _24
	u32 mCaveID;      // _28
	u32 mCaveFloor;   // _2C
	u32 mPlayTime;    // _30
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
