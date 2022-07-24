#ifndef _GAME_ITEMTREASURE_TREASUREPARMS_H
#define _GAME_ITEMTREASURE_TREASUREPARMS_H

/*
    __vt__Q34Game12ItemTreasure13TreasureParms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game12ItemTreasure13TreasureParmsFR6Stream
*/

namespace Game {
namespace ItemTreasure {
struct TreasureParms {
	virtual void read(Stream&); // _08

	// _00 VTBL
};
} // namespace ItemTreasure
} // namespace Game

#endif
