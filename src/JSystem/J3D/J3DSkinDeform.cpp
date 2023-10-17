#include "types.h"
#include "JSystem/J3D/J3DVtxColorCalc.h"
#include "JSystem/J3D/J3DAnmVtxColor.h"
#include "JSystem/J3D/J3DSkinDeform.h"

/*
 * --INFO--
 * Address:	80088658
 * Size:	000088
 */
void J3DSkinDeform::deform(J3DModel* model)
{
	if (model->checkFlag(J3DMODEL_SkinPosCpu)) {
		setFlag(J3DSKIN_Unk2);
	} else {
		resetFlag(J3DSKIN_Unk2);
	}

	if (model->checkFlag(J3DMODEL_SkinNrmCpu)) {
		setFlag(J3DSKIN_Unk1);
	} else {
		resetFlag(J3DSKIN_Unk1);
	}
	deform(&model->mVertexBuffer, model->mMtxBuffer);
}

/*
 * --INFO--
 * Address:	800886E0
 * Size:	000030
 */
void J3DVtxColorCalc::calc(J3DModel* model) { calc(&model->mVertexBuffer); }

/*
 * --INFO--
 * Address:	80088710
 * Size:	0000F4
 */
void J3DVtxColorCalc::calc(J3DVertexBuffer* buffer)
{
	if (checkFlag(1) && mAnmVtxColor) {
		buffer->swapVtxColArrayPointer();
		u16 cnt       = mAnmVtxColor->getAnmTableNum(0);
		GXColor* var2 = buffer->getVtxColArrayPointer(0); // GXColor

		for (u16 i = 0; i < cnt; i++) {
			u32 color;
			mAnmVtxColor->getColor(0, i, (GXColor*)&color);
			J3DAnmVtxColorIndexData* idxData = mAnmVtxColor->getAnmVtxColorIndexData(0, i);
			for (u32 j = 0; j < (u16)idxData->_00; j++) {
				((u32*)var2)[reinterpret_cast<u16*>(idxData->_04)[j]] = color; // _04 may be u16*
			}
		}
		DCStoreRange(var2, buffer->getVertexData()->getColNum() * 4);
		buffer->setCurrentVtxCol(var2);
	}
}
