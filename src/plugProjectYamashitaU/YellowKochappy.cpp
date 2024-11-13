#include "Game/Entities/YellowKochappy.h"

namespace Game {
namespace YellowKochappy {
/**
 * @note Address: 0x8012D214
 * @note Size: 0x130
 */
Obj::Obj()
{
	mAnimator = new KochappyBase::ProperAnimator;
	setFSM(new KochappyBase::FSM);
}

/**
 * @note Address: 0x8012D344
 * @note Size: 0x1A4
 */
void Obj::changeMaterial()
{
	J3DModelData* modelData;
	J3DModel* j3dModel = mModel->mJ3dModel;
	modelData          = j3dModel->getModelData();
	ResTIMG* texture   = C_MGR->getChangeTexture();

	j3dModel->calcMaterial();

	mModel->mJ3dModel->mModelData->getTexture()->changeImage(texture, 0);

	for (u16 i = 0; i < modelData->getMaterialNum(); i++) {
		J3DMatPacket* packet = j3dModel->getMatPacket(i);
		j3dSys.setMatPacket(packet);
		J3DMaterial* material = modelData->getMaterialNodePointer(i);
		material->diff(packet->getShapePacket()->mDiffFlag);
	}
}
} // namespace YellowKochappy
} // namespace Game
