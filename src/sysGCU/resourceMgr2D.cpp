#include "JSystem/JUT/JUTException.h"
#include "Resource.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q28Resource5Mgr2D
    __vt__Q28Resource5Mgr2D:
        .4byte 0
        .4byte 0
        .4byte drawDump__Q28Resource3MgrFR8Graphicsii
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global gResMgr2D
    gResMgr2D:
        .skip 0x8
*/

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
	P2ASSERTLINE(34, heap != nullptr);
	P2ASSERTLINE(36, gResMgr2D == nullptr);
	gResMgr2D = this;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
// INLINE
inline Resource::Mgr::~Mgr() { }

/*
 * --INFO--
 * Address:	80433F70
 * Size:	0000B0
 */
void Mgr2D::init(JKRHeap* heap) { new Mgr2D(heap); }
} // namespace Resource
