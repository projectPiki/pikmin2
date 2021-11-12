#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__10JSUIosBase
    __vt__10JSUIosBase:
        .4byte 0
        .4byte 0
        .4byte __dt__10JSUIosBaseFv
        .4byte 0
*/

/*
 * --INFO--
 * Address:	800261E0
 * Size:	000058
 */
void JSUOutputStream::write(const void*, long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r5
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	cmpw     r3, r31
	beq      lbl_80026220
	lbz      r0, 4(r30)
	ori      r0, r0, 1
	stb      r0, 4(r30)

lbl_80026220:
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
 * Address:	80026238
 * Size:	0000F8
 */
void JSUOutputStream::write(const char*)
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
	bne      lbl_80026294
	li       r0, 0
	addi     r4, r1, 0xa
	sth      r0, 0xa(r1)
	li       r5, 2
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 2
	beq      lbl_80026314
	lbz      r0, 4(r29)
	ori      r0, r0, 1
	stb      r0, 4(r29)
	b        lbl_80026314

lbl_80026294:
	mr       r3, r30
	bl       strlen
	lis      r0, 1
	mr       r31, r3
	cmpw     r31, r0
	blt      lbl_800262BC
	lbz      r0, 4(r29)
	ori      r0, r0, 2
	stb      r0, 4(r29)
	b        lbl_80026314

lbl_800262BC:
	sth      r31, 8(r1)
	mr       r3, r29
	addi     r4, r1, 8
	li       r5, 2
	lwz      r12, 0(r29)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 2
	bne      lbl_80026308
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	mr       r5, r31
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	cmpw     r31, r3
	beq      lbl_80026314

lbl_80026308:
	lbz      r0, 4(r29)
	ori      r0, r0, 1
	stb      r0, 4(r29)

lbl_80026314:
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
 * Address:	80026330
 * Size:	000048
 */
JSUIosBase::~JSUIosBase()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_80026360
	lis      r5, __vt__10JSUIosBase@ha
	extsh.   r0, r4
	addi     r0, r5, __vt__10JSUIosBase@l
	stw      r0, 0(r31)
	ble      lbl_80026360
	bl       __dl__FPv

lbl_80026360:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
