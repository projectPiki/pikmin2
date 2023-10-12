#include "og/Screen/AngleMgr.h"
#include "Dolphin/math.h"

namespace og {
namespace Screen {
/*
 * --INFO--
 * Address:	8033028C
 * Size:	00002C
 */
AngleMgr::AngleMgr()
{
	mCurrentAngle = 0.0f;
	mAngleStep    = 0.0f;
	mTargetAngle  = 0.0f;
	mInterpRate   = 0.3f;
	mScale        = 1.0f;
	mState        = AGM_Start;
}

/*
 * --INFO--
 * Address:	803302B8
 * Size:	000010
 */
void AngleMgr::init(f32 curAngle, f32 interpRate, f32 scale)
{
	mCurrentAngle = curAngle;
	mInterpRate   = interpRate;
	mScale        = scale;
}

/*
 * --INFO--
 * Address:	803302C8
 * Size:	000080
 */
void AngleMgr::chase(f32 target, f32 step)
{
	// Wrap to (0, TAU)
	mTargetAngle = target;
	while (mTargetAngle < 0.0f) {
		mTargetAngle += TAU;
	}

	while (mTargetAngle > TAU) {
		mTargetAngle -= TAU;
	}

	// Wrap to (-HALF_PI, HALF_PI)
	mAngleStep = step;
	if (mAngleStep > HALF_PI) {
		mAngleStep = HALF_PI;
	}
	if (mAngleStep < -HALF_PI) {
		mAngleStep = -HALF_PI;
	}

	mState = AGM_Chase;
}

/*
 * --INFO--
 * Address:	80330348
 * Size:	0001A8
 */
f32 AngleMgr::calc()
{
	if (mState == AGM_Chase) {
		mCurrentAngle += mAngleStep;

		if (mCurrentAngle < 0.0f) {
			mCurrentAngle += TAU;
		} else if (mCurrentAngle >= TAU) {
			mCurrentAngle = (mCurrentAngle - TAU);
		}

		f32 distance = mTargetAngle - mCurrentAngle;
		if (FABS(distance) > PI) {
			// TODO: figure out what f2 is!
			f32 f2 = TAU - FABS(distance);
			if (distance > 0.0f) {
				if ((mAngleStep > 0.0f) && (f2 > FABS(mAngleStep * mScale))) {
					mAngleStep = (-mAngleStep * mInterpRate);
				}
			} else if ((mAngleStep < 0.0f) && (f2 > FABS(mAngleStep * mScale))) {
				mAngleStep = (-mAngleStep * mInterpRate);
			}
		} else {
			f32 f2 = FABS(distance);
			if (distance > 0.0f) {
				if ((mAngleStep < 0.0f) && (f2 > FABS(mAngleStep * mScale))) {
					mAngleStep = (-mAngleStep * mInterpRate);
				}
			} else if ((mAngleStep > 0.0f) && (f2 > FABS(mAngleStep * mScale))) {
				mAngleStep = (-mAngleStep * mInterpRate);
			}
		}

		if (FABS(mAngleStep) < 0.001f) {
			mState        = AGM_Finish;
			mCurrentAngle = mTargetAngle;
			mAngleStep    = 0.0f;
		}
	}

	return mCurrentAngle;
}
} // namespace Screen
} // namespace og
