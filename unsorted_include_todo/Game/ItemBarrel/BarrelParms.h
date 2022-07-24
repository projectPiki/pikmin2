#ifndef _GAME_ITEMBARREL_BARRELPARMS_H
#define _GAME_ITEMBARREL_BARRELPARMS_H

/*
    __vt__Q34Game10ItemBarrel11BarrelParms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game10ItemBarrel11BarrelParmsFR6Stream
*/

namespace Game {
namespace ItemBarrel {
struct BarrelParms {
	virtual void read(Stream&); // _08

	// _00 VTBL
};
} // namespace ItemBarrel
} // namespace Game

#endif
