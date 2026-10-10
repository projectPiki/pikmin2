#ifndef _EBI_UTILITY_H
#define _EBI_UTILITY_H

#include "Controller.h"
#include "JSystem/JUtility/TColor.h"
#include "Game/MemoryCard/Mgr.h"
#include "System.h"

namespace ebi {

// fabricated struct that almost definitely exists based on a lot of patterns in ebisawa code
struct EUTCounter {
	inline EUTCounter()
	{
		mCurrentValue = 0;
		mMaxValue     = 0;
	}

	inline void setValue(u32 v)
	{
		mCurrentValue = v;
		mMaxValue     = v;
	}

	inline void setValue(f32 v)
	{
		u32 value     = v / sys->getDeltaTime();
		mCurrentValue = value;
		mMaxValue     = value;
	}

	inline f32 getRatio() { return (mMaxValue != 0) ? ((f32)mCurrentValue / (f32)mMaxValue) : 0.0f; }

	inline void update()
	{
		if (mCurrentValue != 0)
			mCurrentValue--;
	}

	inline bool isZero()
	{
		if (mCurrentValue == 0) {
			return true;
		}
		return false;
	}

	u32 mCurrentValue; // _00
	u32 mMaxValue;     // _04
};

inline static bool isSaveError()
{
	if (sys->mCardMgr->isSaveInvalid() && sys->mCardMgr->isCardReady()) {
		return true;
	}
	return false;
}

struct EUTPadInterface_countNum {
	EUTPadInterface_countNum() { }

	enum enumMode {
		MODE_LEFTRIGHT,
		MODE_RIGHTLEFT,
		MODE_UPDOWN,
		MODE_DOWNUP,
	};

	void init(Controller* controller, s32 min, s32 max, s32* selValue, enumMode mode, f32 timeFactor1, f32 timeFactor2);
	void update();

	Controller* mController; // _00
	EUTCounter mCounter;     // _04
	bool mIsChanging;        // _0C
	u8 mSelectionChanged;    // _0D
	s32 mMinSel;             // _10
	s32 mMaxSel;             // _14
	s32* mSelIndex;          // _18 (pointer to selection value this manages)
	s32 mLastIndex;          // _1C
	f32 mTimeFactor1;        // _20
	f32 mTimeFactor2;        // _24
	enumMode mMode;          // _28
};

void EUTColor_complement(JUtility::TColor& color1, JUtility::TColor& color2, f32 color1Weight, f32 color2Weight,
                         JUtility::TColor* outColor);
void EUTDebug_Wait();
void EUTDebug_Tag32ToName(u32 tag, char* name);
void EUTDebug_Tag64ToName(u64 tag, char* name);

} // namespace ebi

#endif
