#ifndef _GAME_KINGCHAPPY_PARMS_H
#define _GAME_KINGCHAPPY_PARMS_H

namespace Game {
namespace KingChappy {
	struct Parms {
		virtual void read(Stream&); // _00
		virtual void _04() = 0;     // _04

		// _00 VTBL
	};
} // namespace KingChappy
} // namespace Game

#endif
