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
		    , m_dayStartTime(this, 'fp00', "ゲーム開始時刻", 7.0f, 0.0f, 24.0f)
		    , m_dayEndTime(this, 'fp01', "ゲーム終了時刻", 19.0f, 0.0f, 24.0f)
		    , m_dayLengthSeconds(this, 'fp02', "1日の時間<秒）", 1560.f, 0.0f, 3600.0f)
		    , m_morningStartTime(this, 'fp03', "朝開始時刻", 5.25f, 0.0f, 24.0f)
		    , m_midMorningTime(this, 'fp04', "朝中間時刻", 7.0f, 0.0f, 24.0f)
		    , m_morningEndTime(this, 'fp05', "朝終了時刻", 8.0f, 0.0f, 24.0f)
		    , m_eveningStartTime(this, 'fp06', "夕方開始時刻", 15.0f, 0.0f, 24.0f)
		    , m_midEveningStartTime(this, 'fp07', "夕方中間開始時刻", 15.5f, 0.0f, 24.0f)
		    , m_midEveningEndTime(this, 'fp11', "夕方中間終了時刻", 18.5f, 0.0f, 24.0f)
		    , m_eveningEndTime(this, 'fp08', "夕方終了時刻", 19.0f, 0.0f, 24.0f)
		    , m_sundownAlertTime(this, 'fp09', "夜警告時刻", 18.0f, 0.0f, 24.0f)
		    , m_countdownTime(this, 'fp10', "カウントダウン", 18.5f, 0.0f, 24.0f)
		{
		} // WEAK - from timeMgr.cpp

		Parm<f32> m_dayStartTime;        // _00C
		Parm<f32> m_dayEndTime;          // _034
		Parm<f32> m_dayLengthSeconds;    // _05C
		Parm<f32> m_morningStartTime;    // _084
		Parm<f32> m_midMorningTime;      // _0AC
		Parm<f32> m_morningEndTime;      // _0D4
		Parm<f32> m_eveningStartTime;    // _0FC
		Parm<f32> m_midEveningStartTime; // _124
		Parm<f32> m_midEveningEndTime;   // _14C
		Parm<f32> m_eveningEndTime;      // _174
		Parm<f32> m_sundownAlertTime;    // _19C
		Parm<f32> m_countdownTime;       // _1C4
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
	TimeMgrParms m_parms;     // _018
	f32 m_currentHour;        // _208
	f32 m_currentTimeOfDay;   // _20C
	u32 m_slotPosition;       // _210
	f32 _214;                 // _214
	u32 m_dayCount;           // _218
	f32 m_speedFactor;        // _21C
	f32 _220;                 // _220
	f32 m_earlyMorningLength; // _224
	f32 m_midMorningLength;   // _228
	f32 m_middayLength;       // _22C
	f32 m_earlyEveningLength; // _230
	f32 m_lateEveningLength;  // _234
	f32 m_dayLengthHours;     // _238
	f32 m_sunRatio;           // _23C
	u32 m_flags;              // _240
};
} // namespace Game

#endif
