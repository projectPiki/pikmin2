#include "JSystem/JKR/JKRDisposer.h"
#include "JSystem/JKR/JKRHeap.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__11JKRDisposer
    __vt__11JKRDisposer:
        .4byte 0
        .4byte 0
        .4byte __dt__11JKRDisposerFv
        .4byte 0
*/

/*
 * --INFO--
 * Address:	8001CFCC
 * Size:	000068
 */
JKRDisposer::JKRDisposer()
    : m_link(this)
{
	m_heap = JKRHeap::findFromRoot(this);
	if (m_heap) {
		m_heap->m_disposerList.append(&m_link);
	}
}

/*
 * --INFO--
 * Address:	8001D034
 * Size:	000084
 */
JKRDisposer::~JKRDisposer()
{
	if (m_heap) {
		m_heap->m_disposerList.remove(&m_link);
	}
}
