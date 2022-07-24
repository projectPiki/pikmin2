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
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace P2DScreen {
struct Node : public CNode {
	virtual ~Node();                               // _08 (inline)
	virtual void update();                         // _10 (inline)
	virtual void draw(Graphics&, J2DGrafContext&); // _14 (inline)
	virtual void doInit();                         // _18 (inline)
};
} // namespace P2DScreen

#endif
