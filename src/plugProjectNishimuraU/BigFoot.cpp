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

/**
 * @note Address: 0x802C7EF0
 * @note Size: 0x24
 */
void BigFootGroundCallBack::invokeOnGround(int footIdx, WaterBox* wbox) { mObj->createOnGroundEffect(footIdx, wbox); }

/**
 * @note Address: 0x802C7F14
 * @note Size: 0x24
 */
void BigFootGroundCallBack::invokeOffGround(int footIdx, WaterBox* wbox) { mObj->createOffGroundEffect(footIdx, wbox); }

/**
 * @note Address: 0x802C7F38
 * @note Size: 0x16C
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

/**
 * @note Address: 0x802C80A4
 * @note Size: 0x4
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/**
 * @note Address: 0x802C80A8
 * @note Size: 0x148
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	EnemyBase::hardConstraintOn();
	disableEvent(0, EB_PlatformCollEnabled);
	disableEvent(0, EB_LeaveCarcass);
	mStateTimer         = 0.0f;
	mNextState          = BIGFOOT_NULL;
	mTargetPosition     = mHomePosition;
	mShadowScale        = 0.0f;
	mUpdateMaterialAnim = false;
	mIsSmoking          = false;
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

/**
 * @note Address: 0x802C81F0
 * @note Size: 0x44
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	finishFurEffect();
	EnemyBase::onKill(killArg);
}

/**
 * @note Address: 0x802C8234
 * @note Size: 0x50
 */
void Obj::doUpdate()
{
	mFsm->exec(this);
	updatePinchLife();
	updateIKSystem();
}

/**
 * @note Address: 0x802C8284
 * @note Size: 0x34
 */
void Obj::doUpdateCommon()
{
	EnemyBase::doUpdateCommon();
	updateBossBGM();
}

/**
 * @note Address: 0x802C82B8
 * @note Size: 0x98
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

/**
 * @note Address: 0x802C8350
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics&) { }

/**
 * @note Address: 0x802C8354
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/**
 * @note Address: 0x802C8374
 * @note Size: 0x4C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/**
 * @note Address: 0x802C83C0
 * @note Size: 0x3C
 */
void Obj::getShadowParam(ShadowParam& param)
{
	param.mPosition                 = mPosition;
	param.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	param.mBoundingSphere.mRadius   = 0.1f;
	param.mSize                     = 0.1f;
}

/**
 * @note Address: 0x802C83FC
 * @note Size: 0x50
 */
bool Obj::needShadow()
{
	if (EnemyBase::needShadow()) {
		return true;
	} else {
		return (u8)(getStateID() == 2);
	}
}

/**
 * @note Address: 0x802C844C
 * @note Size: 0x9C
 */
bool Obj::damageCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	if (creature && collpart && creature->isPiki() && creature->isStickTo()) {
		addDamage(damage, 1.0f);
		return true;
	}

	return false;
}

/**
 * @note Address: 0x802C84E8
 * @note Size: 0x1AC
 */
void Obj::collisionCallback(CollEvent& event)
{
	if (!isEvent(0, EB_Bittered)) {
		Creature* creature = event.mCollidingCreature;
		if (creature && event.mCollisionObj && creature->isAlive() && creature->mFloorTriangle) {
			if (creature->isNavi() || creature->isPiki()) {
				if (isCollisionCheck(event.mHitPart)) {
					InteractPress press(this, C_GENERALPARMS.mAttackDamage.mValue, nullptr);
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

/**
 * @note Address: 0x802C8694
 * @note Size: 0x44
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	finishPinchJointEffect();
	finishFurEffect();
	startStoneStateBossAttackLoopBGM();
}

/**
 * @note Address: 0x802C86D8
 * @note Size: 0x6C
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

/**
 * @note Address: 0x802C8744
 * @note Size: 0x20
 */
void Obj::doStartMovie() { effectDrawOff(); }

/**
 * @note Address: 0x802C8764
 * @note Size: 0x20
 */
void Obj::doEndMovie() { effectDrawOn(); }

/**
 * @note Address: 0x802C8784
 * @note Size: 0x60
 */
void Obj::getThrowupItemPosition(Vector3f* position)
{
	Matrixf* mat = mModel->getJoint("kosi")->getWorldMatrix();
	*position    = mat->getColumn(3);
	position->y -= 100.0f;
}

/**
 * @note Address: 0x802C87E4
 * @note Size: 0x14
 */
void Obj::getThrowupItemVelocity(Vector3f* velocity)
{
	velocity->z = 0.0f;
	velocity->y = 0.0f;
	velocity->x = 0.0f;
}

/**
 * @note Address: 0x802C87F8
 * @note Size: 0x8C
 */
void Obj::resetFlickWalkTimeMax()
{
	f32 travelTime = C_PROPERPARMS.mNormalTravelTime();
	f32 halfTime   = C_PROPERPARMS.mNormalTravelTime() * 0.5f;

	mFlickWalkTimeMax = halfTime + randWeightFloat(travelTime);
}

/**
 * @note Address: 0x802C8884
 * @note Size: 0x8C
 */
void Obj::setFlickWalkTimeMax()
{
	f32 travelTime = C_PROPERPARMS.mPostShakeTravelTime();
	f32 halfTime   = C_PROPERPARMS.mPostShakeTravelTime() * 0.5f;

	mFlickWalkTimeMax = halfTime + randWeightFloat(travelTime);
}

/**
 * @note Address: 0x802C8910
 * @note Size: 0x3F0
 */
void Obj::getTargetPosition()
{
	if (sqrDistanceXZ(mPosition, mHomePosition) < SQUARE(C_GENERALPARMS.mTerritoryRadius())) {
		if (mIsEnraged) {
			f32 adjustAngle = (randWeightFloat(2.0f * mIkSystemParms->mEnragedAngle) - mIkSystemParms->mEnragedAngle) * DEG2RAD * PI;
			f32 randAngle   = mFaceDir + adjustAngle;
			// different stomping behavior if enraged
			mTargetPosition.x = C_PROPERPARMS.mMovementOffset() * sinf(randAngle) + mPosition.x;
			mTargetPosition.y = mPosition.y;
			mTargetPosition.z = C_PROPERPARMS.mMovementOffset() * cosf(randAngle) + mPosition.z;

		} else {
			ConditionNotStickClient condition(this);
			Piki* piki = EnemyFunc::getNearestPikmin(this, C_GENERALPARMS.mViewAngle.mValue, C_GENERALPARMS.mSightRadius.mValue, nullptr,
			                                         &condition);
			if (piki) {
				mTargetPosition = piki->getPosition();
			} else if (sqrDistanceXZ(mPosition, mTargetPosition) < 625.0f) {
				f32 range    = (C_GENERALPARMS.mTerritoryRadius.mValue - C_GENERALPARMS.mHomeRadius.mValue);
				f32 randDist = C_GENERALPARMS.mHomeRadius.mValue + randWeightFloat(range);
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

/**
 * @note Address: 0x802C8D00
 * @note Size: 0x10C
 */
void Obj::createIKSystem()
{
	mIkSystemMgr    = new IKSystemMgr;
	mIkSystemParms  = new IKSystemParms;
	mGroundCallBack = new BigFootGroundCallBack(this);
}

/**
 * @note Address: 0x802C8E0C
 * @note Size: 0x124
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

/**
 * @note Address: 0x802C8F30
 * @note Size: 0x124
 */
void Obj::setIKParameter()
{
	mIkSystemParms->mLegCount           = 12;
	mIkSystemParms->mFootPositionOffset = 10.0f;
	mIkSystemParms->mFootPositionRadius = 40.0f;
	mIkSystemParms->mBendFactor         = 0.5f;
	mIkSystemParms->mMaxTurnAngle       = C_GENERALPARMS.mMaxTurnAngle.mValue;
	mIkSystemParms->mMoveSpeed          = C_GENERALPARMS.mMoveSpeed.mValue;

	if (mIsEnraged) {
		mIkSystemParms->mBottomJointMoveSpeed = C_PROPERPARMS.mEnragedBaseCoefficient.mValue;
		mIkSystemParms->mRaiseSlowdownFactor  = C_PROPERPARMS.mEnragedRaiseSlowdownFactor.mValue;
		mIkSystemParms->mDownwardAccelFactor  = C_PROPERPARMS.mEnragedDownwardAccelFactor.mValue;
		mIkSystemParms->mMaxDecelFactor       = C_PROPERPARMS.mEnragedMaxDecelFactor.mValue;
		mIkSystemParms->mMinDecelFactor       = C_PROPERPARMS.mEnragedMinDecelFactor.mValue;
		mIkSystemParms->mHeightOffset         = C_PROPERPARMS.mEnragedLegSwing.mValue;
	} else {
		mIkSystemParms->mBottomJointMoveSpeed = C_PROPERPARMS.mBaseCoefficient.mValue;
		mIkSystemParms->mRaiseSlowdownFactor  = C_PROPERPARMS.mRaiseSlowdownFactor.mValue;
		mIkSystemParms->mDownwardAccelFactor  = C_PROPERPARMS.mDownwardAccelFactor.mValue;
		mIkSystemParms->mMaxDecelFactor       = C_PROPERPARMS.mMaxDecelFactor.mValue;
		mIkSystemParms->mMinDecelFactor       = C_PROPERPARMS.mMinDecelFactor.mValue;
		mIkSystemParms->mHeightOffset         = C_PROPERPARMS.mLegSwing.mValue;
	}
}

/**
 * @note Address: 0x802C9054
 * @note Size: 0x20
 */
void Obj::setIKSystemTargetPosition(Vector3f& targetPos) { mIkSystemMgr->mTargetPosition = targetPos; }

/**
 * @note Address: 0x802C9074
 * @note Size: 0x60
 */
void Obj::updateIKSystem()
{
	mIkSystemMgr->doUpdate();
	mPosition   = Vector3f(mIkSystemMgr->mCentrePosition);
	mFaceDir    = mIkSystemMgr->mFaceDir;
	mRotation.y = mFaceDir;
}

/**
 * @note Address: 0x802C90D4
 * @note Size: 0x60
 */
void Obj::doAnimationIKSystem()
{
	mIkSystemMgr->setAnimationCallBack();
	Vector3f translation = Vector3f(mIkSystemMgr->mTraceCentrePosition);
	mBaseTrMatrix.makeSRT(mScale, mRotation, translation);
}

/**
 * @note Address: 0x802C9134
 * @note Size: 0x24
 */
void Obj::finishAnimationIKSystem() { mIkSystemMgr->resetAnimationCallBack(); }

/**
 * @note Address: 0x802C9158
 * @note Size: 0x24
 */
void Obj::startProgramedIK() { mIkSystemMgr->startProgramedIK(); }

/**
 * @note Address: 0x802C917C
 * @note Size: 0x24
 */
void Obj::startIKMotion() { mIkSystemMgr->startIKMotion(); }

/**
 * @note Address: 0x802C91A0
 * @note Size: 0x24
 */
void Obj::finishIKMotion() { mIkSystemMgr->finishIKMotion(); }

/**
 * @note Address: 0x802C91C4
 * @note Size: 0x24
 */
void Obj::forceFinishIKMotion() { mIkSystemMgr->forceFinishIKMotion(); }

/**
 * @note Address: 0x802C91E8
 * @note Size: 0x24
 */
bool Obj::isFinishIKMotion() { return mIkSystemMgr->isFinishIKMotion(); }

/**
 * @note Address: 0x802C920C
 * @note Size: 0x24
 */
void Obj::startBlendMotion() { mIkSystemMgr->startBlendMotion(); }

/**
 * @note Address: 0x802C9230
 * @note Size: 0x24
 */
void Obj::finishBlendMotion() { mIkSystemMgr->finishBlendMotion(); }

/**
 * @note Address: 0x802C9254
 * @note Size: 0x20
 */
Vector3f Obj::getTraceCentrePosition() { return mIkSystemMgr->mTraceCentrePosition; }

/**
 * @note Address: 0x802C9274
 * @note Size: 0x24
 */
bool Obj::isCollisionCheck(CollPart* part) { return mIkSystemMgr->isCollisionCheck(part); }

/**
 * @note Address: 0x802C9298
 * @note Size: 0x48
 */
void Obj::createShadowSystem() { mShadowMgr = new BigFootShadowMgr(this); }

/**
 * @note Address: 0x802C92E0
 * @note Size: 0x74
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

/**
 * @note Address: 0x802C9354
 * @note Size: 0x24
 */
void Obj::doAnimationShadowSystem() { mShadowMgr->update(); }

/**
 * @note Address: 0x802C9378
 * @note Size: 0x54
 */
void Obj::createMaterialAnimation() { mMatLoopAnimator = new Sys::MatLoopAnimator(); }

/**
 * @note Address: 0x802C93CC
 * @note Size: 0x3C
 */
void Obj::startMaterialAnimation()
{
	Mgr* mgr = C_MGR;
	mMatLoopAnimator->start((Sys::MatBaseAnimation*)mgr->mTevRegAnimation); // silly cast
}

/**
 * @note Address: 0x802C9408
 * @note Size: 0xF0
 */
void Obj::updateMaterialAnimation()
{
	if (mUpdateMaterialAnim) {
		f32 maxFrame;
		f32 currFrame = mMatLoopAnimator[0].mCurrFrame;
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
		mMatLoopAnimator[0].setCurrentFrame((1.0f - mHealth / C_GENERALPARMS.mHealth.mValue) * 50.0f);
		mMatLoopAnimator[0].animate(0.0f);
	}
}

/**
 * @note Address: 0x802C94F8
 * @note Size: 0x90
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

/**
 * @note Address: 0x802C9588
 * @note Size: 0xA4
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
			mititeMgr->createGroupByBigFoot(birthArg, TAMAGOMUSHI_GROUP_COUNT, velocity,
			                                100.0f); // spread fall speeds randomly by up to +/- 100
		}
	}
}

/**
 * @note Address: 0x802C962C
 * @note Size: 0xC8
 */
void Obj::startBossChargeBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
	PSM::assertIsBoss(soundObj);
	soundObj->jumpRequest(PSM::EnemyMidBoss::BossBgm_AttackPrep);
}

/**
 * @note Address: 0x802C96F4
 * @note Size: 0xC8
 */
void Obj::startBossAttackLoopBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
	PSM::assertIsBoss(soundObj);
	soundObj->jumpRequest(PSM::EnemyMidBoss::BossBgm_AttackLong);
}

/**
 * @note Address: 0x802C97BC
 * @note Size: 0xC8
 */
void Obj::finishBossAttackLoopBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
	PSM::assertIsBoss(soundObj);
	soundObj->jumpRequest(PSM::EnemyMidBoss::BossBgm_MainLoop);
}

/**
 * @note Address: 0x802C9884
 * @note Size: 0xD4
 */
void Obj::startStoneStateBossAttackLoopBGM()
{
	if (mIsEnraged) {
		PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
		PSM::assertIsBoss(soundObj);
		soundObj->jumpRequest(PSM::EnemyMidBoss::BossBgm_MainLoop);
	}
}

/**
 * @note Address: 0x802C9958
 * @note Size: 0xD4
 */
void Obj::finishStoneStateBossAttackLoopBGM()
{
	if (mIsEnraged) {
		PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
		PSM::assertIsBoss(soundObj);
		soundObj->jumpRequest(PSM::EnemyMidBoss::BossBgm_AttackLong);
	}
}

/**
 * @note Address: 0x802C9A2C
 * @note Size: 0xFC
 */
void Obj::updateBossBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
	PSM::assertIsBoss(soundObj);

	if (mStuckPikminCount) {
		soundObj->postPikiAttack(true);
	} else {
		soundObj->postPikiAttack(false);
	}
}

/**
 * @note Address: 0x802C9B28
 * @note Size: 0xBC
 */
void Obj::resetBossAppearBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
	PSM::assertIsBoss(soundObj);
	soundObj->setAppearFlag(false);
}

/**
 * @note Address: 0x802C9BE4
 * @note Size: 0xBC
 */
void Obj::setBossAppearBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
	PSM::assertIsBoss(soundObj);
	soundObj->setAppearFlag(true);
}

/**
 * @note Address: 0x802C9CA0
 * @note Size: 0x6C8
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

/**
 * @note Address: 0x802CA368
 * @note Size: 0x1E4
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

/**
 * @note Address: 0x802CA54C
 * @note Size: 0x228
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
			sound->setPitch(0.8f, 0, SOUNDPARAM_Unk0);
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
	cameraMgr->startVibration(VIBTYPE_LightFastShort, effectPos, CAMNAVI_Both);
	rumbleMgr->startRumble(RUMBLETYPE_Fixed14, effectPos, RUMBLEID_Both);
}

/**
 * @note Address: 0x802CA774
 * @note Size: 0x164
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
		f32 healthRatio = mHealth / C_GENERALPARMS.mHealth.mValue;
		if (healthRatio < 0.175f) {
			getJAIObject()->startSound(PSSE_EN_BIGFOOT_RAISE3, 0);
		} else if (healthRatio < 0.35f) {
			getJAIObject()->startSound(PSSE_EN_BIGFOOT_RAISE2, 0);
		} else {
			getJAIObject()->startSound(PSSE_EN_BIGFOOT_RAISE1, 0);
		}
	}
}

/**
 * @note Address: 0x802CA8D8
 * @note Size: 0x1A0
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

/**
 * @note Address: 0x802CAA78
 * @note Size: 0x58
 */
void Obj::finishPinchJointEffect()
{
	for (int i = 0; i < 3; i++) {
		mSmokeFX[i]->fade();
	}
}

/**
 * @note Address: 0x802CAAD0
 * @note Size: 0x1C0
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

/**
 * @note Address: 0x802CAC90
 * @note Size: 0x254
 */
void Obj::updatePinchLife()
{
	if (!isAlive()) {
		return;
	}

	f32 healthRatio = mHealth / C_GENERALPARMS.mHealth.mValue;
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

/**
 * @note Address: 0x802CAEE4
 * @note Size: 0x74
 */
void Obj::startFurEffect()
{
	mBodyHairFX->create(nullptr);
	for (int i = 0; i < 4; i++) {
		mLegHairFX[i]->create(nullptr);
	}
}

/**
 * @note Address: 0x802CAF58
 * @note Size: 0x6C
 */
void Obj::finishFurEffect()
{
	mBodyHairFX->fade();
	for (int i = 0; i < 4; i++) {
		mLegHairFX[i]->fade();
	}
}

/**
 * @note Address: 0x802CAFC4
 * @note Size: 0x68
 */
void Obj::updateDeadFurEffect()
{
	mBodyHairFX->setGlobalScale(mShadowScale);
	for (int i = 0; i < 4; i++) {
		mLegHairFX[i]->setGlobalScale(mShadowScale);
	}
}

/**
 * @note Address: 0x802CB02C
 * @note Size: 0x1D8
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

/**
 * @note Address: 0x802CB204
 * @note Size: 0x1D8
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

/**
 * @note Address: 0x802CB3DC
 * @note Size: 0x38
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
