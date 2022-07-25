#ifndef _OG_SCREEN_CALLBACK_SCREEN_H
#define _OG_SCREEN_CALLBACK_SCREEN_H

/*
    __vt__Q32og6Screen15CallBack_Screen:
    .4byte 0
    .4byte 0
    .4byte __dt__Q32og6Screen15CallBack_ScreenFv
    .4byte getChildCount__5CNodeFv
    .4byte update__Q32og6Screen15CallBack_ScreenFv
    .4byte draw__Q32og6Screen15CallBack_ScreenFR8GraphicsR14J2DGrafContext
    .4byte doInit__Q29P2DScreen4NodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace P2DScreen {
struct Node {
	virtual ~Node();                                        // _08 (inline)
	virtual void _0C() = 0;                                 // _0C
	virtual void CallBack_update();                         // _10
	virtual void CallBack_draw(Graphics&, J2DGrafContext&); // _14
	virtual void doInit();                                  // _18 (inline)
};
} // namespace P2DScreen

namespace og {
namespace Screen {
struct CallBack_Screen : public CNode, public Node {
	virtual CallBack_ ~CallBack_Screen();                   // _08 (inline)
	virtual void CallBack_update();                         // _10
	virtual void CallBack_draw(Graphics&, J2DGrafContext&); // _14

	CallBack_Screen(P2DScreen::Mgr*, unsigned long long);
	void getPartsScreen();
};
} // namespace Screen
} // namespace og

#endif
