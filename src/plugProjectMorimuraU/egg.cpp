#include "Game/Entities/Egg.h"
#include "Game/MapMgr.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/gamePlayData.h"
#include "Game/Entities/TamagoMushi.h"
#include "Game/generalEnemyMgr.h"
#include "Game/Entities/PelletNumber.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Egg {

/**
 * @note Address: 0x8034BB30
 * @note Size: 0x20
 */
void Obj::setParameters() { EnemyBase::setParameters(); }

/**
 * @note Address: 0x8034BB50
 * @note Size: 0x20
 */
void Obj::birth(Vector3f& position, f32 p1) { EnemyBase::birth(position, p1); }

/**
 * @note Address: 0x8034BB70
 * @note Size: 0x150
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	disableEvent(0, EB_LeaveCarcass);
	disableEvent(0, EB_DamageAnimEnabled);
	disableEvent(0, EB_DeathEffectEnabled);
	setEmotionNone();
	enableEvent(0, EB_BitterImmune);
	mIsFalling = false;
	mFsm->start(this, 0, nullptr);

	if (!isBirthTypeDropGroup()) {
		enableEvent(0, EB_Constrained);
		if (mapMgr) {
			Vector3f position = mPosition;
			position.y += 20.0f;
			mPosition.y = mapMgr->getMinY(position);
		}

		mCurAnim->mIsPlaying = false;
		doAnimationUpdateAnimator();

		mBaseTrMatrix.makeSRT(mScale, mRotation, mPosition);

		PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mModel->mJ3dModel->mPosMtx);
		mModel->mJ3dModel->calc();
	}
}

/**
 * @note Address: 0x8034BCC0
 * @note Size: 0x138
 */
Obj::Obj()
{
	mFsm      = nullptr;
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
}

/**
 * @note Address: 0x8034BE44
 * @note Size: 0x6C
 */
void Obj::doUpdate()
{
	if (mFloorTriangle) {
		mTargetVelocity = Vector3f(0.0f);
	} else {
		mTargetVelocity = mCurrentVelocity;
	}

	mFsm->exec(this);
}

/**
 * @note Address: 0x8034BEB0
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics&) { }

/**
 * @note Address: 0x8034BEB4
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/**
 * @note Address: 0x8034BED4
 * @note Size: 0x4C
 */
void Obj::doSimulation(f32 constraint)
{
	if (mCaptureMatrix) {
		mPosition = mCaptureMatrix->getColumn(3);
		updateSpheres();
	} else {
		EnemyBase::doSimulation(constraint);
	}
}

/**
 * @note Address: 0x8034BF20
 * @note Size: 0x128
 */
void Obj::doAnimationCullingOff()
{
	mCurAnim->mIsPlaying = false;
	doAnimationUpdateAnimator();
	bool check;
	Vector3f vec = mBaseTrMatrix.getColumn(3);
	if (mCaptureMatrix) {
		check             = false;
		Vector3f checkVec = mCaptureMatrix->getColumn(3);
		if (vec.x != checkVec.x || vec.y != checkVec.y || vec.z != checkVec.z) {
			check = true;
			PSMTXCopy(mCaptureMatrix->mMatrix.mtxView, mBaseTrMatrix.mMatrix.mtxView);
		}
	} else {
		check = false;
		if (mPosition.x != vec.x || mPosition.y != vec.y || mPosition.z != vec.z) {
			check = true;
			mBaseTrMatrix.makeSRT(mScale, mRotation, mPosition);
		}
	}

	if (check || !isStopMotion()) {
		PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mModel->mJ3dModel->mPosMtx);
		mModel->mJ3dModel->calc();
		mCollTree->update();
	}
}

/**
 * @note Address: 0x8034C048
 * @note Size: 0x8
 */
bool Obj::pressCallBack(Creature*, f32, CollPart*) { return false; }

/**
 * @note Address: 0x8034C050
 * @note Size: 0x54
 */
void Obj::bounceCallback(Sys::Triangle* triangle)
{
	if (mIsFalling || isBirthTypeDropGroup()) {
		enableEvent(0, EB_LifegaugeVisible);
		mHealth = 0.0f;
	}
}

/**
 * @note Address: 0x8034C0A4
 * @note Size: 0x90
 */
void Obj::collisionCallback(CollEvent& collEvent)
{
	EnemyBase::collisionCallback(collEvent);
	if (isBirthTypeDropGroup() && collEvent.mCollidingCreature != nullptr && !collEvent.mCollidingCreature->isTeki() && getStateID() == 0) {
		enableEvent(0, EB_LifegaugeVisible);
		mHealth = 0.0f;
	}
}

/**
 * @note Address: 0x8034C134
 * @note Size: 0x50
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{
	shadowParam.mPosition                 = mPosition;
	shadowParam.mPosition.y               = mPosition.y + 2.0f;
	shadowParam.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	shadowParam.mBoundingSphere.mRadius   = 20.0f;
	shadowParam.mSize                     = 10.0f;
}

/**
 * @note Address: 0x8034C184
 * @note Size: 0x48
 */
bool Obj::needShadow()
{
	bool result = (!EnemyBase::needShadow()) ? false : (mCaptureMatrix == nullptr);
	return result;
}

/**
 * @note Address: 0x8034C1CC
 * @note Size: 0xA0
 */
void Obj::onStartCapture()
{
	if (mCaptureMatrix) {
		Vector3f position = mCaptureMatrix->getColumn(3);
		onSetPosition(position);
		mCurrentVelocity = Vector3f(0.0f);
		mTargetVelocity  = Vector3f(0.0f);
		enableEvent(0, EB_Constrained);
		enableEvent(0, EB_Invulnerable);
		disableEvent(0, EB_Cullable);
	}
}

/**
 * @note Address: 0x8034C26C
 * @note Size: 0x40
 */
void Obj::onEndCapture()
{
	constraintOff();
	mIsFalling = true;
	enableEvent(0, EB_Cullable);
}

/**
 * @note Address: 0x8034C2AC
 * @note Size: 0x5F4
 */
void Obj::genItem()
{
	TamagoMushi::Obj* mititeGroup;
	int dropType = EGGDROP_SingleNectar;
	Vector3f velocity(0.0f, 250.0f, 0.0f);
	Vector3f position = mPosition;
	position.y += 2.0f;

	f32 randVal = randFloat();
	f32 test    = C_PROPERPARMS.mSingleNectarChance.mValue;
	if (randVal < test) {
		dropType = EGGDROP_SingleNectar;
	} else {
		test += C_PROPERPARMS.mDoubleNectarChance.mValue;
		if (randVal < test) {
			dropType = EGGDROP_DoubleNectar;
		} else {
			test += C_PROPERPARMS.mMititesChance.mValue;
			if (randVal < test) {
				dropType = EGGDROP_Mitites;
			} else {
				test += C_PROPERPARMS.mSpicyChance.mValue;
				if (randVal < test) {
					dropType = EGGDROP_Spicy;
				} else {
					test += C_PROPERPARMS.mBitterChance.mValue;
					if (randVal < test) {
						dropType = EGGDROP_Bitter;
					}
				}
			}
		}
	}

	if (C_PARMS->mForcedDropType != 0) {
		dropType = C_PARMS->mForcedDropType - 1;
	}

	if (C_PARMS->mDoCheckHasSpray != 0) {
		if (dropType == EGGDROP_Spicy) {
			if (!playData->isDemoFlag(DEMO_First_Spicy_Spray_Made)) {
				dropType = EGGDROP_SingleNectar;
			}
		} else if (dropType == EGGDROP_Bitter && !playData->isDemoFlag(DEMO_First_Bitter_Spray_Made)) {
			dropType = EGGDROP_SingleNectar;
		}
	}

	mititeGroup = nullptr;
	Pellet* pellet;
	switch (dropType) {
	case EGGDROP_1Pellets:
		PelletNumberInitArg initArg0(PELLET_NUMBER_ONE, (int)3.0f * randFloat());
		pellet = pelletMgr->birth(&initArg0);
		pellet->setPosition(position, false);
		pellet->setVelocity(velocity);
		break;

	case EGGDROP_5Pellets:
		PelletNumberInitArg initArg1(PELLET_NUMBER_FIVE, (int)3.0f * randFloat());
		pellet = pelletMgr->birth(&initArg1);
		pellet->setPosition(position, false);
		pellet->setVelocity(velocity);
		break;

	case EGGDROP_SingleNectar:
		BaseItem* nectarItem = ItemHoney::mgr->birth();
		if (nectarItem) {
			ItemHoney::Item* nectar = static_cast<ItemHoney::Item*>(nectarItem);
			nectar->init(nullptr);
			nectar->mHoneyType = HONEY_Y;
			nectar->setPosition(position, false);
			nectar->setVelocity(velocity);
		}
		break;

	case EGGDROP_DoubleNectar:
		f32 angle = TAU * randFloat();

		for (int i = 0; i < 2; i++) {
			BaseItem* doubleNectarItem = ItemHoney::mgr->birth();
			Vector3f sprayVelocity     = velocity;

			if (doubleNectarItem) {
				ItemHoney::Item* nectar = static_cast<ItemHoney::Item*>(doubleNectarItem);
				f32 theta               = PI * i + angle;
				sprayVelocity.x         = 50.0f * sinf(theta);
				sprayVelocity.z         = 50.0f * cosf(theta);
				nectar->init(nullptr);
				nectar->mHoneyType = HONEY_Y;
				nectar->setPosition(position, false);
				nectar->setVelocity(sprayVelocity);
			}
		}

		break;

	case EGGDROP_Mitites:
		TamagoMushi::Mgr* mititeMgr = static_cast<TamagoMushi::Mgr*>(generalEnemyMgr->getEnemyMgr(EnemyTypeID::EnemyID_TamagoMushi));
		if (mititeMgr) {
			EnemyBirthArg birthArg;
			birthArg.mPosition = mPosition;

			birthArg.mFaceDir = TAU * randFloat();
			velocity.y        = 200.0f;
			mititeGroup       = mititeMgr->createGroup(birthArg, 10, velocity);
		}

		if (mititeGroup == nullptr) {
			BaseItem* mititeBackupItem = ItemHoney::mgr->birth();
			if (mititeBackupItem) {
				ItemHoney::Item* nectar = static_cast<ItemHoney::Item*>(mititeBackupItem);
				nectar->init(nullptr);
				nectar->mHoneyType = HONEY_Y;
				nectar->setPosition(position, false);
				nectar->setVelocity(velocity);
			}
		}

		break;

	case EGGDROP_Spicy:
	case EGGDROP_Bitter:
		BaseItem* sprayItem = ItemHoney::mgr->birth();

		if (sprayItem) {
			ItemHoney::Item* spray = static_cast<ItemHoney::Item*>(sprayItem);
			spray->init(nullptr);

			spray->mHoneyType = HONEY_R;
			if (dropType == EGGDROP_Bitter) {
				spray->mHoneyType = HONEY_B;
			}

			spray->setPosition(position, false);
			spray->setVelocity(velocity);
		}

		break;
	}
}

} // namespace Egg
} // namespace Game
