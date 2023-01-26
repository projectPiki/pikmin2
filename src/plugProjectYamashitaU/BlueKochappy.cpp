#include "Game/Entities/BlueKochappy.h"

namespace Game {
namespace BlueKochappy {
/*
 * --INFO--
 * Address:	8012CF38
 * Size:	000130
 */
Obj::Obj()
{
	mAnimator = new KochappyBase::ProperAnimator;
	setFSM(new KochappyBase::FSM);
}

/*
 * --INFO--
 * Address:	8012D068
 * Size:	0001A4
 */
void Obj::changeMaterial()
{
	J3DModelData* modelData;
	J3DModel* j3dModel = mModel->mJ3dModel;
	modelData          = j3dModel->mModelData;
	ResTIMG* texture   = static_cast<Mgr*>(mMgr)->getChangeTexture();

	j3dModel->calcMaterial();

	ResTIMG* newTexture;
	J3DTexture* j3dTexture = mModel->mJ3dModel->mModelData->mMaterialTable.mTexture;
	newTexture             = j3dTexture->_04;

	texture->copyTo(newTexture);

	j3dTexture->setImageOffset((u32)texture);
	j3dTexture->setPaletteOffset((u32)texture);

	for (u16 i = 0; i < modelData->mMaterialTable.mCount1; i++) {
		J3DMatPacket* packet  = &j3dModel->mMatPackets[i];
		j3dSys.mMatPacket     = packet;
		J3DMaterial* material = modelData->mMaterialTable.mMaterials1[i];
		material->diff(packet->mShapePacket->mDiffFlag);
	}
}
} // namespace BlueKochappy
} // namespace Game
