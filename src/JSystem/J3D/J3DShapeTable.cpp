#include "JSystem/J3D/J3DShape.h"
#include "types.h"

/*
    Generated from dpostproc
*/

/*
 * --INFO--
 * Address:	80089664
 * Size:	000064
 */
void J3DShapeTable::initShapeNodes(J3DDrawMtxData* drawMtxData, J3DVertexData* vtxData)
{
	for (u16 i = 0; i < m_count; i++) {
		m_items[i]->m_drawMtxData = drawMtxData;
		m_items[i]->m_vtxData     = vtxData;
		m_items[i]->makeVcdVatCmd();
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	mr       r28, r4
	mr       r29, r5
	li       r30, 0
	lhz      r31, 4(r3)
	b        lbl_800896A8

lbl_8008968C:
	lwz      r3, 8(r27)
	rlwinm   r0, r30, 2, 0xe, 0x1d
	lwzx     r3, r3, r0
	stw      r28, 0x50(r3)
	stw      r29, 0x4c(r3)
	bl       makeVcdVatCmd__8J3DShapeFv
	addi     r30, r30, 1

lbl_800896A8:
	clrlwi   r0, r30, 0x10
	cmplw    r0, r31
	blt      lbl_8008968C
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800896C8
 * Size:	000094
 */
void J3DShapeTable::sortVcdVatCmd()
{
	for (u16 i = 0; i < m_count; i++) {
		for (u16 j = 0; j < i; j++) {
			if (m_items[i]->isSameVcdVatCmd(m_items[j])) {
				m_items[i]->_2C = m_items[j]->_2C;
			}
		}
	}
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r25, r3
	li       r27, 0
	lhz      r28, 4(r3)
	b        lbl_8008973C

lbl_800896E8:
	clrlwi   r31, r27, 0x10
	rlwinm   r30, r27, 2, 0xe, 0x1d
	li       r26, 0
	b        lbl_8008972C

lbl_800896F8:
	lwz      r4, 8(r25)
	rlwinm   r29, r26, 2, 0xe, 0x1d
	lwzx     r3, r30, r4
	lwzx     r4, r4, r29
	bl       isSameVcdVatCmd__8J3DShapeFP8J3DShape
	clrlwi.  r0, r3, 0x18
	beq      lbl_80089728
	lwz      r3, 8(r25)
	lwzx     r4, r3, r29
	lwzx     r3, r30, r3
	lwz      r0, 0x2c(r4)
	stw      r0, 0x2c(r3)

lbl_80089728:
	addi     r26, r26, 1

lbl_8008972C:
	clrlwi   r0, r26, 0x10
	cmplw    r0, r31
	blt      lbl_800896F8
	addi     r27, r27, 1

lbl_8008973C:
	clrlwi   r0, r27, 0x10
	cmplw    r0, r28
	blt      lbl_800896E8
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}
