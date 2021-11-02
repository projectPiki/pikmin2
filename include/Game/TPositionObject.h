#ifndef _GAME_TPOSITIONOBJECT_H
#define _GAME_TPOSITIONOBJECT_H

#include "Vector3.h"

namespace Game {
struct TPositionObject {
	virtual Vector3<float> getPosition();
};
} // namespace Game

#endif
