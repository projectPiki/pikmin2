#ifndef _GAME_IMOMUSHI_PARMS_H
#define _GAME_IMOMUSHI_PARMS_H

/*
    __vt__Q34Game8Imomushi5Parms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game8Imomushi5ParmsFR6Stream
*/

namespace Game {
namespace Imomushi {
struct Parms {
	virtual void read(Stream&); // _08 (inline)

	Parms();
};
} // namespace Imomushi
} // namespace Game

#endif
