#include "Game/Entities/BlueChappy.h"

namespace Game {
namespace BlueChappy {
/*
 * --INFO--
 * Address:	8012BBF4
 * Size:	000144
 */
Obj::Obj()
{
	mAnimator = new ChappyBase::ProperAnimator;
	setFSM(new ChappyBase::FSM);
	createEffect();
}

/*
 * --INFO--
 * Address:	8012BD38
 * Size:	0002B0
 */
void Obj::changeMaterial()
{
	J3DModelData* modelData;
	J3DModel* j3dModel = mModel->mJ3dModel;
	modelData          = j3dModel->mModelData;
	ResTIMG* texture0  = static_cast<Mgr*>(mMgr)->getChangeTexture0();
	ResTIMG* texture1  = static_cast<Mgr*>(mMgr)->getChangeTexture1();

	j3dModel->calcMaterial();

	ResTIMG* newTexture0;
	J3DTexture* j3dTexture0 = mModel->mJ3dModel->mModelData->mMaterialTable.mTexture;
	newTexture0             = &j3dTexture0->_04[0];

	texture0->copyTo(newTexture0);

	j3dTexture0->setImageOffset((u32)texture0);
	j3dTexture0->setPaletteOffset((u32)texture0);

	ResTIMG* newTexture1;
	J3DTexture* j3dTexture1 = mModel->mJ3dModel->mModelData->mMaterialTable.mTexture;
	newTexture1             = &j3dTexture1->_04[1];

	texture1->copyTo(newTexture1);

	j3dTexture1->setImageOffset2((u32)texture1);
	j3dTexture1->setPaletteOffset2((u32)texture1);

	for (u16 i = 0; i < modelData->mMaterialTable.mCount1; i++) {
		J3DMatPacket* packet  = &j3dModel->mMatPackets[i];
		j3dSys.mMatPacket     = packet;
		J3DMaterial* material = modelData->mMaterialTable.mMaterials1[i];
		material->diff(packet->mShapePacket->mDiffFlag);
	}
}
} // namespace BlueChappy
} // namespace Game
