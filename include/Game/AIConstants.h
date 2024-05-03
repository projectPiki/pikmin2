#ifndef _GAME_AICONSTANTS_H
#define _GAME_AICONSTANTS_H

#include "TagParm.h"

#define SPRAY_TYPE_SPICY  (0)
#define SPRAY_TYPE_BITTER (1)

namespace Game {
struct AIConstants : public TagParameters {
	AIConstants();
	virtual ~AIConstants() { } // _08 (weak)

	// _00     = VTBL
	// _00-_1C = TagParameters
	PrimTagParm<f32> mGravity;     // _1C
	PrimTagParm<int> mDopeCount;   // _2C
	PrimTagParm<int> mDebt;        // _3C
	PrimTagParm<f32> mCameraAngle; // _4C
};

extern AIConstants* _aiConstants;
} // namespace Game

#endif
