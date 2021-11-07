#ifndef _MORIMURA_TCALLBACKSCROLLMSG_H
#define _MORIMURA_TCALLBACKSCROLLMSG_H

struct CNode {
	virtual void _00() = 0;       // _00
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
