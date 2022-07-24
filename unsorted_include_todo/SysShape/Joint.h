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
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

namespace SysShape {
struct Joint : public CNode {
	virtual ~Joint(); // _08 (inline)

	void init(unsigned short, SysShape::Model*, J3DJoint*);
	void getWorldMatrix();
	Joint();
};
} // namespace SysShape

#endif
