#ifndef _GAME_SNAKECROW_PARMS_H
#define _GAME_SNAKECROW_PARMS_H

namespace Game {
namespace SnakeCrow {
	struct Parms {
		virtual void read(Stream&); // _00
		virtual void _04() = 0;     // _04

		// _00 VTBL
	};
} // namespace SnakeCrow
} // namespace Game

#endif
