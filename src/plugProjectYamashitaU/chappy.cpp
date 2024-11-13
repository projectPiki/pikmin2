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
	modelData          = j3dModel->getModelData();
	ResTIMG* texture0  = C_MGR->getChangeTexture0();
	ResTIMG* texture1  = C_MGR->getChangeTexture1();

	j3dModel->calcMaterial();

	mModel->mJ3dModel->mModelData->getTexture()->changeImage(texture0, 0);
	mModel->mJ3dModel->mModelData->getTexture()->changeImage(texture1, 1);

	for (u16 i = 0; i < modelData->getMaterialNum(); i++) {
		J3DMatPacket* packet = j3dModel->getMatPacket(i);
		j3dSys.setMatPacket(packet);
		J3DMaterial* material = modelData->getMaterialNodePointer(i);
		material->diff(packet->getShapePacket()->mDiffFlag);
	}
}

} // namespace Chappy
} // namespace Game
