#ifndef _GAME_TPOSITIONOBJECT_H
#define _GAME_TPOSITIONOBJECT_H

#include "Vector3.h"
#include "SweepPrune.h"

namespace Game {
struct TPositionObject {
	virtual Vector3f getPosition() = 0; // _08

	// VTBL _00
	SweepPrune::Object m_sweepPruneObject; // _04
};
} // namespace Game

#endif
