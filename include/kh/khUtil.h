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

		virtual ~khPaneNode(); // _00

		J2DPane* m_pane;    // _04
		khPaneNode* m_next; // _08
	};

	khUtilFadePane(u8);

	virtual ~khUtilFadePane();     // _00
	virtual void update();         // _08
	virtual void fadeout_finish(); // _18

	void add(J2DPane*);
	khUtilFadePane* create(P2DScreen::Mgr*, u64, u8);
	void fadein();
	void fadeout();
	void set_init_alpha(u8);

	khPaneNode m_paneNode; // _1C
	int _28;               // _28
	u8 m_fadePaneAlpha;    // _2C
	u8 _2D;                // _2D
};

struct khUtilFadePaneWM : public khUtilFadePane {
	virtual void fadeout_finish(); // _18
};

struct khUtilColorAnm : public P2DScreen::Node {
	khUtilColorAnm(P2DScreen::Mgr*, u64, int, int);

	virtual ~khUtilColorAnm(); // _00
	virtual void update();     // _08
	virtual void do_update();  // _14
};

struct khUtilColorAnmWM : public khUtilColorAnm {
	virtual void do_update(); // _14
};
} // namespace Screen
} // namespace kh

#endif
