#ifndef _SYSSHAPE_KEYEVENT_H
#define _SYSSHAPE_KEYEVENT_H

/*
    __vt__Q28SysShape8KeyEvent:
    .4byte 0
    .4byte 0
    .4byte __dt__Q28SysShape8KeyEventFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace SysShape {
struct KeyEvent : public CNode {
	virtual ~KeyEvent(); // _08

	// _00 VTBL
};
} // namespace SysShape

#endif
