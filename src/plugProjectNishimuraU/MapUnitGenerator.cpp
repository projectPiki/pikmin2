#include "types.h"
#include "nans.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_MapUnitGenerator_cpp

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804C1B08
    lbl_804C1B08:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515D10
    lbl_80515D10:
        .skip 0x4
    .global lbl_80515D14
    lbl_80515D14:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051A7D8
    lbl_8051A7D8:
        .float 1.0
    .global lbl_8051A7DC
    lbl_8051A7DC:
        .4byte 0x47000000
    .global lbl_8051A7E0
    lbl_8051A7E0:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051A7E8
    lbl_8051A7E8:
        .4byte 0x41200000
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	8024BAAC
 * Size:	000200
 */
Cave::MapUnitGenerator::MapUnitGenerator(Game::MapUnitInterface*, int, Game::Cave::FloorInfo*, bool, Game::Cave::EditMapUnit*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r31, r3
	  mr        r28, r4
	  mr        r27, r5
	  mr        r30, r6
	  mr        r29, r7
	  mr        r26, r8
	  li        r3, 0x40
	  bl        -0x227C34
	  mr.       r0, r3
	  beq-      .loc_0x44
	  li        r4, 0
	  bl        -0x8D78
	  mr        r0, r3

	.loc_0x44:
	  stw       r0, 0xC(r31)
	  li        r3, 0xD0
	  bl        -0x227B4C
	  lis       r4, 0x8025
	  lis       r5, 0x8024
	  subi      r4, r4, 0x4354
	  li        r6, 0x40
	  addi      r5, r5, 0x4094
	  li        r7, 0x3
	  bl        -0x18A124
	  stw       r3, 0x10(r31)
	  li        r3, 0x38
	  bl        -0x227C7C
	  mr.       r0, r3
	  beq-      .loc_0x88
	  bl        -0x7A38
	  mr        r0, r3

	.loc_0x88:
	  stw       r0, 0x14(r31)
	  li        r3, 0x38
	  bl        -0x227C98
	  mr.       r0, r3
	  beq-      .loc_0xA4
	  bl        -0x7A54
	  mr        r0, r3

	.loc_0xA4:
	  stw       r0, 0x18(r31)
	  li        r3, 0x38
	  bl        -0x227CB4
	  mr.       r0, r3
	  beq-      .loc_0xC0
	  bl        -0x7A70
	  mr        r0, r3

	.loc_0xC0:
	  stw       r0, 0x1C(r31)
	  li        r3, 0x24
	  bl        -0x227CD0
	  mr.       r0, r3
	  beq-      .loc_0xDC
	  bl        0x4148
	  mr        r0, r3

	.loc_0xDC:
	  stw       r0, 0x20(r31)
	  li        r3, 0x34
	  bl        -0x227CEC
	  mr.       r0, r3
	  beq-      .loc_0xF8
	  bl        0x25D4
	  mr        r0, r3

	.loc_0xF8:
	  stw       r0, 0x24(r31)
	  li        r3, 0x40
	  bl        -0x227D08
	  mr.       r0, r3
	  beq-      .loc_0x118
	  li        r4, 0
	  bl        -0x8E4C
	  mr        r0, r3

	.loc_0x118:
	  stw       r0, 0x28(r31)
	  li        r3, 0x40
	  bl        -0x227D28
	  mr.       r0, r3
	  beq-      .loc_0x138
	  li        r4, 0
	  bl        -0x8E6C
	  mr        r0, r3

	.loc_0x138:
	  stw       r0, 0x2C(r31)
	  stw       r30, 0x8(r31)
	  stb       r29, 0x0(r31)
	  lwz       r3, 0x8(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x160
	  li        r4, -0x1
	  bl        -0x74B80
	  stb       r3, 0x1(r31)
	  b         .loc_0x168

	.loc_0x160:
	  li        r0, 0
	  stb       r0, 0x1(r31)

	.loc_0x168:
	  lwz       r3, -0x6C18(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x18C
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x18C
	  li        r0, 0x1
	  stb       r0, 0x2(r31)
	  b         .loc_0x194

	.loc_0x18C:
	  li        r0, 0
	  stb       r0, 0x2(r31)

	.loc_0x194:
	  mr        r3, r31
	  mr        r4, r26
	  bl        0x88
	  mr        r3, r31
	  mr        r4, r28
	  mr        r5, r27
	  bl        0x124
	  mr        r3, r31
	  bl        0x3E0
	  mr        r3, r31
	  bl        0x4A4
	  mr        r3, r31
	  bl        0x5E8
	  mr        r3, r31
	  bl        0x694
	  mr        r3, r31
	  bl        0x7A8
	  mr        r3, r31
	  bl        0x854
	  mr        r3, r31
	  bl        0x900
	  mr        r3, r31
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8024BCAC
 * Size:	000024
 */
void Cave::MapNode::__defctor(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	bl       __ct__Q34Game4Cave7MapNodeFPQ34Game4Cave8UnitInfo
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024BCD0
 * Size:	0000AC
 */
void Cave::MapUnitGenerator::createEditMapInfo(Game::Cave::EditMapUnit*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	li       r0, 0
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	stw      r0, 0x30(r3)
	lbz      r0, 2(r3)
	cmplwi   r0, 0
	beq      lbl_8024BD64
	cmplwi   r31, 0
	beq      lbl_8024BD64
	lwz      r0, 0x1c(r31)
	cmpwi    r0, -1
	bge      lbl_8024BD58
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_8051A7E0@sda21(r2)
	stw      r0, 8(r1)
	lfs      f2, lbl_8051A7D8@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f1, lbl_8051A7DC@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, 0(r31)
	fmuls    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8024BD64
	stw      r31, 0x30(r30)
	b        lbl_8024BD64

lbl_8024BD58:
	cmpwi    r0, 0
	blt      lbl_8024BD64
	stw      r31, 0x30(r30)

lbl_8024BD64:
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
 * Address:	8024BD7C
 * Size:	00024C
 */
void Cave::MapUnitGenerator::createMemList(Game::MapUnitInterface*, int)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stmw     r19, 0x2c(r1)
	mr       r31, r3
	mr       r22, r5
	li       r23, 0
	mr       r30, r4
	b        lbl_8024BFA4

lbl_8024BDA8:
	mr       r3, r31
	mr       r4, r30
	bl isCreateList__Q34Game4Cave16MapUnitGeneratorFPQ24Game16MapUnitInterface
	clrlwi.  r0, r3, 0x18
	beq      lbl_8024BF9C
	li       r3, 0x24
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_8024BDD8
	li       r4, 0
	bl       __ct__Q34Game4Cave8MapUnitsFP10JUTTexture
	mr       r29, r3

lbl_8024BDD8:
	lwz      r4, 0x14(r30)
	mr       r3, r29
	bl       setUnitName__Q34Game4Cave8MapUnitsFPc
	mr       r3, r29
	mr       r4, r23
	bl       setUnitIndex__Q34Game4Cave8MapUnitsFi
	lha      r4, 0x6c(r30)
	mr       r3, r29
	bl       setUnitKind__Q34Game4Cave8MapUnitsFi
	mr       r3, r30
	addi     r4, r1, 0xc
	addi     r5, r1, 8
	bl       getCellSize__Q24Game16MapUnitInterfaceFRiRi
	lwz      r4, 0xc(r1)
	mr       r3, r29
	lwz      r5, 8(r1)
	bl       setUnitSize__Q34Game4Cave8MapUnitsFii
	lwz      r28, 0x114(r30)
	mr       r3, r29
	mr       r4, r28
	bl       setDoorNum__Q34Game4Cave8MapUnitsFi
	lwz      r4, 0x168(r30)
	mr       r3, r29
	bl       setBaseGenPtr__Q34Game4Cave8MapUnitsFPQ34Game4Cave7BaseGen
	lfs      f31, lbl_8051A7E8@sda21(r2)
	li       r25, 0
	li       r26, 0
	b        lbl_8024BF30

lbl_8024BE48:
	mr       r3, r30
	mr       r4, r25
	bl       getDoor__Q24Game16MapUnitInterfaceFi
	mr       r0, r3
	addi     r3, r1, 0x10
	mr       r24, r0
	bl       __ct__Q34Game4Cave4DoorFv
	lwz      r0, 0x48(r24)
	li       r3, 0x20
	stw      r0, 0x14(r1)
	lwz      r0, 0x44(r24)
	stw      r0, 0x10(r1)
	lwz      r27, 0x1c(r24)
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8024BE94
	addi     r4, r1, 0x10
	bl       __ct__Q34Game4Cave8DoorNodeFRQ34Game4Cave4Door
	mr       r4, r3

lbl_8024BE94:
	lwz      r3, 0(r29)
	bl       add__5CNodeFP5CNode
	li       r21, 0
	b        lbl_8024BF20

lbl_8024BEA4:
	mr       r3, r24
	mr       r4, r21
	bl       getLink__Q24Game4DoorFi
	mr       r20, r3
	li       r3, 0xc
	bl       __nw__FUl
	or.      r19, r3, r3
	beq      lbl_8024BECC
	bl       __ct__Q34Game4Cave6AdjustFv
	mr       r19, r3

lbl_8024BECC:
	lwz      r0, 0x1c(r20)
	li       r3, 0x1c
	stw      r0, 0(r19)
	lfs      f0, 0x18(r20)
	fdivs    f0, f0, f31
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	stw      r0, 4(r19)
	lbz      r0, 0x20(r20)
	stw      r0, 8(r19)
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8024BF10
	mr       r4, r19
	bl       __ct__Q34Game4Cave10AdjustNodeFPQ34Game4Cave6Adjust
	mr       r4, r3

lbl_8024BF10:
	lwz      r0, 4(r29)
	add      r3, r0, r26
	bl       add__5CNodeFP5CNode
	addi     r21, r21, 1

lbl_8024BF20:
	cmpw     r21, r27
	blt      lbl_8024BEA4
	addi     r26, r26, 0x1c
	addi     r25, r25, 1

lbl_8024BF30:
	cmpw     r25, r28
	blt      lbl_8024BE48
	li       r20, 0

lbl_8024BF3C:
	li       r3, 0x18
	bl       __nw__FUl
	or.      r19, r3, r3
	beq      lbl_8024BF58
	mr       r4, r29
	bl       __ct__Q34Game4Cave8UnitInfoFPQ34Game4Cave8MapUnits
	mr       r19, r3

lbl_8024BF58:
	mr       r3, r19
	mr       r4, r20
	bl       setUnitRotation__Q34Game4Cave8UnitInfoFi
	mr       r3, r19
	bl       create__Q34Game4Cave8UnitInfoFv
	li       r3, 0x40
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8024BF88
	mr       r4, r19
	bl       __ct__Q34Game4Cave7MapNodeFPQ34Game4Cave8UnitInfo
	mr       r4, r3

lbl_8024BF88:
	lwz      r3, 0xc(r31)
	bl       add__5CNodeFP5CNode
	addi     r20, r20, 1
	cmpwi    r20, 4
	blt      lbl_8024BF3C

lbl_8024BF9C:
	addi     r30, r30, 0x16c
	addi     r23, r23, 1

lbl_8024BFA4:
	cmpw     r23, r22
	blt      lbl_8024BDA8
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	lmw      r19, 0x2c(r1)
	lwz      r0, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024BFC8
 * Size:	000078
 */
void Cave::MapUnitGenerator::isCreateList(Game::MapUnitInterface*)
{
	/*
	lbz      r0, 2(r3)
	cmplwi   r0, 0
	bne      lbl_8024BFDC
	li       r3, 1
	blr

lbl_8024BFDC:
	lwz      r0, 0x30(r3)
	cmplwi   r0, 0
	beq      lbl_8024BFF0
	li       r3, 1
	blr

lbl_8024BFF0:
	lha      r0, 0x6c(r4)
	cmpwi    r0, 1
	beq      lbl_8024C004
	li       r3, 1
	blr

lbl_8024C004:
	lwz      r3, 0x168(r4)
	cmplwi   r3, 0
	beq      lbl_8024C038
	lwz      r3, 0x10(r3)
	b        lbl_8024C030

lbl_8024C018:
	lwz      r0, 0x18(r3)
	cmpwi    r0, 7
	bne      lbl_8024C02C
	li       r3, 1
	blr

lbl_8024C02C:
	lwz      r3, 4(r3)

lbl_8024C030:
	cmplwi   r3, 0
	bne      lbl_8024C018

lbl_8024C038:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024C040
 * Size:	0000CC
 */
void Cave::MapUnitGenerator::memMapListSorting(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r25, r3
	lwz      r3, 0xc(r3)
	lwz      r31, 0x10(r3)
	b        lbl_8024C0F0

lbl_8024C060:
	lwz      r29, 4(r31)
	mr       r28, r31
	lwz      r3, 0x18(r31)
	bl       getUnitSizeY__Q34Game4Cave8UnitInfoFv
	mr       r30, r3
	lwz      r3, 0x18(r31)
	bl       getUnitSizeX__Q34Game4Cave8UnitInfoFv
	mullw    r27, r3, r30
	mr       r3, r31
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	mr       r30, r3
	mr       r26, r29
	b        lbl_8024C0E4

lbl_8024C094:
	lwz      r3, 0x18(r26)
	bl       getUnitSizeY__Q34Game4Cave8UnitInfoFv
	mr       r31, r3
	lwz      r3, 0x18(r26)
	bl       getUnitSizeX__Q34Game4Cave8UnitInfoFv
	mullw    r31, r3, r31
	mr       r3, r26
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	cmpw     r27, r31
	bgt      lbl_8024C0C8
	bne      lbl_8024C0E0
	cmpw     r30, r3
	ble      lbl_8024C0E0

lbl_8024C0C8:
	mr       r3, r28
	bl       del__5CNodeFv
	lwz      r3, 0xc(r25)
	mr       r4, r28
	bl       add__5CNodeFP5CNode
	b        lbl_8024C0EC

lbl_8024C0E0:
	lwz      r26, 4(r26)

lbl_8024C0E4:
	cmplwi   r26, 0
	bne      lbl_8024C094

lbl_8024C0EC:
	mr       r31, r29

lbl_8024C0F0:
	cmplwi   r31, 0
	bne      lbl_8024C060
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024C10C
 * Size:	00014C
 */
void Cave::MapUnitGenerator::createMapPartsList(void)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stfd     f30, 0x50(r1)
	psq_st   f30, 88(r1), 0, qr0
	stmw     r23, 0x2c(r1)
	lfd      f30, lbl_8051A7E0@sda21(r2)
	mr       r31, r3
	lfs      f31, lbl_8051A7DC@sda21(r2)
	li       r26, 0
	li       r27, 0
	lis      r29, 0x4330

lbl_8024C144:
	lwz      r3, 0xc(r31)
	lwz      r0, 0x10(r31)
	lwz      r28, 0x10(r3)
	add      r25, r0, r27
	b        lbl_8024C190

lbl_8024C158:
	lwz      r3, 0x18(r28)
	bl       getUnitKind__Q34Game4Cave8UnitInfoFv
	cmpw     r26, r3
	bne      lbl_8024C18C
	li       r3, 0x40
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_8024C184
	lwz      r4, 0x18(r28)
	bl       __ct__Q34Game4Cave7MapNodeFPQ34Game4Cave8UnitInfo
	mr       r4, r3

lbl_8024C184:
	mr       r3, r25
	bl       add__5CNodeFP5CNode

lbl_8024C18C:
	lwz      r28, 4(r28)

lbl_8024C190:
	cmplwi   r28, 0
	bne      lbl_8024C158
	mr       r3, r25
	lwz      r12, 0(r25)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r28, r3
	li       r24, 0
	xoris    r30, r28, 0x8000
	b        lbl_8024C21C

lbl_8024C1BC:
	bl       rand
	xoris    r0, r3, 0x8000
	stw      r29, 8(r1)
	mr       r3, r25
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	stw      r30, 0x14(r1)
	fsubs    f0, f0, f30
	stw      r29, 0x10(r1)
	fdivs    f1, f0, f31
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f30
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r4, 0x1c(r1)
	bl       getChildAt__5CNodeFi
	or.      r23, r3, r3
	beq      lbl_8024C218
	bl       del__5CNodeFv
	mr       r3, r25
	mr       r4, r23
	bl       add__5CNodeFP5CNode

lbl_8024C218:
	addi     r24, r24, 1

lbl_8024C21C:
	cmpw     r24, r28
	blt      lbl_8024C1BC
	addi     r26, r26, 1
	addi     r27, r27, 0x40
	cmpwi    r26, 3
	blt      lbl_8024C144
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	lmw      r23, 0x2c(r1)
	lwz      r0, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024C258
 * Size:	0000B4
 */
void Cave::MapUnitGenerator::createEnemyList(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	li       r29, 0
	stw      r28, 0x10(r1)
	mr       r28, r3
	b        lbl_8024C2DC

lbl_8024C280:
	li       r3, 4
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_8024C298
	li       r0, 0
	stw      r0, 0(r31)

lbl_8024C298:
	li       r3, 0x38
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8024C2BC
	mr       r4, r31
	mr       r6, r29
	li       r5, 0
	bl
__ct__Q34Game4Cave9EnemyNodeFPQ34Game4Cave9EnemyUnitPQ34Game4Cave7BaseGeni mr
r30, r3

lbl_8024C2BC:
	lwz      r3, 8(r28)
	mr       r4, r29
	bl       getTekiInfo__Q34Game4Cave9FloorInfoFi
	stw      r3, 0(r31)
	mr       r4, r30
	lwz      r3, 0x14(r28)
	bl       add__5CNodeFP5CNode
	addi     r29, r29, 1

lbl_8024C2DC:
	lwz      r3, 8(r28)
	bl       getTekiInfoNum__Q34Game4Cave9FloorInfoFv
	cmpw     r29, r3
	blt      lbl_8024C280
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
 * Address:	8024C30C
 * Size:	0000EC
 */
void Cave::MapUnitGenerator::createCapEnemyList(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	li       r29, 0
	b        lbl_8024C3D4

lbl_8024C328:
	lwz      r3, 8(r27)
	mr       r4, r29
	bl       getCapInfo__Q34Game4Cave9FloorInfoFi
	cmplwi   r3, 0
	beq      lbl_8024C3D0
	lbz      r0, 0x18(r3)
	cmplwi   r0, 0
	bne      lbl_8024C3D0
	bl       getTekiInfo__Q34Game4Cave7CapInfoFv
	or.      r28, r3, r3
	beq      lbl_8024C3D0
	li       r3, 4
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_8024C36C
	li       r0, 0
	stw      r0, 0(r31)

lbl_8024C36C:
	li       r3, 0x38
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8024C390
	mr       r4, r31
	mr       r6, r29
	li       r5, 0
	bl
__ct__Q34Game4Cave9EnemyNodeFPQ34Game4Cave9EnemyUnitPQ34Game4Cave7BaseGeni mr
r30, r3

lbl_8024C390:
	stw      r28, 0(r31)
	lbz      r0, 0x24(r28)
	cmplwi   r0, 0
	beq      lbl_8024C3B4
	mr       r3, r27
	mr       r4, r28
	bl       isPomGroup__Q34Game4Cave16MapUnitGeneratorFPQ34Game4Cave8TekiInfo
	clrlwi.  r0, r3, 0x18
	beq      lbl_8024C3C4

lbl_8024C3B4:
	lwz      r3, 0x18(r27)
	mr       r4, r30
	bl       add__5CNodeFP5CNode
	b        lbl_8024C3D0

lbl_8024C3C4:
	lwz      r3, 0x1c(r27)
	mr       r4, r30
	bl       add__5CNodeFP5CNode

lbl_8024C3D0:
	addi     r29, r29, 1

lbl_8024C3D4:
	lwz      r3, 8(r27)
	bl       getCapInfoNum__Q34Game4Cave9FloorInfoFv
	cmpw     r29, r3
	blt      lbl_8024C328
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024C3F8
 * Size:	000030
 */
void Cave::MapUnitGenerator::isPomGroup(Game::Cave::TekiInfo*)
{
	/*
	lwz      r3, 0x18(r4)
	cmpwi    r3, 0x52
	beq      lbl_8024C418
	addi     r0, r3, -3
	cmplwi   r0, 4
	ble      lbl_8024C418
	cmpwi    r3, 8
	bne      lbl_8024C420

lbl_8024C418:
	li       r3, 1
	blr

lbl_8024C420:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024C428
 * Size:	0000B4
 */
void Cave::MapUnitGenerator::createGateList(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	li       r29, 0
	stw      r28, 0x10(r1)
	mr       r28, r3
	b        lbl_8024C4AC

lbl_8024C450:
	li       r3, 4
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_8024C468
	li       r0, 0
	stw      r0, 0(r31)

lbl_8024C468:
	li       r3, 0x24
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8024C48C
	mr       r4, r31
	mr       r5, r29
	li       r6, 0
	bl       __ct__Q34Game4Cave8GateNodeFPQ34Game4Cave8GateUnitii
	mr       r30, r3

lbl_8024C48C:
	lwz      r3, 8(r28)
	mr       r4, r29
	bl       getGateInfo__Q34Game4Cave9FloorInfoFi
	stw      r3, 0(r31)
	mr       r4, r30
	lwz      r3, 0x20(r28)
	bl       add__5CNodeFP5CNode
	addi     r29, r29, 1

lbl_8024C4AC:
	lwz      r3, 8(r28)
	bl       getGateInfoNum__Q34Game4Cave9FloorInfoFv
	cmpw     r29, r3
	blt      lbl_8024C450
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
 * Address:	8024C4DC
 * Size:	0000B4
 */
void Cave::MapUnitGenerator::createItemList(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	li       r29, 0
	stw      r28, 0x10(r1)
	mr       r28, r3
	b        lbl_8024C560

lbl_8024C504:
	li       r3, 4
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_8024C51C
	li       r0, 0
	stw      r0, 0(r31)

lbl_8024C51C:
	li       r3, 0x34
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_8024C540
	mr       r4, r31
	mr       r6, r29
	li       r5, 0
	bl __ct__Q34Game4Cave8ItemNodeFPQ34Game4Cave8ItemUnitPQ34Game4Cave7BaseGeni
	mr       r30, r3

lbl_8024C540:
	lwz      r3, 8(r28)
	mr       r4, r29
	bl       getItemInfo__Q34Game4Cave9FloorInfoFi
	stw      r3, 0(r31)
	mr       r4, r30
	lwz      r3, 0x24(r28)
	bl       add__5CNodeFP5CNode
	addi     r29, r29, 1

lbl_8024C560:
	lwz      r3, 8(r28)
	bl       getItemInfoNum__Q34Game4Cave9FloorInfoFv
	cmpw     r29, r3
	blt      lbl_8024C504
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
 * Address:	8024C590
 * Size:	00002C
 */
void Cave::MapUnitGenerator::createCaveLevel(void)
{
	/*
	li       r0, 0
	stw      r0, 4(r3)
	lwz      r4, gameSystem__4Game@sda21(r13)
	cmplwi   r4, 0
	beqlr
	lwz      r0, 0x44(r4)
	cmpwi    r0, 0
	bnelr
	li       r0, 4
	stw      r0, 4(r3)
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8024C5BC
 * Size:	000028
 */
void __sinit_MapUnitGenerator_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804C1B08@ha
	stw      r0, lbl_80515D10@sda21(r13)
	stfsu    f0, lbl_804C1B08@l(r3)
	stfs     f0, lbl_80515D14@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
