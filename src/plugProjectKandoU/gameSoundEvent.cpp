#include "types.h"

#include "Game/GameSystem.h"
#include "Game/TSoundEvent.h"

namespace Game {
/**
 * @note Address: 0x8022EBCC
 * @note Size: 0x1C
 */
TSoundEvent::TSoundEvent()
    : mState(TSE_Inactive)
{
	mState    = TSE_Inactive;
	mTimer    = 0;
	mDuration = 30;
}

/**
 * @note Address: 0x8022EBE8
 * @note Size: 0x48
 */
u32 TSoundEvent::event()
{
	mTimer = Game::gameSystem->mFrameTimer;
	if (!(mState & TSE_Active)) {
		mState |= TSE_Active;
		return TSE_Active;
	}

	if (mState & TSE_ApplyTransition) {
		mState &= ~TSE_ApplyTransition;
		return TSE_Apply;
	}

	return TSE_Inactive;
}

/**
 * @note Address: 0x8022EC30
 * @note Size: 0x10
 */
void TSoundEvent::finish() { mState |= TSE_Finish; }

/**
 * @note Address: 0x8022EC40
 * @note Size: 0x74
 */
u32 TSoundEvent::update()
{
	// Checks if the event isn't finished, has gone over the duration of the
	// event, is active and hasn't been applied yet, and then changes the state
	// to transition to apply the event.
	if (!(mState & TSE_Finish) && Game::gameSystem->calcFrameDist(mTimer) > mDuration && mState & TSE_Active
	    && !(mState & TSE_ApplyTransition)) {
		mState |= TSE_ApplyTransition;
		return TSE_ApplyTransition;
	}

	return TSE_Inactive;
}
} // namespace Game
