#ifndef _GAME_P2JST_OBJECTBASE_H
#define _GAME_P2JST_OBJECTBASE_H

/*
    __vt__Q34Game5P2JST10ObjectBase:
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte parseUserData___Q34Game5P2JST10ObjectBaseFUlPCv
    .4byte 0
*/

namespace Game {
namespace P2JST {
	struct ObjectBase {
		virtual void _00() = 0;                                  // _00
		virtual void _04() = 0;                                  // _04
		virtual void _08() = 0;                                  // _08
		virtual void _0C() = 0;                                  // _0C
		virtual void parseUserData_(unsigned long, const void*); // _10
		virtual void _14() = 0;                                  // _14

		// _00 VTBL
	};
} // namespace P2JST
} // namespace Game

#endif
