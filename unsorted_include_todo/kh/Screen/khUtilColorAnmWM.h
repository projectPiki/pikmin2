#ifndef _KH_SCREEN_KHUTILCOLORANMWM_H
#define _KH_SCREEN_KHUTILCOLORANMWM_H

/*
    __vt__Q32kh6Screen16khUtilColorAnmWM:
    .4byte 0
    .4byte 0
    .4byte __dt__Q32kh6Screen16khUtilColorAnmWMFv
    .4byte getChildCount__5CNodeFv
    .4byte update__Q32kh6Screen14khUtilColorAnmFv
    .4byte draw__Q29P2DScreen4NodeFR8GraphicsR14J2DGrafContext
    .4byte doInit__Q29P2DScreen4NodeFv
    .4byte do_update__Q32kh6Screen16khUtilColorAnmWMFv
*/

struct CNode {
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace kh {
namespace Screen {
struct khUtilColorAnm {
	virtual ~khUtilColorAnm(); // _08 (inline)
	virtual void _0C() = 0;    // _0C
	virtual void update();     // _10 (inline)
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
struct khUtilColorAnmWM : public CNode, public khUtilColorAnm, public Node {
	virtual ~khUtilColorAnmWM(); // _08 (inline)
	virtual void do_update();    // _1C
};
} // namespace Screen
} // namespace kh

#endif
