#ifndef _WPFINDCOND_H
#define _WPFINDCOND_H

/*
    __vt__10WPFindCond:
    .4byte 0
    .4byte 0
    .4byte satisfy__10WPFindCondFPQ24Game8WayPoint
*/

struct WPFindCond {
	virtual void satisfy(Game::WayPoint*); // _00

	// _00 VTBL
};

#endif
