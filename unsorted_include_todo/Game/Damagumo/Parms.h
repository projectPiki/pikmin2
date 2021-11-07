#ifndef _GAME_DAMAGUMO_PARMS_H
#define _GAME_DAMAGUMO_PARMS_H

namespace Game {
namespace Damagumo {
	struct Parms {
		virtual void read(Stream&); // _00
		virtual void _04() = 0;     // _04

		// _00 VTBL
	};
} // namespace Damagumo
} // namespace Game

#endif
