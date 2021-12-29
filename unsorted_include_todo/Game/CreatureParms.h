#ifndef _GAME_CREATUREPARMS_H
#define _GAME_CREATUREPARMS_H

/*
    __vt__Q24Game13CreatureParms:
    .4byte 0
    .4byte 0
    .4byte read__Q24Game13CreatureParmsFR6Stream
*/

namespace Game {
struct CreatureParms {
	virtual void read(Stream&); // _00

	// _00 VTBL
};
} // namespace Game

#endif
