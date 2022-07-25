#ifndef _OG_SCREEN_CALLBACK_COUNTERDAY_H
#define _OG_SCREEN_CALLBACK_COUNTERDAY_H

/*
    __vt__Q32og6Screen19CallBack_CounterDay:
    .4byte 0
    .4byte 0
    .4byte __dt__Q32og6Screen19CallBack_CounterDayFv
    .4byte getChildCount__5CNodeFv
    .4byte update__Q32og6Screen19CallBack_CounterDayFv
    .4byte draw__Q32og6Screen18CallBack_CounterRVFR8GraphicsR14J2DGrafContext
    .4byte doInit__Q29P2DScreen4NodeFv
    .4byte init__Q32og6Screen19CallBack_CounterDayFP9J2DScreenUxUxUxPUlb
    .4byte show__Q32og6Screen19CallBack_CounterDayFv
    .4byte hide__Q32og6Screen19CallBack_CounterDayFv
    .4byte setValue__Q32og6Screen18CallBack_CounterRVFbb
    .4byte setValue__Q32og6Screen19CallBack_CounterDayFv
*/

struct CNode {
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace og {
namespace Screen {
struct CallBack_CounterRV {
	virtual ~CallBack_CounterRV();                                                                                   // _08 (inline)
	virtual void _0C() = 0;                                                                                          // _0C
	virtual void update();                                                                                           // _10
	virtual void draw(Graphics&, J2DGrafContext&);                                                                   // _14
	virtual void _18() = 0;                                                                                          // _18
	virtual void init(J2DScreen*, unsigned long long, unsigned long long, unsigned long long, unsigned long*, bool); // _1C
	virtual void show();                                                                                             // _20
	virtual void hide();                                                                                             // _24
	virtual void setValue(bool, bool);                                                                               // _28
};
} // namespace Screen
} // namespace og

namespace P2DScreen {
struct Node {
	virtual ~Node();        // _08 (inline)
	virtual void _0C() = 0; // _0C
	virtual void update();  // _10
	virtual void _14() = 0; // _14
	virtual void doInit();  // _18 (inline)
};
} // namespace P2DScreen

namespace og {
namespace Screen {
struct CallBack_CounterDay : public CNode, public CallBack_CounterRV, public Node {
	virtual ~CallBack_CounterDay();                                                                                  // _08 (inline)
	virtual void update();                                                                                           // _10
	virtual void init(J2DScreen*, unsigned long long, unsigned long long, unsigned long long, unsigned long*, bool); // _1C
	virtual void show();                                                                                             // _20
	virtual void hide();                                                                                             // _24
	virtual void setValue();                                                                                         // _2C

	CallBack_CounterDay(char**, unsigned short, JKRArchive*);
};
} // namespace Screen
} // namespace og

#endif
