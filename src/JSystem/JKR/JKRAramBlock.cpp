#include "JSystem/JKR/Aram.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__12JKRAramBlock
    __vt__12JKRAramBlock:
        .4byte 0
        .4byte 0
        .4byte __dt__12JKRAramBlockFv
        .4byte 0
*/

/*
 * --INFO--
 * Address:	80019444
 * Size:	00006C
 */
JKRAramBlock::JKRAramBlock(ulong, ulong, ulong, uchar, bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r9, 0x804A
	  stw       r0, 0x24(r1)
	  subi      r0, r9, 0x3E8
	  stmw      r26, 0x8(r1)
	  mr        r26, r3
	  mr        r27, r4
	  mr        r28, r5
	  mr        r29, r6
	  mr        r30, r7
	  mr        r31, r8
	  mr        r4, r26
	  stw       r0, 0x0(r3)
	  addi      r3, r26, 0x4
	  bl        0xD338
	  stw       r27, 0x14(r26)
	  mr        r3, r26
	  stw       r28, 0x18(r26)
	  stw       r29, 0x1C(r26)
	  stb       r30, 0x20(r26)
	  stb       r31, 0x21(r26)
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800194B0
 * Size:	0000BC
 */
JKRAramBlock::~JKRAramBlock()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80019550
	lis      r3, __vt__12JKRAramBlock@ha
	addi     r0, r3, __vt__12JKRAramBlock@l
	stw      r0, 0(r30)
	lwz      r4, 0xc(r30)
	lwz      r3, 8(r30)
	cmplwi   r4, 0
	beq      lbl_80019514
	lwz      r7, 0(r4)
	addi     r4, r30, 4
	lwz      r0, 0x1c(r30)
	lwz      r6, 0x1c(r7)
	lwz      r5, 0x18(r30)
	add      r0, r0, r6
	add      r0, r5, r0
	stw      r0, 0x1c(r7)
	bl       remove__10JSUPtrListFP10JSUPtrLink
	b        lbl_8001952C

lbl_80019514:
	lwz      r4, 0x1c(r30)
	li       r0, 0
	lwz      r3, 0x18(r30)
	add      r3, r4, r3
	stw      r3, 0x1c(r30)
	stw      r0, 0x18(r30)

lbl_8001952C:
	addic.   r0, r30, 4
	beq      lbl_80019540
	addi     r3, r30, 4
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_80019540:
	extsh.   r0, r31
	ble      lbl_80019550
	mr       r3, r30
	bl       __dl__FPv

lbl_80019550:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8001956C
 * Size:	0000A8
 */
JKRAramBlock* JKRAramBlock::allocHead(ulong, uchar, JKRAramHeap*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r26, r3
	mr       r27, r4
	mr       r28, r5
	li       r5, 0
	lwz      r0, 0x1c(r3)
	lwz      r8, 0x14(r3)
	li       r3, 0x24
	lwz      r7, 0x18(r26)
	subf     r29, r27, r0
	lwz      r4, 0x30(r6)
	add      r30, r8, r7
	bl       __nw__FUlP7JKRHeapi
	or.      r31, r3, r3
	beq      lbl_800195E4
	lis      r3, __vt__12JKRAramBlock@ha
	mr       r4, r31
	addi     r0, r3, __vt__12JKRAramBlock@l
	addi     r3, r31, 4
	stw      r0, 0(r31)
	bl       __ct__10JSUPtrLinkFPv
	stw      r30, 0x14(r31)
	li       r0, 0
	stw      r27, 0x18(r31)
	stw      r29, 0x1c(r31)
	stb      r28, 0x20(r31)
	stb      r0, 0x21(r31)

lbl_800195E4:
	li       r0, 0
	addi     r5, r31, 4
	stw      r0, 0x1c(r26)
	lwz      r3, 8(r26)
	lwz      r4, 0x10(r26)
	bl       insert__10JSUPtrListFP10JSUPtrLinkP10JSUPtrLink
	mr       r3, r31
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80019614
 * Size:	0000B4
 */
JKRAramBlock* JKRAramBlock::allocTail(ulong, uchar, JKRAramHeap*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	mr       r28, r4
	mr       r29, r5
	li       r5, 0
	lwz      r4, 0x1c(r3)
	lwz      r0, 0x18(r3)
	li       r3, 0x24
	lwz      r7, 0x14(r27)
	add      r0, r0, r4
	lwz      r4, 0x30(r6)
	add      r0, r7, r0
	subf     r30, r28, r0
	bl       __nw__FUlP7JKRHeapi
	or.      r31, r3, r3
	beq      lbl_80019694
	lis      r3, __vt__12JKRAramBlock@ha
	mr       r4, r31
	addi     r0, r3, __vt__12JKRAramBlock@l
	addi     r3, r31, 4
	stw      r0, 0(r31)
	bl       __ct__10JSUPtrLinkFPv
	stw      r30, 0x14(r31)
	li       r3, 0
	li       r0, 1
	stw      r28, 0x18(r31)
	stw      r3, 0x1c(r31)
	stb      r29, 0x20(r31)
	stb      r0, 0x21(r31)

lbl_80019694:
	lwz      r0, 0x1c(r27)
	addi     r5, r31, 4
	subf     r0, r28, r0
	stw      r0, 0x1c(r27)
	lwz      r3, 8(r27)
	lwz      r4, 0x10(r27)
	bl       insert__10JSUPtrListFP10JSUPtrLinkP10JSUPtrLink
	mr       r3, r31
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}
