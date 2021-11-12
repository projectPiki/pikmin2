#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80481428
    lbl_80481428:
        .4byte 0x70696B69
        .4byte 0x436F6E74
        .4byte 0x61696E65
        .4byte 0x72000000
    .global lbl_80481438
    lbl_80481438:
        .4byte 0x70696B69
        .4byte 0x436F6E74
        .4byte 0x61696E65
        .4byte 0x722E6370
        .4byte 0x70000000
    .global lbl_8048144C
    lbl_8048144C:
        .asciz "P2Assert"
        .skip 3
        .4byte 0x23205069
        .4byte 0x6B69436F
        .4byte 0x756E7465
        .4byte 0x720D0A00
        .4byte 0x09232063
        .4byte 0x6F6C2564
        .4byte 0x20686170
        .4byte 0x70612564
        .4byte 0x0D0A0000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q24Game13PikiContainer
    __vt__Q24Game13PikiContainer:
        .4byte 0
        .4byte 0
        .4byte read__Q24Game13PikiContainerFR6Stream
        .4byte write__Q24Game13PikiContainerFR6Stream
*/

namespace Game {

/*
 * --INFO--
 * Address:	801F1240
 * Size:	00004C
 */
PikiContainer::PikiContainer(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, __vt__Q24Game13PikiContainer@ha
	stw      r0, 0x14(r1)
	addi     r0, r4, __vt__Q24Game13PikiContainer@l
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0x54
	stw      r0, 0(r31)
	bl       __nwa__FUl
	stw      r3, 4(r31)
	mr       r3, r31
	bl       clear__Q24Game13PikiContainerFv
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
 * Address:	801F128C
 * Size:	00006C
 */
void PikiContainer::clear(void)
{
	/*
	li       r0, 3
	li       r11, 0
	mtctr    r0
	mr       r10, r11

lbl_801F129C:
	lwz      r4, 4(r3)
	addi     r8, r11, 4
	addi     r7, r11, 8
	addi     r6, r11, 0xc
	stwx     r10, r4, r11
	addi     r5, r11, 0x10
	addi     r4, r11, 0x14
	addi     r0, r11, 0x18
	lwz      r9, 4(r3)
	addi     r11, r11, 0x1c
	stwx     r10, r9, r8
	lwz      r8, 4(r3)
	stwx     r10, r8, r7
	lwz      r7, 4(r3)
	stwx     r10, r7, r6
	lwz      r6, 4(r3)
	stwx     r10, r6, r5
	lwz      r5, 4(r3)
	stwx     r10, r5, r4
	lwz      r4, 4(r3)
	stwx     r10, r4, r0
	bdnz     lbl_801F129C
	blr
	*/
}

/*
 * --INFO--
 * Address:	801F12F8
 * Size:	0000B0
 */
void PikiContainer::operator=(Game::PikiContainer&)
{
	/*
	stwu     r1, -0x10(r1)
	li       r0, 3
	li       r5, 0
	stw      r31, 0xc(r1)
	mtctr    r0

lbl_801F130C:
	lwz      r7, 4(r4)
	addi     r12, r5, 4
	lwz      r6, 4(r3)
	addi     r11, r5, 8
	lwzx     r0, r7, r5
	addi     r10, r5, 0xc
	addi     r9, r5, 0x10
	addi     r8, r5, 0x14
	stwx     r0, r6, r5
	addi     r7, r5, 0x18
	addi     r5, r5, 0x1c
	lwz      r31, 4(r4)
	lwz      r6, 4(r3)
	lwzx     r0, r31, r12
	stwx     r0, r6, r12
	lwz      r12, 4(r4)
	lwz      r6, 4(r3)
	lwzx     r0, r12, r11
	stwx     r0, r6, r11
	lwz      r11, 4(r4)
	lwz      r6, 4(r3)
	lwzx     r0, r11, r10
	stwx     r0, r6, r10
	lwz      r10, 4(r4)
	lwz      r6, 4(r3)
	lwzx     r0, r10, r9
	stwx     r0, r6, r9
	lwz      r9, 4(r4)
	lwz      r6, 4(r3)
	lwzx     r0, r9, r8
	stwx     r0, r6, r8
	lwz      r8, 4(r4)
	lwz      r6, 4(r3)
	lwzx     r0, r8, r7
	stwx     r0, r6, r7
	bdnz     lbl_801F130C
	lwz      r31, 0xc(r1)
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801F13A8
 * Size:	000074
 */
void PikiContainer::dump(char*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3

lbl_801F13C8:
	mr       r3, r29
	mr       r4, r31
	bl       getColorSum__Q24Game13PikiContainerFi
	li       r30, 0

lbl_801F13D8:
	mr       r3, r29
	mr       r4, r31
	mr       r5, r30
	bl       getCount__Q24Game13PikiContainerFii
	addi     r30, r30, 1
	cmpwi    r30, 3
	blt      lbl_801F13D8
	addi     r31, r31, 1
	cmpwi    r31, 7
	blt      lbl_801F13C8
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
 * Address:	801F141C
 * Size:	0000C8
 */
void PikiContainer::getCount(int, int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	li       r0, 0
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	or.      r30, r4, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	blt      lbl_801F1454
	cmpwi    r30, 7
	bge      lbl_801F1454
	li       r0, 1

lbl_801F1454:
	clrlwi.  r0, r0, 0x18
	bne      lbl_801F1478
	lis      r3, lbl_80481438@ha
	lis      r5, lbl_8048144C@ha
	addi     r3, r3, lbl_80481438@l
	li       r4, 0x5f
	addi     r5, r5, lbl_8048144C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801F1478:
	cmpwi    r31, 0
	li       r0, 0
	blt      lbl_801F1490
	cmpwi    r31, 3
	bge      lbl_801F1490
	li       r0, 1

lbl_801F1490:
	clrlwi.  r0, r0, 0x18
	bne      lbl_801F14B4
	lis      r3, lbl_80481438@ha
	lis      r5, lbl_8048144C@ha
	addi     r3, r3, lbl_80481438@l
	li       r4, 0x60
	addi     r5, r5, lbl_8048144C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801F14B4:
	mulli    r0, r30, 3
	lwz      r3, 4(r29)
	add      r0, r31, r0
	slwi     r0, r0, 2
	add      r3, r3, r0
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801F14E4
 * Size:	0000CC
 */
void PikiContainer::operator()(Game::Piki*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	li       r0, 0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lbz      r30, 0x2b8(r4)
	lbz      r31, 0x2b9(r4)
	cmpwi    r30, 0
	blt      lbl_801F1520
	cmpwi    r30, 7
	bge      lbl_801F1520
	li       r0, 1

lbl_801F1520:
	clrlwi.  r0, r0, 0x18
	bne      lbl_801F1544
	lis      r3, lbl_80481438@ha
	lis      r5, lbl_8048144C@ha
	addi     r3, r3, lbl_80481438@l
	li       r4, 0x5f
	addi     r5, r5, lbl_8048144C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801F1544:
	cmpwi    r31, 0
	li       r0, 0
	blt      lbl_801F155C
	cmpwi    r31, 3
	bge      lbl_801F155C
	li       r0, 1

lbl_801F155C:
	clrlwi.  r0, r0, 0x18
	bne      lbl_801F1580
	lis      r3, lbl_80481438@ha
	lis      r5, lbl_8048144C@ha
	addi     r3, r3, lbl_80481438@l
	li       r4, 0x60
	addi     r5, r5, lbl_8048144C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801F1580:
	mulli    r0, r30, 3
	lwz      r3, 4(r29)
	add      r0, r31, r0
	slwi     r0, r0, 2
	add      r3, r3, r0
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801F15B0
 * Size:	0000D4
 */
void PikiContainer::getColorSum(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r29, r4
	mulli    r0, r29, 3
	mr       r28, r3
	li       r31, 0
	li       r30, 0
	slwi     r27, r0, 2

lbl_801F15D8:
	cmpwi    r29, 0
	li       r0, 0
	blt      lbl_801F15F0
	cmpwi    r29, 7
	bge      lbl_801F15F0
	li       r0, 1

lbl_801F15F0:
	clrlwi.  r0, r0, 0x18
	bne      lbl_801F1614
	lis      r3, lbl_80481438@ha
	lis      r5, lbl_8048144C@ha
	addi     r3, r3, lbl_80481438@l
	li       r4, 0x5f
	addi     r5, r5, lbl_8048144C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801F1614:
	cmpwi    r30, 0
	li       r0, 0
	blt      lbl_801F162C
	cmpwi    r30, 3
	bge      lbl_801F162C
	li       r0, 1

lbl_801F162C:
	clrlwi.  r0, r0, 0x18
	bne      lbl_801F1650
	lis      r3, lbl_80481438@ha
	lis      r5, lbl_8048144C@ha
	addi     r3, r3, lbl_80481438@l
	li       r4, 0x60
	addi     r5, r5, lbl_8048144C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801F1650:
	lwz      r3, 4(r28)
	addi     r30, r30, 1
	cmpwi    r30, 3
	lwzx     r0, r3, r27
	addi     r27, r27, 4
	add      r31, r31, r0
	blt      lbl_801F15D8
	mr       r3, r31
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D0
 */
void PikiContainer::getHappaSum(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801F1684
 * Size:	0000E4
 */
void PikiContainer::getTotalSum(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r27, r3
	li       r30, 0
	li       r29, 0

lbl_801F16A0:
	mr       r31, r29
	slwi     r26, r29, 2
	li       r28, 0

lbl_801F16AC:
	cmpwi    r28, 0
	li       r0, 0
	blt      lbl_801F16C4
	cmpwi    r28, 7
	bge      lbl_801F16C4
	li       r0, 1

lbl_801F16C4:
	clrlwi.  r0, r0, 0x18
	bne      lbl_801F16E8
	lis      r3, lbl_80481438@ha
	lis      r5, lbl_8048144C@ha
	addi     r3, r3, lbl_80481438@l
	li       r4, 0x5f
	addi     r5, r5, lbl_8048144C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801F16E8:
	cmpwi    r29, 0
	li       r0, 0
	blt      lbl_801F1700
	cmpwi    r29, 3
	bge      lbl_801F1700
	li       r0, 1

lbl_801F1700:
	clrlwi.  r0, r0, 0x18
	bne      lbl_801F1724
	lis      r3, lbl_80481438@ha
	lis      r5, lbl_8048144C@ha
	addi     r3, r3, lbl_80481438@l
	li       r4, 0x60
	addi     r5, r5, lbl_8048144C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801F1724:
	lwz      r3, 4(r27)
	addi     r28, r28, 1
	cmpwi    r28, 7
	addi     r31, r31, 3
	lwzx     r0, r3, r26
	addi     r26, r26, 0xc
	add      r30, r30, r0
	blt      lbl_801F16AC
	addi     r29, r29, 1
	cmpwi    r29, 3
	blt      lbl_801F16A0
	mr       r3, r30
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801F1768
 * Size:	000134
 */
void PikiContainer::write(Stream&)
{
	/*
	stwu     r1, -0x130(r1)
	mflr     r0
	lis      r5, lbl_80481428@ha
	stw      r0, 0x134(r1)
	stmw     r24, 0x110(r1)
	mr       r25, r4
	mr       r24, r3
	addi     r30, r5, lbl_80481428@l
	mr       r3, r25
	lwz      r4, 0x414(r4)
	bl       textWriteTab__6StreamFi
	mr       r3, r25
	addi     r4, r30, 0x30
	crclr    6
	bl       textWriteText__6StreamFPce
	li       r27, 0
	li       r28, 0

lbl_801F17AC:
	mr       r29, r28
	slwi     r31, r28, 2
	li       r26, 0

lbl_801F17B8:
	lwz      r4, 0x414(r25)
	mr       r3, r25
	bl       textWriteTab__6StreamFi
	cmpwi    r27, 0
	li       r0, 0
	blt      lbl_801F17DC
	cmpwi    r27, 7
	bge      lbl_801F17DC
	li       r0, 1

lbl_801F17DC:
	clrlwi.  r0, r0, 0x18
	bne      lbl_801F17F8
	addi     r3, r30, 0x10
	addi     r5, r30, 0x24
	li       r4, 0x5f
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801F17F8:
	cmpwi    r26, 0
	li       r0, 0
	blt      lbl_801F1810
	cmpwi    r26, 3
	bge      lbl_801F1810
	li       r0, 1

lbl_801F1810:
	clrlwi.  r0, r0, 0x18
	bne      lbl_801F182C
	addi     r3, r30, 0x10
	addi     r5, r30, 0x24
	li       r4, 0x60
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801F182C:
	lwz      r4, 4(r24)
	mr       r3, r25
	lwzx     r4, r4, r31
	bl       writeInt__6StreamFi
	mr       r5, r27
	mr       r6, r26
	addi     r3, r1, 8
	addi     r4, r30, 0x40
	crclr    6
	bl       sprintf
	mr       r3, r25
	addi     r4, r1, 8
	crclr    6
	bl       textWriteText__6StreamFPce
	addi     r26, r26, 1
	addi     r31, r31, 4
	cmpwi    r26, 3
	addi     r29, r29, 1
	blt      lbl_801F17B8
	addi     r27, r27, 1
	addi     r28, r28, 3
	cmpwi    r27, 7
	blt      lbl_801F17AC
	lmw      r24, 0x110(r1)
	lwz      r0, 0x134(r1)
	mtlr     r0
	addi     r1, r1, 0x130
	blr
	*/
}

/*
 * --INFO--
 * Address:	801F189C
 * Size:	00006C
 */
void PikiContainer::read(Stream&)
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

lbl_801F18C8:
	mr       r3, r29
	bl       readInt__6StreamFv
	lwz      r4, 4(r28)
	addi     r30, r30, 1
	cmpwi    r30, 0x15
	stwx     r3, r4, r31
	addi     r31, r31, 4
	blt      lbl_801F18C8
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
} // namespace Game
