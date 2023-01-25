#include "Game/TimeMgr.h"
#include "JSystem/JKR/JKRDvdRipper.h"
#include "stream.h"
#include "System.h"

namespace Game {

/*
 * --INFO--
 * Address:	80126C00
 * Size:	000090
 */
TimeMgr::TimeMgr()
    : CNode("タイムマネージャ")
{
	mSpeedFactor = 1.0f;
	u8* flagPtr  = (u8*)&mFlags;
	flagPtr[0]   = 0;
	flagPtr[1]   = 0;
	flagPtr[2]   = 0;
	flagPtr[3]   = 0;
	init();
}

/*
 * --INFO--
 * Address:	80126FF0
 * Size:	0000B0
 */
void TimeMgr::init()
{
	_220                = TIMEMGR_DAY_HOURS - mParms.parms.mEveningEndTime.mValue + mParms.parms.mMorningStartTime.mValue;
	mEarlyMorningLength = mParms.parms.mMidMorningTime.mValue - mParms.parms.mMorningStartTime.mValue;
	mMidMorningLength   = mParms.parms.mMorningEndTime.mValue - mParms.parms.mMidMorningTime.mValue;
	mMiddayLength       = mParms.parms.mEveningStartTime.mValue - mParms.parms.mMorningEndTime.mValue;
	mEarlyEveningLength = mParms.parms.mMidEveningStartTime.mValue - mParms.parms.mEveningStartTime.mValue;
	mLateEveningLength  = mParms.parms.mEveningEndTime.mValue - mParms.parms.mMidEveningEndTime.mValue;
	mDayLengthHours     = mParms.parms.mDayEndTime.mValue - mParms.parms.mDayStartTime.mValue;
	mSunRatio           = TIMEMGR_DAY_HOURS - mDayLengthHours;
	mDayCount           = 0;

	setTime(mParms.parms.mDayStartTime.mValue);
}

/*
 * --INFO--
 * Address:	801270A0
 * Size:	00003C
 */
void TimeMgr::setTime(f32 time)
{
	mCurrentTimeOfDay = time;
	mCurrentHour      = (mCurrentTimeOfDay / TIMEMGR_DAY_HOURS) * mParms.parms.mDayLengthSeconds.mValue;

	updateSlot();
}

/*
 * --INFO--
 * Address:	801270DC
 * Size:	000040
 */
void TimeMgr::setStartTime()
{
	mCurrentTimeOfDay = mParms.parms.mDayStartTime.mValue;
	mCurrentHour      = (mCurrentTimeOfDay / TIMEMGR_DAY_HOURS) * mParms.parms.mDayLengthSeconds.mValue;

	updateSlot();
}

/*
 * --INFO--
 * Address:	8012711C
 * Size:	000040
 */
void TimeMgr::setEndTime()
{
	mCurrentTimeOfDay = mParms.parms.mDayEndTime.mValue;
	mCurrentHour      = (mCurrentTimeOfDay / TIMEMGR_DAY_HOURS) * mParms.parms.mDayLengthSeconds.mValue;

	updateSlot();
}

/*
 * --INFO--
 * Address:	8012715C
 * Size:	000168
 */
#pragma dont_inline on
void TimeMgr::updateSlot()
{
	if ((mCurrentTimeOfDay < mParms.parms.mMorningStartTime.mValue) || mCurrentTimeOfDay >= mParms.parms.mEveningEndTime.mValue) {
		mSlotPosition = 0;

		f32 time = mCurrentTimeOfDay;
		if (mCurrentTimeOfDay < mParms.parms.mMorningStartTime.mValue) {
			time += TIMEMGR_DAY_HOURS;
		}

		_214 = (time - mParms.parms.mEveningEndTime.mValue) / _220;
		return;
	}

	if (mCurrentTimeOfDay < mParms.parms.mMorningEndTime.mValue) {
		mSlotPosition = 1;

		if (mCurrentTimeOfDay < mParms.parms.mMidMorningTime.mValue) {
			_214 = (0.5f * (mCurrentTimeOfDay - mParms.parms.mMorningStartTime.mValue)) / mEarlyMorningLength;
			return;
		}

		_214 = 0.5f + ((0.5f * (mCurrentTimeOfDay - mParms.parms.mMidMorningTime.mValue)) / mMidMorningLength);
		return;
	}

	if (mCurrentTimeOfDay < mParms.parms.mEveningStartTime.mValue) {
		mSlotPosition = 2;
		_214          = (mCurrentTimeOfDay - mParms.parms.mMorningEndTime.mValue) / mMiddayLength;
		return;
	}

	if (mCurrentTimeOfDay < mParms.parms.mEveningEndTime.mValue) {
		mSlotPosition = 3;

		if (mCurrentTimeOfDay < mParms.parms.mMidEveningStartTime.mValue) {
			_214 = (0.5f * (mCurrentTimeOfDay - mParms.parms.mEveningStartTime.mValue)) / mEarlyEveningLength;
			return;
		}

		if (mCurrentTimeOfDay < mParms.parms.mMidEveningEndTime.mValue) {
			_214 = 0.5f;
			return;
		}

		_214 = 0.5f + ((0.5f * (mCurrentTimeOfDay - mParms.parms.mMidEveningEndTime.mValue)) / mLateEveningLength);
	}
}
#pragma dont_inline reset

/*
 * --INFO--
 * Address:	801272C4
 * Size:	000060
 */
f32 TimeMgr::getSunGaugeRatio()
{
	if (mCurrentTimeOfDay >= mParms.parms.mDayStartTime.mValue && mCurrentTimeOfDay < mParms.parms.mDayEndTime.mValue) {
		return (mCurrentTimeOfDay - mParms.parms.mDayStartTime.mValue) / mDayLengthHours;
	}

	f32 time = mCurrentTimeOfDay;
	if (mCurrentTimeOfDay < mParms.parms.mDayStartTime.mValue) {
		time += TIMEMGR_DAY_HOURS;
	}

	return 1.0f - ((time - mParms.parms.mDayEndTime.mValue) / mSunRatio);
}

/*
 * --INFO--
 * Address:	80127324
 * Size:	000074
 */
void TimeMgr::update()
{
	if (!(mFlags & TIMEMGR_FLAG_STOPPED)) {
		mCurrentHour += mSpeedFactor * sys->mDeltaTime;

		if (mCurrentHour > mParms.parms.mDayLengthSeconds.mValue) {
			mCurrentHour -= mParms.parms.mDayLengthSeconds.mValue;
		}

		mCurrentTimeOfDay = TIMEMGR_DAY_HOURS * (mCurrentHour / mParms.parms.mDayLengthSeconds.mValue);

		updateSlot();
	}
}

/*
 * --INFO--
 * Address:	80127398
 * Size:	000018
 */
bool TimeMgr::isDayOver() { return mCurrentTimeOfDay > mParms.parms.mDayEndTime.mValue; }

/*
 * --INFO--
 * Address:	801273B0
 * Size:	000030
 */
bool TimeMgr::isDayTime()
{
	return mCurrentTimeOfDay > mParms.parms.mDayStartTime.mValue && mCurrentTimeOfDay <= mParms.parms.mDayEndTime.mValue;
}

/*
 * --INFO--
 * Address:	801273E0
 * Size:	000020
 */
f32 TimeMgr::getRealDayTime()
{
	return mParms.parms.mDayLengthSeconds.mValue
	     * ((mParms.parms.mDayEndTime.mValue - mParms.parms.mDayStartTime.mValue) / TIMEMGR_DAY_HOURS);
}

/*
 * --INFO--
 * Address:	80127400
 * Size:	000150
 */
void TimeMgr::loadSettingFile(char* filename)
{
	loadAndRead(&mParms.parms, filename, JKRHeap::sSystemHeap);

	_220                = TIMEMGR_DAY_HOURS - mParms.parms.mEveningEndTime.mValue + mParms.parms.mMorningStartTime.mValue;
	mEarlyMorningLength = mParms.parms.mMidMorningTime.mValue - mParms.parms.mMorningStartTime.mValue;
	mMidMorningLength   = mParms.parms.mMorningEndTime.mValue - mParms.parms.mMidMorningTime.mValue;
	mMiddayLength       = mParms.parms.mEveningStartTime.mValue - mParms.parms.mMorningEndTime.mValue;
	mEarlyEveningLength = mParms.parms.mMidEveningStartTime.mValue - mParms.parms.mEveningStartTime.mValue;
	mLateEveningLength  = mParms.parms.mEveningEndTime.mValue - mParms.parms.mMidEveningEndTime.mValue;
	mDayLengthHours     = mParms.parms.mDayEndTime.mValue - mParms.parms.mDayStartTime.mValue;
	mSunRatio           = TIMEMGR_DAY_HOURS - mDayLengthHours;
	mDayCount           = 0;
	mCurrentTimeOfDay   = mParms.parms.mDayStartTime.mValue;
	mCurrentHour        = mCurrentTimeOfDay / TIMEMGR_DAY_HOURS * mParms.parms.mDayLengthSeconds.mValue;

	updateSlot();
}

} // namespace Game
