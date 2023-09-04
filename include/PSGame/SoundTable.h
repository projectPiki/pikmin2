#ifndef _PSGAME_SOUNDTABLE_H
#define _PSGAME_SOUNDTABLE_H

#include "PSSystem/PSCommon.h"
#include "types.h"

namespace PSGame {
namespace SoundTable {
struct SePerspInfo {
	inline SePerspInfo()
	    : _00(1.0f)
	    , _04(0.0f)
	    , _08(0.0f)
	    , _0C(0.0f)
	    , _10(0.0f)
	    , mIsSpecialSound(false)
	    , mNoGetDist(false)
	{
	}

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

struct CategoryMgr : PSSystem::SingletonBase<CategoryMgr> {
	CategoryMgr();

	virtual ~CategoryMgr(); // _08 (weak)

	void initiate(u8);

	// _00 = VTBL
	SePerspInfo* _04[6]; // _04, array of pointers, type unknown
};
} // namespace SoundTable
} // namespace PSGame

#endif
