#ifndef _GAME_MAPUNIT_H
#define _GAME_MAPUNIT_H

/*
    __vt__Q24Game7MapUnit:
    .4byte 0
    .4byte 0
    .4byte constructor__Q24Game7MapUnitFv
    .4byte doAnimation__Q24Game7MapUnitFv
    .4byte doEntry__Q24Game7MapUnitFv
    .4byte doSetView__Q24Game7MapUnitFi
    .4byte doViewCalc__Q24Game7MapUnitFv
    .4byte doSimulation__Q24Game7MapUnitFf
    .4byte doDirectDraw__Q24Game7MapUnitFR8Graphics
*/

namespace Game {
struct MapUnit {
	virtual void constructor();           // _08 (weak)
	virtual void doAnimation();           // _0C (weak)
	virtual void doEntry();               // _10 (weak)
	virtual void doSetView(int);          // _14 (weak)
	virtual void doViewCalc();            // _18 (weak)
	virtual void doSimulation(float);     // _1C (weak)
	virtual void doDirectDraw(Graphics&); // _20 (weak)

	MapUnit();
	void load(Stream&);
};
} // namespace Game

#endif
