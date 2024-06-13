#include "Game/Entities/Damagumo.h"
#include "Game/Entities/ShijimiChou.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/generalEnemyMgr.h"
#include "Game/ConditionNotStick.h"
#include "Game/IKSystemBase.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "PSSystem/PSMainSide_ObjSound.h"
#include "PSM/EnemyBoss.h"
#include "Dolphin/rand.h"
#include "PS.h"
#include "nans.h"

namespace Game {
namespace Damagumo {

/**
 * @note Address: 0x802A57A4
 * @note Size: 0x24
 */
void DamagumoGroundCallBack::invokeOnGround(int footIdx, WaterBox* wbox) { mObj->createOnGroundEffect(footIdx, wbox); }

/**
 * @note Address: 0x802A57C8
 * @note Size: 0x24
 */
void DamagumoGroundCallBack::invokeOffGround(int footIdx, WaterBox* wbox) { mObj->createOffGroundEffect(footIdx, wbox); }

/**
 * @note Address: 0x802A57EC
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
 * @note Address: 0x802A5958
 * @note Size: 0x34
 */
void Obj::constructor()
{
	EnemyBase::constructor();
	resetBossAppearBGM();
}

/**
 * @note Address: 0x802A598C
 * @note Size: 0x4
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/**
 * @note Address: 0x802A5990
 * @note Size: 0x134
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	hardConstraintOn();

	disableEvent(0, EB_PlatformCollEnabled);
	disableEvent(0, EB_LeaveCarcass);

	mStateTimer    = 0.0f;
	mStateDuration = 0.0f;
	mNextState     = DAMAGUMO_NULL;

	mTargetPosition    = mHomePosition;
	mShadowScale       = 0.0f;
	mDoPlayDeadMatAnim = false;
	mIsSmoking         = false;

	setupIKSystem();
	setupShadowSystem();
	setupCollision();
	setupEffect();
	resetBossAppearBGM();
	shadowMgr->delShadow(this);
	startMaterialAnimation();

	mFsm->start(this, DAMAGUMO_Stay, nullptr);

	if (gameSystem && gameSystem->isZukanMode()) {
		mFsm->transit(this, DAMAGUMO_Land, nullptr);
	} else {
		doAnimationCullingOff();
	}
}

/**
 * @note Address: 0x802A5AC4
 * @note Size: 0x50
 */
void Obj::doUpdate()
{
	mFsm->exec(this);
	updatePinchLife();
	updateIKSystem();
}

/**
 * @note Address: 0x802A5B14
 * @note Size: 0x34
 */
void Obj::doUpdateCommon()
{
	EnemyBase::doUpdateCommon();
	updateBossBGM();
}

/**
 * @note Address: 0x802A5B48
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
 * @note Address: 0x802A5BE0
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics&) { }

/**
 * @note Address: 0x802A5BE4
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/**
 * @note Address: 0x802A5C04
 * @note Size: 0x4C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/**
 * @note Address: 0x802A5C50
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
 * @note Address: 0x802A5C8C
 * @note Size: 0x50
 */
bool Obj::needShadow()
{
	if (EnemyBase::needShadow()) {
		return true;
	} else {
		return (u8)(getStateID() == DAMAGUMO_Land);
	}
}

/**
 * @note Address: 0x802A5CDC
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
 * @note Address: 0x802A5D78
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
 * @note Address: 0x802A5F24
 * @note Size: 0x34
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	finishPinchJointEffect();
}

/**
 * @note Address: 0x802A5F58
 * @note Size: 0x5C
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	EnemyFunc::flickStickPikmin(this, 1.0f, 10.0f, 0.0f, FLICK_BACKWARD_ANGLE, nullptr);
	if (mIsSmoking) {
		startPinchJointEffect();
	}
}

/**
 * @note Address: 0x802A5FB4
 * @note Size: 0x20
 */
void Obj::doStartMovie() { effectDrawOff(); }

/**
 * @note Address: 0x802A5FD4
 * @note Size: 0x20
 */
void Obj::doEndMovie() { effectDrawOn(); }

/**
 * @note Address: 0x802A5FF4
 * @note Size: 0x60
 */
void Obj::getThrowupItemPosition(Vector3f* position)
{
	*position = mModel->getJoint("kosi")->getWorldMatrix()->getColumn(3);
	position->y -= 30.0f;
}

/**
 * @note Address: 0x802A6054
 * @note Size: 0x14
 */
void Obj::getThrowupItemVelocity(Vector3f* velocity)
{
	velocity->z = 0.0f;
	velocity->y = 0.0f;
	velocity->x = 0.0f;
}

/**
 * @note Address: 0x802A6068
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
			f32 range       = (C_GENERALPARMS.mTerritoryRadius.mValue - C_GENERALPARMS.mHomeRadius.mValue);
			f32 randDist    = C_GENERALPARMS.mHomeRadius.mValue + randWeightFloat(range);
			f32 angleToHome = JMath::atanTable_.atan2_(mPosition.x - mHomePosition.x, mPosition.z - mHomePosition.z);

			f32 randomAngle = randWeightFloat(PI);
			f32 fixedAngle  = HALF_PI;
			f32 randAngle   = angleToHome + randomAngle + fixedAngle; // dumb fix for regswap

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
 * @note Address: 0x802A6300
 * @note Size: 0x10C
 */
void Obj::createIKSystem()
{
	mIkSystemMgr    = new IKSystemMgr;
	mIkSystemParms  = new IKSystemParms;
	mGroundCallBack = new DamagumoGroundCallBack(this);
}

/**
 * @note Address: 0x802A640C
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
 * @note Address: 0x802A6530
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
 * @note Address: 0x802A65C0
 * @note Size: 0x20
 */
void Obj::setIKSystemTargetPosition(Vector3f& targetPos) { mIkSystemMgr->mTargetPosition = targetPos; }

/**
 * @note Address: 0x802A65E0
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
 * @note Address: 0x802A6640
 * @note Size: 0x60
 */
void Obj::doAnimationIKSystem()
{
	mIkSystemMgr->setAnimationCallBack();
	Vector3f translation = Vector3f(mIkSystemMgr->mTraceCentrePosition);
	mBaseTrMatrix.makeSRT(mScale, mRotation, translation);
}

/**
 * @note Address: 0x802A66A0
 * @note Size: 0x24
 */
void Obj::finishAnimationIKSystem() { mIkSystemMgr->resetAnimationCallBack(); }

/**
 * @note Address: 0x802A66C4
 * @note Size: 0x24
 */
void Obj::startProgramedIK() { mIkSystemMgr->startProgramedIK(); }

/**
 * @note Address: 0x802A66E8
 * @note Size: 0x24
 */
void Obj::startIKMotion() { mIkSystemMgr->startIKMotion(); }

/**
 * @note Address: 0x802A670C
 * @note Size: 0x24
 */
void Obj::finishIKMotion() { mIkSystemMgr->finishIKMotion(); }

/**
 * @note Address: 0x802A6730
 * @note Size: 0x24
 */
void Obj::forceFinishIKMotion() { mIkSystemMgr->forceFinishIKMotion(); }

/**
 * @note Address: 0x802A6754
 * @note Size: 0x24
 */
bool Obj::isFinishIKMotion() { return mIkSystemMgr->isFinishIKMotion(); }

/**
 * @note Address: 0x802A6778
 * @note Size: 0x24
 */
void Obj::startBlendMotion() { mIkSystemMgr->startBlendMotion(); }

/**
 * @note Address: 0x802A679C
 * @note Size: 0x24
 */
void Obj::finishBlendMotion() { mIkSystemMgr->finishBlendMotion(); }

/**
 * @note Address: 0x802A67C0
 * @note Size: 0x20
 */
Vector3f Obj::getTraceCentrePosition() { return mIkSystemMgr->mTraceCentrePosition; }

/**
 * @note Address: 0x802A67E0
 * @note Size: 0x24
 */
bool Obj::isCollisionCheck(CollPart* collpart) { return mIkSystemMgr->isCollisionCheck(collpart); }

/**
 * @note Address: 0x802A6804
 * @note Size: 0x48
 */
void Obj::createShadowSystem() { mShadowMgr = new DamagumoShadowMgr(this); }

/**
 * @note Address: 0x802A684C
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
 * @note Address: 0x802A68C0
 * @note Size: 0x24
 */
void Obj::doAnimationShadowSystem() { mShadowMgr->update(); }

/**
 * @note Address: 0x802A68E4
 * @note Size: 0x4C
 */
void Obj::createMaterialAnimation() { mMatLoopAnimator = new Sys::MatLoopAnimator[2]; }

/**
 * @note Address: 0x802A6930
 * @note Size: 0x60
 */
void Obj::startMaterialAnimation()
{
	mMatLoopAnimator[0].start(C_MGR->mTexAnimation);
	mMatLoopAnimator[1].start(C_MGR->mTevRegAnimation);
}

/**
 * @note Address: 0x802A6990
 * @note Size: 0x13C
 */
void Obj::updateMaterialAnimation()
{
	if (mDoPlayDeadMatAnim) {
		f32 maxFrame;
		f32 currFrame = mMatLoopAnimator[1].mCurrFrame;
		if (mMatLoopAnimator[1].mAnimation) {
			maxFrame = mMatLoopAnimator[1].mAnimation->getFrameMax();
		} else {
			maxFrame = 0.0f;
		}
		f32 factor = (1.0f) / (maxFrame - 50.0f);

		mMatLoopAnimator[0].animate(0.0f);

		if (currFrame < maxFrame) {
			mMatLoopAnimator[1].animate(30.0f);
		} else {
			mMatLoopAnimator[1].animate(0.0f);
		}

		mShadowScale -= factor;
		if (mShadowScale < 0.0f) {
			mShadowScale = 0.0f;
		}
	} else {
		mMatLoopAnimator[0].animate(30.0f);
		mMatLoopAnimator[1].setCurrentFrame((1.0f - mHealth / C_GENERALPARMS.mHealth.mValue) * 50.0f);
		mMatLoopAnimator[1].animate(0.0f);
	}
}

/**
 * @note Address: 0x802A6ACC
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
 * @note Address: 0x802A6B5C
 * @note Size: 0x8C
 */
void Obj::createItemAndEnemy()
{
	if (mPelletDropCode.isNull()) {
		ShijimiChou::Mgr* specMgr = static_cast<ShijimiChou::Mgr*>(generalEnemyMgr->getEnemyMgr(EnemyTypeID::EnemyID_ShijimiChou));
		if (specMgr) {
			EnemyBirthArg birthArg;
			birthArg.mFaceDir = mFaceDir;
			getThrowupItemPosition(&birthArg.mPosition);
			specMgr->createGroupByBigFoot(birthArg, SHIJIMICHOU_GROUP_COUNT);
		}
	}
}

/**
 * @note Address: 0x802A6BE8
 * @note Size: 0xC8
 */
void Obj::startBossFlickBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
	PSM::assertIsBoss(soundObj);
	soundObj->jumpRequest(PSM::EnemyMidBoss::BossBgm_Flick);
}

/**
 * @note Address: 0x802A6CB0
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
 * @note Address: 0x802A6DAC
 * @note Size: 0xC4
 */
void Obj::resetBossAppearBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
	PSM::assertIsBoss(soundObj);
	soundObj->setAppearFlag(false);
	soundObj->mHasReset = 1;
}

/**
 * @note Address: 0x802A6E70
 * @note Size: 0xBC
 */
void Obj::setBossAppearBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
	PSM::assertIsBoss(soundObj);
	soundObj->setAppearFlag(true);
}

/**
 * @note Address: 0x802A6F2C
 * @note Size: 0x5BC
 */
void Obj::createEffect()
{
	for (int i = 0; i < 4; i++) {
		mFootFX[i]  = new efx::TDamaFoot;
		mFootWFX[i] = new efx::TDamaFootw;

		for (int j = 0; j < 3; j++) {
			mHahenFX[i][j]     = new efx::TDamaHahen;
			mDeadElecAFX[i][j] = new efx::TDamaDeadElecA;
		}

		for (int j = 0; j < 2; j++) {
			mDeadElecBFX[i][j]  = new efx::TDamaDeadElecB;
			mDeadHahenAFX[i][j] = new efx::TDamaDeadHahenA;
		}

		mDeadHahenBFX[i] = new efx::TDamaDeadHahenB;
	}

	for (int i = 0; i < 3; i++) {
		mSmokeFX[i] = new efx::TDamaSmoke;
	}

	mDeadHahenC1FX = new efx::TDamaDeadHahenC1;
	mDeadHahenC2FX = new efx::TDamaDeadHahenC2;
}

/**
 * @note Address: 0x802A756C
 * @note Size: 0x184
 */
void Obj::setupEffect()
{
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
	}

	mDeadHahenC1FX->mMtx = mModel->getJoint("tama1")->getWorldMatrix();
	mDeadHahenC2FX->mMtx = mModel->getJoint("tama2")->getWorldMatrix();
}

/**
 * @note Address: 0x802A76F0
 * @note Size: 0x1F0
 */
void Obj::createOnGroundEffect(int footIdx, WaterBox* wbox)
{
	Vector3f effectPos = mJointPositions[footIdx][3];

	if (wbox) {
		effectPos.y = *wbox->getSeaHeightPtr();

		efx::Arg fxArg(effectPos);
		efx::TDamaWalkw waterWalk;

		waterWalk.create(&fxArg);
		PSStartSoundVec(PSSE_EV_ITEM_LAND_WATER1_XL, (Vec*)&mJointPositions[footIdx][3]);

	} else {
		efx::Arg fxArg(effectPos);
		efx::TDamaWalk walk;

		walk.create(&fxArg);
	}

	if (mIsSmoking) {
		for (int i = 0; i < 3; i++) {
			mHahenFX[footIdx][i]->create(nullptr);
		}
	}

	PSStartSoundVec(PSSE_EN_SPIDER_WALK, (Vec*)&mJointPositions[footIdx][3]);
	cameraMgr->startVibration(VIBTYPE_LightFastShort, effectPos, CAMNAVI_Both);
	rumbleMgr->startRumble(RUMBLETYPE_Fixed14, effectPos, RUMBLEID_Both);
}

/**
 * @note Address: 0x802A78E0
 * @note Size: 0x128
 */
void Obj::createOffGroundEffect(int footIdx, WaterBox* wbox)
{
	if (wbox) {
		mFootWFX[footIdx]->create(nullptr);
	} else {
		mFootFX[footIdx]->create(nullptr);
	}

	f32 healthRatio = mHealth / C_GENERALPARMS.mHealth.mValue;
	if (healthRatio < 0.175f) {
		getJAIObject()->startSound(PSSE_EN_DAMAGUMO_RAISE3, 0);
	} else if (healthRatio < 0.35f) {
		getJAIObject()->startSound(PSSE_EN_DAMAGUMO_RAISE2, 0);
	} else {
		getJAIObject()->startSound(PSSE_EN_DAMAGUMO_RAISE1, 0);
	}
}

/**
 * @note Address: 0x802A7A08
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
 * @note Address: 0x802A7BA8
 * @note Size: 0x58
 */
void Obj::finishPinchJointEffect()
{
	for (int i = 0; i < 3; i++) {
		mSmokeFX[i]->fade();
	}
}

/**
 * @note Address: 0x802A7C00
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
 * @note Address: 0x802A7DC0
 * @note Size: 0x250
 */
void Obj::updatePinchLife()
{
	if (!isAlive()) {
		return;
	}

	f32 healthRatio = mHealth / C_GENERALPARMS.mHealth.mValue;
	if (mIsSmoking) {
		if (healthRatio > 0.35f) {
			mIsSmoking = false;
			finishPinchJointEffect();
		}

	} else if (healthRatio < 0.35f) {
		mIsSmoking = true;
		startPinchJointEffect();

		getJAIObject()->startSound(PSSE_EN_DAMAGUMO_SMOKE, 0);
	}
}

/**
 * @note Address: 0x802A8010
 * @note Size: 0x198
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
}

/**
 * @note Address: 0x802A81A8
 * @note Size: 0x198
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
}

/**
 * @note Address: 0x802A8340
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

} // namespace Damagumo
} // namespace Game
