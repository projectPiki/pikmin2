#ifndef _SYSTIMERS_H
#define _SYSTIMERS_H

#include "CNode.h"
#include "JSystem/JKR/JKRDisposer.h"
#include "types.h"

/**
 * @size{0x3C}
 */
struct TimerInf : public JKRDisposer {
	TimerInf(char* name = "noname")
	{
		m_state = 0;

		m_name = name;
		_20    = 0.0f;
		_24    = 0.0f;
		_28    = 0.0f;
		_2C    = 0.0f;

		_30 = 0;
		_34 = -1;
	}

	virtual ~TimerInf(); // _08 (weak)

	char* m_name; // _18
	u32 _1C;      // _1C
	f32 _20;      // _20
	f32 _24;      // _24
	f32 _28;      // _28
	f32 _2C;      // _2C
	s32 _30;      // _30
	s32 _34;      // _34
	u8 m_state;   // _38
};

/**
 * @size{0x28}
 */
struct SysTimers : public CNode {
	SysTimers();
	virtual ~SysTimers(); // _08 (weak)

	TimerInf* get(int index);
	void reset();
	void newFrame();
	void remove(TimerInf* timer);
	void _start(char* name, bool);
	void _stop(char* name);

	s32 m_frameCount;   // _18
	s32 m_timerCount;   // _1C
	TimerInf* m_timers; // _20
	f32 _24;            // _24

	static u8 drawFlag;
};

#endif
