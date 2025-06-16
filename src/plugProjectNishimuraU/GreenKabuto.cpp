#include "types.h"
#include "Game/Entities/Kabuto.h"
#include "JSystem/J3D/J3DSys.h"

namespace Game {
namespace GreenKabuto {

/**
 * @note Address: 0x802FFBC8
 * @note Size: 0x90
 */
Obj::Obj()
{
}

/**
 * @note Address: 0x802FFC58
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
} // namespace GreenKabuto
} // namespace Game
