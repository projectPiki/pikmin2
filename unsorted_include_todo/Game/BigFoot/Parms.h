#ifndef _GAME_BIGFOOT_PARMS_H
#define _GAME_BIGFOOT_PARMS_H

namespace Game {
namespace BigFoot {
	struct Parms {
		virtual void read(Stream&); // _00
		virtual void _04() = 0;     // _04

		// _00 VTBL
	};
} // namespace BigFoot
} // namespace Game

#endif
