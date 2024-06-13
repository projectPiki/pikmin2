#include "Game/Entities/Houdai.h"
#include "Game/SingleGameSection.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/Navi.h"
#include "Game/EnemyFunc.h"
#include "Game/ConditionNotStick.h"
#include "efx/TOoota.h"
#include "efx/TEnemyDownWat.h"
#include "efx/TEnemyDownSmoke.h"
#include "PSM/EnemyBoss.h"
#include "PSSystem/PSMainSide_ObjSound.h"
#include "PS.h"
#include "Dolphin/rand.h"
#include "nans.h"

namespace Game {
namespace Houdai {

/**
 * @note Address: 0x802BFCB0
 * @note Size: 0x24
 */
void HoudaiGroundCallBack::invokeOnGround(int footIdx, WaterBox* wbox) { mObj->createOnGroundEffect(footIdx, wbox); }

/**
 * @note Address: 0x802BFCD4
 * @note Size: 0x24
 */
void HoudaiGroundCallBack::invokeOffGround(int footIdx, WaterBox* wbox) { mObj->createOffGroundEffect(footIdx, wbox); }

/**
 * @note Address: 0x802BFCF8
 * @note Size: 0x16C
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);

	createIKSystem();
	createShadowSystem();
	createShotGun();
	createEffect();
}

/**
 * @note Address: 0x802BFE64
 * @note Size: 0x4
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/**
 * @note Address: 0x802BFE68
 * @note Size: 0x144
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	// TODO: Finish
	EnemyBase::onInit(initArg);
	EnemyBase::hardConstraintOn();
	disableEvent(0, EB_Cullable);
	disableEvent(0, EB_PlatformCollEnabled);
	disableEvent(0, EB_LeaveCarcass);
	mStateTimer        = 0.0f;
	mStateDuration     = 0.0f;
	mShotGunBurstTimer = 0.0f;
	mNextState         = HOUDAI_NULL;
	mTargetPosition    = mHomePosition;
	mIsSmoking         = false;
	setupIKSystem();
	setupShadowSystem();
	setTargetPattern();

	mShotGunSearchTimer    = 0.0f;
	mShotGunState          = 0;
	mShotGunTargetPosition = mHomePosition;

	setupShotGun();
	setupCollision();
	setupEffect();
	startSteamEffect(false);

	mIsAttackMusicLooping = false;

	resetBossAppearBGM();
	shadowMgr->delShadow(this);

	mFsm->start(this, HOUDAI_Stay, nullptr);
	doAnimationCullingOff();
}

/**
 * @note Address: 0x802BFFAC
 * @note Size: 0x54
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	finishSteamEffect();
	finishChimneyEffect();
	forceFinishShotGun();
	EnemyBase::onKill(killArg);
}

/**
 * @note Address: 0x802C0000
 * @note Size: 0x88
 */
void Obj::setParameters()
{
	// if we're in Hole of Heroes, change territory radius
	if (gameSystem && gameSystem->mIsInCave && gameSystem->isStoryMode()) {
		SingleGameSection* section = static_cast<SingleGameSection*>(gameSystem->mSection);
		if (section && section->getCaveID() == 'l_02') {
			C_GENERALPARMS.mTerritoryRadius.mValue = C_PROPERPARMS.mLastToTerritory.mValue;
		}
	}

	EnemyBase::setParameters();
}

/**
 * @note Address: 0x802C0088
 * @note Size: 0xB4
 */
void Obj::doUpdate()
{
	updateShotGunTimer();
	mFsm->exec(this);
	updatePinchLife();
	updateIKSystem();
	doUpdateShotGun();

	// if state is not Null, Dead, Stay or Land, make steam sound
	if (isAlive() && getStateID() > HOUDAI_Land) {
		getJAIObject()->startSound(PSSE_EN_HOUDAI_STEAM, 0);
	}
}

/**
 * @note Address: 0x802C013C
 * @note Size: 0x3C
 */
void Obj::doUpdateCommon()
{
	EnemyBase::doUpdateCommon();
	doUpdateCommonShotGun();
	updateBossBGM();
}

/**
 * @note Address: 0x802C0178
 * @note Size: 0xA0
 */
void Obj::doAnimationCullingOff()
{
	setShotGunCallBack();
	mCurAnim->mIsPlaying = false;
	doAnimationUpdateAnimator();
	doAnimationIKSystem();

	PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mModel->mJ3dModel->mPosMtx);
	mModel->mJ3dModel->calc();

	mCollTree->update();

	doAnimationShadowSystem();
	finishAnimationIKSystem();
	resetShotGunCallBack();
}

/**
 * @note Address: 0x802C0218
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics& gfx) { }

/**
 * @note Address: 0x802C021C
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/**
 * @note Address: 0x802C023C
 * @note Size: 0x4C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/**
 * @note Address: 0x802C0288
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
 * @note Address: 0x802C02C4
 * @note Size: 0xB4
 */
bool Obj::damageCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	if (creature && collpart && creature->isPiki() && creature->isStickTo()) {
		if (getStateID() == HOUDAI_Land) {
			damage *= 0.25f;
		}
		addDamage(damage, 1.0f);
		return true;
	}

	return false;
}

/**
 * @note Address: 0x802C0378
 * @note Size: 0x54
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	finishPinchJointEffect();
	finishSteamEffect();
	finishChimneyEffect();
	mShotGunMgr->startStoneStateEffectOff();
	startStoneStateBossAttackLoopBGM();
}

/**
 * @note Address: 0x802C03CC
 * @note Size: 0x78
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	EnemyFunc::flickStickPikmin(this, 1.0f, 10.0f, 0.0f, FLICK_BACKWARD_ANGLE, nullptr);
	if (mIsSmoking) {
		startPinchJointEffect();
	}

	startSteamEffect(true);
	mShotGunMgr->finishStoneStateEffectOn();
	finishStoneStateBossAttackLoopBGM();
}

/**
 * @note Address: 0x802C0444
 * @note Size: 0x20
 */
void Obj::doStartMovie() { effectDrawOff(); }

/**
 * @note Address: 0x802C0464
 * @note Size: 0x20
 */
void Obj::doEndMovie() { effectDrawOn(); }

/**
 * @note Address: 0x802C0484
 * @note Size: 0x50
 */
void Obj::getThrowupItemPosition(Vector3f* position) { *position = mModel->getJoint("kosi")->getWorldMatrix()->getColumn(3); }

/**
 * @note Address: 0x802C04D4
 * @note Size: 0x14
 */
void Obj::getThrowupItemVelocity(Vector3f* velocity)
{
	velocity->z = 0.0f;
	velocity->y = 0.0f;
	velocity->x = 0.0f;
}

/**
 * @note Address: 0x802C04E8
 * @note Size: 0xC8
 */
void Obj::setTargetPattern()
{
	// by default, target nearest navi or piki
	mTargetNearest = true;

	// if we're in Hole of Heroes, change target pattern to target party pikmin specifically (25% chance)
	if (gameSystem && gameSystem->mIsInCave && gameSystem->isStoryMode()) {
		SingleGameSection* section = static_cast<SingleGameSection*>(gameSystem->mSection);
		if (section && section->getCaveID() == 'l_02') {
			// if below 0.5f, target nearest navi's nearest piki (i.e. party)
			// if between 0.5f and 2.0f, target nearest anything
			mTargetNearest = (int)(2.0f * ((f32)rand() / RAND_MAX)) != 0; // this needs to be not-inlined for float order reasons
		}
	}
}

/**
 * @note Address: 0x802C05B0
 * @note Size: 0x298
 */
void Obj::getTargetPosition()
{
	if (sqrDistanceXZ(mPosition, mHomePosition) < SQUARE(C_GENERALPARMS.mTerritoryRadius())) {
		ConditionNotStickClient condition(this);
		Piki* piki
		    = EnemyFunc::getNearestPikmin(this, C_GENERALPARMS.mViewAngle.mValue, C_GENERALPARMS.mSightRadius.mValue, nullptr, &condition);
		if (piki) {
			mTargetPosition = piki->getPosition();
		} else if (sqrDistanceXZ(mPosition, mTargetPosition) < 625.0f) {
			f32 range    = (C_GENERALPARMS.mTerritoryRadius.mValue - C_GENERALPARMS.mHomeRadius.mValue);
			f32 randDist = C_GENERALPARMS.mHomeRadius.mValue + randWeightFloat(range);
			f32 ang2     = JMath::atanTable_.atan2_(mPosition.x - mHomePosition.x, mPosition.z - mHomePosition.z);
			f32 ang1     = randWeightFloat(PI);

			f32 ang3      = HALF_PI;
			f32 randAngle = ang2 + ang1 + ang3; // dumb fix for regswap

			f32 sinTheta      = sinf(randAngle);
			mTargetPosition.x = randDist * sinf(randAngle) + mHomePosition.x;
			mTargetPosition.y = mHomePosition.y;
			mTargetPosition.z = randDist * cosf(randAngle) + mHomePosition.z;
		}
	} else {
		mTargetPosition = mHomePosition;
	}

	setIKSystemTargetPosition(mTargetPosition);
}

/**
 * @note Address: 0x802C0848
 * @note Size: 0x234
 */
void Obj::setShotGunTargetPosition()
{
	ConditionNotStickClient condition(this);
	Creature* target;
	if (mTargetNearest) { // target nearest navi or piki
		target = EnemyFunc::getNearestPikminOrNavi(this, 180.0f, C_GENERALPARMS.mSearchDistance.mValue, nullptr, nullptr, &condition);

	} else { // target nearest navi's nearest piki (i.e. party)
		target = EnemyFunc::getNearestNavi(this, 180.0f, C_GENERALPARMS.mSearchDistance.mValue, nullptr, nullptr);
		if (target) {
			target = EnemyFunc::getNearestPikmin(target, 180.0f, C_GENERALPARMS.mSearchDistance.mValue, nullptr, &condition);
		}
	}

	if (target) {
		mShotGunTargetPosition = target->getPosition();
	} else if (mShotGunBurstTimer > 1.0f) {
		mShotGunBurstTimer = 0.0f;
		f32 randAngle      = randWeightFloat(TAU);
		f32 randDist       = randWeightFloat(C_GENERALPARMS.mSearchDistance.mValue);

		mShotGunTargetPosition = Vector3f(randDist * sinf(randAngle) + mPosition.x, mPosition.y, randDist * cosf(randAngle) + mPosition.z);
	}

	setShotGunTarget(mShotGunTargetPosition);
}

/**
 * @note Address: 0x802C0A7C
 * @note Size: 0x10C
 */
void Obj::createIKSystem()
{
	mIkSystemMgr    = new IKSystemMgr;
	mIkSystemParms  = new IKSystemParms;
	mGroundCallBack = new HoudaiGroundCallBack(this);
}

/**
 * @note Address: 0x802C0B88
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
 * @note Address: 0x802C0CAC
 * @note Size: 0x90
 */
void Obj::setIKParameter()
{
	mIkSystemParms->mBendFactor           = 0.67f;
	mIkSystemParms->mMaxTurnAngle         = C_GENERALPARMS.mMaxTurnAngle.mValue;
	mIkSystemParms->mMoveSpeed            = C_GENERALPARMS.mMoveSpeed.mValue;
	mIkSystemParms->mBottomJointMoveSpeed = C_PROPERPARMS.mBaseFactor.mValue;
	mIkSystemParms->mRaiseSlowdownFactor  = C_PROPERPARMS.mRaiseDecelFactor.mValue;
	mIkSystemParms->mDownwardAccelFactor  = C_PROPERPARMS.mDownwardAccelFactor.mValue;
	mIkSystemParms->mMaxDecelFactor       = C_PROPERPARMS.mMaxDecelAccelFactor.mValue;
	mIkSystemParms->mMinDecelFactor       = C_PROPERPARMS.mMinDecelAccelFactor.mValue;
	mIkSystemParms->mHeightOffset         = C_PROPERPARMS.mLegSwing.mValue;
}

/**
 * @note Address: 0x802C0D3C
 * @note Size: 0x20
 */
void Obj::setIKSystemTargetPosition(Vector3f& targetpos) { mIkSystemMgr->mTargetPosition = targetpos; }

/**
 * @note Address: 0x802C0D5C
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
 * @note Address: 0x802C0DBC
 * @note Size: 0x60
 */
void Obj::doAnimationIKSystem()
{
	mIkSystemMgr->setAnimationCallBack();
	Vector3f translation = Vector3f(mIkSystemMgr->mTraceCentrePosition);
	mBaseTrMatrix.makeSRT(mScale, mRotation, translation);
}

/**
 * @note Address: 0x802C0E1C
 * @note Size: 0x24
 */
void Obj::finishAnimationIKSystem() { mIkSystemMgr->resetAnimationCallBack(); }

/**
 * @note Address: 0x802C0E40
 * @note Size: 0x24
 */
void Obj::startProgramedIK() { mIkSystemMgr->startProgramedIK(); }

/**
 * @note Address: 0x802C0E64
 * @note Size: 0x24
 */
void Obj::startIKMotion() { mIkSystemMgr->startIKMotion(); }

/**
 * @note Address: 0x802C0E88
 * @note Size: 0x24
 */
void Obj::finishIKMotion() { mIkSystemMgr->finishIKMotion(); }

/**
 * @note Address: 0x802C0EAC
 * @note Size: 0x24
 */
void Obj::forceFinishIKMotion() { mIkSystemMgr->forceFinishIKMotion(); }

/**
 * @note Address: 0x802C0ED0
 * @note Size: 0x24
 */
bool Obj::isFinishIKMotion() { return mIkSystemMgr->isFinishIKMotion(); }

/**
 * @note Address: 0x802C0EF4
 * @note Size: 0x24
 */
void Obj::startBlendMotion() { mIkSystemMgr->startBlendMotion(); }

/**
 * @note Address: 0x802C0F18
 * @note Size: 0x24
 */
void Obj::finishBlendMotion() { mIkSystemMgr->finishBlendMotion(); }

/**
 * @note Address: 0x802C0F3C
 * @note Size: 0x20
 */
Vector3f Obj::getTraceCentrePosition() { return mIkSystemMgr->mTraceCentrePosition; }

/**
 * @note Address: 0x802C0F5C
 * @note Size: 0x48
 */
void Obj::createShadowSystem() { mShadowMgr = new HoudaiShadowMgr(this); }

/**
 * @note Address: 0x802C0FA4
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
 * @note Address: 0x802C1018
 * @note Size: 0x24
 */
void Obj::doAnimationShadowSystem() { mShadowMgr->update(); }

/**
 * @note Address: 0x802C103C
 * @note Size: 0x78
 */
void Obj::setShotGunEmitKeepTimerOn()
{
	f32 duration        = C_PROPERPARMS.mMaxShootingOn.mValue - C_PROPERPARMS.mMinShootingOn.mValue;
	mShotGunSearchTimer = randWeightFloat(duration);
}

/**
 * @note Address: 0x802C10B4
 * @note Size: 0x78
 */
void Obj::setShotGunEmitKeepTimerOff()
{
	f32 duration        = C_PROPERPARMS.mMaxShootingOff.mValue - C_PROPERPARMS.mMinShootingOff.mValue;
	mShotGunSearchTimer = randWeightFloat(duration);
}

/**
 * @note Address: 0x802C112C
 * @note Size: 0x30
 */
void Obj::updateShotGunTimer()
{
	if (isEvent(0, EB_TakingDamage)) {
		mShotGunBurstTimer = 0.0f;
	} else {
		mShotGunBurstTimer += sys->mDeltaTime;
	}
}

/**
 * @note Address: 0x802C115C
 * @note Size: 0x1C
 */
bool Obj::isTransitShotGunState() { return (mShotGunBurstTimer > C_GENERALPARMS.mSearchHeight.mValue); }

/**
 * @note Address: 0x802C1178
 * @note Size: 0x48
 */
void Obj::createShotGun() { mShotGunMgr = new HoudaiShotGunMgr(this); }

/**
 * @note Address: 0x802C11C0
 * @note Size: 0x24
 */
void Obj::setupShotGun() { mShotGunMgr->setupShotGun(); }

/**
 * @note Address: 0x802C11E4
 * @note Size: 0x24
 */
void Obj::setShotGunTarget(Vector3f& target) { mShotGunMgr->setShotGunTarget(target); }

/**
 * @note Address: 0x802C1208
 * @note Size: 0x24
 */
void Obj::resetShotGunCallBack() { mShotGunMgr->resetCallBack(); }

/**
 * @note Address: 0x802C122C
 * @note Size: 0x24
 */
void Obj::setShotGunCallBack() { mShotGunMgr->setCallBack(); }

/**
 * @note Address: 0x802C1250
 * @note Size: 0x24
 */
void Obj::doUpdateShotGun() { mShotGunMgr->doUpdate(); }

/**
 * @note Address: 0x802C1274
 * @note Size: 0x24
 */
void Obj::doUpdateCommonShotGun() { mShotGunMgr->doUpdateCommon(); }

/**
 * @note Address: 0x802C1298
 * @note Size: 0x24
 */
void Obj::startShotGunRotation() { mShotGunMgr->startRotation(); }

/**
 * @note Address: 0x802C12BC
 * @note Size: 0x24
 */
void Obj::finishShotGunRotation() { mShotGunMgr->finishRotation(); }

/**
 * @note Address: 0x802C12E0
 * @note Size: 0x24
 */
bool Obj::isShotGunRotation() { return mShotGunMgr->isShotGunRotation(); }

/**
 * @note Address: 0x802C1304
 * @note Size: 0x24
 */
bool Obj::isShotGunLockOn() { return mShotGunMgr->isShotGunLockOn(); }

/**
 * @note Address: 0x802C1328
 * @note Size: 0x24
 */
bool Obj::isFinishShotGun() { return mShotGunMgr->isFinishShotGun(); }

/**
 * @note Address: 0x802C134C
 * @note Size: 0x5C
 */
void Obj::emitShotGun()
{
	mShotGunMgr->emitShotGun();
	getJAIObject()->startSound(PSSE_EN_HOUDAI_SHOT, 0);
}

/**
 * @note Address: 0x802C13A8
 * @note Size: 0x24
 */
void Obj::forceFinishShotGun() { return mShotGunMgr->forceFinishShotGun(); }

/**
 * @note Address: 0x802C13CC
 * @note Size: 0x38
 */
void Obj::setupCollision()
{
	CollPart* collpart = mCollTree->getCollPart('rht1');
	if (collpart) {
		collpart->makeTubeTree();
	}
}

/**
 * @note Address: 0x802C1404
 * @note Size: 0xC8
 */
void Obj::startBossChargeBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
	PSM::assertIsBoss(soundObj);
	soundObj->jumpRequest(PSM::EnemyMidBoss::BossBgm_AttackPrep);
}

/**
 * @note Address: 0x802C14CC
 * @note Size: 0xDC
 */
void Obj::startBossAttackLoopBGM()
{
	if (!mIsAttackMusicLooping) {
		mIsAttackMusicLooping    = true;
		PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
		PSM::assertIsBoss(soundObj);
		soundObj->jumpRequest(PSM::EnemyMidBoss::BossBgm_AttackLong);
	}
}

/**
 * @note Address: 0x802C15A8
 * @note Size: 0xD8
 */
void Obj::finishBossAttackLoopBGM()
{
	if (mIsAttackMusicLooping) {
		mIsAttackMusicLooping    = false;
		PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
		PSM::assertIsBoss(soundObj);
		soundObj->jumpRequest(PSM::EnemyMidBoss::BossBgm_MainLoop);
	}
}

/**
 * @note Address: 0x802C1680
 * @note Size: 0xD4
 */
void Obj::startStoneStateBossAttackLoopBGM()
{
	if (mIsAttackMusicLooping) {
		PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
		PSM::assertIsBoss(soundObj);
		soundObj->jumpRequest(PSM::EnemyMidBoss::BossBgm_MainLoop);
	}
}

/**
 * @note Address: 0x802C1754
 * @note Size: 0xD4
 */
void Obj::finishStoneStateBossAttackLoopBGM()
{
	if (mIsAttackMusicLooping) {
		PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
		PSM::assertIsBoss(soundObj);
		soundObj->jumpRequest(PSM::EnemyMidBoss::BossBgm_AttackLong);
	}
}

/**
 * @note Address: 0x802C1828
 * @note Size: 0xC8
 */
void Obj::startBossFlickBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
	PSM::assertIsBoss(soundObj);
	soundObj->jumpRequest(PSM::EnemyMidBoss::BossBgm_Flick);
}

/**
 * @note Address: 0x802C18F0
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
 * @note Address: 0x802C19EC
 * @note Size: 0xBC
 */
void Obj::resetBossAppearBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
	PSM::assertIsBoss(soundObj);
	soundObj->setAppearFlag(false);
}

/**
 * @note Address: 0x802C1AA8
 * @note Size: 0xBC
 */
void Obj::setBossAppearBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
	PSM::assertIsBoss(soundObj);
	soundObj->setAppearFlag(true);
}

/**
 * @note Address: 0x802C1B64
 * @note Size: 0x5CC
 */
void Obj::createEffect()
{
	for (int i = 0; i < 4; i++) {
		mAppearHahenFootFX[i] = new efx::THdamaOnHahen2;
	}

	for (int i = 0; i < 3; i++) {
		mDeadElecAFX[i] = new efx::TDamaDeadElecA;
		mSteamFX[i]     = new efx::THdamaSteam;
		mChimneyFX[i]   = new efx::THdamaSteamSt;
		mHahenFX[i]     = new efx::THdamaHahen;
	}

	for (int i = 0; i < 2; i++) {
		mSmokeFX[i] = new efx::TDamaSmoke;
	}

	mAppearHahenFX = new efx::THdamaOnHahen1;
	mOnSteam1FX    = new efx::THdamaOnSteam1;
	mSteamBodyFX   = new efx::THdamaSteamBd;
	mDeadBombFX    = new efx::THdamaDeadbomb;
	mDeadSteamFX   = new efx::THdamaDeadSteam;
}

/**
 * @note Address: 0x802C2130
 * @note Size: 0x1A8
 */
void Obj::setupEffect()
{
	for (int i = 0; i < 4; i++) {
		mAppearHahenFootFX[i]->setPosPosptrs(&mJointPositions[i][1], &mJointPositions[i][2]);
	}

	for (int i = 0; i < 3; i++) {
		mDeadElecAFX[i]->setPosPosptrs(&mJointPositions[0][i], &mJointPositions[0][i + 1]);
	}

	mHahenFX[0]->setPosPosptrs(&mJointPositions[2][1], &mJointPositions[2][2]);
	mHahenFX[1]->setPosPosptrs(&mJointPositions[1][1], &mJointPositions[1][2]);
	mHahenFX[2]->setPosPosptrs(&mJointPositions[3][1], &mJointPositions[3][2]);

	mSmokeFX[0]->mPosition = &mJointPositions[0][1];
	mSmokeFX[1]->mPosition = &mJointPositions[0][2];

	SysShape::Joint* joint = mModel->getJoint("kosi");
	mAppearHahenFX->mMtx   = joint->getWorldMatrix();
	mOnSteam1FX->mMtx      = joint->getWorldMatrix();
	mSteamBodyFX->mMtx     = joint->getWorldMatrix();
	mDeadBombFX->setMtxptr(joint->getWorldMatrix()->mMatrix.mtxView);
	mDeadSteamFX->setMtxptr(joint->getWorldMatrix()->mMatrix.mtxView);

	char* jointNames[] = { "ef_01_loc", "ef_02_loc", "ef_03_loc" };

	for (int i = 0; i < 3; i++) {
		joint               = mModel->getJoint(jointNames[i]);
		mSteamFX[i]->mMtx   = joint->getWorldMatrix();
		mChimneyFX[i]->mMtx = joint->getWorldMatrix();
	}
}

/**
 * @note Address: 0x802C22D8
 * @note Size: 0x384
 */
void Obj::createOnGroundEffect(int footIdx, WaterBox* wbox)
{
	Vector3f effectPos = mJointPositions[footIdx][3];

	if (footIdx == 0) {
		if (wbox) {
			effectPos.y = *wbox->getSeaHeightPtr();

			efx::Arg fxArg(effectPos);
			efx::TDamaWalkw waterWalk;

			waterWalk.create(&fxArg);
			PSM::SeSound* sound = PSStartSoundVec(PSSE_EV_ITEM_LAND_WATER1_L, (Vec*)&mJointPositions[footIdx][3]);
			if (sound) {
				sound->setPitch(0.8f, 0, SOUNDPARAM_Unk0);
			}

		} else {
			efx::Arg fxArg(effectPos);
			efx::TOootaWalk walk;

			walk.create(&fxArg);
		}

		PSStartSoundVec(PSSE_EN_HOUDAI_METALFOOT, (Vec*)&mJointPositions[footIdx][3]);

	} else {
		if (wbox) {
			effectPos.y = *wbox->getSeaHeightPtr();

			efx::ArgScale fxArg(effectPos, 0.3f);
			efx::TEnemyDownWat waterWalk;

			waterWalk.create(&fxArg);

			PSM::SeSound* sound = PSStartSoundVec(PSSE_EV_ITEM_LAND_WATER1_M, (Vec*)&mJointPositions[footIdx][3]);
			if (sound) {
				sound->setPitch(1.2f, 0, SOUNDPARAM_Unk0);
			}

		} else {
			efx::Arg fxArg(effectPos);
			efx::TEnemyDownSmoke walk(1.0f);
			walk.mScale = 0.3f;

			walk.create(&fxArg);
		}

		if (mIsSmoking) {
			int jointIdx = 0;
			if (footIdx == 2) {
				jointIdx = 0;
			} else if (footIdx == 1) {
				jointIdx = 1;
			} else if (footIdx == 3) {
				jointIdx = 2;
			}

			mHahenFX[jointIdx]->create(nullptr);
		}

		PSStartSoundVec(PSSE_EN_HOUDAI_BAREFOOT, (Vec*)&mJointPositions[footIdx][3]);
	}
}

/**
 * @note Address: 0x802C265C
 * @note Size: 0x168
 */
void Obj::createOffGroundEffect(int footIdx, WaterBox* wbox)
{
	f32 healthRatio = mHealth / C_GENERALPARMS.mHealth.mValue;
	if (footIdx == 0) {
		if (healthRatio < 0.175f) {
			getJAIObject()->startSound(PSSE_EN_HOUDAI_RAISE_M3, 0);
		} else if (healthRatio < 0.35f) {
			getJAIObject()->startSound(PSSE_EN_HOUDAI_RAISE_M2, 0);
		} else {
			getJAIObject()->startSound(PSSE_EN_HOUDAI_RAISE_M1, 0);
		}
	} else {
		if (healthRatio < 0.175f) {
			getJAIObject()->startSound(PSSE_EN_HOUDAI_RAISE_B3, 0);
		} else if (healthRatio < 0.35f) {
			getJAIObject()->startSound(PSSE_EN_HOUDAI_RAISE_B2, 0);
		} else {
			getJAIObject()->startSound(PSSE_EN_HOUDAI_RAISE_B1, 0);
		}
	}
}

/**
 * @note Address: 0x802C27C4
 * @note Size: 0x5C
 */
void Obj::startPinchJointEffect()
{
	for (int i = 0; i < 2; i++) {
		mSmokeFX[i]->create(nullptr);
	}
}

/**
 * @note Address: 0x802C2820
 * @note Size: 0x58
 */
void Obj::finishPinchJointEffect()
{
	for (int i = 0; i < 2; i++) {
		mSmokeFX[i]->fade();
	}
}

/**
 * @note Address: 0x802C2878
 * @note Size: 0x194
 */
void Obj::createHoudaiDeadEffect()
{
	for (int i = 0; i < 4; i++) {
		for (int j = 1; j < 3; j++) {
			efx::Arg fxArg(mJointPositions[i][j]);
			efx::TDamaDeadBomb deadBombFX;
			deadBombFX.create(&fxArg);
		}
	}

	for (int i = 0; i < 3; i++) {
		mDeadElecAFX[i]->create(nullptr);
	}

	mDeadSteamFX->create(nullptr);

	efx::Arg steamArg(this);
	efx::THdamaDeadSteamT steamFX;
	steamFX.create(&steamArg);

	finishPinchJointEffect();
}

/**
 * @note Address: 0x802C2A0C
 * @note Size: 0x120
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
 * @note Address: 0x802C2B2C
 * @note Size: 0xF0
 */
void Obj::createAppearEffect()
{
	efx::Arg fxArg(this);
	efx::THdamaOnSmoke smokeFX;
	smokeFX.create(&fxArg);

	mOnSteam1FX->create(nullptr);

	efx::THdamaOnSteam2 steamFX;
	steamFX.create(&fxArg);
}

/**
 * @note Address: 0x802C2C1C
 * @note Size: 0x34
 */
void Obj::createAppearHahenEffect() { mAppearHahenFX->create(nullptr); }

/**
 * @note Address: 0x802C2C50
 * @note Size: 0x3C
 */
void Obj::createAppearFootEffect(int footIdx) { mAppearHahenFootFX[footIdx]->create(nullptr); }

/**
 * @note Address: 0x802C2C8C
 * @note Size: 0x7C
 */
void Obj::startSteamEffect(bool doBodySteam)
{
	if (doBodySteam) {
		mSteamBodyFX->create(nullptr);
	}

	for (int i = 0; i < 3; i++) {
		mSteamFX[i]->create(nullptr);
	}
}

/**
 * @note Address: 0x802C2D08
 * @note Size: 0x6C
 */
void Obj::finishSteamEffect()
{
	mSteamBodyFX->fade();

	for (int i = 0; i < 3; i++) {
		mSteamFX[i]->fade();
	}
}

/**
 * @note Address: 0x802C2D74
 * @note Size: 0x5C
 */
void Obj::startChimneyEffect()
{
	for (int i = 0; i < 3; i++) {
		mChimneyFX[i]->create(nullptr);
	}
}

/**
 * @note Address: 0x802C2DD0
 * @note Size: 0x58
 */
void Obj::finishChimneyEffect()
{
	for (int i = 0; i < 3; i++) {
		mChimneyFX[i]->fade();
	}
}

/**
 * @note Address: 0x802C2E28
 * @note Size: 0x90
 */
void Obj::createShotGunOpenEffect()
{
	Vector3f effectPos = mModel->getJoint("kosi")->getWorldMatrix()->getColumn(3);

	efx::Arg fxArg(effectPos);
	efx::THdamaOpen openFX;
	openFX.create(&fxArg);
}

/**
 * @note Address: 0x802C2EB8
 * @note Size: 0x258
 */
void Obj::createDeadBombEffect()
{
	mDeadBombFX->create(nullptr);

	for (int i = 0; i < 4; i++) {
		if (i == 0) { // metal leg
			for (int j = 0; j < 3; j++) {
				efx::ArgPosPos fxArg(mJointPositions[i][j], mJointPositions[i][j + 1]);
				efx::THdamaDeadHahen2 deadFX;
				deadFX.create(&fxArg);
			}

		} else { // bare legs
			for (int j = 0; j < 3; j++) {
				efx::ArgPosPos fxArg(mJointPositions[i][j], mJointPositions[i][j + 1]);
				efx::THdamaDeadHahen1 deadFX;
				deadFX.create(&fxArg);
			}
		}
	}
}

/**
 * @note Address: 0x802C3110
 * @note Size: 0x17C
 */
void Obj::effectDrawOn()
{
	for (int i = 0; i < 2; i++) {
		mSmokeFX[i]->endDemoDrawOn();
	}

	for (int i = 0; i < 3; i++) {
		mHahenFX[i]->endDemoDrawOn();
		mDeadElecAFX[i]->endDemoDrawOn();
	}

	mAppearHahenFX->endDemoDrawOn();

	for (int i = 0; i < 4; i++) {
		mAppearHahenFootFX[i]->endDemoDrawOn();
	}

	mOnSteam1FX->endDemoDrawOn();
	mSteamBodyFX->endDemoDrawOn();

	for (int i = 0; i < 3; i++) {
		mSteamFX[i]->endDemoDrawOn();
		mChimneyFX[i]->endDemoDrawOn();
	}

	mDeadBombFX->endDemoDrawOn();
	mDeadSteamFX->endDemoDrawOn();

	mShotGunMgr->effectDrawOn();
}

/**
 * @note Address: 0x802C328C
 * @note Size: 0x17C
 */
void Obj::effectDrawOff()
{
	for (int i = 0; i < 2; i++) {
		mSmokeFX[i]->startDemoDrawOff();
	}

	for (int i = 0; i < 3; i++) {
		mHahenFX[i]->startDemoDrawOff();
		mDeadElecAFX[i]->startDemoDrawOff();
	}

	mAppearHahenFX->startDemoDrawOff();

	for (int i = 0; i < 4; i++) {
		mAppearHahenFootFX[i]->startDemoDrawOff();
	}

	mOnSteam1FX->startDemoDrawOff();
	mSteamBodyFX->startDemoDrawOff();

	for (int i = 0; i < 3; i++) {
		mSteamFX[i]->startDemoDrawOff();
		mChimneyFX[i]->startDemoDrawOff();
	}

	mDeadBombFX->startDemoDrawOff();
	mDeadSteamFX->startDemoDrawOff();

	mShotGunMgr->effectDrawOff();
}

} // namespace Houdai
} // namespace Game
