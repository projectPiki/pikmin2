#include "Game/Entities/Tank.h"

namespace Game {
namespace Wtank {

/*
 * --INFO--
 * Address:	8027C80C
 * Size:	0000A4
 */
Obj::Obj() { createEffect(); }

/*
 * --INFO--
 * Address:	8027C8B0
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
 * Address:	8027CA54
 * Size:	00019C
 */
void Obj::createEffect() { mTankEffect = new efx::TWtankEffect(nullptr); }

/*
 * --INFO--
 * Address:	8027CDDC
 * Size:	000050
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

/*
 * --INFO--
 * Address:	8027CE2C
 * Size:	000034
 */
void Obj::startEffect() { mTankEffect->mEfxWat.create(nullptr); }

/*
 * --INFO--
 * Address:	8027CE60
 * Size:	000054
 */
void Obj::startYodare()
{
	efx::TWtankEffect* tankEffect = mTankEffect;
	tankEffect->mEfxWat.fade();
	tankEffect->mEfxWatYodare.create(nullptr);
}

/*
 * --INFO--
 * Address:	8027CF40
 * Size:	000050
 */
void Obj::finishEffect()
{
	efx::TWtankEffect* effect = mTankEffect;
	effect->mEfxWat.fade();
	effect->mEfxWatYodare.fade();
}

/*
 * --INFO--
 * Address:	8027CF90
 * Size:	000050
 */
void Obj::effectDrawOn()
{
	efx::TWtankEffect* effect = mTankEffect;
	effect->mEfxWat.endDemoDrawOn();
	effect->mEfxWatYodare.endDemoDrawOn();
}

/*
 * --INFO--
 * Address:	8027D03C
 * Size:	000050
 */
void Obj::effectDrawOff()
{
	efx::TWtankEffect* effect = mTankEffect;
	effect->mEfxWat.startDemoDrawOff();
	effect->mEfxWatYodare.startDemoDrawOff();
}

/*
 * --INFO--
 * Address:	8027D0E8
 * Size:	000060
 */
void Obj::interactCreature(Creature* creature)
{
	InteractBubble bubble(this, static_cast<EnemyParmsBase*>(mParms)->mGeneral.mAttackDamage.mValue);
	creature->stimulate(bubble);
}

/*
 * --INFO--
 * Address:	8027D148
 * Size:	00000C
 */
void Obj::stopEffectRadius(f32 radius)
{
	efx::TWtankEffect* effect             = mTankEffect;
	effect->mEfxWat.mParticleCallBack._04 = radius;
}

/*
 * --INFO--
 * Address:	8027D154
 * Size:	000044
 */
void Obj::createChargeSE() { getJAIObject()->startSound(PSSE_EN_WATERTANK_BREATH, 0); }

/*
 * --INFO--
 * Address:	8027D198
 * Size:	000044
 */
void Obj::createDisChargeSE() { getJAIObject()->startSound(PSSE_EN_WATERTANK_SHOT, 0); }

} // namespace Wtank
} // namespace Game
