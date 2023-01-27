#include "JSystem/J3D/J3DShape.h"
#include "types.h"

/*
 * --INFO--
 * Address:	80089664
 * Size:	000064
 */
void J3DShapeTable::initShapeNodes(J3DDrawMtxData* drawMtxData, J3DVertexData* vtxData)
{
	u16 count = mCount;
	for (u16 i = 0; i < count; i++) {
		J3DShape* shape     = mItems[i];
		shape->mDrawMtxData = drawMtxData;
		shape->mVtxData     = vtxData;
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
	u16 count = mCount;
	for (u16 outerI = 0; outerI < count; outerI++) {
		for (u16 innerI = 0; innerI < outerI; innerI++) {
			if (mItems[outerI]->isSameVcdVatCmd(mItems[innerI])) {
				mItems[outerI]->mVcdVatCmd = mItems[innerI]->mVcdVatCmd;
			}
		}
	}
}
