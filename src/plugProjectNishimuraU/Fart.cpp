#include "Game/Entities/Fart.h"
#include "Game/Entities/PelletNumber.h"
#include "Game/Entities/ItemHoney.h"
#include "Game/gamePlayData.h"
#include "PS.h"
#include "trig.h"

namespace Game {
namespace Fart {

/*
 * --INFO--
 * Address:	80285448
 * Size:	000098
 */
Obj::Obj() { createEffect(); }

/*
 * --INFO--
 * Address:	802854E0
 * Size:	000070
 */
void Obj::doUpdateCommon()
{
	EnemyBase::doUpdateCommon();
	interactFartGasAttack();
	if (getStateID() >= 2) {
		getJAIObject()->startSound(PSSE_EN_FART_BUZZ, 0);
	}
}

/*
 * --INFO--
 * Address:	80285550
 * Size:	0001F0
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
	changeTexture = static_cast<Mgr*>(mMgr)->getChangeTexture();

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

/*
 * --INFO--
 * Address:	80285740
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	80285760
 * Size:	0001F4
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
		arg.mIsSphereCollisionDisabled = true;

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

/*
 * --INFO--
 * Address:	80285954
 * Size:	000120
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

/*
 * --INFO--
 * Address:	80285A74
 * Size:	0000B8
 */
void Obj::createEffect()
{
	mBodyEffect = new efx::TBabaFly_ver01(&mPosition);
	mFartTimer  = 2.5f;
}

/*
 * --INFO--
 * Address:	80285B2C
 * Size:	000024
 */
void Obj::resetFartTimer()
{
	mFartTimer    = 2.5f;
	mFartPosition = mPosition;
}

/*
 * --INFO--
 * Address:	80285B50
 * Size:	0000A8
 */
void Obj::startBodyEffect()
{
	efx::ArgScale arg(mPosition, static_cast<Kogane::Parms*>(mParms)->mProperParms.mScale.mValue);
	mBodyEffect->create(&arg);
	resetFartTimer();
}

/*
 * --INFO--
 * Address:	80285BF8
 * Size:	000030
 */
void Obj::finishBodyEffect() { mBodyEffect->fade(); }

/*
 * --INFO--
 * Address:	80285C28
 * Size:	000204
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

/*
 * --INFO--
 * Address:	80285E2C
 * Size:	000030
 */
void Obj::effectDrawOn() { mBodyEffect->endDemoDrawOn(); }

/*
 * --INFO--
 * Address:	80285E5C
 * Size:	000030
 */
void Obj::effectDrawOff() { mBodyEffect->startDemoDrawOff(); }

/*
 * --INFO--
 * Address:	80285E8C
 * Size:	000044
 */
void Obj::createPressSESpecial() { getJAIObject()->startSound(PSSE_EN_FART_HIT, 0); }

} // namespace Fart
} // namespace Game
