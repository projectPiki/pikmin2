#include "JSystem/J3D/J3DShape.h"
#include "types.h"

/**
 * @note Address: 0x80089664
 * @note Size: 0x64
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

/**
 * @note Address: 0x800896C8
 * @note Size: 0x94
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
