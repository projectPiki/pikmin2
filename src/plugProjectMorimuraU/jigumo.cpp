#include "Game/Entities/Jigumo.h"
#include "Game/Entities/Nest.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/generalEnemyMgr.h"
#include "Game/EnemyFunc.h"
#include "Game/Navi.h"
#include "Game/AIConstants.h"
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
	/*
	stwu     r1, -0x20(r1)
	li       r5, 0
	lwz      r6, 0x1e0(r4)
	rlwinm.  r0, r6, 0, 0x15, 0x15
	bne      lbl_8036AFA8
	rlwinm.  r0, r6, 0, 0xd, 0xd
	beq      lbl_8036AFAC

lbl_8036AFA8:
	li       r5, 1

lbl_8036AFAC:
	clrlwi.  r0, r5, 0x18
	beq      lbl_8036AFC8
	lfs      f0, lbl_8051E978@sda21(r2)
	stfs     f0, 0(r3)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	b        lbl_8036B120

lbl_8036AFC8:
	lbz      r0, 0x2e8(r4)
	cmplwi   r0, 0
	beq      lbl_8036B07C
	lfs      f5, 0x1fc(r4)
	lfs      f0, lbl_8051E978@sda21(r2)
	fmr      f1, f5
	fcmpo    cr0, f5, f0
	bge      lbl_8036AFEC
	fneg     f1, f5

lbl_8036AFEC:
	lfs      f2, lbl_8051E9C4@sda21(r2)
	lis      r4, sincosTable___5JMath@ha
	lfs      f0, lbl_8051E978@sda21(r2)
	addi     r5, r4, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	lfs      f3, lbl_8051E9C8@sda21(r2)
	fcmpo    cr0, f5, f0
	fctiwz   f0, f1
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r4, r5, r0
	lfs      f0, 4(r4)
	fmuls    f4, f3, f0
	bge      lbl_8036B04C
	lfs      f0, lbl_8051E9C0@sda21(r2)
	fmuls    f0, f5, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r5, r0
	fneg     f0, f0
	b        lbl_8036B064

lbl_8036B04C:
	fmuls    f0, f5, f2
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r5, r0

lbl_8036B064:
	fmuls    f1, f3, f0
	lfs      f0, lbl_8051E978@sda21(r2)
	stfs     f1, 0(r3)
	stfs     f0, 4(r3)
	stfs     f4, 8(r3)
	b        lbl_8036B120

lbl_8036B07C:
	lfs      f5, 0x1fc(r4)
	lfs      f0, lbl_8051E978@sda21(r2)
	fmr      f1, f5
	fcmpo    cr0, f5, f0
	bge      lbl_8036B094
	fneg     f1, f5

lbl_8036B094:
	lfs      f2, lbl_8051E9C4@sda21(r2)
	lis      r4, sincosTable___5JMath@ha
	lfs      f0, lbl_8051E978@sda21(r2)
	addi     r5, r4, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	lfs      f3, lbl_8051E984@sda21(r2)
	fcmpo    cr0, f5, f0
	fctiwz   f0, f1
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r4, r5, r0
	lfs      f0, 4(r4)
	fmuls    f4, f3, f0
	bge      lbl_8036B0F4
	lfs      f0, lbl_8051E9C0@sda21(r2)
	fmuls    f0, f5, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r5, r0
	fneg     f0, f0
	b        lbl_8036B10C

lbl_8036B0F4:
	fmuls    f0, f5, f2
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r5, r0

lbl_8036B10C:
	fmuls    f1, f3, f0
	lfs      f0, lbl_8051E978@sda21(r2)
	stfs     f1, 0(r3)
	stfs     f0, 4(r3)
	stfs     f4, 8(r3)

lbl_8036B120:
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8036B128
 * Size:	000820
 */
void Obj::calcBaseTrMatrix()
{
	/*
	stwu     r1, -0x160(r1)
	mflr     r0
	stw      r0, 0x164(r1)
	stfd     f31, 0x150(r1)
	psq_st   f31, 344(r1), 0, qr0
	stfd     f30, 0x140(r1)
	psq_st   f30, 328(r1), 0, qr0
	stfd     f29, 0x130(r1)
	psq_st   f29, 312(r1), 0, qr0
	stfd     f28, 0x120(r1)
	psq_st   f28, 296(r1), 0, qr0
	stfd     f27, 0x110(r1)
	psq_st   f27, 280(r1), 0, qr0
	stw      r31, 0x10c(r1)
	mr       r31, r3
	lwz      r4, 0xc0(r3)
	lbz      r0, 0x8f8(r4)
	cmplwi   r0, 0
	bne      lbl_8036B1D0
	lfs      f0, lbl_8051E97C@sda21(r2)
	addi     r3, r31, 0x138
	addi     r4, r1, 0x58
	addi     r5, r31, 0x1a4
	stfs     f0, 0x58(r1)
	addi     r6, r31, 0x18c
	stfs     f0, 0x5c(r1)
	stfs     f0, 0x60(r1)
	bl       "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"
	lwz      r4, 0x174(r31)
	addi     r3, r31, 0x138
	lwz      r4, 8(r4)
	addi     r4, r4, 0x24
	bl       PSMTXCopy
	lwz      r3, 0x174(r31)
	lfs      f0, 0x168(r31)
	lwz      r3, 8(r3)
	stfs     f0, 0x18(r3)
	lfs      f0, 0x16c(r31)
	stfs     f0, 0x1c(r3)
	lfs      f0, 0x170(r31)
	stfs     f0, 0x20(r3)
	b        lbl_8036B90C

lbl_8036B1D0:
	lwz      r5, gameSystem__4Game@sda21(r13)
	lwz      r3, sys@sda21(r13)
	cmplwi   r5, 0
	lfs      f27, 0x1a4(r4)
	lfs      f31, 0x54(r3)
	beq      lbl_8036B230
	lbz      r0, 0x48(r5)
	cmplwi   r0, 0
	beq      lbl_8036B230
	lwz      r3, mapMgr__4Game@sda21(r13)
	addi     r4, r31, 0x18c
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_8051E9CC@sda21(r2)
	lfs      f2, 0x190(r31)
	fadds    f0, f0, f1
	fcmpo    cr0, f2, f0
	ble      lbl_8036B230
	li       r3, 0
	li       r0, 0x1e
	stw      r3, 0x334(r31)
	stw      r0, 0x34c(r31)

lbl_8036B230:
	lwz      r3, 0x34c(r31)
	cmpwi    r3, 0
	ble      lbl_8036B258
	addi     r0, r3, -1
	stw      r0, 0x34c(r31)
	lwz      r0, 0x34c(r31)
	cmpwi    r0, 0
	bge      lbl_8036B258
	li       r0, 0
	stw      r0, 0x34c(r31)

lbl_8036B258:
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lfs      f30, 0x18c(r31)
	lwz      r12, 0x224(r12)
	lfs      f29, 0x190(r31)
	lfs      f28, 0x194(r31)
	mtctr    r12
	bctrl
	lfs      f0, 8(r1)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	lfs      f3, lbl_8051E978@sda21(r2)
	stfs     f0, 0x240(r31)
	addi     r7, r1, 0x48
	lfs      f0, lbl_8051E9D0@sda21(r2)
	addi     r6, r31, 0x1c8
	lfs      f2, 0xc(r1)
	li       r5, 0
	li       r0, -1
	fmr      f1, f31
	stfs     f2, 0x244(r31)
	addi     r4, r1, 0x64
	lfs      f2, 0x10(r1)
	stfs     f2, 0x248(r31)
	lfs      f2, 0x244(r31)
	lfs      f5, 0x240(r31)
	fadds    f29, f29, f2
	lfs      f4, 0x248(r31)
	fadds    f30, f30, f5
	lfs      f2, 0x800(r3)
	fadds    f28, f28, f4
	stfs     f27, 0x54(r1)
	fadds    f29, f29, f27
	stfs     f30, 0x48(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f28, 0x50(r1)
	stfs     f29, 0x4c(r1)
	lwz      r8, 0xc0(r31)
	lfs      f4, 0x4c(r8)
	stw      r7, 0x64(r1)
	stw      r6, 0x68(r1)
	stfs     f4, 0x6c(r1)
	stfs     f3, 0x70(r1)
	stw      r5, 0x74(r1)
	stw      r5, 0xa8(r1)
	stb      r5, 0xd8(r1)
	stb      r5, 0x7d(r1)
	stb      r5, 0x7c(r1)
	stw      r5, 0xac(r1)
	stw      r5, 0x78(r1)
	stb      r5, 0xf4(r1)
	stw      r5, 0xf8(r1)
	stfs     f2, 0x90(r1)
	stfs     f0, 0x94(r1)
	stw      r0, 0xfc(r1)
	stw      r5, 0xb0(r1)
	stb      r5, 0x7e(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 4
	beq      lbl_8036B510
	lwz      r0, 0x34c(r31)
	cmpwi    r0, 0
	bne      lbl_8036B510
	lwz      r0, 0x334(r31)
	cmpwi    r0, 0
	bgt      lbl_8036B384
	lwz      r0, 0xac(r1)
	cmplwi   r0, 0
	beq      lbl_8036B510

lbl_8036B384:
	lwz      r0, 0xac(r1)
	cmplwi   r0, 0
	beq      lbl_8036B3D8
	lfs      f1, lbl_8051E978@sda21(r2)
	lfs      f2, 0xc0(r1)
	fcmpu    cr0, f1, f2
	bne      lbl_8036B3B8
	lfs      f0, 0xc4(r1)
	fcmpu    cr0, f1, f0
	bne      lbl_8036B3B8
	lfs      f0, 0xc8(r1)
	fcmpu    cr0, f1, f0
	beq      lbl_8036B3D8

lbl_8036B3B8:
	stfs     f2, 0x304(r31)
	lfs      f0, 0xc4(r1)
	stfs     f0, 0x308(r31)
	lfs      f0, 0xc8(r1)
	stfs     f0, 0x30c(r31)
	lwz      r3, 0xc0(r31)
	lbz      r0, 0x910(r3)
	stw      r0, 0x334(r31)

lbl_8036B3D8:
	lfs      f1, 0x2f8(r31)
	lfs      f0, 0x304(r31)
	fcmpu    cr0, f1, f0
	bne      lbl_8036B408
	lfs      f1, 0x2fc(r31)
	lfs      f0, 0x308(r31)
	fcmpu    cr0, f1, f0
	bne      lbl_8036B408
	lfs      f1, 0x300(r31)
	lfs      f0, 0x30c(r31)
	fcmpu    cr0, f1, f0
	beq      lbl_8036B410

lbl_8036B408:
	lfs      f0, lbl_8051E978@sda21(r2)
	stfs     f0, 0x330(r31)

lbl_8036B410:
	lwz      r3, 0xc0(r31)
	lfs      f0, 0x308(r31)
	lfs      f1, 0x900(r3)
	fcmpo    cr0, f0, f1
	bge      lbl_8036B4AC
	stfs     f1, 0x308(r31)
	lfs      f1, lbl_8051E978@sda21(r2)
	lfs      f3, 0x304(r31)
	lfs      f2, 0x308(r31)
	fmuls    f0, f3, f3
	lfs      f4, 0x30c(r31)
	fmuls    f2, f2, f2
	fmuls    f4, f4, f4
	fadds    f0, f0, f2
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8036B470
	fmadds   f0, f3, f3, f2
	fadds    f2, f4, f0
	fcmpo    cr0, f2, f1
	ble      lbl_8036B474
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_8036B474

lbl_8036B470:
	fmr      f2, f1

lbl_8036B474:
	lfs      f0, lbl_8051E978@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_8036B4AC
	lfs      f1, lbl_8051E97C@sda21(r2)
	lfs      f0, 0x304(r31)
	fdivs    f1, f1, f2
	fmuls    f0, f0, f1
	stfs     f0, 0x304(r31)
	lfs      f0, 0x308(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x308(r31)
	lfs      f0, 0x30c(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x30c(r31)

lbl_8036B4AC:
	lfs      f0, 0x304(r31)
	li       r3, 0
	lfs      f3, lbl_8051E97C@sda21(r2)
	stfs     f0, 0x2f8(r31)
	lfs      f0, 0x308(r31)
	stfs     f0, 0x2fc(r31)
	lfs      f0, 0x30c(r31)
	stfs     f0, 0x300(r31)
	lwz      r4, 0x1e0(r31)
	rlwinm.  r0, r4, 0, 0x15, 0x15
	bne      lbl_8036B4E0
	rlwinm.  r0, r4, 0, 0xd, 0xd
	beq      lbl_8036B4E4

lbl_8036B4E0:
	li       r3, 1

lbl_8036B4E4:
	clrlwi.  r0, r3, 0x18
	beq      lbl_8036B4F0
	lfs      f3, lbl_8051E978@sda21(r2)

lbl_8036B4F0:
	lwz      r3, 0xc0(r31)
	lfs      f2, 0x2f4(r31)
	lfs      f1, 0x91c(r3)
	lfs      f0, 0x190(r31)
	fmuls    f1, f3, f1
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x190(r31)
	b        lbl_8036B5CC

lbl_8036B510:
	lwz      r0, 0xa8(r1)
	cmplwi   r0, 0
	beq      lbl_8036B534
	lfs      f0, 0xb4(r1)
	stfs     f0, 0x304(r31)
	lfs      f0, 0xb8(r1)
	stfs     f0, 0x308(r31)
	lfs      f0, 0xbc(r1)
	stfs     f0, 0x30c(r31)

lbl_8036B534:
	lwz      r4, 0x1e0(r31)
	li       r3, 0
	rlwinm.  r0, r4, 0, 0x15, 0x15
	bne      lbl_8036B54C
	rlwinm.  r0, r4, 0, 0xd, 0xd
	beq      lbl_8036B550

lbl_8036B54C:
	li       r3, 1

lbl_8036B550:
	clrlwi.  r0, r3, 0x18
	beq      lbl_8036B56C
	lfs      f1, lbl_8051E978@sda21(r2)
	lfs      f0, lbl_8051E97C@sda21(r2)
	stfs     f1, 0x304(r31)
	stfs     f0, 0x308(r31)
	stfs     f1, 0x30c(r31)

lbl_8036B56C:
	lfs      f1, 0x2f8(r31)
	lfs      f0, 0x304(r31)
	fcmpu    cr0, f1, f0
	bne      lbl_8036B59C
	lfs      f1, 0x2fc(r31)
	lfs      f0, 0x308(r31)
	fcmpu    cr0, f1, f0
	bne      lbl_8036B59C
	lfs      f1, 0x300(r31)
	lfs      f0, 0x30c(r31)
	fcmpu    cr0, f1, f0
	beq      lbl_8036B5A4

lbl_8036B59C:
	lfs      f0, lbl_8051E978@sda21(r2)
	stfs     f0, 0x330(r31)

lbl_8036B5A4:
	lfs      f1, 0x304(r31)
	lfs      f0, lbl_8051E9D4@sda21(r2)
	stfs     f1, 0x2f8(r31)
	lfs      f1, 0x308(r31)
	stfs     f1, 0x2fc(r31)
	lfs      f1, 0x30c(r31)
	stfs     f1, 0x300(r31)
	lfs      f1, 0x2f4(r31)
	fmuls    f0, f1, f0
	stfs     f0, 0x2f4(r31)

lbl_8036B5CC:
	lfs      f1, 0x2f4(r31)
	lfs      f0, lbl_8051E9D8@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_8036B5E4
	lfs      f0, lbl_8051E97C@sda21(r2)
	stfs     f0, 0x2f4(r31)

lbl_8036B5E4:
	lwz      r3, 0x334(r31)
	addi     r0, r3, -1
	stw      r0, 0x334(r31)
	lwz      r0, 0x334(r31)
	cmpwi    r0, 0
	bge      lbl_8036B604
	li       r0, 0
	stw      r0, 0x334(r31)

lbl_8036B604:
	lfs      f1, 0x1fc(r31)
	bl       cos
	frsp     f31, f1
	lfs      f1, 0x1fc(r31)
	bl       sin
	frsp     f2, f1
	lfs      f1, lbl_8051E978@sda21(r2)
	fmuls    f4, f31, f31
	stfs     f31, 0x44(r1)
	fmuls    f3, f1, f1
	fmuls    f0, f2, f2
	stfs     f2, 0x3c(r1)
	fadds    f0, f0, f3
	stfs     f1, 0x40(r1)
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8036B664
	fmadds   f0, f2, f2, f3
	fadds    f3, f4, f0
	fcmpo    cr0, f3, f1
	ble      lbl_8036B668
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_8036B668

lbl_8036B664:
	fmr      f3, f1

lbl_8036B668:
	lfs      f0, lbl_8051E978@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_8036B6A0
	lfs      f0, lbl_8051E97C@sda21(r2)
	lfs      f2, 0x3c(r1)
	fdivs    f3, f0, f3
	lfs      f1, 0x40(r1)
	lfs      f0, 0x44(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x3c(r1)
	stfs     f1, 0x40(r1)
	stfs     f0, 0x44(r1)

lbl_8036B6A0:
	lfs      f0, 0x2f8(r31)
	addi     r3, r1, 0x30
	addi     r4, r1, 0x3c
	addi     r5, r1, 0x24
	stfs     f0, 0x30(r1)
	lfs      f0, 0x2fc(r31)
	stfs     f0, 0x34(r1)
	lfs      f0, 0x300(r31)
	stfs     f0, 0x38(r1)
	bl       PSVECCrossProduct
	lfs      f2, 0x24(r1)
	lfs      f1, 0x28(r1)
	fmuls    f0, f2, f2
	lfs      f3, 0x2c(r1)
	fmuls    f4, f1, f1
	lfs      f1, lbl_8051E978@sda21(r2)
	fmuls    f3, f3, f3
	fadds    f0, f0, f4
	fadds    f0, f3, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8036B710
	fmadds   f0, f2, f2, f4
	fadds    f3, f3, f0
	fcmpo    cr0, f3, f1
	ble      lbl_8036B714
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_8036B714

lbl_8036B710:
	fmr      f3, f1

lbl_8036B714:
	lfs      f0, lbl_8051E978@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_8036B74C
	lfs      f0, lbl_8051E97C@sda21(r2)
	lfs      f2, 0x24(r1)
	fdivs    f3, f0, f3
	lfs      f1, 0x28(r1)
	lfs      f0, 0x2c(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x24(r1)
	stfs     f1, 0x28(r1)
	stfs     f0, 0x2c(r1)

lbl_8036B74C:
	addi     r3, r1, 0x24
	addi     r4, r1, 0x30
	addi     r5, r1, 0x3c
	bl       PSVECCrossProduct
	lfs      f2, 0x3c(r1)
	lfs      f1, 0x40(r1)
	fmuls    f0, f2, f2
	lfs      f3, 0x44(r1)
	fmuls    f4, f1, f1
	lfs      f1, lbl_8051E978@sda21(r2)
	fmuls    f3, f3, f3
	fadds    f0, f0, f4
	fadds    f0, f3, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8036B7A4
	fmadds   f0, f2, f2, f4
	fadds    f3, f3, f0
	fcmpo    cr0, f3, f1
	ble      lbl_8036B7A8
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_8036B7A8

lbl_8036B7A4:
	fmr      f3, f1

lbl_8036B7A8:
	lfs      f0, lbl_8051E978@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_8036B7E0
	lfs      f0, lbl_8051E97C@sda21(r2)
	lfs      f2, 0x3c(r1)
	fdivs    f3, f0, f3
	lfs      f1, 0x40(r1)
	lfs      f0, 0x44(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x3c(r1)
	stfs     f1, 0x40(r1)
	stfs     f0, 0x44(r1)

lbl_8036B7E0:
	lfs      f0, 0x24(r1)
	addi     r3, r31, 0x320
	addi     r4, r31, 0x138
	stfs     f0, 0x138(r31)
	lfs      f0, 0x28(r1)
	stfs     f0, 0x148(r31)
	lfs      f0, 0x2c(r1)
	stfs     f0, 0x158(r31)
	lfs      f0, 0x30(r1)
	stfs     f0, 0x13c(r31)
	lfs      f0, 0x34(r1)
	stfs     f0, 0x14c(r31)
	lfs      f0, 0x38(r1)
	stfs     f0, 0x15c(r31)
	lfs      f0, 0x3c(r1)
	stfs     f0, 0x140(r31)
	lfs      f0, 0x40(r1)
	stfs     f0, 0x150(r31)
	lfs      f0, 0x44(r1)
	stfs     f0, 0x160(r31)
	bl       fromMatrixf__4QuatFR7Matrixf
	addi     r3, r1, 0x14
	addi     r4, r31, 0x310
	bl       __ct__4QuatFR4Quat
	lfs      f2, 0x330(r31)
	lfs      f1, lbl_8051E97C@sda21(r2)
	fcmpo    cr0, f2, f1
	bge      lbl_8036B884
	lfs      f0, lbl_8051E9AC@sda21(r2)
	fadds    f0, f2, f0
	stfs     f0, 0x330(r31)
	lfs      f0, 0x330(r31)
	fcmpo    cr0, f0, f1
	ble      lbl_8036B86C
	stfs     f1, 0x330(r31)

lbl_8036B86C:
	addi     r3, r31, 0x310
	lfs      f1, 0x330(r31)
	mr       r5, r3
	addi     r4, r31, 0x320
	bl       slerp__4QuatFR4QuatfR4Quat
	b        lbl_8036B8AC

lbl_8036B884:
	lfs      f0, lbl_8051E978@sda21(r2)
	stfs     f0, 0x330(r31)
	lfs      f0, 0x320(r31)
	stfs     f0, 0x310(r31)
	lfs      f0, 0x324(r31)
	stfs     f0, 0x314(r31)
	lfs      f0, 0x328(r31)
	stfs     f0, 0x318(r31)
	lfs      f0, 0x32c(r31)
	stfs     f0, 0x31c(r31)

lbl_8036B8AC:
	addi     r3, r31, 0x310
	bl       normalise__4QuatFv
	addi     r3, r31, 0x138
	addi     r4, r31, 0x310
	bl       makeQ__7MatrixfFR4Quat
	lfs      f0, 0x18c(r31)
	addi     r3, r31, 0x138
	stfs     f0, 0x144(r31)
	lfs      f0, 0x190(r31)
	stfs     f0, 0x154(r31)
	lfs      f0, 0x194(r31)
	stfs     f0, 0x164(r31)
	lwz      r4, 0x174(r31)
	lwz      r4, 8(r4)
	addi     r4, r4, 0x24
	bl       PSMTXCopy
	lwz      r3, 0x174(r31)
	lfs      f0, 0x168(r31)
	lwz      r3, 8(r3)
	stfs     f0, 0x18(r3)
	lfs      f0, 0x16c(r31)
	stfs     f0, 0x1c(r3)
	lfs      f0, 0x170(r31)
	stfs     f0, 0x20(r3)

lbl_8036B90C:
	psq_l    f31, 344(r1), 0, qr0
	lfd      f31, 0x150(r1)
	psq_l    f30, 328(r1), 0, qr0
	lfd      f30, 0x140(r1)
	psq_l    f29, 312(r1), 0, qr0
	lfd      f29, 0x130(r1)
	psq_l    f28, 296(r1), 0, qr0
	lfd      f28, 0x120(r1)
	psq_l    f27, 280(r1), 0, qr0
	lfd      f27, 0x110(r1)
	lwz      r0, 0x164(r1)
	lwz      r31, 0x10c(r1)
	mtlr     r0
	addi     r1, r1, 0x160
	blr
	*/
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
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x64(r1)
	stw      r31, 0x5c(r1)
	mr       r31, r3
	addi     r3, r31, 0x2d8
	bl       getSlot__10MouthSlotsFi
	lwz      r4, 0x64(r3)
	cmplwi   r4, 0
	beq      lbl_8036BEC0
	lis      r3, __vt__Q23efx5TBase@ha
	li       r5, 0
	addi     r0, r3, __vt__Q23efx5TBase@l
	li       r7, 0x159
	lis      r3, __vt__Q23efx8TSimple2@ha
	stw      r0, 0x2c(r1)
	addi     r0, r3, __vt__Q23efx8TSimple2@l
	li       r6, 0x15a
	lis      r3, __vt__Q23efx10TEnemyDive@ha
	stw      r0, 0x2c(r1)
	addi     r0, r3, __vt__Q23efx10TEnemyDive@l
	sth      r7, 0x30(r1)
	addi     r3, r1, 0x14
	sth      r6, 0x32(r1)
	stw      r5, 0x34(r1)
	stw      r5, 0x38(r1)
	stw      r0, 0x2c(r1)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x280(r31)
	lfs      f2, 0x14(r1)
	lwz      r12, 0(r3)
	lfs      f1, 0x18(r1)
	lfs      f0, 0x1c(r1)
	lwz      r12, 0x14(r12)
	stfs     f2, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	mtctr    r12
	bctrl
	lfs      f0, 0(r3)
	lis      r4, __vt__Q23efx3Arg@ha
	lwz      r8, 0x20(r1)
	lis      r3, __vt__Q23efx8ArgScale@ha
	stfs     f0, 0x24(r1)
	addi     r5, r4, __vt__Q23efx3Arg@l
	lfs      f3, 0x1f8(r31)
	addi     r0, r3, __vt__Q23efx8ArgScale@l
	lwz      r7, 0x24(r1)
	addi     r3, r1, 0x2c
	lwz      r6, 0x28(r1)
	addi     r4, r1, 0x3c
	stw      r8, 8(r1)
	stw      r7, 0xc(r1)
	lfs      f2, 8(r1)
	stw      r6, 0x10(r1)
	lfs      f1, 0xc(r1)
	stw      r5, 0x3c(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x40(r1)
	stfs     f1, 0x44(r1)
	stfs     f0, 0x48(r1)
	stw      r0, 0x3c(r1)
	stfs     f3, 0x4c(r1)
	bl       create__Q23efx10TEnemyDiveFPQ23efx3Arg

lbl_8036BEC0:
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
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
	/*
	lwz      r4, 0x174(r3)
	lhz      r0, 0x360(r3)
	lwz      r4, 8(r4)
	mulli    r0, r0, 0x30
	lfs      f3, lbl_8051E978@sda21(r2)
	lwz      r4, 0x84(r4)
	lwz      r4, 0xc(r4)
	add      r4, r4, r0
	lfs      f1, 0x10(r4)
	lfs      f2, 0x20(r4)
	fmuls    f4, f1, f1
	lfs      f0, 0(r4)
	fmuls    f5, f2, f2
	fmadds   f4, f0, f0, f4
	fadds    f4, f5, f4
	fcmpo    cr0, f4, f3
	ble      lbl_8036BF48
	ble      lbl_8036BF4C
	frsqrte  f3, f4
	fmuls    f4, f3, f4
	b        lbl_8036BF4C

lbl_8036BF48:
	fmr      f4, f3

lbl_8036BF4C:
	lfs      f3, lbl_8051E978@sda21(r2)
	fcmpo    cr0, f4, f3
	ble      lbl_8036BF6C
	lfs      f3, lbl_8051E97C@sda21(r2)
	fdivs    f3, f3, f4
	fmuls    f0, f0, f3
	fmuls    f1, f1, f3
	fmuls    f2, f2, f3

lbl_8036BF6C:
	lfs      f3, 0x14(r4)
	lfs      f4, 0x24(r4)
	fmuls    f6, f3, f3
	lfs      f7, 4(r4)
	fmuls    f8, f4, f4
	lfs      f5, lbl_8051E978@sda21(r2)
	fmadds   f6, f7, f7, f6
	fadds    f6, f8, f6
	fcmpo    cr0, f6, f5
	ble      lbl_8036BFA4
	ble      lbl_8036BFA8
	frsqrte  f5, f6
	fmuls    f6, f5, f6
	b        lbl_8036BFA8

lbl_8036BFA4:
	fmr      f6, f5

lbl_8036BFA8:
	lfs      f5, lbl_8051E978@sda21(r2)
	fcmpo    cr0, f6, f5
	ble      lbl_8036BFC8
	lfs      f5, lbl_8051E97C@sda21(r2)
	fdivs    f5, f5, f6
	fmuls    f7, f7, f5
	fmuls    f3, f3, f5
	fmuls    f4, f4, f5

lbl_8036BFC8:
	lfs      f9, 0x18(r4)
	lfs      f10, 0x28(r4)
	fmuls    f6, f9, f9
	lfs      f8, 8(r4)
	fmuls    f11, f10, f10
	lfs      f5, lbl_8051E978@sda21(r2)
	fmadds   f6, f8, f8, f6
	fadds    f6, f11, f6
	fcmpo    cr0, f6, f5
	ble      lbl_8036C000
	ble      lbl_8036C004
	frsqrte  f5, f6
	fmuls    f6, f5, f6
	b        lbl_8036C004

lbl_8036C000:
	fmr      f6, f5

lbl_8036C004:
	lfs      f5, lbl_8051E978@sda21(r2)
	fcmpo    cr0, f6, f5
	ble      lbl_8036C024
	lfs      f5, lbl_8051E97C@sda21(r2)
	fdivs    f5, f5, f6
	fmuls    f8, f8, f5
	fmuls    f9, f9, f5
	fmuls    f10, f10, f5

lbl_8036C024:
	lbz      r0, 0x2e9(r3)
	lwz      r3, 0xc0(r3)
	cmplwi   r0, 0
	lfs      f11, 0x92c(r3)
	beq      lbl_8036C03C
	lfs      f11, lbl_8051E9E4@sda21(r2)

lbl_8036C03C:
	fmuls    f5, f0, f11
	fmuls    f1, f1, f11
	fmuls    f0, f2, f11
	stfs     f5, 0(r4)
	fmuls    f6, f7, f11
	fmuls    f5, f3, f11
	stfs     f1, 0x10(r4)
	fmuls    f3, f4, f11
	fmuls    f2, f8, f11
	stfs     f0, 0x20(r4)
	fmuls    f1, f9, f11
	fmuls    f0, f10, f11
	stfs     f6, 4(r4)
	stfs     f5, 0x14(r4)
	stfs     f3, 0x24(r4)
	stfs     f2, 8(r4)
	stfs     f1, 0x18(r4)
	stfs     f0, 0x28(r4)
	blr
	*/
}

} // namespace Jigumo
} // namespace Game
