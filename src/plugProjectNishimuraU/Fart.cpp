#include "Game/Entities/Fart.h"
#include "Game/Entities/PelletNumber.h"
#include "Game/Entities/ItemHoney.h"
#include "Game/gamePlayData.h"
#include "PS.h"
#include "trig.h"

namespace Game {
namespace Fart {

/**
 * @note Address: 0x80285448
 * @note Size: 0x98
 */
Obj::Obj() { createEffect(); }

/**
 * @note Address: 0x802854E0
 * @note Size: 0x70
 */
void Obj::doUpdateCommon()
{
	EnemyBase::doUpdateCommon();
	interactFartGasAttack();
	if (getStateID() >= 2) {
		getJAIObject()->startSound(PSSE_EN_FART_BUZZ, 0);
	}
}

/**
 * @note Address: 0x80285550
 * @note Size: 0x1F0
 */
void Obj::changeMaterial()
{
	J3DModelData* modelData;
	J3DModel* j3dModel;
	ResTIMG* changeTexture;
	ResTIMG* newTexture;
	J3DTexture* j3dTexture;

	j3dModel      = mModel->mJ3dModel;
	modelData     = j3dModel->mModelData;
	changeTexture = C_MGR->getChangeTexture();

	u16 idx                = modelData->mMaterialTable.mMaterialNames->getIndex("karada");
	J3DMaterial* karadaMat = modelData->mMaterialTable.mMaterials[idx];
	karadaMat->mTevBlock->setTevKColor(0, J3DGXColor(0xF, 0xF, 0xF, 0xFF));

	j3dModel->calcMaterial();

	j3dTexture = mModel->mJ3dModel->mModelData->mMaterialTable.mTextures;
	newTexture = j3dTexture->mRes;

	*newTexture = *changeTexture;

	j3dTexture->setImageOffset((u32)changeTexture, 0);
	j3dTexture->setPaletteOffset((u32)changeTexture, 0);

	for (u16 i = 0; i < modelData->mMaterialTable.mMaterialNum; i++) {
		J3DMatPacket* packet  = &j3dModel->mMatPackets[i];
		j3dSys.mMatPacket     = packet;
		J3DMaterial* material = modelData->mMaterialTable.mMaterials[i];
		material->diff(packet->mShapePacket->mDiffFlag);
	}
}

/**
 * @note Address: 0x80285740
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/**
 * @note Address: 0x80285760
 * @note Size: 0x1F4
 */
void Obj::interactFartGasAttack()
{
	if (mFartTimer < 2.5f) {
		mFartTimer += sys->mDeltaTime;
		Kogane::Parms* parms = static_cast<Kogane::Parms*>(mParms);
		f32 max              = mFartPosition.y + parms->mGeneral.mAttackRadius.mValue;
		f32 min              = mFartPosition.y - parms->mGeneral.mAttackRadius.mValue;
		f32 radSqr           = SQUARE(parms->mGeneral.mAttackRadius.mValue);

		Sys::Sphere sphere(mFartPosition);
		sphere.mRadius = parms->mGeneral.mAttackRadius.mValue;

		CellIteratorArg arg(sphere);
		arg.mOptimise = true;

		CellIterator iterator(arg);
		CI_LOOP(iterator)
		{
			Creature* creature = static_cast<Creature*>(*iterator);

			if (creature->isAlive() && (creature->isNavi() || creature->isPiki())) {
				Vector3f position = creature->getPosition();
				if ((position.y < max) && (position.y > min)) {
					Vector2f delta;
					getFartDistance2D(position, delta);
					if (SQUARE(delta.x) + SQUARE(delta.y) < radSqr) {
						InteractGas gas(this, static_cast<Kogane::Parms*>(mParms)->mGeneral.mAttackDamage.mValue);
						creature->stimulate(gas);
					}
				}
			}
		}
		PSStartSoundVec(PSSE_EN_OTAKARA_ATK_GAS, (Vec*)&mFartPosition);
	}
}

/**
 * @note Address: 0x80285954
 * @note Size: 0x120
 */
void Obj::createItem()
{
	if (createTreasureItem()) {
		return;
	}

	bool createPelletItem = true;
	u32 initArg           = 0;
	u32 amount            = 0;

	switch (mHitCount) {
	case 0: // initial flip
		createPelletItem = false;
		initArg          = HONEY_Y;
		amount           = 3;
		break;
	case 1: // second flip
		createPelletItem = false;

		if (playData && playData->isDemoFlag(DEMO_First_Bitter_Spray_Made)) {
			initArg = HONEY_B;
			amount  = 1;
		} else {
			initArg = HONEY_Y;
			amount  = 3;
		}
		break;
	case 2: // third flip
		createPelletItem = false;

		if (playData && playData->isDemoFlag(DEMO_First_Bitter_Spray_Made)) {
			initArg = HONEY_B;
			amount  = 1;
		} else {
			initArg = HONEY_Y;
			amount  = 3;
		}

		mAppearTimer = 12800.0f;
		break;
	default:
		break;
	}

	if (createPelletItem) {
		createPellet(initArg, amount);
	} else {
		createDoping(initArg, amount);
	}

	mHitCount++;
}

/**
 * @note Address: 0x80285A74
 * @note Size: 0xB8
 */
void Obj::createEffect()
{
	mBodyEffect = new efx::TBabaFly_ver01(&mPosition);
	mFartTimer  = 2.5f;
}

/**
 * @note Address: 0x80285B2C
 * @note Size: 0x24
 */
void Obj::resetFartTimer()
{
	mFartTimer    = 2.5f;
	mFartPosition = mPosition;
}

/**
 * @note Address: 0x80285B50
 * @note Size: 0xA8
 */
void Obj::startBodyEffect()
{
	efx::ArgScale arg(mPosition, static_cast<Kogane::Parms*>(mParms)->mProperParms.mScale.mValue);
	mBodyEffect->create(&arg);
	resetFartTimer();
}

/**
 * @note Address: 0x80285BF8
 * @note Size: 0x30
 */
void Obj::finishBodyEffect() { mBodyEffect->fade(); }

/**
 * @note Address: 0x80285C28
 * @note Size: 0x204
 */
void Obj::createFartEffect()
{
	efx::TBabaHe fartEffectFX;
	Vector3f position = mPosition;
	efx::ArgRotY arg(position.x, position.y, position.z, getFaceDir());
	fartEffectFX.create(&arg);
	mFartTimer = 0.0f;

	Kogane::Parms* parms = static_cast<Kogane::Parms*>(mParms);
	f32 scale            = (parms->mProperParms.mScale.mValue * parms->mGeneral.mMaxAttackRange.mValue);

	Vector3f temp_vec(scale * sinf(mFaceDir), 0.0f, scale * cosf(mFaceDir));

	mFartPosition = getBodyJointPos();
	mFartPosition -= temp_vec;

	getJAIObject()->startSound(PSSE_EN_FART_GAS, 0);
}

/**
 * @note Address: 0x80285E2C
 * @note Size: 0x30
 */
void Obj::effectDrawOn() { mBodyEffect->endDemoDrawOn(); }

/**
 * @note Address: 0x80285E5C
 * @note Size: 0x30
 */
void Obj::effectDrawOff() { mBodyEffect->startDemoDrawOff(); }

/**
 * @note Address: 0x80285E8C
 * @note Size: 0x44
 */
void Obj::createPressSESpecial() { getJAIObject()->startSound(PSSE_EN_FART_HIT, 0); }

} // namespace Fart
} // namespace Game
