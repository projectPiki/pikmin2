#ifndef _RESOURCE_MGR_H
#define _RESOURCE_MGR_H

/*
    __vt__Q28Resource3Mgr:
    .4byte 0
    .4byte 0
    .4byte drawDump__Q28Resource3MgrFR8Graphicsii
*/

namespace Resource {
struct Mgr {
	virtual void drawDump(Graphics&, int, int); // _08

	// _00 VTBL
};
} // namespace Resource

#endif
