#ifndef _GAME_WAYPOINT_H
#define _GAME_WAYPOINT_H

/*
    __vt__Q24Game8WayPoint:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game8WayPointFv
    .4byte directDraw__Q24Game8WayPointFR8Graphics
    .4byte directDraw_Simple__Q24Game8WayPointFR8Graphics
*/

namespace Game {
struct WayPoint {
	virtual ~WayPoint();                       // _08
	virtual void directDraw(Graphics&);        // _0C
	virtual void directDraw_Simple(Graphics&); // _10

	WayPoint();
	void reset();
	void setOpen(bool);
	void setWater(bool);
	void setBridge(bool);
};
} // namespace Game

#endif
