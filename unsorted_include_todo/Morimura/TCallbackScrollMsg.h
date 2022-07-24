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
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace Morimura {
struct TCallbackScrollMsg : public CNode {
	virtual ~TCallbackScrollMsg();                 // _08 (inline)
	virtual void update();                         // _10
	virtual void draw(Graphics&, J2DGrafContext&); // _14
	virtual void doInit();                         // _18

	TCallbackScrollMsg();
	void reset();
	void scroll(float);
	void getPosRate();
};
} // namespace Morimura

#endif
