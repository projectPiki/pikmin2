#ifndef _GAME_BOMBSARAI_PARMS_H
#define _GAME_BOMBSARAI_PARMS_H

namespace Game {
namespace BombSarai {
	struct Parms {
		virtual void read(Stream&); // _00
		virtual void _04() = 0;     // _04

		// _00 VTBL
	};
} // namespace BombSarai
} // namespace Game

#endif
