#include "types.h"

/*
    Generated from dpostproc

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516C10
    lbl_80516C10:
        .4byte 0x43300000
        .4byte 0x80000000
*/

/*
 * --INFO--
 * Address:	80093A40
 * Size:	000010
 */
JPAKeyBlock::JPAKeyBlock(const unsigned char*)
{
	/*
	stw      r4, 0(r3)
	addi     r0, r4, 0xc
	stw      r0, 4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C4
 */
void JPAKeyBlock::init_jpa(const unsigned char*, JKRHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80093A50
 * Size:	000094
 */
void JPAKeyBlock::calc(float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	mr       r6, r3
	stw      r0, 0x24(r1)
	lwz      r5, 0(r3)
	lbz      r0, 0xb(r5)
	cmpwi    r0, 0
	beq      lbl_80093AC8
	lbz      r3, 9(r5)
	fctiwz   f0, f1
	lis      r0, 0x4330
	lwz      r4, 4(r6)
	addi     r3, r3, -1
	stw      r0, 0x18(r1)
	slwi     r0, r3, 4
	lfsx     f2, r4, r0
	stfd     f0, 0x10(r1)
	fctiwz   f0, f2
	lfd      f2, lbl_80516C10@sda21(r2)
	lwz      r0, 0x14(r1)
	stfd     f0, 8(r1)
	lwz      r3, 0xc(r1)
	addi     r3, r3, 1
	divw     r0, r0, r3
	mullw    r0, r0, r3
	xoris    r0, r0, 0x8000
	stw      r0, 0x1c(r1)
	lfd      f0, 0x18(r1)
	fsubs    f0, f0, f2
	fsubs    f1, f1, f0

lbl_80093AC8:
	lbz      r3, 9(r5)
	lwz      r4, 4(r6)
	bl       JPACalcKeyAnmValue__FfUsPCf
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}
