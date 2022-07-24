#ifndef _SYSSHAPE_MTXOBJECT_H
#define _SYSSHAPE_MTXOBJECT_H

/*
    __vt__Q28SysShape9MtxObject:
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte isModel__Q28SysShape9MtxObjectFv
*/

namespace SysShape {
struct MtxObject {
	virtual void _08() = 0; // _08
	virtual void isModel(); // _0C

	// _00 VTBL
};
} // namespace SysShape

#endif
