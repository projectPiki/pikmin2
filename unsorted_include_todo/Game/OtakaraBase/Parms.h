#ifndef _GAME_OTAKARABASE_PARMS_H
#define _GAME_OTAKARABASE_PARMS_H

/*
    __vt__Q34Game11OtakaraBase5Parms:
    .4byte 0
    .4byte 0
    .4byte read__Q34Game11OtakaraBase5ParmsFR6Stream
*/

namespace Game {
namespace OtakaraBase {
	struct Parms {
		virtual void read(Stream&); // _00

		// _00 VTBL
	};
} // namespace OtakaraBase
} // namespace Game

#endif
