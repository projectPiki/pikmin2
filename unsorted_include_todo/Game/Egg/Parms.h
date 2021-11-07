#ifndef _GAME_EGG_PARMS_H
#define _GAME_EGG_PARMS_H

namespace Game {
namespace Egg {
	struct Parms {
		virtual void read(Stream&); // _00
		virtual void _04() = 0;     // _04

		// _00 VTBL
	};
} // namespace Egg
} // namespace Game

#endif
