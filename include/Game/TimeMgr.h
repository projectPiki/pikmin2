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

		Parm<float> m_dayStartTime;        // _00C
		Parm<float> m_dayEndTime;          // _034
		Parm<float> m_dayLengthSeconds;    // _05C
		Parm<float> m_morningStartTime;    // _084
		Parm<float> m_midMorningTime;      // _0AC
		Parm<float> m_morningEndTime;      // _0D4
		Parm<float> m_eveningStartTime;    // _0FC
		Parm<float> m_midEveningStartTime; // _124
		Parm<float> m_midEveningEndTime;   // _14C
		Parm<float> m_eveningEndTime;      // _174
		Parm<float> m_sundownAlertTime;    // _19C
		Parm<float> m_countdownTime;       // _1C4
	};

	TimeMgrParms() { } // WEAK - from timeMgr.cpp

	Parms parms; // _00
};

struct TimeMgr : public CNode {
	TimeMgr();

	virtual ~TimeMgr() { } // _08 - WEAK - from timeMgr.cpp

	float getRealDayTime();
	float getSunGaugeRatio();
	void init();
	bool isDayOver();
	bool isDayTime();
	void loadSettingFile(char*);
	void setEndTime();
	void setStartTime();
	void setTime(float);
	void updateSlot();
	void update();

	TimeMgrParms m_parms;       // _018
	float m_currentHour;        // _208
	float m_currentTimeOfDay;   // _20C
	u32 _210;                   // _210
	float _214;                 // _214
	u32 m_dayCount;             // _218
	float m_speedFactor;        // _21C
	float _220;                 // _220
	float m_earlyMorningLength; // _224
	float m_midMorningLength;   // _228
	float m_middayLength;       // _22C
	float m_earlyEveningLength; // _230
	float m_lateEveningLength;  // _234
	float m_dayLengthHours;     // _238
	float m_sunRatio;           // _23C
	u32 m_flags;                // _240
};
} // namespace Game

#endif
