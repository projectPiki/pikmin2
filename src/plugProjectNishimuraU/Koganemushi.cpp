#include "Game/Entities/Koganemushi.h"
#include "Game/Entities/PelletNumber.h"
#include "Game/Entities/ItemHoney.h"
#include "Game/gamePlayData.h"

#include "JSystem/J3D/J3DMaterial.h"
#include "JSystem/J3D/J3DTevBlock.h"
#include "JSystem/JUtility/JUTNameTab.h"

namespace Game {
/**
 * @note Address: 0x8029DD44
 * @note Size: 0x90
 */
Koganemushi::Obj::Obj()
{
}

/**
 * @note Address: 0x8029DDD4
 * @note Size: 0x1F0
 */
void Koganemushi::Obj::changeMaterial()
{
	J3DModelData* modelData;
	J3DModel* j3dModel;
	ResTIMG* changeTexture;

	j3dModel      = mModel->mJ3dModel;
	modelData     = j3dModel->getModelData();
	changeTexture = C_MGR->getChangeTexture();

	u16 idx                = modelData->getMaterialName()->getIndex("karada");
	J3DMaterial* karadaMat = modelData->getMaterialNodePointer(idx);
	karadaMat->getTevBlock()->setTevKColor(0, J3DGXColor(60, 60, 60, 255));

	j3dModel->calcMaterial();

	mModel->mJ3dModel->mModelData->getTexture()->changeImage(changeTexture, 0);

	for (u16 i = 0; i < modelData->getMaterialNum(); i++) {
		J3DMatPacket* packet = j3dModel->getMatPacket(i);
		j3dSys.setMatPacket(packet);
		J3DMaterial* material = modelData->getMaterialNodePointer(i);
		material->diff(packet->getShapePacket()->mDiffFlag);
	}
}

/**
 * @note Address: 0x8029DFC4
 * @note Size: 0x11C
 */
void Koganemushi::Obj::createItem()
{
	if (createTreasureItem()) {
		return;
	}

	bool createPelletItem = true;
	u32 initArg           = 0;
	u32 amount            = 0;

	switch (mHitCount) {
	case 0: // initial flip
		if (gameSystem && gameSystem->mIsInCave) {
			createPelletItem = false;
			initArg          = HONEY_Y;
			amount           = 1;
		} else {
			initArg = PELLET_NUMBER_ONE;
			amount  = 1;
		}

		break;
	case 1: // second flip
		createPelletItem = false;
		initArg          = HONEY_Y;
		amount           = 2;
		break;
	case 2: // third flip
		createPelletItem = false;

		if (playData && playData->isDemoFlag(DEMO_First_Spicy_Spray_Made)) {
			initArg = HONEY_R;
			amount  = 1;
		} else {
			initArg = HONEY_Y;
			amount  = 3;
		}

		mAppearTimer = 12800.0f;
		break;
	default:
		break;
	}

	if (createPelletItem) {
		createPellet(initArg, amount);
	} else {
		createDoping(initArg, amount);
	}

	mHitCount++;
}

/**
 * @note Address: 0x8029E0E0
 * @note Size: 0x44
 */
void Koganemushi::Obj::createPressSENormal()
{
	getJAIObject()->startSound(PSSE_EN_KOGANE_HIT, 0);
}
} // namespace Game
