#ifndef _KH_KHUTIL_H
#define _KH_KHUTIL_H

#include "types.h"
#include "P2DScreen.h"

struct Graphics;
struct J2DAnmBase;
struct J2DPane;
struct J2DScreen;
struct ResTIMG;

namespace kh {
namespace Screen {
u64 getSerialTagName(u64, int);
void setTex(J2DScreen*, u64, const ResTIMG*);
void setTex(J2DScreen*, u64, const char*);
void setMatAnm(J2DPane*, J2DAnmBase*);
void setInfAlpha(J2DPane*);
float getPaneCenterX(J2DPane*);

struct khUtilFadePane : public P2DScreen::CallBackNode {
	struct khPaneNode {
		inline khPaneNode()
		    : m_pane(nullptr)
		    , m_next(nullptr)
		{
		}

		virtual ~khPaneNode(); // _08 (weak)

		// _00 = VTBL
		J2DPane* m_pane;    // _04
		khPaneNode* m_next; // _08
	};

	khUtilFadePane(u8);

	virtual ~khUtilFadePane();     // _08 (weak)
	virtual void update();         // _10
	virtual void fadein_finish();  // _1C (weak)
	virtual void fadeout_finish(); // _20 (weak)

	void add(J2DPane*);
	void fadein();
	void fadeout();
	void set_init_alpha(u8);

	static khUtilFadePane* create(P2DScreen::Mgr*, u64, u8);

	// _00     = VTBL
	// _00-_1C = P2DScreen::CallBackNode
	khPaneNode m_paneNode; // _1C
	int _28;               // _28
	u8 m_fadePaneAlpha;    // _2C
	u8 _2D;                // _2D
};

struct khUtilFadePaneWM : public khUtilFadePane {
	virtual ~khUtilFadePaneWM();   // _08 (weak)
	virtual void fadeout_finish(); // _20

	// _00     = VTBL
	// _00-_30 = khUtilFadePane
};

struct khUtilColorAnm : public P2DScreen::Node {
	khUtilColorAnm(P2DScreen::Mgr*, u64, int, int);

	virtual ~khUtilColorAnm(); // _08 (weak)
	virtual void update();     // _10 (weak)
	virtual void do_update();  // _1C (weak)

	// _00     = VTBL
	// _00-_1C = P2DScreen::Node
};

struct khUtilColorAnmWM : public khUtilColorAnm {
	virtual ~khUtilColorAnmWM(); // _08 (weak)
	virtual void do_update();    // _14

	// _00     = VTBL
	// _00-_1C = khUtilColorAnm
};
} // namespace Screen
} // namespace kh

#endif
