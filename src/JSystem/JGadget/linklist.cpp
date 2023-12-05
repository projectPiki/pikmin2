#include "JSystem/JGadget/linklist.h"

namespace JGadget {

namespace {
template <typename T>
struct TPRIsEqual_pointer_ {
	TPRIsEqual_pointer_(const T* node) { mNode = node; }

	bool operator()(const T& other) const { return &other == mNode; }

	const T* mNode; // _00
};
} // namespace

/*
 * --INFO--
 * Address:	800272E4
 * Size:	00003C
 */
TNodeLinkList::~TNodeLinkList() { }

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void TNodeLinkList::erase(iterator)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void TNodeLinkList::erase(iterator, iterator)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void TNodeLinkList::clear()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void TNodeLinkList::splice(iterator, TNodeLinkList&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A8
 */
void TNodeLinkList::splice(iterator it, TNodeLinkList& list, iterator itSrc)
{
	iterator itSrcNext = itSrc;
	++itSrcNext;

	if ((it == itSrc) || (it == itSrcNext)) {
		return;
	} else {
		TLinkListNode* const node = &(*itSrc);
		list.Erase(node);
		Insert(it, node);
	}
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C4
 */
void TNodeLinkList::splice(iterator, TNodeLinkList&, iterator, iterator)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void TNodeLinkList::swap(TNodeLinkList&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00008C
 */
void TNodeLinkList::reverse()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
TLinkListNode* TNodeLinkList::Find(TLinkListNode const*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80027320
 * Size:	00002C
 */
TNodeLinkList::iterator TNodeLinkList::Insert(iterator it, TLinkListNode* node)
{
	TLinkListNode* itNode = it.mNode;
	TLinkListNode* prev   = itNode->mPrev;
	node->mNext           = itNode;
	node->mPrev           = prev;
	itNode->mPrev         = node;
	prev->mNext           = node;
	this->mCount++;
	return iterator(node);
}

/*
 * --INFO--
 * Address:	8002734C
 * Size:	000024
 */
TNodeLinkList::iterator TNodeLinkList::Erase(TLinkListNode* node)
{
	TLinkListNode* next = node->mNext;
	TLinkListNode* prev = node->mPrev;
	next->mPrev         = prev;
	prev->mNext         = next;
	this->mCount--;
	return iterator(next);
}

/*
 * --INFO--
 * Address:	80027370
 * Size:	00002C
 */
void TNodeLinkList::Remove(TLinkListNode* node) { remove_if((TPRIsEqual_pointer_<TLinkListNode>)(node)); }

} // namespace JGadget
