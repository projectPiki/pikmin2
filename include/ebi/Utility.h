#ifndef _EBI_UTILITY_H
#define _EBI_UTILITY_H

#include "Controller.h"
#include "JSystem/JUT/TColor.h"

namespace ebi {
struct EUTPadInterface_countNum {
	enum enumMode {
		MODE_UNKNOWN_0 = 0,
		MODE_UNKNOWN_1,
		MODE_UNKNOWN_2,
		MODE_UNKNOWN_3,
	};

	void init(Controller*, long, long, long*, enumMode, float, float);
	void update();

	Controller* m_controller; // _00
	u32 _04;                  // _04
	u32 _08;                  // _08
	u8 _0C;                   // _0C
	u8 _0D;                   // _0D
	long _10;                 // _10
	long _14;                 // _14
	long* _18;                // _18
	long _1C;                 // _1C
	float _20;                // _20
	float _24;                // _24
	enumMode m_mode;          // _28
};

void EUTColor_complement(JUtility::TColor&, JUtility::TColor&, float, float, JUtility::TColor*);
void EUTDebug_Wait();
void EUTDebug_Tag32ToName(u32, char*);
void EUTDebug_Tag64ToName(u64, char*);

} // namespace ebi

#endif
