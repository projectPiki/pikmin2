#include "Game/Entities/GasOtakara.h"

namespace Game {
namespace GasOtakara {
/*
 * --INFO--
 * Address:	802B9294
 * Size:	0000A4
 */
Obj::Obj() { createEffect(); }

/*
 * --INFO--
 * Address:	802B9338
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
 * Address:	802B94DC
 * Size:	000060
 */
void Obj::interactCreature(Creature* creature)
{
	f32 damage = static_cast<OtakaraBase::Parms*>(mParms)->mGeneral.mAttackDamage.mValue;
	InteractGas gas(this, damage);
	creature->stimulate(gas);
}

/*
 * --INFO--
 * Address:	802B953C
 * Size:	000060
 */
void Obj::createEffect() { mEfxChargeGas = new efx::TOtaChargegas; }

/*
 * --INFO--
 * Address:	802B959C
 * Size:	000048
 */
void Obj::setupEffect()
{
	Matrixf* centerJointMtx = mModel->getJoint("center")->getWorldMatrix();
	mEfxChargeGas->setMtxptr(centerJointMtx->mMatrix.mtxView);
}

/*
 * --INFO--
 * Address:	802B95E4
 * Size:	000034
 */
void Obj::startChargeEffect() { mEfxChargeGas->create(nullptr); }

/*
 * --INFO--
 * Address:	802B9618
 * Size:	000030
 */
void Obj::finishChargeEffect() { mEfxChargeGas->fade(); }

/*
 * --INFO--
 * Address:	802B9648
 * Size:	00008C
 */
void Obj::createDisChargeEffect()
{
	efx::Arg fxArg(mPosition);
	efx::TOtaGas dischargeFX;
	dischargeFX.create(&fxArg);
}

/*
 * --INFO--
 * Address:	802B96D4
 * Size:	000030
 */
void Obj::effectDrawOn() { mEfxChargeGas->endDemoDrawOn(); }

/*
 * --INFO--
 * Address:	802B9704
 * Size:	000030
 */
void Obj::effectDrawOff() { mEfxChargeGas->startDemoDrawOff(); }

/*
 * --INFO--
 * Address:	802B9734
 * Size:	000044
 */
void Obj::startDisChargeSE() { getJAIObject()->startSound(PSSE_EN_OTAKARA_ATK_GAS, 0); }
} // namespace GasOtakara
} // namespace Game
