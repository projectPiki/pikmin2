#ifndef _KH_SCREEN_KHUTILCOLORANM_H
#define _KH_SCREEN_KHUTILCOLORANM_H

/*
    __vt__Q32kh6Screen14khUtilColorAnm:
    .4byte 0
    .4byte 0
    .4byte __dt__Q32kh6Screen14khUtilColorAnmFv
    .4byte getChildCount__5CNodeFv
    .4byte update__Q32kh6Screen14khUtilColorAnmFv
    .4byte draw__Q29P2DScreen4NodeFR8GraphicsR14J2DGrafContext
    .4byte doInit__Q29P2DScreen4NodeFv
    .4byte do_update__Q32kh6Screen14khUtilColorAnmFv
*/

struct CNode {
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace P2DScreen {
struct Node {
	virtual ~Node();                               // _08 (inline)
	virtual void _0C() = 0;                        // _0C
	virtual void update();                         // _10 (inline)
	virtual void draw(Graphics&, J2DGrafContext&); // _14 (inline)
	virtual void doInit();                         // _18 (inline)
};
} // namespace P2DScreen

namespace kh {
namespace Screen {
struct khUtilColorAnm : public CNode, public Node {
	virtual ~khUtilColorAnm(); // _08 (inline)
	virtual void update();     // _10 (inline)
	virtual void do_update();  // _1C (inline)

	khUtilColorAnm();
};
} // namespace Screen
} // namespace kh

#endif
