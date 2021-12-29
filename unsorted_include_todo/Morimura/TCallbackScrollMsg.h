#ifndef _MORIMURA_TCALLBACKSCROLLMSG_H
#define _MORIMURA_TCALLBACKSCROLLMSG_H

/*
    __vt__Q28Morimura18TCallbackScrollMsg:
    .4byte 0
    .4byte 0
    .4byte __dt__Q28Morimura18TCallbackScrollMsgFv
    .4byte getChildCount__5CNodeFv
    .4byte update__Q28Morimura18TCallbackScrollMsgFv
    .4byte draw__Q28Morimura18TCallbackScrollMsgFR8GraphicsR14J2DGrafContext
    .4byte doInit__Q28Morimura18TCallbackScrollMsgFv
*/

struct CNode {
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Morimura {
struct TCallbackScrollMsg : public CNode {
	virtual ~TCallbackScrollMsg();                 // _00
	virtual void getChildCount();                  // _04
	virtual void update();                         // _08
	virtual void draw(Graphics&, J2DGrafContext&); // _0C
	virtual void doInit();                         // _10

	// _00 VTBL
};
} // namespace Morimura

#endif
