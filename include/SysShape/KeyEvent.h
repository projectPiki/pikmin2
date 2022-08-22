#ifndef _SYSSHAPE_KEYEVENT_H
#define _SYSSHAPE_KEYEVENT_H

#include "CNode.h"

namespace SysShape {

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
	short _20;   // _20
};

} // namespace SysShape

#endif
