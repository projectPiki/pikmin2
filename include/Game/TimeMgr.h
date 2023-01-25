#ifndef _GAME_TIMEMGR_H
#define _GAME_TIMEMGR_H

#include "BaseParm.h"
#include "CNode.h"
#include "Parameters.h"
#include "types.h"

namespace Game {
struct TimeMgrParms {
	struct Parms : public Parameters {
		Parms()
		    : Parameters(nullptr, "TimeMgrParms")
		    , mDayStartTime(this, 'fp00', "ゲーム開始時刻", 7.0f, 0.0f, 24.0f)
		    , mDayEndTime(this, 'fp01', "ゲーム終了時刻", 19.0f, 0.0f, 24.0f)
		    , mDayLengthSeconds(this, 'fp02', "1日の時間<秒）", 1560.f, 0.0f, 3600.0f)
		    , mMorningStartTime(this, 'fp03', "朝開始時刻", 5.25f, 0.0f, 24.0f)
		    , mMidMorningTime(this, 'fp04', "朝中間時刻", 7.0f, 0.0f, 24.0f)
		    , mMorningEndTime(this, 'fp05', "朝終了時刻", 8.0f, 0.0f, 24.0f)
		    , mEveningStartTime(this, 'fp06', "夕方開始時刻", 15.0f, 0.0f, 24.0f)
		    , mMidEveningStartTime(this, 'fp07', "夕方中間開始時刻", 15.5f, 0.0f, 24.0f)
		    , mMidEveningEndTime(this, 'fp11', "夕方中間終了時刻", 18.5f, 0.0f, 24.0f)
		    , mEveningEndTime(this, 'fp08', "夕方終了時刻", 19.0f, 0.0f, 24.0f)
		    , mSundownAlertTime(this, 'fp09', "夜警告時刻", 18.0f, 0.0f, 24.0f)
		    , mCountdownTime(this, 'fp10', "カウントダウン", 18.5f, 0.0f, 24.0f)
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

	Parms parms; // _00
};

#define TIMEMGR_FLAG_STOPPED 1
#define TIMEMGR_DAY_HOURS    24.0f

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

	// _00     = VTBL
	// _00-_18 = CNode
	TimeMgrParms mParms;     // _018
	f32 mCurrentHour;        // _208
	f32 mCurrentTimeOfDay;   // _20C
	u32 mSlotPosition;       // _210
	f32 _214;                // _214
	u32 mDayCount;           // _218
	f32 mSpeedFactor;        // _21C
	f32 _220;                // _220
	f32 mEarlyMorningLength; // _224
	f32 mMidMorningLength;   // _228
	f32 mMiddayLength;       // _22C
	f32 mEarlyEveningLength; // _230
	f32 mLateEveningLength;  // _234
	f32 mDayLengthHours;     // _238
	f32 mSunRatio;           // _23C
	u32 mFlags;              // _240
};
} // namespace Game

#endif
