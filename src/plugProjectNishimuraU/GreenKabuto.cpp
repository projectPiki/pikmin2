#include "types.h"
#include "Game/Entities/Kabuto.h"
#include "JSystem/J3D/J3DSys.h"

namespace Game {
namespace GreenKabuto {

/*
 * --INFO--
 * Address:	802FFBC8
 * Size:	000090
 */
Obj::Obj() { }

/*
 * --INFO--
 * Address:	802FFC58
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
	J3DTexture* j3dTexture = mModel->mJ3dModel->mModelData->mMaterialTable.mTextures;
	newTexture             = j3dTexture->mRes;

	*newTexture = *texture;
	;

	j3dTexture->setImageOffset((u32)texture, 0);
	j3dTexture->setPaletteOffset((u32)texture, 0);

	for (u16 i = 0; i < modelData->mMaterialTable.mMaterialNum; i++) {
		J3DMatPacket* packet  = &j3dModel->mMatPackets[i];
		j3dSys.mMatPacket     = packet;
		J3DMaterial* material = modelData->mMaterialTable.mMaterials[i];
		material->diff(packet->mShapePacket->mDiffFlag);
	}
}
} // namespace GreenKabuto
} // namespace Game
