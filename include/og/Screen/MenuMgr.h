#ifndef _OG_SCREEN_MENUMGR_H
#define _OG_SCREEN_MENUMGR_H

#include "types.h"
#include "Vector2.h"

struct J2DGrafContext;
struct J2DPane;
struct J2DScreen;
namespace efx2d {
struct T2DCursor;
}
namespace og {
namespace Screen {
struct ScaleMgr;
}
} // namespace og

namespace og {
namespace Screen {
// Size: 0x78
struct MenuMgr {
	MenuMgr();
	void calcCenter(J2DPane*, Vector2f*);
	void calcPoint(Vector2f&, Vector2f&, f32, Vector2f*);
	void draw(J2DGrafContext*);
	void init(J2DScreen*, u16, u64, u64, u64);
	void init(J2DScreen*, u16, u64, u64, u64, u64, u64);
	void init2taku(J2DScreen*, u64, u64, u64, u64, u64, u64, u64, u64);
	void init2takuTitle(J2DScreen*, u64, u64, u64, u64, u64, u64, u64, u64);
	void initCommon();
	void initSub(J2DScreen*, u16, u64, u64, u64);
	void initSelNum(u16);
	void killCursor();
	void startCursor(f32);
	void select(u16);
	void selectSub(u16);
	void update();
	void MenuOnOff();

	int mCursorState;              // _00, Ill enum this eventually
	f32 mCursorDelayTimer;         // _04
	u16 mElementCount;             // _08
	u16 mCSelectId;                // _0A
	f32 mTimer;                    // _0C
	f32 mTimerMax;                 // _10
	J2DPane** mPaneList1;          // _14 /* ptr to array of ptrs */
	J2DPane** mPaneList2;          // _18 /* ptr to array of ptrs */
	J2DPane** mPaneList3;          // _1C /* ptr to array of ptrs */
	ScaleMgr* mScaleMgrs;          // _20 /* ptr to array */
	J2DPane** mPaneList4;          // _24 /* ptr to array of ptrs */
	J2DPane** mPaneList5;          // _28 /* ptr to array of ptrs */
	u8 mIsCursorActive;            // _2C
	u8 _2D;                        // _2D
	bool mDoScale;                 // _2E
	Vector2f mCursorPos1;          // _30
	Vector2f mCursorPos2;          // _38
	efx2d::T2DCursor* mEfxCursor1; // _40
	efx2d::T2DCursor* mEfxCursor2; // _44
	u8 _48;                        // _48
	Vector2f mTransitionPosLeft;   // _48
	Vector2f mTransitionPosRight;  // _54
	Vector2f mSelPosLeft;          // _5C
	Vector2f mSelPosRight;         // _64
	f32 _6C;                       // _6C
	u16 mPrevSelected;             // _70
	f32 _74;                       // _74
};
} // namespace Screen
} // namespace og

#endif
