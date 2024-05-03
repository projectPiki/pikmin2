#include "Game/Entities/Frog.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "Game/AIConstants.h"
#include "Game/EnemyFunc.h"
#include "efx/TFrog.h"
#include "PS.h"
#include "nans.h"

namespace Game {
namespace Frog {

/**
 * @note Address: 0x80258548
 * @note Size: 0x138
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator();
	setFSM(new FSM);
	createEffect();
}

/**
 * @note Address: 0x80258680
 * @note Size: 0x4
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/**
 * @note Address: 0x80258684
 * @note Size: 0x78
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	mAlertTimer = 128.0f;
	mAirTimer   = 0.0f;
	mNextState  = FROG_NULL;
	mIsInAir    = false;
	mIsFalling  = false;
	setupEffect();
	mFsm->start(this, FROG_Wait, nullptr);
}

/**
 * @note Address: 0x802586FC
 * @note Size: 0x44
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	finishJumpEffect();
	EnemyBase::onKill(killArg);
}

/**
 * @note Address: 0x80258740
 * @note Size: 0x44
 */
void Obj::doUpdate()
{
	updateCaution();
	mFsm->exec(this);
}

/**
 * @note Address: 0x80258784
 * @note Size: 0x280
 */
void Obj::doSimulationFlying(f32 step)
{
	f32 remainingAirTime = C_PROPERPARMS.mAirTime() - mAirTimer;
	if (remainingAirTime > 0.0f) {
		Vector3f prevVel   = mCurrentVelocity;
		f32 speed          = prevVel.length2D();
		mCurrentVelocity.x = mTargetPosition.x - mPosition.x;
		mCurrentVelocity.z = mTargetPosition.z - mPosition.z;
		f32 newSpeed       = mCurrentVelocity.length2D();
		f32 norm           = (2.0f * newSpeed) / remainingAirTime;
		if (norm > speed) {
			mCurrentVelocity.x = prevVel.x;
			mCurrentVelocity.z = prevVel.z;
		} else if (norm > 0.0f) {
			mCurrentVelocity.x = norm * (mCurrentVelocity.x / newSpeed);
			mCurrentVelocity.z = norm * (mCurrentVelocity.z / newSpeed);
		} else {
			mCurrentVelocity.z = 0.0f;
			mCurrentVelocity.x = 0.0f;
		}
	} else {
		mCurrentVelocity.z = 0.0f;
		mCurrentVelocity.x = 0.0f;
	}

	mCurrentVelocity.y -= step * _aiConstants->mGravity.mData;
	if (mCurrentVelocity.y > 0.0f) {
		turnToTarget2(mTargetPosition, C_GENERALPARMS.mTurnSpeed(), C_GENERALPARMS.mMaxTurnAngle());
	} else {
		mCurrentVelocity.y = 0.0f;
	}

	mAirTimer += sys->mDeltaTime;
}

/**
 * @note Address: 0x80258A04
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics& gfx) { }

/**
 * @note Address: 0x80258A08
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/**
 * @note Address: 0x80258A28
 * @note Size: 0x4C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/**
 * @note Address: 0x80258A74
 * @note Size: 0x110
 */
void Obj::getShadowParam(ShadowParam& param)
{
	Sys::Sphere boundingSphere;
	getBoundingSphere(boundingSphere);
	param.mPosition.x = boundingSphere.mPosition.x;
	param.mPosition.y = 5.0f + mPosition.y;
	param.mPosition.z = boundingSphere.mPosition.z;

	if (isAlive()) {
		if (mFloorTriangle) {
			if (isEvent(1, EB2_Earthquake)) {
				param.mBoundingSphere.mRadius = 75.0f;
			} else {
				param.mBoundingSphere.mRadius = 50.0f;
			}
		} else {
			if (getStateID() == FROG_JumpWait) {
				param.mPosition.y -= 17.5f;
			}

			param.mBoundingSphere.mRadius = 0.75f * C_PROPERPARMS.mJumpSpeed();
		}
	} else {
		param.mBoundingSphere.mRadius = 22.5f;
	}

	param.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	param.mSize                     = 17.5f;
}

/**
 * @note Address: 0x80258B84
 * @note Size: 0x104
 */
void Obj::collisionCallback(CollEvent& event)
{
	if (Creature* creature = event.mCollidingCreature) {
		if (!isEvent(0, EB_Bittered)) {

			if (mIsFalling) {
				if (creature->mFloorTriangle) {
					if (creature->isNavi() || creature->isPiki()) {
						InteractPress press(this, C_GENERALPARMS.mAttackDamage.mValue, nullptr);
						event.mCollidingCreature->stimulate(press);
					}
				}
			}
		}
	}

	setCollEvent(event);
}

/**
 * @note Address: 0x80258C88
 * @note Size: 0x34
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	finishJumpEffect();
}

/**
 * @note Address: 0x80258CBC
 * @note Size: 0x64
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();

	int stateID = getStateID();
	if (stateID >= FROG_Jump && stateID <= FROG_Attack) { // jump, jumpwait, fall, attack
		mFsm->transit(this, FROG_Turn, nullptr);
	}
}

/**
 * @note Address: 0x80258D20
 * @note Size: 0x34
 */
void Obj::doStartEarthquakeFitState()
{
	EnemyBase::doStartEarthquakeFitState();
	finishJumpEffect();
}

/**
 * @note Address: 0x80258D54
 * @note Size: 0x5C
 */
void Obj::doFinishEarthquakeFitState()
{
	EnemyBase::doFinishEarthquakeFitState();
	if (getStateID() == FROG_Jump) {
		mFsm->transit(this, FROG_Turn, nullptr);
	}
}

/**
 * @note Address: 0x80258DB0
 * @note Size: 0x34
 */
void Obj::doStartWaitingBirthTypeDrop()
{
	EnemyBase::doStartWaitingBirthTypeDrop();
	effectDrawOff();
}

/**
 * @note Address: 0x80258DE4
 * @note Size: 0x34
 */
void Obj::doFinishWaitingBirthTypeDrop()
{
	EnemyBase::doFinishWaitingBirthTypeDrop();
	effectDrawOn();
}

/**
 * @note Address: 0x80258E18
 * @note Size: 0x28
 */
void Obj::startCarcassMotion() { EnemyBase::startMotion(FROGANIM_Carry, nullptr); }

/**
 * @note Address: 0x80258E18
 * @note Size: 0x28
 */
Vector3f Obj::viewGetCollTreeOffset() { return Vector3f(20.0f, -15.0f, 0.0f); }

/**
 * @note Address: 0x80258E5C
 * @note Size: 0x20
 */
void Obj::doStartMovie() { effectDrawOff(); }

/**
 * @note Address: 0x80258E7C
 * @note Size: 0x20
 */
void Obj::doEndMovie() { effectDrawOn(); }

/**
 * @note Address: 0x80258E9C
 * @note Size: 0x88
 */
Vector3f Obj::getOffsetForMapCollision()
{
	Sys::Sphere boundingSphere;
	getBoundingSphere(boundingSphere);
	boundingSphere.mPosition.x -= mPosition.x;
	boundingSphere.mPosition.y = 0.0f;
	boundingSphere.mPosition.z -= mPosition.z;
	return boundingSphere.mPosition;
}

/**
 * @note Address: 0x80258F24
 * @note Size: 0x54
 */
void Obj::getCommonEffectPos(Vector3f& effectPos)
{
	Sys::Sphere boundingSphere;
	getBoundingSphere(boundingSphere);
	effectPos = boundingSphere.mPosition;
}

/**
 * @note Address: 0x80258F78
 * @note Size: 0x50
 */
void Obj::updateCaution()
{
	if (isEvent(0, EB_Colliding) || isEvent(0, EB_TakingDamage) || mStuckPikminCount != 0) {
		mAlertTimer = 0.0f;
	}

	if (mAlertTimer < C_GENERALPARMS.mAlertDuration()) {
		mAlertTimer += sys->mDeltaTime;
	}
}

/**
 * @note Address: 0x80258FC8
 * @note Size: 0x24
 */
f32 Obj::getViewAngle()
{
	if (mAlertTimer < C_GENERALPARMS.mAlertDuration()) {
		return 180.0f;
	}
	return C_GENERALPARMS.mViewAngle();
}

/**
 * @note Address: 0x80258FEC
 * @note Size: 0xD8
 */
void Obj::startJumpAttack()
{
	enableEvent(0, EB_Untargetable);
	mAirTimer          = 0.0f;
	mCurrentVelocity.x = mTargetPosition.x - mPosition.x;
	mCurrentVelocity.z = mTargetPosition.z - mPosition.z;

	f32 speed = mCurrentVelocity.normalise2D();

	f32 factor = (2.0f * speed) / C_PROPERPARMS.mAirTime();
	mCurrentVelocity.x *= factor;
	mCurrentVelocity.y = C_PROPERPARMS.mJumpSpeed();
	mCurrentVelocity.z *= factor;
}

/**
 * @note Address: 0x802590C4
 * @note Size: 0xD8
 */
void Obj::resetHomePosition()
{
	f32 dist        = 0.5f * C_GENERALPARMS.mHomeRadius();
	mHomePosition.x = dist * sinf(mFaceDir) + mPosition.x;
	mHomePosition.y = mPosition.y;
	mHomePosition.z = dist * cosf(mFaceDir) + mPosition.z;
}

/**
 * @note Address: 0x8025919C
 * @note Size: 0x24C
 */
void Obj::pressOnGround()
{
	EnemyFunc::flickStickPikmin(this, C_GENERALPARMS.mShakeChance(), C_GENERALPARMS.mShakeKnockback(), C_GENERALPARMS.mShakeDamage(),
	                            FLICK_BACKWARD_ANGLE, nullptr);
	mFlickTimer = 0.0f;
	Sys::Sphere boundingSphere;
	getBoundingSphere(boundingSphere);

	Vector3f fxPos(boundingSphere.mPosition.x, mPosition.y, boundingSphere.mPosition.z);

	if (mWaterBox) {
		fxPos.y = *mWaterBox->getSeaHeightPtr();
		efx::Arg fxArg(fxPos);
		efx::TFrogDive diveFX;

		diveFX.create(&fxArg);

		PSStartEnemyDownWatSE(this, 1.0f);
	} else {
		fxPos.y = mPosition.y;

		efx::Arg fxArg(fxPos);
		efx::TFrogLanddrop dropFX;

		dropFX.create(&fxArg);

		createDropEffect(fxPos, getDownSmokeScale());
	}

	cameraMgr->startVibration(VIBTYPE_LightFastShort, fxPos, CAMNAVI_Both);
	rumbleMgr->startRumble(RUMBLETYPE_Fixed14, fxPos, RUMBLEID_Both);

	if (mWaterBox) {
		getJAIObject()->startSound(PSSE_EN_FROG_WATERLAND, 0);
	} else {
		getJAIObject()->startSound(PSSE_EN_FROG_LAND, 0);
	}
}

/**
 * @note Address: 0x802593E8
 * @note Size: 0xB0
 */
void Obj::createEffect() { mEfxPota = new efx::TFrogPota; }

/**
 * @note Address: 0x80259498
 * @note Size: 0x10
 */
void Obj::setupEffect() { mEfxPota->mPosition = &mPosition; }

/**
 * @note Address: 0x802594A8
 * @note Size: 0x34
 */
void Obj::startJumpEffect() { mEfxPota->create(nullptr); }

/**
 * @note Address: 0x802594DC
 * @note Size: 0x30
 */
void Obj::finishJumpEffect() { mEfxPota->fade(); }

/**
 * @note Address: 0x8025950C
 * @note Size: 0xC0
 */
void Obj::createDownEffect(f32 scale)
{
	Sys::Sphere sphere;
	getBoundingSphere(sphere);
	Vector3f fxPos(sphere.mPosition.x, mPosition.y, sphere.mPosition.z);
	if (mWaterBox) {
		createSplashDownEffect(fxPos, scale);
	} else {
		createDropEffect(fxPos, scale);
	}

	cameraMgr->startVibration(VIBTYPE_LightSlowShort, mPosition, CAMNAVI_Both);
	rumbleMgr->startRumble(RUMBLETYPE_Fixed11, mPosition, RUMBLEID_Both);
}

/**
 * @note Address: 0x802595CC
 * @note Size: 0x30
 */
void Obj::effectDrawOn() { mEfxPota->endDemoDrawOn(); }

/**
 * @note Address: 0x802595FC
 * @note Size: 0x30
 */
void Obj::effectDrawOff() { mEfxPota->startDemoDrawOff(); }

} // namespace Frog
} // namespace Game
