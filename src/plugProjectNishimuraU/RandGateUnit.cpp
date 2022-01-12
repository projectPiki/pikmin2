#include "types.h"

/*
    Generated from dpostproc

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051A878
    lbl_8051A878:
        .4byte 0x47000000
        .4byte 0x00000000
    .global lbl_8051A880
    lbl_8051A880:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051A888
    lbl_8051A888:
        .float 1.0
    .global lbl_8051A88C
    lbl_8051A88C:
        .4byte 0x3F4CCCCD
    .global lbl_8051A890
    lbl_8051A890:
        .4byte 0x6974656D
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	8024FE70
 * Size:	000074
 */
Cave::RandGateUnit::RandGateUnit(Game::Cave::MapUnitGenerator*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	stw      r4, 0(r3)
	stw      r0, 0xc(r3)
	lwz      r3, 0(r3)
	lwz      r31, 8(r3)
	cmplwi   r31, 0
	beq      lbl_8024FEC0
	mr       r3, r31
	bl       getGateMax__Q34Game4Cave9FloorInfoFv
	stw      r3, 0x10(r30)
	mr       r3, r31
	bl       getGateWeightSum__Q34Game4Cave9FloorInfoFv
	stw      r3, 0x14(r30)
	b        lbl_8024FEC8

lbl_8024FEC0:
	stw      r0, 0x10(r30)
	stw      r0, 0x14(r30)

lbl_8024FEC8:
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
 * Address:	8024FEE4
 * Size:	00000C
 */
void Cave::RandGateUnit::setManageClassPtr(Game::Cave::RandMapScore*, Game::Cave::RandItemUnit*)
{
	/*
	.loc_0x0:
	  stw       r4, 0x4(r3)
	  stw       r5, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024FEF0
 * Size:	0000D8
 */
void Cave::RandGateUnit::setGateDoor()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r27, 0x1c(r1)
	mr       r27, r3
	lwz      r3, 0xc(r3)
	lwz      r0, 0x10(r27)
	cmpw     r3, r0
	bge      lbl_8024FFB4
	li       r30, 0

lbl_8024FF18:
	mr       r3, r27
	bl       getGateUnit__Q34Game4Cave12RandGateUnitFv
	mr       r0, r3
	mr       r3, r27
	mr       r29, r0
	addi     r4, r1, 8
	bl       getRoomNodePtr__Q34Game4Cave12RandGateUnitFRi
	cmplwi   r29, 0
	mr       r31, r3
	beq      lbl_8024FFB4
	cmplwi   r31, 0
	beq      lbl_8024FFB4
	lwz      r4, 8(r1)
	bl       getDoorDirect__Q34Game4Cave7MapNodeFi
	mr       r0, r3
	li       r3, 0x24
	mr       r28, r0
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8024FF7C
	lwz      r5, 8(r1)
	mr       r4, r29
	mr       r6, r28
	bl       __ct__Q34Game4Cave8GateNodeFPQ34Game4Cave8GateUnitii
	mr       r4, r3

lbl_8024FF7C:
	lwz      r3, 0x20(r31)
	bl       add__5CNodeFP5CNode
	lwz      r3, 0xc(r27)
	addi     r0, r3, 1
	stw      r0, 0xc(r27)
	lwz      r3, 0xc(r27)
	lwz      r0, 0x10(r27)
	cmpw     r3, r0
	blt      lbl_8024FFA8
	b        lbl_8024FFB4
	b        lbl_8024FFB4

lbl_8024FFA8:
	addi     r30, r30, 1
	cmpwi    r30, 0x64
	blt      lbl_8024FF18

lbl_8024FFB4:
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024FFC8
 * Size:	0000D4
 */
void Cave::RandGateUnit::getGateUnit()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	li       r29, 0
	lwz      r4, 0(r3)
	lwz      r31, 0x14(r3)
	lwz      r30, 0x20(r4)
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0xc(r1)
	xoris    r0, r31, 0x8000
	lfd      f2, lbl_8051A880@sda21(r2)
	stw      r4, 8(r1)
	lfs      f0, lbl_8051A878@sda21(r2)
	lfd      f1, 8(r1)
	stw      r0, 0x14(r1)
	fsubs    f1, f1, f2
	lwz      r6, 0x10(r30)
	stw      r4, 0x10(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r4, 0x1c(r1)
	b        lbl_80250074

lbl_80250044:
	lwz      r3, 0x18(r6)
	lwz      r5, 0(r3)
	cmplwi   r5, 0
	beq      lbl_80250060
	lwz      r0, 0x20(r5)
	add      r29, r29, r0
	b        lbl_80250064

lbl_80250060:
	addi     r29, r29, 1

lbl_80250064:
	cmpw     r29, r4
	ble      lbl_80250070
	b        lbl_80250080

lbl_80250070:
	lwz      r6, 4(r6)

lbl_80250074:
	cmplwi   r6, 0
	bne      lbl_80250044
	li       r3, 0

lbl_80250080:
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
 * Address:	8025009C
 * Size:	0000BC
 */
void Cave::RandGateUnit::getRoomNodePtr(int&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	bl       getItemSetCapDoor__Q34Game4Cave12RandGateUnitFRi
	cmplwi   r3, 0
	beq      lbl_802500C8
	b        lbl_80250140

lbl_802500C8:
	mr       r3, r30
	mr       r4, r31
	bl       getRoomMinScoreDoor__Q34Game4Cave12RandGateUnitFRi
	cmplwi   r3, 0
	beq      lbl_802500E0
	b        lbl_80250140

lbl_802500E0:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_8051A880@sda21(r2)
	stw      r0, 8(r1)
	lfs      f2, lbl_8051A888@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f1, lbl_8051A878@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051A88C@sda21(r2)
	fmuls    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80250134
	mr       r3, r30
	mr       r4, r31
	bl       getRoomLowScoreDoor__Q34Game4Cave12RandGateUnitFRi
	cmplwi   r3, 0
	beq      lbl_80250134
	b        lbl_80250140

lbl_80250134:
	mr       r3, r30
	mr       r4, r31
	bl       getRandomScoreDoor__Q34Game4Cave12RandGateUnitFRi

lbl_80250140:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80250158
 * Size:	000160
 */
void Cave::RandGateUnit::getItemSetCapDoor(int&)
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
	b        lbl_80250228

lbl_8025018C:
	lwz      r3, 0x18(r25)
	bl       getUnitKind__Q34Game4Cave8UnitInfoFv
	cmpwi    r3, 0
	bne      lbl_80250224
	mr       r3, r25
	bl       getUnitName__Q34Game4Cave7MapNodeFv
	addi     r4, r2, lbl_8051A890@sda21
	li       r5, 4
	bl       strncmp
	cmpwi    r3, 0
	bne      lbl_80250224
	lwz      r3, 8(r23)
	mr       r4, r25
	li       r5, 0
	bl
isItemSetDone__Q34Game4Cave12RandItemUnitFPQ34Game4Cave7MapNodePQ34Game4Cave7BaseGen
	clrlwi.  r0, r3, 0x18
	beq      lbl_80250224
	mr       r30, r28
	mr       r29, r27
	li       r24, 0
	b        lbl_80250214

lbl_802501E0:
	mr       r3, r25
	mr       r4, r24
	bl       isGateSetDoor__Q34Game4Cave7MapNodeFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80250210
	stw      r25, 0(r30)
	addi     r26, r26, 1
	addi     r30, r30, 4
	addi     r28, r28, 4
	stw      r24, 0(r29)
	addi     r29, r29, 4
	addi     r27, r27, 4

lbl_80250210:
	addi     r24, r24, 1

lbl_80250214:
	mr       r3, r25
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	cmpw     r24, r3
	blt      lbl_802501E0

lbl_80250224:
	lwz      r25, 4(r25)

lbl_80250228:
	cmplwi   r25, 0
	bne      lbl_8025018C
	cmpwi    r26, 0
	beq      lbl_802502A0
	bl       rand
	lis      r5, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x100c(r1)
	xoris    r0, r26, 0x8000
	lfd      f2, lbl_8051A880@sda21(r2)
	addi     r4, r1, 8
	stw      r5, 0x1008(r1)
	addi     r3, r1, 0x808
	lfs      f0, lbl_8051A878@sda21(r2)
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
	b        lbl_802502A4

lbl_802502A0:
	li       r3, 0

lbl_802502A4:
	lmw      r23, 0x102c(r1)
	lwz      r0, 0x1054(r1)
	mtlr     r0
	addi     r1, r1, 0x1050
	blr
	*/
}

/*
 * --INFO--
 * Address:	802502B8
 * Size:	0000E4
 */
void Cave::RandGateUnit::getRoomMinScoreDoor(int&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r26, r3
	mr       r27, r4
	lwz      r3, 0(r3)
	lwz      r3, 0x28(r3)
	lwz      r30, 0x10(r3)
	b        lbl_8025037C

lbl_802502E0:
	lwz      r3, 0x18(r30)
	bl       getUnitKind__Q34Game4Cave8UnitInfoFv
	cmpwi    r3, 1
	bne      lbl_80250378
	lwz      r3, 4(r26)
	li       r4, 0
	bl       getFixObjNode__Q34Game4Cave12RandMapScoreFi
	cmplw    r30, r3
	beq      lbl_80250378
	lis      r3, 0x0001F400@ha
	li       r28, 0
	addi     r29, r3, 0x0001F400@l
	li       r31, 0
	b        lbl_8025033C

lbl_80250318:
	lwz      r3, 0x28(r30)
	addi     r0, r31, 8
	lwzx     r0, r3, r0
	cmpw     r0, r29
	bge      lbl_80250334
	mr       r29, r0
	stw      r28, 0(r27)

lbl_80250334:
	addi     r31, r31, 0xc
	addi     r28, r28, 1

lbl_8025033C:
	mr       r3, r30
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	cmpw     r28, r3
	blt      lbl_80250318
	lis      r3, 0x0001F400@ha
	addi     r0, r3, 0x0001F400@l
	cmpw     r29, r0
	bge      lbl_80250378
	lwz      r4, 0(r27)
	mr       r3, r30
	bl       isGateSetDoor__Q34Game4Cave7MapNodeFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80250378
	mr       r3, r30
	b        lbl_80250388

lbl_80250378:
	lwz      r30, 4(r30)

lbl_8025037C:
	cmplwi   r30, 0
	bne      lbl_802502E0
	li       r3, 0

lbl_80250388:
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8025039C
 * Size:	000218
 */
void Cave::RandGateUnit::getRoomLowScoreDoor(int&)
{
	/*
	stwu     r1, -0x1860(r1)
	mflr     r0
	stw      r0, 0x1864(r1)
	stmw     r18, 0x1828(r1)
	mr       r18, r4
	li       r23, 0
	li       r22, 0
	li       r21, 0
	lwz      r3, 0(r3)
	lwz      r19, 0x28(r3)
	lwz      r24, 0x10(r19)
	b        lbl_80250438

lbl_802503CC:
	lwz      r3, 0x18(r24)
	bl       getUnitKind__Q34Game4Cave8UnitInfoFv
	cmpwi    r3, 1
	bne      lbl_80250434
	li       r25, 0
	li       r20, 0
	b        lbl_80250424

lbl_802503E8:
	lwz      r3, 0x28(r24)
	addi     r0, r20, 8
	lwzx     r0, r3, r0
	cmpw     r0, r21
	ble      lbl_8025041C
	mr       r3, r24
	mr       r4, r25
	bl       isGateSetDoor__Q34Game4Cave7MapNodeFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8025041C
	lwz      r3, 0x28(r24)
	addi     r0, r20, 8
	lwzx     r21, r3, r0

lbl_8025041C:
	addi     r20, r20, 0xc
	addi     r25, r25, 1

lbl_80250424:
	mr       r3, r24
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	cmpw     r25, r3
	blt      lbl_802503E8

lbl_80250434:
	lwz      r24, 4(r24)

lbl_80250438:
	cmplwi   r24, 0
	bne      lbl_802503CC
	addi     r24, r1, 8
	lwz      r20, 0x10(r19)
	mr       r25, r24
	addi     r27, r1, 0x1008
	addi     r26, r1, 0x808
	b        lbl_802504F4

lbl_80250458:
	lwz      r3, 0x18(r20)
	bl       getUnitKind__Q34Game4Cave8UnitInfoFv
	cmpwi    r3, 1
	bne      lbl_802504F0
	mr       r31, r27
	mr       r30, r26
	mr       r28, r25
	li       r19, 0
	li       r29, 0
	b        lbl_802504E0

lbl_80250480:
	mr       r3, r20
	mr       r4, r19
	bl       isGateSetDoor__Q34Game4Cave7MapNodeFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_802504D8
	lwz      r4, 0x28(r20)
	addi     r3, r29, 8
	stw      r20, 0(r31)
	addi     r0, r21, 1
	lwzx     r3, r4, r3
	addi     r31, r31, 4
	stw      r19, 0(r30)
	addi     r30, r30, 4
	subf     r0, r3, r0
	addi     r27, r27, 4
	stw      r0, 0(r28)
	addi     r26, r26, 4
	addi     r25, r25, 4
	addi     r23, r23, 1
	lwz      r0, 0(r28)
	addi     r28, r28, 4
	add      r22, r22, r0

lbl_802504D8:
	addi     r29, r29, 0xc
	addi     r19, r19, 1

lbl_802504E0:
	mr       r3, r20
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	cmpw     r19, r3
	blt      lbl_80250480

lbl_802504F0:
	lwz      r20, 4(r20)

lbl_802504F4:
	cmplwi   r20, 0
	bne      lbl_80250458
	cmpwi    r22, 0
	beq      lbl_8025059C
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x180c(r1)
	xoris    r0, r22, 0x8000
	lfd      f2, lbl_8051A880@sda21(r2)
	li       r5, 0
	stw      r4, 0x1808(r1)
	li       r6, 0
	lfs      f0, lbl_8051A878@sda21(r2)
	lfd      f1, 0x1808(r1)
	stw      r0, 0x1814(r1)
	fsubs    f1, f1, f2
	stw      r4, 0x1810(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x1810(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x1818(r1)
	lwz      r3, 0x181c(r1)
	mtctr    r23
	cmpwi    r23, 0
	ble      lbl_8025059C

lbl_80250564:
	lwz      r0, 0(r24)
	add      r5, r5, r0
	cmpw     r5, r3
	ble      lbl_80250590
	slwi     r4, r6, 2
	addi     r3, r1, 0x808
	lwzx     r0, r3, r4
	addi     r3, r1, 0x1008
	lwzx     r3, r3, r4
	stw      r0, 0(r18)
	b        lbl_802505A0

lbl_80250590:
	addi     r24, r24, 4
	addi     r6, r6, 1
	bdnz     lbl_80250564

lbl_8025059C:
	li       r3, 0

lbl_802505A0:
	lmw      r18, 0x1828(r1)
	lwz      r0, 0x1864(r1)
	mtlr     r0
	addi     r1, r1, 0x1860
	blr
	*/
}

/*
 * --INFO--
 * Address:	802505B4
 * Size:	000270
 */
void Cave::RandGateUnit::getRandomScoreDoor(int&)
{
	/*
	stwu     r1, -0x3050(r1)
	mflr     r0
	stw      r0, 0x3054(r1)
	stmw     r21, 0x3024(r1)
	mr       r28, r4
	li       r31, 0
	li       r27, 0
	li       r30, 0
	lwz      r3, 0(r3)
	lwz      r3, 0x28(r3)
	lwz      r29, 0x10(r3)
	b        lbl_80250760

lbl_802505E4:
	lwz      r3, 0x18(r29)
	bl       getUnitKind__Q34Game4Cave8UnitInfoFv
	mr       r26, r3
	mr       r3, r29
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	cmpwi    r26, 1
	mr       r25, r3
	bne      lbl_80250670
	addi     r26, r1, 0x2008
	addi     r24, r1, 0x1008
	addi     r23, r1, 8
	li       r22, 0
	add      r26, r26, r27
	add      r24, r24, r27
	add      r23, r23, r27
	b        lbl_80250664

lbl_80250624:
	mr       r3, r29
	mr       r4, r22
	bl       isGateSetDoor__Q34Game4Cave7MapNodeFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80250660
	stw      r25, 0(r23)
	addi     r31, r31, 1
	addi     r27, r27, 4
	lwz      r0, 0(r23)
	addi     r23, r23, 4
	stw      r29, 0(r26)
	addi     r26, r26, 4
	add      r30, r30, r0
	stw      r22, 0(r24)
	addi     r24, r24, 4

lbl_80250660:
	addi     r22, r22, 1

lbl_80250664:
	cmpw     r22, r25
	blt      lbl_80250624
	b        lbl_8025075C

lbl_80250670:
	cmpwi    r26, 2
	bne      lbl_802506EC
	li       r0, 0xa
	addi     r23, r1, 0x2008
	divw     r26, r0, r25
	addi     r24, r1, 0x1008
	addi     r22, r1, 8
	add      r23, r23, r27
	add      r24, r24, r27
	add      r22, r22, r27
	li       r21, 0
	b        lbl_802506E0

lbl_802506A0:
	mr       r3, r29
	mr       r4, r21
	bl       isGateSetDoor__Q34Game4Cave7MapNodeFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_802506DC
	stw      r26, 0(r22)
	addi     r31, r31, 1
	addi     r27, r27, 4
	lwz      r0, 0(r22)
	addi     r22, r22, 4
	stw      r29, 0(r23)
	addi     r23, r23, 4
	add      r30, r30, r0
	stw      r21, 0(r24)
	addi     r24, r24, 4

lbl_802506DC:
	addi     r21, r21, 1

lbl_802506E0:
	cmpw     r21, r25
	blt      lbl_802506A0
	b        lbl_8025075C

lbl_802506EC:
	cmpwi    r26, 0
	bne      lbl_8025075C
	addi     r22, r1, 0x2008
	addi     r23, r1, 0x1008
	addi     r24, r1, 8
	li       r21, 0
	add      r22, r22, r27
	add      r23, r23, r27
	add      r24, r24, r27
	b        lbl_80250754

lbl_80250714:
	mr       r3, r29
	mr       r4, r21
	bl       isGateSetDoor__Q34Game4Cave7MapNodeFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80250750
	stw      r25, 0(r24)
	addi     r31, r31, 1
	addi     r27, r27, 4
	lwz      r0, 0(r24)
	addi     r24, r24, 4
	stw      r29, 0(r22)
	addi     r22, r22, 4
	add      r30, r30, r0
	stw      r21, 0(r23)
	addi     r23, r23, 4

lbl_80250750:
	addi     r21, r21, 1

lbl_80250754:
	cmpw     r21, r25
	blt      lbl_80250714

lbl_8025075C:
	lwz      r29, 4(r29)

lbl_80250760:
	cmplwi   r29, 0
	bne      lbl_802505E4
	cmpwi    r30, 0
	beq      lbl_8025080C
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x300c(r1)
	xoris    r0, r30, 0x8000
	lfd      f2, lbl_8051A880@sda21(r2)
	addi     r5, r1, 8
	stw      r4, 0x3008(r1)
	li       r6, 0
	lfs      f0, lbl_8051A878@sda21(r2)
	li       r7, 0
	lfd      f1, 0x3008(r1)
	stw      r0, 0x3014(r1)
	fsubs    f1, f1, f2
	stw      r4, 0x3010(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x3010(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x3018(r1)
	lwz      r3, 0x301c(r1)
	mtctr    r31
	cmpwi    r31, 0
	ble      lbl_8025080C

lbl_802507D4:
	lwz      r0, 0(r5)
	add      r6, r6, r0
	cmpw     r6, r3
	ble      lbl_80250800
	slwi     r4, r7, 2
	addi     r3, r1, 0x1008
	lwzx     r0, r3, r4
	addi     r3, r1, 0x2008
	lwzx     r3, r3, r4
	stw      r0, 0(r28)
	b        lbl_80250810

lbl_80250800:
	addi     r5, r5, 4
	addi     r7, r7, 1
	bdnz     lbl_802507D4

lbl_8025080C:
	li       r3, 0

lbl_80250810:
	lmw      r21, 0x3024(r1)
	lwz      r0, 0x3054(r1)
	mtlr     r0
	addi     r1, r1, 0x3050
	blr
	*/
}
} // namespace Game
