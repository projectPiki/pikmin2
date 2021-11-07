#ifndef _GAME_BOMB_PARMS_H
#define _GAME_BOMB_PARMS_H

namespace Game {
namespace Bomb {
	struct Parms {
		virtual void read(Stream&); // _00
		virtual void _04() = 0;     // _04

		// _00 VTBL
	};
} // namespace Bomb
} // namespace Game

#endif
