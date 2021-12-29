#ifndef _SYSSHAPE_ANIMINFO_H
#define _SYSSHAPE_ANIMINFO_H

/*
    __vt__Q28SysShape8AnimInfo:
    .4byte 0
    .4byte 0
    .4byte __dt__Q28SysShape8AnimInfoFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace SysShape {
struct AnimInfo : public CNode {
	virtual ~AnimInfo();          // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};
} // namespace SysShape

#endif
