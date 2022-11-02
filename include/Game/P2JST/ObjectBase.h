#ifndef _GAME_P2JST_OBJECTBASE_H
#define _GAME_P2JST_OBJECTBASE_H

#include "types.h"

namespace Game {
namespace P2JST {

struct ObjectBase {
	virtual void reset()  = 0;                     // _08
	virtual void update() = 0;                     // _0C
	virtual void start()  = 0;                     // _10
	virtual void stop()   = 0;                     // _14
	virtual void parseUserData_(u32, const void*); // _18 (weak)

	// _00 = VTBL
};

} // namespace P2JST
} // namespace Game

#endif
