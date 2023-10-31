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

/*
 * --INFO--
 * Address:	802A57A4
 * Size:	000024
 */
void DamagumoGroundCallBack::invokeOnGround(int footIdx, WaterBox* wbox) { mObj->createOnGroundEffect(footIdx, wbox); }

/*
 * --INFO--
 * Address:	802A57C8
 * Size:	000024
 */
void DamagumoGroundCallBack::invokeOffGround(int footIdx, WaterBox* wbox) { mObj->createOffGroundEffect(footIdx, wbox); }

/*
 * --INFO--
 * Address:	802A57EC
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
 * Address:	802A5958
 * Size:	000034
 */
void Obj::constructor()
{
	EnemyBase::constructor();
	resetBossAppearBGM();
}

/*
 * --INFO--
 * Address:	802A598C
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	802A5990
 * Size:	000134
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

	mTargetPosition = mHomePosition;
	mShadowScale    = 0.0f;
	_2DC            = 0;
	mIsSmoking      = false;

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

/*
 * --INFO--
 * Address:	802A5AC4
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
 * Address:	802A5B14
 * Size:	000034
 */
void Obj::doUpdateCommon()
{
	EnemyBase::doUpdateCommon();
	updateBossBGM();
}

/*
 * --INFO--
 * Address:	802A5B48
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
 * Address:	802A5BE0
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	802A5BE4
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	802A5C04
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
 * Address:	802A5C50
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
 * Address:	802A5C8C
 * Size:	000050
 */
bool Obj::needShadow()
{
	if (EnemyBase::needShadow()) {
		return true;
	} else {
		return (u8)(getStateID() == DAMAGUMO_Land);
	}
}

/*
 * --INFO--
 * Address:	802A5CDC
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
 * Address:	802A5D78
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
 * Address:	802A5F24
 * Size:	000034
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	finishPinchJointEffect();
}

/*
 * --INFO--
 * Address:	802A5F58
 * Size:	00005C
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	EnemyFunc::flickStickPikmin(this, 1.0f, 10.0f, 0.0f, FLICK_BACKWARD_ANGLE, nullptr);
	if (mIsSmoking) {
		startPinchJointEffect();
	}
}

/*
 * --INFO--
 * Address:	802A5FB4
 * Size:	000020
 */
void Obj::doStartMovie() { effectDrawOff(); }

/*
 * --INFO--
 * Address:	802A5FD4
 * Size:	000020
 */
void Obj::doEndMovie() { effectDrawOn(); }

/*
 * --INFO--
 * Address:	802A5FF4
 * Size:	000060
 */
void Obj::getThrowupItemPosition(Vector3f* position)
{
	*position = mModel->getJoint("kosi")->getWorldMatrix()->getBasis(3);
	position->y -= 30.0f;
}

/*
 * --INFO--
 * Address:	802A6054
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
 * Address:	802A6068
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
			f32 range       = (C_PARMS->mGeneral.mTerritoryRadius.mValue - C_PARMS->mGeneral.mHomeRadius.mValue);
			f32 randDist    = C_PARMS->mGeneral.mHomeRadius.mValue + randWeightFloat(range);
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

/*
 * --INFO--
 * Address:	802A6300
 * Size:	00010C
 */
void Obj::createIKSystem()
{
	mIkSystemMgr    = new IKSystemMgr;
	mIkSystemParms  = new IKSystemParms;
	mGroundCallBack = new DamagumoGroundCallBack(this);
}

/*
 * --INFO--
 * Address:	802A640C
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
 * Address:	802A6530
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
 * Address:	802A65C0
 * Size:	000020
 */
void Obj::setIKSystemTargetPosition(Vector3f& targetPos) { mIkSystemMgr->mTargetPosition = targetPos; }

/*
 * --INFO--
 * Address:	802A65E0
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
 * Address:	802A6640
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
 * Address:	802A66A0
 * Size:	000024
 */
void Obj::finishAnimationIKSystem() { mIkSystemMgr->resetAnimationCallBack(); }

/*
 * --INFO--
 * Address:	802A66C4
 * Size:	000024
 */
void Obj::startProgramedIK() { mIkSystemMgr->startProgramedIK(); }

/*
 * --INFO--
 * Address:	802A66E8
 * Size:	000024
 */
void Obj::startIKMotion() { mIkSystemMgr->startIKMotion(); }

/*
 * --INFO--
 * Address:	802A670C
 * Size:	000024
 */
void Obj::finishIKMotion() { mIkSystemMgr->finishIKMotion(); }

/*
 * --INFO--
 * Address:	802A6730
 * Size:	000024
 */
void Obj::forceFinishIKMotion() { mIkSystemMgr->forceFinishIKMotion(); }

/*
 * --INFO--
 * Address:	802A6754
 * Size:	000024
 */
bool Obj::isFinishIKMotion() { return mIkSystemMgr->isFinishIKMotion(); }

/*
 * --INFO--
 * Address:	802A6778
 * Size:	000024
 */
void Obj::startBlendMotion() { mIkSystemMgr->startBlendMotion(); }

/*
 * --INFO--
 * Address:	802A679C
 * Size:	000024
 */
void Obj::finishBlendMotion() { mIkSystemMgr->finishBlendMotion(); }

/*
 * --INFO--
 * Address:	802A67C0
 * Size:	000020
 */
Vector3f Obj::getTraceCentrePosition() { return mIkSystemMgr->mTraceCentrePosition; }

/*
 * --INFO--
 * Address:	802A67E0
 * Size:	000024
 */
bool Obj::isCollisionCheck(CollPart* collpart) { return mIkSystemMgr->isCollisionCheck(collpart); }

/*
 * --INFO--
 * Address:	802A6804
 * Size:	000048
 */
void Obj::createShadowSystem() { mShadowMgr = new DamagumoShadowMgr(this); }

/*
 * --INFO--
 * Address:	802A684C
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
 * Address:	802A68C0
 * Size:	000024
 */
void Obj::doAnimationShadowSystem() { mShadowMgr->update(); }

/*
 * --INFO--
 * Address:	802A68E4
 * Size:	00004C
 */
void Obj::createMaterialAnimation() { mMatLoopAnimator = new Sys::MatLoopAnimator[2]; }

/*
 * --INFO--
 * Address:	802A6930
 * Size:	000060
 */
void Obj::startMaterialAnimation()
{
	mMatLoopAnimator[0].start(static_cast<Mgr*>(mMgr)->mTexAnimation);
	mMatLoopAnimator[1].start(static_cast<Mgr*>(mMgr)->mTevRegAnimation);
}

/*
 * --INFO--
 * Address:	802A6990
 * Size:	00013C
 */
void Obj::updateMaterialAnimation()
{
	if (_2DC) {
		f32 maxFrame;
		f32 currFrame = mMatLoopAnimator[1]._08;
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
		mMatLoopAnimator[1].setCurrentFrame((1.0f - mHealth / C_PARMS->mGeneral.mHealth.mValue) * 50.0f);
		mMatLoopAnimator[1].animate(0.0f);
	}
}

/*
 * --INFO--
 * Address:	802A6ACC
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
 * Address:	802A6B5C
 * Size:	00008C
 */
void Obj::createItemAndEnemy()
{
	if (mPelletDropCode.isNull()) {
		ShijimiChou::Mgr* specMgr = static_cast<ShijimiChou::Mgr*>(generalEnemyMgr->getEnemyMgr(EnemyTypeID::EnemyID_ShijimiChou));
		if (specMgr) {
			EnemyBirthArg birthArg;
			birthArg.mFaceDir = mFaceDir;
			getThrowupItemPosition(&birthArg.mPosition);
			specMgr->createGroupByBigFoot(birthArg, 25);
		}
	}
}

/*
 * --INFO--
 * Address:	802A6BE8
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
 * Address:	802A6CB0
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
 * Address:	802A6DAC
 * Size:	0000C4
 */
void Obj::resetBossAppearBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
	PSM::checkBoss(soundObj);
	soundObj->setAppearFlag(false);
	soundObj->_FF = 1;
}

/*
 * --INFO--
 * Address:	802A6E70
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
 * Address:	802A6F2C
 * Size:	0005BC
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

/*
 * --INFO--
 * Address:	802A756C
 * Size:	000184
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

/*
 * --INFO--
 * Address:	802A76F0
 * Size:	0001F0
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
	cameraMgr->startVibration(6, effectPos, 2);
	rumbleMgr->startRumble(14, effectPos, 2);
}

/*
 * --INFO--
 * Address:	802A78E0
 * Size:	000128
 */
void Obj::createOffGroundEffect(int footIdx, WaterBox* wbox)
{
	if (wbox) {
		mFootWFX[footIdx]->create(nullptr);
	} else {
		mFootFX[footIdx]->create(nullptr);
	}

	f32 healthRatio = mHealth / C_PARMS->mGeneral.mHealth.mValue;
	if (healthRatio < 0.175f) {
		getJAIObject()->startSound(PSSE_EN_DAMAGUMO_RAISE3, 0);
	} else if (healthRatio < 0.35f) {
		getJAIObject()->startSound(PSSE_EN_DAMAGUMO_RAISE2, 0);
	} else {
		getJAIObject()->startSound(PSSE_EN_DAMAGUMO_RAISE1, 0);
	}
}

/*
 * --INFO--
 * Address:	802A7A08
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
 * Address:	802A7BA8
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
 * Address:	802A7C00
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
 * Address:	802A7DC0
 * Size:	000250
 */
void Obj::updatePinchLife()
{
	if (!isAlive()) {
		return;
	}

	f32 healthRatio = mHealth / C_PARMS->mGeneral.mHealth.mValue;
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

/*
 * --INFO--
 * Address:	802A8010
 * Size:	000198
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

/*
 * --INFO--
 * Address:	802A81A8
 * Size:	000198
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

/*
 * --INFO--
 * Address:	802A8340
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

} // namespace Damagumo
} // namespace Game
