#include "Game/Entities/Tank.h"

namespace Game {
namespace Ftank {

/*
 * --INFO--
 * Address:	8029E484
 * Size:	0000A4
 */
Obj::Obj() { createEffect(); }

/*
 * --INFO--
 * Address:	8029E528
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
 * Address:	8029E6CC
 * Size:	000048
 */
void Obj::createEffect() { mTankEffect = new efx::TTankEffect(nullptr); }

/*
 * --INFO--
 * Address:	8029EAF0
 * Size:	000054
 */
void Obj::setupEffect()
{
	efx::TTankEffect* effect;
	Matrixf* mtx = mJoint->getWorldMatrix();
	effect       = mTankEffect;

	effect->mEfxFire.mEfxABC.setMtxptr(mtx->mMatrix.mtxView);
	effect->mEfxFire.mEfxIND.mMtx = mtx;
	effect->mEfxFireYodare.mMtx   = mtx;
}

/*
 * --INFO--
 * Address:	8029EB44
 * Size:	000034
 */
void Obj::startEffect() { mTankEffect->mEfxFire.create(nullptr); }

/*
 * --INFO--
 * Address:	8029EB78
 * Size:	000054
 */
void Obj::startYodare()
{
	efx::TTankEffect* tankEffect = mTankEffect;
	tankEffect->mEfxFire.fade();
	tankEffect->mEfxFireYodare.create(nullptr);
}

/*
 * --INFO--
 * Address:	8029EC64
 * Size:	000050
 */
void Obj::finishEffect()
{
	efx::TTankEffect* effect = mTankEffect;
	effect->mEfxFire.fade();
	effect->mEfxFireYodare.fade();
}

/*
 * --INFO--
 * Address:	8029ECB4
 * Size:	000064
 */
void Obj::effectDrawOn()
{
	efx::TTankEffect* effect = mTankEffect;
	effect->mEfxFire.mEfxABC.endDemoDrawOn();
	effect->mEfxFire.mEfxIND.endDemoDrawOn();
	effect->mEfxFireYodare.endDemoDrawOn();
}

/*
 * --INFO--
 * Address:	8029ED58
 * Size:	000064
 */
void Obj::effectDrawOff()
{
	efx::TTankEffect* effect = mTankEffect;
	effect->mEfxFire.mEfxABC.startDemoDrawOff();
	effect->mEfxFire.mEfxIND.startDemoDrawOff();
	effect->mEfxFireYodare.startDemoDrawOff();
}

/*
 * --INFO--
 * Address:	8029EDFC
 * Size:	000060
 */
void Obj::interactCreature(Creature* creature)
{
	InteractFire fire(this, static_cast<EnemyParmsBase*>(mParms)->mGeneral.mAttackDamage.mValue);
	creature->stimulate(fire);
}

/*
 * --INFO--
 * Address:	8029EE5C
 * Size:	000010
 */
void Obj::stopEffectRadius(f32 radius)
{
	efx::TTankEffect* effect                       = mTankEffect;
	effect->mEfxFire.mEfxABC.mParticleCallBack._04 = radius;
	effect->mEfxFire.mEfxIND.mParticleCallBack._04 = radius;
}

/*
 * --INFO--
 * Address:	8029EE6C
 * Size:	000044
 */
void Obj::createChargeSE() { getJAIObject()->startSound(PSSE_EN_TANK_BREATH, 0); }

/*
 * --INFO--
 * Address:	8029EEB0
 * Size:	000044
 */
void Obj::createDisChargeSE() { getJAIObject()->startSound(PSSE_EN_TANK_FIRE, 0); }

} // namespace Ftank
} // namespace Game
