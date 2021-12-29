#ifndef _SYSSHAPE_ANIMMGR_H
#define _SYSSHAPE_ANIMMGR_H

/*
    __vt__Q28SysShape7AnimMgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q28SysShape7AnimMgrFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _00
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
