#include "Game/Entities/WaterOtakara.h"

namespace Game {
namespace WaterOtakara {

/*
 * --INFO--
 * Address:	802B8A38
 * Size:	0000A4
 */
Obj::Obj() { createEffect(); }

/*
 * --INFO--
 * Address:	802B8ADC
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
 * Address:	802B8C80
 * Size:	000060
 */
void Obj::interactCreature(Creature* creature)
{
	f32 damage = static_cast<OtakaraBase::Parms*>(mParms)->mGeneral.mAttackDamage.mValue;
	InteractBubble bubble(this, damage);
	creature->stimulate(bubble);
}

/*
 * --INFO--
 * Address:	802B8CE0
 * Size:	000060
 */
void Obj::createEffect() { mEfxChargeWater = new efx::TOtaChargewat; }

/*
 * --INFO--
 * Address:	802B8D40
 * Size:	000048
 */
void Obj::setupEffect()
{
	Matrixf* centerJointMtx = mModel->getJoint("center")->getWorldMatrix();
	mEfxChargeWater->setMtxptr(centerJointMtx->mMatrix.mtxView);
}

/*
 * --INFO--
 * Address:	802B8D88
 * Size:	000034
 */
void Obj::startChargeEffect() { mEfxChargeWater->create(nullptr); }

/*
 * --INFO--
 * Address:	802B8DBC
 * Size:	000030
 */
void Obj::finishChargeEffect() { mEfxChargeWater->fade(); }

/*
 * --INFO--
 * Address:	802B8DEC
 * Size:	0000A4
 */
void Obj::createDisChargeEffect()
{
	efx::Arg fxArg(mPosition);
	efx::TOtaWat dischargeFX;
	dischargeFX.create(&fxArg);
}

/*
 * --INFO--
 * Address:	802B8E90
 * Size:	000030
 */
void Obj::effectDrawOn() { mEfxChargeWater->endDemoDrawOn(); }

/*
 * --INFO--
 * Address:	802B8EC0
 * Size:	000030
 */
void Obj::effectDrawOff() { mEfxChargeWater->startDemoDrawOff(); }

/*
 * --INFO--
 * Address:	802B8EF0
 * Size:	000044
 */
void Obj::startDisChargeSE() { getJAIObject()->startSound(PSSE_EN_OTAKARA_ATK_WATER, 0); }
} // namespace WaterOtakara
} // namespace Game
