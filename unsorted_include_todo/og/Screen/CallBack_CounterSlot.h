#ifndef _OG_SCREEN_CALLBACK_COUNTERSLOT_H
#define _OG_SCREEN_CALLBACK_COUNTERSLOT_H

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
		virtual void _10() = 0;                        // _10
		virtual void _14() = 0;                        // _14
		virtual void show();                           // _18
		virtual void hide();                           // _1C

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
	struct CallBack_CounterSlot : public CNode,
	                              public CallBack_CounterRV,
	                              public Node {
		virtual ~CallBack_CounterSlot();               // _00
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

		// _00 VTBL
	};
} // namespace Screen
} // namespace og

#endif
