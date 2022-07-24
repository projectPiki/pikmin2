#ifndef _KH_SCREEN_KHUTILFADEPANEWM_H
#define _KH_SCREEN_KHUTILFADEPANEWM_H

/*
    __vt__Q32kh6Screen16khUtilFadePaneWM:
    .4byte 0
    .4byte 0
    .4byte __dt__Q32kh6Screen16khUtilFadePaneWMFv
    .4byte getChildCount__5CNodeFv
    .4byte update__Q32kh6Screen14khUtilFadePaneFv
    .4byte draw__Q29P2DScreen4NodeFR8GraphicsR14J2DGrafContext
    .4byte doInit__Q29P2DScreen4NodeFv
    .4byte fadein_finish__Q32kh6Screen14khUtilFadePaneFv
    .4byte fadeout_finish__Q32kh6Screen16khUtilFadePaneWMFv
*/

struct CNode {
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace kh {
namespace Screen {
struct khUtilFadePane {
	virtual ~khUtilFadePane();    // _08 (inline)
	virtual void _0C() = 0;       // _0C
	virtual void update();        // _10
	virtual void _14() = 0;       // _14
	virtual void _18() = 0;       // _18
	virtual void fadein_finish(); // _1C (inline)
};
} // namespace Screen
} // namespace kh

namespace P2DScreen {
struct Node {
	virtual ~Node();                               // _08 (inline)
	virtual void _0C() = 0;                        // _0C
	virtual void _10() = 0;                        // _10
	virtual void draw(Graphics&, J2DGrafContext&); // _14 (inline)
	virtual void doInit();                         // _18 (inline)
};
} // namespace P2DScreen

namespace kh {
namespace Screen {
struct khUtilFadePaneWM : public CNode, public khUtilFadePane, public Node {
	virtual ~khUtilFadePaneWM();   // _08 (inline)
	virtual void fadeout_finish(); // _20
};
} // namespace Screen
} // namespace kh

#endif
