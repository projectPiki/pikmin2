#include "types.h"

/*
    Generated from dpostproc

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051D4C0
    lbl_8051D4C0:
        .4byte 0x6974656D
        .4byte 0x00000000
    .global lbl_8051D4C8
    lbl_8051D4C8:
        .4byte 0x47000000
        .4byte 0x00000000
    .global lbl_8051D4D0
    lbl_8051D4D0:
        .4byte 0x43300000
        .4byte 0x80000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	80300E68
 * Size:	00002C
 */
Cave::RandCapEnemyUnit::RandCapEnemyUnit(Game::Cave::MapUnitGenerator*)
{
	/*
	stw      r4, 0(r3)
	li       r0, 0
	lwz      r4, 0(r3)
	lwz      r4, 0x18(r4)
	stw      r4, 8(r3)
	lwz      r4, 0(r3)
	lwz      r4, 0x1c(r4)
	stw      r4, 0xc(r3)
	stw      r0, 0x10(r3)
	stw      r0, 0x14(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80300E94
 * Size:	000008
 */
void Cave::RandCapEnemyUnit::setManageClassPtr(Game::Cave::RandItemUnit* a1)
{
	// Generated from stw r4, 0x4(r3)
	_04 = a1;
}

/*
 * --INFO--
 * Address:	80300E9C
 * Size:	000108
 */
void Cave::RandCapEnemyUnit::setCapEnemySlot()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r3, 0(r3)
	lwz      r31, 0x28(r3)
	lwz      r30, 0x10(r31)
	b        lbl_80300F1C

lbl_80300EC8:
	lwz      r3, 0x18(r30)
	bl       getUnitKind__Q34Game4Cave8UnitInfoFv
	cmpwi    r3, 0
	bne      lbl_80300F18
	mr       r3, r30
	bl       getUnitName__Q34Game4Cave7MapNodeFv
	addi     r4, r2, lbl_8051D4C0@sda21
	li       r5, 4
	bl       strncmp
	cmpwi    r3, 0
	bne      lbl_80300F18
	lwz      r3, 4(r29)
	mr       r4, r30
	bl isGroundCapEnemySetDone__Q34Game4Cave12RandItemUnitFPQ34Game4Cave7MapNode
	clrlwi.  r0, r3, 0x18
	bne      lbl_80300F18
	mr       r3, r29
	mr       r4, r30
	li       r5, 0
	bl
setCapCommonEnemySlot__Q34Game4Cave16RandCapEnemyUnitFPQ34Game4Cave7MapNodei

lbl_80300F18:
	lwz      r30, 4(r30)

lbl_80300F1C:
	cmplwi   r30, 0
	bne      lbl_80300EC8
	lwz      r30, 0x10(r31)
	b        lbl_80300F80

lbl_80300F2C:
	lwz      r3, 0x18(r30)
	bl       getUnitKind__Q34Game4Cave8UnitInfoFv
	cmpwi    r3, 0
	bne      lbl_80300F7C
	mr       r3, r30
	bl       getUnitName__Q34Game4Cave7MapNodeFv
	addi     r4, r2, lbl_8051D4C0@sda21
	li       r5, 4
	bl       strncmp
	cmpwi    r3, 0
	bne      lbl_80300F7C
	lwz      r3, 4(r29)
	mr       r4, r30
	bl isFallCapEnemySetDone__Q34Game4Cave12RandItemUnitFPQ34Game4Cave7MapNode
	clrlwi.  r0, r3, 0x18
	bne      lbl_80300F7C
	mr       r3, r29
	mr       r4, r30
	li       r5, 1
	bl
setCapCommonEnemySlot__Q34Game4Cave16RandCapEnemyUnitFPQ34Game4Cave7MapNodei

lbl_80300F7C:
	lwz      r30, 4(r30)

lbl_80300F80:
	cmplwi   r30, 0
	bne      lbl_80300F2C
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
 * Address:	80300FA4
 * Size:	0001BC
 */
void Cave::RandCapEnemyUnit::setCapCommonEnemySlot(Game::Cave::MapNode*, int)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	li       r0, 0
	stmw     r25, 0x24(r1)
	mr       r29, r5
	slwi     r6, r29, 2
	mr       r27, r3
	add      r31, r27, r6
	lis      r5, 0x66666667@ha
	mr       r28, r4
	addi     r12, r6, 0x10
	addi     r10, r5, 0x66666667@l
	li       r30, 0
	lwz      r3, 8(r31)
	lwz      r25, 0x10(r3)
	b        lbl_80301074

lbl_80300FE8:
	lwz      r5, 0x18(r25)
	lwz      r11, 0(r5)
	cmplwi   r11, 0
	beq      lbl_80301070
	lwz      r26, 0x1c(r11)
	lwzx     r3, r27, r12
	mulhw    r4, r10, r26
	srawi    r8, r4, 2
	srawi    r4, r4, 2
	srwi     r7, r4, 0x1f
	srwi     r9, r8, 0x1f
	add      r4, r4, r7
	add      r7, r8, r9
	mulli    r4, r4, 0xa
	add      r0, r0, r7
	subf     r4, r4, r26
	cmpw     r0, r3
	add      r30, r30, r4
	ble      lbl_80301070
	lwz      r3, 0x20(r11)
	li       r7, 1
	cmpwi    r3, 0
	bne      lbl_8030105C
	add      r3, r27, r6
	lwz      r3, 0x10(r3)
	subf     r0, r3, r0
	cmpwi    r0, 1
	ble      lbl_8030105C
	li       r7, 2

lbl_8030105C:
	mr       r3, r27
	mr       r4, r28
	mr       r6, r29
	bl
setCapEnemy__Q34Game4Cave16RandCapEnemyUnitFPQ34Game4Cave7MapNodePQ34Game4Cave9EnemyUnitii
	b        lbl_8030114C

lbl_80301070:
	lwz      r25, 4(r25)

lbl_80301074:
	cmplwi   r25, 0
	bne      lbl_80300FE8
	bl       rand
	lis      r6, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0xc(r1)
	xoris    r0, r30, 0x8000
	lwz      r5, 8(r31)
	lis      r3, 0x66666667@ha
	stw      r6, 8(r1)
	addi     r4, r3, 0x66666667@l
	lfd      f2, lbl_8051D4D0@sda21(r2)
	li       r9, 0
	lfd      f1, 8(r1)
	lfs      f0, lbl_8051D4C8@sda21(r2)
	fsubs    f1, f1, f2
	stw      r0, 0x14(r1)
	lwz      r10, 0x10(r5)
	stw      r6, 0x10(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r7, 0x1c(r1)
	b        lbl_80301144

lbl_803010E0:
	lwz      r5, 0x18(r10)
	lwz      r8, 0(r5)
	cmplwi   r8, 0
	beq      lbl_80301140
	lwz      r6, 0x1c(r8)
	mulhw    r0, r4, r6
	srawi    r0, r0, 2
	srwi     r3, r0, 0x1f
	add      r0, r0, r3
	mulli    r0, r0, 0xa
	subf     r0, r0, r6
	add      r9, r9, r0
	cmpw     r9, r7
	ble      lbl_80301140
	lwz      r0, 0x20(r8)
	li       r7, 1
	cmpwi    r0, 0
	bne      lbl_8030112C
	li       r7, 2

lbl_8030112C:
	mr       r3, r27
	mr       r4, r28
	mr       r6, r29
	bl
setCapEnemy__Q34Game4Cave16RandCapEnemyUnitFPQ34Game4Cave7MapNodePQ34Game4Cave9EnemyUnitii
	b        lbl_8030114C

lbl_80301140:
	lwz      r10, 4(r10)

lbl_80301144:
	cmplwi   r10, 0
	bne      lbl_803010E0

lbl_8030114C:
	lmw      r25, 0x24(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	80301160
 * Size:	000098
 */
void Cave::RandCapEnemyUnit::setCapEnemy(Game::Cave::MapNode*,
                                         Game::Cave::EnemyUnit*, int, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  rlwinm    r6,r6,2,0,29
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r25, r3
	  mr        r26, r4
	  mr        r27, r5
	  mr        r28, r7
	  addi      r30, r6, 0x10
	  li        r29, 0
	  b         .loc_0x7C

	.loc_0x30:
	  li        r3, 0x38
	  bl        -0x2DD2F0
	  mr.       r31, r3
	  beq-      .loc_0x54
	  mr        r4, r27
	  li        r5, 0
	  li        r6, 0x1
	  bl        -0xBCFE4
	  mr        r31, r3

	.loc_0x54:
	  mr        r3, r31
	  mr        r4, r26
	  bl        -0xBCF60
	  lwz       r3, 0x1C(r26)
	  mr        r4, r31
	  bl        0x110240
	  lwzx      r3, r25, r30
	  addi      r29, r29, 0x1
	  addi      r0, r3, 0x1
	  stwx      r0, r25, r30

	.loc_0x7C:
	  cmpw      r29, r28
	  blt+      .loc_0x30
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}
} // namespace Game
