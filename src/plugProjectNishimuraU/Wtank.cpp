#include "Game/Entities/Tank.h"

namespace Game {
namespace Wtank {

/**
 * @note Address: 0x8027C80C
 * @note Size: 0xA4
 */
Obj::Obj() { createEffect(); }

/**
 * @note Address: 0x8027C8B0
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
 * @note Address: 0x8027CA54
 * @note Size: 0x19C
 */
void Obj::createEffect() { mTankEffect = new efx::TWtankEffect(nullptr); }

/**
 * @note Address: 0x8027CDDC
 * @note Size: 0x50
 */
void Obj::setupEffect()
{
	efx::TWtankEffect* effect;
	Matrixf* mtx = mJoint->getWorldMatrix();
	effect       = mTankEffect;

	effect->mEfxWat.setMtxptr(mtx->mMatrix.mtxView);
	// effect->mEfxWat.mEfxIND.mMtx = mtx;
	effect->mEfxWatYodare.mMtx = mtx;
}

/**
 * @note Address: 0x8027CE2C
 * @note Size: 0x34
 */
void Obj::startEffect() { mTankEffect->mEfxWat.create(nullptr); }

/**
 * @note Address: 0x8027CE60
 * @note Size: 0x54
 */
void Obj::startYodare()
{
	efx::TWtankEffect* tankEffect = mTankEffect;
	tankEffect->mEfxWat.fade();
	tankEffect->mEfxWatYodare.create(nullptr);
}

/**
 * @note Address: 0x8027CF40
 * @note Size: 0x50
 */
void Obj::finishEffect()
{
	efx::TWtankEffect* effect = mTankEffect;
	effect->mEfxWat.fade();
	effect->mEfxWatYodare.fade();
}

/**
 * @note Address: 0x8027CF90
 * @note Size: 0x50
 */
void Obj::effectDrawOn()
{
	efx::TWtankEffect* effect = mTankEffect;
	effect->mEfxWat.endDemoDrawOn();
	effect->mEfxWatYodare.endDemoDrawOn();
}

/**
 * @note Address: 0x8027D03C
 * @note Size: 0x50
 */
void Obj::effectDrawOff()
{
	efx::TWtankEffect* effect = mTankEffect;
	effect->mEfxWat.startDemoDrawOff();
	effect->mEfxWatYodare.startDemoDrawOff();
}

/**
 * @note Address: 0x8027D0E8
 * @note Size: 0x60
 */
void Obj::interactCreature(Creature* creature)
{
	InteractBubble bubble(this, static_cast<EnemyParmsBase*>(mParms)->mGeneral.mAttackDamage.mValue);
	creature->stimulate(bubble);
}

/**
 * @note Address: 0x8027D148
 * @note Size: 0xC
 */
void Obj::stopEffectRadius(f32 radius)
{
	efx::TWtankEffect* effect                      = mTankEffect;
	effect->mEfxWat.mParticleCallBack.mMaxDistance = radius;
}

/**
 * @note Address: 0x8027D154
 * @note Size: 0x44
 */
void Obj::createChargeSE() { getJAIObject()->startSound(PSSE_EN_WATERTANK_BREATH, 0); }

/**
 * @note Address: 0x8027D198
 * @note Size: 0x44
 */
void Obj::createDisChargeSE() { getJAIObject()->startSound(PSSE_EN_WATERTANK_SHOT, 0); }

} // namespace Wtank
} // namespace Game
