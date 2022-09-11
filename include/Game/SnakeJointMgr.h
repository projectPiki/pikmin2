#ifndef _GAME_SNAKEJOINTMGR_H
#define _GAME_SNAKEJOINTMGR_H

#include "types.h"
#include "Game/EnemyBase.h"

namespace Game {
struct SnakeJointMgr {
	EnemyBase* m_obj; // _00, SnakeCrow obj or SnakeWhole obj
	u32 _04;          // _04, unknown
	u32 _08;          // _08, unknown
	u32 _0C;          // _0C, unknown
	u32 _10;          // _10, unknown
	u32 _14;          // _14, unknown
	u32 _18;          // _18, unknown
	u32 _1C;          // _1C, unknown
	f32 _20;          // _20
	f32 _24;          // _24
	f32 _28;          // _28
	u8 _2C[0x4];      // _2C, unknown
};
} // namespace Game

#endif
