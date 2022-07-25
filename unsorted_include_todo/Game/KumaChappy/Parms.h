#ifndef _GAME_KUMACHAPPY_PARMS_H
#define _GAME_KUMACHAPPY_PARMS_H

/*
    __vt__Q34Game10KumaChappy5Parms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game10KumaChappy5ParmsFR6Stream
*/

namespace Game {
namespace KumaChappy {
struct Parms {
	virtual void read(Stream&); // _08 (weak)

	Parms();
};
} // namespace KumaChappy
} // namespace Game

#endif
