#ifndef _GAME_AICONSTANTS_H
#define _GAME_AICONSTANTS_H

#include "TagParm.h"

namespace Game {
struct AIConstants : public TagParameters {
	AIConstants();
	virtual ~AIConstants() {};

	PrimTagParm<f32> m_gravity;     // _1C
	PrimTagParm<int> m_dopeCount;   // _2C
	PrimTagParm<int> m_debt;        // _3C
	PrimTagParm<f32> m_cameraAngle; // _4C
};

extern AIConstants* _aiConstants;
} // namespace Game

#endif
