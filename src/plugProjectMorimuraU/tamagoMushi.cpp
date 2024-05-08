#include "Game/Entities/TamagoMushi.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/PikiMgr.h"
#include "Game/PikiState.h"
#include "Game/Entities/ItemHoney.h"
#include "efx/TUjinko.h"
#include "efx/TTamagoAp.h"
#include "Dolphin/rand.h"

namespace Game {
namespace TamagoMushi {
static const char unusedName[] = "tamagoMushi";

/**
 * @note Address: 0x8036EBA8
 * @note Size: 0x20
 */
void Obj::setParameters() { EnemyBase::setParameters(); }

/**
 * @note Address: 0x8036EBC8
 * @note Size: 0x20
 */
void Obj::birth(Vector3f& pos, f32 faceDir) { EnemyBase::birth(pos, faceDir); }

/**
 * @note Address: 0x8036EBE8
 * @note Size: 0x2D0
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	disableEvent(0, EB_LeaveCarcass);
	disableEvent(0, EB_DamageAnimEnabled);
	disableEvent(0, EB_DeathEffectEnabled);
	mActiveCounter = 0;
	mIsInBall      = false;
	mLeader        = nullptr;
	mBitterHitNum  = 0;
	mGoalPosition  = mPosition;

	// last between 80% to 100% of the defined time
	mActiveMaxTime = (0.8f + 0.2f * randFloat()) * C_PROPERPARMS.mSurvivalTime.mValue;
	// last 5 times longer in the piklopedia
	if (gameSystem && gameSystem->isZukanMode()) {
		mActiveMaxTime *= 5;
	}

	mRandomTurnFactor     = 0.7f + 0.3f * randFloat();
	mRandomSpeedFactor    = 0.7f + 0.3f * randFloat();
	mRandomMoveOffsFactor = 0.3f + 0.7f * randFloat();
	mMoveRotationOffset   = 0.0f;
	mIsBallFallWait       = false;

	Vector3f dir = Vector3f(sinf(mFaceDir), 0.0f, cosf(mFaceDir));
	setGoalDirect(dir);
	mInPiklopedia = 0;

	P2ASSERTLINE(81, mModel);
	mKoshiJoint = mModel->getJoint("koshijnt");
	P2ASSERTLINE(84, mKoshiJoint);

	mFsm->start(this, TAMAGOMUSHI_Appear, nullptr);
}

/**
 * @note Address: 0x8036EEB8
 * @note Size: 0x13C
 */
Obj::Obj()
{
	mKoshiJoint = nullptr;
	mFsm        = nullptr;
	mAnimator   = new ProperAnimator;
	setFSM(new FSM);
}

/**
 * @note Address: 0x8036F040
 * @note Size: 0xA0
 */
void Obj::doUpdate()
{
	if (!isEvent(0, EB_Bittered)) {
		mFsm->exec(this);
		int stateID = getStateID();
		if (stateID == TAMAGOMUSHI_Walk || stateID == TAMAGOMUSHI_Turn) {
			mActiveCounter++;
			if (mActiveCounter > mActiveMaxTime) {
				mFsm->transit(this, TAMAGOMUSHI_Hide, nullptr);
			}
		}
	}
}

/**
 * @note Address: 0x8036F0E0
 * @note Size: 0x158
 */
void Obj::doAnimationCullingOff()
{
	mCurAnim->mIsPlaying = false;
	doAnimationUpdateAnimator();

	if (mPellet) {
		viewMakeMatrix(mBaseTrMatrix);
		Matrixf mtx;
		PSMTXScale(mtx.mMatrix.mtxView, mScale.x, mScale.y, mScale.z);
		PSMTXConcat(mBaseTrMatrix.mMatrix.mtxView, mtx.mMatrix.mtxView, mBaseTrMatrix.mMatrix.mtxView);

		Vector3f pos;
		mBaseTrMatrix.getTranslation(pos);
		onSetPosition(pos);
		onSetPositionPost(pos);
	} else {
		mBaseTrMatrix.makeTR(mPosition, mRotation);
	}

	PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mModel->mJ3dModel->mPosMtx);

	if (C_PARMS->mDoUseModelFetch && getCurrAnimIndex() == 2) {
		J3DModel* model = mModel->getJ3DModel();
		C_MGR->fetch(model, getMotionFrame());

	} else {
		mModel->mJ3dModel->calc();
	}

	mCollTree->update();
}

/**
 * @note Address: 0x8036F238
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics&) { }

/**
 * @note Address: 0x8036F23C
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/**
 * @note Address: 0x8036F25C
 * @note Size: 0xDC
 */
bool Obj::pressCallBack(Creature* creature, f32 damage, CollPart* part)
{
	if (creature && creature->isPiki()) {
		if (isEvent(0, EB_Bittered)) {
			if (mEnemyStoneObj->isFlag(EnemyStone::STONE_HasViewedDemo)) {
				genItem();
				kill(nullptr);
				return true;
			} else {
				return false;
			}
		}

		if (getStateID() != TAMAGOMUSHI_Dead) {
			mFsm->transit(this, TAMAGOMUSHI_Dead, nullptr);
			enableEvent(0, EB_LifegaugeVisible);
			mHealth = 0.0f;
			return true;
		}
	}

	return false;
}

/**
 * @note Address: 0x8036F338
 * @note Size: 0xBC
 */
bool Obj::bombCallBack(Creature* creature, Vector3f& direction, f32 damage)
{
	if (getStateID() != TAMAGOMUSHI_Dead) {
		if (EnemyBase::bombCallBack(creature, direction, damage)) {
			mFsm->transit(this, TAMAGOMUSHI_Dead, nullptr);
			enableEvent(0, EB_LifegaugeVisible);
			mHealth = 0.0f;
			return true;
		}
	}

	return false;
}

/**
 * @note Address: 0x8036F3F4
 * @note Size: 0x134
 */
bool Obj::damageCallBack(Creature* creature, f32 damage, CollPart* part)
{
	int stateID = getStateID();
	if (isEvent(0, EB_Bittered)) {
		// hit the enemy 5 times while bittered to kill it, classic morimura
		mBitterHitNum++;
		if (mBitterHitNum > 4) {
			genItem();
			kill(nullptr);
		}

		return true;
	}

	EnemyBase::damageCallBack(creature, 0.0f, part);

	if (stateID != TAMAGOMUSHI_Appear && stateID != TAMAGOMUSHI_Dead) {
		if (creature && creature->isPiki()) {
			int pikiStateID = static_cast<Piki*>(creature)->getStateID();
			if (pikiStateID != PIKISTATE_Panic && pikiStateID != PIKISTATE_Flying) {
				InteractAstonish astonish(this, C_PARMS->mPikiPanicMaxTime);
				creature->stimulate(astonish);
			}
		}
	}

	return false;
}

/**
 * @note Address: 0x8036F528
 * @note Size: 0xF8
 */
void Obj::collisionCallback(CollEvent& event)
{
	if (!isEvent(0, EB_Bittered)) {
		int id = getStateID();
		setCollEvent(event);
		Creature* hitobj = event.mCollidingCreature;

		// astonish pikmin with the horrible mitite smell
		if (hitobj && (hitobj->isPiki()) && (id != TAMAGOMUSHI_Appear)) {
			Piki* piki = static_cast<Piki*>(hitobj);
			if ((piki->getStateID() != PIKISTATE_Panic) && (piki->getStateID() != PIKISTATE_Flying)) {
				InteractAstonish act(this, C_PARMS->mPikiPanicMaxTime);
				hitobj->stimulate(act);
			}
		}
	}
}

/**
 * @note Address: 0x8036F620
 * @note Size: 0x178
 */
void Obj::bounceCallback(Sys::Triangle* tri)
{
	if (mIsBallFallWait) {
		f32 velY     = 0.7f + 0.3f * randFloat();
		f32 speed    = C_PARMS->mBaseXZVelocityOnBounce;
		Vector3f vel = Vector3f(sinf(mFaceDir) * speed, C_PARMS->mBaseYVelocityOnBounce * velY, cosf(mFaceDir) * speed);
		setVelocity(vel);
		mTargetVelocity = vel;
		mPosition.y += 10.0f;
		mIsInBall   = false;
		mRotation.z = 0.0f;
		mRotation.x = 0.0f;
		appearPanic();
	}

	mIsBallFallWait = false;
}

/**
 * @note Address: 0x8036F798
 * @note Size: 0x2C
 */
bool Obj::hipdropCallBack(Creature* creature, f32 damage, CollPart* part) { return pressCallBack(creature, damage, part); }

/**
 * @note Address: 0x8036F7C4
 * @note Size: 0x30
 */
bool Obj::earthquakeCallBack(Creature* creature, f32 damage) { return pressCallBack(creature, damage, nullptr); }

/**
 * @note Address: 0x8036F7F4
 * @note Size: 0xA8
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{
	shadowParam.mPosition = mKoshiJoint->getWorldMatrix()->getColumn(3);

	if (mPellet || getStateID() == TAMAGOMUSHI_Dead) {
		shadowParam.mPosition.y = mPosition.y + 2.0f;
	}
	shadowParam.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	shadowParam.mBoundingSphere.mRadius   = 15.0f;
	shadowParam.mSize                     = 12.0f;
}

/**
 * @note Address: 0x8036F89C
 * @note Size: 0x30
 */
bool Obj::needShadow()
{
	return EnemyBase::needShadow() > 0; // WHY MAN.
}

/**
 * @note Address: 0x8036F8CC
 * @note Size: 0x208
 */
void Obj::genItem()
{
	if (!gameSystem || !gameSystem->isZukanMode()) {
		mInPiklopedia = 1;

		if (!(randFloat() > C_PROPERPARMS.mHoneyRate())) {
			Vector3f nectarVel = Vector3f(sinf(mFaceDir) * 50.0f, 200.0f, sinf(mFaceDir) * 50.0f); // why are these both sines smh
			Vector3f nectarPos = mPosition;
			nectarPos.y += 2.0f;

			P2ASSERTLINE(437, ItemHoney::mgr);
			BaseItem* item = ItemHoney::mgr->birth();
			if (item) {
				ItemHoney::Item* nectar = static_cast<ItemHoney::Item*>(item);
				nectar->init(nullptr);
				nectar->mHoneyType = HONEY_Y;
				nectar->setPosition(nectarPos, false);
				nectar->setVelocity(nectarVel);
			}
		}
	}
}

/**
 * @note Address: 0x8036FAD4
 * @note Size: 0x310
 */
void Obj::walkFunc()
{
	mRotation.x *= 0.9f;
	mRotation.z *= 0.9f;

	f32 x, y, z;
	f32 newDir;
	f32 targetSpeed    = mRandomSpeedFactor * C_GENERALPARMS.mMoveSpeed();
	f32 offsetFactor   = C_PARMS->mMoveOffsetLevel * mRandomMoveOffsFactor;
	f32 dirChangeLimit = mRandomTurnFactor * C_GENERALPARMS.mMaxTurnAngle();

	mMoveRotationOffset += C_PARMS->mRotationStep;
	if (mMoveRotationOffset > 360.0f) {
		mMoveRotationOffset -= 360.0f;
	}

	f32 sinVal = offsetFactor * (f32)sin(mMoveRotationOffset);
	if (C_PARMS->mDisableWanderRotation) {
		sinVal = 0.0f;
	}

	const f32 dir = sinVal * mMoveRotationTimer;
	newDir        = TORADIANS(dir);

	mMoveRotationTimer += 0.1f;
	if (mMoveRotationTimer > 1.0f) {
		mMoveRotationTimer = 1.0f;
	}

	if (C_PARMS->mEnableSpeedAdjustment) {
		mWalkSpeedAdjustmentTimer += 1.0f;
		if (mWalkSpeedAdjustmentTimer > mWalkSpeedAdjustmentTimeLimit) {
			mWalkSpeedAdjustmentEnabled   = !mWalkSpeedAdjustmentEnabled;
			mWalkSpeedAdjustmentTimeLimit = C_PARMS->mWalkSpeedAdjustmentTimeLimit * randFloat();
			mWalkSpeedAdjustmentTimer     = 0.0f;
		}

		if (mWalkSpeedAdjustmentEnabled && mWalkSpeedAdjustmentTimer < mWalkSpeedAdjustmentTimeLimit) {
			targetSpeed *= (C_PARMS->mWalkSpeedReductionFactor * (1.0f - (mWalkSpeedAdjustmentTimer / mWalkSpeedAdjustmentTimeLimit)));
		}
	}

	mFaceDir = mPreviousFaceDir;

	f32 angle        = mFaceDir + newDir;
	x                = targetSpeed * sinf(angle);
	y                = getTargetVelocity().y;
	z                = targetSpeed * cosf(angle);
	mPreviousFaceDir = mFaceDir;
	if (absF(newDir) > dirChangeLimit) {
		if (newDir > 0.0f) {
			newDir = dirChangeLimit;
		} else {
			newDir = -dirChangeLimit;
		}
	}

	updateFaceDir(mFaceDir + roundAng(newDir));

	mTargetVelocity = Vector3f(x, y, z);
}

/**
 * @note Address: 0x8036FDE4
 * @note Size: 0x168
 */
void Obj::setGoalRandom()
{
	f32 val     = C_GENERALPARMS.mTerritoryRadius();
	f32 randVal = 0.5f * randFloat() + 0.5f;
	val *= randVal;
	mGoalPosition = mHomePosition;

	f32 randAngle = TAU * randFloat();

	mGoalPosition.x += val * sinf(randAngle);
	mGoalPosition.z += val * cosf(randAngle);
}

/**
 * @note Address: 0x8036FF4C
 * @note Size: 0xB8
 */
void Obj::setGoalDirect(Vector3f& pos)
{
	f32 radius  = C_PARMS->mNextGoalPosMaxRadius;
	f32 randVal = 0.5f * randFloat() + 0.5f;
	radius *= randVal;
	mGoalPosition = mPosition;

	mGoalPosition.x += radius * pos.x;
	mGoalPosition.z += radius * pos.z;
}

/**
 * @note Address: 0x80370004
 * @note Size: 0x15C
 */
bool Obj::turnFunc()
{
	f32 angle
	    = turnToTarget2(mGoalPosition, mRandomTurnFactor * C_GENERALPARMS.mTurnSpeed(), mRandomTurnFactor * C_GENERALPARMS.mMaxTurnAngle());
	if (absF(angle) < 0.1f) {
		return true;
	}

	return false;
}

/**
 * @note Address: 0x80370160
 * @note Size: 0x34
 */
bool Obj::isReachToGoal(f32 goalRadius) { return (u8)(sqrDistanceXZ(mPosition, mGoalPosition) < SQUARE(goalRadius)); }

/**
 * @note Address: 0x80370194
 * @note Size: 0x2C
 */
void Obj::resetWalkParm()
{
	mMoveRotationTimer            = 0.0f;
	mWalkSpeedAdjustmentTimer     = 0.0f;
	mWalkSpeedAdjustmentTimeLimit = C_PARMS->mWalkSpeedAdjustmentTimeLimit;
	mWalkSpeedAdjustmentEnabled   = false;
	mPreviousFaceDir              = mFaceDir;
}

/**
 * @note Address: 0x803701C0
 * @note Size: 0x28
 */
void Obj::startCarcassMotion() { startMotion(TAMAGOANIM_Carry, nullptr); }

/**
 * @note Address: 0x803701E8
 * @note Size: 0x58
 */
void Obj::setLeader(Obj* leader)
{
	if (mLeader != leader) {
		mLeader = leader;
		if (mLeader->mIsInBall) {
			setTypeBall();
		}
		disableEvent(0, EB_Cullable);
	}
}

/**
 * @note Address: 0x80370240
 * @note Size: 0x54
 */
void Obj::setTypeBall()
{
	mFsm->start(this, TAMAGOMUSHI_Wait, nullptr);
	mIsInBall       = true;
	mIsBallFallWait = true;
}

/**
 * @note Address: 0x80370294
 * @note Size: 0x344
 */
void Obj::appearPanic()
{
	if (!mLeader || mLeader == this) {
		f32 rad = SQUARE(C_PARMS->mPanicInduceRadius);
		Iterator<Piki> iter(pikiMgr);
		CI_LOOP(iter)
		{
			Piki* piki = *iter;
			if (piki->isSearchable()) {
				Vector3f pos;
				getPosition2D(pos);

				Vector3f pikiPos = Vector3f(piki->getPosition().x, 0.0f, piki->getPosition().z);

				if (sqrDistanceXZ(pikiPos, pos) < rad) {
					InteractAstonish astonish(this, C_PARMS->mPikiPanicMaxTime);
					piki->stimulate(astonish);
				}
			}
		}
	}
}

/**
 * @note Address: 0x803705D8
 * @note Size: 0x3BC
 */
bool Obj::isFound()
{
	if (mLeader && mLeader != this) {
		return mLeader->isFound();
	}

	if (gameSystem && gameSystem->isZukanMode()) {
		return true;
	}

	f32 searchRad = C_PROPERPARMS.mAppearanceRange();
	if (EnemyFunc::getNearestPikmin(this, 180.0f, searchRad, nullptr, nullptr)) {
		return true;
	}

	if (EnemyFunc::getNearestNavi(this, 180.0f, searchRad, nullptr, nullptr)) {
		return true;
	}

	return false;
}

/**
 * @note Address: 0x803709B0
 * @note Size: 0x44
 */
void Obj::createFellow()
{
	if (!mLeader || mLeader == this) {
		C_MGR->createGroup(this, 10, false);
	}
}

/**
 * @note Address: 0x803709F4
 * @note Size: 0x9C
 */
void Obj::ballMove()
{
	f32 vel = absF((mCurrentVelocity.y * 2.0f) / 50.0f);
	if (vel > 2.0f) {
		vel = 2.0f;
	}
	EnemyFunc::walkToTarget(this, mGoalPosition, C_GENERALPARMS.mMoveSpeed.mValue * 0.2f, C_GENERALPARMS.mTurnSpeed.mValue * vel,
	                        C_GENERALPARMS.mMaxTurnAngle.mValue * vel);
	mRotation.x *= 0.95f;
	mRotation.z *= 0.95f;
}

/**
 * @note Address: 0x80370A90
 * @note Size: 0xA8
 */
void Obj::createHideEffect()
{
	efx::Arg arg(mPosition);
	efx::TUjinkoHd effect(mModel->mJoints->getWorldMatrix());
	effect.create(&arg);
}

/**
 * @note Address: 0x80370B38
 * @note Size: 0xA8
 */
void Obj::createAppearEffect()
{
	efx::Arg arg(mPosition);
	efx::TTamagoAp effect(mModel->mJoints->getWorldMatrix());
	effect.create(&arg);
}

} // namespace TamagoMushi
} // namespace Game
