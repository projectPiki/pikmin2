#include "Game/Entities/Chappy.h"

namespace Game {
namespace Chappy {

/**
 * @note Address: 0x80115F90
 * @note Size: 0x144
 */
Obj::Obj()
{
	mAnimator = new ChappyBase::ProperAnimator;
	setFSM(new ChappyBase::FSM);
	createEffect();
}

/**
 * @note Address: 0x801161DC
 * @note Size: 0x2B0
 */
void Obj::changeMaterial()
{
	J3DModelData* modelData;
	J3DModel* j3dModel = mModel->mJ3dModel;
	modelData          = j3dModel->mModelData;
	ResTIMG* texture0  = C_MGR->getChangeTexture0();
	ResTIMG* texture1  = C_MGR->getChangeTexture1();

	j3dModel->calcMaterial();

	ResTIMG* newTexture0;
	J3DTexture* j3dTexture0 = mModel->mJ3dModel->mModelData->mMaterialTable.mTextures;
	newTexture0             = j3dTexture0->mRes;

	*newTexture0 = *texture0;

	j3dTexture0->setImageOffset((u32)texture0, 0);
	j3dTexture0->setPaletteOffset((u32)texture0, 0);

	ResTIMG* newTexture1;
	J3DTexture* j3dTexture1 = mModel->mJ3dModel->mModelData->mMaterialTable.mTextures;
	newTexture1             = &j3dTexture1->mRes[1];

	*newTexture1 = *texture1;

	j3dTexture1->setImageOffset((u32)texture1, 1);
	j3dTexture1->setPaletteOffset((u32)texture1, 1);

	for (u16 i = 0; i < modelData->mMaterialTable.mMaterialNum; i++) {
		J3DMatPacket* packet  = &j3dModel->mMatPackets[i];
		j3dSys.mMatPacket     = packet;
		J3DMaterial* material = modelData->mMaterialTable.mMaterials[i];
		material->diff(packet->mShapePacket->mDiffFlag);
	}
}

} // namespace Chappy
} // namespace Game
