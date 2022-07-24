#ifndef _GAME_PARTSVIEW_H
#define _GAME_PARTSVIEW_H

/*
    __vt__Q24Game9PartsView:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game9PartsViewFv
    .4byte getChildCount__5CNodeFv
    .4byte constructor__Q24Game9PartsViewFv
    .4byte doAnimation__Q24Game9PartsViewFv
    .4byte doEntry__Q24Game9PartsViewFv
    .4byte doSetView__Q24Game9PartsViewFi
    .4byte doViewCalc__Q24Game9PartsViewFv
    .4byte doSimulation__Q24Game9PartsViewFf
    .4byte doDirectDraw__Q24Game9PartsViewFR8Graphics
    .4byte 0
*/

struct CNode {
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace Game {
struct PartsView : public CNode {
	virtual ~PartsView();                 // _08
	virtual void constructor();           // _10
	virtual void doAnimation();           // _14
	virtual void doEntry();               // _18
	virtual void doSetView(int);          // _1C
	virtual void doViewCalc();            // _20
	virtual void doSimulation(float);     // _24
	virtual void doDirectDraw(Graphics&); // _28
	virtual void _2C() = 0;               // _2C

	// _00 VTBL
};
} // namespace Game

#endif
