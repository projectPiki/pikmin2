#ifndef _OG_SCREEN_ARROWALPHABLINK_H
#define _OG_SCREEN_ARROWALPHABLINK_H

#include "types.h"

namespace og {
namespace Screen {

/**
 * @size{0x10}
 */
struct ArrowAlphaBlink {
	void setSpeed(float);
	float calc();

	float _00;     // _00
	float m_speed; // _04
	float _08;     // _08
	float _0C;     // _0C
};
} // namespace Screen
} // namespace og

#endif
