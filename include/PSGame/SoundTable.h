#ifndef _PSGAME_SOUNDTABLE_H
#define _PSGAME_SOUNDTABLE_H

#include "types.h"

namespace PSGame {
namespace SoundTable {
struct SePerspInfo {
	void set(f32, f32, f32, f32, f32);
	f32 getDistVol(f32, u8);

	f32 _00;              // _00
	f32 _04;              // _04
	f32 _08;              // _08
	f32 _0C;              // _0C
	f32 _10;              // _10
	bool mIsSpecialSound; // _14
	bool mNoGetDist;      // _15
};

struct CategoryMgr {
	CategoryMgr();

	virtual ~CategoryMgr(); // _08 (weak)

	void initiate(u8);

	// _00 = VTBL
	SePerspInfo* _04[6]; // _04, array of pointers, type unknown
};
} // namespace SoundTable
} // namespace PSGame

#endif
