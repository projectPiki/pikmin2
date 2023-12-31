#include "Game/Entities/ElecOtakara.h"

namespace Game {
namespace ElecOtakara {
/**
 * @note Address: 0x802B9AD8
 * @note Size: 0xA4
 */
Obj::Obj() { createEffect(); }

/**
 * @note Address: 0x802B9B7C
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
 * @note Address: 0x802B9D20
 * @note Size: 0x168
 */
void Obj::interactCreature(Creature* creature)
{
	// Get direction from US -> Creature, then make it normalise it to a unit direction
	Vector3f direction = creature->getPosition() - mPosition;
	direction.y        = 0.0f;
	direction.normalise();

	// Then scale the direction based on fp14's value
	f32 scaling = static_cast<OtakaraBase::Parms*>(mParms)->mGeneral.mSearchDistance.mValue;
	direction.x *= scaling;
	direction.z *= scaling;

	// If the creature is a Pikmin, change the up/down direction to fp26
	if (creature->isPiki()) {
		direction.y = static_cast<OtakaraBase::Parms*>(mParms)->mGeneral.mSearchHeight.mValue;
	}

	// Start the interaction
	InteractDenki denki(this, static_cast<OtakaraBase::Parms*>(mParms)->mGeneral.mAttackDamage.mValue, &direction);
	creature->stimulate(denki);
}

/**
 * @note Address: 0x802B9E88
 * @note Size: 0x60
 */
void Obj::createEffect() { mEfxChargeElec = new efx::TOtaChargeelec; }

/**
 * @note Address: 0x802B9EE8
 * @note Size: 0x48
 */
void Obj::setupEffect()
{
	Matrixf* centerJointMtx = mModel->getJoint("center")->getWorldMatrix();
	mEfxChargeElec->setMtxptr(centerJointMtx->mMatrix.mtxView);
}

/**
 * @note Address: 0x802B9F30
 * @note Size: 0x34
 */
void Obj::startChargeEffect() { mEfxChargeElec->create(nullptr); }

/**
 * @note Address: 0x802B9F64
 * @note Size: 0x30
 */
void Obj::finishChargeEffect() { mEfxChargeElec->fade(); }

/**
 * @note Address: 0x802B9F94
 * @note Size: 0x98
 */
void Obj::createDisChargeEffect()
{
	efx::Arg fxArg(mPosition);
	efx::TOtaElec dischargeFX;
	dischargeFX.create(&fxArg);
}

/**
 * @note Address: 0x802BA02C
 * @note Size: 0x30
 */
void Obj::effectDrawOn() { mEfxChargeElec->endDemoDrawOn(); }

/**
 * @note Address: 0x802BA05C
 * @note Size: 0x30
 */
void Obj::effectDrawOff() { mEfxChargeElec->startDemoDrawOff(); }

/**
 * @note Address: 0x802BA08C
 * @note Size: 0x44
 */
void Obj::startDisChargeSE() { getJAIObject()->startSound(PSSE_EN_OTAKARA_ATK_ELEC, 0); }
} // namespace ElecOtakara
} // namespace Game
