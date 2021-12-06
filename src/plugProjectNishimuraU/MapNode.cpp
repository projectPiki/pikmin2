#include "Game/Cave/Info.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q34Game4Cave7MapNode
    __vt__Q34Game4Cave7MapNode:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game4Cave7MapNodeFv
        .4byte getChildCount__5CNodeFv

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051A6E0
    lbl_8051A6E0:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_8051A6E8
    lbl_8051A6E8:
        .float 0.5
    .global lbl_8051A6EC
    lbl_8051A6EC:
        .4byte 0x00000000
    .global lbl_8051A6F0
    lbl_8051A6F0:
        .4byte 0x432A0000
    .global lbl_8051A6F4
    lbl_8051A6F4:
        .4byte 0xBFC90FDB
    .global lbl_8051A6F8
    lbl_8051A6F8:
        .4byte 0x40C90FDB
    .global lbl_8051A6FC
    lbl_8051A6FC:
        .4byte 0x40490FDB
    .global lbl_8051A700
    lbl_8051A700:
        .4byte 0x43340000
        .4byte 0x00000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	80242D58
 * Size:	000018
 */
Cave::AdjustInfo::AdjustInfo(void)
{
	/*
	li       r4, 0
	li       r0, -1
	stw      r4, 0(r3)
	stw      r0, 4(r3)
	stw      r0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80242D70
 * Size:	0002AC
 */
Cave::MapNode::MapNode(Game::Cave::UnitInfo*)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stmw     r16, 0x10(r1)
	mr       r30, r3
	mr       r16, r4
	bl       __ct__5CNodeFv
	lis      r4, __vt__Q34Game4Cave7MapNode@ha
	li       r3, 0
	addi     r4, r4, __vt__Q34Game4Cave7MapNode@l
	li       r0, -1
	stw      r4, 0(r30)
	cmplwi   r16, 0
	stw      r3, 0x18(r30)
	stw      r3, 0x1c(r30)
	stw      r3, 0x20(r30)
	stw      r3, 0x24(r30)
	stw      r3, 0x28(r30)
	stw      r0, 0x2c(r30)
	stw      r0, 0x30(r30)
	stw      r0, 0x34(r30)
	stw      r0, 0x38(r30)
	stw      r0, 0x3c(r30)
	beq      lbl_80243004
	stw      r16, 0x18(r30)
	li       r3, 0x38
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80242DEC
	bl       __ct__Q34Game4Cave9EnemyNodeFv
	mr       r0, r3

lbl_80242DEC:
	stw      r0, 0x1c(r30)
	li       r3, 0x24
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80242E08
	bl       __ct__Q34Game4Cave8GateNodeFv
	mr       r0, r3

lbl_80242E08:
	stw      r0, 0x20(r30)
	li       r3, 0x34
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80242E24
	bl       __ct__Q34Game4Cave8ItemNodeFv
	mr       r0, r3

lbl_80242E24:
	stw      r0, 0x24(r30)
	mr       r3, r30
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	mr       r31, r3
	mr       r16, r31
	mulli    r3, r16, 0xc
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q34Game4Cave10AdjustInfoFv@ha
	mr       r7, r16
	addi     r4, r4, __ct__Q34Game4Cave10AdjustInfoFv@l
	li       r5, 0
	li       r6, 0xc
	bl       __construct_new_array
	cmpwi    r31, 0
	stw      r3, 0x28(r30)
	li       r5, 0
	ble      lbl_80243004
	cmpwi    r31, 8
	addi     r3, r31, -8
	ble      lbl_80242FC0
	addi     r0, r3, 7
	li       r4, 0
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r3, 0
	ble      lbl_80242FC0

lbl_80242E90:
	lwz      r6, 0x28(r30)
	li       r3, 0
	addi     r8, r4, 4
	li       r0, -1
	stwx     r3, r6, r4
	addi     r7, r4, 8
	addi     r6, r4, 0xc
	addi     r17, r4, 0x10
	lwz      r9, 0x28(r30)
	addi     r18, r4, 0x14
	addi     r19, r4, 0x18
	addi     r20, r4, 0x1c
	stwx     r0, r9, r8
	addi     r21, r4, 0x20
	addi     r22, r4, 0x24
	addi     r23, r4, 0x28
	lwz      r8, 0x28(r30)
	addi     r24, r4, 0x2c
	addi     r25, r4, 0x30
	addi     r26, r4, 0x34
	stwx     r0, r8, r7
	addi     r27, r4, 0x38
	addi     r28, r4, 0x3c
	addi     r29, r4, 0x40
	lwz      r7, 0x28(r30)
	addi     r12, r4, 0x44
	addi     r11, r4, 0x48
	addi     r10, r4, 0x4c
	stwx     r3, r7, r6
	addi     r9, r4, 0x50
	addi     r8, r4, 0x54
	addi     r7, r4, 0x58
	lwz      r16, 0x28(r30)
	addi     r6, r4, 0x5c
	addi     r4, r4, 0x60
	addi     r5, r5, 8
	stwx     r0, r16, r17
	lwz      r17, 0x28(r30)
	stwx     r0, r17, r18
	lwz      r18, 0x28(r30)
	stwx     r3, r18, r19
	lwz      r19, 0x28(r30)
	stwx     r0, r19, r20
	lwz      r20, 0x28(r30)
	stwx     r0, r20, r21
	lwz      r21, 0x28(r30)
	stwx     r3, r21, r22
	lwz      r22, 0x28(r30)
	stwx     r0, r22, r23
	lwz      r23, 0x28(r30)
	stwx     r0, r23, r24
	lwz      r24, 0x28(r30)
	stwx     r3, r24, r25
	lwz      r25, 0x28(r30)
	stwx     r0, r25, r26
	lwz      r26, 0x28(r30)
	stwx     r0, r26, r27
	lwz      r27, 0x28(r30)
	stwx     r3, r27, r28
	lwz      r28, 0x28(r30)
	stwx     r0, r28, r29
	lwz      r29, 0x28(r30)
	stwx     r0, r29, r12
	lwz      r12, 0x28(r30)
	stwx     r3, r12, r11
	lwz      r11, 0x28(r30)
	stwx     r0, r11, r10
	lwz      r10, 0x28(r30)
	stwx     r0, r10, r9
	lwz      r9, 0x28(r30)
	stwx     r3, r9, r8
	lwz      r3, 0x28(r30)
	stwx     r0, r3, r7
	lwz      r3, 0x28(r30)
	stwx     r0, r3, r6
	bdnz     lbl_80242E90

lbl_80242FC0:
	subf     r0, r5, r31
	li       r7, 0
	mulli    r8, r5, 0xc
	li       r6, -1
	mtctr    r0
	cmpw     r5, r31
	bge      lbl_80243004

lbl_80242FDC:
	lwz      r4, 0x28(r30)
	addi     r3, r8, 4
	addi     r0, r8, 8
	stwx     r7, r4, r8
	addi     r8, r8, 0xc
	lwz      r4, 0x28(r30)
	stwx     r6, r4, r3
	lwz      r3, 0x28(r30)
	stwx     r6, r3, r0
	bdnz     lbl_80242FDC

lbl_80243004:
	mr       r3, r30
	lmw      r16, 0x10(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024301C
 * Size:	00000C
 */
void Cave::MapNode::setOffset(int, int)
{
	/*
	stw      r4, 0x2c(r3)
	stw      r5, 0x30(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80243028
 * Size:	000024
 */
void Cave::MapNode::getDoorDirect(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       getDoorNode__Q34Game4Cave7MapNodeFi
	lwz      r0, 0x14(r1)
	lwz      r3, 0x18(r3)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024304C
 * Size:	000100
 */
void Cave::MapNode::getDoorOffset(int, int&, int&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r6
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r5
	stw      r28, 0x10(r1)
	mr       r28, r3
	bl       getDoorNode__Q34Game4Cave7MapNodeFi
	mr       r30, r3
	lwz      r0, 0x18(r3)
	cmpwi    r0, 2
	beq      lbl_802430EC
	bge      lbl_8024309C
	cmpwi    r0, 0
	beq      lbl_802430A8
	bge      lbl_802430C4
	b        lbl_8024312C

lbl_8024309C:
	cmpwi    r0, 4
	bge      lbl_8024312C
	b        lbl_80243114

lbl_802430A8:
	lwz      r3, 0x2c(r28)
	lwz      r0, 0x1c(r30)
	add      r0, r3, r0
	stw      r0, 0(r29)
	lwz      r0, 0x30(r28)
	stw      r0, 0(r31)
	b        lbl_8024312C

lbl_802430C4:
	lwz      r3, 0x18(r28)
	bl       getUnitSizeX__Q34Game4Cave8UnitInfoFv
	lwz      r0, 0x2c(r28)
	add      r0, r0, r3
	stw      r0, 0(r29)
	lwz      r3, 0x30(r28)
	lwz      r0, 0x1c(r30)
	add      r0, r3, r0
	stw      r0, 0(r31)
	b        lbl_8024312C

lbl_802430EC:
	lwz      r3, 0x2c(r28)
	lwz      r0, 0x1c(r30)
	add      r0, r3, r0
	stw      r0, 0(r29)
	lwz      r3, 0x18(r28)
	bl       getUnitSizeY__Q34Game4Cave8UnitInfoFv
	lwz      r0, 0x30(r28)
	add      r0, r0, r3
	stw      r0, 0(r31)
	b        lbl_8024312C

lbl_80243114:
	lwz      r0, 0x2c(r28)
	stw      r0, 0(r29)
	lwz      r3, 0x30(r28)
	lwz      r0, 0x1c(r30)
	add      r0, r3, r0
	stw      r0, 0(r31)

lbl_8024312C:
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
 * Address:	8024314C
 * Size:	0000FC
 */
void Cave::MapNode::isDoorSet(Game::Cave::DoorNode*, int, int, int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r4
	mr       r31, r3
	mr       r28, r5
	mr       r29, r6
	mr       r4, r7
	bl       getDoorNode__Q34Game4Cave7MapNodeFi
	mr       r30, r3
	mr       r4, r27
	bl       isDoorAdjust__Q34Game4Cave8DoorNodeFPQ34Game4Cave8DoorNode
	clrlwi.  r0, r3, 0x18
	beq      lbl_80243230
	stw      r28, 0x2c(r31)
	stw      r29, 0x30(r31)
	lwz      r0, 0x18(r30)
	cmpwi    r0, 0
	bne      lbl_802431B0
	lwz      r3, 0x1c(r30)
	lwz      r0, 0x2c(r31)
	subf     r0, r3, r0
	stw      r0, 0x2c(r31)
	b        lbl_80243228

lbl_802431B0:
	cmpwi    r0, 2
	bne      lbl_802431E0
	lwz      r3, 0x1c(r30)
	lwz      r0, 0x2c(r31)
	subf     r0, r3, r0
	stw      r0, 0x2c(r31)
	lwz      r3, 0x18(r31)
	bl       getUnitSizeY__Q34Game4Cave8UnitInfoFv
	lwz      r0, 0x30(r31)
	subf     r0, r3, r0
	stw      r0, 0x30(r31)
	b        lbl_80243228

lbl_802431E0:
	cmpwi    r0, 3
	bne      lbl_802431FC
	lwz      r3, 0x1c(r30)
	lwz      r0, 0x30(r31)
	subf     r0, r3, r0
	stw      r0, 0x30(r31)
	b        lbl_80243228

lbl_802431FC:
	cmpwi    r0, 1
	bne      lbl_80243228
	lwz      r3, 0x18(r31)
	bl       getUnitSizeX__Q34Game4Cave8UnitInfoFv
	lwz      r0, 0x2c(r31)
	subf     r0, r3, r0
	stw      r0, 0x2c(r31)
	lwz      r3, 0x1c(r30)
	lwz      r0, 0x30(r31)
	subf     r0, r3, r0
	stw      r0, 0x30(r31)

lbl_80243228:
	li       r3, 1
	b        lbl_80243234

lbl_80243230:
	li       r3, 0

lbl_80243234:
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80243248
 * Size:	000034
 */
void Cave::MapNode::setDoorClose(int, Game::Cave::MapNode*, int)
{
	/*
	mulli    r8, r4, 0xc
	lwz      r7, 0x28(r3)
	stwx     r5, r7, r8
	mulli    r9, r6, 0xc
	lwz      r0, 0x28(r3)
	add      r7, r0, r8
	stw      r6, 4(r7)
	lwz      r6, 0x28(r5)
	stwx     r3, r6, r9
	lwz      r0, 0x28(r5)
	add      r3, r0, r9
	stw      r4, 4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024327C
 * Size:	00009C
 */
void Cave::MapNode::detachDoorClose(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	li       r7, 0
	mtctr    r3
	cmpwi    r3, 0
	ble      lbl_80243304
	mr       r6, r7
	mr       r4, r7
	li       r5, -1

lbl_802432B0:
	lwz      r0, 0x28(r31)
	add      r3, r0, r7
	lwz      r8, 0(r3)
	cmplwi   r8, 0
	beq      lbl_802432E8
	lwz      r0, 4(r3)
	lwz      r3, 0x28(r8)
	mulli    r8, r0, 0xc
	stwx     r6, r3, r8
	addi     r0, r8, 4
	lwz      r3, 0x28(r31)
	lwzx     r3, r3, r7
	lwz      r3, 0x28(r3)
	stwx     r5, r3, r0

lbl_802432E8:
	lwz      r3, 0x28(r31)
	addi     r0, r7, 4
	stwx     r4, r3, r7
	addi     r7, r7, 0xc
	lwz      r3, 0x28(r31)
	stwx     r5, r3, r0
	bdnz     lbl_802432B0

lbl_80243304:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80243318
 * Size:	00001C
 */
void Cave::MapNode::isDoorClose(int)
{
	/*
	mulli    r0, r4, 0xc
	lwz      r3, 0x28(r3)
	lwzx     r3, r3, r0
	neg      r0, r3
	or       r0, r0, r3
	srwi     r3, r0, 0x1f
	blr
	*/
}

/*
 * --INFO--
 * Address:	80243334
 * Size:	000100
 */
void Cave::MapNode::resetDoorScore(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	cmpwi    r3, 0
	li       r30, 0
	ble      lbl_8024341C
	cmpwi    r3, 8
	addi     r4, r3, -8
	ble      lbl_802433F0
	addi     r0, r4, 7
	li       r12, 0
	srwi     r0, r0, 3
	mtctr    r0
	cmpwi    r4, 0
	ble      lbl_802433F0

lbl_80243380:
	lwz      r4, 0x28(r31)
	addi     r0, r12, 8
	li       r11, -1
	addi     r9, r12, 0x14
	stwx     r11, r4, r0
	addi     r8, r12, 0x20
	addi     r7, r12, 0x2c
	addi     r6, r12, 0x38
	lwz      r10, 0x28(r31)
	addi     r5, r12, 0x44
	addi     r4, r12, 0x50
	addi     r0, r12, 0x5c
	stwx     r11, r10, r9
	addi     r12, r12, 0x60
	addi     r30, r30, 8
	lwz      r9, 0x28(r31)
	stwx     r11, r9, r8
	lwz      r8, 0x28(r31)
	stwx     r11, r8, r7
	lwz      r7, 0x28(r31)
	stwx     r11, r7, r6
	lwz      r6, 0x28(r31)
	stwx     r11, r6, r5
	lwz      r5, 0x28(r31)
	stwx     r11, r5, r4
	lwz      r4, 0x28(r31)
	stwx     r11, r4, r0
	bdnz     lbl_80243380

lbl_802433F0:
	subf     r0, r30, r3
	li       r4, -1
	mulli    r5, r30, 0xc
	mtctr    r0
	cmpw     r30, r3
	bge      lbl_8024341C

lbl_80243408:
	lwz      r3, 0x28(r31)
	addi     r0, r5, 8
	addi     r5, r5, 0xc
	stwx     r4, r3, r0
	bdnz     lbl_80243408

lbl_8024341C:
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
 * Address:	80243434
 * Size:	000034
 */
void Cave::MapNode::setDoorScore(int, int)
{
	/*
	mulli    r6, r4, 0xc
	lwz      r0, 0x28(r3)
	add      r4, r0, r6
	stw      r5, 8(r4)
	lwz      r4, 0x28(r3)
	add      r3, r4, r6
	lwzx     r4, r4, r6
	lwz      r0, 4(r3)
	lwz      r3, 0x28(r4)
	mulli    r0, r0, 0xc
	add      r3, r3, r0
	stw      r5, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80243468
 * Size:	00001C
 */
void Cave::MapNode::isDoorScoreSetDone(int)
{
	/*
	mulli    r0, r4, 0xc
	lwz      r3, 0x28(r3)
	add      r3, r3, r0
	lwz      r0, 8(r3)
	srwi     r0, r0, 0x1f
	xori     r3, r0, 1
	blr
	*/
}

/*
 * --INFO--
 * Address:	80243484
 * Size:	000024
 */
void Cave::MapNode::getDoorNode(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x18(r3)
	bl       getDoorNode__Q34Game4Cave8UnitInfoFi
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802434A8
 * Size:	000014
 */
void Cave::MapNode::getAdjustNode(int)
{
	/*
	lwz      r3, 0x18(r3)
	mulli    r0, r4, 0x1c
	lwz      r3, 4(r3)
	add      r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802434BC
 * Size:	000164
 */
void Cave::MapNode::isGateSetDoor(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r4
	lwz      r3, 0x20(r3)
	lwz      r30, 0x10(r3)
	b        lbl_80243514

lbl_802434EC:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	cmpw     r28, r3
	bne      lbl_80243510
	li       r3, 1
	b        lbl_80243600

lbl_80243510:
	lwz      r30, 4(r30)

lbl_80243514:
	cmplwi   r30, 0
	bne      lbl_802434EC
	mulli    r30, r28, 0xc
	lwz      r3, 0x28(r31)
	lwzx     r3, r3, r30
	lwz      r3, 0x20(r3)
	lwz      r29, 0x10(r3)
	b        lbl_80243568

lbl_80243534:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x28(r31)
	addi     r0, r4, 4
	lwzx     r0, r30, r0
	cmpw     r0, r3
	bne      lbl_80243564
	li       r3, 1
	b        lbl_80243600

lbl_80243564:
	lwz      r29, 4(r29)

lbl_80243568:
	cmplwi   r29, 0
	bne      lbl_80243534
	lwz      r3, 0x1c(r31)
	lwz      r29, 0x10(r3)
	b        lbl_802435A4

lbl_8024357C:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	cmpw     r28, r3
	bne      lbl_802435A0
	li       r3, 1
	b        lbl_80243600

lbl_802435A0:
	lwz      r29, 4(r29)

lbl_802435A4:
	cmplwi   r29, 0
	bne      lbl_8024357C
	lwz      r3, 0x28(r31)
	lwzx     r3, r3, r30
	lwz      r3, 0x1c(r3)
	lwz      r29, 0x10(r3)
	b        lbl_802435F4

lbl_802435C0:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x28(r31)
	addi     r0, r4, 4
	lwzx     r0, r30, r0
	cmpw     r0, r3
	bne      lbl_802435F0
	li       r3, 1
	b        lbl_80243600

lbl_802435F0:
	lwz      r29, 4(r29)

lbl_802435F4:
	cmplwi   r29, 0
	bne      lbl_802435C0
	li       r3, 0

lbl_80243600:
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
 * Address:	80243620
 * Size:	000198
 */
void Cave::MapNode::getGateScore(int)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r27, 0x1c(r1)
	mr       r28, r3
	mr       r29, r4
	li       r30, 0
	lwz      r3, 0x20(r3)
	lwz      r31, 0x10(r3)
	b        lbl_80243694

lbl_80243648:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	cmpw     r29, r3
	bne      lbl_80243690
	lwz      r3, 0x18(r31)
	li       r0, 0x3e8
	lwz      r3, 0(r3)
	cmplwi   r3, 0
	beq      lbl_80243688
	lfs      f0, 0x1c(r3)
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)

lbl_80243688:
	mr       r30, r0
	b        lbl_8024369C

lbl_80243690:
	lwz      r31, 4(r31)

lbl_80243694:
	cmplwi   r31, 0
	bne      lbl_80243648

lbl_8024369C:
	mulli    r31, r29, 0xc
	lwz      r3, 0x28(r28)
	lwzx     r3, r3, r31
	lwz      r3, 0x20(r3)
	lwz      r27, 0x10(r3)
	b        lbl_8024370C

lbl_802436B4:
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x28(r28)
	addi     r0, r4, 4
	lwzx     r0, r31, r0
	cmpw     r0, r3
	bne      lbl_80243708
	lwz      r3, 0x18(r27)
	li       r0, 0x3e8
	lwz      r3, 0(r3)
	cmplwi   r3, 0
	beq      lbl_80243700
	lfs      f0, 0x1c(r3)
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)

lbl_80243700:
	add      r30, r30, r0
	b        lbl_80243714

lbl_80243708:
	lwz      r27, 4(r27)

lbl_8024370C:
	cmplwi   r27, 0
	bne      lbl_802436B4

lbl_80243714:
	lwz      r3, 0x1c(r28)
	lwz      r27, 0x10(r3)
	b        lbl_80243748

lbl_80243720:
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	cmpw     r29, r3
	bne      lbl_80243744
	addi     r30, r30, 5
	b        lbl_80243750

lbl_80243744:
	lwz      r27, 4(r27)

lbl_80243748:
	cmplwi   r27, 0
	bne      lbl_80243720

lbl_80243750:
	lwz      r3, 0x28(r28)
	lwzx     r3, r3, r31
	lwz      r3, 0x1c(r3)
	lwz      r27, 0x10(r3)
	b        lbl_80243798

lbl_80243764:
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x28(r28)
	addi     r0, r4, 4
	lwzx     r0, r31, r0
	cmpw     r0, r3
	bne      lbl_80243794
	addi     r30, r30, 5
	b        lbl_802437A0

lbl_80243794:
	lwz      r27, 4(r27)

lbl_80243798:
	cmplwi   r27, 0
	bne      lbl_80243764

lbl_802437A0:
	mr       r3, r30
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802437B8
 * Size:	0000AC
 */
void Cave::MapNode::setEnemyScore(void)
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
	stw      r0, 0x34(r3)
	lwz      r3, 0x1c(r3)
	lwz      r31, 0x10(r3)
	b        lbl_80243840

lbl_802437E8:
	lwz      r4, 0x1c(r31)
	mr       r3, r31
	li       r30, 0
	cmplwi   r4, 0
	beq      lbl_8024381C
	lwz      r0, 0x18(r4)
	cmpwi    r0, 0
	bne      lbl_80243810
	li       r30, 2
	b        lbl_8024381C

lbl_80243810:
	cmpwi    r0, 1
	bne      lbl_8024381C
	li       r30, 0xa

lbl_8024381C:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	mullw    r3, r30, r3
	lwz      r0, 0x34(r29)
	add      r0, r0, r3
	stw      r0, 0x34(r29)
	lwz      r31, 4(r31)

lbl_80243840:
	cmplwi   r31, 0
	bne      lbl_802437E8
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
 * Address:	80243864
 * Size:	000008
 */
void Cave::MapNode::setNodeScore(int a1)
{
	// Generated from stw r4, 0x38(r3)
	_38 = a1;
}

/*
 * --INFO--
 * Address:	8024386C
 * Size:	00000C
 */
void Cave::MapNode::copyNodeScoreToVersusScore(void)
{
	/*
	lwz      r0, 0x38(r3)
	stw      r0, 0x3c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80243878
 * Size:	000014
 */
void Cave::MapNode::subNodeScoreToVersusScore(void)
{
	/*
	lwz      r4, 0x38(r3)
	lwz      r0, 0x3c(r3)
	subf     r0, r4, r0
	stw      r0, 0x3c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024388C
 * Size:	000110
 */
void Cave::MapNode::draw(float, float, float)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stfd     f30, 0x50(r1)
	psq_st   f30, 88(r1), 0, qr0
	stfd     f29, 0x40(r1)
	psq_st   f29, 72(r1), 0, qr0
	stfd     f28, 0x30(r1)
	psq_st   f28, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	mr       r31, r3
	lis      r4, 0x4330
	lwz      r3, 0x2c(r3)
	fmr      f28, f3
	lwz      r0, 0x30(r31)
	xoris    r3, r3, 0x8000
	stw      r4, 8(r1)
	xoris    r0, r0, 0x8000
	lfd      f4, lbl_8051A6E0@sda21(r2)
	stw      r3, 0xc(r1)
	lwz      r3, 0x18(r31)
	lfd      f0, 8(r1)
	stw      r0, 0x14(r1)
	fsubs    f3, f0, f4
	stw      r4, 0x10(r1)
	lfd      f0, 0x10(r1)
	fmadds   f31, f3, f28, f1
	fsubs    f0, f0, f4
	fmadds   f30, f0, f28, f2
	bl       getUnitSizeX__Q34Game4Cave8UnitInfoFv
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x1c(r1)
	lfd      f1, lbl_8051A6E0@sda21(r2)
	stw      r0, 0x18(r1)
	lwz      r3, 0x18(r31)
	lfd      f0, 0x18(r1)
	fsubs    f0, f0, f1
	fmadds   f29, f28, f0, f31
	bl       getUnitSizeY__Q34Game4Cave8UnitInfoFv
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x24(r1)
	fmr      f1, f31
	lfd      f4, lbl_8051A6E0@sda21(r2)
	fmr      f2, f30
	stw      r0, 0x20(r1)
	fmr      f3, f29
	lwz      r3, 0x18(r31)
	lfd      f0, 0x20(r1)
	fsubs    f0, f0, f4
	fmadds   f4, f28, f0, f30
	bl       draw__Q34Game4Cave8UnitInfoFffff
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	psq_l    f29, 72(r1), 0, qr0
	lfd      f29, 0x40(r1)
	psq_l    f28, 56(r1), 0, qr0
	lfd      f28, 0x30(r1)
	lwz      r0, 0x74(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	8024399C
 * Size:	000008
 */
void Cave::MapNode::getNodeOffsetX(void)
{
	/*
	lwz      r3, 0x2c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802439A4
 * Size:	000008
 */
void Cave::MapNode::getNodeOffsetY(void)
{
	/*
	lwz      r3, 0x30(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802439AC
 * Size:	000008
 */
void Cave::MapNode::getEnemyScore(void)
{
	/*
	lwz      r3, 0x34(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802439B4
 * Size:	000008
 */
void Cave::MapNode::getNodeScore(void)
{
	/*
	lwz      r3, 0x38(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802439BC
 * Size:	000008
 */
void Cave::MapNode::getVersusScore(void)
{
	/*
	lwz      r3, 0x3c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802439C4
 * Size:	000024
 */
void Cave::MapNode::getUnitName(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x18(r3)
	bl       getUnitName__Q34Game4Cave8UnitInfoFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802439E8
 * Size:	0000D0
 */
void Cave::MapNode::getNodeCentreOffset(float&, float&)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r5
	stw      r30, 0x38(r1)
	mr       r30, r4
	stw      r29, 0x34(r1)
	mr       r29, r3
	lwz      r3, 0x18(r3)
	bl       getUnitSizeX__Q34Game4Cave8UnitInfoFv
	lwz      r0, 0x2c(r29)
	lis      r4, 0x4330
	xoris    r3, r3, 0x8000
	stw      r4, 8(r1)
	xoris    r0, r0, 0x8000
	lfd      f3, lbl_8051A6E0@sda21(r2)
	stw      r3, 0xc(r1)
	lfs      f1, lbl_8051A6E8@sda21(r2)
	lfd      f0, 8(r1)
	stw      r0, 0x14(r1)
	fsubs    f2, f0, f3
	stw      r4, 0x10(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f3
	fmadds   f0, f2, f1, f0
	stfs     f0, 0(r30)
	lwz      r3, 0x18(r29)
	bl       getUnitSizeY__Q34Game4Cave8UnitInfoFv
	lwz      r0, 0x30(r29)
	lis      r4, 0x4330
	xoris    r3, r3, 0x8000
	stw      r4, 0x18(r1)
	xoris    r0, r0, 0x8000
	lfd      f3, lbl_8051A6E0@sda21(r2)
	stw      r3, 0x1c(r1)
	lfs      f1, lbl_8051A6E8@sda21(r2)
	lfd      f0, 0x18(r1)
	stw      r0, 0x24(r1)
	fsubs    f2, f0, f3
	stw      r4, 0x20(r1)
	lfd      f0, 0x20(r1)
	fsubs    f0, f0, f3
	fmadds   f0, f2, f1, f0
	stfs     f0, 0(r31)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	80243AB8
 * Size:	000024
 */
void Cave::MapNode::getDirection(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x18(r3)
	bl       getUnitRotation__Q34Game4Cave8UnitInfoFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80243ADC
 * Size:	0001C4
 */
void Cave::MapNode::getBaseGenGlobalPosition(Game::Cave::BaseGen*)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stfd     f30, 0x50(r1)
	psq_st   f30, 88(r1), 0, qr0
	stfd     f29, 0x40(r1)
	psq_st   f29, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	stw      r29, 0x34(r1)
	mr       r30, r4
	mr       r29, r3
	lfs      f31, lbl_8051A6EC@sda21(r2)
	mr       r31, r5
	lwz      r3, 0x18(r4)
	bl       getUnitSizeX__Q34Game4Cave8UnitInfoFv
	lwz      r0, 0x2c(r30)
	xoris    r3, r3, 0x8000
	lis      r4, 0x4330
	stw      r3, 0xc(r1)
	xoris    r0, r0, 0x8000
	lfd      f3, lbl_8051A6E0@sda21(r2)
	stw      r4, 8(r1)
	lfs      f1, lbl_8051A6E8@sda21(r2)
	lfd      f0, 8(r1)
	stw      r0, 0x14(r1)
	fsubs    f2, f0, f3
	lwz      r3, 0x18(r30)
	stw      r4, 0x10(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f3
	fmadds   f30, f2, f1, f0
	bl       getUnitSizeY__Q34Game4Cave8UnitInfoFv
	lwz      r0, 0x30(r30)
	xoris    r3, r3, 0x8000
	lis      r4, 0x4330
	lfs      f0, lbl_8051A6F0@sda21(r2)
	xoris    r0, r0, 0x8000
	stw      r3, 0x1c(r1)
	lfd      f4, lbl_8051A6E0@sda21(r2)
	fmuls    f30, f30, f0
	stw      r4, 0x18(r1)
	lfs      f2, lbl_8051A6E8@sda21(r2)
	lfd      f1, 0x18(r1)
	stw      r0, 0x24(r1)
	fsubs    f3, f1, f4
	lwz      r3, 0x18(r30)
	stw      r4, 0x20(r1)
	lfd      f1, 0x20(r1)
	fsubs    f1, f1, f4
	fmadds   f29, f3, f2, f1
	fmuls    f29, f29, f0
	bl       getBaseGen__Q34Game4Cave8UnitInfoFv
	cmplwi   r3, 0
	beq      lbl_80243C60
	lwz      r3, 0x10(r3)
	b        lbl_80243C58

lbl_80243BC8:
	cmplw    r3, r31
	bne      lbl_80243C54
	lfs      f31, 0x20(r31)
	lwz      r3, 0x18(r30)
	bl       getUnitRotation__Q34Game4Cave8UnitInfoFv
	cmpwi    r3, 2
	beq      lbl_80243C2C
	bge      lbl_80243BF8
	cmpwi    r3, 0
	beq      lbl_80243C04
	bge      lbl_80243C18
	b        lbl_80243C60

lbl_80243BF8:
	cmpwi    r3, 4
	bge      lbl_80243C60
	b        lbl_80243C40

lbl_80243C04:
	lfs      f1, 0x1c(r31)
	lfs      f0, 0x24(r31)
	fadds    f30, f30, f1
	fadds    f29, f29, f0
	b        lbl_80243C60

lbl_80243C18:
	lfs      f1, 0x24(r31)
	lfs      f0, 0x1c(r31)
	fsubs    f30, f30, f1
	fadds    f29, f29, f0
	b        lbl_80243C60

lbl_80243C2C:
	lfs      f1, 0x1c(r31)
	lfs      f0, 0x24(r31)
	fsubs    f30, f30, f1
	fsubs    f29, f29, f0
	b        lbl_80243C60

lbl_80243C40:
	lfs      f1, 0x24(r31)
	lfs      f0, 0x1c(r31)
	fadds    f30, f30, f1
	fsubs    f29, f29, f0
	b        lbl_80243C60

lbl_80243C54:
	lwz      r3, 4(r3)

lbl_80243C58:
	cmplwi   r3, 0
	bne      lbl_80243BC8

lbl_80243C60:
	stfs     f30, 0(r29)
	stfs     f31, 4(r29)
	stfs     f29, 8(r29)
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	psq_l    f29, 72(r1), 0, qr0
	lfd      f29, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r0, 0x74(r1)
	lwz      r29, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	80243CA0
 * Size:	00025C
 */
void Cave::MapNode::getDoorGlobalPosition(int)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stfd     f30, 0x30(r1)
	psq_st   f30, 56(r1), 0, qr0
	stmw     r26, 0x18(r1)
	lfs      f31, lbl_8051A6EC@sda21(r2)
	mr       r26, r4
	mr       r31, r3
	mr       r30, r5
	fmr      f30, f31
	lwz      r3, 0x18(r4)
	mr       r4, r30
	bl       getDoorNode__Q34Game4Cave8UnitInfoFi
	lwz      r29, 0x18(r3)
	mr       r4, r30
	lwz      r3, 0x18(r26)
	bl       getDoorNode__Q34Game4Cave8UnitInfoFi
	mr       r30, r3
	lwz      r0, 0x18(r3)
	cmpwi    r0, 2
	beq      lbl_80243D54
	bge      lbl_80243D14
	cmpwi    r0, 0
	beq      lbl_80243D20
	bge      lbl_80243D34
	b        lbl_80243D84

lbl_80243D14:
	cmpwi    r0, 4
	bge      lbl_80243D84
	b        lbl_80243D74

lbl_80243D20:
	lwz      r3, 0x2c(r26)
	lwz      r0, 0x1c(r30)
	lwz      r27, 0x30(r26)
	add      r28, r3, r0
	b        lbl_80243D84

lbl_80243D34:
	lwz      r3, 0x18(r26)
	bl       getUnitSizeX__Q34Game4Cave8UnitInfoFv
	lwz      r5, 0x2c(r26)
	lwz      r4, 0x30(r26)
	lwz      r0, 0x1c(r30)
	add      r28, r5, r3
	add      r27, r4, r0
	b        lbl_80243D84

lbl_80243D54:
	lwz      r4, 0x2c(r26)
	lwz      r0, 0x1c(r30)
	lwz      r3, 0x18(r26)
	add      r28, r4, r0
	bl       getUnitSizeY__Q34Game4Cave8UnitInfoFv
	lwz      r0, 0x30(r26)
	add      r27, r0, r3
	b        lbl_80243D84

lbl_80243D74:
	lwz      r3, 0x30(r26)
	lwz      r0, 0x1c(r30)
	lwz      r28, 0x2c(r26)
	add      r27, r3, r0

lbl_80243D84:
	cmpwi    r29, 2
	beq      lbl_80243E3C
	bge      lbl_80243DA0
	cmpwi    r29, 0
	beq      lbl_80243DAC
	bge      lbl_80243DF4
	b        lbl_80243EC8

lbl_80243DA0:
	cmpwi    r29, 4
	bge      lbl_80243EC8
	b        lbl_80243E84

lbl_80243DAC:
	lis      r3, 0x4330
	xoris    r0, r28, 0x8000
	stw      r0, 0xc(r1)
	xoris    r0, r27, 0x8000
	lfd      f2, lbl_8051A6E0@sda21(r2)
	stw      r3, 8(r1)
	lfs      f3, lbl_8051A6E8@sda21(r2)
	lfd      f0, 8(r1)
	stw      r0, 0x14(r1)
	fsubs    f1, f0, f2
	lfs      f4, lbl_8051A6F0@sda21(r2)
	stw      r3, 0x10(r1)
	lfd      f0, 0x10(r1)
	fadds    f1, f3, f1
	fsubs    f0, f0, f2
	fmuls    f31, f4, f1
	fmuls    f30, f4, f0
	b        lbl_80243EC8

lbl_80243DF4:
	lis      r3, 0x4330
	xoris    r0, r27, 0x8000
	stw      r0, 0xc(r1)
	xoris    r0, r28, 0x8000
	lfd      f3, lbl_8051A6E0@sda21(r2)
	stw      r3, 8(r1)
	lfs      f1, lbl_8051A6E8@sda21(r2)
	lfd      f0, 8(r1)
	stw      r0, 0x14(r1)
	fsubs    f0, f0, f3
	lfs      f4, lbl_8051A6F0@sda21(r2)
	stw      r3, 0x10(r1)
	lfd      f2, 0x10(r1)
	fadds    f0, f1, f0
	fsubs    f1, f2, f3
	fmuls    f30, f4, f0
	fmuls    f31, f4, f1
	b        lbl_80243EC8

lbl_80243E3C:
	lis      r3, 0x4330
	xoris    r0, r28, 0x8000
	stw      r0, 0x14(r1)
	xoris    r0, r27, 0x8000
	lfd      f2, lbl_8051A6E0@sda21(r2)
	stw      r3, 0x10(r1)
	lfs      f3, lbl_8051A6E8@sda21(r2)
	lfd      f0, 0x10(r1)
	stw      r0, 0xc(r1)
	fsubs    f1, f0, f2
	lfs      f4, lbl_8051A6F0@sda21(r2)
	stw      r3, 8(r1)
	lfd      f0, 8(r1)
	fadds    f1, f3, f1
	fsubs    f0, f0, f2
	fmuls    f31, f4, f1
	fmuls    f30, f4, f0
	b        lbl_80243EC8

lbl_80243E84:
	lis      r3, 0x43300018@ha
	xoris    r0, r27, 0x8000
	stw      r0, 0xc(r1)
	xoris    r0, r28, 0x8000
	lfd      f3, lbl_8051A6E0@sda21(r2)
	stw      r3, 8(r1)
	lfs      f1, lbl_8051A6E8@sda21(r2)
	lfd      f0, 8(r1)
	stw      r0, 0x14(r1)
	fsubs    f0, f0, f3
	lfs      f4, lbl_8051A6F0@sda21(r2)
	stw      r3, 0x10(r1)
	lfd      f2, 0x10(r1)
	fadds    f0, f1, f0
	fsubs    f1, f2, f3
	fmuls    f30, f4, f0
	fmuls    f31, f4, f1

lbl_80243EC8:
	stfs     f31, 0(r31)
	lfs      f0, lbl_8051A6EC@sda21(r2)
	stfs     f0, 4(r31)
	stfs     f30, 8(r31)
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	psq_l    f30, 56(r1), 0, qr0
	lfd      f30, 0x30(r1)
	lmw      r26, 0x18(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	80243EFC
 * Size:	0000EC
 */
void Cave::MapNode::getBaseGenGlobalDirection(Game::Cave::BaseGen*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	mr       r31, r4
	lwz      r3, 0x43300018@l(r3)
	bl       getUnitRotation__Q34Game4Cave8UnitInfoFv
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfd      f3, lbl_8051A6E0@sda21(r2)
	stw      r0, 8(r1)
	lfs      f1, lbl_8051A6F4@sda21(r2)
	lfd      f2, 8(r1)
	lfs      f0, lbl_8051A6EC@sda21(r2)
	fsubs    f2, f2, f3
	fmuls    f1, f1, f2
	fcmpo    cr0, f1, f0
	bge      lbl_80243F64
	lfs      f0, lbl_8051A6F8@sda21(r2)
	fadds    f1, f0, f1
	b        lbl_80243F78

lbl_80243F64:
	lfs      f0, lbl_8051A6F8@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80243F78
	fsubs    f1, f1, f0

lbl_80243F78:
	fmr      f31, f1
	lwz      r3, 0x18(r30)
	bl       getBaseGen__Q34Game4Cave8UnitInfoFv
	cmplwi   r3, 0
	beq      lbl_80243FC4
	lwz      r3, 0x10(r3)
	b        lbl_80243FBC

lbl_80243F94:
	cmplw    r3, r31
	bne      lbl_80243FB8
	lfs      f2, lbl_8051A6FC@sda21(r2)
	lfs      f1, 0x28(r3)
	lfs      f0, lbl_8051A700@sda21(r2)
	fmuls    f1, f2, f1
	fdivs    f0, f1, f0
	fadds    f31, f31, f0
	b        lbl_80243FC4

lbl_80243FB8:
	lwz      r3, 4(r3)

lbl_80243FBC:
	cmplwi   r3, 0
	bne      lbl_80243F94

lbl_80243FC4:
	fmr      f1, f31
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80243FE8
 * Size:	000078
 */
void Cave::MapNode::getDoorGlobalDirection(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x18(r3)
	bl       getDoorNode__Q34Game4Cave8UnitInfoFi
	lwz      r3, 0x18(r3)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	xoris    r0, r3, 0x8000
	lfd      f2, lbl_8051A6E0@sda21(r2)
	stw      r0, 0xc(r1)
	lfs      f3, lbl_8051A6F4@sda21(r2)
	lfd      f1, 8(r1)
	lfs      f0, lbl_8051A6EC@sda21(r2)
	fsubs    f1, f1, f2
	fmuls    f1, f3, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8024403C
	lfs      f0, lbl_8051A6F8@sda21(r2)
	fadds    f1, f0, f1
	b        lbl_80244050

lbl_8024403C:
	lfs      f0, lbl_8051A6F8@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80244050
	fsubs    f1, f1, f0

lbl_80244050:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80244060
 * Size:	000034
 */
void Cave::MapNode::getNumDoors(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x18(r3)
	lwz      r3, 0(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80244094
 * Size:	000060
 */
Cave::MapNode::~MapNode(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_802440D8
	lis      r5, __vt__Q34Game4Cave7MapNode@ha
	li       r4, 0
	addi     r0, r5, __vt__Q34Game4Cave7MapNode@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_802440D8
	mr       r3, r30
	bl       __dl__FPv

lbl_802440D8:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
} // namespace Game
