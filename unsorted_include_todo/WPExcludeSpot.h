#ifndef _WPEXCLUDESPOT_H
#define _WPEXCLUDESPOT_H

/*
    __vt__13WPExcludeSpot:
    .4byte 0
    .4byte 0
    .4byte satisfy__13WPExcludeSpotFPQ24Game8WayPoint
*/

struct WPExcludeSpot {
	virtual void satisfy(Game::WayPoint*); // _08 (inline)
};

#endif
