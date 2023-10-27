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

/*
 * --INFO--
 * Address:	80368EA0
 * Size:	000038
 */
static bool mouthScaleCallBack(J3DJoint* joint, int jointIdx)
{
	if (jointIdx == 0 && curJ) {
		curJ->mouthScaleMtxCalc();
	}

	return true;
}

/*
 * --INFO--
 * Address:	80368ED8
 * Size:	00016C
 */
void Obj::setParameters()
{
	EnemyBase::setParameters();

	// this is a dumb way to do this but sure
	f32 scale     = C_PROPERPARMS.mMinScale();
	f32 scaleDiff = C_PROPERPARMS.mMaxScale();
	scaleDiff -= scale;
	int randNum = (int)(5.0f * randFloat());
	scaleDiff /= 5.0f;
	scale = scaleDiff * randNum + scale;
	setScale(scale);

	if (mHouse) {
		mHouse->setScale(scale);
		mHouse->mCollTree->mPart->setScale(scale);
	}

	for (int i = 0; i < mMouthSlots.getMax(); i++) {
		f32 rad = C_PARMS->_928 * mScaleModifier;
		if (rad < 25.0f) {
			rad = 25.0f;
		}

		mMouthSlots.getSlot(i)->mRadius = rad;
	}

	mCurLodSphere.mRadius = mScaleModifier * C_PARMS->mGeneral.mOffCameraRadius();
	_2F0                  = mScaleModifier * C_PARMS->mGeneral.mPikminDamageRadius();
}

/*
 * --INFO--
 * Address:	80369044
 * Size:	00017C
 */
void Obj::birth(Vector3f& pos, f32 faceDir)
{
	EnemyBase::birth(pos, faceDir);
	Nest::Mgr* nestMgr = static_cast<Nest::Mgr*>(generalEnemyMgr->getEnemyMgr(EnemyTypeID::EnemyID_PanHouse));

	if (nestMgr) {
		EnemyBirthArg birthArg;
		birthArg.mPosition = mPosition;
		birthArg.mFaceDir  = getFaceDir();

		Nest::Obj* nest = static_cast<Nest::Obj*>(nestMgr->birth(birthArg));

		P2ASSERTLINE(86, nest);

		nest->init(nullptr);
		mHouse = nullptr;
		mHouse = nest;
		mHouse->setHouseType(getEnemyTypeID());

		f32 scale = mScaleModifier;
		nest->setScale(scale);
		nest->mCollTree->mPart->setScale(scale);
	}

	for (int i = 0; i < mMouthSlots.getMax(); i++) {
		f32 rad = C_PARMS->_928 * mScaleModifier;
		if (rad < 25.0f) {
			rad = 25.0f;
		}

		mMouthSlots.getSlot(i)->mRadius = rad;
	}
}

/*
 * --INFO--
 * Address:	803691C8
 * Size:	00023C
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	mFsm->start(this, JIGUMO_Appear, nullptr);
	EnemyBase::onInit(initArg);
	fadeEfxHamon();
	_2EC = mFaceDir;
	_334 = 0;
	_2F8 = Vector3f(0.0f, 1.0f, 0.0f);
	_304 = _2F8;
	_33C = 0.0f;
	_338 = 0.0f;
	_340 = 1;
	_310.set(1.0f, 0.0f, 0.0f, 0.0f);
	_320            = _310;
	_330            = 0.0f;
	_2BC            = Vector3f(0.0f);
	_344            = 0.0f;
	_2E9            = 0;
	_384            = 0;
	_350            = mHomePosition;
	_35C            = 0;
	mEffectPosition = mPosition;
	_2F4            = 1.0f;
	_34C            = 0;

	mBodyJoint = mModel->getJoint("body_joint1");
	P2ASSERTLINE(151, mBodyJoint); // okay.

	mFsm->start(this, JIGUMO_Appear, nullptr); // we already did this morimura.

	P2ASSERTLINE(158, mModel); // WHY? WE JUST USED THIS. I AM NOT EVEN THIS ANXIOUS AND I HAVE AN ANXIETY DISORDER.
	J3DModelData* data = mModel->mJ3dModel->getModelData();
	mKamuJointIdx      = mModel->getJointIndex("kamu_joint1");
	P2ASSERTLINE(163, mKamuJointIdx); // S I R.

	data->mJointTree.mJoints[mKamuJointIdx]->mFunction = &mouthScaleCallBack;
	_2F0                                               = mScaleModifier * C_PARMS->mGeneral.mPikminDamageRadius();
}

/*
 * --INFO--
 * Address:	80369404
 * Size:	0003E4
 */
Obj::Obj()
    : mHouse(nullptr)
    , _385(1)
    , mFsm(nullptr)
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);

	mEfxAttack = new efx::TJgmAttack(&mPosition);
	P2ASSERTLINE(188, mEfxAttack); // this is ridiculous

	mEfxAttackW = new efx::TJgmAttackW(&mEffectPosition, &mFaceDir);
	P2ASSERTLINE(191, mEfxAttackW); // r i d i c u l o u s

	mEfxBack = new efx::TJgmBack(&mPosition);
	P2ASSERTLINE(194, mEfxBack); // genuinely

	mEfxBackW = new efx::TJgmBackW(&mEffectPosition, &mFaceDir);
	P2ASSERTLINE(197, mEfxBackW); // insane

	mEfxSmoke = new efx::TImoSmoke(&mEffectPosition);
	P2ASSERTLINE(200, mEfxBack); // MORIMURA THIS IS EVEN THE WRONG VARIABLE

	curJ = nullptr;
}

/*
 * --INFO--
 * Address:	80369834
 * Size:	000040
 */
void Obj::doUpdate()
{
	if (!isEvent(0, EB_Bittered)) {
		mFsm->exec(this);
	}
}

/*
 * --INFO--
 * Address:	80369874
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	80369878
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	80369898
 * Size:	00014C
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

	Sys::Sphere collSphere;
	mCollTree->mPart->getSphere(collSphere);
	collSphere.mRadius *= mScaleModifier;
	mBoundingSphere = collSphere;
	mCollTree->update();
	curJ = nullptr;
}

/*
 * --INFO--
 * Address:	803699E4
 * Size:	000028
 */
void Obj::startCarcassMotion() { startMotion(JIGUMOANIM_Carry, nullptr); }

/*
 * --INFO--
 * Address:	80369A0C
 * Size:	0000BC
 */
void Obj::initMouthSlots()
{
	mMouthSlots.alloc(1);
	mMouthSlots.setup(0, mModel, "kamu_joint1");

	// kinda dumb to do this for one mouth slot but go off
	for (int i = 0; i < mMouthSlots.getMax(); i++) {
		f32 rad = C_PARMS->_928 * mScaleModifier;
		if (rad < 25.0f) {
			rad = 25.0f;
		}

		mMouthSlots.getSlot(i)->mRadius = rad;
	}
}

/*
 * --INFO--
 * Address:	80369AC8
 * Size:	00009C
 */
void Obj::doGetLifeGaugeParam(LifeGaugeParam& param)
{
	bool isVisible = false;

	param.mPosition
	    = Vector3f(mPosition.x, C_PARMS->_930 * mScaleModifier + (C_PARMS->mGeneral.mLifeMeterHeight() + mPosition.y), mPosition.z);
	param.mCurHealthPercentage = (mHealth / mMaxHealth);
	param.mRadius              = 10.0f;

	if (isEvent(0, EB_LifegaugeVisible) && isCullingOff()) {
		isVisible = true;
	}

	param.mIsGaugeShown = isVisible;
}

/*
 * --INFO--
 * Address:	80369B64
 * Size:	000108
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

/*
 * --INFO--
 * Address:	80369C6C
 * Size:	0001B4
 */
bool Obj::damageCallBack(Creature* source, f32 damage, CollPart* part)
{
	if (isEvent(0, EB_Bittered)) {
		EnemyBase::damageCallBack(source, damage, part);
		return true;
	}

	if (getStateID() == JIGUMO_Carry || getStateID() == JIGUMO_Return) {
		Sys::Sphere sphere;
		mCollTree->getCollPart('head')->getSphere(sphere);
		Vector3f headPos = sphere.mPosition;

		mCollTree->getCollPart('body')->getSphere(sphere);
		Vector3f bodyPos = sphere.mPosition;

		Vector3f pikiPos = source->getPosition();
		if (headPos.sqrDistance(pikiPos) < bodyPos.sqrDistance(pikiPos)) {
			return false;
		}

		EnemyBase::damageCallBack(source, damage, part);
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	80369E20
 * Size:	0000D0
 */
void Obj::collisionCallback(CollEvent& event)
{
	if (event.mCollidingCreature->isTeki()
	    && static_cast<EnemyBase*>(event.mCollidingCreature)->getEnemyTypeID() == EnemyTypeID::EnemyID_PanHouse) {
		mAcceleration = Vector3f(0.0f);
	}

	EnemyBase::collisionCallback(event);

	if (isEvent(0, EB_Bittered) && event.mCollidingCreature->isPiki()) {
		damageCallBack(event.mCollidingCreature, 1.0f, nullptr);
	}
}

/*
 * --INFO--
 * Address:	80369EF0
 * Size:	000120
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

/*
 * --INFO--
 * Address:	8036A010
 * Size:	000150
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

/*
 * --INFO--
 * Address:	8036A160
 * Size:	00007C
 */
bool Obj::earthquakeCallBack(Creature* source, f32 damage)
{
	if (_385 && getStateID() != JIGUMO_Flick && !_334) {
		return EnemyBase::earthquakeCallBack(source, damage);
	}

	return false;
}

/*
 * --INFO--
 * Address:	8036A1DC
 * Size:	00009C
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

/*
 * --INFO--
 * Address:	8036A278
 * Size:	00007C
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

/*
 * --INFO--
 * Address:	8036A2F4
 * Size:	000174
 */
void Obj::doSimulationGround(f32 step)
{
	if (_334 > 0 && !isEvent(1, EB2_Stunned) && !isEvent(1, EB2_Earthquake)) {
		doSimulationFlying(step);
		return;
	}

	Vector3f targetVel = mTargetVelocity;
	targetVel.y        = mCurrentVelocity.y;
	Vector3f currVel   = mCurrentVelocity;

	Vector3f change  = targetVel - currVel;
	mCurrentVelocity = mCurrentVelocity + (change) * (step / C_PARMS->mCreatureProps.mProps.mAccel());

	f32 vertFactor  = 1.0f;
	f32 horizFactor = C_PARMS->_90C;

	if (getStateID() == JIGUMO_Attack) {
		horizFactor = 0.0f;
		vertFactor  = 2.5f;
	}

	if (_2F8.y != 1.0f) {
		mCurrentVelocity.x -= _2F8.x * horizFactor;
		mCurrentVelocity.z -= _2F8.z * horizFactor;
	}

	bool check = (isEvent(1, EB2_Earthquake) || isEvent(1, EB2_Dropping));

	if (check) {
		vertFactor = 3.0f;
	}

	mCurrentVelocity.y -= vertFactor * (step * _aiConstants->mGravity.mData);
}

/*
 * --INFO--
 * Address:	8036A468
 * Size:	000034
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	EnemyBase::onKill(killArg);
	killNest();
}

/*
 * --INFO--
 * Address:	8036A49C
 * Size:	000008
 */
bool Obj::isLivingThing() { return true; }

/*
 * --INFO--
 * Address:	8036A4A4
 * Size:	00008C
 */
void Obj::doStartMovie()
{
	mEfxAttack->startDemoDrawOff();
	mEfxAttackW->startDemoDrawOff();
	mEfxBack->startDemoDrawOff();
	mEfxBackW->startDemoDrawOff();
	mEfxSmoke->startDemoDrawOff();
}

/*
 * --INFO--
 * Address:	8036A530
 * Size:	00008C
 */
void Obj::doEndMovie()
{
	mEfxAttack->endDemoDrawOn();
	mEfxAttackW->endDemoDrawOn();
	mEfxBack->endDemoDrawOn();
	mEfxBackW->endDemoDrawOn();
	mEfxSmoke->endDemoDrawOn();
}

/*
 * --INFO--
 * Address:	8036A5BC
 * Size:	0000D8
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
		_2F0 = 30.0f * mScaleModifier;
	}
}

/*
 * --INFO--
 * Address:	8036A694
 * Size:	0000E8
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	if (!_384) {
		mCollTree->getCollPart('body')->mSpecialID = '____';
		mCollTree->getCollPart('head')->mSpecialID = '____';
	}

	int stateID = getStateID();
	if (stateID == JIGUMO_Wait || stateID == JIGUMO_Appear || stateID == JIGUMO_Hide || stateID == JIGUMO_Search) {
		disableEvent(0, EB_LifegaugeVisible);
		setAlive(false);
		setAtari(false);
	}
	_2F0 = mScaleModifier * C_PARMS->mGeneral.mPikminDamageRadius();
	effectStart();
}

/*
 * --INFO--
 * Address:	8036A77C
 * Size:	000034
 */
f32 Obj::getGoalDist() { return mPosition.sqrDistance(mGoalPosition); }

/*
 * --INFO--
 * Address:	8036A7B0
 * Size:	0007DC
 */
void Obj::walkFunc()
{
	mEffectPosition = mPosition;
	if (mWaterBox) {
		mEffectPosition.y = *mWaterBox->getSeaHeightPtr();
	}
	f32 val, terrRad;
	f32 walkSpeed = getWalkSpeed();                       // f29
	terrRad       = C_PARMS->mGeneral.mTerritoryRadius(); // f30
	val           = C_PARMS->_904;                        // f31
	f32 rotRate   = C_PARMS->mGeneral.mRotationalAccel(); // f28
	f32 rotSpeed  = C_PARMS->mGeneral.mRotationalSpeed(); // f27

	int stateID = getStateID();
	if (stateID == JIGUMO_Carry || (!C_PARMS->_8FC && (stateID == JIGUMO_Return || stateID == JIGUMO_Miss))) {
		f32 dist   = mGoalPosition.distance(mPosition);
		f32 factor = dist;
		if (dist < 0.0f) {
			factor = 0.0f;
		}
		f32 angle    = (C_PARMS->_908 * factor * 360.0f * (1.0f / terrRad));
		f32 sinTheta = val * (f32)sin(180.0f + angle); // f2

		if (!C_PARMS->_8FB) {
			sinTheta = 0.0f;
		}

		sinTheta *= _344;
		_344 += 0.1f;

		f32 newAng = TORADIANS(sinTheta); // f30

		if (_344 > 1.0f) {
			_344 = 1.0f;
		}

		if (getStateID() == JIGUMO_Carry) {
			if (C_PARMS->_8F9) {
				_338 += 1.0f;
				if (mCurAnim->mIsPlaying && mCurAnim->mType == KEYEVENT_1 && _338 > _33C) {
					_340 = !_340;
					if (_334 > 0) {
						_340 = false;
					}

					if (_340) {
						startMotion(JIGUMOANIM_BackWait, nullptr);
						effectStop();
					} else {
						startMotion(JIGUMOANIM_BackRun, nullptr);
						effectStart();
					}

					_33C = C_PARMS->_914 * randFloat();
					_338 = 0.0f;
				}

				if (_340 && _338 < _33C) {
					walkSpeed *= C_PARMS->_918 * (1.0f - _338 / _33C);
				}
			}
			if (C_PARMS->_8FA) {
				f32 val2 = 0.2f * (f32)mStuckPikminCount;
				if (val2 > 0.8f) {
					val2 = 0.8f;
				}

				walkSpeed *= (1.0f - val2);
			}
		}
		mFaceDir = _2EC;
		_35C++;
		if (_35C > 60) {
			if (mPosition.sqrDistance(_350) < 400.0f) {
				f32 val3 = 2.0f;
				if (_2E8) {
					val3 *= -1.0f;
				}

				mPosition.x -= val3 * pikmin2_sinf(mFaceDir);
				mPosition.z -= val3 * pikmin2_cosf(mFaceDir);
				if ((f32)_334 != 0.0f) {
					_2F4 = 2.0f;
				} else {
					_2F4 = 1.0f;
					_334 = C_PARMS->_910;
				}
			}

			_350 = mPosition;
			_35C = 0;
		}

		turnToTarget2(mGoalPosition, rotRate, rotSpeed);

		f32 dir   = mFaceDir;
		f32 theta = dir + newAng;
		f32 x     = walkSpeed * pikmin2_sinf(theta);
		f32 y     = getTargetVelocity().y;
		f32 z     = walkSpeed * pikmin2_cosf(theta);
		_2EC      = dir;
		if (absF(newAng) > rotSpeed) {
			newAng = (newAng > 0.0f) ? rotSpeed : -rotSpeed;
		}
		f32 val4 = 1.0f;
		if (stateID == JIGUMO_Return || stateID == JIGUMO_Miss) {
			val4 = 0.0f;
		}

		mFaceDir += roundAng(PI * val4 + newAng);
		mRotation.y     = mFaceDir;
		mTargetVelocity = Vector3f(x, y, z);

		if (_340 && C_PARMS->_918 == 0.0f) {
			mTargetVelocity  = Vector3f(0.0f);
			mCurrentVelocity = Vector3f(0.0f);
		}
		return;
	}

	if (stateID == JIGUMO_Attack) {
		f32 x = (f32)sin(getFaceDir());
		f32 y = getTargetVelocity().y;
		f32 z = (f32)cos(getFaceDir());

		mTargetVelocity = Vector3f(walkSpeed * x, y, walkSpeed * z);

		return;
	}

	EnemyFunc::walkToTarget(this, mGoalPosition, walkSpeed, rotRate, rotSpeed);

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

/*
 * --INFO--
 * Address:	8036AF8C
 * Size:	00019C
 */
Vector3f Obj::getOffsetForMapCollision()
{
	if (isConstrained()) {
		return Vector3f(0.0f);
	}

	if (_2E8) {
		return Vector3f(-2.0f * pikmin2_sinf(mFaceDir), 0.0f, -2.0f * pikmin2_cosf(mFaceDir));
	}

	return Vector3f(2.0f * pikmin2_sinf(mFaceDir), 0.0f, 2.0f * pikmin2_cosf(mFaceDir));
}

/*
 * --INFO--
 * Address:	8036B128
 * Size:	000820
 */
void Obj::calcBaseTrMatrix()
{
	if (!C_PARMS->_8F8) {
		Vector3f scale(1.0f);
		mBaseTrMatrix.makeSRT(scale, mRotation, mPosition);
		PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mModel->mJ3dModel->mPosMtx);
		mModel->mJ3dModel->mModelScale = *((Vec*)&mScale);
		return;
	}

	f32 frameLen;
	Vector3f pos;
	f32 rotX;

	rotX     = C_PARMS->mGeneral.mHeightOffsetFromFloor();
	frameLen = sys->getFrameLength();

	if (gameSystem && gameSystem->mIsInCave) {
		f32 minY = mapMgr->getMinY(mPosition);
		if (mPosition.y > 100.0f + minY) {
			_334 = 0;
			_34C = 30;
		}
	}

	if (_34C > 0) {
		_34C--;
		if (_34C < 0) {
			_34C = 0;
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

	if (getStateID() != JIGUMO_Attack && !_34C && (_334 > 0 || info.mWallTriangle)) {
		if (info.mWallTriangle && (info.mReflectPosition.x != 0.0f || info.mReflectPosition.y != 0.0f || info.mReflectPosition.z != 0.0f)) {
			_304 = info.mReflectPosition;
			_334 = C_PARMS->_910;
		}

		if (_2F8.x != _304.x || _2F8.y != _304.y || _2F8.z != _304.z) {
			_330 = 0.0f;
		}

		if (_304.y < C_PARMS->_900) {
			_304.y = C_PARMS->_900;
			_304.normalise();
		}
		_2F8       = _304;
		f32 factor = 1.0f;
		if (isConstrained()) {
			factor = 0.0f;
		}

		mPosition.y += _2F4 * (factor * C_PARMS->_91C);

	} else {
		if (info.mBounceTriangle) {
			_304 = info.mPosition;
		}
		if (isConstrained()) {
			_304 = Vector3f(0.0f, 1.0f, 0.0f);
		}

		if (_2F8.x != _304.x || _2F8.y != _304.y || _2F8.z != _304.z) {
			_330 = 0.0f;
		}
		_2F8 = _304;
		_2F4 *= 0.95f;
	}

	if (_2F4 < 1.1f) {
		_2F4 = 1.0f;
	}

	_334--;
	if (_334 < 0) {
		_334 = 0;
	}

	Vector3f zVec = Vector3f((f32)sin(mFaceDir), 0.0f, (f32)cos(mFaceDir)); // 0x3c

	zVec.normalise();

	Vector3f yVec = _2F8; // 0x30
	Vector3f xVec;        // 0x24
	PSVECCrossProduct((Vec*)&yVec, (Vec*)&zVec, (Vec*)&xVec);

	xVec.normalise();

	PSVECCrossProduct((Vec*)&xVec, (Vec*)&yVec, (Vec*)&zVec);
	zVec.normalise();

	mBaseTrMatrix.setBasis(0, xVec);
	mBaseTrMatrix.setBasis(1, yVec);
	mBaseTrMatrix.setBasis(2, zVec);

	_320.fromMatrixf(mBaseTrMatrix);

	Quat newQuat(_310);

	if (_330 < 1.0f) {
		_330 += 0.1f;
		if (_330 > 1.0f) {
			_330 = 1.0f;
		}

		_310.slerp(_320, _330, _310);

	} else {
		_330 = 0.0f;
		_310 = _320;
	}

	_310.normalise();
	mBaseTrMatrix.makeQ(_310);
	mBaseTrMatrix.setBasis(3, mPosition);
	PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mModel->mJ3dModel->mPosMtx);
	mModel->mJ3dModel->mModelScale = *(Vec*)&mScale;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E8
 */
bool Obj::isUnitePos()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8036B948
 * Size:	000058
 */
void Obj::revisionAnimPos(f32 val)
{
	if (val > 1.0f) {
		mPosition = mHomePosition;
		return;
	}

	Vector3f sep = mHomePosition;
	sep -= _2BC;

	mPosition.x = sep.x * val + _2BC.x;
	mPosition.z = sep.z * val + _2BC.z;
}

/*
 * --INFO--
 * Address:	8036B9A0
 * Size:	000080
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

	return C_PARMS->mGeneral.mMoveSpeed();
}

/*
 * --INFO--
 * Address:	8036BA20
 * Size:	000074
 */
void Obj::velocityControl()
{
	if (getMotionFrame() / getMotionFrameMax() < 0.1f) {
		mCurrentVelocity.x *= 2.0f;
		mCurrentVelocity.z *= 2.0f;
	}
}

/*
 * --INFO--
 * Address:	8036BA94
 * Size:	0000A8
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

/*
 * --INFO--
 * Address:	8036BB3C
 * Size:	0001C0
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
		} else {
			if (mEfxAttack) {
				mEfxAttack->create(&fxArg);
			}
		}
	}

	if (stateID == JIGUMO_Carry) {
		_344 = 0.0f;
		if (mWaterBox) {
			if (mEfxBackW) {
				mEfxBackW->create(&fxArg);
			}
		} else {
			if (mEfxBack) {
				mEfxBack->create(&fxArg);
			}
		}
	}

	if (stateID == JIGUMO_Return) {
		if (!mWaterBox) {
			fxArg.mScale = 1.625f * mScaleModifier;
			mEfxSmoke->create(&fxArg);
		}
	}
}

/*
 * --INFO--
 * Address:	8036BCFC
 * Size:	00008C
 */
void Obj::effectStop()
{
	mEfxAttackW->fade();
	mEfxAttack->fade();
	mEfxBackW->fade();
	mEfxBack->fade();
	mEfxSmoke->fade();
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A8
 */
void Obj::appearEffectStart()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void Obj::appearEffectStop()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8036BD88
 * Size:	000028
 */
void Obj::boundEffect() { createBounceEffect(mPosition, 0.75f); }

/*
 * --INFO--
 * Address:	8036BDB0
 * Size:	000124
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

/*
 * --INFO--
 * Address:	8036BED4
 * Size:	000020
 */
void Obj::killNest()
{
	if (mHouse) {
		mHouse->_2F0 = 1;
	}

	mHouse = nullptr;
}

/*
 * --INFO--
 * Address:	8036BEF4
 * Size:	000194
 */
void Obj::mouthScaleMtxCalc()
{
	Matrixf* mtx  = mModel->mJ3dModel->mMtxBuffer->getWorldMatrix(mKamuJointIdx);
	Vector3f xVec = mtx->getBasis(0);
	xVec.normalise();
	Vector3f yVec = mtx->getBasis(1);
	yVec.normalise();
	Vector3f zVec = mtx->getBasis(2);
	zVec.normalise();

	f32 scale = C_PARMS->_92C;
	if (_2E9) {
		scale = 0.01f;
	}
	Vector3f newXVec = xVec * scale;
	Vector3f newYVec = yVec * scale;
	Vector3f newZVec = zVec * scale;
	mtx->setBasis(0, newXVec);
	mtx->setBasis(1, newYVec);
	mtx->setBasis(2, newZVec);
}

} // namespace Jigumo
} // namespace Game
