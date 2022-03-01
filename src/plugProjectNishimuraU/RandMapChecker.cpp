#include "types.h"
#include "Game/Cave/RandMapUnit.h"

/*
    Generated from dpostproc
*/

namespace Game {
namespace Cave {

/*
 * --INFO--
 * Address:	80245664
 * Size:	000008
 * Matches!
 */
RandMapChecker::RandMapChecker(MapNode* mapnode) { m_mapNode = mapnode; }

/*
 * --INFO--
 * Address:	8024566C
 * Size:	00007C
 * Matches!
 */
bool RandMapChecker::isPutOnMap(MapNode* mapnode)
{
	if (isPartsOnParts(mapnode))
		return false;
	if (isDoorOnParts(mapnode))
		return false;
	if (isPartsOnDoor(mapnode))
		return false;
	return true;
}

/*
 * --INFO--
 * Address:	802456E8
 * Size:	0000F0
 * Description: Appears to check if map parts would overlap
 */
bool RandMapChecker::isPartsOnParts(MapNode* mapnode)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stmw     r23, 0x1c(r1)
	mr       r24, r4
	mr       r23, r3
	mr       r3, r24
	bl       getNodeOffsetX__Q34Game4Cave7MapNodeFv
	mr       r0, r3
	mr       r3, r24
	mr       r31, r0
	bl       getNodeOffsetY__Q34Game4Cave7MapNodeFv
	mr       r0, r3
	lwz      r3, 0x18(r24)
	mr       r30, r0
	bl       getUnitSizeX__Q34Game4Cave8UnitInfoFv
	add      r29, r31, r3
	lwz      r3, 0x18(r24)
	bl       getUnitSizeY__Q34Game4Cave8UnitInfoFv
	lwz      r4, 0(r23)
	add      r28, r30, r3
	lwz      r24, 0x10(r4)
	b        lbl_802457B8

lbl_80245744:
	mr       r3, r24
	bl       getNodeOffsetX__Q34Game4Cave7MapNodeFv
	mr       r0, r3
	mr       r3, r24
	mr       r27, r0
	bl       getNodeOffsetY__Q34Game4Cave7MapNodeFv
	mr       r0, r3
	lwz      r3, 0x18(r24)
	mr       r26, r0
	bl       getUnitSizeX__Q34Game4Cave8UnitInfoFv
	add      r25, r27, r3
	lwz      r3, 0x18(r24)
	bl       getUnitSizeY__Q34Game4Cave8UnitInfoFv
	add      r0, r26, r3
	mr       r3, r23
	stw      r0, 8(r1)
	mr       r4, r31
	mr       r5, r30
	mr       r6, r29
	mr       r7, r28
	mr       r8, r27
	mr       r9, r26
	mr       r10, r25
	bl       isInnerBox__Q34Game4Cave14RandMapCheckerFiiiiiiii
	clrlwi.  r0, r3, 0x18
	beq      lbl_802457B4
	li       r3, 1
	b        lbl_802457C4

lbl_802457B4:
	lwz      r24, 4(r24)

lbl_802457B8:
	cmplwi   r24, 0
	bne      lbl_80245744
	li       r3, 0

lbl_802457C4:
	lmw      r23, 0x1c(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	802457D8
 * Size:	000220
 */
bool RandMapChecker::isDoorOnParts(MapNode*)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stmw     r23, 0x2c(r1)
	mr       r29, r4
	mr       r28, r3
	mr       r3, r29
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	mr       r31, r3
	mr       r3, r29
	bl       getNodeOffsetX__Q34Game4Cave7MapNodeFv
	stw      r3, 0x1c(r1)
	mr       r3, r29
	bl       getNodeOffsetY__Q34Game4Cave7MapNodeFv
	stw      r3, 0x18(r1)
	li       r30, 0
	b        lbl_802459D8

lbl_8024581C:
	mr       r3, r29
	mr       r4, r30
	addi     r5, r1, 0x1c
	addi     r6, r1, 0x18
	li       r25, 0
	bl       getDoorOffset__Q34Game4Cave7MapNodeFiRiRi
	lwz      r3, 0(r28)
	lwz      r24, 0x10(r3)
	b        lbl_802458E4

lbl_80245840:
	mr       r3, r24
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	mr       r26, r3
	li       r23, 0
	b        lbl_802458D8

lbl_80245854:
	clrlwi.  r0, r25, 0x18
	bne      lbl_802458D4
	mr       r3, r24
	mr       r4, r23
	bl       isDoorClose__Q34Game4Cave7MapNodeFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_802458D4
	mr       r3, r24
	mr       r4, r23
	bl       getDoorNode__Q34Game4Cave7MapNodeFi
	mr       r27, r3
	mr       r3, r29
	mr       r4, r30
	bl       getDoorNode__Q34Game4Cave7MapNodeFi
	mr       r4, r27
	bl       isDoorAdjust__Q34Game4Cave8DoorNodeFPQ34Game4Cave8DoorNode
	clrlwi.  r0, r3, 0x18
	beq      lbl_802458D4
	mr       r3, r24
	mr       r4, r23
	addi     r5, r1, 0x14
	addi     r6, r1, 0x10
	bl       getDoorOffset__Q34Game4Cave7MapNodeFiRiRi
	lwz      r3, 0x1c(r1)
	lwz      r0, 0x14(r1)
	cmpw     r3, r0
	bne      lbl_802458D4
	lwz      r3, 0x18(r1)
	lwz      r0, 0x10(r1)
	cmpw     r3, r0
	bne      lbl_802458D4
	li       r25, 1

lbl_802458D4:
	addi     r23, r23, 1

lbl_802458D8:
	cmpw     r23, r26
	blt      lbl_80245854
	lwz      r24, 4(r24)

lbl_802458E4:
	cmplwi   r24, 0
	bne      lbl_80245840
	clrlwi.  r0, r25, 0x18
	bne      lbl_802459D4
	mr       r3, r29
	mr       r4, r30
	bl       getDoorDirect__Q34Game4Cave7MapNodeFi
	cmpwi    r3, 3
	beq      lbl_80245928
	bge      lbl_80245934
	cmpwi    r3, 0
	beq      lbl_80245918
	b        lbl_80245934

lbl_80245918:
	lwz      r3, 0x18(r1)
	addi     r0, r3, -1
	stw      r0, 0x18(r1)
	b        lbl_80245934

lbl_80245928:
	lwz      r3, 0x1c(r1)
	addi     r0, r3, -1
	stw      r0, 0x1c(r1)

lbl_80245934:
	lwz      r4, 0x1c(r1)
	lwz      r3, 0x18(r1)
	addi     r4, r4, 1
	addi     r0, r3, 1
	stw      r4, 0x14(r1)
	stw      r0, 0x10(r1)
	lwz      r3, 0(r28)
	lwz      r23, 0x10(r3)
	b        lbl_802459CC

lbl_80245958:
	mr       r3, r23
	bl       getNodeOffsetX__Q34Game4Cave7MapNodeFv
	mr       r0, r3
	mr       r3, r23
	mr       r26, r0
	bl       getNodeOffsetY__Q34Game4Cave7MapNodeFv
	mr       r0, r3
	lwz      r3, 0x18(r23)
	mr       r27, r0
	bl       getUnitSizeX__Q34Game4Cave8UnitInfoFv
	add      r25, r26, r3
	lwz      r3, 0x18(r23)
	bl       getUnitSizeY__Q34Game4Cave8UnitInfoFv
	add      r0, r27, r3
	mr       r3, r28
	stw      r0, 8(r1)
	mr       r8, r26
	mr       r9, r27
	mr       r10, r25
	lwz      r4, 0x1c(r1)
	lwz      r5, 0x18(r1)
	lwz      r6, 0x14(r1)
	lwz      r7, 0x10(r1)
	bl       isInnerBox__Q34Game4Cave14RandMapCheckerFiiiiiiii
	clrlwi.  r0, r3, 0x18
	beq      lbl_802459C8
	li       r3, 1
	b        lbl_802459E4

lbl_802459C8:
	lwz      r23, 4(r23)

lbl_802459CC:
	cmplwi   r23, 0
	bne      lbl_80245958

lbl_802459D4:
	addi     r30, r30, 1

lbl_802459D8:
	cmpw     r30, r31
	blt      lbl_8024581C
	li       r3, 0

lbl_802459E4:
	lmw      r23, 0x2c(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	802459F8
 * Size:	0001E8
 */
bool RandMapChecker::isPartsOnDoor(MapNode*)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stmw     r19, 0x2c(r1)
	mr       r21, r4
	mr       r20, r3
	mr       r3, r21
	bl       getNodeOffsetX__Q34Game4Cave7MapNodeFv
	mr       r0, r3
	mr       r3, r21
	mr       r29, r0
	bl       getNodeOffsetY__Q34Game4Cave7MapNodeFv
	mr       r0, r3
	lwz      r3, 0x18(r21)
	mr       r28, r0
	bl       getUnitSizeX__Q34Game4Cave8UnitInfoFv
	add      r27, r29, r3
	lwz      r3, 0x18(r21)
	bl       getUnitSizeY__Q34Game4Cave8UnitInfoFv
	lwz      r4, 0(r20)
	add      r26, r28, r3
	lwz      r25, 0x10(r4)
	b        lbl_80245BC0

lbl_80245A54:
	mr       r3, r25
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	mr       r30, r3
	li       r24, 0
	b        lbl_80245BB4

lbl_80245A68:
	mr       r3, r25
	mr       r4, r24
	bl       isDoorClose__Q34Game4Cave7MapNodeFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80245BB0
	mr       r3, r21
	li       r23, 0
	bl       getNumDoors__Q34Game4Cave7MapNodeFv
	mr       r31, r3
	mr       r3, r25
	mr       r4, r24
	addi     r5, r1, 0x1c
	addi     r6, r1, 0x18
	bl       getDoorOffset__Q34Game4Cave7MapNodeFiRiRi
	li       r22, 0
	b        lbl_80245B18

lbl_80245AA8:
	clrlwi.  r0, r23, 0x18
	bne      lbl_80245B14
	mr       r3, r21
	mr       r4, r22
	bl       getDoorNode__Q34Game4Cave7MapNodeFi
	mr       r19, r3
	mr       r3, r25
	mr       r4, r24
	bl       getDoorNode__Q34Game4Cave7MapNodeFi
	mr       r4, r19
	bl       isDoorAdjust__Q34Game4Cave8DoorNodeFPQ34Game4Cave8DoorNode
	clrlwi.  r0, r3, 0x18
	beq      lbl_80245B14
	mr       r3, r21
	mr       r4, r22
	addi     r5, r1, 0x14
	addi     r6, r1, 0x10
	bl       getDoorOffset__Q34Game4Cave7MapNodeFiRiRi
	lwz      r3, 0x1c(r1)
	lwz      r0, 0x14(r1)
	cmpw     r3, r0
	bne      lbl_80245B14
	lwz      r3, 0x18(r1)
	lwz      r0, 0x10(r1)
	cmpw     r3, r0
	bne      lbl_80245B14
	li       r23, 1

lbl_80245B14:
	addi     r22, r22, 1

lbl_80245B18:
	cmpw     r22, r31
	blt      lbl_80245AA8
	clrlwi.  r0, r23, 0x18
	bne      lbl_80245BB0
	mr       r3, r25
	mr       r4, r24
	bl       getDoorDirect__Q34Game4Cave7MapNodeFi
	cmpwi    r3, 3
	beq      lbl_80245B5C
	bge      lbl_80245B68
	cmpwi    r3, 0
	beq      lbl_80245B4C
	b        lbl_80245B68

lbl_80245B4C:
	lwz      r3, 0x18(r1)
	addi     r0, r3, -1
	stw      r0, 0x18(r1)
	b        lbl_80245B68

lbl_80245B5C:
	lwz      r3, 0x1c(r1)
	addi     r0, r3, -1
	stw      r0, 0x1c(r1)

lbl_80245B68:
	lwz      r8, 0x1c(r1)
	mr       r3, r20
	lwz      r9, 0x18(r1)
	mr       r4, r29
	addi     r6, r8, 1
	mr       r5, r28
	addi     r0, r9, 1
	stw      r6, 0x14(r1)
	mr       r6, r27
	mr       r7, r26
	stw      r0, 0x10(r1)
	stw      r0, 8(r1)
	lwz      r10, 0x14(r1)
	bl       isInnerBox__Q34Game4Cave14RandMapCheckerFiiiiiiii
	clrlwi.  r0, r3, 0x18
	beq      lbl_80245BB0
	li       r3, 1
	b        lbl_80245BCC

lbl_80245BB0:
	addi     r24, r24, 1

lbl_80245BB4:
	cmpw     r24, r30
	blt      lbl_80245A68
	lwz      r25, 4(r25)

lbl_80245BC0:
	cmplwi   r25, 0
	bne      lbl_80245A54
	li       r3, 0

lbl_80245BCC:
	lmw      r19, 0x2c(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	80245BE0
 * Size:	00007C
 */
bool RandMapChecker::isInnerBox(int, int, int, int, int, int, int, int)
{
	/*
	cmpw     r4, r8
	lwz      r0, 8(r1)
	bge      lbl_80245C24
	cmpw     r5, r9
	bge      lbl_80245C0C
	cmpw     r6, r8
	ble      lbl_80245C54
	cmpw     r7, r9
	ble      lbl_80245C54
	li       r3, 1
	blr

lbl_80245C0C:
	cmpw     r5, r0
	bge      lbl_80245C54
	cmpw     r6, r8
	ble      lbl_80245C54
	li       r3, 1
	blr

lbl_80245C24:
	cmpw     r4, r10
	bge      lbl_80245C54
	cmpw     r5, r9
	bge      lbl_80245C44
	cmpw     r7, r9
	ble      lbl_80245C54
	li       r3, 1
	blr

lbl_80245C44:
	cmpw     r5, r0
	bge      lbl_80245C54
	li       r3, 1
	blr

lbl_80245C54:
	li       r3, 0
	blr
	*/
}
} // namespace Cave
} // namespace Game
