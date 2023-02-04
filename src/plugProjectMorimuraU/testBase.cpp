#include "Morimura/Bases.h"

namespace Morimura {
bool TTestBase::mIsSection;

/*
 * --INFO--
 * Address:	803491C8
 * Size:	000084
 */
TTestBase::TTestBase(char* name)
{
	mTimer        = 0.0f;
	mTimerLength  = 0.5f;
	mFadeFraction = 0.0f;
	mFadeAlpha    = 0;
	mCanInput     = false;

	strcpy(mBaseName, name);
	mName = mBaseName;
}

/*
 * --INFO--
 * Address:	8034924C
 * Size:	000020
 */
bool TTestBase::doStart(Screen::StartSceneArg const*)
{
	mFadeFraction = 0.0f;
	mTimer        = 0.0f;
	mFadeAlpha    = 0;
	mCanInput     = false;

	return true;
}

/*
 * --INFO--
 * Address:	8034926C
 * Size:	000010
 */
bool TTestBase::doEnd(Screen::EndSceneArg const*)
{
	mTimer = 0.0f;
	return true;
}

/*
 * --INFO--
 * Address:	8034927C
 * Size:	0000B0
 */
bool TTestBase::doUpdateFadein()
{
	// Increase the fade timer, if it goes over the max, then clamp it
	mTimer += sys->mDeltaTime;
	if (mTimer > mTimerLength) {
		mTimer = mTimerLength;
	}

	// Work out the fade-in amount based on the timer
	mFadeFraction = mTimer / mTimerLength;
	mFadeAlpha    = 255.0f * mFadeFraction;

	doUpdate();

	// Function returns true if the fade-in is done
	if (mTimer >= mTimerLength) {
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	8034932C
 * Size:	00000C
 */
void TTestBase::doUpdateFinish() { mTimer = 0.0f; }

/*
 * --INFO--
 * Address:	80349338
 * Size:	0000B8
 */
bool TTestBase::doUpdateFadeout()
{
	// Increase the fade timer, if it goes over the max, then clamp it
	mTimer += sys->mDeltaTime;
	if (mTimer > mTimerLength) {
		mTimer = mTimerLength;
	}

	// An equation that works out the inverse of the fade-in
	mFadeFraction = 1.0f - (mTimer / mTimerLength);
	mFadeAlpha    = 255.0f * mFadeFraction;

	doUpdate();

	// Function returns true if the fade-out is done
	if (mTimer >= mTimerLength) {
		return true;
	}

	return false;
}
} // namespace Morimura
