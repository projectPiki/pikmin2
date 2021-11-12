#include "types.h"

/*
    Generated from dpostproc

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051A5D0
    lbl_8051A5D0:
        .4byte 0x00000000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void SweepPrune::Node::insertBefore(SweepPrune::Node*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void SweepPrune::Node::insertAfter(SweepPrune::Node*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8023C5B0
 * Size:	0001C8
 */
void SweepPrune::Node::insertSort(SweepPrune::Node&)
{
	/*
	lwz      r5, 8(r3)
	cmplwi   r5, 0
	beq      lbl_8023C6D8
	lfs      f0, 0(r5)
	lfs      f1, 0(r3)
	fcmpo    cr0, f0, f1
	ble      lbl_8023C644
	mr       r6, r5
	b        lbl_8023C638

lbl_8023C5D4:
	lfs      f0, 0(r6)
	fcmpo    cr0, f0, f1
	cror     2, 0, 2
	bne      lbl_8023C634
	cmplwi   r5, 0
	beq      lbl_8023C5F4
	lwz      r0, 4(r3)
	stw      r0, 4(r5)

lbl_8023C5F4:
	lwz      r4, 4(r3)
	cmplwi   r4, 0
	beq      lbl_8023C608
	lwz      r0, 8(r3)
	stw      r0, 8(r4)

lbl_8023C608:
	li       r0, 0
	stw      r0, 8(r3)
	stw      r0, 4(r3)
	lwz      r4, 4(r6)
	stw      r3, 4(r6)
	cmplwi   r4, 0
	stw      r4, 4(r3)
	stw      r6, 8(r3)
	beqlr
	stw      r3, 8(r4)
	blr

lbl_8023C634:
	lwz      r6, 8(r6)

lbl_8023C638:
	cmplwi   r6, 0
	bne      lbl_8023C5D4
	blr

lbl_8023C644:
	lwz      r4, 4(r3)
	cmplwi   r4, 0
	beqlr
	lfs      f0, 0(r4)
	fcmpo    cr0, f0, f1
	bgelr
	mr       r6, r4
	b        lbl_8023C6CC

lbl_8023C664:
	lfs      f0, 0(r6)
	fcmpo    cr0, f0, f1
	cror     2, 1, 2
	bne      lbl_8023C6C8
	cmplwi   r5, 0
	beq      lbl_8023C680
	stw      r4, 4(r5)

lbl_8023C680:
	lwz      r4, 4(r3)
	cmplwi   r4, 0
	beq      lbl_8023C694
	lwz      r0, 8(r3)
	stw      r0, 8(r4)

lbl_8023C694:
	li       r0, 0
	stw      r0, 8(r3)
	stw      r0, 4(r3)
	lwz      r4, 8(r6)
	stw      r6, 4(r3)
	cmplwi   r4, 0
	stw      r4, 8(r3)
	beq      lbl_8023C6B8
	stw      r3, 4(r4)

lbl_8023C6B8:
	cmplwi   r6, 0
	beqlr
	stw      r3, 8(r6)
	blr

lbl_8023C6C8:
	lwz      r6, 4(r6)

lbl_8023C6CC:
	cmplwi   r6, 0
	bne      lbl_8023C664
	blr

lbl_8023C6D8:
	lwz      r5, 4(r4)
	cmplwi   r5, 0
	bne      lbl_8023C6FC
	stw      r3, 4(r4)
	stw      r5, 4(r3)
	stw      r4, 8(r3)
	beqlr
	stw      r3, 8(r5)
	blr

lbl_8023C6FC:
	mr       r6, r5
	li       r5, 0
	b        lbl_8023C748

lbl_8023C708:
	lfs      f1, 0(r6)
	mr       r5, r6
	lfs      f0, 0(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_8023C744
	lwz      r4, 8(r6)
	stw      r6, 4(r3)
	cmplwi   r4, 0
	stw      r4, 8(r3)
	beq      lbl_8023C734
	stw      r3, 4(r4)

lbl_8023C734:
	cmplwi   r6, 0
	beqlr
	stw      r3, 8(r6)
	blr

lbl_8023C744:
	lwz      r6, 4(r6)

lbl_8023C748:
	cmplwi   r6, 0
	bne      lbl_8023C708
	cmplwi   r5, 0
	beqlr
	lwz      r4, 4(r5)
	stw      r3, 4(r5)
	cmplwi   r4, 0
	stw      r4, 4(r3)
	stw      r5, 8(r3)
	beqlr
	stw      r3, 8(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8023C778
 * Size:	000070
 */
SweepPrune::Object::Object(void)
{
	/*
	lfs      f0, lbl_8051A5D0@sda21(r2)
	li       r4, 0
	li       r0, 1
	stfs     f0, 0(r3)
	stw      r4, 0xc(r3)
	stw      r4, 8(r3)
	stw      r4, 4(r3)
	stfs     f0, 0x14(r3)
	stw      r4, 0x20(r3)
	stw      r4, 0x1c(r3)
	stw      r4, 0x18(r3)
	stfs     f0, 0x28(r3)
	stw      r4, 0x34(r3)
	stw      r4, 0x30(r3)
	stw      r4, 0x2c(r3)
	stfs     f0, 0x3c(r3)
	stw      r4, 0x48(r3)
	stw      r4, 0x44(r3)
	stw      r4, 0x40(r3)
	stb      r4, 0x10(r3)
	stb      r0, 0x24(r3)
	stb      r4, 0x38(r3)
	stb      r0, 0x4c(r3)
	stw      r3, 0x48(r3)
	stw      r3, 0x34(r3)
	stw      r3, 0x20(r3)
	stw      r3, 0xc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8023C7E8
 * Size:	00002C
 */
SweepPrune::World::World(void)
{
	/*
	lfs      f0, lbl_8051A5D0@sda21(r2)
	li       r0, 0
	stfs     f0, 0(r3)
	stw      r0, 0xc(r3)
	stw      r0, 8(r3)
	stw      r0, 4(r3)
	stfs     f0, 0x14(r3)
	stw      r0, 0x20(r3)
	stw      r0, 0x1c(r3)
	stw      r0, 0x18(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
SweepPrune::World::~World(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8023C814
 * Size:	000148
 */
void SweepPrune::World::resolve(SweepPrune::World::ResolveArg&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	li       r0, 0
	stmw     r27, 0xc(r1)
	mr       r27, r4
	stw      r0, 8(r4)
	stw      r0, 4(r4)
	lwz      r30, 4(r3)
	b        lbl_8023C940

lbl_8023C83C:
	lwz      r31, 0xc(r30)
	li       r29, 0
	lwz      r28, 4(r30)
	b        lbl_8023C920

lbl_8023C84C:
	lwz      r3, 4(r27)
	addi     r0, r3, 1
	stw      r0, 4(r27)
	lwz      r5, 0xc(r28)
	cmplw    r31, r5
	bne      lbl_8023C870
	lbz      r0, 0x10(r28)
	cmplwi   r0, 1
	beq      lbl_8023C928

lbl_8023C870:
	lbz      r0, 0x10(r28)
	cmplwi   r0, 0
	bne      lbl_8023C91C
	cmplwi   r29, 0
	bne      lbl_8023C888
	mr       r29, r28

lbl_8023C888:
	lfs      f0, 0x28(r31)
	lfs      f2, 0x28(r5)
	lfs      f1, 0x3c(r31)
	fcmpo    cr0, f0, f2
	lfs      f3, 0x3c(r5)
	cror     2, 0, 2
	bne      lbl_8023C8B0
	fcmpo    cr0, f2, f1
	cror     2, 0, 2
	beq      lbl_8023C8F8

lbl_8023C8B0:
	fcmpo    cr0, f0, f3
	cror     2, 0, 2
	bne      lbl_8023C8C8
	fcmpo    cr0, f3, f1
	cror     2, 0, 2
	beq      lbl_8023C8F8

lbl_8023C8C8:
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_8023C8E0
	fcmpo    cr0, f0, f3
	cror     2, 0, 2
	beq      lbl_8023C8F8

lbl_8023C8E0:
	fcmpo    cr0, f2, f1
	cror     2, 0, 2
	bne      lbl_8023C91C
	fcmpo    cr0, f1, f3
	cror     2, 0, 2
	bne      lbl_8023C91C

lbl_8023C8F8:
	lwz      r3, 0(r27)
	mr       r4, r31
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 8(r27)
	addi     r0, r3, 1
	stw      r0, 8(r27)

lbl_8023C91C:
	lwz      r28, 4(r28)

lbl_8023C920:
	cmplwi   r28, 0
	bne      lbl_8023C84C

lbl_8023C928:
	cmplwi   r29, 0
	bne      lbl_8023C934
	lwz      r30, 4(r30)

lbl_8023C934:
	cmplwi   r29, 0
	beq      lbl_8023C940
	mr       r30, r29

lbl_8023C940:
	cmplwi   r30, 0
	bne      lbl_8023C83C
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}
