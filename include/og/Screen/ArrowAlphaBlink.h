#ifndef _OG_SCREEN_ARROWALPHABLINK_H
#define _OG_SCREEN_ARROWALPHABLINK_H

#include "types.h"

namespace og {
namespace Screen {

/**
 * @size{0x10}
 */
struct ArrowAlphaBlink {
	inline ArrowAlphaBlink()
	{
		m_timer     = 0.0f;
		m_speed     = 0.1f;
		m_magnitude = 0.7f;
		m_start     = 0.3f;
	}

	void setSpeed(f32 speed);
	f32 calc();

	f32 m_timer;     // _00
	f32 m_speed;     // _04
	f32 m_magnitude; // _08
	f32 m_start;     // _0C
};
} // namespace Screen
} // namespace og

#endif
