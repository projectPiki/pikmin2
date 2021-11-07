#ifndef _SYSSHAPE_ANIMMGR_H
#define _SYSSHAPE_ANIMMGR_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace SysShape {
struct AnimMgr : public CNode {
	virtual ~AnimMgr();           // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};
} // namespace SysShape

#endif
