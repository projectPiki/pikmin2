#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__13J3DShapeTable
    __vt__13J3DShapeTable:
        .4byte 0
        .4byte 0
        .4byte __dt__13J3DShapeTableFv
    .global __vt__12J3DModelData
    __vt__12J3DModelData:
        .4byte 0
        .4byte 0
        .4byte __dt__12J3DModelDataFv

    .section .sbss # 0x80514D80 - 0x80516360
    .global sInterruptFlag$1509
    sInterruptFlag$1509:
        .skip 0x4
    .global init$1510
    init$1510:
        .skip 0x4
*/

/*
 * --INFO--
 * Address:	80083794
 * Size:	000018
 */
void J3DModelData::clear()
{
	/*
	li       r0, 0
	stw      r0, 4(r3)
	stw      r0, 8(r3)
	sth      r0, 0xc(r3)
	sth      r0, 0xe(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800837AC
 * Size:	000080
 */
J3DModelData::J3DModelData()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, __vt__12J3DModelData@ha
	stw      r0, 0x14(r1)
	addi     r0, r4, __vt__12J3DModelData@l
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r0, 0(r3)
	addi     r3, r31, 0x10
	bl       __ct__12J3DJointTreeFv
	addi     r3, r31, 0x58
	bl       __ct__16J3DMaterialTableFv
	lis      r3, __vt__13J3DShapeTable@ha
	li       r0, 0
	addi     r4, r3, __vt__13J3DShapeTable@l
	addi     r3, r31, 0x88
	stw      r4, 0x78(r31)
	sth      r0, 0x7c(r31)
	stw      r0, 0x80(r31)
	stw      r0, 0x84(r31)
	bl       __ct__13J3DVertexDataFv
	li       r0, 0
	mr       r3, r31
	stw      r0, 4(r31)
	stw      r0, 8(r31)
	sth      r0, 0xc(r31)
	sth      r0, 0xe(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008382C
 * Size:	000048
 */
J3DShapeTable::~J3DShapeTable()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_8008385C
	lis      r5, __vt__13J3DShapeTable@ha
	extsh.   r0, r4
	addi     r0, r5, __vt__13J3DShapeTable@l
	stw      r0, 0(r31)
	ble      lbl_8008385C
	bl       __dl__FPv

lbl_8008385C:
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
 * Address:	80083874
 * Size:	000064
 */
J3DJointTree::~J3DJointTree()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_800838BC
	lis      r4, __vt__12J3DJointTree@ha
	addi     r3, r30, 0x34
	addi     r0, r4, __vt__12J3DJointTree@l
	li       r4, -1
	stw      r0, 0(r30)
	bl       __dt__14J3DDrawMtxDataFv
	extsh.   r0, r31
	ble      lbl_800838BC
	mr       r3, r30
	bl       __dl__FPv

lbl_800838BC:
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
 * Address:	800838D8
 * Size:	000094
 */
void J3DModelData::newSharedDisplayList(unsigned long)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	rlwinm   r30, r4, 0, 0xd, 0xd
	li       r28, 0
	lhz      r31, 0x5c(r3)
	b        lbl_8008394C

lbl_800838FC:
	cmplwi   r30, 0
	beq      lbl_80083928
	lwz      r3, 0x60(r27)
	rlwinm   r0, r28, 2, 0xe, 0x1d
	lwzx     r29, r3, r0
	mr       r3, r29
	bl       countDLSize__11J3DMaterialFv
	mr       r4, r3
	mr       r3, r29
	bl       newSingleSharedDisplayList__11J3DMaterialFUl
	b        lbl_80083948

lbl_80083928:
	lwz      r3, 0x60(r27)
	rlwinm   r0, r28, 2, 0xe, 0x1d
	lwzx     r29, r3, r0
	mr       r3, r29
	bl       countDLSize__11J3DMaterialFv
	mr       r4, r3
	mr       r3, r29
	bl       newSharedDisplayList__11J3DMaterialFUl

lbl_80083948:
	addi     r28, r28, 1

lbl_8008394C:
	clrlwi   r0, r28, 0x10
	cmplw    r0, r31
	blt      lbl_800838FC
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008396C
 * Size:	0000C4
 */
void J3DModelData::indexToPtr()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r27, 0x1c(r1)
	mr       r27, r3
	lis      r3, j3dSys@ha
	addi     r3, r3, j3dSys@l
	lbz      r0, init$1510@sda21(r13)
	lwz      r4, 0x6c(r27)
	extsb.   r0, r0
	stw      r4, 0x58(r3)
	bne      lbl_800839AC
	bl       OSDisableInterrupts
	li       r0, 1
	stw      r3, sInterruptFlag$1509@sda21(r13)
	stb      r0, init$1510@sda21(r13)

lbl_800839AC:
	bl       OSDisableScheduler
	lhz      r30, 0x5c(r27)
	addi     r31, r1, 8
	li       r28, 0
	b        lbl_800839FC

lbl_800839C0:
	lwz      r4, 0x60(r27)
	rlwinm   r0, r28, 2, 0xe, 0x1d
	addi     r3, r1, 8
	lwzx     r29, r4, r0
	lwz      r5, 0x48(r29)
	lwz      r4, 0(r5)
	lwz      r5, 8(r5)
	bl       GDInitGDLObj
	stw      r31, __GDCurrentDL@sda21(r13)
	lwz      r3, 0x2c(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	addi     r28, r28, 1

lbl_800839FC:
	clrlwi   r0, r28, 0x10
	cmplw    r0, r30
	blt      lbl_800839C0
	li       r0, 0
	stw      r0, __GDCurrentDL@sda21(r13)
	bl       OSEnableScheduler
	lwz      r3, sInterruptFlag$1509@sda21(r13)
	bl       OSRestoreInterrupts
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80083A30
 * Size:	000080
 */
void J3DModelData::makeSharedDL()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	lis      r3, j3dSys@ha
	lwz      r0, 0x6c(r29)
	addi     r3, r3, j3dSys@l
	stw      r0, 0x58(r3)
	lhz      r31, 0x5c(r29)
	b        lbl_80083A88

lbl_80083A68:
	lwz      r3, 0x60(r29)
	rlwinm   r0, r30, 2, 0xe, 0x1d
	lwzx     r3, r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	addi     r30, r30, 1

lbl_80083A88:
	clrlwi   r0, r30, 0x10
	cmplw    r0, r31
	blt      lbl_80083A68
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
 * Address:	80083AB0
 * Size:	0000C8
 */
void J3DModelData::simpleCalcMaterial(unsigned short, float (*)[4])
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r5
	bl       syncJ3DSysFlags__12J3DModelDataCFv
	lwz      r3, 0x28(r31)
	rlwinm   r0, r30, 2, 0xe, 0x1d
	lis      r31, 0xc000
	lwzx     r3, r3, r0
	lwz      r30, 0x58(r3)
	b        lbl_80083B54

lbl_80083AF0:
	lwz      r3, 0x3c(r30)
	cmplw    r3, r31
	bge      lbl_80083B04
	mr       r0, r3
	b        lbl_80083B08

lbl_80083B04:
	li       r0, 0

lbl_80083B08:
	cmplwi   r0, 0
	beq      lbl_80083B38
	lis      r0, 0xc000
	cmplw    r3, r0
	bge      lbl_80083B20
	b        lbl_80083B24

lbl_80083B20:
	li       r3, 0

lbl_80083B24:
	lwz      r12, 0(r3)
	mr       r4, r30
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_80083B38:
	mr       r3, r30
	mr       r4, r29
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r30, 4(r30)

lbl_80083B54:
	cmplwi   r30, 0
	bne      lbl_80083AF0
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
 * Address:	80083B78
 * Size:	00003C
 */
void J3DModelData::syncJ3DSysFlags() const
{
	/*
	lwz      r0, 8(r3)
	rlwinm.  r0, r0, 0, 0x1a, 0x1a
	beq      lbl_80083B9C
	lis      r3, j3dSys@ha
	addi     r3, r3, j3dSys@l
	lwz      r0, 0x34(r3)
	oris     r0, r0, 0x4000
	stw      r0, 0x34(r3)
	blr

lbl_80083B9C:
	lis      r3, j3dSys@ha
	addi     r3, r3, j3dSys@l
	lwz      r0, 0x34(r3)
	rlwinm   r0, r0, 0, 2, 0
	stw      r0, 0x34(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80083BB4
 * Size:	000098
 */
J3DModelData::~J3DModelData()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80083C30
	lis      r3, __vt__12J3DModelData@ha
	addic.   r0, r30, 0x78
	addi     r0, r3, __vt__12J3DModelData@l
	stw      r0, 0(r30)
	beq      lbl_80083BF4
	lis      r3, __vt__13J3DShapeTable@ha
	addi     r0, r3, __vt__13J3DShapeTable@l
	stw      r0, 0x78(r30)

lbl_80083BF4:
	addi     r3, r30, 0x58
	li       r4, -1
	bl       __dt__16J3DMaterialTableFv
	addic.   r0, r30, 0x10
	beq      lbl_80083C20
	lis      r4, __vt__12J3DJointTree@ha
	addi     r3, r30, 0x44
	addi     r0, r4, __vt__12J3DJointTree@l
	li       r4, -1
	stw      r0, 0x10(r30)
	bl       __dt__14J3DDrawMtxDataFv

lbl_80083C20:
	extsh.   r0, r31
	ble      lbl_80083C30
	mr       r3, r30
	bl       __dl__FPv

lbl_80083C30:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
