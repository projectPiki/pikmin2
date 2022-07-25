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
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace P2DScreen {
struct CallBackNode {
	virtual ~CallBackNode(); // _08 (weak)
	virtual void _0C() = 0;  // _0C
	virtual void update();   // _10 (weak)
};
} // namespace P2DScreen

namespace P2DScreen {
struct Node {
	virtual ~Node();                               // _08 (weak)
	virtual void _0C() = 0;                        // _0C
	virtual void _10() = 0;                        // _10
	virtual void draw(Graphics&, J2DGrafContext&); // _14
	virtual void doInit();                         // _18 (weak)
};
} // namespace P2DScreen

namespace Morimura {
struct TCallbackScissor : public CNode, public CallBackNode, public Node {
	virtual ~TCallbackScissor();                   // _08 (weak)
	virtual void draw(Graphics&, J2DGrafContext&); // _14
};
} // namespace Morimura

#endif
