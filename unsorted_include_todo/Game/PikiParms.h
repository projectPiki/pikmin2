#ifndef _GAME_PIKIPARMS_H
#define _GAME_PIKIPARMS_H

/*
    __vt__Q24Game9PikiParms:
    .4byte 0
    .4byte 0
    .4byte read__Q24Game9PikiParmsFR6Stream
*/

namespace Game {
struct PikiParms {
	virtual void read(Stream&); // _08

	// _00 VTBL
};
} // namespace Game

#endif
