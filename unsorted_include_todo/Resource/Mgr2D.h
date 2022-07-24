#ifndef _RESOURCE_MGR2D_H
#define _RESOURCE_MGR2D_H

/*
    __vt__Q28Resource5Mgr2D:
    .4byte 0
    .4byte 0
    .4byte drawDump__Q28Resource3MgrFR8Graphicsii
*/

namespace Resource {
struct Mgr {
	virtual void drawDump(Graphics&, int, int); // _08
};
} // namespace Resource

namespace Resource {
struct Mgr2D : public Mgr {

	void init(JKRHeap*);
};
} // namespace Resource

#endif
