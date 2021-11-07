#ifndef _SYSSHAPE_JOINT_H
#define _SYSSHAPE_JOINT_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace SysShape {
struct Joint : public CNode {
	virtual ~Joint();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};
} // namespace SysShape

#endif
