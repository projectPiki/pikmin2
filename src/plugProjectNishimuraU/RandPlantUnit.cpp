#include "types.h"

/*
    Generated from dpostproc

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051BCF8
    lbl_8051BCF8:
        .4byte 0x47000000
        .4byte 0x00000000
    .global lbl_8051BD00
    lbl_8051BD00:
        .4byte 0x43300000
        .4byte 0x80000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	8029EF0C
 * Size:	00005C
 */
Cave::RandPlantUnit::RandPlantUnit(Game::Cave::MapUnitGenerator*)
{
	/*
	stw      r4, 0(r3)
	li       r0, 0
	stw      r0, 4(r3)
	stw      r0, 8(r3)
	lwz      r4, 0(r3)
	lwz      r4, 0x14(r4)
	lwz      r6, 0x10(r4)
	b        lbl_8029EF5C

lbl_8029EF2C:
	lwz      r4, 0x18(r6)
	lwz      r5, 0(r4)
	cmplwi   r5, 0
	beq      lbl_8029EF58
	lwz      r0, 0x20(r5)
	cmpwi    r0, 6
	bne      lbl_8029EF58
	lwz      r4, 8(r3)
	lwz      r0, 0x1c(r5)
	add      r0, r4, r0
	stw      r0, 8(r3)

lbl_8029EF58:
	lwz      r6, 4(r6)

lbl_8029EF5C:
	cmplwi   r6, 0
	bne      lbl_8029EF2C
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029EF68
 * Size:	0000DC
 */
void Cave::RandPlantUnit::setPlantSlot()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r27, 0x1c(r1)
	mr       r27, r3
	lwz      r3, 4(r3)
	lwz      r0, 8(r27)
	cmpw     r3, r0
	bge      lbl_8029F030
	li       r30, 0

lbl_8029EF90:
	li       r0, 0
	mr       r3, r27
	stw      r0, 8(r1)
	addi     r4, r1, 8
	bl getPlantSetMapNode__Q34Game4Cave13RandPlantUnitFPPQ34Game4Cave7BaseGen
	lwz      r4, 8(r1)
	mr       r29, r3
	mr       r3, r27
	bl       getPlantUnit__Q34Game4Cave13RandPlantUnitFPQ34Game4Cave7BaseGen
	or.      r28, r3, r3
	beq      lbl_8029F030
	cmplwi   r29, 0
	beq      lbl_8029F030
	li       r3, 0x38
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_8029EFE8
	lwz      r5, 8(r1)
	mr       r4, r28
	li       r6, 1
	bl
__ct__Q34Game4Cave9EnemyNodeFPQ34Game4Cave9EnemyUnitPQ34Game4Cave7BaseGeni mr
r31, r3

lbl_8029EFE8:
	mr       r3, r31
	mr       r4, r29
	bl       makeGlobalData__Q34Game4Cave9EnemyNodeFPQ34Game4Cave7MapNode
	lwz      r3, 0x1c(r29)
	mr       r4, r31
	bl       add__5CNodeFP5CNode
	lwz      r3, 4(r27)
	addi     r0, r3, 1
	stw      r0, 4(r27)
	lwz      r3, 4(r27)
	lwz      r0, 8(r27)
	cmpw     r3, r0
	blt      lbl_8029F024
	b        lbl_8029F030
	b        lbl_8029F030

lbl_8029F024:
	addi     r30, r30, 1
	cmpwi    r30, 0x64
	blt      lbl_8029EF90

lbl_8029F030:
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029F044
 * Size:	000134
 */
void Cave::RandPlantUnit::getPlantSetMapNode(Game::Cave::BaseGen**)
{
	/*
	stwu     r1, -0x1050(r1)
	mflr     r0
	stw      r0, 0x1054(r1)
	stmw     r23, 0x102c(r1)
	mr       r23, r3
	mr       r31, r4
	addi     r28, r1, 0x808
	addi     r27, r1, 8
	li       r26, 0
	lwz      r3, 0(r3)
	lwz      r3, 0x28(r3)
	lwz      r25, 0x10(r3)
	b        lbl_8029F0E8

lbl_8029F078:
	lwz      r3, 0x18(r25)
	bl       getBaseGen__Q34Game4Cave8UnitInfoFv
	cmplwi   r3, 0
	beq      lbl_8029F0E4
	lwz      r24, 0x10(r3)
	mr       r30, r28
	mr       r29, r27
	b        lbl_8029F0DC

lbl_8029F098:
	lwz      r0, 0x18(r24)
	cmpwi    r0, 6
	bne      lbl_8029F0D8
	mr       r3, r23
	mr       r4, r25
	mr       r5, r24
	bl
isPlantSet__Q34Game4Cave13RandPlantUnitFPQ34Game4Cave7MapNodePQ34Game4Cave7BaseGen
	clrlwi.  r0, r3, 0x18
	beq      lbl_8029F0D8
	stw      r25, 0(r30)
	addi     r26, r26, 1
	addi     r30, r30, 4
	addi     r28, r28, 4
	stw      r24, 0(r29)
	addi     r29, r29, 4
	addi     r27, r27, 4

lbl_8029F0D8:
	lwz      r24, 4(r24)

lbl_8029F0DC:
	cmplwi   r24, 0
	bne      lbl_8029F098

lbl_8029F0E4:
	lwz      r25, 4(r25)

lbl_8029F0E8:
	cmplwi   r25, 0
	bne      lbl_8029F078
	cmpwi    r26, 0
	beq      lbl_8029F160
	bl       rand
	lis      r5, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x100c(r1)
	xoris    r0, r26, 0x8000
	lfd      f2, lbl_8051BD00@sda21(r2)
	addi     r4, r1, 8
	stw      r5, 0x1008(r1)
	addi     r3, r1, 0x808
	lfs      f0, lbl_8051BCF8@sda21(r2)
	lfd      f1, 0x1008(r1)
	stw      r0, 0x1014(r1)
	fsubs    f1, f1, f2
	stw      r5, 0x1010(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x1010(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x1018(r1)
	lwz      r0, 0x101c(r1)
	slwi     r5, r0, 2
	lwzx     r0, r4, r5
	lwzx     r3, r3, r5
	stw      r0, 0(r31)
	b        lbl_8029F164

lbl_8029F160:
	li       r3, 0

lbl_8029F164:
	lmw      r23, 0x102c(r1)
	lwz      r0, 0x1054(r1)
	mtlr     r0
	addi     r1, r1, 0x1050
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029F178
 * Size:	000068
 */
void Cave::RandPlantUnit::getPlantUnit(Game::Cave::BaseGen*)
{
	/*
	cmplwi   r4, 0
	li       r6, 0
	beq      lbl_8029F1D8
	lwz      r4, 0(r3)
	lwz      r4, 0x14(r4)
	lwz      r7, 0x10(r4)
	b        lbl_8029F1D0

lbl_8029F194:
	lwz      r5, 0x18(r7)
	lwz      r4, 0(r5)
	cmplwi   r4, 0
	beq      lbl_8029F1CC
	lwz      r0, 0x20(r4)
	cmpwi    r0, 6
	bne      lbl_8029F1CC
	lwz      r4, 0x1c(r4)
	lwz      r0, 4(r3)
	add      r6, r6, r4
	cmpw     r0, r6
	bge      lbl_8029F1CC
	mr       r3, r5
	blr

lbl_8029F1CC:
	lwz      r7, 4(r7)

lbl_8029F1D0:
	cmplwi   r7, 0
	bne      lbl_8029F194

lbl_8029F1D8:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029F1E0
 * Size:	000048
 */
void Cave::RandPlantUnit::isPlantSet(Game::Cave::MapNode*, Game::Cave::BaseGen*)
{
	/*
	cmplwi   r5, 0
	beq      lbl_8029F218
	lwz      r3, 0x1c(r4)
	lwz      r3, 0x10(r3)
	b        lbl_8029F20C

lbl_8029F1F4:
	lwz      r0, 0x1c(r3)
	cmplw    r0, r5
	bne      lbl_8029F208
	li       r3, 0
	blr

lbl_8029F208:
	lwz      r3, 4(r3)

lbl_8029F20C:
	cmplwi   r3, 0
	bne      lbl_8029F1F4
	b        lbl_8029F220

lbl_8029F218:
	li       r3, 0
	blr

lbl_8029F220:
	li       r3, 1
	blr
	*/
}
} // namespace Game
