#include "Game/Entities/ElecOtakara.h"

namespace Game {
namespace ElecOtakara {
/*
 * --INFO--
 * Address:	802B9AD8
 * Size:	0000A4
 */
Obj::Obj() { createEffect(); }

/*
 * --INFO--
 * Address:	802B9B7C
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

/*
 * --INFO--
 * Address:	802B9D20
 * Size:	000168
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

/*
 * --INFO--
 * Address:	802B9E88
 * Size:	000060
 */
void Obj::createEffect() { mEfxChargeElec = new efx::TOtaChargeelec; }

/*
 * --INFO--
 * Address:	802B9EE8
 * Size:	000048
 */
void Obj::setupEffect()
{
	Matrixf* centerJointMtx = mModel->getJoint("center")->getWorldMatrix();
	mEfxChargeElec->setMtxptr(centerJointMtx->mMatrix.mtxView);
}

/*
 * --INFO--
 * Address:	802B9F30
 * Size:	000034
 */
void Obj::startChargeEffect() { mEfxChargeElec->create(nullptr); }

/*
 * --INFO--
 * Address:	802B9F64
 * Size:	000030
 */
void Obj::finishChargeEffect() { mEfxChargeElec->fade(); }

/*
 * --INFO--
 * Address:	802B9F94
 * Size:	000098
 */
void Obj::createDisChargeEffect()
{
	efx::Arg fxArg(mPosition);
	efx::TOtaElec dischargeFX;
	dischargeFX.create(&fxArg);
}

/*
 * --INFO--
 * Address:	802BA02C
 * Size:	000030
 */
void Obj::effectDrawOn() { mEfxChargeElec->endDemoDrawOn(); }

/*
 * --INFO--
 * Address:	802BA05C
 * Size:	000030
 */
void Obj::effectDrawOff() { mEfxChargeElec->startDemoDrawOff(); }

/*
 * --INFO--
 * Address:	802BA08C
 * Size:	000044
 */
void Obj::startDisChargeSE() { getJAIObject()->startSound(PSSE_EN_OTAKARA_ATK_ELEC, 0); }
} // namespace ElecOtakara
} // namespace Game
