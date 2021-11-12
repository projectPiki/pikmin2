#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80483A68
    lbl_80483A68:
        .asciz "gameHighscore.cpp"
        .skip 2
    .global lbl_80483A7C
    lbl_80483A7C:
        .asciz "P2Assert"
        .skip 3

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q24Game9Highscore
    __vt__Q24Game9Highscore:
        .4byte 0
        .4byte 0
        .4byte do_higher__Q24Game9HighscoreFii
        .4byte 0
*/

namespace Game {

/*
 * --INFO--
 * Address:	80233CEC
 * Size:	00001C
 */
Highscore::Highscore(void)
{
	/*
	lis      r4, __vt__Q24Game9Highscore@ha
	li       r0, 0
	addi     r4, r4, __vt__Q24Game9Highscore@l
	stw      r4, 0(r3)
	stw      r0, 8(r3)
	stw      r0, 4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80233D08
 * Size:	000044
 */
void Highscore::allocate(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r4, 8(r3)
	lwz      r0, 8(r3)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 4(r31)
	mr       r3, r31
	bl       clear__Q24Game9HighscoreFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80233D4C
 * Size:	000088
 */
void Highscore::getScore(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	stw      r30, 8(r1)
	mr       r30, r3
	li       r3, 0
	blt      lbl_80233D8C
	lwz      r0, 8(r30)
	cmpw     r31, r0
	bge      lbl_80233D8C
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	beq      lbl_80233D8C
	li       r3, 1

lbl_80233D8C:
	clrlwi.  r0, r3, 0x18
	bne      lbl_80233DB0
	lis      r3, lbl_80483A68@ha
	lis      r5, lbl_80483A7C@ha
	addi     r3, r3, lbl_80483A68@l
	li       r4, 0x17
	addi     r5, r5, lbl_80483A7C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80233DB0:
	lwz      r3, 4(r30)
	slwi     r0, r31, 2
	lwzx     r3, r3, r0
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00008C
 */
void Highscore::newRecord(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80233DD4
 * Size:	000178
 */
void Highscore::entryScore(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	mr       r28, r4
	li       r30, -1
	li       r29, 0
	li       r31, 0
	b        lbl_80233E28

lbl_80233DFC:
	lwz      r5, 4(r27)
	mr       r3, r27
	mr       r4, r28
	lwzx     r5, r5, r31
	bl       higher__Q24Game9HighscoreFii
	clrlwi.  r0, r3, 0x18
	beq      lbl_80233E20
	mr       r30, r29
	b        lbl_80233E34

lbl_80233E20:
	addi     r31, r31, 4
	addi     r29, r29, 1

lbl_80233E28:
	lwz      r0, 8(r27)
	cmpw     r29, r0
	blt      lbl_80233DFC

lbl_80233E34:
	cmpwi    r30, -1
	beq      lbl_80233F34
	lwz      r3, 8(r27)
	addi     r0, r3, -1
	cmpw     r0, r30
	slwi     r4, r0, 2
	subf     r3, r30, r0
	ble      lbl_80233F28
	rlwinm.  r0, r3, 0x1d, 3, 0x1f
	mtctr    r0
	beq      lbl_80233F0C

lbl_80233E60:
	lwz      r0, 4(r27)
	add      r5, r0, r4
	addi     r4, r4, -4
	lwz      r0, -4(r5)
	stw      r0, 0(r5)
	lwz      r0, 4(r27)
	add      r5, r0, r4
	addi     r4, r4, -4
	lwz      r0, -4(r5)
	stw      r0, 0(r5)
	lwz      r0, 4(r27)
	add      r5, r0, r4
	addi     r4, r4, -4
	lwz      r0, -4(r5)
	stw      r0, 0(r5)
	lwz      r0, 4(r27)
	add      r5, r0, r4
	addi     r4, r4, -4
	lwz      r0, -4(r5)
	stw      r0, 0(r5)
	lwz      r0, 4(r27)
	add      r5, r0, r4
	addi     r4, r4, -4
	lwz      r0, -4(r5)
	stw      r0, 0(r5)
	lwz      r0, 4(r27)
	add      r5, r0, r4
	addi     r4, r4, -4
	lwz      r0, -4(r5)
	stw      r0, 0(r5)
	lwz      r0, 4(r27)
	add      r5, r0, r4
	addi     r4, r4, -4
	lwz      r0, -4(r5)
	stw      r0, 0(r5)
	lwz      r0, 4(r27)
	add      r5, r0, r4
	addi     r4, r4, -4
	lwz      r0, -4(r5)
	stw      r0, 0(r5)
	bdnz     lbl_80233E60
	andi.    r3, r3, 7
	beq      lbl_80233F28

lbl_80233F0C:
	mtctr    r3

lbl_80233F10:
	lwz      r0, 4(r27)
	add      r5, r0, r4
	addi     r4, r4, -4
	lwz      r0, -4(r5)
	stw      r0, 0(r5)
	bdnz     lbl_80233F10

lbl_80233F28:
	lwz      r3, 4(r27)
	slwi     r0, r30, 2
	stwx     r28, r3, r0

lbl_80233F34:
	mr       r3, r30
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80233F4C
 * Size:	00004C
 */
void Highscore::higher(int, int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmpwi    r5, -1
	stw      r0, 0x14(r1)
	bne      lbl_80233F68
	li       r3, 1
	b        lbl_80233F88

lbl_80233F68:
	cmpwi    r4, -1
	bne      lbl_80233F78
	li       r3, 0
	b        lbl_80233F88

lbl_80233F78:
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80233F88:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80233F98
 * Size:	000018
 */
void Highscore::do_higher(int, int)
{
	/*
	xor      r0, r4, r5
	srawi    r3, r0, 1
	and      r0, r0, r4
	subf     r0, r0, r3
	srwi     r3, r0, 0x1f
	blr
	*/
}

/*
 * --INFO--
 * Address:	80233FB0
 * Size:	0000B8
 */
void Highscore::read(Stream&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r0, 8(r3)
	li       r3, 0
	cmpwi    r0, 0
	ble      lbl_80233FF4
	lwz      r0, 4(r28)
	cmplwi   r0, 0
	beq      lbl_80233FF4
	li       r3, 1

lbl_80233FF4:
	clrlwi.  r0, r3, 0x18
	bne      lbl_80234018
	lis      r3, lbl_80483A68@ha
	lis      r5, lbl_80483A7C@ha
	addi     r3, r3, lbl_80483A68@l
	li       r4, 0x3f
	addi     r5, r5, lbl_80483A7C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80234018:
	li       r30, 0
	li       r31, 0
	b        lbl_8023403C

lbl_80234024:
	mr       r3, r29
	bl       readInt__6StreamFv
	lwz      r4, 4(r28)
	addi     r30, r30, 1
	stwx     r3, r4, r31
	addi     r31, r31, 4

lbl_8023403C:
	lwz      r0, 8(r28)
	cmpw     r30, r0
	blt      lbl_80234024
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
 * Address:	80234068
 * Size:	000074
 */
void Highscore::write(Stream&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	b        lbl_802340B0

lbl_80234098:
	lwz      r4, 4(r28)
	mr       r3, r29
	lwzx     r4, r4, r31
	bl       writeInt__6StreamFi
	addi     r31, r31, 4
	addi     r30, r30, 1

lbl_802340B0:
	lwz      r0, 8(r28)
	cmpw     r30, r0
	blt      lbl_80234098
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
 * Address:	802340DC
 * Size:	000030
 */
void Highscore::clear(void)
{
	/*
	li       r7, 0
	li       r6, 0
	li       r5, -1
	b        lbl_802340FC

lbl_802340EC:
	lwz      r4, 4(r3)
	addi     r7, r7, 1
	stwx     r5, r4, r6
	addi     r6, r6, 4

lbl_802340FC:
	lwz      r0, 8(r3)
	cmpw     r7, r0
	blt      lbl_802340EC
	blr
	*/
}
} // namespace Game
