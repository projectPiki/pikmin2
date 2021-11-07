#ifndef _GAME_TYRE_PARMS_H
#define _GAME_TYRE_PARMS_H

namespace Game {
namespace Tyre {
	struct Parms {
		virtual void read(Stream&); // _00
		virtual void _04() = 0;     // _04

		// _00 VTBL
	};
} // namespace Tyre
} // namespace Game

#endif
