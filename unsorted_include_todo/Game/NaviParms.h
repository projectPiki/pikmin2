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
	virtual void read(Stream&); // _08 (inline)
	virtual void _0C() = 0;     // _0C

	NaviParms();
};
} // namespace Game

#endif
