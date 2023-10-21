#include "JSystem/JGadget/linklist.h"

namespace JGadget {

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
void TNodeLinkList::splice(iterator, TNodeLinkList&, iterator)
{
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
void TNodeLinkList::Remove(TLinkListNode* node) { remove_if(TPRIsEqual_pointer_(node)); }

} // namespace JGadget

/*
 * --INFO--
 * Address:	8002739C
 * Size:	0000E8
 * TODO: This mess.
 */
// void remove_if<JGadget::@unnamed @linklist_cpp @ ::TPRIsEqual_pointer_<JGadget::TLinkListNode>> __Q27JGadget13TNodeLinkListFQ37JGadget22
//     @unnamed @linklist_cpp @46TPRIsEqual_pointer_
//     < JGadget::TLinkListNode > ()
// {
// 	/*
// 	.loc_0x0:
// 	  stwu      r1, -0x50(r1)
// 	  li        r5, 0
// 	  lwz       r6, 0x0(r4)
// 	  addi      r0, r3, 0x4
// 	  stw       r5, 0x44(r1)
// 	  addi      r8, r1, 0x44
// 	  stw       r5, 0x48(r1)
// 	  stw       r5, 0x40(r1)
// 	  stw       r8, 0x44(r1)
// 	  stw       r8, 0x48(r1)
// 	  lwz       r4, 0x4(r3)
// 	  stw       r6, 0x3C(r1)
// 	  stw       r4, 0x20(r1)
// 	  b         .loc_0xC8

// 	.loc_0x38:
// 	  lwz       r5, 0x20(r1)
// 	  cmplw     r5, r6
// 	  bne-      .loc_0xC0
// 	  lwz       r4, 0x0(r5)
// 	  cmplw     r8, r5
// 	  stw       r5, 0x24(r1)
// 	  stw       r4, 0x20(r1)
// 	  stw       r5, 0x2C(r1)
// 	  stw       r8, 0x28(r1)
// 	  stw       r4, 0x8(r1)
// 	  stw       r5, 0x10(r1)
// 	  stw       r8, 0xC(r1)
// 	  beq-      .loc_0xC8
// 	  cmplw     r8, r4
// 	  stw       r4, 0x18(r1)
// 	  stw       r8, 0x14(r1)
// 	  beq-      .loc_0xC8
// 	  lwz       r7, 0x0(r5)
// 	  lwz       r4, 0x4(r5)
// 	  stw       r8, 0x1C(r1)
// 	  stw       r4, 0x4(r7)
// 	  stw       r7, 0x0(r4)
// 	  lwz       r4, 0x0(r3)
// 	  subi      r4, r4, 0x1
// 	  stw       r4, 0x0(r3)
// 	  lwz       r4, 0x48(r1)
// 	  stw       r8, 0x0(r5)
// 	  stw       r4, 0x4(r5)
// 	  stw       r5, 0x48(r1)
// 	  stw       r5, 0x0(r4)
// 	  lwz       r4, 0x40(r1)
// 	  addi      r4, r4, 0x1
// 	  stw       r4, 0x40(r1)
// 	  b         .loc_0xC8

// 	.loc_0xC0:
// 	  lwz       r4, 0x0(r5)
// 	  stw       r4, 0x20(r1)

// 	.loc_0xC8:
// 	  lwz       r4, 0x20(r1)
// 	  cmplw     r4, r0
// 	  stw       r4, 0x38(r1)
// 	  stw       r4, 0x34(r1)
// 	  stw       r4, 0x30(r1)
// 	  bne+      .loc_0x38
// 	  addi      r1, r1, 0x50
// 	  blr
// 	*/
// }
