#include "types.h"

/*
    Generated from dpostproc
*/

/*
 * --INFO--
 * Address:	80032478
 * Size:	0000B8
 */
void JUTResReference::getResource(JSUInputStream*, unsigned long, JKRArchive*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r6
	stw      r30, 0x18(r1)
	mr       r30, r5
	li       r5, 1
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	mr       r3, r29
	mr       r4, r28
	bl       read__14JSUInputStreamFPvl
	mr       r3, r29
	addi     r4, r28, 1
	li       r5, 1
	bl       read__14JSUInputStreamFPvl
	lbz      r5, 1(r28)
	mr       r3, r29
	addi     r4, r28, 2
	bl       read__14JSUInputStreamFPvl
	lbz      r0, 0(r28)
	cmplwi   r0, 2
	beq      lbl_800324F0
	cmplwi   r0, 3
	beq      lbl_800324F0
	cmplwi   r0, 4
	bne      lbl_80032500

lbl_800324F0:
	lbz      r0, 1(r28)
	li       r4, 0
	add      r3, r28, r0
	stb      r4, 2(r3)

lbl_80032500:
	mr       r3, r28
	mr       r4, r30
	mr       r5, r31
	bl       getResource__15JUTResReferenceFUlP10JKRArchive
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80032530
 * Size:	0000A4
 */
void JUTResReference::getResource(const void*, unsigned long, JKRArchive*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	lbz      r0, 1(r4)
	stw      r31, 0x1c(r1)
	mr       r31, r6
	stw      r30, 0x18(r1)
	mr       r30, r5
	stw      r29, 0x14(r1)
	mr       r29, r3
	lbz      r3, 0(r4)
	stb      r3, 0(r29)
	stb      r0, 1(r29)
	lbz      r5, 1(r29)
	cmplwi   r5, 0
	beq      lbl_8003257C
	addi     r3, r29, 2
	addi     r4, r4, 2
	bl       memcpy

lbl_8003257C:
	lbz      r0, 0(r29)
	cmplwi   r0, 2
	beq      lbl_80032598
	cmplwi   r0, 3
	beq      lbl_80032598
	cmplwi   r0, 4
	bne      lbl_800325A8

lbl_80032598:
	lbz      r0, 1(r29)
	li       r4, 0
	add      r3, r29, r0
	stb      r4, 2(r3)

lbl_800325A8:
	mr       r3, r29
	mr       r4, r30
	mr       r5, r31
	bl       getResource__15JUTResReferenceFUlP10JKRArchive
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800325D4
 * Size:	000078
 */
void JUTResReference::getResource(unsigned long, JKRArchive*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r6, r3
	stw      r0, 0x14(r1)
	lbz      r0, 0(r3)
	li       r3, 0
	cmpwi    r0, 3
	beq      lbl_80032624
	bge      lbl_80032608
	cmpwi    r0, 1
	beq      lbl_8003263C
	bge      lbl_80032614
	b        lbl_8003263C

lbl_80032608:
	cmpwi    r0, 5
	bge      lbl_8003263C
	b        lbl_80032634

lbl_80032614:
	mr       r3, r4
	addi     r4, r6, 2
	bl       getGlbResource__10JKRArchiveFUlPCcP10JKRArchive
	b        lbl_8003263C

lbl_80032624:
	mr       r4, r5
	addi     r3, r6, 2
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	b        lbl_8003263C

lbl_80032634:
	addi     r3, r6, 2
	bl       getGlbResource__13JKRFileLoaderFPCc

lbl_8003263C:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
