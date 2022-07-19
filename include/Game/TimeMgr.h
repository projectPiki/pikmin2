#ifndef _GAME_TIMEMGR_H
#define _GAME_TIMEMGR_H

#include "BaseParm.h"
#include "CNode.h"
#include "Parameters.h"
#include "types.h"

namespace Game {
struct TimeMgrParms {
	struct Parms : public Parameters {
		Parms();

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

	TimeMgrParms();

	Parms parms; // _00
};

struct TimeMgr : public CNode {
	TimeMgr();

	virtual ~TimeMgr(); // _00

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
