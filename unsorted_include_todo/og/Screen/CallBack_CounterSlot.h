#ifndef _OG_SCREEN_CALLBACK_COUNTERSLOT_H
#define _OG_SCREEN_CALLBACK_COUNTERSLOT_H

/*
    __vt__Q32og6Screen20CallBack_CounterSlot:
    .4byte 0
    .4byte 0
    .4byte __dt__Q32og6Screen20CallBack_CounterSlotFv
    .4byte getChildCount__5CNodeFv
    .4byte update__Q32og6Screen20CallBack_CounterSlotFv
    .4byte draw__Q32og6Screen18CallBack_CounterRVFR8GraphicsR14J2DGrafContext
    .4byte doInit__Q29P2DScreen4NodeFv
    .4byte init__Q32og6Screen20CallBack_CounterSlotFP9J2DScreenUxUxUxPUlb
    .4byte show__Q32og6Screen18CallBack_CounterRVFv
    .4byte hide__Q32og6Screen18CallBack_CounterRVFv
    .4byte setValue__Q32og6Screen20CallBack_CounterSlotFbb
    .4byte setValue__Q32og6Screen20CallBack_CounterSlotFv
*/

struct CNode {
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace og {
namespace Screen {
struct CallBack_CounterRV {
	virtual ~CallBack_CounterRV();                                                                                   // _08 (weak)
	virtual void _0C() = 0;                                                                                          // _0C
	virtual void update();                                                                                           // _10
	virtual void draw(Graphics&, J2DGrafContext&);                                                                   // _14
	virtual void _18() = 0;                                                                                          // _18
	virtual void init(J2DScreen*, unsigned long long, unsigned long long, unsigned long long, unsigned long*, bool); // _1C
	virtual void show();                                                                                             // _20
	virtual void hide();                                                                                             // _24
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
struct CallBack_CounterSlot : public CNode, public CallBack_CounterRV, public Node {
	virtual ~CallBack_CounterSlot();                                                                                 // _08 (weak)
	virtual void update();                                                                                           // _10
	virtual void init(J2DScreen*, unsigned long long, unsigned long long, unsigned long long, unsigned long*, bool); // _1C
	virtual void setValue(bool, bool);                                                                               // _28
	virtual void setValue();                                                                                         // _2C (weak)

	void setPuyoParam(float, float, float);
	void slot_up(int);
	void startSlot(float);
};
} // namespace Screen
} // namespace og

#endif
