#include "types.h"

/*
    Generated from dpostproc
*/

namespace og {

namespace Screen {

	/*
	 * --INFO--
	 * Address:	8030F31C
	 * Size:	000080
	 */
	void DispMemberBase::isID(unsigned long, unsigned long long)
	{
		/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	mr       r28, r4
	mr       r30, r5
	mr       r29, r6
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r31, r3
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	cmplw    r28, r31
	bne      lbl_8030F384
	xor      r4, r29, r4
	xor      r0, r30, r3
	or.      r0, r4, r0
	bne      lbl_8030F384
	li       r3, 1
	b        lbl_8030F388

lbl_8030F384:
	li       r3, 0

lbl_8030F388:
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8030F39C
	 * Size:	000040
	 */
	void DispMemberBase::getMemberName(char*)
	{
		/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r5, r31
	bl       TagToName__Q22og6ScreenFUxPc
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8030F3DC
	 * Size:	0000E4
	 */
	void DispMemberBase::setSubMember(og::Screen::DispMemberBase*)
	{
		/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	li       r0, 0
	stw      r31, 0x3c(r1)
	mr       r31, r3
	stw      r30, 0x38(r1)
	mr       r30, r4
	stw      r0, 4(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	addi     r5, r1, 0x2c
	li       r3, 0
	bl       TagToName__Q22og6ScreenFUxPc
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r5, r1, 0x20
	bl       TagToName__Q22og6ScreenFUxPc
	li       r0, 0xa
	mtctr    r0

lbl_8030F444:
	lwz      r0, 4(r31)
	cmplwi   r0, 0
	bne      lbl_8030F49C
	stw      r30, 4(r31)
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	addi     r5, r1, 0x14
	li       r3, 0
	bl       TagToName__Q22og6ScreenFUxPc
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r5, r1, 8
	bl       TagToName__Q22og6ScreenFUxPc
	li       r3, 1
	b        lbl_8030F4A8

lbl_8030F49C:
	mr       r31, r0
	bdnz     lbl_8030F444
	li       r3, 0

lbl_8030F4A8:
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8030F4C0
	 * Size:	00010C
	 */
	void DispMemberBase::getSubMember(unsigned long, unsigned long long)
	{
		/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stmw     r25, 0x24(r1)
	mr       r29, r4
	mr       r31, r5
	mr       r30, r6
	li       r27, 0

lbl_8030F4E0:
	lwz      r26, 4(r3)
	cmplwi   r26, 0
	beq      lbl_8030F5B4
	mr       r3, r26
	lwz      r12, 0(r26)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	mr       r3, r26
	lwz      r12, 0(r26)
	mr       r28, r0
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r25, r4
	mr       r4, r28
	mr       r28, r3
	addi     r5, r1, 0x14
	li       r3, 0
	bl       TagToName__Q22og6ScreenFUxPc
	mr       r4, r25
	mr       r3, r28
	addi     r5, r1, 8
	bl       TagToName__Q22og6ScreenFUxPc
	mr       r3, r26
	lwz      r12, 0(r26)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r28, r3
	mr       r3, r26
	lwz      r12, 0(r26)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	cmplw    r29, r28
	bne      lbl_8030F590
	xor      r4, r30, r4
	xor      r0, r31, r3
	or.      r0, r4, r0
	bne      lbl_8030F590
	li       r0, 1
	b        lbl_8030F594

lbl_8030F590:
	li       r0, 0

lbl_8030F594:
	clrlwi.  r0, r0, 0x18
	beq      lbl_8030F5A4
	mr       r3, r26
	b        lbl_8030F5B8

lbl_8030F5A4:
	addi     r27, r27, 1
	mr       r3, r26
	cmpwi    r27, 0xa
	blt      lbl_8030F4E0

lbl_8030F5B4:
	li       r3, 0

lbl_8030F5B8:
	lmw      r25, 0x24(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	8030F5CC
	 * Size:	000034
	 */
	void DispMemberBase::setSubMemberAll(void)
	{
		/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r0, 4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
		*/
	}
} // namespace Screen
} // namespace og
