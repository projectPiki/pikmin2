#ifndef _GAME_DANGOMUSHI_PARMS_H
#define _GAME_DANGOMUSHI_PARMS_H

namespace Game {
namespace DangoMushi {
	struct Parms {
		virtual void read(Stream&); // _00
		virtual void _04() = 0;     // _04

		// _00 VTBL
	};
} // namespace DangoMushi
} // namespace Game

#endif
