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

/*
 * --INFO--
 * Address:	80258548
 * Size:	000138
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator();
	setFSM(new FSM);
	createEffect();
}

/*
 * --INFO--
 * Address:	80258680
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	80258684
 * Size:	000078
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

/*
 * --INFO--
 * Address:	802586FC
 * Size:	000044
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	finishJumpEffect();
	EnemyBase::onKill(killArg);
}

/*
 * --INFO--
 * Address:	80258740
 * Size:	000044
 */
void Obj::doUpdate()
{
	updateCaution();
	mFsm->exec(this);
}

/*
 * --INFO--
 * Address:	80258784
 * Size:	000280
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
		turnToTarget2(mTargetPosition, C_PARMS->mGeneral.mTurnSpeed(), C_PARMS->mGeneral.mMaxTurnAngle());
	} else {
		mCurrentVelocity.y = 0.0f;
	}

	mAirTimer += sys->mDeltaTime;
}

/*
 * --INFO--
 * Address:	80258A04
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics& gfx) { }

/*
 * --INFO--
 * Address:	80258A08
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	80258A28
 * Size:	00004C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/*
 * --INFO--
 * Address:	80258A74
 * Size:	000110
 */
void Obj::getShadowParam(ShadowParam& param)
{
	Sys::Sphere boundingSphere;
	getBoundingSphere(boundingSphere);
	param.mPosition.x = boundingSphere.mPosition.x;
	param.mPosition.y = 5.0f + mPosition.y;
	param.mPosition.z = boundingSphere.mPosition.z;

	if (isAlive()) {
		if (mBounceTriangle) {
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

/*
 * --INFO--
 * Address:	80258B84
 * Size:	000104
 */
void Obj::collisionCallback(CollEvent& event)
{
	if (Creature* creature = event.mCollidingCreature) {
		if (!isEvent(0, EB_Bittered)) {

			if (mIsFalling) {
				if (creature->mBounceTriangle) {
					if (creature->isNavi() || creature->isPiki()) {
						InteractPress press(this, C_PARMS->mGeneral.mAttackDamage.mValue, nullptr);
						event.mCollidingCreature->stimulate(press);
					}
				}
			}
		}
	}

	setCollEvent(event);
}

/*
 * --INFO--
 * Address:	80258C88
 * Size:	000034
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	finishJumpEffect();
}

/*
 * --INFO--
 * Address:	80258CBC
 * Size:	000064
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();

	int stateID = getStateID();
	if (stateID >= FROG_Jump && stateID <= FROG_Attack) { // jump, jumpwait, fall, attack
		mFsm->transit(this, FROG_Turn, nullptr);
	}
}

/*
 * --INFO--
 * Address:	80258D20
 * Size:	000034
 */
void Obj::doStartEarthquakeFitState()
{
	EnemyBase::doStartEarthquakeFitState();
	finishJumpEffect();
}

/*
 * --INFO--
 * Address:	80258D54
 * Size:	00005C
 */
void Obj::doFinishEarthquakeFitState()
{
	EnemyBase::doFinishEarthquakeFitState();
	if (getStateID() == FROG_Jump) {
		mFsm->transit(this, FROG_Turn, nullptr);
	}
}

/*
 * --INFO--
 * Address:	80258DB0
 * Size:	000034
 */
void Obj::doStartWaitingBirthTypeDrop()
{
	EnemyBase::doStartWaitingBirthTypeDrop();
	effectDrawOff();
}

/*
 * --INFO--
 * Address:	80258DE4
 * Size:	000034
 */
void Obj::doFinishWaitingBirthTypeDrop()
{
	EnemyBase::doFinishWaitingBirthTypeDrop();
	effectDrawOn();
}

/*
 * --INFO--
 * Address:	80258E18
 * Size:	000028
 */
void Obj::startCarcassMotion() { EnemyBase::startMotion(FROGANIM_Carry, nullptr); }

/*
 * --INFO--
 * Address:	80258E18
 * Size:	000028
 */
Vector3f Obj::viewGetCollTreeOffset() { return Vector3f(20.0f, -15.0f, 0.0f); }

/*
 * --INFO--
 * Address:	80258E5C
 * Size:	000020
 */
void Obj::doStartMovie() { effectDrawOff(); }

/*
 * --INFO--
 * Address:	80258E7C
 * Size:	000020
 */
void Obj::doEndMovie() { effectDrawOn(); }

/*
 * --INFO--
 * Address:	80258E9C
 * Size:	000088
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

/*
 * --INFO--
 * Address:	80258F24
 * Size:	000054
 */
void Obj::getCommonEffectPos(Vector3f& effectPos)
{
	Sys::Sphere boundingSphere;
	getBoundingSphere(boundingSphere);
	effectPos = boundingSphere.mPosition;
}

/*
 * --INFO--
 * Address:	80258F78
 * Size:	000050
 */
void Obj::updateCaution()
{
	if (isEvent(0, EB_Colliding) || isEvent(0, EB_TakingDamage) || mStuckPikminCount != 0) {
		mAlertTimer = 0.0f;
	}

	if (mAlertTimer < C_PARMS->mGeneral.mAlertDuration()) {
		mAlertTimer += sys->mDeltaTime;
	}
}

/*
 * --INFO--
 * Address:	80258FC8
 * Size:	000024
 */
f32 Obj::getViewAngle()
{
	if (mAlertTimer < C_PARMS->mGeneral.mAlertDuration()) {
		return 180.0f;
	}
	return C_PARMS->mGeneral.mViewAngle();
}

/*
 * --INFO--
 * Address:	80258FEC
 * Size:	0000D8
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

/*
 * --INFO--
 * Address:	802590C4
 * Size:	0000D8
 */
void Obj::resetHomePosition()
{
	f32 dist        = 0.5f * C_PARMS->mGeneral.mHomeRadius();
	mHomePosition.x = dist * sinf(mFaceDir) + mPosition.x;
	mHomePosition.y = mPosition.y;
	mHomePosition.z = dist * cosf(mFaceDir) + mPosition.z;
}

/*
 * --INFO--
 * Address:	8025919C
 * Size:	00024C
 */
void Obj::pressOnGround()
{
	EnemyFunc::flickStickPikmin(this, C_PARMS->mGeneral.mShakeChance(), C_PARMS->mGeneral.mShakeKnockback(),
	                            C_PARMS->mGeneral.mShakeDamage(), FLICK_BACKWARD_ANGLE, nullptr);
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

	cameraMgr->startVibration(6, fxPos, 2);
	rumbleMgr->startRumble(14, fxPos, 2);

	if (mWaterBox) {
		getJAIObject()->startSound(PSSE_EN_FROG_WATERLAND, 0);
	} else {
		getJAIObject()->startSound(PSSE_EN_FROG_LAND, 0);
	}
}

/*
 * --INFO--
 * Address:	802593E8
 * Size:	0000B0
 */
void Obj::createEffect() { mEfxPota = new efx::TFrogPota; }

/*
 * --INFO--
 * Address:	80259498
 * Size:	000010
 */
void Obj::setupEffect() { mEfxPota->mPosition = &mPosition; }

/*
 * --INFO--
 * Address:	802594A8
 * Size:	000034
 */
void Obj::startJumpEffect() { mEfxPota->create(nullptr); }

/*
 * --INFO--
 * Address:	802594DC
 * Size:	000030
 */
void Obj::finishJumpEffect() { mEfxPota->fade(); }

/*
 * --INFO--
 * Address:	8025950C
 * Size:	0000C0
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

	cameraMgr->startVibration(0, mPosition, 2);
	rumbleMgr->startRumble(11, mPosition, 2);
}

/*
 * --INFO--
 * Address:	802595CC
 * Size:	000030
 */
void Obj::effectDrawOn() { mEfxPota->endDemoDrawOn(); }

/*
 * --INFO--
 * Address:	802595FC
 * Size:	000030
 */
void Obj::effectDrawOff() { mEfxPota->startDemoDrawOff(); }

} // namespace Frog
} // namespace Game
