#ifndef _SYSSHAPE_KEYEVENT_H
#define _SYSSHAPE_KEYEVENT_H

#include "CNode.h"

namespace SysShape {
#define KEYEVENT_NULL      0
#define KEYEVENT_1         1
#define KEYEVENT_2         2
#define KEYEVENT_3         3
#define KEYEVENT_4         4
#define KEYEVENT_5         5
#define KEYEVENT_6         6
#define KEYEVENT_7         7
#define KEYEVENT_8         8
#define KEYEVENT_9         9
#define KEYEVENT_10        10
#define KEYEVENT_11        11
#define KEYEVENT_100       100
#define KEYEVENT_END       1000 // End of animation
#define KEYEVENT_END_BLEND 2000 // Finish blend animation (?)

/**
 * @size{0x20}
 */
struct KeyEvent : public CNode {
	inline KeyEvent()
	{
		m_frame = 0;
		m_type  = 0;
		_20     = -1;
	}

	virtual ~KeyEvent() { } // _08 (weak)

	int m_frame; // _18
	int m_type;  // _1C
	s16 _20;     // _20
};

} // namespace SysShape

#endif
