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
		    : m_pane(pane)
		    , m_next(nullptr)
		{
		}

		virtual ~khPaneNode() { } // _08 (weak)

		// _00 = VTBL
		J2DPane* m_pane;    // _04
		khPaneNode* m_next; // _08
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

	// _00     = VTBL
	// _00-_1C = P2DScreen::CallBackNode
	khPaneNode m_paneNode; // _1C
	int m_state;           // _28
	u8 m_currentAlpha;     // _2C
	u8 m_changeAlpha;      // _2D
};

struct khUtilFadePaneWM : public khUtilFadePane {
	virtual ~khUtilFadePaneWM() { } // _08 (weak)
	virtual void fadeout_finish();  // _20

	// _00     = VTBL
	// _00-_30 = khUtilFadePane
	kh::Screen::WorldMap* m_mapObj; // _34
	bool m_finish;
};

struct khUtilColorAnm : public P2DScreen::CallBackNode {
	khUtilColorAnm(P2DScreen::Mgr*, u64, int, int);

	virtual ~khUtilColorAnm() { } // _08 (weak)
	virtual void update();        // _10 (weak)
	virtual void do_update() { }  // _1C (weak)

	// _00     = VTBL
	// _00-_1C = P2DScreen::Node
	JUtility::TColor* m_colorList; // _1C
	JUtility::TColor m_color1;     // _20
	JUtility::TColor m_color2;     // _24
	int m_paneNum;                 // _28
	int m_maxFrame;                // _2C
	int m_counter;                 // _30
	u8 m_updateMode;               // _34
};

struct khUtilColorAnmWM : public khUtilColorAnm {
	virtual ~khUtilColorAnmWM() { } // _08 (weak)
	virtual void do_update();       // _14

	// _00     = VTBL
	// _00-_38 = khUtilColorAnm
	J2DPane* m_paneList[4];                     // _38
	efx2d::T2DCountKira* m_efx[4];              // _48
	og::Screen::CallBack_CounterRV* m_counter1; //_4C
	og::Screen::CallBack_CounterRV* m_counter2; // _50
};

} // namespace Screen
} // namespace kh

#endif
