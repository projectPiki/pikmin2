#include "Game/Entities/GasOtakara.h"

namespace Game {
namespace GasOtakara {
/**
 * @note Address: 0x802B9294
 * @note Size: 0xA4
 */
Obj::Obj() { createEffect(); }

/**
 * @note Address: 0x802B9338
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
 * @note Address: 0x802B94DC
 * @note Size: 0x60
 */
void Obj::interactCreature(Creature* creature)
{
	f32 damage = static_cast<OtakaraBase::Parms*>(mParms)->mGeneral.mAttackDamage.mValue;
	InteractGas gas(this, damage);
	creature->stimulate(gas);
}

/**
 * @note Address: 0x802B953C
 * @note Size: 0x60
 */
void Obj::createEffect() { mEfxChargeGas = new efx::TOtaChargegas; }

/**
 * @note Address: 0x802B959C
 * @note Size: 0x48
 */
void Obj::setupEffect()
{
	Matrixf* centerJointMtx = mModel->getJoint("center")->getWorldMatrix();
	mEfxChargeGas->setMtxptr(centerJointMtx->mMatrix.mtxView);
}

/**
 * @note Address: 0x802B95E4
 * @note Size: 0x34
 */
void Obj::startChargeEffect() { mEfxChargeGas->create(nullptr); }

/**
 * @note Address: 0x802B9618
 * @note Size: 0x30
 */
void Obj::finishChargeEffect() { mEfxChargeGas->fade(); }

/**
 * @note Address: 0x802B9648
 * @note Size: 0x8C
 */
void Obj::createDisChargeEffect()
{
	efx::Arg fxArg(mPosition);
	efx::TOtaGas dischargeFX;
	dischargeFX.create(&fxArg);
}

/**
 * @note Address: 0x802B96D4
 * @note Size: 0x30
 */
void Obj::effectDrawOn() { mEfxChargeGas->endDemoDrawOn(); }

/**
 * @note Address: 0x802B9704
 * @note Size: 0x30
 */
void Obj::effectDrawOff() { mEfxChargeGas->startDemoDrawOff(); }

/**
 * @note Address: 0x802B9734
 * @note Size: 0x44
 */
void Obj::startDisChargeSE() { getJAIObject()->startSound(PSSE_EN_OTAKARA_ATK_GAS, 0); }
} // namespace GasOtakara
} // namespace Game
