#include "Game/PelletCarry.h"
#include "System.h"

namespace Game {
/**
 * @note Address: 0x80234EF8
 * @note Size: 0x30
 */
PelletCarry::PelletCarry() { reset(); }

/**
 * @note Address: 0x80234F28
 * @note Size: 0x28
 */
void PelletCarry::reset()
{
	mState         = PCS_Idle;
	mVelocity      = Vector3f(0.0f);
	mTimer         = 0.0f;
	mCarryStrength = 0.0f;
}

/**
 * @note Address: 0x80234F50
 * @note Size: 0x84
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

/**
 * @note Address: 0x80234FD4
 * @note Size: 0x34
 */
bool PelletCarry::pullable(u16 state, f32 carryAmt)
{
	if (mState == PCS_Idle || mState == state) {
		return true;
	}

	return carryAmt > mCarryStrength;
}

/**
 * @note Address: 0x80235008
 * @note Size: 0x34
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

/**
 * @note Address: 0x8023503C
 * @note Size: 0x64
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
