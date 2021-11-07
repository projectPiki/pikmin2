#ifndef _SYSSHAPE_KEYEVENT_H
#define _SYSSHAPE_KEYEVENT_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace SysShape {
struct KeyEvent : public CNode {
	virtual ~KeyEvent();          // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};
} // namespace SysShape

#endif
