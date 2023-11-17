#include "Game/Entities/Wealthy.h"
#include "Game/Entities/PelletNumber.h"
#include "Game/Entities/ItemHoney.h"
#include "Game/gamePlayData.h"

namespace Game {
namespace Wealthy {

/*
 * --INFO--
 * Address:	80284A9C
 * Size:	000098
 */
Obj::Obj() { createEffect(); }

/*
 * --INFO--
 * Address:	80284B34
 * Size:	0001F0
 */
void Obj::changeMaterial()
{
	J3DModelData* modelData;
	J3DModel* j3dModel;
	ResTIMG* changeTexture;
	ResTIMG* newTexture;
	J3DTexture* j3dTexture;

	j3dModel      = mModel->mJ3dModel;
	modelData     = j3dModel->mModelData;
	changeTexture = static_cast<Mgr*>(mMgr)->getChangeTexture();

	u16 idx                = modelData->mMaterialTable.mMaterialNames->getIndex("karada");
	J3DMaterial* karadaMat = modelData->mMaterialTable.mMaterials[idx];
	karadaMat->mTevBlock->setTevKColor(0, J3DGXColor(0x64, 0x64, 0x64, 0xFF));

	j3dModel->calcMaterial();

	j3dTexture = mModel->mJ3dModel->mModelData->mMaterialTable.mTextures;
	newTexture = j3dTexture->mRes;

	*newTexture = *changeTexture;

	j3dTexture->setImageOffset((u32)changeTexture, 0);
	j3dTexture->setPaletteOffset((u32)changeTexture, 0);

	for (u16 i = 0; i < modelData->mMaterialTable.mMaterialNum; i++) {
		J3DMatPacket* packet  = &j3dModel->mMatPackets[i];
		j3dSys.mMatPacket     = packet;
		J3DMaterial* material = modelData->mMaterialTable.mMaterials[i];
		material->diff(packet->mShapePacket->mDiffFlag);
	}
}

/*
 * --INFO--
 * Address:	80284D24
 * Size:	000144
 */
void Obj::createItem()
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
			amount           = 3;
		} else {
			initArg = PELLET_NUMBER_FIVE; // pellet size: 5
			amount  = 3;
		}

		break;
	case 1: // second flip
		createPelletItem = false;

		if (playData && playData->isDemoFlag(DEMO_First_Spicy_Spray_Made)) {
			initArg = HONEY_R;
			amount  = 1;
		} else {
			initArg = HONEY_Y;
			amount  = 3;
		}
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

/*
 * --INFO--
 * Address:	80284E68
 * Size:	0000B0
 */
void Obj::createEffect() { mBodyEffect = new efx::TOoganeKira; }

/*
 * --INFO--
 * Address:	80284F18
 * Size:	000058
 */
void Obj::startBodyEffect()
{
	SysShape::Joint* bodyJoint = mModel->getJoint("body");
	mBodyEffect->mMtx          = bodyJoint->getWorldMatrix();
	mBodyEffect->create(nullptr);
}

/*
 * --INFO--
 * Address:	80284F70
 * Size:	000030
 */
void Obj::finishBodyEffect() { mBodyEffect->fade(); }

/*
 * --INFO--
 * Address:	80284FA0
 * Size:	000030
 */
void Obj::effectDrawOn() { mBodyEffect->endDemoDrawOn(); }

/*
 * --INFO--
 * Address:	80284FD0
 * Size:	000030
 */
void Obj::effectDrawOff() { mBodyEffect->startDemoDrawOff(); }

/*
 * --INFO--
 * Address:	80285000
 * Size:	000044
 */
void Obj::createPressSENormal() { getJAIObject()->startSound(PSSE_EN_OOGANE_HIT, 0); }

} // namespace Wealthy
} // namespace Game
