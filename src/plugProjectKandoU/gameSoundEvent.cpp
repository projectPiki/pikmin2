#include "types.h"

#include "Game/GameSystem.h"
#include "Game/TSoundEvent.h"

namespace Game {
/*
 * --INFO--
 * Address:	8022EBCC
 * Size:	00001C
 */
TSoundEvent::TSoundEvent()
    : mState(TSE_Inactive)
{
	mState    = TSE_Inactive;
	mTimer    = 0;
	mDuration = 30;
}

/*
 * --INFO--
 * Address:	8022EBE8
 * Size:	000048
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

/*
 * --INFO--
 * Address:	8022EC30
 * Size:	000010
 */
void TSoundEvent::finish() { mState |= TSE_Finish; }

/*
 * --INFO--
 * Address:	8022EC40
 * Size:	000074
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
