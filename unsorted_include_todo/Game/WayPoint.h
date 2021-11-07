#ifndef _GAME_WAYPOINT_H
#define _GAME_WAYPOINT_H

namespace Game {
struct WayPoint {
	virtual ~WayPoint();                       // _00
	virtual void directDraw(Graphics&);        // _04
	virtual void directDraw_Simple(Graphics&); // _08

	// _00 VTBL
};
} // namespace Game

#endif
