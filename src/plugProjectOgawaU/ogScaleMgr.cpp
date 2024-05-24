#include "og/Screen/ScaleMgr.h"
#include "sysMath.h"
#include "System.h"
#include "trig.h"

namespace og {
namespace Screen {

/**
 * @note Address: 0x80328E04
 * @note Size: 0x44
 */
ScaleMgr::ScaleMgr()
    : mState(SCM_Inactive)
{
	setParam(1.0f, 1.0f, 1.0f); // restore amp 1, ang freq 1, max duration 1s
}

/**
 * @note Address: 0x80328E48
 * @note Size: 0x48
 */
void ScaleMgr::up()
{
	mState = SCM_Up;
	setParam(0.5f, 30.0f, 0.8f); // restore amp 0.5, ang freq 30, max duration 0.8s
	mDelayTimer = 0.0f;
}

/**
 * @note Address: 0x80328E90
 * @note Size: 0x48
 */
void ScaleMgr::down()
{
	mState = SCM_Down;
	setParam(0.25f, 35.0f, 0.8f); // restore amp 0.25, ang freq 35, max duration 0.8s
	mDelayTimer = 0.0f;
}

/**
 * @note Address: N/A
 * @note Size: 0xA0
 */
void ScaleMgr::up(f32 delayTime)
{
	setParam(0.5f, 30.0f, 0.8f); // restore amp 0.5, ang freq 30, max duration 0.8s
	mDelayTimer = delayTime;
	if (delayTime < 0.01f) {
		mState = SCM_Up;
	} else {
		mState = SCM_DelayedUp;
	}
}

/**
 * @note Address: 0x80328ED8
 * @note Size: 0x64
 */
void ScaleMgr::up(f32 restoreAmp, f32 angFreq, f32 maxRestoreTime, f32 delayTime)
{
	setParam(restoreAmp, angFreq, maxRestoreTime);
	mDelayTimer = delayTime;
	if (delayTime < 0.01f) {
		mState = SCM_Up;
	} else {
		mState = SCM_DelayedUp;
	}
}

/**
 * @note Address: 0x80328F3C
 * @note Size: 0x28
 */
void ScaleMgr::down(f32 restoreAmp, f32 angFreq, f32 maxRestoreTime)
{
	mState = SCM_Down;
	setParam(restoreAmp, angFreq, maxRestoreTime);
}

/**
 * @note Address: 0x80328F64
 * @note Size: 0x20
 */
void ScaleMgr::setParam(f32 restoreAmp, f32 angFreq, f32 maxRestoreTime)
{
	mRestoreTimer     = 0.0f;
	mScale            = 1.0f;
	mRestoreAmplitude = restoreAmp;
	mAngularFreq      = angFreq;
	mMaxRestoreTime   = maxRestoreTime;
}

/**
 * @note Address: 0x80328F84
 * @note Size: 0x20C
 */
f32 ScaleMgr::calc()
{
	switch (mState) {
	case SCM_Inactive:
		mScale = 1.0f;
		break;

	case SCM_Up:
		mRestoreTimer += sys->mDeltaTime;
		if (mRestoreTimer > mMaxRestoreTime) {
			mState        = SCM_Inactive;
			mScale        = 1.0f;
			mRestoreTimer = 0.0f;
		} else {
			// jump up to a value based on max restore time and amplitude, then bounce back down to 1
			f32 sin = sinf(mRestoreTimer * mAngularFreq);
			mScale  = (mMaxRestoreTime - mRestoreTimer) * (mRestoreAmplitude * sin + mRestoreAmplitude) + 1.0f;
		}
		break;

	case SCM_Down:
		mRestoreTimer += sys->mDeltaTime;
		if (mRestoreTimer > mMaxRestoreTime) {
			mState        = SCM_Inactive;
			mScale        = 1.0f;
			mRestoreTimer = 0.0f;
		} else {
			// jump down to a value based on max restore time and amplitude, then bounce back up to 1
			f32 sin = sinf(mRestoreTimer * mAngularFreq);
			mScale  = 1.0f - (mMaxRestoreTime - mRestoreTimer) * (mRestoreAmplitude * sin + mRestoreAmplitude);
		}
		break;

	case SCM_DelayedUp:
		mScale = 1.0f;
		mDelayTimer -= sys->mDeltaTime;
		if (mDelayTimer < 0.0f) {
			mState      = SCM_Up;
			mDelayTimer = 0.0f;
		}
		break;

	default:
		mScale = 1.0f;
	}

	return mScale;
}

} // namespace Screen
} // namespace og
