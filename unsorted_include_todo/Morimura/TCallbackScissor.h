#ifndef _MORIMURA_TCALLBACKSCISSOR_H
#define _MORIMURA_TCALLBACKSCISSOR_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace P2DScreen {
struct CallBackNode {
	virtual void _00() = 0; // _00
	virtual void _04() = 0; // _04
	virtual void update();  // _08

	// _00 VTBL
};
} // namespace P2DScreen

namespace P2DScreen {
struct Node {
	virtual void _00() = 0; // _00
	virtual void _04() = 0; // _04
	virtual void _08() = 0; // _08
	virtual void _0C() = 0; // _0C
	virtual void doInit();  // _10

	// _00 VTBL
};
} // namespace P2DScreen

namespace Morimura {
struct TCallbackScissor : public CNode, public CallBackNode, public Node {
	virtual ~TCallbackScissor();                   // _00
	virtual void getChildCount();                  // _04
	virtual void update();                         // _08
	virtual void draw(Graphics&, J2DGrafContext&); // _0C
	virtual void doInit();                         // _10

	// _00 VTBL
};
} // namespace Morimura

#endif
