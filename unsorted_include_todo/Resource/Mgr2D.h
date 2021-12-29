#ifndef _RESOURCE_MGR2D_H
#define _RESOURCE_MGR2D_H

/*
    __vt__Q28Resource5Mgr2D:
    .4byte 0
    .4byte 0
    .4byte drawDump__Q28Resource3MgrFR8Graphicsii
    .4byte 0
*/

namespace Resource {
struct Mgr {
	virtual void drawDump(Graphics&, int, int); // _00

	// _00 VTBL
};
} // namespace Resource

namespace Resource {
struct Mgr2D : public Mgr {
	virtual void drawDump(Graphics&, int, int); // _00
	virtual void _04() = 0;                     // _04

	// _00 VTBL
};
} // namespace Resource

#endif
