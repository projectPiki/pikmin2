#ifndef _OG_SCREEN_ANGLEMGR_H
#define _OG_SCREEN_ANGLEMGR_H

#include "types.h"

namespace og {
namespace Screen {
struct AngleMgr {
	enum State { AGM_Start = 0, AGM_Chase, AGM_Finish };

	AngleMgr();
	void init(float startAngle, float interpRate, float scale);
	void chase(float target, float step);
	float calc();

	f32 m_currentAngle; // _00, guessed name
	f32 m_angleStep;    // _04, guessed name
	f32 m_targetAngle;  // _08, guessed name
	f32 m_interpRate;   // _0C, guessed name
	f32 m_scale;        // _10, guessed name
	s32 m_state;        // _14
};
} // namespace Screen
} // namespace og

#endif
