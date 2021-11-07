#ifndef _GAME_NAVIPARMS_H
#define _GAME_NAVIPARMS_H

namespace Game {
struct NaviParms {
	virtual void read(Stream&); // _00
	virtual void _04() = 0;     // _04

	// _00 VTBL
};
} // namespace Game

#endif
