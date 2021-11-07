#ifndef _GAME_MAR_PARMS_H
#define _GAME_MAR_PARMS_H

namespace Game {
namespace Mar {
	struct Parms {
		virtual void read(Stream&); // _00
		virtual void _04() = 0;     // _04

		// _00 VTBL
	};
} // namespace Mar
} // namespace Game

#endif
