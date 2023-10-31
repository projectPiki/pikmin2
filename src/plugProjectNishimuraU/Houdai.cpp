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

/*
 * --INFO--
 * Address:	802BFCB0
 * Size:	000024
 */
void HoudaiGroundCallBack::invokeOnGround(int footIdx, WaterBox* wbox) { mObj->createOnGroundEffect(footIdx, wbox); }

/*
 * --INFO--
 * Address:	802BFCD4
 * Size:	000024
 */
void HoudaiGroundCallBack::invokeOffGround(int footIdx, WaterBox* wbox) { mObj->createOffGroundEffect(footIdx, wbox); }

/*
 * --INFO--
 * Address:	802BFCF8
 * Size:	00016C
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

/*
 * --INFO--
 * Address:	802BFE64
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	802BFE68
 * Size:	000144
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

/*
 * --INFO--
 * Address:	802BFFAC
 * Size:	000054
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	finishSteamEffect();
	finishChimneyEffect();
	forceFinishShotGun();
	EnemyBase::onKill(killArg);
}

/*
 * --INFO--
 * Address:	802C0000
 * Size:	000088
 */
void Obj::setParameters()
{
	// if we're in Hole of Heroes, change territory radius
	if (gameSystem && gameSystem->mIsInCave && gameSystem->isStoryMode()) {
		SingleGameSection* section = static_cast<SingleGameSection*>(gameSystem->mSection);
		if (section && section->getCaveID() == 'l_02') {
			C_PARMS->mGeneral.mTerritoryRadius.mValue = C_PROPERPARMS.mFp20.mValue;
		}
	}

	EnemyBase::setParameters();
}

/*
 * --INFO--
 * Address:	802C0088
 * Size:	0000B4
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

/*
 * --INFO--
 * Address:	802C013C
 * Size:	00003C
 */
void Obj::doUpdateCommon()
{
	EnemyBase::doUpdateCommon();
	doUpdateCommonShotGun();
	updateBossBGM();
}

/*
 * --INFO--
 * Address:	802C0178
 * Size:	0000A0
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

/*
 * --INFO--
 * Address:	802C0218
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics& gfx) { }

/*
 * --INFO--
 * Address:	802C021C
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	802C023C
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
 * Address:	802C0288
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
 * Address:	802C02C4
 * Size:	0000B4
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

/*
 * --INFO--
 * Address:	802C0378
 * Size:	000054
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

/*
 * --INFO--
 * Address:	802C03CC
 * Size:	000078
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

/*
 * --INFO--
 * Address:	802C0444
 * Size:	000020
 */
void Obj::doStartMovie() { effectDrawOff(); }

/*
 * --INFO--
 * Address:	802C0464
 * Size:	000020
 */
void Obj::doEndMovie() { effectDrawOn(); }

/*
 * --INFO--
 * Address:	802C0484
 * Size:	000050
 */
void Obj::getThrowupItemPosition(Vector3f* position) { *position = mModel->getJoint("kosi")->getWorldMatrix()->getBasis(3); }

/*
 * --INFO--
 * Address:	802C04D4
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
 * Address:	802C04E8
 * Size:	0000C8
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

/*
 * --INFO--
 * Address:	802C05B0
 * Size:	000298
 */
void Obj::getTargetPosition()
{
	if (sqrDistanceXZ(mPosition, mHomePosition) < SQUARE(C_PARMS->mGeneral.mTerritoryRadius())) {
		ConditionNotStickClient condition(this);
		Piki* piki = EnemyFunc::getNearestPikmin(this, C_PARMS->mGeneral.mViewAngle.mValue, C_PARMS->mGeneral.mSightRadius.mValue, nullptr,
		                                         &condition);
		if (piki) {
			mTargetPosition = piki->getPosition();
		} else if (sqrDistanceXZ(mPosition, mTargetPosition) < 625.0f) {
			f32 range    = (C_PARMS->mGeneral.mTerritoryRadius.mValue - C_PARMS->mGeneral.mHomeRadius.mValue);
			f32 randDist = C_PARMS->mGeneral.mHomeRadius.mValue + randWeightFloat(range);
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

/*
 * --INFO--
 * Address:	802C0848
 * Size:	000234
 */
void Obj::setShotGunTargetPosition()
{
	ConditionNotStickClient condition(this);
	Creature* target;
	if (mTargetNearest) { // target nearest navi or piki
		target = EnemyFunc::getNearestPikminOrNavi(this, 180.0f, C_PARMS->mGeneral.mSearchDistance.mValue, nullptr, nullptr, &condition);

	} else { // target nearest navi's nearest piki (i.e. party)
		target = EnemyFunc::getNearestNavi(this, 180.0f, C_PARMS->mGeneral.mSearchDistance.mValue, nullptr, nullptr);
		if (target) {
			target = EnemyFunc::getNearestPikmin(target, 180.0f, C_PARMS->mGeneral.mSearchDistance.mValue, nullptr, &condition);
		}
	}

	if (target) {
		mShotGunTargetPosition = target->getPosition();
	} else if (mShotGunBurstTimer > 1.0f) {
		mShotGunBurstTimer = 0.0f;
		f32 randAngle      = randWeightFloat(TAU);
		f32 randDist       = randWeightFloat(C_PARMS->mGeneral.mSearchDistance.mValue);

		mShotGunTargetPosition = Vector3f(randDist * sinf(randAngle) + mPosition.x, mPosition.y, randDist * cosf(randAngle) + mPosition.z);
	}

	setShotGunTarget(mShotGunTargetPosition);
}

/*
 * --INFO--
 * Address:	802C0A7C
 * Size:	00010C
 */
void Obj::createIKSystem()
{
	mIkSystemMgr    = new IKSystemMgr;
	mIkSystemParms  = new IKSystemParms;
	mGroundCallBack = new HoudaiGroundCallBack(this);
}

/*
 * --INFO--
 * Address:	802C0B88
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
 * Address:	802C0CAC
 * Size:	000090
 */
void Obj::setIKParameter()
{
	mIkSystemParms->_28           = 0.67f;
	mIkSystemParms->_38           = C_PARMS->mGeneral.mMaxTurnAngle.mValue;
	mIkSystemParms->_2C           = C_PARMS->mGeneral.mMoveSpeed.mValue;
	mIkSystemParms->_14           = C_PROPERPARMS.mFp01.mValue;
	mIkSystemParms->_18           = C_PROPERPARMS.mFp02.mValue;
	mIkSystemParms->_1C           = C_PROPERPARMS.mFp03.mValue;
	mIkSystemParms->_20           = C_PROPERPARMS.mFp05.mValue;
	mIkSystemParms->_24           = C_PROPERPARMS.mFp04.mValue;
	mIkSystemParms->mHeightOffset = C_PROPERPARMS.mFp06.mValue;
}

/*
 * --INFO--
 * Address:	802C0D3C
 * Size:	000020
 */
void Obj::setIKSystemTargetPosition(Vector3f& targetpos) { mIkSystemMgr->mTargetPosition = targetpos; }

/*
 * --INFO--
 * Address:	802C0D5C
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
 * Address:	802C0DBC
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
 * Address:	802C0E1C
 * Size:	000024
 */
void Obj::finishAnimationIKSystem() { mIkSystemMgr->resetAnimationCallBack(); }

/*
 * --INFO--
 * Address:	802C0E40
 * Size:	000024
 */
void Obj::startProgramedIK() { mIkSystemMgr->startProgramedIK(); }

/*
 * --INFO--
 * Address:	802C0E64
 * Size:	000024
 */
void Obj::startIKMotion() { mIkSystemMgr->startIKMotion(); }

/*
 * --INFO--
 * Address:	802C0E88
 * Size:	000024
 */
void Obj::finishIKMotion() { mIkSystemMgr->finishIKMotion(); }

/*
 * --INFO--
 * Address:	802C0EAC
 * Size:	000024
 */
void Obj::forceFinishIKMotion() { mIkSystemMgr->forceFinishIKMotion(); }

/*
 * --INFO--
 * Address:	802C0ED0
 * Size:	000024
 */
bool Obj::isFinishIKMotion() { return mIkSystemMgr->isFinishIKMotion(); }

/*
 * --INFO--
 * Address:	802C0EF4
 * Size:	000024
 */
void Obj::startBlendMotion() { mIkSystemMgr->startBlendMotion(); }

/*
 * --INFO--
 * Address:	802C0F18
 * Size:	000024
 */
void Obj::finishBlendMotion() { mIkSystemMgr->finishBlendMotion(); }

/*
 * --INFO--
 * Address:	802C0F3C
 * Size:	000020
 */
Vector3f Obj::getTraceCentrePosition() { return mIkSystemMgr->mTraceCentrePosition; }

/*
 * --INFO--
 * Address:	802C0F5C
 * Size:	000048
 */
void Obj::createShadowSystem() { mShadowMgr = new HoudaiShadowMgr(this); }

/*
 * --INFO--
 * Address:	802C0FA4
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
 * Address:	802C1018
 * Size:	000024
 */
void Obj::doAnimationShadowSystem() { mShadowMgr->update(); }

/*
 * --INFO--
 * Address:	802C103C
 * Size:	000078
 */
void Obj::setShotGunEmitKeepTimerOn()
{
	f32 duration        = C_PROPERPARMS.mFp10.mValue - C_PROPERPARMS.mFp11.mValue;
	mShotGunSearchTimer = randWeightFloat(duration);
}

/*
 * --INFO--
 * Address:	802C10B4
 * Size:	000078
 */
void Obj::setShotGunEmitKeepTimerOff()
{
	f32 duration        = C_PROPERPARMS.mFp12.mValue - C_PROPERPARMS.mFp13.mValue;
	mShotGunSearchTimer = randWeightFloat(duration);
}

/*
 * --INFO--
 * Address:	802C112C
 * Size:	000030
 */
void Obj::updateShotGunTimer()
{
	if (isEvent(0, EB_TakingDamage)) {
		mShotGunBurstTimer = 0.0f;
	} else {
		mShotGunBurstTimer += sys->mDeltaTime;
	}
}

/*
 * --INFO--
 * Address:	802C115C
 * Size:	00001C
 */
bool Obj::isTransitShotGunState() { return (mShotGunBurstTimer > C_PARMS->mGeneral.mSearchHeight.mValue); }

/*
 * --INFO--
 * Address:	802C1178
 * Size:	000048
 */
void Obj::createShotGun() { mShotGunMgr = new HoudaiShotGunMgr(this); }

/*
 * --INFO--
 * Address:	802C11C0
 * Size:	000024
 */
void Obj::setupShotGun() { mShotGunMgr->setupShotGun(); }

/*
 * --INFO--
 * Address:	802C11E4
 * Size:	000024
 */
void Obj::setShotGunTarget(Vector3f& target) { mShotGunMgr->setShotGunTarget(target); }

/*
 * --INFO--
 * Address:	802C1208
 * Size:	000024
 */
void Obj::resetShotGunCallBack() { mShotGunMgr->resetCallBack(); }

/*
 * --INFO--
 * Address:	802C122C
 * Size:	000024
 */
void Obj::setShotGunCallBack() { mShotGunMgr->setCallBack(); }

/*
 * --INFO--
 * Address:	802C1250
 * Size:	000024
 */
void Obj::doUpdateShotGun() { mShotGunMgr->doUpdate(); }

/*
 * --INFO--
 * Address:	802C1274
 * Size:	000024
 */
void Obj::doUpdateCommonShotGun() { mShotGunMgr->doUpdateCommon(); }

/*
 * --INFO--
 * Address:	802C1298
 * Size:	000024
 */
void Obj::startShotGunRotation() { mShotGunMgr->startRotation(); }

/*
 * --INFO--
 * Address:	802C12BC
 * Size:	000024
 */
void Obj::finishShotGunRotation() { mShotGunMgr->finishRotation(); }

/*
 * --INFO--
 * Address:	802C12E0
 * Size:	000024
 */
bool Obj::isShotGunRotation() { return mShotGunMgr->isShotGunRotation(); }

/*
 * --INFO--
 * Address:	802C1304
 * Size:	000024
 */
bool Obj::isShotGunLockOn() { return mShotGunMgr->isShotGunLockOn(); }

/*
 * --INFO--
 * Address:	802C1328
 * Size:	000024
 */
bool Obj::isFinishShotGun() { return mShotGunMgr->isFinishShotGun(); }

/*
 * --INFO--
 * Address:	802C134C
 * Size:	00005C
 */
void Obj::emitShotGun()
{
	mShotGunMgr->emitShotGun();
	getJAIObject()->startSound(PSSE_EN_HOUDAI_SHOT, 0);
}

/*
 * --INFO--
 * Address:	802C13A8
 * Size:	000024
 */
void Obj::forceFinishShotGun() { return mShotGunMgr->forceFinishShotGun(); }

/*
 * --INFO--
 * Address:	802C13CC
 * Size:	000038
 */
void Obj::setupCollision()
{
	CollPart* collpart = mCollTree->getCollPart('rht1');
	if (collpart) {
		collpart->makeTubeTree();
	}
}

/*
 * --INFO--
 * Address:	802C1404
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
 * Address:	802C14CC
 * Size:	0000DC
 */
void Obj::startBossAttackLoopBGM()
{
	if (!mIsAttackMusicLooping) {
		mIsAttackMusicLooping    = true;
		PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
		PSM::checkBoss(soundObj);
		soundObj->jumpRequest(8);
	}
}

/*
 * --INFO--
 * Address:	802C15A8
 * Size:	0000D8
 */
void Obj::finishBossAttackLoopBGM()
{
	if (mIsAttackMusicLooping) {
		mIsAttackMusicLooping    = false;
		PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
		PSM::checkBoss(soundObj);
		soundObj->jumpRequest(1);
	}
}

/*
 * --INFO--
 * Address:	802C1680
 * Size:	0000D4
 */
void Obj::startStoneStateBossAttackLoopBGM()
{
	if (mIsAttackMusicLooping) {
		PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
		PSM::checkBoss(soundObj);
		soundObj->jumpRequest(1);
	}
}

/*
 * --INFO--
 * Address:	802C1754
 * Size:	0000D4
 */
void Obj::finishStoneStateBossAttackLoopBGM()
{
	if (mIsAttackMusicLooping) {
		PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
		PSM::checkBoss(soundObj);
		soundObj->jumpRequest(8);
	}
}

/*
 * --INFO--
 * Address:	802C1828
 * Size:	0000C8
 */
void Obj::startBossFlickBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
	PSM::checkBoss(soundObj);
	soundObj->jumpRequest(4);
}

/*
 * --INFO--
 * Address:	802C18F0
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
 * Address:	802C19EC
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
 * Address:	802C1AA8
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
 * Address:	802C1B64
 * Size:	0005CC
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

/*
 * --INFO--
 * Address:	802C2130
 * Size:	0001A8
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

/*
 * --INFO--
 * Address:	802C22D8
 * Size:	000384
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
				sound->setPitch(0.8f, 0, 0);
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
				sound->setPitch(1.2f, 0, 0);
			}

		} else {
			efx::Arg fxArg(effectPos);
			efx::TEnemyDownSmoke walk;
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

/*
 * --INFO--
 * Address:	802C265C
 * Size:	000168
 */
void Obj::createOffGroundEffect(int footIdx, WaterBox* wbox)
{
	f32 healthRatio = mHealth / C_PARMS->mGeneral.mHealth.mValue;
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

/*
 * --INFO--
 * Address:	802C27C4
 * Size:	00005C
 */
void Obj::startPinchJointEffect()
{
	for (int i = 0; i < 2; i++) {
		mSmokeFX[i]->create(nullptr);
	}
}

/*
 * --INFO--
 * Address:	802C2820
 * Size:	000058
 */
void Obj::finishPinchJointEffect()
{
	for (int i = 0; i < 2; i++) {
		mSmokeFX[i]->fade();
	}
}

/*
 * --INFO--
 * Address:	802C2878
 * Size:	000194
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

/*
 * --INFO--
 * Address:	802C2A0C
 * Size:	000120
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
 * Address:	802C2B2C
 * Size:	0000F0
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

/*
 * --INFO--
 * Address:	802C2C1C
 * Size:	000034
 */
void Obj::createAppearHahenEffect() { mAppearHahenFX->create(nullptr); }

/*
 * --INFO--
 * Address:	802C2C50
 * Size:	00003C
 */
void Obj::createAppearFootEffect(int footIdx) { mAppearHahenFootFX[footIdx]->create(nullptr); }

/*
 * --INFO--
 * Address:	802C2C8C
 * Size:	00007C
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

/*
 * --INFO--
 * Address:	802C2D08
 * Size:	00006C
 */
void Obj::finishSteamEffect()
{
	mSteamBodyFX->fade();

	for (int i = 0; i < 3; i++) {
		mSteamFX[i]->fade();
	}
}

/*
 * --INFO--
 * Address:	802C2D74
 * Size:	00005C
 */
void Obj::startChimneyEffect()
{
	for (int i = 0; i < 3; i++) {
		mChimneyFX[i]->create(nullptr);
	}
}

/*
 * --INFO--
 * Address:	802C2DD0
 * Size:	000058
 */
void Obj::finishChimneyEffect()
{
	for (int i = 0; i < 3; i++) {
		mChimneyFX[i]->fade();
	}
}

/*
 * --INFO--
 * Address:	802C2E28
 * Size:	000090
 */
void Obj::createShotGunOpenEffect()
{
	Vector3f effectPos = mModel->getJoint("kosi")->getWorldMatrix()->getBasis(3);

	efx::Arg fxArg(effectPos);
	efx::THdamaOpen openFX;
	openFX.create(&fxArg);
}

/*
 * --INFO--
 * Address:	802C2EB8
 * Size:	000258
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

/*
 * --INFO--
 * Address:	802C3110
 * Size:	00017C
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

/*
 * --INFO--
 * Address:	802C328C
 * Size:	00017C
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
