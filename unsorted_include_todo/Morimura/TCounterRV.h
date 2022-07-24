#ifndef _MORIMURA_TCOUNTERRV_H
#define _MORIMURA_TCOUNTERRV_H

/*
    __vt__Q28Morimura10TCounterRV:
    .4byte 0
    .4byte 0
    .4byte __dt__Q28Morimura10TCounterRVFv
    .4byte getChildCount__5CNodeFv
    .4byte update__Q28Morimura10TCounterRVFv
    .4byte draw__Q32og6Screen18CallBack_CounterRVFR8GraphicsR14J2DGrafContext
    .4byte doInit__Q29P2DScreen4NodeFv
    .4byte init__Q32og6Screen18CallBack_CounterRVFP9J2DScreenUxUxUxPUlb
    .4byte show__Q32og6Screen18CallBack_CounterRVFv
    .4byte hide__Q32og6Screen18CallBack_CounterRVFv
    .4byte setValue__Q28Morimura10TCounterRVFbb
    .4byte setValue__Q32og6Screen18CallBack_CounterRVFv
*/

struct CNode {
	virtual void _08() = 0;       // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace og {
namespace Screen {
struct CallBack_CounterRV {
	virtual void _08() = 0;                                                                                          // _08
	virtual void _0C() = 0;                                                                                          // _0C
	virtual void _10() = 0;                                                                                          // _10
	virtual void draw(Graphics&, J2DGrafContext&);                                                                   // _14
	virtual void _18() = 0;                                                                                          // _18
	virtual void init(J2DScreen*, unsigned long long, unsigned long long, unsigned long long, unsigned long*, bool); // _1C
	virtual void show();                                                                                             // _20
	virtual void hide();                                                                                             // _24
	virtual void _28() = 0;                                                                                          // _28
	virtual void setValue();                                                                                         // _2C

	// _00 VTBL
};
} // namespace Screen
} // namespace og

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

namespace Morimura {
struct TCounterRV : public CNode, public CallBack_CounterRV, public Node {
	virtual ~TCounterRV();             // _08
	virtual void update();             // _10
	virtual void setValue(bool, bool); // _28

	// _00 VTBL
};
} // namespace Morimura

#endif
