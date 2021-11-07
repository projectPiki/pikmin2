#ifndef _GAME_MAPUNIT_H
#define _GAME_MAPUNIT_H

namespace Game {
struct MapUnit {
	virtual void constructor();           // _00
	virtual void doAnimation();           // _04
	virtual void doEntry();               // _08
	virtual void doSetView(int);          // _0C
	virtual void doViewCalc();            // _10
	virtual void doSimulation(float);     // _14
	virtual void doDirectDraw(Graphics&); // _18

	// _00 VTBL
};
} // namespace Game

#endif
