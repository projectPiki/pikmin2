#ifndef _EBI_UTILITY_H
#define _EBI_UTILITY_H

#include "Controller.h"
#include "JSystem/JUtility/TColor.h"

namespace ebi {
struct EUTPadInterface_countNum {
	EUTPadInterface_countNum()
	{
		mCounter = 0;
		_08      = 0;
	}

	enum enumMode {
		MODE_LEFTRIGHT,
		MODE_RIGHTLEFT,
		MODE_UPDOWN,
		MODE_DOWNUP,
	};

	void init(Controller*, long, long, long*, enumMode, f32, f32);
	void update();

	Controller* mController; // _00
	u32 mCounter;            // _04
	u32 _08;                 // _08
	bool mIsChanging;        // _0C
	u8 _0D;                  // _0D
	long mMinSel;            // _10
	long mMaxSel;            // _14
	long* mSelIndex;         // _18 (pointer to selection value this manages)
	long mLastIndex;         // _1C
	f32 mTimeFactor1;        // _20
	f32 mTimeFactor2;        // _24
	enumMode mMode;          // _28
};

void EUTColor_complement(JUtility::TColor&, JUtility::TColor&, f32, f32, JUtility::TColor*);
void EUTDebug_Wait();
void EUTDebug_Tag32ToName(u32, char*);
void EUTDebug_Tag64ToName(u64, char*);

} // namespace ebi

#endif
