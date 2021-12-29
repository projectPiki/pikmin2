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
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

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
	struct khUtilColorAnm : public CNode, public Node {
		virtual ~khUtilColorAnm();                     // _00
		virtual void getChildCount();                  // _04
		virtual void update();                         // _08
		virtual void draw(Graphics&, J2DGrafContext&); // _0C
		virtual void doInit();                         // _10
		virtual void do_update();                      // _14

		// _00 VTBL
	};
} // namespace Screen
} // namespace kh

#endif
