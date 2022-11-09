#include "types.h"
#include "JSystem/JGadget/linklist.h"

/*
    Generated from dpostproc
*/

/*
 * --INFO--
 * Address:	800272E4
 * Size:	00003C
 */
JGadget::TNodeLinkList::~TNodeLinkList(void) { }

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void JGadget::TNodeLinkList::erase(JGadget::TNodeLinkList::iterator)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void JGadget::TNodeLinkList::erase(JGadget::TNodeLinkList::iterator, JGadget::TNodeLinkList::iterator)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void JGadget::TNodeLinkList::clear(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void JGadget::TNodeLinkList::splice(JGadget::TNodeLinkList::iterator, JGadget::TNodeLinkList&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A8
 */
void JGadget::TNodeLinkList::splice(JGadget::TNodeLinkList::iterator, JGadget::TNodeLinkList&, JGadget::TNodeLinkList::iterator)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C4
 */
void JGadget::TNodeLinkList::splice(JGadget::TNodeLinkList::iterator, JGadget::TNodeLinkList&, JGadget::TNodeLinkList::iterator,
                                    JGadget::TNodeLinkList::iterator)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void JGadget::TNodeLinkList::swap(JGadget::TNodeLinkList&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00008C
 */
void JGadget::TNodeLinkList::reverse(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
JGadget::TLinkListNode* JGadget::TNodeLinkList::Find(JGadget::TLinkListNode const*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80027320
 * Size:	00002C
 */
void JGadget::TNodeLinkList::Insert(JGadget::TNodeLinkList::iterator position, JGadget::TLinkListNode* newNode)
{
	/*
	.loc_0x0:
	  lwz       r5, 0x0(r5)
	  lwz       r7, 0x4(r5)
	  stw       r5, 0x0(r6)
	  stw       r7, 0x4(r6)
	  stw       r6, 0x4(r5)
	  stw       r6, 0x0(r7)
	  lwz       r5, 0x0(r4)
	  addi      r0, r5, 0x1
	  stw       r0, 0x0(r4)
	  stw       r6, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8002734C
 * Size:	000024
 */
void JGadget::TNodeLinkList::Erase(JGadget::TLinkListNode*)
{
	/*
	lwz      r6, 0(r5)
	lwz      r5, 4(r5)
	stw      r5, 4(r6)
	stw      r6, 0(r5)
	lwz      r5, 0(r4)
	addi     r0, r5, -1
	stw      r0, 0(r4)
	stw      r6, 0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80027370
 * Size:	00002C
 */
void JGadget::TNodeLinkList::Remove(JGadget::TLinkListNode*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r4, 0xc(r1)
	addi     r4, r1, 0xc
	bl
	"remove_if<Q37JGadget22@unnamed@linklist_cpp@46TPRIsEqual_pointer_<Q27JGadget13TLinkListNode>>__Q27JGadget13TNodeLinkListFQ37JGadget22@unnamed@linklist_cpp@46TPRIsEqual_pointer_<Q27JGadget13TLinkListNode>"
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8002739C
 * Size:	0000E8
 * TODO: This mess.
 */
// void remove_if<JGadget::@unnamed @linklist_cpp @ ::TPRIsEqual_pointer_<JGadget::TLinkListNode>> __Q27JGadget13TNodeLinkListFQ37JGadget22
//     @unnamed @linklist_cpp @46TPRIsEqual_pointer_
//     < JGadget::TLinkListNode > (void)
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
