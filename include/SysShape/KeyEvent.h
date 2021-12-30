#ifndef _SYSSHAPE_KEYEVENT_H
#define _SYSSHAPE_KEYEVENT_H

#include "CNode.h"

namespace SysShape {
struct KeyEvent : public CNode {
	virtual ~KeyEvent();

	f32 m_frame;    // _18
	u32 m_type; // _1C
};
} // namespace SysShape

#endif
