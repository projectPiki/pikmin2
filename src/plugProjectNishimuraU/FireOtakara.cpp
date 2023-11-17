#include "Game/Entities/FireOtakara.h"

namespace Game {
namespace FireOtakara {
/*
 * --INFO--
 * Address:	802B81C8
 * Size:	0000A4
 */
Obj::Obj() { createEffect(); }

/*
 * --INFO--
 * Address:	802B826C
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
 * Address:	802B8410
 * Size:	000060
 */
void Obj::interactCreature(Creature* creature)
{
	f32 damage = static_cast<OtakaraBase::Parms*>(mParms)->mGeneral.mAttackDamage.mValue;
	InteractFire fire(this, damage);
	creature->stimulate(fire);
}

/*
 * --INFO--
 * Address:	802B8470
 * Size:	000060
 */
void Obj::createEffect() { mEfxChargeFire = new efx::TOtaChargefire; }

/*
 * --INFO--
 * Address:	802B84D0
 * Size:	000048
 */
void Obj::setupEffect()
{
	Matrixf* centerJointMtx = mModel->getJoint("center")->getWorldMatrix();
	mEfxChargeFire->setMtxptr(centerJointMtx->mMatrix.mtxView);
}

/*
 * --INFO--
 * Address:	802B8518
 * Size:	000034
 */
void Obj::startChargeEffect() { mEfxChargeFire->create(nullptr); }

/*
 * --INFO--
 * Address:	802B854C
 * Size:	000030
 */
void Obj::finishChargeEffect() { mEfxChargeFire->fade(); }

/*
 * --INFO--
 * Address:	802B857C
 * Size:	0000B0
 */
void Obj::createDisChargeEffect()
{
	efx::Arg fxArg(mPosition);
	efx::TOtaFire dischargeFX;
	dischargeFX.create(&fxArg);
}

/*
 * --INFO--
 * Address:	802B862C
 * Size:	000030
 */
void Obj::effectDrawOn() { mEfxChargeFire->endDemoDrawOn(); }

/*
 * --INFO--
 * Address:	802B865C
 * Size:	000030
 */
void Obj::effectDrawOff() { mEfxChargeFire->startDemoDrawOff(); }

/*
 * --INFO--
 * Address:	802B868C
 * Size:	000044
 */
void Obj::startDisChargeSE() { getJAIObject()->startSound(PSSE_EN_OTAKARA_ATTACK_FIRE, 0); }
} // namespace FireOtakara
} // namespace Game
