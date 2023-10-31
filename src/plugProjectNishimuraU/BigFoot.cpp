#include "Game/Entities/BigFoot.h"
#include "Game/EnemyFunc.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/IKSystemBase.h"
#include "Game/ConditionNotStick.h"
#include "Game/Entities/TamagoMushi.h"
#include "Game/generalEnemyMgr.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "PSM/EnemyBoss.h"
#include "PSSystem/PSMainSide_ObjSound.h"
#include "PS.h"
#include "nans.h"
#include "Dolphin/rand.h"

namespace Game {
namespace BigFoot {

/*
 * --INFO--
 * Address:	802C7EF0
 * Size:	000024
 */
void BigFootGroundCallBack::invokeOnGround(int footIdx, WaterBox* wbox) { mObj->createOnGroundEffect(footIdx, wbox); }

/*
 * --INFO--
 * Address:	802C7F14
 * Size:	000024
 */
void BigFootGroundCallBack::invokeOffGround(int footIdx, WaterBox* wbox) { mObj->createOffGroundEffect(footIdx, wbox); }

/*
 * --INFO--
 * Address:	802C7F38
 * Size:	00016C
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);

	createIKSystem();
	createShadowSystem();
	createEffect();
	createMaterialAnimation();
}

/*
 * --INFO--
 * Address:	802C80A4
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	802C80A8
 * Size:	000148
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	EnemyBase::hardConstraintOn();
	disableEvent(0, EB_PlatformCollEnabled);
	disableEvent(0, EB_LeaveCarcass);
	mStateTimer     = 0.0f;
	mNextState      = BIGFOOT_NULL;
	mTargetPosition = mHomePosition;
	mShadowScale    = 0.0f;
	_2DC            = false;
	mIsSmoking      = false;
	resetFlickWalkTimeMax();
	mIsEnraged = false;
	setupIKSystem();
	setupShadowSystem();
	setupCollision();
	setupEffect();
	startFurEffect();
	resetBossAppearBGM();
	shadowMgr->delShadow(this);
	startMaterialAnimation();
	mFsm->start(this, BIGFOOT_Stay, nullptr);
	if (gameSystem && gameSystem->isZukanMode()) {
		mFsm->transit(this, BIGFOOT_Land, nullptr); // land immediately if in piklopedia mode
	} else {
		doAnimationCullingOff();
	}
}

/*
 * --INFO--
 * Address:	802C81F0
 * Size:	000044
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	finishFurEffect();
	EnemyBase::onKill(killArg);
}

/*
 * --INFO--
 * Address:	802C8234
 * Size:	000050
 */
void Obj::doUpdate()
{
	mFsm->exec(this);
	updatePinchLife();
	updateIKSystem();
}

/*
 * --INFO--
 * Address:	802C8284
 * Size:	000034
 */
void Obj::doUpdateCommon()
{
	EnemyBase::doUpdateCommon();
	updateBossBGM();
}

/*
 * --INFO--
 * Address:	802C82B8
 * Size:	000098
 */
void Obj::doAnimationCullingOff()
{
	mCurAnim->mIsPlaying = false;
	doAnimationUpdateAnimator();
	doAnimationIKSystem();

	PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mModel->mJ3dModel->mPosMtx);
	mModel->mJ3dModel->calc();

	mCollTree->update();

	doAnimationShadowSystem();
	updateMaterialAnimation();
	finishAnimationIKSystem();
}

/*
 * --INFO--
 * Address:	802C8350
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	802C8354
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	802C8374
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
 * Address:	802C83C0
 * Size:	00003C
 */
void Obj::getShadowParam(ShadowParam& param)
{
	param.mPosition                 = mPosition;
	param.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	param.mBoundingSphere.mRadius   = 0.1f;
	param.mSize                     = 0.1f;
}

/*
 * --INFO--
 * Address:	802C83FC
 * Size:	000050
 */
bool Obj::needShadow()
{
	if (EnemyBase::needShadow()) {
		return true;
	} else {
		return (u8)(getStateID() == 2);
	}
}

/*
 * --INFO--
 * Address:	802C844C
 * Size:	00009C
 */
bool Obj::damageCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	if (creature && collpart && creature->isPiki() && creature->isStickTo()) {
		addDamage(damage, 1.0f);
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	802C84E8
 * Size:	0001AC
 */
void Obj::collisionCallback(CollEvent& event)
{
	if (!isEvent(0, EB_Bittered)) {
		Creature* creature = event.mCollidingCreature;
		if (creature && event.mCollisionObj && creature->isAlive() && creature->mBounceTriangle) {
			if (creature->isNavi() || creature->isPiki()) {
				if (isCollisionCheck(event.mHitPart)) {
					InteractPress press(this, C_PARMS->mGeneral.mAttackDamage.mValue, nullptr);
					creature->stimulate(press);
				}
			} else if (creature->isTeki() && isCollisionCheck(event.mHitPart)) {
				InteractAttack attack(this, 500.0f, event.mCollisionObj);
				creature->stimulate(attack);
			}
		}
	}

	setCollEvent(event);
}

/*
 * --INFO--
 * Address:	802C8694
 * Size:	000044
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	finishPinchJointEffect();
	finishFurEffect();
	startStoneStateBossAttackLoopBGM();
}

/*
 * --INFO--
 * Address:	802C86D8
 * Size:	00006C
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	EnemyFunc::flickStickPikmin(this, 1.0f, 10.0f, 0.0f, FLICK_BACKWARD_ANGLE, nullptr);
	if (mIsSmoking) {
		startPinchJointEffect();
	}

	startFurEffect();
	finishStoneStateBossAttackLoopBGM();
}

/*
 * --INFO--
 * Address:	802C8744
 * Size:	000020
 */
void Obj::doStartMovie() { effectDrawOff(); }

/*
 * --INFO--
 * Address:	802C8764
 * Size:	000020
 */
void Obj::doEndMovie() { effectDrawOn(); }

/*
 * --INFO--
 * Address:	802C8784
 * Size:	000060
 */
void Obj::getThrowupItemPosition(Vector3f* position)
{
	Matrixf* mat = mModel->getJoint("kosi")->getWorldMatrix();
	*position    = mat->getBasis(3);
	position->y -= 100.0f;
}

/*
 * --INFO--
 * Address:	802C87E4
 * Size:	000014
 */
void Obj::getThrowupItemVelocity(Vector3f* velocity)
{
	velocity->z = 0.0f;
	velocity->y = 0.0f;
	velocity->x = 0.0f;
}

/*
 * --INFO--
 * Address:	802C87F8
 * Size:	00008C
 */
void Obj::resetFlickWalkTimeMax()
{
	f32 travelTime = C_PROPERPARMS.mNormalTravelTime();
	f32 halfTime   = C_PROPERPARMS.mNormalTravelTime() * 0.5f;

	mFlickWalkTimeMax = halfTime + randWeightFloat(travelTime);
}

/*
 * --INFO--
 * Address:	802C8884
 * Size:	00008C
 */
void Obj::setFlickWalkTimeMax()
{
	f32 travelTime = C_PROPERPARMS.mPostShakeTravelTime();
	f32 halfTime   = C_PROPERPARMS.mPostShakeTravelTime() * 0.5f;

	mFlickWalkTimeMax = halfTime + randWeightFloat(travelTime);
}

/*
 * --INFO--
 * Address:	802C8910
 * Size:	0003F0
 */
void Obj::getTargetPosition()
{
	if (sqrDistanceXZ(mPosition, mHomePosition) < SQUARE(C_PARMS->mGeneral.mTerritoryRadius())) {
		if (mIsEnraged) {
			f32 adjustAngle = (randWeightFloat(2.0f * mIkSystemParms->_34) - mIkSystemParms->_34) * DEG2RAD * PI;
			f32 randAngle   = mFaceDir + adjustAngle;
			// different stomping behavior if enraged
			mTargetPosition.x = C_PROPERPARMS.mMovementOffset() * sinf(randAngle) + mPosition.x;
			mTargetPosition.y = mPosition.y;
			mTargetPosition.z = C_PROPERPARMS.mMovementOffset() * cosf(randAngle) + mPosition.z;

		} else {
			ConditionNotStickClient condition(this);
			Piki* piki = EnemyFunc::getNearestPikmin(this, C_PARMS->mGeneral.mViewAngle.mValue, C_PARMS->mGeneral.mSightRadius.mValue,
			                                         nullptr, &condition);
			if (piki) {
				mTargetPosition = piki->getPosition();
			} else if (sqrDistanceXZ(mPosition, mTargetPosition) < 625.0f) {
				f32 range    = (C_PARMS->mGeneral.mTerritoryRadius.mValue - C_PARMS->mGeneral.mHomeRadius.mValue);
				f32 randDist = C_PARMS->mGeneral.mHomeRadius.mValue + randWeightFloat(range);
				f32 ang2     = JMath::atanTable_.atan2_(mPosition.x - mHomePosition.x, mPosition.z - mHomePosition.z);
				f32 ang1     = randWeightFloat(PI);

				f32 ang3      = HALF_PI;
				f32 randAngle = ang2 + ang1 + ang3; // dumb fix for regswap
				// they're both sin??????? -EpochFlame
				mTargetPosition.x = randDist * sinf(randAngle) + mHomePosition.x;
				mTargetPosition.y = mHomePosition.y;
				mTargetPosition.z = randDist * sinf(randAngle) + mHomePosition.z;
			}
		}
	} else {
		mTargetPosition = mHomePosition;
	}

	setIKSystemTargetPosition(mTargetPosition);
}

/*
 * --INFO--
 * Address:	802C8D00
 * Size:	00010C
 */
void Obj::createIKSystem()
{
	mIkSystemMgr    = new IKSystemMgr;
	mIkSystemParms  = new IKSystemParms;
	mGroundCallBack = new BigFootGroundCallBack(this);
}

/*
 * --INFO--
 * Address:	802C8E0C
 * Size:	000124
 */
void Obj::setupIKSystem()
{
	mIkSystemMgr->init(this, nullptr);

	char* joints[] = { "rhand1jnt", "rhand2jnt", "rhand3jnt", "lhand1jnt", "lhand2jnt", "lhand3jnt",
		               "rfoot1jnt", "rfoot2jnt", "rfoot3jnt", "lfoot1jnt", "lfoot2jnt", "lfoot3jnt" };

	mIkSystemMgr->setupJoint(mModel, 0, &joints[0]);
	mIkSystemMgr->setupJoint(mModel, 1, &joints[3]);
	mIkSystemMgr->setupJoint(mModel, 2, &joints[6]);
	mIkSystemMgr->setupJoint(mModel, 3, &joints[9]);
	mIkSystemMgr->setupCallBack(mModel, "rhand3jnt");

	setIKParameter();
	mIkSystemMgr->setParameters(mIkSystemParms);
	mIkSystemMgr->mJointGroundCallBack = mGroundCallBack;
}

/*
 * --INFO--
 * Address:	802C8F30
 * Size:	000124
 */
void Obj::setIKParameter()
{
	mIkSystemParms->_00 = 12;
	mIkSystemParms->_04 = 10.0f;
	mIkSystemParms->_08 = 40.0f;
	mIkSystemParms->_28 = 0.5f;
	mIkSystemParms->_38 = C_PARMS->mGeneral.mMaxTurnAngle.mValue;
	mIkSystemParms->_2C = C_PARMS->mGeneral.mMoveSpeed.mValue;

	if (mIsEnraged) {
		mIkSystemParms->_14           = C_PROPERPARMS.mBaseCoefficients.mValue;
		mIkSystemParms->_18           = C_PROPERPARMS.mFp12.mValue;
		mIkSystemParms->_1C           = C_PROPERPARMS.mFp13.mValue;
		mIkSystemParms->_20           = C_PROPERPARMS.mFp15.mValue;
		mIkSystemParms->_24           = C_PROPERPARMS.mFp14.mValue;
		mIkSystemParms->mHeightOffset = C_PROPERPARMS.mFp16.mValue;
	} else {
		mIkSystemParms->_14           = C_PROPERPARMS.mBaseCoefficient.mValue;
		mIkSystemParms->_18           = C_PROPERPARMS.mRaiseSlowdownFactor.mValue;
		mIkSystemParms->_1C           = C_PROPERPARMS.mDownwardAccelFactor.mValue;
		mIkSystemParms->_20           = C_PROPERPARMS.mMaxDecelFactor.mValue;
		mIkSystemParms->_24           = C_PROPERPARMS.mMinDecelFactor.mValue;
		mIkSystemParms->mHeightOffset = C_PROPERPARMS.mLegSwing.mValue;
	}
}

/*
 * --INFO--
 * Address:	802C9054
 * Size:	000020
 */
void Obj::setIKSystemTargetPosition(Vector3f& targetPos) { mIkSystemMgr->mTargetPosition = targetPos; }

/*
 * --INFO--
 * Address:	802C9074
 * Size:	000060
 */
void Obj::updateIKSystem()
{
	mIkSystemMgr->doUpdate();
	mPosition   = Vector3f(mIkSystemMgr->mCenterPosition);
	mFaceDir    = mIkSystemMgr->mFaceDir;
	mRotation.y = mFaceDir;
}

/*
 * --INFO--
 * Address:	802C90D4
 * Size:	000060
 */
void Obj::doAnimationIKSystem()
{
	mIkSystemMgr->setAnimationCallBack();
	Vector3f translation = Vector3f(mIkSystemMgr->mTraceCentrePosition);
	mBaseTrMatrix.makeSRT(mScale, mRotation, translation);
}

/*
 * --INFO--
 * Address:	802C9134
 * Size:	000024
 */
void Obj::finishAnimationIKSystem() { mIkSystemMgr->resetAnimationCallBack(); }

/*
 * --INFO--
 * Address:	802C9158
 * Size:	000024
 */
void Obj::startProgramedIK() { mIkSystemMgr->startProgramedIK(); }

/*
 * --INFO--
 * Address:	802C917C
 * Size:	000024
 */
void Obj::startIKMotion() { mIkSystemMgr->startIKMotion(); }

/*
 * --INFO--
 * Address:	802C91A0
 * Size:	000024
 */
void Obj::finishIKMotion() { mIkSystemMgr->finishIKMotion(); }

/*
 * --INFO--
 * Address:	802C91C4
 * Size:	000024
 */
void Obj::forceFinishIKMotion() { mIkSystemMgr->forceFinishIKMotion(); }

/*
 * --INFO--
 * Address:	802C91E8
 * Size:	000024
 */
bool Obj::isFinishIKMotion() { return mIkSystemMgr->isFinishIKMotion(); }

/*
 * --INFO--
 * Address:	802C920C
 * Size:	000024
 */
void Obj::startBlendMotion() { mIkSystemMgr->startBlendMotion(); }

/*
 * --INFO--
 * Address:	802C9230
 * Size:	000024
 */
void Obj::finishBlendMotion() { mIkSystemMgr->finishBlendMotion(); }

/*
 * --INFO--
 * Address:	802C9254
 * Size:	000020
 */
Vector3f Obj::getTraceCentrePosition() { return mIkSystemMgr->mTraceCentrePosition; }

/*
 * --INFO--
 * Address:	802C9274
 * Size:	000024
 */
bool Obj::isCollisionCheck(CollPart* collpart) { return mIkSystemMgr->isCollisionCheck(collpart); }

/*
 * --INFO--
 * Address:	802C9298
 * Size:	000048
 */
void Obj::createShadowSystem() { mShadowMgr = new BigFootShadowMgr(this); }

/*
 * --INFO--
 * Address:	802C92E0
 * Size:	000074
 */
void Obj::setupShadowSystem()
{
	mShadowMgr->init();
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			mShadowMgr->setJointPosPtr(i, j, &mJointPositions[i][j]);
		}
	}
}

/*
 * --INFO--
 * Address:	802C9354
 * Size:	000024
 */
void Obj::doAnimationShadowSystem() { mShadowMgr->update(); }

/*
 * --INFO--
 * Address:	802C9378
 * Size:	000054
 */
void Obj::createMaterialAnimation() { mMatLoopAnimator = new Sys::MatLoopAnimator(); }

/*
 * --INFO--
 * Address:	802C93CC
 * Size:	00003C
 */
void Obj::startMaterialAnimation()
{
	Mgr* mgr = static_cast<Mgr*>(mMgr);
	mMatLoopAnimator->start((Sys::MatBaseAnimation*)mgr->mTevRegAnimation); // silly cast
}

/*
 * --INFO--
 * Address:	802C9408
 * Size:	0000F0
 */
void Obj::updateMaterialAnimation()
{
	if (_2DC) {
		f32 maxFrame;
		f32 currFrame = mMatLoopAnimator[0]._08;
		if (mMatLoopAnimator[0].mAnimation) {
			maxFrame = mMatLoopAnimator[0].mAnimation->getFrameMax();
		} else {
			maxFrame = 0.0f;
		}

		f32 factor = (1.0f) / (maxFrame - 50.0f);

		if (currFrame < maxFrame) {
			mMatLoopAnimator[0].animate(30.0f);
		} else {
			mMatLoopAnimator[0].animate(0.0f);
		}

		mShadowScale -= factor;
		if (mShadowScale < 0.0f) {
			mShadowScale = 0.0f;
		}
	} else {
		mMatLoopAnimator[0].setCurrentFrame((1.0f - mHealth / C_PARMS->mGeneral.mHealth.mValue) * 50.0f);
		mMatLoopAnimator[0].animate(0.0f);
	}
}

/*
 * --INFO--
 * Address:	802C94F8
 * Size:	000090
 */
void Obj::setupCollision()
{
	u32 labels[] = { 'lft1', 'lht1', 'rft1', 'rht1' };
	for (int i = 0; i < 4; i++) {
		CollPart* collpart = mCollTree->getCollPart(labels[i]);
		if (collpart) {
			collpart->makeTubeTree();
		}
	}
}

/*
 * --INFO--
 * Address:	802C9588
 * Size:	0000A4
 */
void Obj::createItemAndEnemy()
{
	if (mPelletDropCode.isNull()) {
		TamagoMushi::Mgr* mititeMgr = static_cast<TamagoMushi::Mgr*>(generalEnemyMgr->getEnemyMgr(EnemyTypeID::EnemyID_TamagoMushi));
		if (mititeMgr) {
			EnemyBirthArg birthArg;
			birthArg.mFaceDir = mFaceDir;
			getThrowupItemPosition(&birthArg.mPosition);
			Vector3f velocity = Vector3f(0.0f);
			mititeMgr->createGroupByBigFoot(birthArg, 30, velocity, 100.0f);
		}
	}
}

/*
 * --INFO--
 * Address:	802C962C
 * Size:	0000C8
 */
void Obj::startBossChargeBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
	PSM::checkBoss(soundObj);
	soundObj->jumpRequest(2);
}

/*
 * --INFO--
 * Address:	802C96F4
 * Size:	0000C8
 */
void Obj::startBossAttackLoopBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
	PSM::checkBoss(soundObj);
	soundObj->jumpRequest(8);
}

/*
 * --INFO--
 * Address:	802C97BC
 * Size:	0000C8
 */
void Obj::finishBossAttackLoopBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
	PSM::checkBoss(soundObj);
	soundObj->jumpRequest(1);
}

/*
 * --INFO--
 * Address:	802C9884
 * Size:	0000D4
 */
void Obj::startStoneStateBossAttackLoopBGM()
{
	if (mIsEnraged) {
		PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
		PSM::checkBoss(soundObj);
		soundObj->jumpRequest(1);
	}
}

/*
 * --INFO--
 * Address:	802C9958
 * Size:	0000D4
 */
void Obj::finishStoneStateBossAttackLoopBGM()
{
	if (mIsEnraged) {
		PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
		PSM::checkBoss(soundObj);
		soundObj->jumpRequest(8);
	}
}

/*
 * --INFO--
 * Address:	802C9A2C
 * Size:	0000FC
 */
void Obj::updateBossBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
	PSM::checkBoss(soundObj);

	if (mStuckPikminCount) {
		soundObj->postPikiAttack(true);
	} else {
		soundObj->postPikiAttack(false);
	}
}

/*
 * --INFO--
 * Address:	802C9B28
 * Size:	0000BC
 */
void Obj::resetBossAppearBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
	PSM::checkBoss(soundObj);
	soundObj->setAppearFlag(false);
}

/*
 * --INFO--
 * Address:	802C9BE4
 * Size:	0000BC
 */
void Obj::setBossAppearBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
	PSM::checkBoss(soundObj);
	soundObj->setAppearFlag(true);
}

/*
 * --INFO--
 * Address:	802C9CA0
 * Size:	0006C8
 */
void Obj::createEffect()
{
	for (int i = 0; i < 4; i++) {
		mFootFX[i]  = new efx::TOdamaFoot;
		mFootWFX[i] = new efx::TDamaFootw;

		for (int j = 0; j < 3; j++) {
			mHahenFX[i][j]     = new efx::TOdamaHahen;
			mDeadElecAFX[i][j] = new efx::TDamaDeadElecA;
		}

		for (int j = 0; j < 2; j++) {
			mDeadElecBFX[i][j]  = new efx::TDamaDeadElecB;
			mDeadHahenAFX[i][j] = new efx::TOdamaDeadHahenA;
		}

		mDeadHahenBFX[i] = new efx::TOdamaDeadHahenB;
		mLegHairFX[i]    = new efx::TOdamaFur2;
	}

	for (int i = 0; i < 3; i++) {
		mSmokeFX[i] = new efx::TDamaSmoke;
	}

	mDeadHahenC1FX = new efx::TOdamaDeadHahenC1;
	mDeadHahenC2FX = new efx::TOdamaDeadHahenC2;
	mBodyHairFX    = new efx::TOdamaFur1;
}

/*
 * --INFO--
 * Address:	802CA368
 * Size:	0001E4
 */
void Obj::setupEffect()
{
	char* jointNames[] = { "rhand2jnt", "lhand2jnt", "rfoot2jnt", "lfoot2jnt" };

	for (int i = 0; i < 4; i++) {
		mFootFX[i]->setPosptr(&mJointPositions[i][3]);
		mFootWFX[i]->mPosition = &mJointPositions[i][3];

		for (int j = 0; j < 3; j++) {
			mHahenFX[i][j]->setPosPosptrs(&mJointPositions[i][j], &mJointPositions[i][j + 1]);
			mDeadElecAFX[i][j]->setPosPosptrs(&mJointPositions[i][j], &mJointPositions[i][j + 1]);
		}

		for (int j = 0; j < 2; j++) {
			mDeadElecBFX[i][j]->mPosition = &mJointPositions[i][j + 1];
			mDeadHahenAFX[i][j]->setPosPosptrs(&mJointPositions[i][j], &mJointPositions[i][j + 1]);
		}

		mDeadHahenBFX[i]->setPosPosptrs(&mJointPositions[i][2], &mJointPositions[i][3]);

		mLegHairFX[i]->mMtx = mModel->getJoint(jointNames[i])->getWorldMatrix();
	}

	mDeadHahenC1FX->mMtx = mModel->getJoint("tama1")->getWorldMatrix();
	mDeadHahenC2FX->mMtx = mModel->getJoint("tama2")->getWorldMatrix();

	mBodyHairFX->mMtx = mModel->getJoint("kosi")->getWorldMatrix();
}

/*
 * --INFO--
 * Address:	802CA54C
 * Size:	000228
 */
void Obj::createOnGroundEffect(int footIdx, WaterBox* wbox)
{
	Vector3f effectPos = mIkSystemMgr->getCollisionCentre(footIdx);

	if (wbox) {
		effectPos.y = *wbox->getSeaHeightPtr();

		efx::Arg fxArg(effectPos);
		efx::TDamaWalkw waterWalk;

		waterWalk.create(&fxArg);
		PSM::SeSound* sound = PSStartSoundVec(PSSE_EV_ITEM_LAND_WATER1_XL, (Vec*)&mJointPositions[footIdx][3]);
		if (sound) {
			sound->setPitch(0.8f, 0, 0);
		}

	} else {
		efx::Arg fxArg(effectPos);
		efx::TOdamaWalk walk;

		walk.create(&fxArg);
	}

	if (mIsSmoking) {
		for (int i = 0; i < 3; i++) {
			mHahenFX[footIdx][i]->create(nullptr);
		}
	}

	PSStartSoundVec(PSSE_EN_BIGFOOT_WALK, (Vec*)&mJointPositions[footIdx][3]);
	cameraMgr->startVibration(6, effectPos, 2);
	rumbleMgr->startRumble(14, effectPos, 2);
}

/*
 * --INFO--
 * Address:	802CA774
 * Size:	000164
 */
void Obj::createOffGroundEffect(int footIdx, WaterBox* wbox)
{
	if (wbox) {
		mFootWFX[footIdx]->create(nullptr);
	} else {
		mFootFX[footIdx]->create(nullptr);
	}

	if (mIsEnraged) {
		getJAIObject()->startSound(PSSE_EN_BIGFOOT_RAISE_FAST, 0);

	} else {
		f32 healthRatio = mHealth / C_PARMS->mGeneral.mHealth.mValue;
		if (healthRatio < 0.175f) {
			getJAIObject()->startSound(PSSE_EN_BIGFOOT_RAISE3, 0);
		} else if (healthRatio < 0.35f) {
			getJAIObject()->startSound(PSSE_EN_BIGFOOT_RAISE2, 0);
		} else {
			getJAIObject()->startSound(PSSE_EN_BIGFOOT_RAISE1, 0);
		}
	}
}

/*
 * --INFO--
 * Address:	802CA8D8
 * Size:	0001A0
 */
void Obj::startPinchJointEffect()
{
	int randJoint[3];

	for (int i = 0; i < 3; i++) {
		randJoint[i] = (int)(2.0f * randFloat()) + 1;
	}

	int randFoot[4];
	for (int i = 0; i < 4; i++) {
		randFoot[i] = i;
	}

	for (int i = 0; i < 4; i++) {
		int randIdx       = (int)(4.0f * randFloat());
		int curFoot       = randFoot[i];
		randFoot[i]       = randFoot[randIdx];
		randFoot[randIdx] = curFoot;
	}

	for (int i = 0; i < 3; i++) {
		mSmokeFX[i]->mPosition = &mJointPositions[randFoot[i]][randJoint[i]];
		mSmokeFX[i]->create(nullptr);
	}
}

/*
 * --INFO--
 * Address:	802CAA78
 * Size:	000058
 */
void Obj::finishPinchJointEffect()
{
	for (int i = 0; i < 3; i++) {
		mSmokeFX[i]->fade();
	}
}

/*
 * --INFO--
 * Address:	802CAAD0
 * Size:	0001C0
 */
void Obj::startDeadEffect()
{
	for (int i = 0; i < 4; i++) {
		for (int j = 1; j < 3; j++) {
			efx::Arg fxArg(mJointPositions[i][j]);
			efx::TDamaDeadBomb deadBombFX;
			deadBombFX.create(&fxArg);
		}

		for (int j = 0; j < 3; j++) {
			mDeadElecAFX[i][j]->create(nullptr);
		}

		for (int j = 0; j < 2; j++) {
			mDeadElecBFX[i][j]->create(nullptr);
			mDeadHahenAFX[i][j]->create(nullptr);
		}

		mDeadHahenBFX[i]->create(nullptr);
	}

	mDeadHahenC1FX->create(nullptr);
	mDeadHahenC2FX->create(nullptr);

	finishPinchJointEffect();
}

/*
 * --INFO--
 * Address:	802CAC90
 * Size:	000254
 */
void Obj::updatePinchLife()
{
	if (!isAlive()) {
		return;
	}

	f32 healthRatio = mHealth / C_PARMS->mGeneral.mHealth.mValue;
	if (mIsSmoking) {
		if (healthRatio > 0.35f) {
			finishPinchJointEffect();
			mIsSmoking = false;
		}

	} else if (healthRatio < 0.35f) {
		startPinchJointEffect();
		mIsSmoking = true;
		getJAIObject()->startSound(PSSE_EN_DAMAGUMO_SMOKE, 0);
	}
}

/*
 * --INFO--
 * Address:	802CAEE4
 * Size:	000074
 */
void Obj::startFurEffect()
{
	mBodyHairFX->create(nullptr);
	for (int i = 0; i < 4; i++) {
		mLegHairFX[i]->create(nullptr);
	}
}

/*
 * --INFO--
 * Address:	802CAF58
 * Size:	00006C
 */
void Obj::finishFurEffect()
{
	mBodyHairFX->fade();
	for (int i = 0; i < 4; i++) {
		mLegHairFX[i]->fade();
	}
}

/*
 * --INFO--
 * Address:	802CAFC4
 * Size:	000068
 */
void Obj::updateDeadFurEffect()
{
	mBodyHairFX->setGlobalScale(mShadowScale);
	for (int i = 0; i < 4; i++) {
		mLegHairFX[i]->setGlobalScale(mShadowScale);
	}
}

/*
 * --INFO--
 * Address:	802CB02C
 * Size:	0001D8
 */
void Obj::effectDrawOn()
{
	for (int i = 0; i < 4; i++) {
		mFootFX[i]->endDemoDrawOn();
		mFootWFX[i]->endDemoDrawOn();
	}

	for (int i = 0; i < 3; i++) {
		mSmokeFX[i]->endDemoDrawOn();
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			mHahenFX[i][j]->endDemoDrawOn();
			mDeadElecAFX[i][j]->endDemoDrawOn();
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			mDeadElecBFX[i][j]->endDemoDrawOn();
			mDeadHahenAFX[i][j]->endDemoDrawOn();
		}
	}

	for (int i = 0; i < 4; i++) {
		mDeadHahenBFX[i]->endDemoDrawOn();
	}

	mDeadHahenC1FX->endDemoDrawOn();
	mDeadHahenC2FX->endDemoDrawOn();

	mBodyHairFX->endDemoDrawOn();
	for (int i = 0; i < 4; i++) {
		mLegHairFX[i]->endDemoDrawOn();
	}
}

/*
 * --INFO--
 * Address:	802CB204
 * Size:	0001D8
 */
void Obj::effectDrawOff()
{
	for (int i = 0; i < 4; i++) {
		mFootFX[i]->startDemoDrawOff();
		mFootWFX[i]->startDemoDrawOff();
	}

	for (int i = 0; i < 3; i++) {
		mSmokeFX[i]->startDemoDrawOff();
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			mHahenFX[i][j]->startDemoDrawOff();
			mDeadElecAFX[i][j]->startDemoDrawOff();
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			mDeadElecBFX[i][j]->startDemoDrawOff();
			mDeadHahenAFX[i][j]->startDemoDrawOff();
		}
	}

	for (int i = 0; i < 4; i++) {
		mDeadHahenBFX[i]->startDemoDrawOff();
	}

	mDeadHahenC1FX->startDemoDrawOff();
	mDeadHahenC2FX->startDemoDrawOff();

	mBodyHairFX->startDemoDrawOff();
	for (int i = 0; i < 4; i++) {
		mLegHairFX[i]->startDemoDrawOff();
	}
}

/*
 * --INFO--
 * Address:	802CB3DC
 * Size:	000038
 */
void Obj::addShadowScale()
{
	if (mShadowScale < 1.0f) {
		mShadowScale += 2.0f * sys->mDeltaTime;
		if (mShadowScale > 1.0f) {
			mShadowScale = 1.0f;
		}
	}
}
} // namespace BigFoot
} // namespace Game
