#include "types.h"

#include "JSystem/JSupport/JSUList.h"

/*
    Generated from dpostproc
*/

/*
 * Decompilation of this file is derived from https://github.com/shibbo/Petari
 */

/*
 * __ct__10JSUPtrLinkFPv
 * --INFO--
 * Address:	800267B8
 * Size:	000018
 */
JSUPtrLink::JSUPtrLink(void* pData)
{
	m_list  = nullptr;
	m_value = pData;
	m_prev  = nullptr;
	m_next  = nullptr;
}

/*
 * __dt__10JSUPtrLinkFv
 * --INFO--
 * Address:	800267D0
 * Size:	000060
 */
JSUPtrLink::~JSUPtrLink()
{
	if (m_list) {
		m_list->remove(this);
	}
}

/*
 * __ct__10JSUPtrListFb
 * --INFO--
 * Address:	80026830
 * Size:	000038
 */
JSUPtrList::JSUPtrList(bool doInitialize)
{
	if (doInitialize) {
		initiate();
	}
}

/*
 * __dt__10JSUPtrListFv
 * --INFO--
 * Address:	80026868
 * Size:	000068
 */
JSUPtrList::~JSUPtrList()
{
	JSUPtrLink* curHead = m_head;
	for (int i = 0; i < m_linkCount; i++) {
		curHead->m_list = nullptr;
		curHead         = curHead->m_next;
	}
}

/*
 * --INFO--
 * Address:	800268D0
 * Size:	000014
 */
void JSUPtrList::initiate()
{
	m_head      = nullptr;
	m_tail      = nullptr;
	m_linkCount = 0;
}

/*
 * --INFO--
 * Address:	800268E4
 * Size:	0000B8
 */
bool JSUPtrList::append(JSUPtrLink* pLink)
{
	bool validity = (pLink->m_list == nullptr);

	if (!validity) {
		validity = pLink->m_list->remove(pLink);
	}

	if (validity) {
		if (m_linkCount == 0) {
			pLink->m_list = this;
			pLink->m_prev = nullptr;
			pLink->m_next = nullptr;
			m_tail        = pLink;
			m_head        = pLink;
			m_linkCount   = 1;
		} else {
			pLink->m_list  = this;
			pLink->m_prev  = m_tail;
			pLink->m_next  = nullptr;
			m_tail->m_next = pLink;
			m_tail         = pLink;
			m_linkCount    = m_linkCount + 1;
		}
	}
	return validity;
}

/*
 * --INFO--
 * Address:	8002699C
 * Size:	0000B8
 */
bool JSUPtrList::prepend(JSUPtrLink* pLink)
{
	bool validity = (pLink->m_list == nullptr);

	if (!validity) {
		validity = pLink->m_list->remove(pLink);
	}

	if (validity) {
		if (m_linkCount == 0) {
			pLink->m_list = this;
			pLink->m_prev = nullptr;
			pLink->m_next = nullptr;
			m_tail        = pLink;
			m_head        = pLink;
			m_linkCount   = 1;
		} else {
			pLink->m_list  = this;
			pLink->m_prev  = nullptr;
			pLink->m_next  = m_head;
			m_head->m_prev = pLink;
			m_head         = pLink;
			m_linkCount    = m_linkCount + 1;
		}
	}
	return validity;
}

/*
 * --INFO--
 * Address:	80026A54
 * Size:	0001D0
 */
bool JSUPtrList::insert(JSUPtrLink* pLink1, JSUPtrLink* pLink2)
{
	if (pLink1 == m_head) {
		return prepend(pLink2);
	}
	if (!pLink1) {
		return append(pLink2);
	}
	if (pLink1->m_list != this) {
		return false;
	}

	JSUPtrList* pLink2List = pLink2->m_list;

	bool validity = (pLink2List == 0);

	if (!validity) {
		validity = pLink2List->remove(pLink2);
	}

	if (validity) {
		JSUPtrLink* prev = pLink1->m_prev;
		pLink2->m_list   = this;
		pLink2->m_prev   = prev;
		pLink2->m_next   = pLink1;
		prev->m_next     = pLink2;
		pLink1->m_prev   = pLink2;
		m_linkCount++;
	}

	return validity;
}

/*
 * --INFO--
 * Address:	80026C24
 * Size:	0000B0
 */
bool JSUPtrList::remove(JSUPtrLink* pLink)
{
	bool isSameList = (pLink->m_list == this);

	if (isSameList) {
		if (m_linkCount == 1) {
			m_head = nullptr;
			m_tail = nullptr;
		} else if (pLink == m_head) {
			pLink->m_next->m_prev = nullptr;
			m_head                = pLink->m_next;
		} else if (pLink == m_tail) {
			pLink->m_prev->m_next = nullptr;
			m_tail                = pLink->m_prev;
		} else {
			pLink->m_prev->m_next = pLink->m_next;
			pLink->m_next->m_prev = pLink->m_prev;
		}

		pLink->m_list = nullptr;
		m_linkCount--;
	}

	return isSameList;
}

/*
 * --INFO--
 * Address:	80026CD4
 * Size:	000088
 */
JSUPtrLink* JSUPtrList::getNthLink(u32 n) const
{
	if (n >= m_linkCount) {
		return nullptr;
	}
	JSUPtrLink* curHead = m_head;
	for (int i = 0; i < n; i++) {
		curHead = curHead->m_next;
	}
	return curHead;
}
