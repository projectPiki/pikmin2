#ifndef _EBI_E2DCALLBACK_BASE_H
#define _EBI_E2DCALLBACK_BASE_H

/*
    __vt__Q23ebi16E2DCallBack_Base:
    .4byte 0
    .4byte 0
    .4byte __dt__Q23ebi16E2DCallBack_BaseFv
    .4byte getChildCount__5CNodeFv
    .4byte update__Q23ebi16E2DCallBack_BaseFv
    .4byte draw__Q23ebi16E2DCallBack_BaseFR8GraphicsR14J2DGrafContext
    .4byte doInit__Q29P2DScreen4NodeFv
    .4byte do_update__Q23ebi16E2DCallBack_BaseFv
    .4byte do_draw__Q23ebi16E2DCallBack_BaseFR8GraphicsR14J2DGrafContext
*/

struct CNode {
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace P2DScreen {
struct Node {
	virtual ~Node();                               // _08 (weak)
	virtual void _0C() = 0;                        // _0C
	virtual void update();                         // _10 (weak)
	virtual void draw(Graphics&, J2DGrafContext&); // _14 (weak)
	virtual void doInit();                         // _18 (weak)
};
} // namespace P2DScreen

namespace ebi {
struct E2DCallBack_Base : public CNode, public Node {
	virtual ~E2DCallBack_Base();                      // _08 (weak)
	virtual void update();                            // _10 (weak)
	virtual void draw(Graphics&, J2DGrafContext&);    // _14 (weak)
	virtual void do_update();                         // _1C (weak)
	virtual void do_draw(Graphics&, J2DGrafContext&); // _20 (weak)
};
} // namespace ebi

#endif
