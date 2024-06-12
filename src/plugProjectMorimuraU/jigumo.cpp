#include "Game/Entities/Jigumo.h"
#include "Game/Entities/Nest.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/generalEnemyMgr.h"
#include "Game/EnemyFunc.h"
#include "Game/Navi.h"
#include "Game/MapMgr.h"
#include "Game/AIConstants.h"
#include "efx/TEnemyDive.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Jigumo {

Obj* curJ;

/**
 * @note Address: 0x80368EA0
 * @note Size: 0x38
 */
static bool mouthScaleCallBack(J3DJoint* joint, int jointIdx)
{
	if (jointIdx == JIGUMO_MOUTH_JOINT && curJ) {
		curJ->mouthScaleMtxCalc();
	}

	return true;
}

/**
 * @note Address: 0x80368ED8
 * @note Size: 0x16C
 */
void Obj::setParameters()
{
	EnemyBase::setParameters();

	// Gets a random value from mMinScale to mMaxScale
	// And forces it to be 5 possible values between them
	f32 scale     = C_PROPERPARMS.mMinScale();
	f32 maxScale  = C_PROPERPARMS.mMaxScale();
	maxScale      = maxScale - scale;
	int randomNum = (int)(5.0f * randFloat());
	maxScale /= 5.0f;
	scale = maxScale * randomNum + scale;
	setScale(scale);

	// Nest (house) scales with the size of the Crawmad
	if (mHouse) {
		mHouse->setScale(scale);
		mHouse->mCollTree->mPart->setScale(scale);
	}

	// Scale mouth collision and ensure minimum size
	// There is one mouth slot though, so this is a bit overkill
	for (int i = 0; i < mMouthSlots.getMax(); i++) {
		f32 radius = C_PARMS->mMouthSlotSizeModifier * mScaleModifier;
		if (radius < 25.0f) {
			radius = 25.0f;
		}

		mMouthSlots.getSlot(i)->mRadius = radius;
	}

	mCurLodSphere.mRadius = mScaleModifier * C_GENERALPARMS.mOffCameraRadius();
	mBodyRadius           = mScaleModifier * C_GENERALPARMS.mPikminDamageRadius();
}

/**
 * @note Address: 0x80369044
 * @note Size: 0x17C
 */
void Obj::birth(Vector3f& position, f32 faceDir)
{
	EnemyBase::birth(position, faceDir);

	// Get the nest manager to create it
	Nest::Mgr* nestMgr = static_cast<Nest::Mgr*>(generalEnemyMgr->getEnemyMgr(EnemyTypeID::EnemyID_PanHouse));
	if (nestMgr) {
		// Create that damn nest (wasp lore)
		EnemyBirthArg birthArg;
		birthArg.mPosition = mPosition;
		birthArg.mFaceDir  = getFaceDir();
		Nest::Obj* nest    = static_cast<Nest::Obj*>(nestMgr->birth(birthArg));

		P2ASSERTLINE(86, nest);

		// Initialise (this is probably an inline because it nulls the pointer before initialising it)
		nest->init(nullptr);
		mHouse = nullptr;
		mHouse = nest;
		mHouse->setHouseType(getEnemyTypeID());

		// Update the scale now we're in a house
		f32 scale = mScaleModifier;
		nest->setScale(scale);
		nest->mCollTree->mPart->setScale(scale);
	}

	// Set the mouth slot's radius to the proper size, ensure 25.0f minimum
	for (int i = 0; i < mMouthSlots.getMax(); i++) {
		f32 radius = C_PARMS->mMouthSlotSizeModifier * mScaleModifier;
		if (radius < 25.0f) {
			radius = 25.0f;
		}

		mMouthSlots.getSlot(i)->mRadius = radius;
	}
}

/**
 * @note Address: 0x803691C8
 * @note Size: 0x23C
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	mFsm->start(this, JIGUMO_Appear, nullptr);
	EnemyBase::onInit(initArg);
	fadeEfxHamon();
	mNextFaceDir       = mFaceDir;
	mClimbingTimer     = 0;
	mCurrentFaceNormal = Vector3f(0.0f, 1.0f, 0.0f);
	mWantedFaceNormal  = mCurrentFaceNormal;
	mPauseTriggerTime  = 0.0f;
	mPauseTimer        = 0.0f;
	mDoPauseAnim       = true;
	mCurrRotation.set(1.0f, 0.0f, 0.0f, 0.0f);
	mDestRotation            = mCurrRotation;
	mSlerpTime               = 0.0f;
	mHideAnimPosition        = Vector3f(0.0f);
	mCarryAngleSpeed         = 0.0f;
	mDoScaleDownMouth        = false;
	mIsOutsideHouse          = false;
	mPrevReturnCheckPosition = mHomePosition;
	mReturnTimer             = 0;
	mEffectPosition          = mPosition;
	mClimbingAccel           = 1.0f;
	mWalkBounceTimer         = 0;

	mBodyJoint = mModel->getJoint("body_joint1");
	P2ASSERTLINE(151, mBodyJoint);

	mFsm->start(this, JIGUMO_Appear, nullptr);

	P2ASSERTLINE(158, mModel);
	J3DModelData* data = mModel->mJ3dModel->getModelData();
	mKamuJointIdx      = mModel->getJointIndex("kamu_joint1");
	P2ASSERTLINE(163, mKamuJointIdx);

	data->mJointTree.mJoints[mKamuJointIdx]->mFunction = &mouthScaleCallBack;
	mBodyRadius                                        = mScaleModifier * C_GENERALPARMS.mPikminDamageRadius();
}

/**
 * @note Address: 0x80369404
 * @note Size: 0x3E4
 */
Obj::Obj()
    : mHouse(nullptr)
    , mCanBeEarthquaked(true)
    , mFsm(nullptr)
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);

	mEfxAttack = new efx::TJgmAttack(&mPosition);
	P2ASSERTLINE(188, mEfxAttack);

	mEfxAttackW = new efx::TJgmAttackW(&mEffectPosition, &mFaceDir);
	P2ASSERTLINE(191, mEfxAttackW);

	mEfxBack = new efx::TJgmBack(&mPosition);
	P2ASSERTLINE(194, mEfxBack);

	mEfxBackW = new efx::TJgmBackW(&mEffectPosition, &mFaceDir);
	P2ASSERTLINE(197, mEfxBackW);

	mEfxSmoke = new efx::TImoSmoke(&mEffectPosition);
	P2ASSERTLINE(200, mEfxBack); // MORIMURA THIS IS EVEN THE WRONG VARIABLE

	curJ = nullptr;
}

/**
 * @note Address: 0x80369834
 * @note Size: 0x40
 */
void Obj::doUpdate()
{
	if (!isEvent(0, EB_Bittered)) {
		mFsm->exec(this);
	}
}

/**
 * @note Address: 0x80369874
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics&) { }

/**
 * @note Address: 0x80369878
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/**
 * @note Address: 0x80369898
 * @note Size: 0x14C
 */
void Obj::doAnimationCullingOff()
{
	if (mMouthSlots.getSlot(0)->mStuckCreature) {
		curJ = this;
	}

	mCurAnim->mIsPlaying = false;
	doAnimationUpdateAnimator();
	if (mPellet) {
		viewMakeMatrix(mBaseTrMatrix);
		PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mModel->mJ3dModel->mPosMtx);
		Vector3f pos;
		mBaseTrMatrix.getTranslation(pos);
		onSetPosition(pos);
		onSetPositionPost(pos);

	} else {
		calcBaseTrMatrix();
	}

	mModel->mJ3dModel->calc();

	// Update the bounding sphere and collision tree even when culling is off
	Sys::Sphere collSphere;
	mCollTree->mPart->getSphere(collSphere);
	collSphere.mRadius *= mScaleModifier;
	mBoundingSphere = collSphere;
	mCollTree->update();
	curJ = nullptr;
}

/**
 * @note Address: 0x803699E4
 * @note Size: 0x28
 */
void Obj::startCarcassMotion() { startMotion(JIGUMOANIM_Carry, nullptr); }

/**
 * @note Address: 0x80369A0C
 * @note Size: 0xBC
 */
void Obj::initMouthSlots()
{
	mMouthSlots.alloc(1);
	mMouthSlots.setup(0, mModel, "kamu_joint1");

	for (int i = 0; i < mMouthSlots.getMax(); i++) {
		f32 radius = C_PARMS->mMouthSlotSizeModifier * mScaleModifier;
		if (radius < 25.0f) {
			radius = 25.0f;
		}

		mMouthSlots.getSlot(i)->mRadius = radius;
	}
}

/**
 * @note Address: 0x80369AC8
 * @note Size: 0x9C
 */
void Obj::doGetLifeGaugeParam(LifeGaugeParam& param)
{
	bool isVisible = false;

	param.mPosition = Vector3f(mPosition.x, C_PARMS->mLifeGaugeOffset * mScaleModifier + (C_GENERALPARMS.mLifeMeterHeight() + mPosition.y),
	                           mPosition.z);
	param.mCurrHealthRatio = (mHealth / mMaxHealth);
	param.mRadius          = 10.0f;

	if (isEvent(0, EB_LifegaugeVisible) && isCullingOff()) {
		isVisible = true;
	}

	param.mIsGaugeShown = isVisible;
}

/**
 * @note Address: 0x80369B64
 * @note Size: 0x108
 */
bool Obj::pressCallBack(Creature* source, f32 damage, CollPart* part)
{
	if (isEvent(0, EB_Bittered)) {
		return damageCallBack(source, damage, part);
	}

	// can't damage unless it's out of its house
	if (getStateID() != JIGUMO_Carry && getStateID() != JIGUMO_Return) {
		return false;
	}

	// if press kill flag is set (it never is), kill on impact like a kochappy
	if (C_PARMS->mIsPressKill && part && source->isPiki() && getStateID() != JIGUMO_Dead) {
		enableEvent(0, EB_LifegaugeVisible);
		mHealth = 0.0f;
		mFsm->transit(this, JIGUMO_Dead, nullptr);
		return true;
	}

	return false;
}

/**
 * @note Address: 0x80369C6C
 * @note Size: 0x1B4
 */
bool Obj::damageCallBack(Creature* source, f32 damage, CollPart* part)
{
	if (isEvent(0, EB_Bittered)) {
		EnemyBase::damageCallBack(source, damage, part);
		return true;
	}

	// If out of nest when hit
	if (getStateID() == JIGUMO_Carry || getStateID() == JIGUMO_Return) {
		Sys::Sphere sphere;

		// Get the head position
		mCollTree->getCollPart('head')->getSphere(sphere);
		Vector3f headPos = sphere.mPosition;

		// Get the body position
		mCollTree->getCollPart('body')->getSphere(sphere);
		Vector3f bodyPos = sphere.mPosition;

		// Get the pikmin position
		Vector3f pikiPos = source->getPosition();

		// If the pikmin is closer to the head than the body, don't damage (head is invulnerable)
		if (headPos.sqrDistance(pikiPos) < bodyPos.sqrDistance(pikiPos)) {
			return false;
		}

		EnemyBase::damageCallBack(source, damage, part);
		return true;
	}

	return false;
}

/**
 * @note Address: 0x80369E20
 * @note Size: 0xD0
 */
void Obj::collisionCallback(CollEvent& event)
{
	// If we've hit the house, stop moving
	if (event.mCollidingCreature->isTeki()
	    && static_cast<EnemyBase*>(event.mCollidingCreature)->getEnemyTypeID() == EnemyTypeID::EnemyID_PanHouse) {
		mAcceleration = Vector3f(0.0f);
	}

	EnemyBase::collisionCallback(event);

	// Damage if bittered
	if (isEvent(0, EB_Bittered) && event.mCollidingCreature->isPiki()) {
		damageCallBack(event.mCollidingCreature, 1.0f, nullptr);
	}
}

/**
 * @note Address: 0x80369EF0
 * @note Size: 0x120
 */
void Obj::outWaterCallback()
{
	EnemyBase::outWaterCallback();
	efx::ArgScale fxArg(mPosition, mScaleModifier);

	switch (getStateID()) {
	case JIGUMO_Attack:
		mEfxAttack->create(&fxArg);
		mEfxAttackW->fade();
		break;
	case JIGUMO_Carry:
		mEfxBack->create(&fxArg);
		mEfxBackW->fade();
		break;
	case JIGUMO_Return:
		mEfxSmoke->create(&fxArg);
		break;
	}
}

/**
 * @note Address: 0x8036A010
 * @note Size: 0x150
 */
void Obj::inWaterCallback(WaterBox* wb)
{
	EnemyBase::inWaterCallback(wb);
	efx::ArgScale fxArg(mPosition, mScaleModifier);

	switch (getStateID()) {
	case JIGUMO_Attack:
		mEffectPosition   = mPosition;
		mEffectPosition.y = *mWaterBox->getSeaHeightPtr();
		mEfxAttackW->create(&fxArg);
		mEfxAttack->fade();
		break;
	case JIGUMO_Carry:
		mEfxBackW->create(&fxArg);
		mEfxBack->fade();
		break;
	case JIGUMO_Return:
		mEfxSmoke->fade();
		break;
	}
}

/**
 * @note Address: 0x8036A160
 * @note Size: 0x7C
 */
bool Obj::earthquakeCallBack(Creature* source, f32 damage)
{
	if (mCanBeEarthquaked && getStateID() != JIGUMO_Flick && mClimbingTimer == 0) {
		return EnemyBase::earthquakeCallBack(source, damage);
	}

	return false;
}

/**
 * @note Address: 0x8036A1DC
 * @note Size: 0x9C
 */
void Obj::getShadowParam(ShadowParam& param)
{
	mBodyJoint->getWorldMatrix()->getTranslation(param.mPosition);
	param.mPosition.y                 = mPosition.y + 2.0f;
	J3DModel* model                   = mModel->mJ3dModel;
	param.mBoundingSphere.mPosition.x = model->mPosMtx[0][1];
	param.mBoundingSphere.mPosition.y = model->mPosMtx[1][1];
	param.mBoundingSphere.mPosition.z = model->mPosMtx[2][1];
	param.mBoundingSphere.mRadius     = 80.0f;
	param.mSize                       = 15.0f * mScaleModifier;
}

/**
 * @note Address: 0x8036A278
 * @note Size: 0x7C
 */
bool Obj::needShadow()
{
	if (!EnemyBase::needShadow()) {
		return false;
	}

	if (isConstrained()) {
		return (u8)(getStateID() == JIGUMO_Hide);
	}

	return true;
}

/**
 * @note Address: 0x8036A2F4
 * @note Size: 0x174
 */
void Obj::doSimulationGround(f32 step)
{
	// If we're climbing, then climb simulation!
	if (mClimbingTimer > 0 && !isEvent(1, EB2_Stunned) && !isEvent(1, EB2_Earthquake)) {
		doSimulationFlying(step);
		return;
	}

	// Set target velocity, keeping the y velocity the same (accounting for gravity)
	Vector3f targetVel = mTargetVelocity;
	targetVel.y        = mCurrentVelocity.y;

	Vector3f currentVelocity = mCurrentVelocity;
	Vector3f velocityChange  = targetVel - currentVelocity;

	// Calculate the change in velocity and apply it, including acceleration
	mCurrentVelocity = mCurrentVelocity + (velocityChange) * (step / C_PARMS->mCreatureProps.mProps.mAccel());

	// If attacking, mass goes up and take away drag (we wanna shoot straight for the enemy)
	f32 massFactor = 1.0f;
	f32 dragFactor = C_PARMS->mTiltDrag;
	if (getStateID() == JIGUMO_Attack) {
		dragFactor = 0.0f;
		massFactor = 2.5f;
	}

	// If the object is not perfectly upright, apply horizontal drag based on the face normal
	if (mCurrentFaceNormal.y != 1.0f) {
		mCurrentVelocity.x -= mCurrentFaceNormal.x * dragFactor;
		mCurrentVelocity.z -= mCurrentFaceNormal.z * dragFactor;
	}

	bool isAirborne = (isEvent(1, EB2_Earthquake) || isEvent(1, EB2_Dropping));
	if (isAirborne) {
		massFactor = 3.0f;
	}

	// Apply gravity to the vertical velocity, and apply mass factor
	mCurrentVelocity.y -= massFactor * (step * _aiConstants->mGravity.mData);
}

/**
 * @note Address: 0x8036A468
 * @note Size: 0x34
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	EnemyBase::onKill(killArg);
	killNest();
}

/**
 * @note Address: 0x8036A49C
 * @note Size: 0x8
 */
bool Obj::isLivingThing() { return true; }

/**
 * @note Address: 0x8036A4A4
 * @note Size: 0x8C
 */
void Obj::doStartMovie()
{
	mEfxAttack->startDemoDrawOff();
	mEfxAttackW->startDemoDrawOff();
	mEfxBack->startDemoDrawOff();
	mEfxBackW->startDemoDrawOff();
	mEfxSmoke->startDemoDrawOff();
}

/**
 * @note Address: 0x8036A530
 * @note Size: 0x8C
 */
void Obj::doEndMovie()
{
	mEfxAttack->endDemoDrawOn();
	mEfxAttackW->endDemoDrawOn();
	mEfxBack->endDemoDrawOn();
	mEfxBackW->endDemoDrawOn();
	mEfxSmoke->endDemoDrawOn();
}

/**
 * @note Address: 0x8036A5BC
 * @note Size: 0xD8
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	mCollTree->getCollPart('body')->mSpecialID = 'st__';
	mCollTree->getCollPart('head')->mSpecialID = '_t__';
	effectStop();
	enableEvent(0, EB_LifegaugeVisible);
	setAlive(true);
	setAtari(true);
	int stateID = getStateID();
	if (stateID == JIGUMO_Wait || stateID == JIGUMO_Appear || stateID == JIGUMO_Hide || stateID == JIGUMO_Search) {
		mBodyRadius = 30.0f * mScaleModifier;
	}
}

/**
 * @note Address: 0x8036A694
 * @note Size: 0xE8
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	if (!mIsOutsideHouse) {
		mCollTree->getCollPart('body')->mSpecialID = '____';
		mCollTree->getCollPart('head')->mSpecialID = '____';
	}

	int stateID = getStateID();
	if (stateID == JIGUMO_Wait || stateID == JIGUMO_Appear || stateID == JIGUMO_Hide || stateID == JIGUMO_Search) {
		disableEvent(0, EB_LifegaugeVisible);
		setAlive(false);
		setAtari(false);
	}
	mBodyRadius = mScaleModifier * C_GENERALPARMS.mPikminDamageRadius();
	effectStart();
}

/**
 * @note Address: 0x8036A77C
 * @note Size: 0x34
 */
f32 Obj::getGoalDist() { return mPosition.sqrDistance(mGoalPosition); }

/**
 * @note Address: 0x8036A7B0
 * @note Size: 0x7DC
 */
void Obj::walkFunc()
{
	// UpI date position to use for effects
	mEffectPosition = mPosition;
	if (mWaterBox) {
		mEffectPosition.y = *mWaterBox->getSeaHeightPtr();
	}

	f32 turningFactor, territoryRadius;
	f32 walkSpeed    = getWalkSpeed();                    // f29
	territoryRadius  = C_GENERALPARMS.mTerritoryRadius(); // f30
	turningFactor    = C_PARMS->mTurnWeight;              // f31, 20.0f by default
	f32 turningSpeed = C_GENERALPARMS.mTurnSpeed();       // f28
	f32 maxTurnAngle = C_GENERALPARMS.mMaxTurnAngle();    // f27

	int stateID = getStateID();

	// if we're carrying and not attacking (assuming a flag is not set, which is the default)
	if (stateID == JIGUMO_Carry || (!C_PARMS->_8FC && (stateID == JIGUMO_Return || stateID == JIGUMO_Miss))) {
		Vector3f seperation = mGoalPosition;
		seperation -= mPosition;

		f32 distance = seperation.length();
		// f32 dist = mGoalPosition.distance(mPosition);
		if (distance < 0.0f) {
			distance = 0.0f;
		}

		// Calculate the pre-turn angle based on the distance and territory radius
		// mTurnModifier is 0.05f by default (5% every frame)
		f32 preTurnAngle = (C_PARMS->mTurnModifier * (distance * (360.0f * (1.0f / territoryRadius))));
		f32 degreeAngle  = turningFactor * (f32)sin(180.0f + preTurnAngle); // f2

		if (!C_PARMS->mIsGradualTurnActive) { // does not run by default, but forces angle to 0
			degreeAngle = 0.0f;
		}

		degreeAngle *= mCarryAngleSpeed;        // angle goes from 0 to whatever the degAngle factor is over time
		f32 turnAngle = TORADIANS(degreeAngle); // f30

		mCarryAngleSpeed += 0.1f;

		// cap out weighting at 1
		if (mCarryAngleSpeed > 1.0f) {
			mCarryAngleSpeed = 1.0f;
		}

		// do this just if we're transporting a piki
		if (getStateID() == JIGUMO_Carry) {
			if (C_PARMS->mIsWalkPauseActive) { // runs by default
				mPauseTimer += 1.0f;
				if (mCurAnim->mIsPlaying && mCurAnim->mType == KEYEVENT_LOOP_END && mPauseTimer > mPauseTriggerTime) {
					mDoPauseAnim = !mDoPauseAnim; // change from pausing to running, or vice versa
					if (mClimbingTimer > 0) {     // if we're climbing (?), don't pause
						mDoPauseAnim = false;
					}

					if (mDoPauseAnim) {
						startMotion(JIGUMOANIM_BackWait, nullptr);
						effectStop();
					} else {
						startMotion(JIGUMOANIM_BackRun, nullptr);
						effectStart();
					}

					mPauseTriggerTime = C_PARMS->mMaxPauseTime * randFloat(); // 0-35 by default
					mPauseTimer       = 0.0f;
				}

				// gradually ease into pause
				if (mDoPauseAnim && mPauseTimer < mPauseTriggerTime) {
					walkSpeed *= C_PARMS->mPauseSpeedModifier * (1.0f - mPauseTimer / mPauseTriggerTime);
				}
			}

			// slow down if we have pikmin attached
			if (C_PARMS->mIsStuckPikiDragActive) {
				f32 pikiDrag = 0.2f * (f32)mStuckPikminCount;

				// don't slow down *too* much
				if (pikiDrag > 0.8f) {
					pikiDrag = 0.8f;
				}

				walkSpeed *= (1.0f - pikiDrag);
			}
		}

		mFaceDir = mNextFaceDir;
		mReturnTimer++;

		// every 60 frames, check we're not stuck?
		if (mReturnTimer > 60) {

			// if we haven't moved very far in the last two seconds, shift a little to hopefully get us unstuck?
			if (mPosition.sqrDistance(mPrevReturnCheckPosition) < 400.0f) {

				// shift away from nest
				f32 shiftMag = 2.0f; // shift backwards by default
				if (mIsReversing) {
					shiftMag *= -1.0f; // if we're reversing, shift "forwards"
				}

				mPosition.x -= shiftMag * sinf(mFaceDir);
				mPosition.z -= shiftMag * cosf(mFaceDir);

				if ((f32)mClimbingTimer != 0.0f) { // idk why this is checking this as a float.
					mClimbingAccel = 2.0f;

				} else {
					mClimbingAccel = 1.0f;
					mClimbingTimer = C_PARMS->mClimbingTime;
				}
			}

			mPrevReturnCheckPosition = mPosition;
			mReturnTimer             = 0;
		}

		turnToTarget2(mGoalPosition, turningSpeed, maxTurnAngle);

		f32 prevFaceDir = mFaceDir;

		// adjust target velocity
		f32 theta     = prevFaceDir + turnAngle;
		f32 velocityX = walkSpeed * sinf(theta);
		f32 velocityY = getTargetVelocity().y;
		f32 velocityZ = walkSpeed * cosf(theta);

		mNextFaceDir = prevFaceDir;

		// Limit the angle to the maximum allowed
		if (absF(turnAngle) > maxTurnAngle) {
			turnAngle = (turnAngle > 0.0f) ? maxTurnAngle : -maxTurnAngle;
		}

		// If we're returning or have missed, flip the face direction (turn)
		f32 flipFaceDir = 1.0f;
		if (stateID == JIGUMO_Return || stateID == JIGUMO_Miss) {
			flipFaceDir = 0.0f;
		}

		// Update the face direction and target velocity
		mFaceDir += roundAng(PI * flipFaceDir + turnAngle);
		mRotation.y     = mFaceDir;
		mTargetVelocity = Vector3f(velocityX, velocityY, velocityZ);

		// mPauseSpeedModifier is 0.15f by default, so this doesn't run
		// but if modifier is meant to make speed 0... make speed HARD 0.
		if (mDoPauseAnim && C_PARMS->mPauseSpeedModifier == 0.0f) {
			mTargetVelocity  = Vector3f(0.0f);
			mCurrentVelocity = Vector3f(0.0f);
		}

		return;
	}

	if (stateID == JIGUMO_Attack) {
		f32 x = dolsinf(getFaceDir());
		f32 y = getTargetVelocity().y;
		f32 z = dolcosf(getFaceDir());

		mTargetVelocity = Vector3f(walkSpeed * x, y, walkSpeed * z);

		return;
	}

	EnemyFunc::walkToTarget(this, mGoalPosition, walkSpeed, turningSpeed, maxTurnAngle);

	/*
	stwu     r1, -0xb0(r1)
	mflr     r0
	stw      r0, 0xb4(r1)
	stfd     f31, 0xa0(r1)
	psq_st   f31, 168(r1), 0, qr0
	stfd     f30, 0x90(r1)
	psq_st   f30, 152(r1), 0, qr0
	stfd     f29, 0x80(r1)
	psq_st   f29, 136(r1), 0, qr0
	stfd     f28, 0x70(r1)
	psq_st   f28, 120(r1), 0, qr0
	stfd     f27, 0x60(r1)
	psq_st   f27, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	mr       r30, r3
	lfs      f0, 0x18c(r3)
	stfs     f0, 0x364(r3)
	lfs      f0, 0x190(r3)
	stfs     f0, 0x368(r3)
	lfs      f0, 0x194(r3)
	stfs     f0, 0x36c(r3)
	lwz      r3, 0x280(r3)
	cmplwi   r3, 0
	beq      lbl_8036A82C
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0(r3)
	stfs     f0, 0x368(r30)

lbl_8036A82C:
	mr       r3, r30
	bl       getWalkSpeed__Q34Game6Jigumo3ObjFv
	lwz      r4, 0xc0(r30)
	fmr      f29, f1
	mr       r3, r30
	lfs      f30, 0x35c(r4)
	lfs      f31, 0x904(r4)
	lfs      f28, 0x30c(r4)
	lfs      f27, 0x334(r4)
	bl       getStateID__Q24Game9EnemyBaseFv
	mr       r31, r3
	cmpwi    r31, 7
	beq      lbl_8036A880
	lwz      r3, 0xc0(r30)
	lbz      r0, 0x8fc(r3)
	cmplwi   r0, 0
	bne      lbl_8036AEC4
	cmpwi    r31, 6
	beq      lbl_8036A880
	cmpwi    r31, 5
	bne      lbl_8036AEC4

lbl_8036A880:
	lfs      f1, 0x2cc(r30)
	lfs      f0, 0x190(r30)
	lfs      f3, 0x2c8(r30)
	fsubs    f1, f1, f0
	lfs      f0, 0x18c(r30)
	lfs      f2, 0x2d0(r30)
	fsubs    f3, f3, f0
	lfs      f0, 0x194(r30)
	fmuls    f1, f1, f1
	fsubs    f2, f2, f0
	lfs      f0, lbl_8051E978@sda21(r2)
	fmadds   f1, f3, f3, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8036A8CC
	ble      lbl_8036A8D0
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_8036A8D0

lbl_8036A8CC:
	fmr      f1, f0

lbl_8036A8D0:
	lfs      f0, lbl_8051E978@sda21(r2)
	fmr      f4, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8036A8E4
	fmr      f4, f0

lbl_8036A8E4:
	lfs      f0, lbl_8051E97C@sda21(r2)
	lwz      r3, 0xc0(r30)
	fdivs    f0, f0, f30
	lfs      f3, lbl_8051E99C@sda21(r2)
	lfs      f1, 0x908(r3)
	lfs      f2, lbl_8051E9A0@sda21(r2)
	fmuls    f0, f3, f0
	fmuls    f0, f4, f0
	fmuls    f0, f1, f0
	fadds    f1, f2, f0
	bl       sin
	lwz      r3, 0xc0(r30)
	frsp     f0, f1
	lbz      r0, 0x8fb(r3)
	fmuls    f2, f31, f0
	cmplwi   r0, 0
	bne      lbl_8036A92C
	lfs      f2, lbl_8051E978@sda21(r2)

lbl_8036A92C:
	lfs      f1, 0x344(r30)
	lfs      f0, lbl_8051E9AC@sda21(r2)
	fmuls    f2, f2, f1
	lfs      f3, lbl_8051E9A8@sda21(r2)
	fadds    f1, f1, f0
	lfs      f4, lbl_8051E9A4@sda21(r2)
	lfs      f0, lbl_8051E97C@sda21(r2)
	fmuls    f2, f3, f2
	stfs     f1, 0x344(r30)
	lfs      f1, 0x344(r30)
	fmuls    f30, f4, f2
	fcmpo    cr0, f1, f0
	ble      lbl_8036A964
	stfs     f0, 0x344(r30)

lbl_8036A964:
	mr       r3, r30
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 7
	bne      lbl_8036AAF0
	lwz      r3, 0xc0(r30)
	lbz      r0, 0x8f9(r3)
	cmplwi   r0, 0
	beq      lbl_8036AA9C
	lfs      f1, 0x338(r30)
	lfs      f0, lbl_8051E97C@sda21(r2)
	fadds    f0, f1, f0
	stfs     f0, 0x338(r30)
	lwz      r3, 0x188(r30)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_8036AA64
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 1
	bne      lbl_8036AA64
	lfs      f1, 0x338(r30)
	lfs      f0, 0x33c(r30)
	fcmpo    cr0, f1, f0
	ble      lbl_8036AA64
	lbz      r0, 0x340(r30)
	cntlzw   r0, r0
	srwi     r0, r0, 5
	stb      r0, 0x340(r30)
	lwz      r0, 0x334(r30)
	cmpwi    r0, 0
	ble      lbl_8036A9E4
	li       r0, 0
	stb      r0, 0x340(r30)

lbl_8036A9E4:
	lbz      r0, 0x340(r30)
	cmplwi   r0, 0
	beq      lbl_8036AA0C
	mr       r3, r30
	li       r4, 3
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	mr       r3, r30
	bl       effectStop__Q34Game6Jigumo3ObjFv
	b        lbl_8036AA24

lbl_8036AA0C:
	mr       r3, r30
	li       r4, 2
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	mr       r3, r30
	bl       effectStart__Q34Game6Jigumo3ObjFv

lbl_8036AA24:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x3c(r1)
	lwz      r3, 0xc0(r30)
	stw      r0, 0x38(r1)
	lfd      f1, lbl_8051E970@sda21(r2)
	lfd      f0, 0x38(r1)
	lfs      f2, lbl_8051E960@sda21(r2)
	fsubs    f3, f0, f1
	lfs      f1, 0x914(r3)
	lfs      f0, lbl_8051E978@sda21(r2)
	fdivs    f2, f3, f2
	fmuls    f1, f1, f2
	stfs     f1, 0x33c(r30)
	stfs     f0, 0x338(r30)

lbl_8036AA64:
	lbz      r0, 0x340(r30)
	cmplwi   r0, 0
	beq      lbl_8036AA9C
	lfs      f1, 0x338(r30)
	lfs      f0, 0x33c(r30)
	fcmpo    cr0, f1, f0
	bge      lbl_8036AA9C
	fdivs    f0, f1, f0
	lfs      f1, lbl_8051E97C@sda21(r2)
	lwz      r3, 0xc0(r30)
	lfs      f2, 0x918(r3)
	fsubs    f0, f1, f0
	fmuls    f0, f2, f0
	fmuls    f29, f29, f0

lbl_8036AA9C:
	lwz      r3, 0xc0(r30)
	lbz      r0, 0x8fa(r3)
	cmplwi   r0, 0
	beq      lbl_8036AAF0
	lwz      r3, 0x1f4(r30)
	lis      r0, 0x4330
	stw      r0, 0x38(r1)
	xoris    r0, r3, 0x8000
	lfd      f2, lbl_8051E970@sda21(r2)
	stw      r0, 0x3c(r1)
	lfs      f3, lbl_8051E9B0@sda21(r2)
	lfd      f1, 0x38(r1)
	lfs      f0, lbl_8051E9B4@sda21(r2)
	fsubs    f1, f1, f2
	fmuls    f1, f3, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8036AAE4
	fmr      f1, f0

lbl_8036AAE4:
	lfs      f0, lbl_8051E97C@sda21(r2)
	fsubs    f0, f0, f1
	fmuls    f29, f29, f0

lbl_8036AAF0:
	lfs      f0, 0x2ec(r30)
	stfs     f0, 0x1fc(r30)
	lwz      r3, 0x35c(r30)
	addi     r0, r3, 1
	stw      r0, 0x35c(r30)
	lwz      r0, 0x35c(r30)
	cmpwi    r0, 0x3c
	ble      lbl_8036AC84
	lfs      f1, 0x190(r30)
	lfs      f0, 0x354(r30)
	lfs      f3, 0x18c(r30)
	fsubs    f1, f1, f0
	lfs      f0, 0x350(r30)
	lfs      f2, 0x194(r30)
	fsubs    f3, f3, f0
	lfs      f0, 0x358(r30)
	fmuls    f1, f1, f1
	fsubs    f2, f2, f0
	lfs      f0, lbl_8051E9B8@sda21(r2)
	fmadds   f1, f3, f3, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8036AC64
	lbz      r0, 0x2e8(r30)
	lfs      f4, lbl_8051E984@sda21(r2)
	cmplwi   r0, 0
	beq      lbl_8036AB64
	lfs      f0, lbl_8051E9BC@sda21(r2)
	fmuls    f4, f4, f0

lbl_8036AB64:
	lfs      f1, 0x1fc(r30)
	lfs      f0, lbl_8051E978@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8036ABA0
	lfs      f0, lbl_8051E9C0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f2, f0
	b        lbl_8036ABC4

lbl_8036ABA0:
	lfs      f0, lbl_8051E9C4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x40(r1)
	lwz      r0, 0x44(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0

lbl_8036ABC4:
	lfs      f1, 0x18c(r30)
	lfs      f0, lbl_8051E978@sda21(r2)
	fnmsubs  f1, f4, f2, f1
	stfs     f1, 0x18c(r30)
	lfs      f2, 0x1fc(r30)
	fcmpo    cr0, f2, f0
	bge      lbl_8036ABE4
	fneg     f2, f2

lbl_8036ABE4:
	lfs      f1, lbl_8051E9C4@sda21(r2)
	lis      r0, 0x4330
	lis      r3, sincosTable___5JMath@ha
	stw      r0, 0x50(r1)
	fmuls    f2, f2, f1
	addi     r3, r3, sincosTable___5JMath@l
	lfs      f0, 0x194(r30)
	lfd      f1, lbl_8051E970@sda21(r2)
	fctiwz   f3, f2
	lfs      f2, lbl_8051E978@sda21(r2)
	stfd     f3, 0x48(r1)
	lwz      r0, 0x4c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r3, r0
	lfs      f3, 4(r3)
	fnmsubs  f0, f4, f3, f0
	stfs     f0, 0x194(r30)
	lwz      r0, 0x334(r30)
	xoris    r0, r0, 0x8000
	stw      r0, 0x54(r1)
	lfd      f0, 0x50(r1)
	fsubs    f0, f0, f1
	fcmpu    cr0, f2, f0
	beq      lbl_8036AC50
	lfs      f0, lbl_8051E984@sda21(r2)
	stfs     f0, 0x2f4(r30)
	b        lbl_8036AC64

lbl_8036AC50:
	lfs      f0, lbl_8051E97C@sda21(r2)
	stfs     f0, 0x2f4(r30)
	lwz      r3, 0xc0(r30)
	lbz      r0, 0x910(r3)
	stw      r0, 0x334(r30)

lbl_8036AC64:
	lfs      f0, 0x18c(r30)
	li       r0, 0
	stfs     f0, 0x350(r30)
	lfs      f0, 0x190(r30)
	stfs     f0, 0x354(r30)
	lfs      f0, 0x194(r30)
	stfs     f0, 0x358(r30)
	stw      r0, 0x35c(r30)

lbl_8036AC84:
	mr       r4, r30
	addi     r3, r1, 0x14
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f5, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x2c8(r30)
	lfs      f0, 0x2d0(r30)
	lfs      f4, 0x18(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 8(r1)
	stfs     f4, 0xc(r1)
	stfs     f3, 0x10(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r30)
	fmr      f31, f1
	mr       r3, r30
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f31
	bl       angDist__Fff
	fmuls    f28, f1, f28
	lfs      f0, lbl_8051E9A8@sda21(r2)
	lfs      f1, lbl_8051E9A4@sda21(r2)
	fmuls    f0, f0, f27
	fabs     f2, f28
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_8036AD34
	lfs      f0, lbl_8051E978@sda21(r2)
	fcmpo    cr0, f28, f0
	ble      lbl_8036AD30
	fmr      f28, f1
	b        lbl_8036AD34

lbl_8036AD30:
	fneg     f28, f1

lbl_8036AD34:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f28, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r30)
	lfs      f0, lbl_8051E978@sda21(r2)
	lfs      f1, 0x1fc(r30)
	stfs     f1, 0x1a8(r30)
	lfs      f4, 0x1fc(r30)
	fadds    f3, f4, f30
	fcmpo    cr0, f3, f0
	bge      lbl_8036AD9C
	lfs      f0, lbl_8051E9C0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x50(r1)
	lwz      r0, 0x54(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f2, f0
	b        lbl_8036ADC0

lbl_8036AD9C:
	lfs      f0, lbl_8051E9C4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x48(r1)
	lwz      r0, 0x4c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r3, r0

lbl_8036ADC0:
	lfs      f0, lbl_8051E978@sda21(r2)
	fmuls    f31, f29, f2
	lfs      f1, 0x1d4(r30)
	lfs      f28, 0x1d8(r30)
	fcmpo    cr0, f3, f0
	lfs      f0, 0x1dc(r30)
	stfs     f1, 0x2c(r1)
	stfs     f28, 0x30(r1)
	stfs     f0, 0x34(r1)
	bge      lbl_8036ADEC
	fneg     f3, f3

lbl_8036ADEC:
	lfs      f0, lbl_8051E9C4@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	fabs     f2, f30
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f1, f3, f0
	frsp     f0, f2
	fctiwz   f1, f1
	fcmpo    cr0, f0, f27
	stfd     f1, 0x40(r1)
	lwz      r0, 0x44(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r3, r0
	lfs      f0, 4(r3)
	fmuls    f29, f29, f0
	stfs     f4, 0x2ec(r30)
	ble      lbl_8036AE44
	lfs      f0, lbl_8051E978@sda21(r2)
	fcmpo    cr0, f30, f0
	ble      lbl_8036AE40
	fmr      f30, f27
	b        lbl_8036AE44

lbl_8036AE40:
	fneg     f30, f27

lbl_8036AE44:
	cmpwi    r31, 6
	lfs      f1, lbl_8051E97C@sda21(r2)
	beq      lbl_8036AE58
	cmpwi    r31, 5
	bne      lbl_8036AE5C

lbl_8036AE58:
	lfs      f1, lbl_8051E978@sda21(r2)

lbl_8036AE5C:
	lfs      f0, lbl_8051E9A4@sda21(r2)
	fmadds   f1, f0, f1, f30
	bl       roundAng__Ff
	lfs      f0, 0x1fc(r30)
	fadds    f0, f0, f1
	stfs     f0, 0x1fc(r30)
	lfs      f0, 0x1fc(r30)
	stfs     f0, 0x1a8(r30)
	stfs     f31, 0x1d4(r30)
	stfs     f28, 0x1d8(r30)
	stfs     f29, 0x1dc(r30)
	lbz      r0, 0x340(r30)
	cmplwi   r0, 0
	beq      lbl_8036AF4C
	lwz      r3, 0xc0(r30)
	lfs      f1, lbl_8051E978@sda21(r2)
	lfs      f0, 0x918(r3)
	fcmpu    cr0, f1, f0
	bne      lbl_8036AF4C
	stfs     f1, 0x1d4(r30)
	stfs     f1, 0x1d8(r30)
	stfs     f1, 0x1dc(r30)
	stfs     f1, 0x1c8(r30)
	stfs     f1, 0x1cc(r30)
	stfs     f1, 0x1d0(r30)
	b        lbl_8036AF4C

lbl_8036AEC4:
	cmpwi    r31, 4
	bne      lbl_8036AF34
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r30
	lfs      f2, 0x1d4(r30)
	lwz      r12, 0(r30)
	frsp     f28, f1
	lfs      f27, 0x1d8(r30)
	lfs      f0, 0x1dc(r30)
	lwz      r12, 0x64(r12)
	stfs     f2, 0x20(r1)
	stfs     f27, 0x24(r1)
	stfs     f0, 0x28(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f29, f28
	frsp     f1, f1
	stfs     f0, 0x1d4(r30)
	fmuls    f0, f29, f1
	stfs     f27, 0x1d8(r30)
	stfs     f0, 0x1dc(r30)
	b        lbl_8036AF4C

lbl_8036AF34:
	fmr      f1, f29
	mr       r3, r30
	fmr      f2, f28
	addi     r4, r30, 0x2c8
	fmr      f3, f27
	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff"

lbl_8036AF4C:
	psq_l    f31, 168(r1), 0, qr0
	lfd      f31, 0xa0(r1)
	psq_l    f30, 152(r1), 0, qr0
	lfd      f30, 0x90(r1)
	psq_l    f29, 136(r1), 0, qr0
	lfd      f29, 0x80(r1)
	psq_l    f28, 120(r1), 0, qr0
	lfd      f28, 0x70(r1)
	psq_l    f27, 104(r1), 0, qr0
	lfd      f27, 0x60(r1)
	lwz      r31, 0x5c(r1)
	lwz      r0, 0xb4(r1)
	lwz      r30, 0x58(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}

/**
 * @note Address: 0x8036AF8C
 * @note Size: 0x19C
 */
Vector3f Obj::getOffsetForMapCollision()
{
	// we're stationary, don't offset collision
	if (isConstrained()) {
		return Vector3f(0.0f);
	}

	// we're going backwards, offset collision behind us 2 units
	if (mIsReversing) {
		return Vector3f(-2.0f * sinf(mFaceDir), 0.0f, -2.0f * cosf(mFaceDir));
	}

	// we're going forwards, offset collision in front of us 2 units
	return Vector3f(2.0f * sinf(mFaceDir), 0.0f, 2.0f * cosf(mFaceDir));
}

/**
 * @note Address: 0x8036B128
 * @note Size: 0x820
 */
void Obj::calcBaseTrMatrix()
{
	if (!C_PARMS->mDoFullScaleCalc) {
		Vector3f scale(1.0f);
		mBaseTrMatrix.makeSRT(scale, mRotation, mPosition);
		PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mModel->mJ3dModel->mPosMtx);
		mModel->mJ3dModel->mModelScale = *((Vec*)&mScale);
		return;
	}

	f32 frameLen;
	Vector3f pos;
	f32 rotX;

	rotX     = C_GENERALPARMS.mHeightOffsetFromFloor();
	frameLen = sys->getDeltaTime();

	if (gameSystem && gameSystem->mIsInCave) {
		f32 minY = mapMgr->getMinY(mPosition);
		if (mPosition.y > 100.0f + minY) {
			mClimbingTimer   = 0;
			mWalkBounceTimer = 30;
		}
	}

	if (mWalkBounceTimer > 0) {
		mWalkBounceTimer--;
		if (mWalkBounceTimer < 0) {
			mWalkBounceTimer = 0;
		}
	}

	pos           = mPosition;
	mEffectOffset = getOffsetForMapCollision();
	pos += mEffectOffset;
	pos.y += rotX;

	Sys::Sphere sphere;
	sphere.mRadius   = rotX;
	sphere.mPosition = pos;

	MoveInfo info(&sphere, &mCurrentVelocity, C_PARMS->mCreatureProps.mProps.mWallReflection());

	mapMgr->traceMove(info, frameLen);

	if (getStateID() != JIGUMO_Attack && !mWalkBounceTimer && (mClimbingTimer > 0 || info.mWallTriangle)) {
		if (info.mWallTriangle && (info.mWallNormal.x != 0.0f || info.mWallNormal.y != 0.0f || info.mWallNormal.z != 0.0f)) {
			mWantedFaceNormal = info.mWallNormal;
			mClimbingTimer    = C_PARMS->mClimbingTime;
		}

		if (mCurrentFaceNormal.x != mWantedFaceNormal.x || mCurrentFaceNormal.y != mWantedFaceNormal.y
		    || mCurrentFaceNormal.z != mWantedFaceNormal.z) {
			mSlerpTime = 0.0f;
		}

		if (mWantedFaceNormal.y < C_PARMS->mFaceNormalMin) {
			mWantedFaceNormal.y = C_PARMS->mFaceNormalMin;
			mWantedFaceNormal.normalise();
		}

		mCurrentFaceNormal = mWantedFaceNormal;
		f32 isMoving       = 1.0f;
		if (isConstrained()) {
			isMoving = 0.0f;
		}

		mPosition.y += mClimbingAccel * (isMoving * C_PARMS->_91C);

	} else {
		if (info.mFloorTriangle) {
			mWantedFaceNormal = info.mFloorNormal;
		}

		if (isConstrained()) {
			mWantedFaceNormal = Vector3f(0.0f, 1.0f, 0.0f);
		}

		if (mCurrentFaceNormal.x != mWantedFaceNormal.x || mCurrentFaceNormal.y != mWantedFaceNormal.y
		    || mCurrentFaceNormal.z != mWantedFaceNormal.z) {
			mSlerpTime = 0.0f;
		}

		mCurrentFaceNormal = mWantedFaceNormal;
		mClimbingAccel *= 0.95f;
	}

	if (mClimbingAccel < 1.1f) {
		mClimbingAccel = 1.0f;
	}

	mClimbingTimer--;
	if (mClimbingTimer < 0) {
		mClimbingTimer = 0;
	}

	Vector3f direction = Vector3f((f32)sin(mFaceDir), 0.0f, (f32)cos(mFaceDir)); // 0x3c
	direction.normalise();

	Vector3f angle = mCurrentFaceNormal; // 0x30
	Vector3f translation;                // 0x24

	PSVECCrossProduct((Vec*)&angle, (Vec*)&direction, (Vec*)&translation);
	translation.normalise();

	PSVECCrossProduct((Vec*)&translation, (Vec*)&angle, (Vec*)&direction);
	direction.normalise();

	mBaseTrMatrix.setColumn(0, translation);
	mBaseTrMatrix.setColumn(1, angle);
	mBaseTrMatrix.setColumn(2, direction);

	mDestRotation.fromMatrixf(mBaseTrMatrix);

	Quat unusedQuat(mCurrRotation);

	if (mSlerpTime < 1.0f) {
		mSlerpTime += 0.1f;
		if (mSlerpTime > 1.0f) {
			mSlerpTime = 1.0f;
		}

		mCurrRotation.slerp(mDestRotation, mSlerpTime, mCurrRotation);

	} else {
		mSlerpTime    = 0.0f;
		mCurrRotation = mDestRotation;
	}

	// Normalize quaternion and set transformation matrix
	mCurrRotation.normalise();
	mBaseTrMatrix.makeQ(mCurrRotation);
	mBaseTrMatrix.setColumn(3, mPosition);

	// Copy transformation matrix to model position matrix
	PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mModel->mJ3dModel->mPosMtx);

	mModel->mJ3dModel->mModelScale = *(Vec*)&mScale;
}

/**
 * @note Address: N/A
 * @note Size: 0xE8
 */
bool Obj::isUnitePos()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8036B948
 * @note Size: 0x58
 */
void Obj::revisionAnimPos(f32 val)
{
	if (val > 1.0f) {
		mPosition = mHomePosition;
		return;
	}

	Vector3f sep = mHomePosition;
	sep -= mHideAnimPosition;

	mPosition.x = sep.x * val + mHideAnimPosition.x;
	mPosition.z = sep.z * val + mHideAnimPosition.z;
}

/**
 * @note Address: 0x8036B9A0
 * @note Size: 0x80
 */
f32 Obj::getWalkSpeed()
{
	switch (getStateID()) {
	case JIGUMO_Carry:
		return C_PROPERPARMS.mCarrySpeed();

	case JIGUMO_Miss:
	case JIGUMO_Return:
		return C_PROPERPARMS.mReturnSpeed();
	case JIGUMO_Eat:
		return 0.0f;
	}

	return C_GENERALPARMS.mMoveSpeed();
}

/**
 * @note Address: 0x8036BA20
 * @note Size: 0x74
 */
void Obj::velocityControl()
{
	if (getMotionFrame() / getMotionFrameMax() < 0.1f) {
		mCurrentVelocity.x *= 2.0f;
		mCurrentVelocity.z *= 2.0f;
	}
}

/**
 * @note Address: 0x8036BA94
 * @note Size: 0xA8
 */
FakePiki* Obj::getNearestPikiOrNavi(f32 angle, f32 radius)
{
	f32 pikiDist = radius;
	pikiDist *= radius;

	f32 naviDist = pikiDist;
	Piki* piki   = EnemyFunc::getNearestPikmin(this, angle, radius, &pikiDist, nullptr);

	Navi* navi = EnemyFunc::getNearestNavi(this, angle, radius, &naviDist, nullptr);

	if (pikiDist < naviDist) {
		return piki;
	}

	return navi;
}

/**
 * @note Address: 0x8036BB3C
 * @note Size: 0x1C0
 */
void Obj::effectStart()
{
	Vector3f pos(0.0f);
	efx::ArgScale fxArg(pos, mScaleModifier);

	int stateID = getStateID();
	if (stateID == JIGUMO_Attack) {
		if (mWaterBox) {
			if (mEfxAttackW) {
				mEfxAttackW->create(&fxArg);
				mEffectPosition   = mPosition;
				mEffectPosition.y = *mWaterBox->getSeaHeightPtr();
			}
		} else if (mEfxAttack) {
			mEfxAttack->create(&fxArg);
		}
	}

	if (stateID == JIGUMO_Carry) {
		mCarryAngleSpeed = 0.0f;
		if (mWaterBox) {
			if (mEfxBackW) {
				mEfxBackW->create(&fxArg);
			}
		} else if (mEfxBack) {
			mEfxBack->create(&fxArg);
		}
	}

	if (stateID == JIGUMO_Return) {
		if (!mWaterBox) {
			fxArg.mScale = 1.625f * mScaleModifier;
			mEfxSmoke->create(&fxArg);
		}
	}
}

/**
 * @note Address: 0x8036BCFC
 * @note Size: 0x8C
 */
void Obj::effectStop()
{
	mEfxAttackW->fade();
	mEfxAttack->fade();
	mEfxBackW->fade();
	mEfxBack->fade();
	mEfxSmoke->fade();
}

/**
 * @note Address: N/A
 * @note Size: 0xA8
 */
void Obj::appearEffectStart()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x30
 */
void Obj::appearEffectStop()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8036BD88
 * @note Size: 0x28
 */
void Obj::boundEffect() { createBounceEffect(mPosition, 0.75f); }

/**
 * @note Address: 0x8036BDB0
 * @note Size: 0x124
 */
void Obj::eatWaterEffect()
{
	Creature* stuck = mMouthSlots.getSlot(0)->mStuckCreature;
	if (stuck) {
		efx::TEnemyDive diveFX;
		Vector3f fxPos = stuck->getPosition();
		fxPos.y        = *mWaterBox->getSeaHeightPtr();
		efx::ArgScale fxArg(fxPos, mScaleModifier);

		diveFX.create(&fxArg);
	}
}

/**
 * @note Address: 0x8036BED4
 * @note Size: 0x20
 */
void Obj::killNest()
{
	if (mHouse) {
		mHouse->mDeathTimer = 1; // will now start nest death sequence
	}

	mHouse = nullptr;
}

/**
 * @note Address: 0x8036BEF4
 * @note Size: 0x194
 */
void Obj::mouthScaleMtxCalc()
{
	Matrixf* mtx  = mModel->mJ3dModel->mMtxBuffer->getWorldMatrix(mKamuJointIdx);
	Vector3f xVec = mtx->getColumn(0);
	xVec.normalise();
	Vector3f yVec = mtx->getColumn(1);
	yVec.normalise();
	Vector3f zVec = mtx->getColumn(2);
	zVec.normalise();

	f32 scale = C_PARMS->mMouthMtxScale;
	if (mDoScaleDownMouth) {
		scale = 0.01f;
	}
	Vector3f newXVec = xVec * scale;
	Vector3f newYVec = yVec * scale;
	Vector3f newZVec = zVec * scale;
	mtx->setColumn(0, newXVec);
	mtx->setColumn(1, newYVec);
	mtx->setColumn(2, newZVec);
}

} // namespace Jigumo
} // namespace Game
