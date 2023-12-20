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

/**
 * @note Address: 0x800272E4
 * @note Size: 0x3C
 */
TNodeLinkList::~TNodeLinkList() { }

/**
 * @note Address: N/A
 * @note Size: 0x4C
 */
void TNodeLinkList::erase(iterator)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x60
 */
void TNodeLinkList::erase(iterator, iterator)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x18
 */
void TNodeLinkList::clear()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x4C
 */
void TNodeLinkList::splice(iterator, TNodeLinkList&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xA8
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

/**
 * @note Address: N/A
 * @note Size: 0xC4
 */
void TNodeLinkList::splice(iterator, TNodeLinkList&, iterator, iterator)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x94
 */
void TNodeLinkList::swap(TNodeLinkList&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x8C
 */
void TNodeLinkList::reverse()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x60
 */
TLinkListNode* TNodeLinkList::Find(TLinkListNode const*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80027320
 * @note Size: 0x2C
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

/**
 * @note Address: 0x8002734C
 * @note Size: 0x24
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

/**
 * @note Address: 0x80027370
 * @note Size: 0x2C
 */
void TNodeLinkList::Remove(TLinkListNode* node) { remove_if((TPRIsEqual_pointer_<TLinkListNode>)(node)); }

} // namespace JGadget
