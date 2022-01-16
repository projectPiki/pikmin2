#ifndef _GAME_TPOSITIONOBJECT_H
#define _GAME_TPOSITIONOBJECT_H

#include "Vector3.h"

namespace Game {
struct TPositionObject {
	virtual Vector3f getPosition() = 0; // _00

	// VTBL _00
};
} // namespace Game

#endif
