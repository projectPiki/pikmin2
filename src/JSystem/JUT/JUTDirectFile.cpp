#include "types.h"

/*
    Generated from dpostproc
*/

/*
 * --INFO--
 * Address:	........
 * Size:	0000D0
 */
void JUTDirectFile::fetch32byte()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002982C
 * Size:	000024
 */
JUTDirectFile::JUTDirectFile()
{
	/*
	li       r4, 0
	addi     r0, r3, 0x1f
	stw      r4, 0x828(r3)
	rlwinm   r0, r0, 0, 0, 0x1a
	stw      r4, 0x82c(r3)
	stw      r4, 0x824(r3)
	stw      r0, 0x820(r3)
	stb      r4, 0x830(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80029850
 * Size:	000044
 */
JUTDirectFile::~JUTDirectFile()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_8002987C
	li       r5, 0
	extsh.   r0, r4
	stb      r5, 0x830(r31)
	ble      lbl_8002987C
	bl       __dl__FPv

lbl_8002987C:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80029894
 * Size:	0000A8
 */
void JUTDirectFile::fopen(const char*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	or.      r30, r4, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	bne      lbl_800298C0
	li       r3, 0
	b        lbl_80029920

lbl_800298C0:
	bl       OSEnableInterrupts
	mr       r0, r3
	mr       r3, r30
	mr       r30, r0
	addi     r4, r29, 0x834
	bl       DVDOpen
	mr       r31, r3
	mr       r3, r30
	bl       OSRestoreInterrupts
	cmpwi    r31, 0
	bne      lbl_800298FC
	li       r0, 0
	li       r3, 0
	stb      r0, 0x830(r29)
	b        lbl_80029920

lbl_800298FC:
	bl       OSEnableInterrupts
	lwz      r0, 0x868(r29)
	stw      r0, 0x828(r29)
	bl       OSRestoreInterrupts
	li       r3, 0
	li       r0, 1
	stw      r3, 0x82c(r29)
	li       r3, 1
	stb      r0, 0x830(r29)

lbl_80029920:
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
 * Address:	........
 * Size:	000270
 */
void JUTDirectFile::fread(void*, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002993C
 * Size:	000060
 */
void JUTDirectFile::fclose()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lbz      r0, 0x830(r3)
	cmplwi   r0, 0
	beq      lbl_80029984
	bl       OSEnableInterrupts
	mr       r0, r3
	addi     r3, r30, 0x834
	mr       r31, r0
	bl       DVDClose
	mr       r3, r31
	bl       OSRestoreInterrupts
	li       r0, 0
	stb      r0, 0x830(r30)

lbl_80029984:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void JUTDirectFile::setPos(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00013C
 */
void JUTDirectFile::fgetc()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002999C
 * Size:	000230
 */
void JUTDirectFile::fgets(void*, int)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r27, r3
	mr       r28, r5
	lbz      r0, 0x830(r3)
	cmplwi   r0, 0
	bne      lbl_800299C8
	li       r3, -1
	b        lbl_80029BB8

lbl_800299C8:
	cmpwi    r28, 0
	bne      lbl_800299D8
	li       r3, 0
	b        lbl_80029BB8

lbl_800299D8:
	cmpwi    r28, 1
	bne      lbl_800299E8
	li       r3, 1
	b        lbl_80029BB8

lbl_800299E8:
	cmplwi   r4, 0
	bne      lbl_800299F8
	li       r3, -1
	b        lbl_80029BB8

lbl_800299F8:
	lwz      r3, 0x82c(r27)
	lwz      r0, 0x828(r27)
	cmplw    r3, r0
	blt      lbl_80029A10
	li       r3, -1
	b        lbl_80029BB8

lbl_80029A10:
	mr       r30, r4
	addi     r31, r28, -1
	li       r29, 0
	b        lbl_80029B8C

lbl_80029A20:
	lwz      r0, 0x824(r27)
	cmplwi   r0, 0
	bne      lbl_80029ACC
	rlwinm   r0, r3, 0, 0, 0x1a
	subf     r0, r0, r4
	stw      r0, 0x824(r27)
	lwz      r0, 0x824(r27)
	cmplwi   r0, 0x800
	ble      lbl_80029A4C
	li       r0, 0x800
	stw      r0, 0x824(r27)

lbl_80029A4C:
	bl       OSEnableInterrupts
	lwz      r4, 0x824(r27)
	mr       r25, r3
	lwz      r0, 0x82c(r27)
	addi     r3, r27, 0x834
	addi     r5, r4, 0x1f
	lwz      r4, 0x820(r27)
	rlwinm   r6, r0, 0, 0, 0x1a
	li       r7, 0
	rlwinm   r5, r5, 0, 0, 0x1a
	li       r8, 2
	bl       DVDReadAsyncPrio
	mr       r26, r3
	mr       r3, r25
	bl       OSRestoreInterrupts
	cmpwi    r26, 0
	bne      lbl_80029A98
	li       r0, -1
	b        lbl_80029ABC

lbl_80029A98:
	bl       OSEnableInterrupts
	mr       r25, r3

lbl_80029AA0:
	addi     r3, r27, 0x834
	bl       DVDGetCommandBlockStatus
	cmpwi    r3, 0
	bne      lbl_80029AA0
	mr       r3, r25
	bl       OSRestoreInterrupts
	lwz      r0, 0x824(r27)

lbl_80029ABC:
	cmpwi    r0, 0
	bge      lbl_80029ACC
	li       r3, -1
	b        lbl_80029BB8

lbl_80029ACC:
	lwz      r3, 0x82c(r27)
	lwz      r0, 0x824(r27)
	clrlwi   r4, r3, 0x15
	subf     r5, r4, r0
	add      r0, r29, r5
	cmplw    r0, r31
	ble      lbl_80029AF0
	subf     r3, r29, r28
	addi     r5, r3, -1

lbl_80029AF0:
	li       r6, 0
	li       r7, 0
	mtctr    r5
	cmplwi   r5, 0
	ble      lbl_80029B34

lbl_80029B04:
	lwz      r3, 0x820(r27)
	lbzx     r0, r3, r4
	addi     r4, r4, 1
	cmpwi    r0, 0xa
	stb      r0, 0(r30)
	addi     r30, r30, 1
	bne      lbl_80029B2C
	addi     r5, r7, 1
	li       r6, 1
	b        lbl_80029B34

lbl_80029B2C:
	addi     r7, r7, 1
	bdnz     lbl_80029B04

lbl_80029B34:
	cmplwi   r4, 0x800
	blt      lbl_80029B44
	li       r0, 0
	stw      r0, 0x824(r27)

lbl_80029B44:
	cmpwi    r6, 1
	bne      lbl_80029B68
	li       r0, 0
	add      r29, r29, r5
	stb      r0, 0(r30)
	lwz      r0, 0x82c(r27)
	add      r0, r0, r5
	stw      r0, 0x82c(r27)
	b        lbl_80029B9C

lbl_80029B68:
	lwz      r0, 0x82c(r27)
	add      r29, r29, r5
	cmpw     r29, r31
	add      r0, r0, r5
	stw      r0, 0x82c(r27)
	blt      lbl_80029B8C
	li       r0, 0
	stb      r0, 0(r30)
	b        lbl_80029B9C

lbl_80029B8C:
	lwz      r3, 0x82c(r27)
	lwz      r4, 0x828(r27)
	cmplw    r3, r4
	blt      lbl_80029A20

lbl_80029B9C:
	lwz      r3, 0x82c(r27)
	lwz      r0, 0x828(r27)
	cmplw    r3, r0
	blt      lbl_80029BB4
	li       r0, 0
	stb      r0, 0(r30)

lbl_80029BB4:
	mr       r3, r29

lbl_80029BB8:
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}
