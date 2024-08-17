#ifndef _GAME_TIMEMGR_H
#define _GAME_TIMEMGR_H

#include "BaseParm.h"
#include "CNode.h"
#include "Parameters.h"
#include "types.h"
#include "BitFlag.h"

#define TIMEMGR_DAY_HOURS 24.0f

namespace Game {
enum SunLightTimes {
	SUNTIME_Night   = 0,
	SUNTIME_Morning = 1,
	SUNTIME_Noon    = 2,
	SUNTIME_Evening = 3,
	SUNTIME_Demo    = 4,
	SUNTIME_Count,
};

enum TimeMgrFlags {
	TIMEFLAG_Stopped = 0x1,
};

struct TimeMgrParms {
	struct Parms : public Parameters {
		Parms()
		    : Parameters(nullptr, "TimeMgrParms")
		    , mDayStartTime(this, 'fp00', "ゲーム開始時刻", 7.0f, 0.0f, 24.0f)           // 'game start time'
		    , mDayEndTime(this, 'fp01', "ゲーム終了時刻", 19.0f, 0.0f, 24.0f)            // 'game end time'
		    , mDayLengthSeconds(this, 'fp02', "1日の時間<秒）", 1560.f, 0.0f, 3600.0f)   // '1 day <second)' = 26 minutes
		    , mMorningStartTime(this, 'fp03', "朝開始時刻", 5.25f, 0.0f, 24.0f)          // 'morning start time'
		    , mMidMorningTime(this, 'fp04', "朝中間時刻", 7.0f, 0.0f, 24.0f)             // 'mid-morning time'
		    , mMorningEndTime(this, 'fp05', "朝終了時刻", 8.0f, 0.0f, 24.0f)             // 'morning end time'
		    , mEveningStartTime(this, 'fp06', "夕方開始時刻", 15.0f, 0.0f, 24.0f)        // 'evening start time'
		    , mMidEveningStartTime(this, 'fp07', "夕方中間開始時刻", 15.5f, 0.0f, 24.0f) // 'mid-evening start time'
		    , mMidEveningEndTime(this, 'fp11', "夕方中間終了時刻", 18.5f, 0.0f, 24.0f)   // 'mid-evening end time'
		    , mEveningEndTime(this, 'fp08', "夕方終了時刻", 19.0f, 0.0f, 24.0f)          // 'evening end time'
		    , mSundownAlertTime(this, 'fp09', "夜警告時刻", 18.0f, 0.0f, 24.0f)          // 'night warning time'
		    , mCountdownTime(this, 'fp10', "カウントダウン", 18.5f, 0.0f, 24.0f)         // 'countdown'
		{
		} // WEAK - from timeMgr.cpp

		Parm<f32> mDayStartTime;        // _00C, "fp00"
		Parm<f32> mDayEndTime;          // _034, "fp01"
		Parm<f32> mDayLengthSeconds;    // _05C, "fp02"
		Parm<f32> mMorningStartTime;    // _084, "fp03"
		Parm<f32> mMidMorningTime;      // _0AC, "fp04"
		Parm<f32> mMorningEndTime;      // _0D4, "fp05"
		Parm<f32> mEveningStartTime;    // _0FC, "fp06"
		Parm<f32> mMidEveningStartTime; // _124, "fp07"
		Parm<f32> mMidEveningEndTime;   // _14C, "fp11"
		Parm<f32> mEveningEndTime;      // _174, "fp08"
		Parm<f32> mSundownAlertTime;    // _19C, "fp09"
		Parm<f32> mCountdownTime;       // _1C4, "fp10"
	};

	TimeMgrParms() { } // WEAK - from timeMgr.cpp

	Parms mParms; // _00
};

struct TimeMgr : public CNode {
	TimeMgr();

	virtual ~TimeMgr() { } // _08 (weak)

	f32 getRealDayTime();
	f32 getSunGaugeRatio();
	void init();
	bool isDayOver();
	bool isDayTime();
	void loadSettingFile(char*);
	void setEndTime();
	void setStartTime();
	void setTime(f32);
	void updateSlot();
	void update();
	void updateFrame();

	inline void setFlag(u32 flag) { mFlags.typeView |= flag; }
	inline void resetFlag(u32 flag) { mFlags.typeView &= ~flag; }
	inline bool isFlag(u32 flag) const { return mFlags.typeView & flag; }

	inline f32 getMorningStartTime() { return mParms.mParms.mMorningStartTime.mValue; }
	inline f32 getEveningEndTime() { return mParms.mParms.mEveningEndTime.mValue; }

	// _00     = VTBL
	// _00-_18 = CNode
	TimeMgrParms mParms;     // _018
	f32 mCurrentRealTime;    // _208, time in (real) seconds since midnight (e.g. 455.0f = 7am = landing)
	f32 mCurrentTimeOfDay;   // _20C, time in-game since midnight (e.g. 7.0f = 7am = landing)
	int mLightSetting;       // _210, see SunlightTimes enum
	f32 mLightSettingRatio;  // _214, 0 to 0.5 = color 1 to color 2, 0.5 to 1 = color 2 to color 3
	u32 mDayCount;           // _218
	f32 mSpeedFactor;        // _21C, how many 'real' seconds should pass per second (default 1)
	f32 mNightLength;        // _220, time between sundown (7pm) and sunrise (5:15am) (so 10.25)
	f32 mEarlyMorningLength; // _224, time between early morning (5:15am) and mid morning (7am) (so 1.75)
	f32 mMidMorningLength;   // _228, time between mid morning (7am) and end of morning (8am) (so 1)
	f32 mMiddayLength;       // _22C, time between end of morning (8am) and start of evening (3pm) (so 7)
	f32 mEarlyEveningLength; // _230, time between early evening (3pm) and 'mid' evening (3:30pm) (so 0.5)
	f32 mLateEveningLength;  // _234, time between late evening (6:30pm) and day end (7pm) (so 0.5)
	f32 mGameDayLength;      // _238, 'playable' length (7am to 7pm by default, so 12.0f)
	f32 mGameNightLength;    // _23C, 'unplayable' length (7pm to 7am by default, so 12.0f)
	BitFlag<u32> mFlags;     // _240
};
} // namespace Game

#endif
