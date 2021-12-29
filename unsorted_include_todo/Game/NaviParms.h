#ifndef _GAME_NAVIPARMS_H
#define _GAME_NAVIPARMS_H

/*
    __vt__Q24Game9NaviParms:
    .4byte 0
    .4byte 0
    .4byte read__Q24Game9NaviParmsFR6Stream
    .4byte 0
*/

namespace Game {
struct NaviParms {
	virtual void read(Stream&); // _00
	virtual void _04() = 0;     // _04

	// _00 VTBL
};
} // namespace Game

#endif
