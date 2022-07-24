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
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace og {
namespace Screen {
struct CallBack_Screen {
	virtual ~CallBack_Screen();                             // _08 (inline)
	virtual void _0C() = 0;                                 // _0C
	virtual void AnimText_update();                         // _10
	virtual void CallBack_draw(Graphics&, J2DGrafContext&); // _14
};
} // namespace Screen
} // namespace og

namespace P2DScreen {
struct Node {
	virtual ~Node();                // _08 (inline)
	virtual void _0C() = 0;         // _0C
	virtual void AnimText_update(); // _10
	virtual void _14() = 0;         // _14
	virtual void doInit();          // _18 (inline)
};
} // namespace P2DScreen

namespace og {
namespace Screen {
struct AnimText_Screen : public CNode, public CallBack_Screen, public Node {
	virtual AnimText_ ~AnimText_Screen(); // _08 (inline)
	virtual void AnimText_update();       // _10
	virtual void _1C() = 0;               // _1C

	AnimText_Screen();
	void setAnimScreen(og::Screen::AnimScreen*);
	void setText(unsigned long long);
	void stop();
	void open(float);
	void close();
	void blink(float, float);
};
} // namespace Screen
} // namespace og

#endif
