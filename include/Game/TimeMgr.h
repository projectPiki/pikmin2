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

		Parm<float> m_startTime;  // _00C
		Parm<float> m_dayEndTime; // _034
		Parm<float> m_seconds;    // _05C
		Parm<float> fp03;         // _084
		Parm<float> fp04;         // _0AC
		Parm<float> fp05;         // _0D4
		Parm<float> fp06;         // _0FC
		Parm<float> fp07;         // _124
		Parm<float> fp11;         // _14C
		Parm<float> fp08;         // _174
		Parm<float> fp09;         // _19C
		Parm<float> fp10;         // _1C4
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

	TimeMgrParms m_parms;     // _018
	float m_currentHour;      // _208
	float m_currentTimeOfDay; // _20C
	u32 _210;                 // _210
	float _214;               // _214
	u32 m_dayCount;           // _218
	float m_speedFactor;      // _21C
	float _220;               // _220
	float _224;               // _224
	float _228;               // _228
	float _22C;               // _22C
	float _230;               // _230
	float _234;               // _234
	float m_dayLength;        // _238
	float m_sunRatio;         // _23C
	u32 m_flags;              // _240
};
} // namespace Game

#endif
