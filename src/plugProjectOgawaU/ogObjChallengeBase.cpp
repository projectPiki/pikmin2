#include "og/newScreen/Challenge.h"
#include "og/Screen/callbackNodes.h"
#include "System.h"
#include "og/Sound.h"
#include "trig.h"
#include "nans.h"

namespace og {
namespace newScreen {

/*
 * --INFO--
 * Address:	8032C8A0
 * Size:	000098
 */
ObjChallengeBase::ObjChallengeBase()
    : mFadeLevel(0.0f)
    , mScale(0.0f)
{
	mDoneChime1       = false;
	mDoneChime2       = false;
	mPaneTime         = nullptr;
	mIncTimeLeftDelay = 0.0f;
	mTimeLeft         = 0.0f;
	mWhite.set(255, 255, 255, 255);
	mBlack.set(0, 0, 0, 0);
}

/*
 * --INFO--
 * Address:	8032C938
 * Size:	0000AC
 */
ObjChallengeBase::~ObjChallengeBase() { }

/*
 * --INFO--
 * Address:	8032C9E4
 * Size:	0000A0
 */
void ObjChallengeBase::doCreateAfter(JKRArchive* arc, og::Screen::CallBack_CounterRV* timer)
{
	mPaneTime = timer->mPic1;
	mWhite    = mPaneTime->getWhite();
	mBlack    = mPaneTime->getBlack();
}

/*
 * --INFO--
 * Address:	8032CA84
 * Size:	000014
 */
bool ObjChallengeBase::doStart(::Screen::StartSceneArg const*)
{
	mFadeLevel = 0.0f;
	mScale     = 0.0f;
	return true;
}

/*
 * --INFO--
 * Address:	8032CA98
 * Size:	000010
 */
bool ObjChallengeBase::doEnd(::Screen::EndSceneArg const*)
{
	mFadeLevel = 0.0f;
	return true;
}

/*
 * --INFO--
 * Address:	8032CAA8
 * Size:	0001D0
 */
void ObjChallengeBase::updateTimer(f32 set, f32 dec)
{
	// for sublevels past 1, wait a set time before increasing the time
	if (mSubLevel != 0 && mIncTimeLeftDelay > 0.0f) {
		mIncTimeLeftDelay -= sys->mDeltaTime;
		if (dec > 0.0f && mIncTimeLeftDelay < 0.0f) {
			ogSound->setTimeCarry();
		}
		if (dec > 0.0f) {
			mTimeLeft = set - dec;
		} else {
			mTimeLeft = set;
		}
	} else {
		mTimeLeft = set;
	}
	mTimeLeftInt = mTimeLeft;

	if (mTimeLeftInt <= msBaseVal.mTimerLimitLow) {
		mPaneTime->setWhite(msBaseVal.mTimerLowWhite);
		mPaneTime->setBlack(msBaseVal.mTimerLowBlack);
	} else {
		mPaneTime->setWhite(mWhite);
		mPaneTime->setBlack(mBlack);
	}

	if (mIncTimeLeftDelay <= 0.0f) {
		if (mTimeLeftInt == 30 && !mDoneChime1) {
			mDoneChime1 = true;
			ogSound->setChime();
		}
		if (mTimeLeftInt == 10 && !mDoneChime2) {
			mDoneChime2 = true;
			ogSound->setChime();
		}
	}
}

/*
 * --INFO--
 * Address:	8032CC78
 * Size:	000008
 */
void ObjChallengeBase::setSubLevel(u32 a1) { mSubLevel = a1; }

ObjChallengeBase::StaticValues ObjChallengeBase::msBaseVal;

} // namespace newScreen
} // namespace og
