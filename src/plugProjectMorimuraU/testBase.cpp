#include "Morimura/Bases.h"

namespace Morimura {
bool TTestBase::mIsSection;

/**
 * @note Address: 0x803491C8
 * @note Size: 0x84
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

/**
 * @note Address: 0x8034924C
 * @note Size: 0x20
 */
bool TTestBase::doStart(Screen::StartSceneArg const*)
{
	mFadeFraction = 0.0f;
	mTimer        = 0.0f;
	mFadeAlpha    = 0;
	mCanInput     = false;

	return true;
}

/**
 * @note Address: 0x8034926C
 * @note Size: 0x10
 */
bool TTestBase::doEnd(Screen::EndSceneArg const*)
{
	mTimer = 0.0f;
	return true;
}

/**
 * @note Address: 0x8034927C
 * @note Size: 0xB0
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

/**
 * @note Address: 0x8034932C
 * @note Size: 0xC
 */
void TTestBase::doUpdateFinish() { mTimer = 0.0f; }

/**
 * @note Address: 0x80349338
 * @note Size: 0xB8
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
