#ifndef _OG_SCREEN_CALLBACK_LIFEGAUGE_H
#define _OG_SCREEN_CALLBACK_LIFEGAUGE_H

/*
    __vt__Q32og6Screen18CallBack_LifeGauge:
    .4byte 0
    .4byte 0
    .4byte __dt__Q32og6Screen18CallBack_LifeGaugeFv
    .4byte getChildCount__5CNodeFv
    .4byte update__Q32og6Screen18CallBack_LifeGaugeFv
    .4byte draw__Q32og6Screen18CallBack_LifeGaugeFR8GraphicsR14J2DGrafContext
    .4byte doInit__Q29P2DScreen4NodeFv
*/

struct CNode {
	virtual void _08() = 0;       // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

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

namespace og {
namespace Screen {
struct CallBack_LifeGauge : public CNode, public Node {
	virtual ~CallBack_LifeGauge();                 // _08
	virtual void update();                         // _10
	virtual void draw(Graphics&, J2DGrafContext&); // _14

	// _00 VTBL
};
} // namespace Screen
} // namespace og

#endif
