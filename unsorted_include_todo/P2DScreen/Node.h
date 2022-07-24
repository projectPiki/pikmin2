#ifndef _P2DSCREEN_NODE_H
#define _P2DSCREEN_NODE_H

/*
    __vt__Q29P2DScreen4Node:
    .4byte 0
    .4byte 0
    .4byte __dt__Q29P2DScreen4NodeFv
    .4byte getChildCount__5CNodeFv
    .4byte update__Q29P2DScreen4NodeFv
    .4byte draw__Q29P2DScreen4NodeFR8GraphicsR14J2DGrafContext
    .4byte doInit__Q29P2DScreen4NodeFv
*/

struct CNode {
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace P2DScreen {
struct Node : public CNode {
	virtual ~Node();                               // _08
	virtual void update();                         // _10
	virtual void draw(Graphics&, J2DGrafContext&); // _14
	virtual void doInit();                         // _18

	// _00 VTBL
};
} // namespace P2DScreen

#endif
