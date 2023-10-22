#ifndef _GAME_PELLETCARRY_H
#define _GAME_PELLETCARRY_H

#include "types.h"
#include "Vector3.h"

namespace Game {
enum PelletCarryState {
	PCS_Idle = 0xFFFF,

	PCS_Carry = 0,
	PCS_Unk1  = 1,
	PCS_Unk2,
};

struct PelletCarry {
	PelletCarry();

	void reset();
	bool pull(u16, Vector3f&, f32);
	bool pullable(u16, f32);
	void giveup(u16);
	bool frameWork(Vector3f&); // work done in a frame (pellet displacement)

	u16 mState;         // _00
	f32 mCarryStrength; // _04, the amount of pikmin pulling force (amt of
	                    // pikis) applied to the object
	Vector3f mVelocity; // _08
	f32 mTimer;         // _14, decremented by seconds per frame (deltaTime)
};
} // namespace Game

#endif
