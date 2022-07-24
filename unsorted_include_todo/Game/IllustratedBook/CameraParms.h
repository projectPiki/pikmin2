#ifndef _GAME_ILLUSTRATEDBOOK_CAMERAPARMS_H
#define _GAME_ILLUSTRATEDBOOK_CAMERAPARMS_H

/*
    __vt__Q34Game15IllustratedBook11CameraParms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game15IllustratedBook11CameraParmsFR6Stream
*/

namespace Game {
namespace IllustratedBook {
struct CameraParms {
	virtual void read(Stream&); // _08

	// _00 VTBL
};
} // namespace IllustratedBook
} // namespace Game

#endif
