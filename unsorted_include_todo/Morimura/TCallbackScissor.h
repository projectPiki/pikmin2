#ifndef _MORIMURA_TCALLBACKSCISSOR_H
#define _MORIMURA_TCALLBACKSCISSOR_H

/*
    __vt__Q28Morimura16TCallbackScissor:
    .4byte 0
    .4byte 0
    .4byte __dt__Q28Morimura16TCallbackScissorFv
    .4byte getChildCount__5CNodeFv
    .4byte update__Q29P2DScreen12CallBackNodeFv
    .4byte draw__Q28Morimura16TCallbackScissorFR8GraphicsR14J2DGrafContext
    .4byte doInit__Q29P2DScreen4NodeFv
*/

struct CNode {
	virtual void _08() = 0;       // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace P2DScreen {
struct CallBackNode {
	virtual void _08() = 0; // _08
	virtual void _0C() = 0; // _0C
	virtual void update();  // _10

	// _00 VTBL
};
} // namespace P2DScreen

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

namespace Morimura {
struct TCallbackScissor : public CNode, public CallBackNode, public Node {
	virtual ~TCallbackScissor();                   // _08
	virtual void draw(Graphics&, J2DGrafContext&); // _14

	// _00 VTBL
};
} // namespace Morimura

#endif
