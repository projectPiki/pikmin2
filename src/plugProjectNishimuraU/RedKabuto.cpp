#include "Game/Entities/Kabuto.h"
#include "JSystem/J3D/J3DSys.h"

namespace Game {
namespace RedKabuto {

/**
 * @note Address: 0x80300158
 * @note Size: 0x90
 */
Obj::Obj()
{
}

/**
 * @note Address: 0x803001E8
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
} // namespace RedKabuto
} // namespace Game
