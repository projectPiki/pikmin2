#include "Game/PelletCarry.h"
#include "System.h"

namespace Game {
/*
 * --INFO--
 * Address:	80234EF8
 * Size:	000030
 */
PelletCarry::PelletCarry() { reset(); }

/*
 * --INFO--
 * Address:	80234F28
 * Size:	000028
 */
void PelletCarry::reset()
{
	mState         = PCS_Idle;
	mVelocity      = Vector3f(0.0f);
	mTimer         = 0.0f;
	mCarryStrength = 0.0f;
}

/*
 * --INFO--
 * Address:	80234F50
 * Size:	000084
 */
bool PelletCarry::pull(u16 state, Vector3f& velocity, f32 carryAmt)
{
	if (mState == PCS_Idle || mState == state) {
		mState = state;
		mVelocity.set(velocity);
		mCarryStrength = carryAmt;
		return true;

	} else if (carryAmt > mCarryStrength) {
		mState = state;
		mVelocity.set(velocity);
		mCarryStrength = carryAmt;
		mTimer         = 0.5f;

		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	80234FD4
 * Size:	000034
 */
bool PelletCarry::pullable(u16 state, f32 carryAmt)
{
	if (mState == PCS_Idle || mState == state) {
		return true;
	}

	return carryAmt > mCarryStrength;
}

/*
 * --INFO--
 * Address:	80235008
 * Size:	000034
 */
void PelletCarry::giveup(u16 state)
{
	if (mState != state) {
		return;
	}

	mState         = PCS_Idle;
	mVelocity      = Vector3f(0.0f);
	mCarryStrength = 0.0f;
}

/*
 * --INFO--
 * Address:	8023503C
 * Size:	000064
 */
bool PelletCarry::frameWork(Vector3f& velocity)
{
	// Work done in a frame
	if (mState != PCS_Idle) {
		if (mTimer > 0.0f) {
			mTimer -= sys->mDeltaTime;
			velocity = Vector3f(0.0f);

		} else {
			velocity = mVelocity;
		}

		return true;
	}

	return false;
}
} // namespace Game
