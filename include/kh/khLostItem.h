#ifndef _KH_LOSTITEM_H
#define _KH_LOSTITEM_H

#include "types.h"
#include "Rect.h"

namespace kh {
namespace Screen {
enum LostItemFlags {
	LOSTITEM_Unk1 = 0x1,
	LOSTITEM_Unk2 = 0x2,
};

struct LostItem {
	LostItem();

	bool update();

	Rectf mRect; // _00
	f32 _10;     // _10
	u32 _14;     // _14
	u16 mAngle;  // _18
	u16 _1A;     // _1A
	u8 mAlpha;   // _1C
	u8 mCounter; // _1D
};

struct LostItemMgr {
	LostItemMgr(int);

	void init(const JGeometry::TVec2f&, bool);
	void update();
	void draw(P2DScreen::Mgr_tuning*, u64, const ResTIMG*, Graphics&);

	inline bool isFlag(u32 flag) const { return mFlags & flag; }

	inline void setFlag(u32 flag) { mFlags |= flag; }

	inline void resetFlag(u32 flag) { mFlags &= ~flag; }

	LostItem* mItemList; // _00
	int mMaxPanes;       // _04
	s32 mFlags;          // _08
};

} // namespace Screen
} // namespace kh

#endif
