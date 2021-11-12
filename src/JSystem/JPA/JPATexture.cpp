#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__10JPATexture
    __vt__10JPATexture:
        .4byte 0
        .4byte 0
        .4byte __dt__10JPATextureFv
        .4byte 0
*/

/*
 * --INFO--
 * Address:	........
 * Size:	0000AC
 */
JPATexture::JPATexture(const unsigned char*, JKRHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800986A0
 * Size:	000068
 */
JPATexture::JPATexture(const unsigned char*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5, __vt__10JPATexture@ha
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r5, __vt__10JPATexture@l
	li       r5, 0
	stw      r3, 0(r31)
	addi     r3, r31, 4
	lbz      r6, 0x3f(r31)
	rlwinm   r6, r6, 0, 0x1e, 0x1e
	stb      r6, 0x3f(r31)
	stw      r0, 0x2c(r31)
	stw      r0, 0x24(r31)
	stw      r4, 0x44(r31)
	lwz      r4, 0x44(r31)
	addi     r4, r4, 0x20
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
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
 * Address:	80098708
 * Size:	000064
 */
JPATexture::~JPATexture()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80098750
	lis      r4, __vt__10JPATexture@ha
	addi     r3, r30, 4
	addi     r0, r4, __vt__10JPATexture@l
	li       r4, -1
	stw      r0, 0(r30)
	bl       __dt__10JUTTextureFv
	extsh.   r0, r31
	ble      lbl_80098750
	mr       r3, r30
	bl       __dl__FPv

lbl_80098750:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
