#include "Game/Entities/Rock.h"
#include "Game/Navi.h"
#include "Game/EnemyFunc.h"
#include "Dolphin/rand.h"
#include "PS.h"

namespace Game {
namespace Rock {

/**
 * @note Address: 0x80262FF0
 * @note Size: 0x138
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
	createEffect();
}

/**
 * @note Address: 0x80263128
 * @note Size: 0x5C
 */
void Obj::birth(Vector3f& pos, f32 angle)
{
	EnemyBase::birth(pos, angle);
	RockInitialParams params(100.0f, 500.0f, 0.4f); // these never get used lol
	setInitialSetting(&params);
}

/**
 * @note Address: 0x80263184
 * @note Size: 0x28
 */
void Obj::setInitialSetting(EnemyInitialParamBase* param)
{
	mFallSpeed   = C_GENERALPARMS.mSearchDistance;
	mFallOffset  = C_GENERALPARMS.mSearchHeight;
	mScaleUpRate = C_GENERALPARMS.mSearchAngle;
}

/**
 * @note Address: 0x802631AC
 * @note Size: 0x1E0
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);

	if (mDropGroup == EDG_None) {
		mScaleModifier = 0.0001f;
		mScale         = Vector3f(0.0001f);
		mCollTree->mPart->setScale(0.0001f);
	}

	enableEvent(0, EB_Invulnerable);
	disableEvent(0, EB_DamageAnimEnabled);
	disableEvent(0, EB_LeaveCarcass);
	disableEvent(0, EB_DeathEffectEnabled);
	disableEvent(0, EB_LifegaugeVisible);
	enableEvent(0, EB_BitterImmune);

	setEmotionNone();
	setupEffect();

	mTimer       = 0.0f;
	mIsHoming    = false;
	mSourceEnemy = nullptr;

	if (getEnemyTypeID() == EnemyTypeID::EnemyID_Rock) {
		// if falling rock
		if (mExistDuration != 0.0f) {
			disableEvent(0, EB_Cullable);
			mTimer = randWeightFloat(1.5f);
		}

		if (mDropGroup == EDG_None) {
			mFsm->start(this, ROCK_Wait, nullptr);
			doAnimationCullingOff();

		} else {
			mFsm->start(this, ROCK_DropWait, nullptr);
		}

		shadowMgr->delShadow(this);

	} else {
		// if rolling rock
		initMoveVelocity();
		mFsm->start(this, ROCK_Move, nullptr);
		doAnimationCullingOff();
	}
}

/**
 * @note Address: 0x80263394
 * @note Size: 0x54
 */
void Obj::onKill(CreatureKillArg* arg)
{
	finishFallEffect();
	finishRollingGroundEffect();
	finishRollingWaterEffect();
	EnemyBase::onKill(arg);
}

/**
 * @note Address: 0x802633E8
 * @note Size: 0x34
 */
void Obj::doUpdate()
{
	mFsm->exec(this);
}

/**
 * @note Address: 0x8026341C
 * @note Size: 0x4C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/**
 * @note Address: 0x80263468
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics& gfx)
{
}

/**
 * @note Address: 0x8026346C
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx)
{
	EnemyBase::doDebugDraw(gfx);
}

/**
 * @note Address: 0x8026348C
 * @note Size: 0xE4
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{
	if (getEnemyTypeID() == EnemyTypeID::EnemyID_Rock) {
		shadowParam.mPosition               = mPosition;
		shadowParam.mBoundingSphere.mRadius = 50.0f + (mPosition.y - mHomePosition.y);
	} else {
		shadowParam.mPosition = Vector3f(mPosition.x, mPosition.y + 5.0f, mPosition.z);

		if (isEvent(1, EB2_Earthquake)) {
			shadowParam.mBoundingSphere.mRadius = 50.0f;
		} else {
			shadowParam.mBoundingSphere.mRadius = 20.0f;
		}
	}

	shadowParam.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	shadowParam.mSize                     = 25.0f * mScaleModifier;
}

/**
 * @note Address: 0x80263570
 * @note Size: 0x60
 */
bool Obj::needShadow()
{
	if (EnemyBase::needShadow()) {
		return true;
	}

	int stateID = getStateID();
	if (stateID == ROCK_Appear || stateID == ROCK_Fall) {
		return true;
	}

	return false;
}

/**
 * @note Address: 0x802635D0
 * @note Size: 0x88
 */
bool Obj::hipdropCallBack(Creature* creature, f32 damage, CollPart* part)
{
	if (isAlive() && !isEvent(0, EB_Bittered) && getStateID() == ROCK_Move) {
		mFsm->transit(this, ROCK_Dead, nullptr);
		return true;
	}

	return false;
}

/**
 * @note Address: 0x80263658
 * @note Size: 0x1A4
 */
void Obj::collisionCallback(CollEvent& event)
{
	Creature* other = event.mCollidingCreature;
	if (other) {
		bool notFakePiki = true;
		bool notRock     = true;
		if (other->isNavi() || other->isPiki()) {
			notFakePiki = false;
			if (other->mFloorTriangle) {
				EnemyBase* target = this;
				if (mSourceEnemy) {
					target = mSourceEnemy;
				}

				InteractPress press(target, C_GENERALPARMS.mAttackDamage.mValue, nullptr);
				event.mCollidingCreature->stimulate(press);
			}
		} else if (other->isTeki()) {
			InteractAttack attack(this, 250.0f, event.mCollisionObj);
			other->stimulate(attack);

			if (mRockType == EnemyTypeID::EnemyID_Rock && static_cast<EnemyBase*>(other)->getEnemyTypeID() == EnemyTypeID::EnemyID_Rock) {
				notRock = false;
			}
		}

		if (notFakePiki) {
			mHealth = 0.0f;
		}

		if (notRock) {
			setCollEvent(event);
		}
	}
}

/**
 * @note Address: 0x802637FC
 * @note Size: 0x54
 */
void Obj::wallCallback(const MoveInfo& info)
{
	if (EnemyBase::getStateID() == ROCK_Move) {
		mFsm->transit(this, ROCK_Dead, nullptr);
	}
}

/**
 * @note Address: 0x80263850
 * @note Size: 0x6C
 */
void Obj::inWaterCallback(WaterBox* wbox)
{
	if (getEnemyTypeID() == EnemyTypeID::EnemyID_Stone && EnemyBase::getStateID() == ROCK_Move) {
		finishRollingGroundEffect();
		startRollingWaterEffect();
		PSStartEnemyDownWatSE(this, mScaleModifier);
	}
}

/**
 * @note Address: 0x802638BC
 * @note Size: 0x60
 */
void Obj::outWaterCallback()
{
	if (getEnemyTypeID() == EnemyTypeID::EnemyID_Stone && EnemyBase::getStateID() == ROCK_Move) {
		finishRollingWaterEffect();
		startRollingGroundEffect();
	}
}

/**
 * @note Address: 0x8026391C
 * @note Size: 0x20
 */
void Obj::doStartMovie()
{
	effectDrawOff();
}

/**
 * @note Address: 0x8026393C
 * @note Size: 0x20
 */
void Obj::doEndMovie()
{
	effectDrawOn();
}

/**
 * @note Address: 0x8026395C
 * @note Size: 0x2C
 */
bool Obj::ignoreAtari(Creature* creature)
{
	if (static_cast<EnemyBase*>(creature) == mSourceEnemy && mTimer < 1.0f) {
		return true;
	}
	return false;
}

/**
 * @note Address: 0x80263988
 * @note Size: 0x7C
 */
bool Obj::fallRockScaleUp()
{
	bool isDone = false;
	if (mScaleModifier < 1.0f) {
		f32 scale = mScaleUpRate * sys->mDeltaTime + mScaleModifier;
		if (scale >= 1.0f) {
			isDone = true;
			scale  = 1.0f;
		}

		mScaleModifier = scale;
		mScale         = Vector3f(scale);

		mCollTree->mPart->setScale(scale);
	}

	return isDone;
}

/**
 * @note Address: 0x80263A04
 * @note Size: 0x7C
 */
bool Obj::moveRockScaleUp()
{
	bool isDone = false;
	if (mScaleModifier < 1.0f) {
		f32 scale = 5.0f * sys->mDeltaTime + mScaleModifier;
		if (scale >= 1.0f) {
			isDone = true;
			scale  = 1.0f;
		}

		mScaleModifier = scale;
		mScale         = Vector3f(scale);

		mCollTree->mPart->setScale(scale);
	}

	return isDone;
}

/**
 * @note Address: 0x80263A80
 * @note Size: 0x100
 */
void Obj::initMoveVelocity()
{
	Vector3f vel = getDirection(mFaceDir);
	vel *= C_GENERALPARMS.mMoveSpeed();
	mTargetVelocity = vel;
	setVelocity(vel);
}

/**
 * @note Address: 0x80263B80
 * @note Size: 0x3A0
 */
void Obj::updateMoveVelocity()
{
	if (mIsHoming) {
		Creature* target = nullptr;
		if (gameSystem && !gameSystem->isMultiplayerMode()) {
			target = naviMgr->getActiveNavi();
		}
		if (!target) {
			target = EnemyFunc::getNearestPikminOrNavi(this, 180.0f, C_GENERALPARMS.mSightRadius.mValue, nullptr, nullptr, nullptr);
		}

		Vector3f targetPos;
		if (target) {
			targetPos = target->getPosition();
		} else {
			targetPos = mPosition + mTargetVelocity;
		}

		turnToTarget(targetPos, C_GENERALPARMS.mTurnSpeed(), C_GENERALPARMS.mMaxTurnAngle());

		setTargetSpeed(C_PROPERPARMS.mSearchRumbleSpeed());

	} else {
		mTargetVelocity.x = 0.01f * mCurrentVelocity.x + 0.99f * mTargetVelocity.x;
		mTargetVelocity.y = 0.01f * mCurrentVelocity.y + 0.99f * mTargetVelocity.y;
		mTargetVelocity.z = 0.01f * mCurrentVelocity.z + 0.99f * mTargetVelocity.z;

		Vector3f targetPos = mPosition + mTargetVelocity;

		turnToTarget(targetPos, C_GENERALPARMS.mTurnSpeed(), C_GENERALPARMS.mMaxTurnAngle());
	}
}

/**
 * @note Address: 0x80263F20
 * @note Size: 0x1A4
 */
void Obj::createEffect()
{
	mEfxRun       = new efx::TRockRun();
	mEfxGroundRun = new efx::TRockGrRun();
	mEfxWaterRun  = new efx::TRockWRun();
}

/**
 * @note Address: 0x802640C4
 * @note Size: 0x18
 */
void Obj::setupEffect()
{
	mEfxRun->mPosition       = &mPosition;
	mEfxGroundRun->mPosition = &mPosition;
}

/**
 * @note Address: 0x802640DC
 * @note Size: 0x34
 */
void Obj::startFallEffect()
{
	mEfxRun->create(nullptr);
}

/**
 * @note Address: 0x80264110
 * @note Size: 0x30
 */
void Obj::finishFallEffect()
{
	mEfxRun->fade();
}

/**
 * @note Address: 0x80264140
 * @note Size: 0x34
 */
void Obj::startRollingGroundEffect()
{
	mEfxGroundRun->create(nullptr);
}

/**
 * @note Address: 0x80264174
 * @note Size: 0x30
 */
void Obj::finishRollingGroundEffect()
{
	mEfxGroundRun->fade();
}

/**
 * @note Address: 0x802641A4
 * @note Size: 0xE8
 */
void Obj::startRollingWaterEffect()
{
	f32 height = 0.0f;
	if (mWaterBox) {
		height = *mWaterBox->getSeaHeightPtr();
	}

	mEfxWaterRun->mSeaHeight = height;
	mEfxWaterRun->create(nullptr);

	efx::TRockWRun* waterFX = mEfxWaterRun;
	if (mEfxWaterRun->mIsActive) {
		f32 heightDiff = waterFX->mSeaHeight - mPosition.y;
		if (8.0f <= heightDiff && heightDiff < 45.0f) {
			efx::TRockWRun* waterFX = mEfxWaterRun;
			waterFX->mPosition      = Vector3f(mPosition.x, waterFX->mSeaHeight, mPosition.z);
			waterFX->mChasePos.create(nullptr);
		} else {
			waterFX->mChasePos.fade();
		}
	}
}

/**
 * @note Address: 0x8026429C
 * @note Size: 0x30
 */
void Obj::finishRollingWaterEffect()
{
	mEfxWaterRun->fade();
}

/**
 * @note Address: 0x80264310
 * @note Size: 0xA4
 */
void Obj::updateWaterEffectPosition()
{
	if (mWaterBox && mEfxWaterRun->mIsActive) {
		f32 heightDiff = mEfxWaterRun->mSeaHeight - mPosition.y;
		if (8.0f <= heightDiff && heightDiff < 45.0f) {
			efx::TRockWRun* waterFX = mEfxWaterRun;
			waterFX->mPosition      = Vector3f(mPosition.x, mEfxWaterRun->mSeaHeight, mPosition.z);
			waterFX->mChasePos.create(nullptr);
		} else {
			mEfxWaterRun->mChasePos.fade();
		}
	}
}

/**
 * @note Address: 0x802643B4
 * @note Size: 0x98
 */
void Obj::createRockDeadEffect()
{
	efx::Arg fxArg(mPosition);
	efx::TRockDead deadFX;

	deadFX.create(&fxArg);
}

/**
 * @note Address: 0x8026444C
 * @note Size: 0x64
 */
void Obj::effectDrawOn()
{
	mEfxRun->endDemoDrawOn();
	mEfxGroundRun->endDemoDrawOn();
	mEfxWaterRun->mChasePos.endDemoDrawOn();
}

/**
 * @note Address: 0x802644B0
 * @note Size: 0x64
 */
void Obj::effectDrawOff()
{
	mEfxRun->startDemoDrawOff();
	mEfxGroundRun->startDemoDrawOff();
	mEfxWaterRun->mChasePos.startDemoDrawOff();
}
} // namespace Rock
} // namespace Game
