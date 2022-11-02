#include "JSystem/JUT/JUTException.h"
#include "Resource.h"

Resource::Mgr2D* gResMgr2D;

namespace Resource {
/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
// INLINE
inline Mgr2D::Mgr2D(JKRHeap* heap)
    : Mgr(heap, 0xD4800)
{
	P2ASSERTLINE(34, heap);

	P2ASSERTLINE(36, !gResMgr2D);

	gResMgr2D = this;
}

/*
 * --INFO--
 * Address:	80433F70
 * Size:	0000B0
 */
void Mgr2D::init(JKRHeap* heap) { new Mgr2D(heap); }
} // namespace Resource
