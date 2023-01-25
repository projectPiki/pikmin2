#include "ebi/Utility.h"
#include "System.h"

namespace ebi {

/*
 * --INFO--
 * Address:	803C1A3C
 * Size:	000060
 */
void EUTPadInterface_countNum::init(Controller* controller, long arg1, long arg2, long* arg3, enumMode mode, f32 arg5, f32 arg6)
{
	mController  = controller;
	_10          = arg1;
	_14          = arg2;
	_18          = arg3;
	mMode        = mode;
	mTimeFactor1 = arg5;
	mTimeFactor2 = arg6;
	mCounter     = 0;
	_08          = 0;

	if (*_18 < arg1) {
		*_18 = arg1;
	}
	if (*_18 > arg2) {
		*_18 = arg2;
	}
	_1C = *_18;
}

/*
 * --INFO--
 * Address:	803C1A9C
 * Size:	000304
 */
// TODO: https://decomp.me/scratch/zHh5R
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
		isForwards  = (mController->mButton.mMask & Controller::PRESS_DPAD_LEFT) || (mController->mMStick.mXPos < -0.5f);
		isBackwards = (mController->mButton.mMask & Controller::PRESS_DPAD_RIGHT) || (mController->mMStick.mXPos > 0.5f);
		break;
	case MODE_RIGHTLEFT:
		isForwards  = (mController->mButton.mMask & Controller::PRESS_DPAD_RIGHT) || (mController->mMStick.mXPos > 0.5f);
		isBackwards = (mController->mButton.mMask & Controller::PRESS_DPAD_RIGHT) || (mController->mMStick.mXPos < -0.5f);
		break;
	case MODE_UPDOWN:
		isForwards  = (mController->mButton.mMask & Controller::PRESS_DPAD_UP) || (mController->mMStick.mYPos > 0.5f);
		isBackwards = (mController->mButton.mMask & Controller::PRESS_DPAD_DOWN) || (mController->mMStick.mYPos < -0.5f);
		break;
	case MODE_DOWNUP:
		isForwards  = (mController->mButton.mMask & Controller::PRESS_DPAD_DOWN) || (mController->mMStick.mYPos < -0.5f);
		isBackwards = (mController->mButton.mMask & Controller::PRESS_DPAD_UP) || (mController->mMStick.mYPos > 0.5f);
		break;
	}

	if (isForwards) {
		if (!mCounter) {
			if (*_18 < _14) {
				_1C = *_18;
				*_18 += 1;
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
			if (*_18 > _10) {
				_1C = *_18;
				*_18 -= 1;
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
void EUTColor_complement(JUtility::TColor& color1, JUtility::TColor& color2, f32 f1, f32 f2, JUtility::TColor* color3)
{
	color3->r = f1 * color1.r + f2 * color2.r;
	color3->g = f1 * color1.g + f2 * color2.g;
	color3->b = f1 * color1.b + f2 * color2.b;
	color3->a = f1 * color1.a + f2 * color2.a;
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
