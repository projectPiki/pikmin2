#ifndef _MORIMURA_TVSSELECTCBWINNUM_H
#define _MORIMURA_TVSSELECTCBWINNUM_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace og {
namespace Screen {
	struct CallBack_CounterRV {
		virtual void _00() = 0;                        // _00
		virtual void _04() = 0;                        // _04
		virtual void _08() = 0;                        // _08
		virtual void draw(Graphics&, J2DGrafContext&); // _0C

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
	struct CallBack_CounterDay {
		virtual void _00() = 0; // _00
		virtual void _04() = 0; // _04
		virtual void _08() = 0; // _08
		virtual void _0C() = 0; // _0C
		virtual void _10() = 0; // _10
		virtual void init(J2DScreen*, unsigned long long, unsigned long long,
		                  unsigned long long, unsigned long*, bool); // _14
		virtual void show();                                         // _18
		virtual void hide();                                         // _1C
		virtual void _20() = 0;                                      // _20
		virtual void setValue();                                     // _24

		// _00 VTBL
	};
} // namespace Screen
} // namespace og

namespace Morimura {
struct TVsSelectCBWinNum : public CNode,
                           public CallBack_CounterRV,
                           public Node,
                           public CallBack_CounterDay {
	virtual ~TVsSelectCBWinNum();                  // _00
	virtual void getChildCount();                  // _04
	virtual void update();                         // _08
	virtual void draw(Graphics&, J2DGrafContext&); // _0C
	virtual void doInit();                         // _10
	virtual void init(J2DScreen*, unsigned long long, unsigned long long,
	                  unsigned long long, unsigned long*, bool); // _14
	virtual void show();                                         // _18
	virtual void hide();                                         // _1C
	virtual void setValue(bool, bool);                           // _20
	virtual void setValue();                                     // _24
	virtual void _28() = 0;                                      // _28
	virtual void _2C() = 0;                                      // _2C
	virtual void _30() = 0;                                      // _30
	virtual void _34() = 0;                                      // _34
	virtual void _38() = 0;                                      // _38
	virtual void _3C() = 0;                                      // _3C
	virtual void _40() = 0;                                      // _40
	virtual void _44() = 0;                                      // _44
	virtual void _48() = 0;                                      // _48
	virtual void _4C() = 0;                                      // _4C
	virtual void _50() = 0;                                      // _50
	virtual void _54() = 0;                                      // _54
	virtual void _58() = 0;                                      // _58
	virtual void _5C() = 0;                                      // _5C

	// _00 VTBL
};
} // namespace Morimura

#endif
