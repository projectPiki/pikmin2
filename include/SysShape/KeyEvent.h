#ifndef _SYSSHAPE_KEYEVENT_H
#define _SYSSHAPE_KEYEVENT_H

#include "CNode.h"

namespace SysShape {
struct KeyEvent : public CNode {
	virtual ~KeyEvent();

	float _18;  // _18
	int m_type; // _1C
};
} // namespace SysShape

#endif
