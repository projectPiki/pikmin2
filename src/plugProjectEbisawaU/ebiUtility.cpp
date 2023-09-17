#include "ebi/Utility.h"
#include "System.h"

namespace ebi {

/*
 * --INFO--
 * Address:	803C1A3C
 * Size:	000060
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
	_08          = 0;

	if (*mSelIndex < min) {
		*mSelIndex = min;
	}
	if (*mSelIndex > max) {
		*mSelIndex = max;
	}
	mLastIndex = *mSelIndex;
}

/*
 * --INFO--
 * Address:	803C1A9C
 * Size:	000304
 */
void EUTPadInterface_countNum::update()
{
	if (mCounter) {
		mCounter--;
	}
	_0D = 0;

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
				_0D = 1;
				if (!mIsChanging) {
					mIsChanging = true;
					f32 time    = (mTimeFactor1 / sys->mDeltaTime);
					mCounter    = time;
					_08         = time;
					return;
				}
				f32 time = (mTimeFactor2 / sys->mDeltaTime);
				mCounter = time;
				_08      = time;
			}
		}
	} else if (isBackwards) {
		if (mCounter == 0) {
			if (*mSelIndex > mMinSel) {
				mLastIndex = *mSelIndex;
				*mSelIndex -= 1;
				_0D = 1;
				if (!mIsChanging) {
					mIsChanging = true;
					f32 time    = (mTimeFactor1 / sys->mDeltaTime);
					mCounter    = time;
					_08         = time;
					return;
				}
				f32 time = (mTimeFactor2 / sys->mDeltaTime);
				mCounter = time;
				_08      = time;
			}
		}
	} else {
		mIsChanging = false;
		mCounter    = 0;
		_08         = 0;
	}
}

/*
 * --INFO--
 * Address:	803C1DA0
 * Size:	000114
 */
void EUTColor_complement(JUtility::TColor& color1, JUtility::TColor& color2, f32 color1Weight, f32 color2Weight, JUtility::TColor* outColor)
{
	outColor->r = color1Weight * color1.r + color2Weight * color2.r;
	outColor->g = color1Weight * color1.g + color2Weight * color2.g;
	outColor->b = color1Weight * color1.b + color2Weight * color2.b;
	outColor->a = color1Weight * color1.a + color2Weight * color2.a;
}

/*
 * --INFO--
 * Address:	803C1EB4
 * Size:	000004
 */
void EUTDebug_Tag64ToName(u64, char*) { }

/*
 * --INFO--
 * Address:	803C1EB8
 * Size:	000004
 */
void EUTDebug_Tag32ToName(u32, char*) { }
} // namespace ebi
