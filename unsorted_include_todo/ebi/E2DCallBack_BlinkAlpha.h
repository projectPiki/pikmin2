#ifndef _EBI_E2DCALLBACK_BLINKALPHA_H
#define _EBI_E2DCALLBACK_BLINKALPHA_H

/*
    __vt__Q23ebi22E2DCallBack_BlinkAlpha:
    .4byte 0
    .4byte 0
    .4byte __dt__Q23ebi22E2DCallBack_BlinkAlphaFv
    .4byte getChildCount__5CNodeFv
    .4byte update__Q23ebi16E2DCallBack_BaseFv
    .4byte draw__Q23ebi16E2DCallBack_BaseFR8GraphicsR14J2DGrafContext
    .4byte doInit__Q29P2DScreen4NodeFv
    .4byte do_update__Q23ebi22E2DCallBack_BlinkAlphaFv
    .4byte do_draw__Q23ebi16E2DCallBack_BaseFR8GraphicsR14J2DGrafContext
*/

struct CNode {
	virtual void _08() = 0;       // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace ebi {
struct E2DCallBack_Base {
	virtual void _08() = 0;                           // _08
	virtual void _0C() = 0;                           // _0C
	virtual void update();                            // _10
	virtual void draw(Graphics&, J2DGrafContext&);    // _14
	virtual void _18() = 0;                           // _18
	virtual void _1C() = 0;                           // _1C
	virtual void do_draw(Graphics&, J2DGrafContext&); // _20

	// _00 VTBL
};
} // namespace ebi

namespace P2DScreen {
struct Node {
	virtual void _08() = 0; // _08
	virtual void _0C() = 0; // _0C
	virtual void _10() = 0; // _10
	virtual void _14() = 0; // _14
	virtual void doInit();  // _18

	// _00 VTBL
};
} // namespace P2DScreen

namespace ebi {
struct E2DCallBack_BlinkAlpha : public CNode, public E2DCallBack_Base, public Node {
	virtual ~E2DCallBack_BlinkAlpha(); // _08
	virtual void do_update();          // _1C

	// _00 VTBL
};
} // namespace ebi

#endif
