#ifndef _GAME_MAPUNITINTERFACE_H
#define _GAME_MAPUNITINTERFACE_H

/*
    __vt__Q24Game16MapUnitInterface:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game16MapUnitInterfaceFv
    .4byte getChildCount__5CNodeFv
    .4byte constructor__Q24Game9PartsViewFv
    .4byte doAnimation__Q24Game9PartsViewFv
    .4byte doEntry__Q24Game9PartsViewFv
    .4byte doSetView__Q24Game9PartsViewFi
    .4byte doViewCalc__Q24Game9PartsViewFv
    .4byte doSimulation__Q24Game9PartsViewFf
    .4byte doDirectDraw__Q24Game9PartsViewFR8Graphics
*/

struct CNode {
	virtual void _08() = 0;       // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace Game {
struct PartsView {
	virtual void _08() = 0;               // _08
	virtual void _0C() = 0;               // _0C
	virtual void constructor();           // _10
	virtual void doAnimation();           // _14
	virtual void doEntry();               // _18
	virtual void doSetView(int);          // _1C
	virtual void doViewCalc();            // _20
	virtual void doSimulation(float);     // _24
	virtual void doDirectDraw(Graphics&); // _28

	// _00 VTBL
};
} // namespace Game

namespace Game {
struct MapUnitInterface : public CNode, public PartsView {
	virtual ~MapUnitInterface(); // _08

	// _00 VTBL
};
} // namespace Game

#endif
