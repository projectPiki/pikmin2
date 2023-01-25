#ifndef _OG_SCREEN_DOPINGSCREEN_H
#define _OG_SCREEN_DOPINGSCREEN_H

#include "JSystem/J2D/J2DPane.h"
#include "P2DScreen.h"
#include "og/Screen/Data.h"
#include "Vector2.h"
#include "efx2d/T2DExtractUp.h"
#include "types.h"

namespace og {
namespace Screen {
struct ScaleMgr;

struct DopingCheck {
	DopingCheck();
	void init(J2DPane* spicyPane, J2DPane* bitterPane, ScaleMgr* spicyMgr, ScaleMgr* bitterMgr);
	void update();
	void effStart(J2DPane* pane);
	inline void startGetEff(J2DPane* pane);
	void startGetEff_Up();   // Spicy  'get' effect
	void startGetEff_Down(); // Bitter 'get' effect

	J2DPane* mSpicyPane;              // _00
	J2DPane* mBitterPane;             // _04
	f32 mNaviLifeRatio;               // _08
	int mFollowPiki;                  // _0C
	int mNextThrowPiki;               // _10
	u32 mSpicySprayCount;             // _14
	u32 mBitterSprayCount;            // _18
	u8 mActiveNaviID;                 // _1C
	u32* mNewSpicyCount;              // _20, unknown
	u32* mNewBitterCount;             // _24, unknown
	u32 mOldSpicyCount;               // _28, unknown
	u32 mOldBitterCount;              // _2C, unknown
	efx2d::T2DExtractUp* mExtractEfx; // _30, unknown
	ScaleMgr* mSpicyScaleMgr;         // _34
	ScaleMgr* mBitterScaleMgr;        // _38
	f32 mXOffset;                     // _3C
	u8 mIsUpdateCount;                // _40
};

struct DopingScreen : public P2DScreen::Mgr_tuning {
	DopingScreen();

	virtual ~DopingScreen() { } // _08 (weak)
	virtual void update();      // _30

	void setCallBack(JKRArchive* arc);
	void setParam(DataNavi& data);
	void adjPos(f32 x, f32 y);
	void setDopingEnable(bool gotSpicy, bool gotBitter);
	void openDopingUp();
	void openDopingDown();
	void openDopingKey();

	// _00      = VTBL
	// _00-_148 = P2DScreen::Mgr_tuning
	DopingCheck* mDopingCheck;  // _148
	J2DPane* mPaneAll;          // _14C
	J2DPane* mPaneSpicySpray;   // _150
	J2DPane* mPaneBitterSpray;  // _154
	J2DPane* mPaneCenterDpad;   // _158
	J2DPane* mPaneBottleSpicy;  // _15C, these pane names are a leftover of the beta HUD
	J2DPane* mPaneBottleBitter; // _160
	Vector2f mRootPosition;     // _164
	Vector2f mOffset;           // _16C
	bool mIsSpicySprayEnabled;  // _174
	bool mIsBitterSprayEnabled; // _175
	bool mHasGotSpicySpray;     // _176
	bool mHasGotBitterSpray;    // _177
	bool mHasGotCenterDpad;     // _178
	f32 mSpicySprayGet;         // _17C
	f32 mBitterSprayGet;        // _180
	f32 mScaleJujiKey;          // _184
	ScaleMgr* mScaleMgr1;       // _188
	ScaleMgr* mScaleMgr2;       // _18C
	ScaleMgr* mScaleMgr3;       // _190
	u32 _194;                   // _194, unknown
};
} // namespace Screen
} // namespace og

#endif
