#ifndef _GAME_JIGUMO_PARMS_H
#define _GAME_JIGUMO_PARMS_H

namespace Game {
namespace Jigumo {
	struct Parms {
		virtual void read(Stream&); // _00
		virtual void _04() = 0;     // _04

		// _00 VTBL
	};
} // namespace Jigumo
} // namespace Game

#endif
