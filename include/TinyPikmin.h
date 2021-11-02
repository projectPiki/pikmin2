#ifndef _TINYPIKMIN_H
#define _TINYPIKMIN_H

#include "types.h"

struct TinyPikmin {
	TinyPikmin();
	void update();

	u32 m_state;       // _00
	s32 m_color;       // _04
	f32 _08;           // _08
	f32 _0C;           // _0C
	f32 m_posX;        // _10
	f32 m_posY;        // _14
	f32 m_timer2;      // _18
	f32 m_timerFactor; // _1C
	f32 m_timer;       // _20
	f32 _24;           // _24
	f32 m_velX;        // _28
	f32 m_velY;        // _2C
	f32 m_angle;       // _30
};

#endif
