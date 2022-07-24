#ifndef _SYS_OBB_H
#define _SYS_OBB_H

/*
    __vt__Q23Sys3OBB:
    .4byte 0
    .4byte 0
    .4byte __dt__Q23Sys3OBBFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

namespace Sys {
struct OBB : public CNode {
	virtual ~OBB(); // _08

	// _00 VTBL
};
} // namespace Sys

#endif
