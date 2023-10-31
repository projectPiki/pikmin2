#include "og/Screen/ScaleMgr.h"
#include "sysMath.h"
#include "System.h"
#include "trig.h"

namespace og {
namespace Screen {

/*
 * --INFO--
 * Address:	80328E04
 * Size:	000044
 */
ScaleMgr::ScaleMgr()
    : mState(SCM_Unknown_0)
{
	setParam(1.0f, 1.0f, 1.0f);
}

/*
 * --INFO--
 * Address:	80328E48
 * Size:	000048
 */
void ScaleMgr::up()
{
	mState = SCM_Growing;
	setParam(0.5f, 30.0f, 0.8f);
	_18 = 0.0f;
}

/*
 * --INFO--
 * Address:	80328E90
 * Size:	000048
 */
void ScaleMgr::down()
{
	mState = SCM_Shrinking;
	setParam(0.25f, 35.0f, 0.8f);
	_18 = 0.0f;
}

/*
 * --INFO--
 * Address:	80328ED8
 * Size:	000064
 */
void ScaleMgr::up(f32 p1, f32 periodModifier, f32 durationInSeconds, f32 p4)
{
	setParam(p1, periodModifier, durationInSeconds);
	_18 = p4;
	if (p4 < 0.01f) {
		mState = SCM_Growing;
	} else {
		mState = SCM_OtherGrowingMaybe;
	}
}

/*
 * --INFO--
 * Address:	80328F3C
 * Size:	000028
 */
void ScaleMgr::down(f32 p1, f32 periodModifier, f32 durationInSeconds)
{
	mState = SCM_Shrinking;
	setParam(p1, periodModifier, durationInSeconds);
}

/*
 * --INFO--
 * Address:	80328F64
 * Size:	000020
 */
void ScaleMgr::setParam(f32 p1, f32 periodModifier, f32 durationInSeconds)
{
	mElapsedSeconds    = 0.0f;
	mScale             = 1.0f;
	_0C                = p1;
	mPeriodModifier    = periodModifier;
	mDurationInSeconds = durationInSeconds;
}

/*
 * --INFO--
 * Address:	80328F84
 * Size:	00020C
 */
f32 ScaleMgr::calc()
{
	switch (mState) {
	case SCM_Unknown_0:
		mScale = 1.0f;
		break;

	case SCM_Growing:
		mElapsedSeconds += sys->mDeltaTime;
		if (mElapsedSeconds > mDurationInSeconds) {
			mState          = SCM_Unknown_0;
			mScale          = 1.0f;
			mElapsedSeconds = 0.0f;
		} else {
			f32 sin = sinf(mElapsedSeconds * mPeriodModifier);
			mScale  = (mDurationInSeconds - mElapsedSeconds) * (_0C * sin + _0C) + 1.0f;
		}
		break;

	case SCM_Shrinking:
		mElapsedSeconds += sys->mDeltaTime;
		if (mElapsedSeconds > mDurationInSeconds) {
			mState          = SCM_Unknown_0;
			mScale          = 1.0f;
			mElapsedSeconds = 0.0f;
		} else {
			f32 sin = sinf(mElapsedSeconds * mPeriodModifier);
			mScale  = -((mDurationInSeconds - mElapsedSeconds) * (_0C * sin + _0C) - 1.0f);
		}
		break;

	case SCM_OtherGrowingMaybe:
		mScale = 1.0f;
		_18 -= sys->mDeltaTime;
		if (_18 < 0.0f) {
			mState = SCM_Growing;
			_18    = 0.0f;
		}
		break;

	default:
		mScale = 1.0f;
	}

	return mScale;
}

} // namespace Screen
} // namespace og
