#ifndef _OG_DATA_H
#define _OG_DATA_H

#include "types.h"

namespace og {
namespace Screen {
struct DataNavi {
	f32 m_naviLifeRatio; // _00
	u32 _04;             // _04
	u32 m_nextThrowPiki; // _08
	u32 m_dope1Count;    // _0C
	u32 m_dope0Count;    // _10
	u8 _14;              // _14
};

struct DataGame {
	f32 m_sunGaugeRatio;    // _00
	int m_dayNum;           // _04
	int m_totalPikminCount; // _08
	int m_floorNum;         // _0C
	int m_mapPikminCount;   // _10
	u8 _14;                 // _14
	uint m_pokoCount;       // _18
};

struct DataMap {
	u32 m_napsackDetectorFlags;   // _00
	int m_totalPikminCounts[5];   // _04, 0R, 1Y, 2B, 3W, 4P
	int m_currentPikminCounts[5]; // _18, 0R, 1Y, 2B, 3W, 4P
	int _2C;                      // _2C, something to do with alive pikis
	uint m_debtRemaining;         // _30
};
} // namespace Screen
} // namespace og

#endif
