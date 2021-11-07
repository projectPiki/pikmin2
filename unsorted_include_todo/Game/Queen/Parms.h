#ifndef _GAME_QUEEN_PARMS_H
#define _GAME_QUEEN_PARMS_H

namespace Game {
namespace Queen {
	struct Parms {
		virtual void read(Stream&); // _00
		virtual void _04() = 0;     // _04

		// _00 VTBL
	};
} // namespace Queen
} // namespace Game

#endif
