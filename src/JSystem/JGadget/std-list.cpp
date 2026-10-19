#include "JSystem/JGadget/allocator.h"
#include "JSystem/JGadget/list.h"
#include "types.h"

/**
 * @note Address: 0x80027484
 * @note Size: 0x20
 */
// void __ct__Q27JGadget18TList_pointer_voidFRCQ27JGadget14TAllocator<void*>()
JGadget::TList_pointer_void::TList_pointer_void(const JGadget::TVoidAllocator& allocator)
{
	mAllocator  = allocator;
	mSize       = 0;
	mNode.mNext = &mNode;
	mNode.mPrev = &mNode;
}

/**
 * @note Address: N/A
 * @note Size: 0xBC
 */
// JGadget::TList<void*, JGadget::TAllocator<void*>>::~TList()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: N/A
 * @note Size: 0xBC
 */
// JGadget::TList_pointer_void::TList_pointer_void(u32, const void*&, const TAllocator<void*>&)
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x800274A4
 * @note Size: 0xC0
 */
JGadget::TList_pointer_void::~TList_pointer_void()
{
}

/**
 * @note Address: 0x80027564
 * @note Size: 0x98
 */
JGadget::TList_pointer_void::iterator JGadget::TList_pointer_void::insert(JGadget::TList_pointer_void::iterator pos, void* const& value)
{
	volatile iterator iter(pos);
	TNode_* currNode = pos.mNode;
	TNode_* prevNode = currNode->mPrev;
	TNode_* newNode  = CreateNode_(currNode, prevNode, value);
	if (!newNode) {
		return iterator(&mNode);
	}

	currNode->mPrev = newNode;
	prevNode->mNext = newNode;
	mSize++;
	return iterator(newNode);
}

/**
 * @note Address: N/A
 * @note Size: 0x9C
 */
void JGadget::TList_pointer_void::insert(JGadget::TList_pointer_void::iterator, u32, void* const&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800275FC
 * @note Size: 0x70
 */
JGadget::TList_pointer_void::iterator JGadget::TList_pointer_void::erase(JGadget::TList_pointer_void::iterator it)
{
	return TList::erase(it);
}

/**
 * @note Address: N/A
 * @note Size: 0xA0
 */
void JGadget::TList_pointer_void::erase(JGadget::TList_pointer_void::iterator, JGadget::TList_pointer_void::iterator)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xE4
 */
void JGadget::TList_pointer_void::remove(void* const&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x20
 */
void JGadget::TList_pointer_void::assign(u32, void* const&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x100
 */
template <>
void JGadget::TList<void*, JGadget::TVoidAllocator>::assign(u32, void* const&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xFC
 */
void JGadget::TList_pointer_void::resize(u32, void* const&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xDC
 */
void JGadget::TList_pointer_void::unique()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x30
 */
JGadget::TList_pointer_void& JGadget::TList_pointer_void::operator=(JGadget::TList_pointer_void const&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x194
 */
template <>
JGadget::TList<void*, JGadget::TVoidAllocator>&
JGadget::TList<void*, JGadget::TVoidAllocator>::operator=(const TList<void*, JGadget::TVoidAllocator>& other)
{
	// UNUSED FUNCTION
}
