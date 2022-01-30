#include "Game/Creature.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047F218
    lbl_8047F218:
        .4byte 0x63726561
        .4byte 0x74757265
        .4byte 0x53746963
        .4byte 0x6B000000
    .global lbl_8047F228
    lbl_8047F228:
        .4byte 0x63726561
        .4byte 0x74757265
        .4byte 0x53746963
        .4byte 0x6B2E6370
        .4byte 0x70000000
    .global lbl_8047F23C
    lbl_8047F23C:
        .asciz "P2Assert"
        .skip 3
        .4byte 0x746F6F20
        .4byte 0x6D616E79
        .4byte 0x20737469
        .4byte 0x636B6572
        .4byte 0x7320210A
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q24Game8Stickers
    __vt__Q24Game8Stickers:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game8StickersFv
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__27Container<Q24Game8Creature>FPv"
        .4byte getNext__Q24Game8StickersFPv
        .4byte getStart__Q24Game8StickersFv
        .4byte getEnd__Q24Game8StickersFv
        .4byte get__Q24Game8StickersFPv
        .4byte "getAt__27Container<Q24Game8Creature>Fi"
        .4byte "getTo__27Container<Q24Game8Creature>Fv"
        .4byte 0

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global maxBuffer__Q24Game8Stickers
    maxBuffer__Q24Game8Stickers:
        .4byte 0x0000006E

    .section .sbss # 0x80514D80 - 0x80516360
    .global numBuffer__Q24Game8Stickers
    numBuffer__Q24Game8Stickers:
        .skip 0x4
    .global mutex__Q24Game8Stickers
    mutex__Q24Game8Stickers:
        .skip 0x4
    .global buffer__Q24Game8Stickers
    buffer__Q24Game8Stickers:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80519040
    lbl_80519040:
        .float 1.0
    .global lbl_80519044
    lbl_80519044:
        .4byte 0x3FA66666
    .global lbl_80519048
    lbl_80519048:
        .4byte 0x3FC00000
    .global lbl_8051904C
    lbl_8051904C:
        .4byte 0x00000000
    .global lbl_80519050
    lbl_80519050:
        .4byte 0x3FC90FDB
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	8019EE94
 * Size:	000024
 */
void Creature::clearStick(void)
{
	/*
	li       r4, 0
	li       r0, -1
	stw      r4, 0x100(r3)
	stw      r4, 0xfc(r3)
	stw      r4, 0xf4(r3)
	stw      r4, 0xf0(r3)
	stw      r4, 0xf8(r3)
	sth      r0, 0x110(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019EEB8
 * Size:	00003C
 */
void Creature::releaseAllStickers(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	b        lbl_8019EED4

lbl_8019EED0:
	bl       endStick__Q24Game8CreatureFv

lbl_8019EED4:
	lwz      r3, 0xf0(r31)
	cmplwi   r3, 0
	bne      lbl_8019EED0
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019EEF4
 * Size:	000174
 */
void Creature::startStick(Game::Creature*, CollPart*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r5
	stw      r30, 0x28(r1)
	mr       r30, r4
	stw      r29, 0x24(r1)
	mr       r29, r3
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019EF64
	mr       r3, r29
	bl       isStickToMouth__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8019EF5C
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019EF5C
	mr       r3, r29
	bl       endStick__Q24Game8CreatureFv
	b        lbl_8019EF64

lbl_8019EF5C:
	li       r3, 0
	b        lbl_8019F04C

lbl_8019EF64:
	stw      r30, 0xf4(r29)
	stw      r31, 0xf8(r29)
	lwz      r3, 0xf8(r29)
	cmplwi   r3, 0
	beq      lbl_8019EF98
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019EF98
	lwz      r3, 0xf8(r29)
	stw      r29, 0x64(r3)

lbl_8019EF98:
	lwz      r3, 0xf0(r30)
	cmplwi   r3, 0
	bne      lbl_8019EFB8
	stw      r29, 0xf0(r30)
	li       r0, 0
	stw      r0, 0x100(r29)
	stw      r0, 0xfc(r29)
	b        lbl_8019EFCC

lbl_8019EFB8:
	stw      r29, 0xf0(r30)
	li       r0, 0
	stw      r0, 0x100(r29)
	stw      r3, 0xfc(r29)
	stw      r29, 0x100(r3)

lbl_8019EFCC:
	lwz      r0, 0xf8(r29)
	cmplwi   r0, 0
	beq      lbl_8019F018
	mr       r4, r29
	addi     r3, r1, 8
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	addi     r4, r1, 0x14
	lfs      f1, 0xc(r1)
	addi     r5, r29, 0x104
	lfs      f0, 0x10(r1)
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	lwz      r3, 0xf8(r29)
	bl       "calcStickLocal__8CollPartFR10Vector3<f>R10Vector3<f>"

lbl_8019F018:
	lwz      r3, 0xf4(r29)
	mr       r4, r29
	lwz      r12, 0(r3)
	lwz      r12, 0x158(r12)
	mtctr    r12
	bctrl
	mr       r3, r29
	lwz      r4, 0xf4(r29)
	lwz      r12, 0(r29)
	lwz      r12, 0x160(r12)
	mtctr    r12
	bctrl
	li       r3, 1

lbl_8019F04C:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019F068
 * Size:	0001B0
 */
void Creature::startStickMouth(Game::Creature*, CollPart*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	stw      r30, 0x28(r1)
	mr       r30, r5
	mr       r3, r30
	stw      r29, 0x24(r1)
	mr       r29, r4
	lwz      r12, 0(r30)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8019F0C4
	lis      r3, lbl_8047F228@ha
	lis      r5, lbl_8047F23C@ha
	addi     r3, r3, lbl_8047F228@l
	li       r4, 0xca
	addi     r5, r5, lbl_8047F23C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8019F0C4:
	mr       r3, r31
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019F114
	mr       r3, r31
	bl       isStickToMouth__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8019F10C
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019F10C
	mr       r3, r31
	bl       endStick__Q24Game8CreatureFv
	b        lbl_8019F114

lbl_8019F10C:
	li       r3, 0
	b        lbl_8019F1FC

lbl_8019F114:
	stw      r29, 0xf4(r31)
	stw      r30, 0xf8(r31)
	lwz      r3, 0xf8(r31)
	cmplwi   r3, 0
	beq      lbl_8019F148
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019F148
	lwz      r3, 0xf8(r31)
	stw      r31, 0x64(r3)

lbl_8019F148:
	lwz      r3, 0xf0(r29)
	cmplwi   r3, 0
	bne      lbl_8019F168
	stw      r31, 0xf0(r29)
	li       r0, 0
	stw      r0, 0x100(r31)
	stw      r0, 0xfc(r31)
	b        lbl_8019F17C

lbl_8019F168:
	stw      r31, 0xf0(r29)
	li       r0, 0
	stw      r0, 0x100(r31)
	stw      r3, 0xfc(r31)
	stw      r31, 0x100(r3)

lbl_8019F17C:
	lwz      r0, 0xf8(r31)
	cmplwi   r0, 0
	beq      lbl_8019F1C8
	mr       r4, r31
	addi     r3, r1, 0x14
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x14(r1)
	addi     r4, r1, 8
	lfs      f1, 0x18(r1)
	addi     r5, r31, 0x104
	lfs      f0, 0x1c(r1)
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	lwz      r3, 0xf8(r31)
	bl       "calcStickLocal__8CollPartFR10Vector3<f>R10Vector3<f>"

lbl_8019F1C8:
	lwz      r3, 0xf4(r31)
	mr       r4, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x158(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r4, 0xf4(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0x160(r12)
	mtctr    r12
	bctrl
	li       r3, 1

lbl_8019F1FC:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019F218
 * Size:	00020C
 */
void Creature::startStick(Game::Creature*, short)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r5
	stw      r30, 0x28(r1)
	mr       r30, r4
	stw      r29, 0x24(r1)
	mr       r29, r3
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019F250
	li       r3, 0
	b        lbl_8019F408

lbl_8019F250:
	mr       r3, r29
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019F2A0
	mr       r3, r29
	bl       isStickToMouth__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8019F298
	li       r3, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019F298
	mr       r3, r29
	bl       endStick__Q24Game8CreatureFv
	b        lbl_8019F2A0

lbl_8019F298:
	li       r0, 0
	b        lbl_8019F38C

lbl_8019F2A0:
	stw      r30, 0xf4(r29)
	li       r0, 0
	stw      r0, 0xf8(r29)
	lwz      r3, 0xf8(r29)
	cmplwi   r3, 0
	beq      lbl_8019F2D8
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019F2D8
	lwz      r3, 0xf8(r29)
	stw      r29, 0x64(r3)

lbl_8019F2D8:
	lwz      r3, 0xf0(r30)
	cmplwi   r3, 0
	bne      lbl_8019F2F8
	stw      r29, 0xf0(r30)
	li       r0, 0
	stw      r0, 0x100(r29)
	stw      r0, 0xfc(r29)
	b        lbl_8019F30C

lbl_8019F2F8:
	stw      r29, 0xf0(r30)
	li       r0, 0
	stw      r0, 0x100(r29)
	stw      r3, 0xfc(r29)
	stw      r29, 0x100(r3)

lbl_8019F30C:
	lwz      r0, 0xf8(r29)
	cmplwi   r0, 0
	beq      lbl_8019F358
	mr       r4, r29
	addi     r3, r1, 0x14
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x14(r1)
	addi     r4, r1, 8
	lfs      f1, 0x18(r1)
	addi     r5, r29, 0x104
	lfs      f0, 0x1c(r1)
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	lwz      r3, 0xf8(r29)
	bl       "calcStickLocal__8CollPartFR10Vector3<f>R10Vector3<f>"

lbl_8019F358:
	lwz      r3, 0xf4(r29)
	mr       r4, r29
	lwz      r12, 0(r3)
	lwz      r12, 0x158(r12)
	mtctr    r12
	bctrl
	mr       r3, r29
	lwz      r4, 0xf4(r29)
	lwz      r12, 0(r29)
	lwz      r12, 0x160(r12)
	mtctr    r12
	bctrl
	li       r0, 1

lbl_8019F38C:
	clrlwi.  r0, r0, 0x18
	beq      lbl_8019F404
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	lwz      r12, 0x168(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019F3F4
	mr       r3, r30
	mr       r4, r29
	lwz      r12, 0(r30)
	mr       r5, r31
	lwz      r12, 0x178(r12)
	mtctr    r12
	bctrl
	sth      r31, 0x110(r29)
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	lwz      r12, 0x160(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	b        lbl_8019F408

lbl_8019F3F4:
	mr       r3, r29
	bl       endStick__Q24Game8CreatureFv
	li       r3, 0
	b        lbl_8019F408

lbl_8019F404:
	li       r3, 0

lbl_8019F408:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019F424
 * Size:	000150
 */
void Creature::endStick(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019F560
	mr       r3, r31
	lwz      r4, 0xf4(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0x164(r12)
	mtctr    r12
	bctrl
	lha      r5, 0x110(r31)
	cmpwi    r5, -1
	beq      lbl_8019F48C
	lwz      r3, 0xf4(r31)
	mr       r4, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x17c(r12)
	mtctr    r12
	bctrl
	li       r0, -1
	sth      r0, 0x110(r31)
	b        lbl_8019F4A4

lbl_8019F48C:
	lwz      r3, 0xf4(r31)
	mr       r4, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x15c(r12)
	mtctr    r12
	bctrl

lbl_8019F4A4:
	lwz      r3, 0xf8(r31)
	cmplwi   r3, 0
	beq      lbl_8019F4D4
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019F4D4
	lwz      r3, 0xf8(r31)
	li       r0, 0
	stw      r0, 0x64(r3)

lbl_8019F4D4:
	lwz      r3, 0x100(r31)
	cmplwi   r3, 0
	bne      lbl_8019F504
	lwz      r0, 0xfc(r31)
	cmplwi   r0, 0
	bne      lbl_8019F504
	lwz      r3, 0xf4(r31)
	li       r0, 0
	stw      r0, 0xf0(r3)
	stw      r0, 0xf4(r31)
	stw      r0, 0xf8(r31)
	b        lbl_8019F560

lbl_8019F504:
	cmplwi   r3, 0
	bne      lbl_8019F538
	lwz      r4, 0xfc(r31)
	li       r0, 0
	lwz      r3, 0xf4(r31)
	stw      r4, 0xf0(r3)
	lwz      r3, 0xfc(r31)
	stw      r0, 0x100(r3)
	stw      r0, 0xf4(r31)
	stw      r0, 0xf8(r31)
	stw      r0, 0x100(r31)
	stw      r0, 0xfc(r31)
	b        lbl_8019F560

lbl_8019F538:
	li       r0, 0
	stw      r0, 0xf4(r31)
	lwz      r0, 0xfc(r31)
	lwz      r3, 0x100(r31)
	stw      r0, 0xfc(r3)
	lwz      r3, 0xfc(r31)
	cmplwi   r3, 0
	beq      lbl_8019F560
	lwz      r0, 0x100(r31)
	stw      r0, 0x100(r3)

lbl_8019F560:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019F574
 * Size:	000014
 * Returns whether the creature is stuck to anything
 */
bool Creature::isStickTo(void)
{
	/*
	lwz      r3, 0xf4(r3)
	neg      r0, r3
	or       r0, r0, r3
	srwi     r3, r0, 0x1f
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019F588
 * Size:	000060
 */
bool Creature::isStickToMouth(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	lwz      r0, 0xf4(r3)
	cmplwi   r0, 0
	beq      lbl_8019F5D0
	lwz      r3, 0xf8(r3)
	cmplwi   r3, 0
	beq      lbl_8019F5D0
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019F5D0
	li       r31, 1

lbl_8019F5D0:
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
 * Address:	........
 * Size:	000028
 */
bool Creature::isStickLeader(void)
{
	// UNUSED FUNCTION
}

} // namespace Game

/*
 * --INFO--
 * Address:	8019F5E8
 * Size:	0004B4
 */
void updateStick__Q24Game8CreatureFR10Vector3f(void)
{
	/*
	stwu     r1, -0x110(r1)
	mflr     r0
	stw      r0, 0x114(r1)
	stfd     f31, 0x100(r1)
	psq_st   f31, 264(r1), 0, qr0
	stw      r31, 0xfc(r1)
	mr       r31, r3
	lwz      r0, 0xf4(r3)
	cmplwi   r0, 0
	bne      lbl_8019F62C
	lis      r3, lbl_8047F228@ha
	lis      r5, lbl_8047F23C@ha
	addi     r3, r3, lbl_8047F228@l
	li       r4, 0x127
	addi     r5, r5, lbl_8047F23C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8019F62C:
	lwz      r12, 0(r31)
	lis      r4, "zero__10Vector3<f>"@ha
	mr       r3, r31
	lwz      r12, 0x68(r12)
	addi     r4, r4, "zero__10Vector3<f>"@l
	mtctr    r12
	bctrl
	lwz      r3, 0xf8(r31)
	cmplwi   r3, 0
	beq      lbl_8019F774
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019F774
	lwz      r3, 0xf8(r31)
	addi     r4, r1, 0xbc
	bl       copyMatrixTo__13MouthCollPartFR7Matrixf
	lwz      r3, 0xf8(r31)
	lfs      f31, lbl_80519040@sda21(r2)
	lbz      r0, 0x6c(r3)
	cmplwi   r0, 0
	beq      lbl_8019F708
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019F6D0
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1ac(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0
	bne      lbl_8019F6CC
	lfs      f31, lbl_80519044@sda21(r2)
	b        lbl_8019F6D0

lbl_8019F6CC:
	lfs      f31, lbl_80519048@sda21(r2)

lbl_8019F6D0:
	lfs      f0, lbl_8051904C@sda21(r2)
	addi     r3, r1, 0x8c
	stfs     f31, 0x80(r1)
	addi     r4, r1, 0x80
	addi     r5, r1, 0x74
	stfs     f31, 0x84(r1)
	stfs     f31, 0x88(r1)
	stfs     f0, 0x74(r1)
	stfs     f0, 0x78(r1)
	stfs     f0, 0x7c(r1)
	lwz      r6, 0xf8(r31)
	addi     r6, r6, 0x20
	bl       "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"
	b        lbl_8019F738

lbl_8019F708:
	lfs      f1, lbl_8051904C@sda21(r2)
	addi     r3, r1, 0x8c
	lfs      f0, lbl_80519050@sda21(r2)
	addi     r4, r1, 0x68
	stfs     f31, 0x68(r1)
	addi     r5, r1, 0x5c
	stfs     f31, 0x6c(r1)
	stfs     f31, 0x70(r1)
	stfs     f1, 0x5c(r1)
	stfs     f1, 0x60(r1)
	stfs     f0, 0x64(r1)
	bl       "makeSR__7MatrixfFR10Vector3<f>R10Vector3<f>"

lbl_8019F738:
	addi     r3, r1, 0xbc
	addi     r4, r1, 0x8c
	addi     r5, r31, 0x138
	bl       PSMTXConcat
	lfs      f0, 0x144(r31)
	mr       r3, r31
	addi     r4, r1, 0x50
	li       r5, 1
	stfs     f0, 0x50(r1)
	lfs      f0, 0x154(r31)
	stfs     f0, 0x54(r1)
	lfs      f0, 0x164(r31)
	stfs     f0, 0x58(r1)
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	b        lbl_8019FA80

lbl_8019F774:
	lwz      r0, 0xf8(r31)
	cmplwi   r0, 0
	beq      lbl_8019F994
	mr       r4, r31
	addi     r3, r1, 0x14
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x14(r1)
	addi     r4, r31, 0x104
	lfs      f1, 0x18(r1)
	addi     r5, r1, 0x44
	lfs      f0, 0x1c(r1)
	stfs     f2, 0x44(r1)
	stfs     f1, 0x48(r1)
	stfs     f0, 0x4c(r1)
	lwz      r3, 0xf8(r31)
	bl       "calcStickGlobal__8CollPartFR10Vector3<f>R10Vector3<f>"
	lwz      r3, 0xf8(r31)
	lbz      r0, 0x58(r3)
	cmplwi   r0, 2
	bne      lbl_8019F8B0
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x38(r1)
	addi     r4, r1, 0x38
	addi     r5, r31, 0x138
	lfs      f0, 0x108(r31)
	stfs     f0, 0x3c(r1)
	lwz      r3, 0xf8(r31)
	bl       "calcPoseMatrix__8CollPartFR10Vector3<f>R7Matrixf"
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019F968
	lfs      f1, 0x138(r31)
	lfs      f0, 0x168(r31)
	fmuls    f0, f1, f0
	stfs     f0, 0x138(r31)
	lfs      f1, 0x148(r31)
	lfs      f0, 0x168(r31)
	fmuls    f0, f1, f0
	stfs     f0, 0x148(r31)
	lfs      f1, 0x158(r31)
	lfs      f0, 0x168(r31)
	fmuls    f0, f1, f0
	stfs     f0, 0x158(r31)
	lfs      f1, 0x13c(r31)
	lfs      f0, 0x16c(r31)
	fmuls    f0, f1, f0
	stfs     f0, 0x13c(r31)
	lfs      f1, 0x14c(r31)
	lfs      f0, 0x16c(r31)
	fmuls    f0, f1, f0
	stfs     f0, 0x14c(r31)
	lfs      f1, 0x15c(r31)
	lfs      f0, 0x16c(r31)
	fmuls    f0, f1, f0
	stfs     f0, 0x15c(r31)
	lfs      f1, 0x140(r31)
	lfs      f0, 0x170(r31)
	fmuls    f0, f1, f0
	stfs     f0, 0x140(r31)
	lfs      f1, 0x150(r31)
	lfs      f0, 0x170(r31)
	fmuls    f0, f1, f0
	stfs     f0, 0x150(r31)
	lfs      f1, 0x160(r31)
	lfs      f0, 0x170(r31)
	fmuls    f0, f1, f0
	stfs     f0, 0x160(r31)
	b        lbl_8019F968

lbl_8019F8B0:
	addi     r4, r1, 0x44
	addi     r5, r31, 0x138
	bl       "calcPoseMatrix__8CollPartFR10Vector3<f>R7Matrixf"
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019F968
	lfs      f1, 0x138(r31)
	lfs      f0, 0x168(r31)
	fmuls    f0, f1, f0
	stfs     f0, 0x138(r31)
	lfs      f1, 0x148(r31)
	lfs      f0, 0x168(r31)
	fmuls    f0, f1, f0
	stfs     f0, 0x148(r31)
	lfs      f1, 0x158(r31)
	lfs      f0, 0x168(r31)
	fmuls    f0, f1, f0
	stfs     f0, 0x158(r31)
	lfs      f1, 0x13c(r31)
	lfs      f0, 0x16c(r31)
	fmuls    f0, f1, f0
	stfs     f0, 0x13c(r31)
	lfs      f1, 0x14c(r31)
	lfs      f0, 0x16c(r31)
	fmuls    f0, f1, f0
	stfs     f0, 0x14c(r31)
	lfs      f1, 0x15c(r31)
	lfs      f0, 0x16c(r31)
	fmuls    f0, f1, f0
	stfs     f0, 0x15c(r31)
	lfs      f1, 0x140(r31)
	lfs      f0, 0x170(r31)
	fmuls    f0, f1, f0
	stfs     f0, 0x140(r31)
	lfs      f1, 0x150(r31)
	lfs      f0, 0x170(r31)
	fmuls    f0, f1, f0
	stfs     f0, 0x150(r31)
	lfs      f1, 0x160(r31)
	lfs      f0, 0x170(r31)
	fmuls    f0, f1, f0
	stfs     f0, 0x160(r31)

lbl_8019F968:
	mr       r3, r31
	addi     r4, r1, 0x44
	li       r5, 1
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	lfs      f0, 0x44(r1)
	stfs     f0, 0x144(r31)
	lfs      f0, 0x48(r1)
	stfs     f0, 0x154(r31)
	lfs      f0, 0x4c(r1)
	stfs     f0, 0x164(r31)
	b        lbl_8019FA80

lbl_8019F994:
	lha      r4, 0x110(r31)
	cmpwi    r4, -1
	beq      lbl_8019FA80
	lwz      r3, 0xf4(r31)
	addi     r5, r1, 0x2c
	lwz      r12, 0(r3)
	lwz      r12, 0x180(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xf4(r31)
	addi     r3, r1, 8
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0xc(r1)
	lfs      f0, 0x30(r1)
	lfs      f2, 0x10(r1)
	fsubs    f3, f1, f0
	lfs      f0, 0x34(r1)
	lfs      f1, 8(r1)
	fsubs    f2, f2, f0
	lfs      f0, 0x2c(r1)
	fmuls    f3, f3, f3
	fsubs    f1, f1, f0
	lfs      f0, lbl_8051904C@sda21(r2)
	fmuls    f4, f2, f2
	fmadds   f3, f1, f1, f3
	fadds    f3, f4, f3
	fcmpo    cr0, f3, f0
	ble      lbl_8019FA20
	ble      lbl_8019FA24
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_8019FA24

lbl_8019FA20:
	fmr      f3, f0

lbl_8019FA24:
	lfs      f0, lbl_8051904C@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_8019FA40
	lfs      f0, lbl_80519040@sda21(r2)
	fdivs    f0, f0, f3
	fmuls    f1, f1, f0
	fmuls    f2, f2, f0

lbl_8019FA40:
	lis      r3, atanTable___5JMath@ha
	addi     r3, r3, atanTable___5JMath@l
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	fmr      f31, f1
	mr       r3, r31
	addi     r4, r1, 0x2c
	li       r5, 1
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	lfs      f0, lbl_8051904C@sda21(r2)
	addi     r3, r31, 0x138
	stfs     f31, 0x24(r1)
	addi     r4, r1, 0x2c
	addi     r5, r1, 0x20
	stfs     f0, 0x20(r1)
	stfs     f0, 0x28(r1)
	bl       "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"

lbl_8019FA80:
	psq_l    f31, 264(r1), 0, qr0
	lwz      r0, 0x114(r1)
	lfd      f31, 0x100(r1)
	lwz      r31, 0xfc(r1)
	mtlr     r0
	addi     r1, r1, 0x110
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	8019FA9C
 * Size:	00000C
 */
void Creature::clearCapture(void)
{
	// Generated from stw r0, 0xB8(r3)
	_B8 = 0;
}

/*
 * --INFO--
 * Address:	8019FAA8
 * Size:	000054
 */
void Creature::startCapture(Matrixf*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r4, 0xb8(r3)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x94(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019FAFC
 * Size:	0000A0
 */
void Creature::updateCapture(Matrixf&)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r4
	stw      r30, 0x48(r1)
	mr       r30, r3
	lwz      r3, 0xb8(r3)
	cmplwi   r3, 0
	beq      lbl_8019FB84
	addi     r5, r30, 0x138
	bl       PSMTXConcat
	addi     r3, r30, 0x138
	addi     r4, r1, 0x14
	bl       PSMTXCopy
	lfs      f0, 0x144(r30)
	mr       r3, r30
	addi     r4, r1, 8
	li       r5, 0
	stfs     f0, 8(r1)
	lfs      f0, 0x154(r30)
	stfs     f0, 0xc(r1)
	lfs      f0, 0x164(r30)
	stfs     f0, 0x10(r1)
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	addi     r3, r1, 0x14
	addi     r4, r30, 0x138
	bl       PSMTXCopy
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	lwz      r12, 0x98(r12)
	mtctr    r12
	bctrl

lbl_8019FB84:
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019FB9C
 * Size:	000058
 */
void Creature::endCapture(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 1
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r0, 0xb8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x9c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019FBF4
 * Size:	000068
 */
void Stickers::initialise(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	li       r3, 0x1b8
	stw      r0, 0x14(r1)
	li       r0, 0x6e
	stb      r4, mutex__Q24Game8Stickers@sda21(r13)
	stw      r0, maxBuffer__Q24Game8Stickers@sda21(r13)
	stw      r4, numBuffer__Q24Game8Stickers@sda21(r13)
	bl       __nwa__FUl
	li       r5, 0
	stw      r3, buffer__Q24Game8Stickers@sda21(r13)
	mr       r4, r5
	li       r6, 0
	b        lbl_8019FC40

lbl_8019FC30:
	lwz      r3, buffer__Q24Game8Stickers@sda21(r13)
	addi     r6, r6, 1
	stwx     r4, r3, r5
	addi     r5, r5, 4

lbl_8019FC40:
	lwz      r0, maxBuffer__Q24Game8Stickers@sda21(r13)
	cmpw     r6, r0
	blt      lbl_8019FC30
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019FC5C
 * Size:	000108
 */
Stickers::Stickers(Game::Creature*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, lbl_8047F218@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	mr       r0, r31
	stw      r30, 0x18(r1)
	addi     r30, r5, lbl_8047F218@l
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r0
	bl       __ct__5CNodeFv
	lis      r3, __vt__16GenericContainer@ha
	lis      r4, "__vt__27Container<Q24Game8Creature>"@ha
	addi     r0, r3, __vt__16GenericContainer@l
	lis      r3, __vt__Q24Game8Stickers@ha
	stw      r0, 0(r28)
	addi     r5, r4, "__vt__27Container<Q24Game8Creature>"@l
	li       r4, 0
	addi     r0, r3, __vt__Q24Game8Stickers@l
	stw      r5, 0(r28)
	stb      r4, 0x18(r28)
	stw      r0, 0(r31)
	lbz      r0, mutex__Q24Game8Stickers@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8019FCE0
	addi     r3, r30, 0x10
	addi     r5, r30, 0x24
	li       r4, 0x200
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8019FCE0:
	li       r3, 1
	li       r0, 0
	stb      r3, mutex__Q24Game8Stickers@sda21(r13)
	lwz      r29, 0xf0(r29)
	stw      r0, numBuffer__Q24Game8Stickers@sda21(r13)
	b        lbl_8019FD38

lbl_8019FCF8:
	lwz      r3, numBuffer__Q24Game8Stickers@sda21(r13)
	lwz      r0, maxBuffer__Q24Game8Stickers@sda21(r13)
	cmpw     r3, r0
	blt      lbl_8019FD1C
	addi     r3, r30, 0x10
	addi     r5, r30, 0x30
	li       r4, 0x207
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8019FD1C:
	lwz      r4, numBuffer__Q24Game8Stickers@sda21(r13)
	lwz      r5, buffer__Q24Game8Stickers@sda21(r13)
	addi     r3, r4, 1
	slwi     r0, r4, 2
	stw      r3, numBuffer__Q24Game8Stickers@sda21(r13)
	stwx     r29, r5, r0
	lwz      r29, 0xfc(r29)

lbl_8019FD38:
	cmplwi   r29, 0
	bne      lbl_8019FCF8
	lwz      r0, 0x24(r1)
	mr       r3, r31
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
 * Address:	8019FD64
 * Size:	00008C
 */
Stickers::~Stickers(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8019FDD4
	lis      r4, __vt__Q24Game8Stickers@ha
	li       r0, 0
	addi     r4, r4, __vt__Q24Game8Stickers@l
	stw      r4, 0(r30)
	stb      r0, mutex__Q24Game8Stickers@sda21(r13)
	stw      r0, numBuffer__Q24Game8Stickers@sda21(r13)
	beq      lbl_8019FDC4
	lis      r4, "__vt__27Container<Q24Game8Creature>"@ha
	addi     r0, r4, "__vt__27Container<Q24Game8Creature>"@l
	stw      r0, 0(r30)
	beq      lbl_8019FDC4
	lis      r5, __vt__16GenericContainer@ha
	li       r4, 0
	addi     r0, r5, __vt__16GenericContainer@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_8019FDC4:
	extsh.   r0, r31
	ble      lbl_8019FDD4
	mr       r3, r30
	bl       __dl__FPv

lbl_8019FDD4:
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
 * Address:	8019FDF0
 * Size:	000070
 */
void Stickers::get(void*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r3, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	blt      lbl_8019FE1C
	lwz      r0, numBuffer__Q24Game8Stickers@sda21(r13)
	cmpw     r31, r0
	bge      lbl_8019FE1C
	li       r3, 1

lbl_8019FE1C:
	clrlwi.  r0, r3, 0x18
	bne      lbl_8019FE40
	lis      r3, lbl_8047F228@ha
	lis      r5, lbl_8047F23C@ha
	addi     r3, r3, lbl_8047F228@l
	li       r4, 0x217
	addi     r5, r5, lbl_8047F23C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8019FE40:
	lwz      r3, buffer__Q24Game8Stickers@sda21(r13)
	slwi     r0, r31, 2
	lwzx     r3, r3, r0
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019FE60
 * Size:	000008
 */
void Stickers::getNext(void*)
{
	/*
	addi     r3, r4, 1
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019FE68
 * Size:	000008
 */
u32 Stickers::getStart(void) { return 0x0; }

/*
 * --INFO--
 * Address:	8019FE70
 * Size:	000008
 */
void Stickers::getEnd(void)
{
	/*
	lwz      r3, numBuffer__Q24Game8Stickers@sda21(r13)
	blr
	*/
}
} // namespace Game
