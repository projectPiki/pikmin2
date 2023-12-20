#include "P2Macros.h"
#include "Resource.h"

Resource::Mgr2D* gResMgr2D;

namespace Resource {
/**
 * @note Address: N/A
 * @note Size: 0xA0
 */
// INLINE
inline Mgr2D::Mgr2D(JKRHeap* heap)
    : Mgr(heap, 0xD4800)
{
	P2ASSERTLINE(34, heap);

	P2ASSERTLINE(36, !gResMgr2D);

	gResMgr2D = this;
}

/**
 * @note Address: 0x80433F70
 * @note Size: 0xB0
 */
void Mgr2D::init(JKRHeap* heap) { new Mgr2D(heap); }
} // namespace Resource
