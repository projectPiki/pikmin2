#ifndef _KH_KHUTIL_H
#define _KH_KHUTIL_H

#include "P2DScreen.h"
#include "efx2d/T2DCountKira.h"
#include "og/Screen/callbackNodes.h"

struct Graphics;
struct J2DAnmBase;
struct J2DPane;
struct J2DScreen;
struct ResTIMG;

namespace kh {
namespace Screen {
struct WorldMap;
u64 getSerialTagName(u64, int);
void setTex(J2DScreen*, u64, const ResTIMG*);
void setTex(J2DScreen*, u64, const char*);
void setMatAnm(J2DPane*, J2DAnmBase*);
void setInfAlpha(J2DPane*);
f32 getPaneCenterX(J2DPane*);
f32 getPaneCenterY(J2DPane*);

struct khUtilFadePane : public P2DScreen::CallBackNode {
	struct khPaneNode {
		inline khPaneNode(J2DPane* pane)
		    : mPane(pane)
		    , mNext(nullptr)
		{
		}

		virtual ~khPaneNode() { } // _08 (weak)

		// _00 = VTBL
		J2DPane* mPane;    // _04
		khPaneNode* mNext; // _08
	};

	khUtilFadePane(u8);

	virtual ~khUtilFadePane() { }     // _08 (weak)
	virtual void update();            // _10
	virtual void fadein_finish() { }  // _1C (weak)
	virtual void fadeout_finish() { } // _20 (weak)

	bool add(J2DPane*);
	void fadein();
	void fadeout();
	void set_init_alpha(u8);

	static khUtilFadePane* create(P2DScreen::Mgr*, u64, u8);

	inline void createNode(J2DPane* pane)
	{
		khPaneNode* currNode = &mPaneNode;
		while (currNode->mNext) {
			currNode = currNode->mNext;
		}

		khPaneNode* node = new khPaneNode(pane);
		P2ASSERTLINE(64, node);
		currNode->mNext = node;
	}

	// _00     = VTBL
	// _00-_1C = P2DScreen::CallBackNode
	khPaneNode mPaneNode; // _1C
	int mState;           // _28
	u8 mCurrentAlpha;     // _2C
	u8 mChangeAlpha;      // _2D
};

struct khUtilFadePaneWM : public khUtilFadePane {
	khUtilFadePaneWM()
	    : khUtilFadePane(16)
	{
		mMapObj = nullptr;
		mFinish = false;
	}
	virtual ~khUtilFadePaneWM() { } // _08 (weak)
	virtual void fadeout_finish();  // _20

	static khUtilFadePaneWM* create(P2DScreen::Mgr*, u64, u8); // UNUSED
	void create(P2DScreen::Mgr*, J2DPane*, u8);                // UNUSED

	// _00     = VTBL
	// _00-_30 = khUtilFadePane
	kh::Screen::WorldMap* mMapObj; // _30
	bool mFinish;                  // _34
};

struct khUtilColorAnm : public P2DScreen::CallBackNode {
	khUtilColorAnm(P2DScreen::Mgr* screen, u64 tag, int panes, int length);

	virtual ~khUtilColorAnm() { } // _08 (weak)
	virtual void update();        // _10 (weak)
	virtual void do_update() { }  // _1C (weak)

	inline JUtility::TColor& getColor(int id) const { return mColorList[id]; }

	inline void setColor(JUtility::TColor color, int id) { mColorList[id] = color; }
	inline void setDisabledColor(JUtility::TColor color) { mDisabledColor = color; }

	inline void reset()
	{
		mColor = mColorList[0];
		mFrame = 0;
	}

	// _00     = VTBL
	// _00-_1C = P2DScreen::Node
	JUtility::TColor* mColorList;    // _1C
	JUtility::TColor mColor;         // _20
	JUtility::TColor mDisabledColor; // _24
	int mPaneNum;                    // _28
	int mLength;                     // _2C
	int mFrame;                      // _30
	bool mUpdateMode;                // _34
};

struct khUtilColorAnmWM : public khUtilColorAnm {
	khUtilColorAnmWM(P2DScreen::Mgr* screen, u64 tag)
	    : khUtilColorAnm(screen, tag, 3, 100)
	{
		mPaneList[0] = nullptr;
		mEfx[0]      = nullptr;
		mPaneList[1] = nullptr;
		mEfx[1]      = nullptr;
		mPaneList[2] = nullptr;
		mEfx[2]      = nullptr;
		mPaneList[3] = nullptr;
		mEfx[3]      = nullptr;
	}
	virtual ~khUtilColorAnmWM() { } // _08 (weak)
	virtual void do_update();       // _14

	khUtilColorAnmWM(P2DScreen::Mgr*, u64, int, int);             // UNUSED
	void my_init(J2DPicture**, og::Screen::CallBack_CounterRV**); // UNUSED
	void effect_on(u32);                                          // UNUSED
	void effect_off();                                            // UNUSED

	// _00     = VTBL
	// _00-_38 = khUtilColorAnm
	J2DPane* mPaneList[4];                     // _38
	efx2d::T2DCountKira* mEfx[4];              // _48
	og::Screen::CallBack_CounterRV* mCounter1; //_4C
	og::Screen::CallBack_CounterRV* mCounter2; // _50
};

} // namespace Screen
} // namespace kh

#endif
