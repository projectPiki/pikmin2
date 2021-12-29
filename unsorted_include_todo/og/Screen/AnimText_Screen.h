#ifndef _OG_SCREEN_ANIMTEXT_SCREEN_H
#define _OG_SCREEN_ANIMTEXT_SCREEN_H

/*
    __vt__Q32og6Screen15AnimText_Screen:
    .4byte 0
    .4byte 0
    .4byte __dt__Q32og6Screen15AnimText_ScreenFv
    .4byte getChildCount__5CNodeFv
    .4byte update__Q32og6Screen15AnimText_ScreenFv
    .4byte draw__Q32og6Screen15CallBack_ScreenFR8GraphicsR14J2DGrafContext
    .4byte doInit__Q29P2DScreen4NodeFv
    .4byte 0
*/

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace og {
namespace Screen {
	struct CallBack_Screen {
		virtual void _00() = 0;                                 // _00
		virtual void _04() = 0;                                 // _04
		virtual void _08() = 0;                                 // _08
		virtual void CallBack_draw(Graphics&, J2DGrafContext&); // _0C

		// _00 VTBL
	};
} // namespace Screen
} // namespace og

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

namespace og {
namespace Screen {
	struct AnimText_Screen : public CNode, public CallBack_Screen, public Node {
		virtual AnimText_ ~AnimText_Screen();                   // _00
		virtual void getChildCount();                           // _04
		virtual void AnimText_update();                         // _08
		virtual void CallBack_draw(Graphics&, J2DGrafContext&); // _0C
		virtual void doInit();                                  // _10
		virtual void _14() = 0;                                 // _14

		// _00 VTBL
	};
} // namespace Screen
} // namespace og

#endif
