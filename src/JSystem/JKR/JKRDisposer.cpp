#include "JSystem/JKR/JKRDisposer.h"
#include "JSystem/JKR/JKRHeap.h"

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
		m_heap->_5C.append(&m_link);
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
		m_heap->_5C.remove(&m_link);
	}
}
