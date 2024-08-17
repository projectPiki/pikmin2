#include "Game/TimeMgr.h"
#include "JSystem/JKernel/JKRDvdRipper.h"
#include "stream.h"
#include "System.h"

namespace Game {

/**
 * @note Address: 0x80126C00
 * @note Size: 0x90
 */
TimeMgr::TimeMgr()
    : CNode("タイムマネージャ")
    , mSpeedFactor(1.0f)
{
	init();
}

/**
 * @note Address: 0x80126FF0
 * @note Size: 0xB0
 */
void TimeMgr::init()
{
	mNightLength        = TIMEMGR_DAY_HOURS - mParms.mParms.mEveningEndTime.mValue + mParms.mParms.mMorningStartTime.mValue;
	mEarlyMorningLength = mParms.mParms.mMidMorningTime.mValue - mParms.mParms.mMorningStartTime.mValue;
	mMidMorningLength   = mParms.mParms.mMorningEndTime.mValue - mParms.mParms.mMidMorningTime.mValue;
	mMiddayLength       = mParms.mParms.mEveningStartTime.mValue - mParms.mParms.mMorningEndTime.mValue;
	mEarlyEveningLength = mParms.mParms.mMidEveningStartTime.mValue - mParms.mParms.mEveningStartTime.mValue;
	mLateEveningLength  = mParms.mParms.mEveningEndTime.mValue - mParms.mParms.mMidEveningEndTime.mValue;
	mGameDayLength      = mParms.mParms.mDayEndTime.mValue - mParms.mParms.mDayStartTime.mValue;
	mGameNightLength    = TIMEMGR_DAY_HOURS - mGameDayLength;
	mDayCount           = 0;

	setTime(mParms.mParms.mDayStartTime.mValue);
}

/**
 * @note Address: 0x801270A0
 * @note Size: 0x3C
 */
void TimeMgr::setTime(f32 time)
{
	mCurrentTimeOfDay = time;
	mCurrentRealTime  = (mCurrentTimeOfDay / TIMEMGR_DAY_HOURS) * mParms.mParms.mDayLengthSeconds.mValue;

	updateSlot();
}

/**
 * @note Address: 0x801270DC
 * @note Size: 0x40
 */
void TimeMgr::setStartTime()
{
	mCurrentTimeOfDay = mParms.mParms.mDayStartTime.mValue;
	mCurrentRealTime  = (mCurrentTimeOfDay / TIMEMGR_DAY_HOURS) * mParms.mParms.mDayLengthSeconds.mValue;

	updateSlot();
}

/**
 * @note Address: 0x8012711C
 * @note Size: 0x40
 */
void TimeMgr::setEndTime()
{
	mCurrentTimeOfDay = mParms.mParms.mDayEndTime.mValue;
	mCurrentRealTime  = (mCurrentTimeOfDay / TIMEMGR_DAY_HOURS) * mParms.mParms.mDayLengthSeconds.mValue;

	updateSlot();
}

/**
 * @note Address: 0x8012715C
 * @note Size: 0x168
 */
#pragma dont_inline on
void TimeMgr::updateSlot()
{
	// NIGHT
	if ((mCurrentTimeOfDay < mParms.mParms.mMorningStartTime.mValue) || mCurrentTimeOfDay >= mParms.mParms.mEveningEndTime.mValue) {
		mLightSetting = SUNTIME_Night;

		// linear increase from 0 to 1 as night goes from 7pm to 5:15am
		f32 time = mCurrentTimeOfDay;
		if (mCurrentTimeOfDay < mParms.mParms.mMorningStartTime.mValue) {
			time += TIMEMGR_DAY_HOURS;
		}

		mLightSettingRatio = (time - mParms.mParms.mEveningEndTime.mValue) / mNightLength;
		return;
	}

	// MORNING
	if (mCurrentTimeOfDay < mParms.mParms.mMorningEndTime.mValue) {
		mLightSetting = SUNTIME_Morning;

		// linear increase from 0 to 0.5 as morning goes from 5:15am to 7am (slower)
		if (mCurrentTimeOfDay < mParms.mParms.mMidMorningTime.mValue) {
			mLightSettingRatio = (0.5f * (mCurrentTimeOfDay - mParms.mParms.mMorningStartTime.mValue)) / mEarlyMorningLength;
			return;
		}

		// linear increase from 0.5 to 1 as morning goes from 7am to 8am (faster)
		mLightSettingRatio = 0.5f + ((0.5f * (mCurrentTimeOfDay - mParms.mParms.mMidMorningTime.mValue)) / mMidMorningLength);
		return;
	}

	// NOON
	if (mCurrentTimeOfDay < mParms.mParms.mEveningStartTime.mValue) {
		mLightSetting = SUNTIME_Noon;

		// linear increase from 0 to 1 as day goes from 8am to 3pm
		mLightSettingRatio = (mCurrentTimeOfDay - mParms.mParms.mMorningEndTime.mValue) / mMiddayLength;
		return;
	}

	// EVENING
	if (mCurrentTimeOfDay < mParms.mParms.mEveningEndTime.mValue) {
		mLightSetting = SUNTIME_Evening;

		// linear increase from 0 to 0.5 as evening goes from 3pm to 3:30pm (fast)
		if (mCurrentTimeOfDay < mParms.mParms.mMidEveningStartTime.mValue) {
			mLightSettingRatio = (0.5f * (mCurrentTimeOfDay - mParms.mParms.mEveningStartTime.mValue)) / mEarlyEveningLength;
			return;
		}

		// steady at 0.5 as evening goes from 3:30pm to 6:30pm
		if (mCurrentTimeOfDay < mParms.mParms.mMidEveningEndTime.mValue) {
			mLightSettingRatio = 0.5f;
			return;
		}

		// linear increase from 0.5 to 1 as evening goes from 6:30pm to 7pm (fast), i.e. during countdown
		mLightSettingRatio = 0.5f + ((0.5f * (mCurrentTimeOfDay - mParms.mParms.mMidEveningEndTime.mValue)) / mLateEveningLength);
	}
}
#pragma dont_inline reset

/**
 * @note Address: 0x801272C4
 * @note Size: 0x60
 */
f32 TimeMgr::getSunGaugeRatio()
{
	// if we're during gameplay time, make sun gauge appropriate ratio between 0 and 1 (0 at 7am landing, 1 at 7pm liftoff)
	if (mCurrentTimeOfDay >= mParms.mParms.mDayStartTime.mValue && mCurrentTimeOfDay < mParms.mParms.mDayEndTime.mValue) {
		return (mCurrentTimeOfDay - mParms.mParms.mDayStartTime.mValue) / mGameDayLength;
	}

	// we're (somehow) during unplayable time, make sun gauge appropriate ratio between 0 and 1 (0 at 7pm liftoff, 1 at 7am landing)
	f32 time = mCurrentTimeOfDay;
	if (mCurrentTimeOfDay < mParms.mParms.mDayStartTime.mValue) {
		time += TIMEMGR_DAY_HOURS;
	}
	return 1.0f - ((time - mParms.mParms.mDayEndTime.mValue) / mGameNightLength);
}

/**
 * @note Address: 0x80127324
 * @note Size: 0x74
 */
void TimeMgr::update()
{
	if (!isFlag(TIMEFLAG_Stopped)) {
		mCurrentRealTime += mSpeedFactor * sys->mDeltaTime;

		if (mCurrentRealTime > mParms.mParms.mDayLengthSeconds.mValue) {
			mCurrentRealTime -= mParms.mParms.mDayLengthSeconds.mValue;
		}

		mCurrentTimeOfDay = TIMEMGR_DAY_HOURS * (mCurrentRealTime / mParms.mParms.mDayLengthSeconds.mValue);

		updateSlot();
	}
}

/**
 * @note Address: 0x80127398
 * @note Size: 0x18
 */
bool TimeMgr::isDayOver() { return mCurrentTimeOfDay > mParms.mParms.mDayEndTime.mValue; }

/**
 * @note Address: 0x801273B0
 * @note Size: 0x30
 */
bool TimeMgr::isDayTime()
{
	return mCurrentTimeOfDay > mParms.mParms.mDayStartTime.mValue && mCurrentTimeOfDay <= mParms.mParms.mDayEndTime.mValue;
}

/**
 * @note Address: 0x801273E0
 * @note Size: 0x20
 */
f32 TimeMgr::getRealDayTime()
{
	return mParms.mParms.mDayLengthSeconds.mValue
	     * ((mParms.mParms.mDayEndTime.mValue - mParms.mParms.mDayStartTime.mValue) / TIMEMGR_DAY_HOURS);
}

/**
 * @note Address: 0x80127400
 * @note Size: 0x150
 */
void TimeMgr::loadSettingFile(char* filename)
{
	loadFromFile(&mParms.mParms, filename, JKRHeap::sSystemHeap);
	init();
}

} // namespace Game
