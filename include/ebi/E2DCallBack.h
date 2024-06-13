#ifndef _EBI_E2DCALLBACK_H
#define _EBI_E2DCALLBACK_H

#include "ebi/E2DFullFontColor.h"
#include "JSystem/J2D/J2DGrafContext.h"
#include "JSystem/J3D/J3DAnmBase.h"
#include "JSystem/J3D/J3DFrameCtrl.h"
#include "JSystem/JGeometry.h"
#include "og/Screen/ScaleMgr.h"
#include "P2DScreen.h"
#include "System.h"

namespace ebi {
struct E2DCallBack_Base : public P2DScreen::CallBackNode {
	inline E2DCallBack_Base()
	    : mIsEnabled(true)
	{
	}

	virtual ~E2DCallBack_Base() { } // _08 (weak)
	virtual void update()
	{
		if (mIsEnabled) {
			do_update();
		}
	} // _10 (weak)
	virtual void draw(Graphics& gfx, J2DGrafContext& graf)
	{
		if (mIsEnabled) {
			do_draw(gfx, graf);
		}
	}                                                    // _14 (weak)
	virtual void do_update() { }                         // _1C (weak)
	virtual void do_draw(Graphics&, J2DGrafContext&) { } // _20 (weak)

	// _00     = VTBL
	// _00-_1C = P2DScreen::CallBackNode
	bool mIsEnabled; // _1C
};

// Size: 0x3C
struct E2DCallBack_AnmBase : public E2DCallBack_Base {
	E2DCallBack_AnmBase() { }

	virtual ~E2DCallBack_AnmBase() { } // _08 (weak)
	virtual void do_update();          // _1C

	void loadAnm(char* path, JKRArchive* archive, s32 frame, s32 maxFrame);
	void play(f32 speed, J3DAnmAttr attr, bool doPlayFromStart);
	void playBack(f32 speed, bool doPlayFromEnd);
	void stop();
	void setStartFrame();
	void setEndFrame();
	void setRandFrame();
	f32 getPlayFinRate();
	bool isFinish();

	// unused/inlined:
	void disconnect();

	// _00     = VTBL
	// _00-_20 = E2DCallBack_Base
	J3DFrameCtrl mFrameCtrl; // _20
	J2DAnmBase* mAnim;       // _34
	bool mIsFinished;        // _38
};

struct E2DCallBack_BlinkAlpha : public E2DCallBack_Base {
	E2DCallBack_BlinkAlpha()
	{
		mWeight         = 0.0f;
		mSpeed          = 0.03333f;
		mIsTowardAlpha0 = true;
		_29             = false;
		mAlpha0         = 255;
		mAlpha1         = 0;
	}
	virtual ~E2DCallBack_BlinkAlpha() { } // _08 (weak)
	virtual void do_update();             // _1C

	inline f32 getAlphaWeight() { return mWeight; }

	inline void enable()
	{
		mAlpha0         = 255;
		mAlpha1         = 85;
		mIsEnabled      = true;
		mSpeed          = sys->mDeltaTime * 3.33333333f;
		mWeight         = 0.0f;
		mIsTowardAlpha0 = true;
		_29             = false;
	}

	inline void startToward0()
	{
		mIsEnabled      = true;
		mSpeed          = sys->mDeltaTime * 1.6666666f;
		mWeight         = 0.0f;
		mIsTowardAlpha0 = true;
		_29             = false;
	}

	inline void disable()
	{
		mIsTowardAlpha0 = false;
		_29             = true;
	}

	// _00     = VTBL
	// _00-_20 = E2DCallBack_Base
	f32 mWeight;          // _20, weight to give alpha0 when calcing blend
	f32 mSpeed;           // _24, speed at which alpha blends between alpha0 and alpha1
	bool mIsTowardAlpha0; // _28, is amount of alpha0 increasing in blend?
	u8 _29;               // _29
	u8 _2A;               // _2A, unknown
	u8 _2B;               // _2B, unknown
	u8 mAlpha0;           // _2C, blends between alpha0 and alpha1
	u8 mAlpha1;           // _2D
};

// Size: 0x4C
struct E2DCallBack_BlinkFontColor : public E2DCallBack_Base {
	E2DCallBack_BlinkFontColor()
	    : mColor1Weight(0.0f)
	    , mSpeed(0.03333f)
	    , mIsTowardColor1(true)
	    , _49(0)
	{
		mIsEnabled = false;
	}

	virtual ~E2DCallBack_BlinkFontColor() { } // _08 (weak)
	virtual void do_update();                 // _1C

	void set(J2DTextBox* pane1, J2DTextBox* pane2)
	{
		setColors(0, pane1);
		setColors(1, pane2);
	}

	void set(E2DFullFontColor& fontA, E2DFullFontColor& fontB)
	{
		mFonts[0] = fontA;
		mFonts[1] = fontB;
	}

	inline void setColors(int i, J2DTextBox* pane)
	{
		mFonts[i].mCol1.set(pane->mCharColor);
		mFonts[i].mCol2.set(pane->mGradientColor);
		mFonts[i].mWhite = pane->getWhite();
		mFonts[i].mBlack = pane->getBlack();
	}

	inline void enable()
	{
		mIsEnabled      = true;
		mSpeed          = sys->mDeltaTime * 3.33333333f;
		mColor1Weight   = 0.0f;
		mIsTowardColor1 = true;
		_49             = 0;
	}

	inline void disable()
	{
		mIsTowardColor1 = false;
		_49             = 1;
	}

	inline void setPaneColors(int colorID)
	{
		mIsEnabled = false;
		if (mPane) {
			J2DTextBox* pane = static_cast<J2DTextBox*>(mPane);
			pane->setCharColor(mFonts[colorID].mCol1);
			pane->setGradColor(mFonts[colorID].mCol2);
			pane->setWhite(mFonts[colorID].mWhite);
			pane->setBlack(mFonts[colorID].mBlack);
		}
	}

	// _00     = VTBL
	// _00-_20 = E2DCallBack_Base
	E2DFullFontColor mFonts[2]; // _20
	f32 mColor1Weight;          // _40, weight to give 'second' color in blend calc
	f32 mSpeed;                 // _44
	bool mIsTowardColor1;       // _48, is amount of color1 increasing in blend?
	u8 _49;                     // _49
};

struct E2DCallBack_CalcAnimation : public E2DCallBack_Base {
	E2DCallBack_CalcAnimation() { }

	virtual ~E2DCallBack_CalcAnimation() { } // _08 (weak)
	virtual void do_update()
	{
		if (mPane->getTypeID() == 8) {
			static_cast<J2DScreen*>(mPane)->animation();
		}
	} // _1C (weak)

	// _00     = VTBL
	// _00-_20 = E2DCallBack_Base
};

// Size: 0x40
struct E2DCallBack_Purupuru : public E2DCallBack_Base {
	E2DCallBack_Purupuru() { mScale = 1.0f; }

	virtual ~E2DCallBack_Purupuru() { } // _08 (weak)
	virtual void do_update();           // _1C

	// _00     = VTBL
	// _00-_20 = E2DCallBack_Base
	og::Screen::ScaleMgr mScaleMgr; // _20
	f32 mScale;                     // _3C
};

struct E2DCallBack_WindowCursor : public E2DCallBack_Base {

	E2DCallBack_WindowCursor()
	    : mCounter(0)
	    , mCounterMax(0)
	{
		mScale      = 1.0f;
		mWindowPane = nullptr;
	}

	virtual ~E2DCallBack_WindowCursor() { } // _08 (weak)
	virtual void do_update();               // _1C

	// _00     = VTBL
	// _00-_20 = E2DCallBack_Base
	JGeometry::TBox2f mBounds1;     // _20
	JGeometry::TBox2f mBounds2;     // _30
	u32 mCounter;                   // _40
	u32 mCounterMax;                // _44
	og::Screen::ScaleMgr mScaleMgr; // _48
	f32 mScale;                     // _64
	J2DPane* mWindowPane;           // _68
};
} // namespace ebi

#endif
