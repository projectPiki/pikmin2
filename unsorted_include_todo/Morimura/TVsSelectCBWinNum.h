#ifndef _MORIMURA_TVSSELECTCBWINNUM_H
#define _MORIMURA_TVSSELECTCBWINNUM_H

/*
    __vt__Q28Morimura17TVsSelectCBWinNum:
    .4byte 0
    .4byte 0
    .4byte __dt__Q28Morimura17TVsSelectCBWinNumFv
    .4byte getChildCount__5CNodeFv
    .4byte update__Q28Morimura17TVsSelectCBWinNumFv
    .4byte draw__Q32og6Screen18CallBack_CounterRVFR8GraphicsR14J2DGrafContext
    .4byte doInit__Q29P2DScreen4NodeFv
    .4byte init__Q32og6Screen19CallBack_CounterDayFP9J2DScreenUxUxUxPUlb
    .4byte show__Q32og6Screen19CallBack_CounterDayFv
    .4byte hide__Q32og6Screen19CallBack_CounterDayFv
    .4byte setValue__Q28Morimura17TVsSelectCBWinNumFbb
    .4byte setValue__Q32og6Screen19CallBack_CounterDayFv
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
*/

struct CNode {
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace og {
namespace Screen {
struct CallBack_CounterRV {
	virtual ~CallBack_CounterRV();                 // _08 (weak)
	virtual void _0C() = 0;                        // _0C
	virtual void update();                         // _10
	virtual void draw(Graphics&, J2DGrafContext&); // _14
};
} // namespace Screen
} // namespace og

namespace P2DScreen {
struct Node {
	virtual ~Node();        // _08 (weak)
	virtual void _0C() = 0; // _0C
	virtual void update();  // _10
	virtual void _14() = 0; // _14
	virtual void doInit();  // _18 (weak)
};
} // namespace P2DScreen

namespace og {
namespace Screen {
struct CallBack_CounterDay {
	virtual ~CallBack_CounterDay();                                                                                  // _08 (weak)
	virtual void _0C() = 0;                                                                                          // _0C
	virtual void update();                                                                                           // _10
	virtual void _14() = 0;                                                                                          // _14
	virtual void _18() = 0;                                                                                          // _18
	virtual void init(J2DScreen*, unsigned long long, unsigned long long, unsigned long long, unsigned long*, bool); // _1C
	virtual void show();                                                                                             // _20
	virtual void hide();                                                                                             // _24
	virtual void setValue(bool, bool);                                                                               // _28
	virtual void setValue();                                                                                         // _2C
};
} // namespace Screen
} // namespace og

namespace Morimura {
struct TVsSelectCBWinNum : public CNode, public CallBack_CounterRV, public Node, public CallBack_CounterDay {
	virtual ~TVsSelectCBWinNum();      // _08 (weak)
	virtual void update();             // _10
	virtual void setValue(bool, bool); // _28
	virtual void _30() = 0;            // _30
	virtual void _34() = 0;            // _34
	virtual void _38() = 0;            // _38
	virtual void _3C() = 0;            // _3C
	virtual void _40() = 0;            // _40
	virtual void _44() = 0;            // _44
	virtual void _48() = 0;            // _48
	virtual void _4C() = 0;            // _4C
	virtual void _50() = 0;            // _50
	virtual void _54() = 0;            // _54
	virtual void _58() = 0;            // _58
	virtual void _5C() = 0;            // _5C
	virtual void _60() = 0;            // _60
	virtual void _64() = 0;            // _64
};
} // namespace Morimura

#endif
