#ifndef _GAME_PANMODOKIBASE_PARMS_H
#define _GAME_PANMODOKIBASE_PARMS_H

namespace Game {
namespace PanModokiBase {
	struct Parms {
		virtual void read(Stream&); // _00
		virtual void _04() = 0;     // _04

		// _00 VTBL
	};
} // namespace PanModokiBase
} // namespace Game

#endif
