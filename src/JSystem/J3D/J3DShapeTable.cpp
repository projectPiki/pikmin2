#include "JSystem/J3D/J3DShape.h"
#include "types.h"

/*
 * --INFO--
 * Address:	80089664
 * Size:	000064
 */
void J3DShapeTable::initShapeNodes(J3DDrawMtxData* drawMtxData, J3DVertexData* vtxData)
{
	u16 count = m_count;
	for (u16 i = 0; i < count; i++) {
		J3DShape* shape      = m_items[i];
		shape->m_drawMtxData = drawMtxData;
		shape->m_vtxData     = vtxData;
		shape->makeVcdVatCmd();
	}
}

/*
 * --INFO--
 * Address:	800896C8
 * Size:	000094
 */
void J3DShapeTable::sortVcdVatCmd()
{
	u16 count = m_count;
	for (u16 outerI = 0; outerI < count; outerI++) {
		for (u16 innerI = 0; innerI < outerI; innerI++) {
			if (m_items[outerI]->isSameVcdVatCmd(m_items[innerI])) {
				m_items[outerI]->_2C = m_items[innerI]->_2C;
			}
		}
	}
}
