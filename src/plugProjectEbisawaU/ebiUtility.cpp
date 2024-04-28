#include "ebi/Utility.h"

namespace ebi {

/**
 * @note Address: 0x803C1A3C
 * @note Size: 0x60
 */
void EUTPadInterface_countNum::init(Controller* controller, s32 min, s32 max, s32* selValue, enumMode mode, f32 timeFactor1,
                                    f32 timeFactor2)
{
	mController  = controller;
	mMinSel      = min;
	mMaxSel      = max;
	mSelIndex    = selValue;
	mMode        = mode;
	mTimeFactor1 = timeFactor1;
	mTimeFactor2 = timeFactor2;
	mCounter     = 0;
	mCounterMax  = 0;

	if (*mSelIndex < min) {
		*mSelIndex = min;
	}
	if (*mSelIndex > max) {
		*mSelIndex = max;
	}
	mLastIndex = *mSelIndex;
}

/**
 * @note Address: 0x803C1A9C
 * @note Size: 0x304
 */
void EUTPadInterface_countNum::update()
{
	if (mCounter) {
		mCounter--;
	}
	mSelectionChanged = 0;

	bool isForwards;
	bool isBackwards;

	switch (mMode) {
	case MODE_LEFTRIGHT:
		isForwards  = mController->isMoveLeft();
		isBackwards = mController->isMoveRight();
		break;

	case MODE_RIGHTLEFT:
		isForwards  = mController->isMoveRight();
		isBackwards = mController->isMoveLeft();
		break;
	case MODE_UPDOWN:
		isForwards  = mController->isMoveUp();
		isBackwards = mController->isMoveDown();
		break;
	case MODE_DOWNUP:
		isForwards  = mController->isMoveDown();
		isBackwards = mController->isMoveUp();
		break;
	}

	if (isForwards) {
		if (!mCounter) {
			if (*mSelIndex < mMaxSel) {
				mLastIndex = *mSelIndex;
				*mSelIndex += 1;
				mSelectionChanged = 1;
				if (!mIsChanging) {
					mIsChanging = true;
					f32 time    = (mTimeFactor1 / sys->mDeltaTime);
					mCounter    = time;
					mCounterMax = time;
					return;
				}
				f32 time    = (mTimeFactor2 / sys->mDeltaTime);
				mCounter    = time;
				mCounterMax = time;
			}
		}
	} else if (isBackwards) {
		if (mCounter == 0) {
			if (*mSelIndex > mMinSel) {
				mLastIndex = *mSelIndex;
				*mSelIndex -= 1;
				mSelectionChanged = 1;
				if (!mIsChanging) {
					mIsChanging = true;
					f32 time    = (mTimeFactor1 / sys->mDeltaTime);
					mCounter    = time;
					mCounterMax = time;
					return;
				}
				f32 time    = (mTimeFactor2 / sys->mDeltaTime);
				mCounter    = time;
				mCounterMax = time;
			}
		}
	} else {
		mIsChanging = false;
		mCounter    = 0;
		mCounterMax = 0;
	}
}

/**
 * @note Address: 0x803C1DA0
 * @note Size: 0x114
 */
void EUTColor_complement(JUtility::TColor& color1, JUtility::TColor& color2, f32 color1Weight, f32 color2Weight, JUtility::TColor* outColor)
{
	outColor->r = color1Weight * color1.r + color2Weight * color2.r;
	outColor->g = color1Weight * color1.g + color2Weight * color2.g;
	outColor->b = color1Weight * color1.b + color2Weight * color2.b;
	outColor->a = color1Weight * color1.a + color2Weight * color2.a;
}

/**
 * @note Address: 0x803C1EB4
 * @note Size: 0x4
 */
void EUTDebug_Tag64ToName(u64, char*) { }

/**
 * @note Address: 0x803C1EB8
 * @note Size: 0x4
 */
void EUTDebug_Tag32ToName(u32, char*) { }
} // namespace ebi
