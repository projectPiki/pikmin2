#ifndef _GAME_WALKSMOKEEFFECT_H
#define _GAME_WALKSMOKEEFFECT_H

namespace Game {
namespace WalkSmokeEffect {

// SIZE: 0x18
struct Obj {
	u8 _00[4];    // _00
	u32 _04;      // _04
	float _08;    // _08
	Vector3f _0C; // _0C
};

// SIZE: 0x8
struct Mgr {
	int m_objCount;  // _00
	Obj* m_objArray; // _04
};
} // namespace WalkSmokeEffect
} // namespace Game

#endif
