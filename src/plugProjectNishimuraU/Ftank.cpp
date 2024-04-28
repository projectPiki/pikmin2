#include "Game/Entities/Tank.h"

namespace Game {
namespace Ftank {

/**
 * @note Address: 0x8029E484
 * @note Size: 0xA4
 */
Obj::Obj() { createEffect(); }

/**
 * @note Address: 0x8029E528
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
 * @note Address: 0x8029E6CC
 * @note Size: 0x48
 */
void Obj::createEffect() { mTankEffect = new efx::TTankEffect(nullptr); }

/**
 * @note Address: 0x8029EAF0
 * @note Size: 0x54
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

/**
 * @note Address: 0x8029EB44
 * @note Size: 0x34
 */
void Obj::startEffect() { mTankEffect->mEfxFire.create(nullptr); }

/**
 * @note Address: 0x8029EB78
 * @note Size: 0x54
 */
void Obj::startYodare()
{
	efx::TTankEffect* tankEffect = mTankEffect;
	tankEffect->mEfxFire.fade();
	tankEffect->mEfxFireYodare.create(nullptr);
}

/**
 * @note Address: 0x8029EC64
 * @note Size: 0x50
 */
void Obj::finishEffect()
{
	efx::TTankEffect* effect = mTankEffect;
	effect->mEfxFire.fade();
	effect->mEfxFireYodare.fade();
}

/**
 * @note Address: 0x8029ECB4
 * @note Size: 0x64
 */
void Obj::effectDrawOn()
{
	efx::TTankEffect* effect = mTankEffect;
	effect->mEfxFire.mEfxABC.endDemoDrawOn();
	effect->mEfxFire.mEfxIND.endDemoDrawOn();
	effect->mEfxFireYodare.endDemoDrawOn();
}

/**
 * @note Address: 0x8029ED58
 * @note Size: 0x64
 */
void Obj::effectDrawOff()
{
	efx::TTankEffect* effect = mTankEffect;
	effect->mEfxFire.mEfxABC.startDemoDrawOff();
	effect->mEfxFire.mEfxIND.startDemoDrawOff();
	effect->mEfxFireYodare.startDemoDrawOff();
}

/**
 * @note Address: 0x8029EDFC
 * @note Size: 0x60
 */
void Obj::interactCreature(Creature* creature)
{
	InteractFire fire(this, static_cast<EnemyParmsBase*>(mParms)->mGeneral.mAttackDamage.mValue);
	creature->stimulate(fire);
}

/**
 * @note Address: 0x8029EE5C
 * @note Size: 0x10
 */
void Obj::stopEffectRadius(f32 radius)
{
	efx::TTankEffect* effect                                = mTankEffect;
	effect->mEfxFire.mEfxABC.mParticleCallBack.mMaxDistance = radius;
	effect->mEfxFire.mEfxIND.mParticleCallBack.mMaxDistance = radius;
}

/**
 * @note Address: 0x8029EE6C
 * @note Size: 0x44
 */
void Obj::createChargeSE() { getJAIObject()->startSound(PSSE_EN_TANK_BREATH, 0); }

/**
 * @note Address: 0x8029EEB0
 * @note Size: 0x44
 */
void Obj::createDisChargeSE() { getJAIObject()->startSound(PSSE_EN_TANK_FIRE, 0); }

} // namespace Ftank
} // namespace Game
