#ifndef _SYSSHAPE_JOINT_H
#define _SYSSHAPE_JOINT_H

/*
    __vt__Q28SysShape5Joint:
    .4byte 0
    .4byte 0
    .4byte __dt__Q28SysShape5JointFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace SysShape {
struct Joint : public CNode {
	virtual ~Joint(); // _08

	// _00 VTBL
};
} // namespace SysShape

#endif
