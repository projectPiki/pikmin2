#ifndef _GAME_SNAKEWHOLE_PARMS_H
#define _GAME_SNAKEWHOLE_PARMS_H

namespace Game {
namespace SnakeWhole {
	struct Parms {
		virtual void read(Stream&); // _00
		virtual void _04() = 0;     // _04

		// _00 VTBL
	};
} // namespace SnakeWhole
} // namespace Game

#endif
