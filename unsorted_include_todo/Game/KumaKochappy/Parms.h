#ifndef _GAME_KUMAKOCHAPPY_PARMS_H
#define _GAME_KUMAKOCHAPPY_PARMS_H

/*
    __vt__Q34Game12KumaKochappy5Parms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game12KumaKochappy5ParmsFR6Stream
*/

namespace Game {
namespace KumaKochappy {
struct Parms {
	virtual void read(Stream&); // _08 (weak)

	Parms();
};
} // namespace KumaKochappy
} // namespace Game

#endif
