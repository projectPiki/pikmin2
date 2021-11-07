#ifndef _GAME_MIULIN_PARMS_H
#define _GAME_MIULIN_PARMS_H

namespace Game {
namespace Miulin {
	struct Parms {
		virtual void read(Stream&); // _00
		virtual void _04() = 0;     // _04

		// _00 VTBL
	};
} // namespace Miulin
} // namespace Game

#endif
