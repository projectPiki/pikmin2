#ifndef _GAME_HOUDAI_PARMS_H
#define _GAME_HOUDAI_PARMS_H

namespace Game {
namespace Houdai {
	struct Parms {
		virtual void read(Stream&); // _00
		virtual void _04() = 0;     // _04

		// _00 VTBL
	};
} // namespace Houdai
} // namespace Game

#endif
