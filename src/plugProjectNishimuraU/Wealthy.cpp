#include "Game/Entities/Wealthy.h"
#include "Game/Entities/PelletNumber.h"
#include "Game/Entities/ItemHoney.h"
#include "Game/gamePlayData.h"

namespace Game {
namespace Wealthy {

/**
 * @note Address: 0x80284A9C
 * @note Size: 0x98
 */
Obj::Obj()
{
	createEffect();
}

/**
 * @note Address: 0x80284B34
 * @note Size: 0x1F0
 */
void Obj::changeMaterial()
{
	J3DModelData* modelData;
	J3DModel* j3dModel;
	ResTIMG* changeTexture;

	j3dModel      = mModel->mJ3dModel;
	modelData     = j3dModel->getModelData();
	changeTexture = C_MGR->getChangeTexture();

	u16 idx                = modelData->getMaterialName()->getIndex("karada");
	J3DMaterial* karadaMat = modelData->getMaterialNodePointer(idx);
	karadaMat->getTevBlock()->setTevKColor(0, J3DGXColor(100, 100, 100, 255));

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
 * @note Address: 0x80284D24
 * @note Size: 0x144
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

/**
 * @note Address: 0x80284E68
 * @note Size: 0xB0
 */
void Obj::createEffect()
{
	mBodyEffect = new efx::TOoganeKira;
}

/**
 * @note Address: 0x80284F18
 * @note Size: 0x58
 */
void Obj::startBodyEffect()
{
	SysShape::Joint* bodyJoint = mModel->getJoint("body");
	mBodyEffect->mMtx          = bodyJoint->getWorldMatrix();
	mBodyEffect->create(nullptr);
}

/**
 * @note Address: 0x80284F70
 * @note Size: 0x30
 */
void Obj::finishBodyEffect()
{
	mBodyEffect->fade();
}

/**
 * @note Address: 0x80284FA0
 * @note Size: 0x30
 */
void Obj::effectDrawOn()
{
	mBodyEffect->endDemoDrawOn();
}

/**
 * @note Address: 0x80284FD0
 * @note Size: 0x30
 */
void Obj::effectDrawOff()
{
	mBodyEffect->startDemoDrawOff();
}

/**
 * @note Address: 0x80285000
 * @note Size: 0x44
 */
void Obj::createPressSENormal()
{
	getJAIObject()->startSound(PSSE_EN_OOGANE_HIT, 0);
}

} // namespace Wealthy
} // namespace Game
