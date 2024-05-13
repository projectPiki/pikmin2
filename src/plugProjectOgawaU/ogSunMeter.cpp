#include "og/Screen/callbackNodes.h"
#include "og/Screen/SunMeter.h"
#include "og/Screen/ogScreen.h"
#include "og/Sound.h"
#include "math.h"
#include "trig.h"

namespace og {
namespace Screen {
/**
 * @note Address: N/A
 * @note Size: 0xB4
 */
CallBack_SunMeter::CallBack_SunMeter()
{
	mTimer            = 0.0f;
	mCurrentTime      = nullptr;
	mStartPane        = nullptr;
	mEndPane          = nullptr;
	mSuniPane         = nullptr;
	mSun1Pane         = nullptr;
	mSun2Pane         = nullptr;
	mHasChimedNoon    = false;
	mHasChimedMorning = false;
	mHasChimedEvening = false;
	mScaleMgr         = new ScaleMgr;
}

/**
 * @note Address: N/A
 * @note Size: 0x108
 */
void CallBack_SunMeter::init(J2DScreen* canvas, f32* time)
{
	mCurrentTime      = time;
	mStartPane        = canvas->search('stat');
	mEndPane          = canvas->search('goal');
	mSuniPane         = canvas->search('suni');
	mSun1Pane         = canvas->search('sun1');
	mSun2Pane         = canvas->search('sun2');
	mHasChimedNoon    = false;
	mHasChimedMorning = false;
	mHasChimedEvening = false;
	mSuniPane->setBasePosition(J2DPOS_Center);
}

/**
 * @note Address: 0x80307294
 * @note Size: 0x23C
 */
void CallBack_SunMeter::update()
{
	f32 currentTime = *mCurrentTime;
	// Between 0.297 - 0.3, chime
	if (0.297f < currentTime && currentTime < 0.3f && !mHasChimedMorning) {
		mHasChimedMorning = true;
		ogSound->setChime();
		startEffectChime();
	}

	// Between 0.497 - 0.5, chime
	if (0.497f < currentTime && currentTime < 0.5f && !mHasChimedNoon) {
		mHasChimedNoon = true;
		ogSound->setChimeNoon();
		startEffectChime();
	}

	// Between 0.697 - 0.7, chime
	if (0.697f < currentTime && currentTime < 0.7f && !mHasChimedEvening) {
		mHasChimedEvening = true;
		ogSound->setChime();
		startEffectChime();
	}

	mTimer += 1.0f;

	f32 x0 = mStartPane->getBounds()->i.x;
	f32 x1 = mEndPane->getBounds()->i.x;
	f32 y  = mSuniPane->getBounds()->i.y;
	f32 x  = currentTime * (x1 - x0) + x0;
	mSuniPane->move(x, y);

	mSun1Pane->rotate(mSun1Pane->getWidth() / 2, mSun1Pane->getHeight() / 2, J2DROTATE_Z, -mTimer);

	f32 sinVal = sin(-mTimer * DEG2RAD * PI * 2.0f);
	f32 alpha  = sinVal * 64.0f + 191.0f;

	mSun1Pane->setAlphaFromFloat(alpha);
	mSuniPane->updateScale(mScaleMgr->calc());
}

/**
 * @note Address: 0x803074D0
 * @note Size: 0x34
 */
void CallBack_SunMeter::startEffectChime() { mScaleMgr->up(0.3f, 30.0f, 0.7f, 0.0f); }

/**
 * @note Address: 0x80307504
 * @note Size: 0x44
 */
SunMeter::SunMeter() { mCurrentTime = 0.0f; }

/**
 * @note Address: 0x80307548
 * @note Size: 0x1B4
 */
void SunMeter::setCallBack()
{
	setAlphaScreen(this);
	mCallBack = new CallBack_SunMeter();
	mCallBack->init(this, &mCurrentTime);
	addCallBack('suni', mCallBack);
}
} // namespace Screen
} // namespace og
