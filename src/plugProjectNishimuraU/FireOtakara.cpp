#include "Game/Entities/FireOtakara.h"

namespace Game {
namespace FireOtakara {
/**
 * @note Address: 0x802B81C8
 * @note Size: 0xA4
 */
Obj::Obj() { createEffect(); }

/**
 * @note Address: 0x802B826C
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
 * @note Address: 0x802B8410
 * @note Size: 0x60
 */
void Obj::interactCreature(Creature* creature)
{
	f32 damage = static_cast<OtakaraBase::Parms*>(mParms)->mGeneral.mAttackDamage.mValue;
	InteractFire fire(this, damage);
	creature->stimulate(fire);
}

/**
 * @note Address: 0x802B8470
 * @note Size: 0x60
 */
void Obj::createEffect() { mEfxChargeFire = new efx::TOtaChargefire; }

/**
 * @note Address: 0x802B84D0
 * @note Size: 0x48
 */
void Obj::setupEffect()
{
	Matrixf* centerJointMtx = mModel->getJoint("center")->getWorldMatrix();
	mEfxChargeFire->setMtxptr(centerJointMtx->mMatrix.mtxView);
}

/**
 * @note Address: 0x802B8518
 * @note Size: 0x34
 */
void Obj::startChargeEffect() { mEfxChargeFire->create(nullptr); }

/**
 * @note Address: 0x802B854C
 * @note Size: 0x30
 */
void Obj::finishChargeEffect() { mEfxChargeFire->fade(); }

/**
 * @note Address: 0x802B857C
 * @note Size: 0xB0
 */
void Obj::createDisChargeEffect()
{
	efx::Arg fxArg(mPosition);
	efx::TOtaFire dischargeFX;
	dischargeFX.create(&fxArg);
}

/**
 * @note Address: 0x802B862C
 * @note Size: 0x30
 */
void Obj::effectDrawOn() { mEfxChargeFire->endDemoDrawOn(); }

/**
 * @note Address: 0x802B865C
 * @note Size: 0x30
 */
void Obj::effectDrawOff() { mEfxChargeFire->startDemoDrawOff(); }

/**
 * @note Address: 0x802B868C
 * @note Size: 0x44
 */
void Obj::startDisChargeSE() { getJAIObject()->startSound(PSSE_EN_OTAKARA_ATTACK_FIRE, 0); }
} // namespace FireOtakara
} // namespace Game
