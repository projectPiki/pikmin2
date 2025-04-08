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
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	stw      r29, 0x34(r1)
	mr       r29, r4
	stw      r28, 0x30(r1)
	or.      r28, r3, r3
	beq      lbl_80027540
	beq      lbl_80027530
	lwz      r0, 8(r28)
	addi     r31, r28, 8
	stw      r31, 0x20(r1)
	stw      r31, 0x1c(r1)
	stw      r0, 0x18(r1)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	b        lbl_80027520

lbl_800274F0:
	lwz      r3, 0x14(r1)
	lwz      r30, 0(r3)
	lwz      r4, 4(r3)
	stw      r3, 0x10(r1)
	stw      r30, 0(r4)
	lwz      r0, 4(r3)
	stw      r0, 4(r30)
	bl       __dl__FPv
	lwz      r3, 4(r28)
	stw      r30, 0x14(r1)
	addi     r0, r3, -1
	stw      r0, 4(r28)

lbl_80027520:
	lwz      r0, 0x14(r1)
	cmplw    r0, r31
	stw      r0, 8(r1)
	bne      lbl_800274F0

lbl_80027530:
	extsh.   r0, r29
	ble      lbl_80027540
	mr       r3, r28
	bl       __dl__FPv

lbl_80027540:
	lwz      r0, 0x44(r1)
	mr       r3, r28
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	lwz      r28, 0x30(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
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
// void __as__Q27JGadget36TList<void*, JGadget::TAllocator<void*>> FRCQ27JGadget36TList<void*, JGadget::TAllocator<void*>>()
{
	// UNUSED FUNCTION
}
