#ifndef _KH_SCREEN_KHUTILFADEPANEWM_H
#define _KH_SCREEN_KHUTILFADEPANEWM_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace kh {
namespace Screen {
	struct khUtilFadePane {
		virtual void _00() = 0;       // _00
		virtual void _04() = 0;       // _04
		virtual void update();        // _08
		virtual void _0C() = 0;       // _0C
		virtual void _10() = 0;       // _10
		virtual void fadein_finish(); // _14

		// _00 VTBL
	};
} // namespace Screen
} // namespace kh

namespace P2DScreen {
struct Node {
	virtual void _00() = 0;                        // _00
	virtual void _04() = 0;                        // _04
	virtual void _08() = 0;                        // _08
	virtual void draw(Graphics&, J2DGrafContext&); // _0C
	virtual void doInit();                         // _10

	// _00 VTBL
};
} // namespace P2DScreen

namespace kh {
namespace Screen {
	struct khUtilFadePaneWM : public CNode, public khUtilFadePane, public Node {
		virtual ~khUtilFadePaneWM();                   // _00
		virtual void getChildCount();                  // _04
		virtual void update();                         // _08
		virtual void draw(Graphics&, J2DGrafContext&); // _0C
		virtual void doInit();                         // _10
		virtual void fadein_finish();                  // _14
		virtual void fadeout_finish();                 // _18

		// _00 VTBL
	};
} // namespace Screen
} // namespace kh

#endif
