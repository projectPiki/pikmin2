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
	virtual ~E2DCallBack_Base();                      // _08 (weak)
	virtual void update();                            // _10 (weak)
	virtual void draw(Graphics&, J2DGrafContext&);    // _14 (weak)
	virtual void do_update();                         // _1C (weak)
	virtual void do_draw(Graphics&, J2DGrafContext&); // _20 (weak)

	bool mIsEnabled; // _1C
};

// Size: 0x3C
struct E2DCallBack_AnmBase : public E2DCallBack_Base {
	E2DCallBack_AnmBase() { mFrameCtrl.init(0); }

	virtual ~E2DCallBack_AnmBase(); // _08 (weak)
	virtual void do_update();       // _1C

	void loadAnm(char*, JKRArchive*, long, long);
	void play(f32, J3DAnmAttr, bool);
	void playBack(f32, bool);
	void stop();
	void setStartFrame();
	void setEndFrame();
	void setRandFrame();
	f32 getPlayFinRate();
	bool isFinish();

	J3DFrameCtrl mFrameCtrl; // _20
	J2DAnmBase* mAnim;       // _34
	bool mIsFinished;        // _38
};

struct E2DCallBack_BlinkAlpha : public E2DCallBack_Base {
	virtual ~E2DCallBack_BlinkAlpha(); // _08 (weak)
	virtual void do_update();          // _1C

	// TODO: _20 through _29 and BlinkFontColor's _40 through _49 are
	// suspiciously similar in usage....
	f32 _20; // _20
	f32 _24; // _24
	u8 _28;  // _28
	u8 _29;  // _29
	u32 : 0; // set alignment to next 4-byte boundary
	u8 _2C;  // _2C
	u8 _2D;  // _2D
};

// Size: 0x4C
struct E2DCallBack_BlinkFontColor : public E2DCallBack_Base {
	E2DCallBack_BlinkFontColor();

	virtual ~E2DCallBack_BlinkFontColor(); // _08 (weak)
	virtual void do_update();              // _1C

	void set(J2DTextBox*, J2DTextBox*);
	void set(ebi::E2DFullFontColor&, ebi::E2DFullFontColor&);

	inline void setColors(int i, J2DTextBox* pane)
	{
		mFonts[i].mCol1.set(pane->mCharColor);
		mFonts[i].mCol2.set(pane->mGradientColor);
		mFonts[i].mWhite = pane->getWhite();
		mFonts[i].mBlack = pane->getBlack();
	}

	inline void enable()
	{
		mIsEnabled = true;
		mSpeed     = sys->mDeltaTime * 3.333333f;
		_40        = 0.0f;
		_48        = 1;
		_49        = 0;
	}

	// needs tweaking
	inline void setPaneColors()
	{
		mIsEnabled       = false;
		J2DTextBox* pane = static_cast<J2DTextBox*>(mPane);
		if (pane) {
			pane->mCharColor.set(mFonts[0].mCol1);
			pane->mGradientColor.set(mFonts[0].mCol2);
			JUtility::TColor white = mFonts[0].mWhite;
			pane->setWhite(white);
			JUtility::TColor black = mFonts[0].mBlack;
			pane->setBlack(black);
		}
	}

	E2DFullFontColor mFonts[2]; // _20
	f32 _40;                    // _40
	f32 mSpeed;                 // _44
	u8 _48;                     // _48
	u8 _49;                     // _49
};

struct E2DCallBack_CalcAnimation : public E2DCallBack_Base {
	E2DCallBack_CalcAnimation() { }

	virtual ~E2DCallBack_CalcAnimation(); // _08 (weak)
	virtual void do_update();             // _1C (weak)
};

// Size: 0x40
struct E2DCallBack_Purupuru : public E2DCallBack_Base {
	E2DCallBack_Purupuru();

	virtual ~E2DCallBack_Purupuru(); // _08 (weak)
	virtual void do_update();        // _1C

	og::Screen::ScaleMgr mScaleMgr; // _20
	// TODO: Rename to `mScale`
	f32 _3C; // _3C
};

struct E2DCallBack_WindowCursor : public E2DCallBack_Base {

	E2DCallBack_WindowCursor()
	    : _40(0)
	    , _44(0)
	{
		_64   = 1.0f;
		mPane = nullptr;
	}

	virtual ~E2DCallBack_WindowCursor(); // _08 (weak)
	virtual void do_update();            // _1C

	JGeometry::TBox2f mBounds1;     // _20
	JGeometry::TBox2f mBounds2;     // _30
	u32 _40;                        // _40
	u32 _44;                        // _44
	og::Screen::ScaleMgr mScaleMgr; // _48
	f32 _64;                        // _64
	J2DPane* mPane;                 // _68
};
} // namespace ebi

#endif
