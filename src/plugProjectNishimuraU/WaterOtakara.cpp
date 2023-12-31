#include "Game/Entities/WaterOtakara.h"

namespace Game {
namespace WaterOtakara {

/**
 * @note Address: 0x802B8A38
 * @note Size: 0xA4
 */
Obj::Obj() { createEffect(); }

/**
 * @note Address: 0x802B8ADC
 * @note Size: 0x1A4
 */
void Obj::changeMaterial()
{
	J3DModelData* modelData;
	J3DModel* j3dModel = mModel->mJ3dModel;
	modelData          = j3dModel->mModelData;
	ResTIMG* texture   = C_MGR->getChangeTexture();

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

/**
 * @note Address: 0x802B8C80
 * @note Size: 0x60
 */
void Obj::interactCreature(Creature* creature)
{
	f32 damage = static_cast<OtakaraBase::Parms*>(mParms)->mGeneral.mAttackDamage.mValue;
	InteractBubble bubble(this, damage);
	creature->stimulate(bubble);
}

/**
 * @note Address: 0x802B8CE0
 * @note Size: 0x60
 */
void Obj::createEffect() { mEfxChargeWater = new efx::TOtaChargewat; }

/**
 * @note Address: 0x802B8D40
 * @note Size: 0x48
 */
void Obj::setupEffect()
{
	Matrixf* centerJointMtx = mModel->getJoint("center")->getWorldMatrix();
	mEfxChargeWater->setMtxptr(centerJointMtx->mMatrix.mtxView);
}

/**
 * @note Address: 0x802B8D88
 * @note Size: 0x34
 */
void Obj::startChargeEffect() { mEfxChargeWater->create(nullptr); }

/**
 * @note Address: 0x802B8DBC
 * @note Size: 0x30
 */
void Obj::finishChargeEffect() { mEfxChargeWater->fade(); }

/**
 * @note Address: 0x802B8DEC
 * @note Size: 0xA4
 */
void Obj::createDisChargeEffect()
{
	efx::Arg fxArg(mPosition);
	efx::TOtaWat dischargeFX;
	dischargeFX.create(&fxArg);
}

/**
 * @note Address: 0x802B8E90
 * @note Size: 0x30
 */
void Obj::effectDrawOn() { mEfxChargeWater->endDemoDrawOn(); }

/**
 * @note Address: 0x802B8EC0
 * @note Size: 0x30
 */
void Obj::effectDrawOff() { mEfxChargeWater->startDemoDrawOff(); }

/**
 * @note Address: 0x802B8EF0
 * @note Size: 0x44
 */
void Obj::startDisChargeSE() { getJAIObject()->startSound(PSSE_EN_OTAKARA_ATK_WATER, 0); }
} // namespace WaterOtakara
} // namespace Game
