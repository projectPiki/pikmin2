#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80483A48
    lbl_80483A48:
        .asciz "gameTekiStat.cpp"
        .skip 3
    .global lbl_80483A5C
    lbl_80483A5C:
        .asciz "P2Assert"
        .skip 3
*/

namespace Game {

/*
 * --INFO--
 * Address:	8023381C
 * Size:	000034
 */
void TekiStat::Info::incKilled(void)
{
	/*
	lwz      r4, gameSystem__4Game@sda21(r13)
	cmplwi   r4, 0
	beqlr
	lwz      r0, 0x44(r4)
	cmpwi    r0, 0
	bnelr
	lwz      r4, 0(r3)
	addi     r0, r4, 1
	stw      r0, 0(r3)
	lbz      r0, 8(r3)
	ori      r0, r0, 1
	stb      r0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80233850
 * Size:	000028
 */
void TekiStat::Info::incKillPikmin(void)
{
	/*
	lwz      r4, gameSystem__4Game@sda21(r13)
	cmplwi   r4, 0
	beqlr
	lwz      r0, 0x44(r4)
	cmpwi    r0, 0
	bnelr
	lwz      r4, 4(r3)
	addi     r0, r4, 1
	stw      r0, 4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80233878
 * Size:	000010
 */
TekiStat::Mgr::Mgr(void)
{
	/*
	li       r0, 0
	stw      r0, 0(r3)
	stw      r0, 4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80233888
 * Size:	000084
 */
void TekiStat::Mgr::whatsNew(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	mr       r30, r3
	b        lbl_802338E4

lbl_802338A8:
	mr       r3, r30
	mr       r4, r31
	bl       getTekiInfo__Q34Game8TekiStat3MgrFi
	lbz      r0, 8(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_802338E0
	mr       r3, r30
	mr       r4, r31
	bl       getTekiInfo__Q34Game8TekiStat3MgrFi
	lbz      r0, 8(r3)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	bne      lbl_802338E0
	li       r3, 1
	b        lbl_802338F4

lbl_802338E0:
	addi     r31, r31, 1

lbl_802338E4:
	lwz      r0, 4(r30)
	cmpw     r31, r0
	blt      lbl_802338A8
	li       r3, 0

lbl_802338F4:
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
 * Address:	8023390C
 * Size:	000078
 */
void TekiStat::Mgr::setOutOfDateAll(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	mr       r30, r3
	b        lbl_80233960

lbl_8023392C:
	mr       r3, r30
	mr       r4, r31
	bl       getTekiInfo__Q34Game8TekiStat3MgrFi
	lbz      r0, 8(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8023395C
	mr       r3, r30
	mr       r4, r31
	bl       getTekiInfo__Q34Game8TekiStat3MgrFi
	lbz      r0, 8(r3)
	ori      r0, r0, 2
	stb      r0, 8(r3)

lbl_8023395C:
	addi     r31, r31, 1

lbl_80233960:
	lwz      r0, 4(r30)
	cmpw     r31, r0
	blt      lbl_8023392C
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
 * Address:	80233984
 * Size:	0000C8
 */
void TekiStat::Mgr::clear(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	li       r3, 0
	lwz      r0, 0(r29)
	cmplwi   r0, 0
	beq      lbl_802339C0
	lwz      r0, 4(r29)
	cmpwi    r0, 0
	beq      lbl_802339C0
	li       r3, 1

lbl_802339C0:
	clrlwi.  r0, r3, 0x18
	bne      lbl_802339E4
	lis      r3, lbl_80483A48@ha
	lis      r5, lbl_80483A5C@ha
	addi     r3, r3, lbl_80483A48@l
	li       r4, 0x3c
	addi     r5, r5, lbl_80483A5C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_802339E4:
	li       r30, 0
	li       r31, 0
	b        lbl_80233A24

lbl_802339F0:
	mr       r3, r29
	mr       r4, r30
	bl       getTekiInfo__Q34Game8TekiStat3MgrFi
	stw      r31, 0(r3)
	mr       r3, r29
	mr       r4, r30
	bl       getTekiInfo__Q34Game8TekiStat3MgrFi
	stw      r31, 4(r3)
	mr       r3, r29
	mr       r4, r30
	bl       getTekiInfo__Q34Game8TekiStat3MgrFi
	stb      r31, 8(r3)
	addi     r30, r30, 1

lbl_80233A24:
	lwz      r0, 4(r29)
	cmpw     r30, r0
	blt      lbl_802339F0
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
 * Address:	80233A4C
 * Size:	000060
 */
void TekiStat::Mgr::allocate(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mulli    r3, r31, 0xc
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q34Game8TekiStat4InfoFv@ha
	mr       r7, r31
	addi     r4, r4, __ct__Q34Game8TekiStat4InfoFv@l
	li       r5, 0
	li       r6, 0xc
	bl       __construct_new_array
	stw      r3, 0(r30)
	stw      r31, 4(r30)
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
 * Address:	80233AAC
 * Size:	000018
 */
TekiStat::Info::Info(void)
{
	/*
	li       r0, 0
	stb      r0, 8(r3)
	stw      r0, 4(r3)
	stw      r0, 0(r3)
	stb      r0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80233AC4
 * Size:	00007C
 */
void TekiStat::Mgr::getTekiInfo(int)
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
	blt      lbl_80233AF8
	lwz      r0, 4(r30)
	cmpw     r31, r0
	bge      lbl_80233AF8
	li       r3, 1

lbl_80233AF8:
	clrlwi.  r0, r3, 0x18
	bne      lbl_80233B1C
	lis      r3, lbl_80483A48@ha
	lis      r5, lbl_80483A5C@ha
	addi     r3, r3, lbl_80483A48@l
	li       r4, 0x4c
	addi     r5, r5, lbl_80483A5C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80233B1C:
	mulli    r0, r31, 0xc
	lwz      r3, 0(r30)
	add      r3, r3, r0
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
 * Size:	000058
 */
void TekiStat::Info::write(Stream&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void TekiStat::Info::read(Stream&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80233B40
 * Size:	0000C0
 */
void TekiStat::Mgr::write(Stream&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r28, r4
	mr       r27, r3
	lwz      r4, 4(r3)
	mr       r3, r28
	bl       writeInt__6StreamFi
	li       r29, 0
	li       r30, 0
	b        lbl_80233BE0

lbl_80233B70:
	cmpwi    r29, 0
	li       r0, 0
	blt      lbl_80233B88
	cmpw     r29, r3
	bge      lbl_80233B88
	li       r0, 1

lbl_80233B88:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80233BAC
	lis      r3, lbl_80483A48@ha
	lis      r5, lbl_80483A5C@ha
	addi     r3, r3, lbl_80483A48@l
	li       r4, 0x4c
	addi     r5, r5, lbl_80483A5C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80233BAC:
	lwz      r0, 0(r27)
	mr       r3, r28
	add      r31, r0, r30
	lwz      r4, 0(r31)
	bl       writeInt__6StreamFi
	lwz      r4, 4(r31)
	mr       r3, r28
	bl       writeInt__6StreamFi
	mr       r3, r28
	lbz      r4, 8(r31)
	bl       writeByte__6StreamFUc
	addi     r30, r30, 0xc
	addi     r29, r29, 1

lbl_80233BE0:
	lwz      r3, 4(r27)
	cmpw     r29, r3
	blt      lbl_80233B70
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80233C00
 * Size:	0000EC
 */
void TekiStat::Mgr::read(Stream&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r31, r4
	mr       r30, r3
	mr       r3, r31
	bl       readInt__6StreamFv
	lwz      r0, 4(r30)
	mr       r29, r3
	cmpw     r29, r0
	beq      lbl_80233C4C
	lis      r3, lbl_80483A48@ha
	lis      r5, lbl_80483A5C@ha
	addi     r3, r3, lbl_80483A48@l
	li       r4, 0x69
	addi     r5, r5, lbl_80483A5C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80233C4C:
	stw      r29, 4(r30)
	li       r27, 0
	li       r28, 0
	b        lbl_80233CCC

lbl_80233C5C:
	cmpwi    r27, 0
	li       r0, 0
	blt      lbl_80233C74
	cmpw     r27, r3
	bge      lbl_80233C74
	li       r0, 1

lbl_80233C74:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80233C98
	lis      r3, lbl_80483A48@ha
	lis      r5, lbl_80483A5C@ha
	addi     r3, r3, lbl_80483A48@l
	li       r4, 0x4c
	addi     r5, r5, lbl_80483A5C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80233C98:
	lwz      r0, 0(r30)
	mr       r3, r31
	add      r29, r0, r28
	bl       readInt__6StreamFv
	stw      r3, 0(r29)
	mr       r3, r31
	bl       readInt__6StreamFv
	stw      r3, 4(r29)
	mr       r3, r31
	bl       readByte__6StreamFv
	stb      r3, 8(r29)
	addi     r28, r28, 0xc
	addi     r27, r27, 1

lbl_80233CCC:
	lwz      r3, 4(r30)
	cmpw     r27, r3
	blt      lbl_80233C5C
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}
} // namespace Game
