#ifndef _GAME_BIGTREASURE_PARMS_H
#define _GAME_BIGTREASURE_PARMS_H

namespace Game {
namespace BigTreasure {
	struct Parms {
		virtual void read(Stream&); // _00
		virtual void _04() = 0;     // _04

		// _00 VTBL
	};
} // namespace BigTreasure
} // namespace Game

#endif
