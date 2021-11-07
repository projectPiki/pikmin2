#ifndef _GAME_SOKKURI_PARMS_H
#define _GAME_SOKKURI_PARMS_H

namespace Game {
namespace Sokkuri {
	struct Parms {
		virtual void read(Stream&); // _00
		virtual void _04() = 0;     // _04

		// _00 VTBL
	};
} // namespace Sokkuri
} // namespace Game

#endif
