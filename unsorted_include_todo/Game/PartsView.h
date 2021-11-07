#ifndef _GAME_PARTSVIEW_H
#define _GAME_PARTSVIEW_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct PartsView : public CNode {
	virtual ~PartsView();                 // _00
	virtual void getChildCount();         // _04
	virtual void constructor();           // _08
	virtual void doAnimation();           // _0C
	virtual void doEntry();               // _10
	virtual void doSetView(int);          // _14
	virtual void doViewCalc();            // _18
	virtual void doSimulation(float);     // _1C
	virtual void doDirectDraw(Graphics&); // _20
	virtual void _24() = 0;               // _24

	// _00 VTBL
};
} // namespace Game

#endif
