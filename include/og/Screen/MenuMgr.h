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
	enum CursorState {
		CURSOR_Inactive   = 0,
		CURSOR_DelayStart = 1,
		CURSOR_Start      = 2,
		CURSOR_Kill       = 3,
	};

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
	J2DPane** mMainPanes;          // _14, overall panes for each option
	J2DPane** mTextBoxPanes;       // _18, textboxes for each option
	J2DPane** mTextBoxTakuPanes;   // _1C, textboxes for each option for taku-type menus (no functional difference)
	ScaleMgr* mScaleMgrs;          // _20, ptr to array
	J2DPane** mLeftCursorPanes;    // _24, left circle cursors for each option
	J2DPane** mRightCursorPanes;   // _28, right circle cursors for each option
	bool mIsCursorActive;          // _2C
	bool mDoNeedMenuOnOff;         // _2D, this is always false, but true hides non-selected elements for some menus
	bool mDoScale;                 // _2E
	Vector2f mCursorPos1;          // _30
	Vector2f mCursorPos2;          // _38
	efx2d::T2DCursor* mEfxCursor1; // _40
	efx2d::T2DCursor* mEfxCursor2; // _44
	bool mIsChangingSelect;        // _48
	Vector2f mTransitionPosLeft;   // _48
	Vector2f mTransitionPosRight;  // _54
	Vector2f mSelPosLeft;          // _5C
	Vector2f mSelPosRight;         // _64
	f32 mSelectChangeTimer;        // _6C
	u16 mPrevSelected;             // _70
	f32 mSelectedExtraScale;       // _74
};
} // namespace Screen
} // namespace og

#endif
