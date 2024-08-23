#include "Game/plantsMgr.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/Navi.h"
#include "Game/generalEnemyMgr.h"
#include "Game/Entities/ShijimiChou.h"
#include "Game/GameSystem.h"
#include "efx/TWatage.h"
#include "PSM/Navi.h"
#include "nans.h"

namespace Game {

/**
 * @note Address: 0x803583CC
 * @note Size: 0x50
 */
void Plants::Obj::setParameters()
{
	EnemyBase::setParameters();
	Vector3f pos = mPosition;
	pos.y += static_cast<EnemyParmsBase*>(mParms)->mGeneral.mTerritoryRadius.mValue;
	mCurLodSphere.mPosition = pos;
}

/**
 * @note Address: 0x8035841C
 * @note Size: 0x20
 */
void Plants::Obj::birth(Vector3f& position, f32 faceDir) { EnemyBase::birth(position, faceDir); }

/**
 * @note Address: 0x8035843C
 * @note Size: 0x1A8
 */
void Plants::Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	disableEvent(0, EB_LeaveCarcass);
	disableEvent(0, EB_DamageAnimEnabled);
	disableEvent(0, EB_DeathEffectEnabled);
	enableEvent(0, EB_Invulnerable);

	show();
	setEmotionNone();
	disableEvent(0, EB_PlatformCollEnabled);

	enableEvent(0, EB_BitterImmune);
	hardConstraintOn();
	mIsAnimActive   = 0;
	mHasBeenTouched = 0;
	mBaseTrMatrix.makeSRT(mScale, mRotation, mPosition);

	P2ASSERTLINE(83, mModel);

	startMotion(PLANTANIM_Default, nullptr);

	SysShape::Animator* animator = &mAnimator->getAnimator();
	animator->setModelCalc(mModel, 0);
	PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mModel->mJ3dModel->mPosMtx);
	mModel->mJ3dModel->calc();

	setCollisionFlick(false);

	if (shadowMgr) {
		shadowMgr->killShadow(this);
	}

	mSpawnsSpectralids = false;
	if (mPelletInfo.mColor == 0 && mPelletInfo.mSize == 1) {
		mSpawnsSpectralids = true;
	}
}

/**
 * @note Address: 0x803585E4
 * @note Size: 0xEC
 */
Plants::Obj::Obj() { mAnimator = new ProperAnimator; }

/**
 * @note Address: 0x803586D0
 * @note Size: 0x48
 */
void Plants::Obj::update()
{
	if (isCullingOff()) {
		doUpdate();
	}
}

/**
 * @note Address: 0x80358718
 * @note Size: 0x6C
 */
void Plants::Obj::doAnimation()
{
	EnemyBase::doAnimation();
	if (mIsAnimActive && mCurAnim->mIsPlaying && (u32)mCurAnim->mType == KEYEVENT_END) {
		mIsAnimActive   = 0;
		mHasBeenTouched = 0;
		setZukanVisible(false);
	}
}

/**
 * @note Address: 0x80358784
 * @note Size: 0x9C
 */
void Plants::Obj::doAnimationCullingOff()
{
	if (mIsAnimActive) {
		mCurAnim->mIsPlaying = false;
		doAnimationUpdateAnimator();
		if (mLod.isFlag(AILOD_IsVisible)) {
			mBaseTrMatrix.makeSRT(mScale, mRotation, mPosition);
			PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mModel->mJ3dModel->mPosMtx);
			mModel->mJ3dModel->calc();
		}
	}
}

/**
 * @note Address: 0x80358820
 * @note Size: 0x20
 */
void Plants::Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/**
 * @note Address: 0x80358840
 * @note Size: 0x150
 */
void Plants::Obj::collisionCallback(CollEvent& collEvent)
{
	if (mLod.isFlag(AILOD_IsVisible)) {
		setCollEvent(collEvent);
		Creature* creature = collEvent.mCollidingCreature;
		if (creature) {
			Vector3f creaturePos = creature->getPosition();
			if (!(creaturePos.y < mPosition.y - 5.0f)) {
				Vector3f velocity = creature->getVelocity();

				if (FABS(velocity.x) > 1.0f || FABS(velocity.z) > 1.0f) {
					if (creature->isNavi() && !mHasBeenTouched) {
						mHasBeenTouched = 1;
						touchedSE(static_cast<Navi*>(creature));
					}

					if (!mIsAnimActive) {
						startMotion(PLANTANIM_Default, nullptr);
						touched();
						mIsAnimActive = 1;
					}
				}
			}
		}
	}
}

/**
 * @note Address: 0x80358990
 * @note Size: 0x60
 */
bool Plants::Obj::earthquakeCallBack(Creature* creature, f32 damage)
{
	if (!mIsAnimActive) {
		startMotion(PLANTANIM_Default, nullptr);
		touched();
		mIsAnimActive = 1;
	}

	return false;
}

/**
 * @note Address: 0x803589F0
 * @note Size: 0xA0
 */
void Plants::Obj::touched()
{
	if (mSpawnsSpectralids) {
		mSpawnsSpectralids    = false;
		ShijimiChou::Mgr* mgr = static_cast<ShijimiChou::Mgr*>(generalEnemyMgr->getEnemyMgr(EnemyTypeID::EnemyID_ShijimiChou));
		if (mgr) {
			EnemyBirthArg birthArg;
			birthArg.mPosition   = mPosition;
			birthArg.mPosition.y = mPosition.y + static_cast<EnemyParmsBase*>(mParms)->mGeneral.mLifeMeterHeight.mValue;
			birthArg.mFaceDir    = 0.0f;

			mgr->createGroupByPlants(birthArg, 5);
		}
	}
}

/**
 * @note Address: 0x80358A90
 * @note Size: 0x40
 */
void Plants::Obj::touchedSE(Navi* navi)
{
	if (navi) {
		navi->mSoundObj->startSound(PSSE_PL_TOUCH_LEAF, 0);
	}
}

/**
 * @note Address: 0x80358AD0
 * @note Size: 0x40
 */
void HikariKinoko::Obj::touchedSE(Navi* navi)
{
	if (navi) {
		navi->mSoundObj->startSound(PSSE_PL_TOUCH_KINOKO, 0);
	}
}

/**
 * @note Address: 0x80358B10
 * @note Size: 0x48
 */
void Watage::Obj::doEntry()
{
	gameSystem->setDrawBuffer(7);
	EnemyBase::doEntry();
	gameSystem->setDrawBuffer(0);
}

/**
 * @note Address: 0x80358B58
 * @note Size: 0x104
 */
void Watage::Obj::touched()
{
	if (mSpawnsSpectralids) {
		mSpawnsSpectralids    = false;
		ShijimiChou::Mgr* mgr = static_cast<ShijimiChou::Mgr*>(generalEnemyMgr->getEnemyMgr(EnemyTypeID::EnemyID_ShijimiChou));
		if (mgr) {
			EnemyBirthArg birthArg;
			birthArg.mPosition   = mPosition;
			birthArg.mPosition.y = mPosition.y + static_cast<EnemyParmsBase*>(mParms)->mGeneral.mLifeMeterHeight.mValue;
			birthArg.mFaceDir    = 0.0f;

			mgr->createGroupByPlants(birthArg, 5);
		}
	}

	efx::TWatage watageEFX;
	efx::Arg arg(mPosition);

	watageEFX.create(&arg);
}

/**
 * @note Address: 0x80358C5C
 * @note Size: 0x48
 */
void Nekojarashi::Obj::doEntry()
{
	gameSystem->setDrawBuffer(7);
	EnemyBase::doEntry();
	gameSystem->setDrawBuffer(0);
}

/**
 * @note Address: 0x80358CA4
 * @note Size: 0x40
 */
void DiodeRed::Obj::touchedSE(Navi* navi)
{
	if (navi) {
		navi->mSoundObj->startSound(PSSE_PL_TOUCH_DIODE, 0);
	}
}

/**
 * @note Address: 0x80358CE4
 * @note Size: 0x48
 */
void DiodeRed::Obj::doEntry()
{
	gameSystem->setDrawBuffer(7);
	EnemyBase::doEntry();
	gameSystem->setDrawBuffer(0);
}

/**
 * @note Address: 0x80358D2C
 * @note Size: 0x40
 */
void DiodeGreen::Obj::touchedSE(Navi* navi)
{
	if (navi) {
		navi->mSoundObj->startSound(PSSE_PL_TOUCH_DIODE, 0);
	}
}

/**
 * @note Address: 0x80358D6C
 * @note Size: 0x48
 */
void DiodeGreen::Obj::doEntry()
{
	gameSystem->setDrawBuffer(7);
	EnemyBase::doEntry();
	gameSystem->setDrawBuffer(0);
}

} // namespace Game
