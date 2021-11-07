#ifndef _GAME_KURAGE_PARMS_H
#define _GAME_KURAGE_PARMS_H

namespace Game {
namespace Kurage {
	struct Parms {
		virtual void read(Stream&); // _00
		virtual void _04() = 0;     // _04

		// _00 VTBL
	};
} // namespace Kurage
} // namespace Game

#endif
