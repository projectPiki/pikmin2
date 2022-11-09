#include "JSystem/JGadget/allocator.h"
#include "JSystem/JGadget/list.h"
#include "types.h"

/*
    Generated from dpostproc
*/

/*
 * --INFO--
 * Address:	80027484
 * Size:	000020
 */
// void __ct__Q27JGadget18TList_pointer_voidFRCQ27JGadget14TAllocator<void*>(void)
JGadget::TList_pointer_void::TList_pointer_void(const JGadget::TAllocator<void*>& allocator)
{
	/*
	lbz      r0, 0(r4)
	li       r4, 0
	stb      r0, 0(r3)
	addi     r0, r3, 8
	stw      r4, 4(r3)
	stw      r0, 8(r3)
	stw      r0, 0xc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
// JGadget::TList<void*, JGadget::TAllocator<void*>>::~TList()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
// JGadget::TList_pointer_void::TList_pointer_void(u32, const void*&, const TAllocator<void*>&)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	800274A4
 * Size:	0000C0
 */
JGadget::TList_pointer_void::~TList_pointer_void(void)
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

/*
 * --INFO--
 * Address:	80027564
 * Size:	000098
 */
void JGadget::TList_pointer_void::insert(JGadget::TList_pointer_void::iterator, void* const&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r27, 0x1C(r1)
	  mr        r27, r3
	  lwz       r31, 0x0(r5)
	  mr        r28, r4
	  mr        r29, r6
	  li        r3, 0xC
	  stw       r31, 0x8(r1)
	  lwz       r30, 0x4(r31)
	  bl        -0x36EC
	  cmplwi    r3, 0
	  bne-      .loc_0x40
	  li        r3, 0
	  b         .loc_0x58

	.loc_0x40:
	  stw       r31, 0x0(r3)
	  addic.    r4, r3, 0x8
	  stw       r30, 0x4(r3)
	  beq-      .loc_0x58
	  lwz       r0, 0x0(r29)
	  stw       r0, 0x0(r4)

	.loc_0x58:
	  cmplwi    r3, 0
	  bne-      .loc_0x6C
	  addi      r0, r28, 0x8
	  stw       r0, 0x0(r27)
	  b         .loc_0x84

	.loc_0x6C:
	  stw       r3, 0x4(r31)
	  stw       r3, 0x0(r30)
	  lwz       r4, 0x4(r28)
	  addi      r0, r4, 0x1
	  stw       r0, 0x4(r28)
	  stw       r3, 0x0(r27)

	.loc_0x84:
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00009C
 */
void JGadget::TList_pointer_void::insert(JGadget::TList_pointer_void::iterator, u32, void* const&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800275FC
 * Size:	000070
 */
void JGadget::TList_pointer_void::erase(JGadget::TList_pointer_void::iterator)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lwz       r5, 0x0(r5)
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  mr        r3, r5
	  lwz       r31, 0x0(r5)
	  lwz       r4, 0x4(r5)
	  stw       r5, 0x8(r1)
	  stw       r31, 0x0(r4)
	  lwz       r0, 0x4(r5)
	  stw       r0, 0x4(r31)
	  bl        -0x3588
	  lwz       r3, 0x4(r30)
	  subi      r0, r3, 0x1
	  stw       r0, 0x4(r30)
	  stw       r31, 0x0(r29)
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void JGadget::TList_pointer_void::erase(JGadget::TList_pointer_void::iterator, JGadget::TList_pointer_void::iterator)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void JGadget::TList_pointer_void::remove(void* const&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void JGadget::TList_pointer_void::assign(unsigned long, void* const&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000100
 */
template <>
void JGadget::TList<void*, JGadget::TAllocator<void*>>::assign(u32, void* const&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000FC
 */
void JGadget::TList_pointer_void::resize(unsigned long, void* const&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000DC
 */
void JGadget::TList_pointer_void::unique()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
JGadget::TList_pointer_void& JGadget::TList_pointer_void::operator=(JGadget::TList_pointer_void const&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000194
 */
template <>
JGadget::TList<void*, JGadget::TAllocator<void*>>&
JGadget::TList<void*, JGadget::TAllocator<void*>>::operator=(const TList<void*, JGadget::TAllocator<void*>>& other)
// void __as__Q27JGadget36TList<void*, JGadget::TAllocator<void*>> FRCQ27JGadget36TList<void*, JGadget::TAllocator<void*>>(void)
{
	// UNUSED FUNCTION
}
