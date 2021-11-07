#ifndef _GAME_ONIKURAGE_PARMS_H
#define _GAME_ONIKURAGE_PARMS_H

namespace Game {
namespace OniKurage {
	struct Parms {
		virtual void read(Stream&); // _00
		virtual void _04() = 0;     // _04

		// _00 VTBL
	};
} // namespace OniKurage
} // namespace Game

#endif
