#include "Game/Entities/UmiMushi.h"
#include "Game/Navi.h"
#include "Game/EnemyFunc.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "PSSystem/PSMainSide_ObjSound.h"
#include "JSystem/J3D/J3DMtxBuffer.h"
#include "JSystem/JMath.h"
#include "Dolphin/rand.h"
#include "PS.h"

namespace Game {
namespace UmiMushi {

static const char unusedString[] = "umiMushi";

Obj* curU;

/**
 * @note Address: 0x80383100
 * @note Size: 0x38
 */

static bool eyeScaleCallBack(J3DJoint* joint, int t)
{
	if (t == 0 && curU) {
		curU->eyeScaleMtxCalc();
	}
	return true;
};

/**
 * @note Address: 0x80383138
 * @note Size: 0x38
 */
static bool weakScaleCallBack(J3DJoint* joint, int t)
{
	if (t == 0 && curU) {
		curU->weakScaleMtxCalc();
	}
	return true;
};

/**
 * @note Address: 0x80383170
 * @note Size: 0xB4
 */
void Obj::setParameters()
{
	EnemyBase::setParameters();
	f32 scale = 1.0f;
	if (mBloysterType == EnemyTypeID::EnemyID_UmiMushiBlind) {
		scale = 0.5f;
	}
	mScaleModifier = scale;
	mScale         = Vector3f(scale);
	mCollTree->mPart->setScale(scale);
	mCurLodSphere.mRadius = scale * C_GENERALPARMS.mOffCameraRadius.mValue;
	if (mBloysterType == EnemyTypeID::EnemyID_UmiMushiBlind) {
		C_GENERALPARMS.mHeightOffsetFromFloor.mValue = 50.0f;
	}
	mCollTree->getCollPart('weak')->setScale(C_PARMS->mTailScale); // scale of weak point (tail bulb)
}

/**
 * @note Address: 0x80383224
 * @note Size: 0x30
 */
f32 Obj::getBodyRadius()
{
	if (isEvent(0, EB_Bittered)) {
		if (mBloysterType == EnemyTypeID::EnemyID_UmiMushiBlind) {
			return 50.0f;
		}
		return 100.0f;
	}
	return 0.0f;
}

/**
 * @note Address: 0x80383254
 * @note Size: 0x20
 */
void Obj::birth(Vector3f& position, f32 faceDirection)
{
	EnemyBase::birth(position, faceDirection);
}

/**
 * @note Address: 0x80383274
 * @note Size: 0x5A8
 */

void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	disableEvent(0, EB_DeathEffectEnabled);
	mHeadJoint = mModel->getJoint("head_joint1");
	P2ASSERTLINE(124, mHeadJoint);
	mTargetNavi             = nullptr;
	mGoalPosition           = mHomePosition;
	mCantSearchTargetTimer  = 0;
	mLastCheckedPosition    = mHomePosition;
	mMoveCheckIntervalTimer = 0;
	mReachGoalStopTimer     = 0;
	mWalkRotateAngle        = 0.0f;
	mTargetNavi             = nullptr; // second null initialization of targetNavi
	mNeedNaviTargetSound    = 0;
	mChaseSoundTimer        = 0;
	mNextState              = UMIMUSHI_NULL;

	mNormalColor2.r = -25;
	mNormalColor2.g = -100;
	mNormalColor2.b = -30;

	mOlimarColor1.r = 60;
	mOlimarColor1.g = -115;
	mOlimarColor1.b = -115;

	mOlimarColor2.r = 0;
	mOlimarColor2.g = -180;
	mOlimarColor2.b = -180;

	mLouieColor1.r = -30;
	mLouieColor1.g = -30;
	mLouieColor1.b = 50;

	mLouieColor2.r = -80;
	mLouieColor2.g = -80;
	mLouieColor2.b = 0;

	mNormalColor1.r = 0;
	mNormalColor1.g = -25;
	mNormalColor1.b = -75;

	mPrevTailColor   = mNormalColor1;
	mActiveTailColor = mNormalColor1;

	curU = nullptr;

	mFsm->start(this, UMIMUSHI_Walk, nullptr);

	P2ASSERTLINE(157, mMatAnim);
	mMatAnim->start(C_MGR->mTexAnimation);

	P2ASSERTLINE(160, mShadowMgr);
	mShadowMgr->init();

	J3DModelData* modelData = mModel->mJ3dModel->mModelData;
	P2ASSERTLINE(166, modelData);

	u16 matIdx    = modelData->mMaterialTable.mMaterialNames->getIndex("cc_mat1_v");
	mTailMaterial = modelData->mMaterialTable.mMaterials[matIdx];

	P2ASSERTLINE(171, mTailMaterial);

	if (mBloysterType == EnemyTypeID::EnemyID_UmiMushi) {
		PSM::EnemyMidBoss* bossSoundObj = static_cast<PSM::EnemyMidBoss*>(mSoundObj);
		checkMidBoss(bossSoundObj);
		bossSoundObj->setAppearFlag(false);
		bossSoundObj->_118 = true;
	} else {
		setParameters();
		f32 health = C_PROPERPARMS.mBlindHealth.mValue;
		mHealth    = health;
		mMaxHealth = health;
		mEyeScale  = 0.45f;
		P2ASSERTLINE(189, mModel);
		J3DModelData* modelData                                 = mModel->mJ3dModel->mModelData;
		mEyeJointIdx                                            = mModel->getJointIndex("eyes_joint1");
		mWeakJointIdx                                           = mModel->getJointIndex("weak_joint2");
		modelData->mJointTree.mJoints[mEyeJointIdx]->mFunction  = UmiMushi::eyeScaleCallBack;
		modelData->mJointTree.mJoints[mWeakJointIdx]->mFunction = UmiMushi::weakScaleCallBack;
	}
	mDropGroup     = EDG_None;
	mHamonPosition = mPosition;
	P2ASSERTLINE(212, mEfxHamon);
	efx::Arg efxArg(mHamonPosition);
	mEfxHamon->create(&efxArg);
	mEfxHamon->setGlobalScale(mScaleModifier);

	P2ASSERTLINE(218, mEfxWeakRed);
	P2ASSERTLINE(219, mEfxWeakBlue);
	Matrixf* modelMtx = mModel->getJoint("weak_joint2")->getWorldMatrix();
	mEfxWeakRed->setMtxptr(modelMtx->mMatrix.mtxView);
	mEfxWeakBlue->setMtxptr(modelMtx->mMatrix.mtxView);

	P2ASSERTLINE(225, mEfxEyeRed[0]);
	P2ASSERTLINE(226, mEfxEyeRed[1]);

	P2ASSERTLINE(228, mEfxEyeBlue[0]);
	P2ASSERTLINE(229, mEfxEyeBlue[1]);

	modelMtx = mModel->getJoint("ef_eye_r")->getWorldMatrix();
	mEfxEyeRed[0]->setMtxptr(modelMtx->mMatrix.mtxView);
	mEfxEyeBlue[0]->setMtxptr(modelMtx->mMatrix.mtxView);

	modelMtx = mModel->getJoint("ef_eye_l")->getWorldMatrix();
	mEfxEyeRed[1]->setMtxptr(modelMtx->mMatrix.mtxView);
	mEfxEyeBlue[1]->setMtxptr(modelMtx->mMatrix.mtxView);

	P2ASSERTLINE(239, mEfxEat);
	P2ASSERTLINE(240, mEfxBubble);

	mEatJointMtx = mModel->getJoint("bero_joint1")->getWorldMatrix();

	mEfxEat->mMtx    = mEatJointMtx;
	mEfxBubble->mMtx = mEatJointMtx;
}

/**
 * @note Address: 0x8038381C
 * @note Size: 0x428
 */
Obj::Obj()
    : mHeadJoint(nullptr)
    , mTargetNavi(nullptr)
    , mDoSkipEyeCalc(false)
    , mTailMaterial(nullptr)
    , mMatAnim(nullptr)
    , mShadowMgr(nullptr)
{
	mEfxHamon      = nullptr;
	mEfxWeakRed    = nullptr;
	mEfxWeakBlue   = nullptr;
	mEfxEyeRed[0]  = nullptr;
	mEfxEyeRed[1]  = nullptr;
	mEfxEyeBlue[0] = nullptr;
	mEfxEyeBlue[1] = nullptr;
	mEfxEat        = nullptr;
	mEfxBubble     = nullptr;
	mEatJointMtx   = nullptr;
	mFsm           = nullptr;
	mJointIndices  = nullptr;

	mAnimator = new ProperAnimator;
	setFSM(new FSM);
	mMatAnim   = new Sys::MatLoopAnimator;
	mShadowMgr = new UmimushiShadowMgr(this);

	mEfxHamon = new efx::TUmiHamon(&mHamonPosition);

	mEfxWeakRed  = new efx::TUmiWeakRed;
	mEfxWeakBlue = new efx::TUmiWeakBlue;

	mEfxEyeRed[0]  = new efx::TUmiEyeRed;
	mEfxEyeBlue[0] = new efx::TUmiEyeBlue;
	mEfxEyeRed[1]  = new efx::TUmiEyeRed;
	mEfxEyeBlue[1] = new efx::TUmiEyeBlue;

	mEfxEat    = new efx::TUmiEat;
	mEfxBubble = new efx::TUmiDeadawa;
}

/**
 * @note Address: 0x80383C44
 * @note Size: 0x4C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/**
 * @note Address: 0x80383C90
 * @note Size: 0x90
 */
void Obj::doUpdate()
{
	mFsm->exec(this);
	mHamonPosition  = mPosition; // blobing pos??
	WaterBox* water = mWaterBox;
	if (water) {
		mHamonPosition.y = *water->getSeaHeightPtr();
	} else {
		mHamonPosition.y -= 50.0f;
	}
}

/**
 * @note Address: 0x80383D20
 * @note Size: 0x4B0
 */
void Obj::doAnimationCullingOff()
{

	if (mBloysterType == EnemyTypeID::EnemyID_UmiMushiBlind) {
		curU = this;
	}
	EnemyBase::doAnimationCullingOff();
	mShadowMgr->update();
	if (mTargetNavi && mNeedNaviTargetSound) {
		if (mChaseSoundTimer == 0) {
			if (mTargetNavi->mNaviIndex == NAVIID_Olimar) {
				mSoundObj->startSound(PSSE_EN_UMI_SEARCH_ORIMER, 0);
			} else {
				mSoundObj->startSound(PSSE_EN_UMI_SEARCH_LUGIE, 0);
			}
		}
		mChaseSoundTimer++;
		if (mChaseSoundTimer >= 30) {
			mChaseSoundTimer = 0;
		}
	}
	if (mBloysterType == EnemyTypeID::EnemyID_UmiMushi) {
		PSM::EnemyBoss* bossSound = static_cast<PSM::EnemyBoss*>(mSoundObj);
		assertIsBoss(bossSound);
		if (bossSound) {
			if (mSticked) {
				bossSound->postPikiAttack(true);
			} else {
				bossSound->postPikiAttack(true);
			}
		}
	}
	Mtx* worldMtxPtr;
	if (mBloysterType == EnemyTypeID::EnemyID_UmiMushiBlind) {

		for (int slot = 0; slot < mMouthSlots.getMax(); slot++) {
			if (!mMouthSlots.getStuckCreature(slot))
				continue;

			Mtx* mtxs = mModel->mJ3dModel->mMtxBuffer->mWorldMatrices;
			int idx   = mJointIndices[slot];

			worldMtxPtr   = &mtxs[idx];
			Mtx& worldMtx = *worldMtxPtr;

			Vector3f vec0(worldMtx[0][0], worldMtx[1][0], worldMtx[2][0]);
			Vector3f vec1(worldMtx[0][1], worldMtx[1][1], worldMtx[2][1]);
			Vector3f vec2(worldMtx[0][2], worldMtx[1][2], worldMtx[2][2]);
			// Vector3f vec3 (worldMtx[0][3], worldMtx[1][3], worldMtx[2][3]);

			f32 mtxFactor = vec1.normalise();
			mtxFactor *= 2.0f;
			if (mtxFactor > 2.0f) {
				mtxFactor = 2.0f;
			}
			PSVECCrossProduct((Vec*)&vec1, (Vec*)&vec2, (Vec*)&vec0);
			vec0.normalise();
			PSVECCrossProduct((Vec*)&vec0, (Vec*)&vec1, (Vec*)&vec2);
			vec2.normalise();

			worldMtx[0][0] = vec0.x * mtxFactor;
			worldMtx[1][0] = vec0.y * mtxFactor;
			worldMtx[2][0] = vec0.z * mtxFactor;

			worldMtx[0][1] = vec1.x * mtxFactor;
			worldMtx[1][1] = vec1.y * mtxFactor;
			worldMtx[2][1] = vec1.z * mtxFactor;

			worldMtx[0][2] = vec2.x * mtxFactor;
			worldMtx[1][2] = vec2.y * mtxFactor;
			worldMtx[2][2] = vec2.z * mtxFactor;
		}
	}
	curU = nullptr;
}

/**
 * @note Address: 0x803841D0
 * @note Size: 0x34
 */
void Obj::doAnimationCullingOn()
{
	EnemyBase::doAnimationCullingOn();
	createColorEffect();
}

/**
 * @note Address: 0x80384204
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics& gfx)
{
}

/**
 * @note Address: 0x80384208
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx)
{
	EnemyBase::doDebugDraw(gfx);
}

/**
 * @note Address: 0x80384228
 * @note Size: 0x98
 */
void Obj::changeMaterial()
{
	J3DModel* model = mModel->mJ3dModel;
	mTailMaterial->mTevBlock->setTevColor(0, mActiveTailColor);
	model->calcMaterial();
	mMatAnim->animate(30.0f);
}

/**
 * @note Address: 0x803842C0
 * @note Size: 0xDC
 */
void Obj::doStartMovie()
{
	mEfxHamon->startDemoDrawOff();
	mEfxWeakRed->startDemoDrawOff();
	mEfxWeakBlue->startDemoDrawOff();
	mEfxEyeRed[0]->startDemoDrawOff();
	mEfxEyeRed[1]->startDemoDrawOff();
	mEfxEyeBlue[0]->startDemoDrawOff();
	mEfxEyeBlue[1]->startDemoDrawOff();
	mEfxEat->startDemoDrawOff();
	mEfxBubble->startDemoDrawOff();
}

/**
 * @note Address: 0x8038439C
 * @note Size: 0xDC
 */
void Obj::doEndMovie()
{
	mEfxHamon->endDemoDrawOn();
	mEfxWeakRed->endDemoDrawOn();
	mEfxWeakBlue->endDemoDrawOn();
	mEfxEyeRed[0]->endDemoDrawOn();
	mEfxEyeRed[1]->endDemoDrawOn();
	mEfxEyeBlue[0]->endDemoDrawOn();
	mEfxEyeBlue[1]->endDemoDrawOn();
	mEfxEat->endDemoDrawOn();
	mEfxBubble->endDemoDrawOn();
}

/**
 * @note Address: 0x80384478
 * @note Size: 0x90
 */
void Obj::getShadowParam(ShadowParam& parms)
{
	mHeadJoint->getWorldMatrix()->getTranslation(parms.mPosition);
	parms.mPosition.y                 = mPosition.y + 5.0f;
	parms.mBoundingSphere.mPosition.x = 0.0f;
	parms.mBoundingSphere.mPosition.y = 1.0f;
	parms.mBoundingSphere.mPosition.z = 0.0f;
	parms.mBoundingSphere.mRadius     = 10.0f;
	parms.mSize                       = mScaleModifier * 80.0f;
}

/**
 * @note Address: 0x80384508
 * @note Size: 0x40
 */
void Obj::doSimulation(f32 speed)
{
	--mCantSearchTargetTimer;
	if (mCantSearchTargetTimer < 0) {
		mCantSearchTargetTimer = 0;
	}
	EnemyBase::doSimulation(speed);
}

/**
 * @note Address: 0x80384548
 * @note Size: 0x164
 */
bool Obj::damageCallBack(Creature* creature, f32 strength, CollPart* part)
{
	if (isEvent(0, EB_Bittered)) {
		addDamage(strength, 1.0f);
		return true;
	}
	P2ASSERTLINE(678, creature);
	creature->isPiki();
	Piki* piki = static_cast<Piki*>(creature);
	if (part) {
		if (piki->isAlive() && piki->isStickTo()) {
			addDamage(strength, 1.0f);
			return true;
		}
	} else {
		if (piki->isAlive() && piki->getPosition().y < mPosition.y + 50.0f) {
			addDamage(strength * C_PROPERPARMS.mDamageRate.mValue, 1.0f);
			return true;
		}
	}
	return false;
}

/**
 * @note Address: 0x803846AC
 * @note Size: 0xBC
 */
bool Obj::pressCallBack(Creature* creature, f32 strength, CollPart* part)
{

	P2ASSERTLINE(714, creature);
	if (creature->isPiki()) {
		Piki* piki = static_cast<Piki*>(creature);

		if (piki->getKind() == Purple) {
			strength *= C_PROPERPARMS.mPurpleDamageRate.mValue;
		}
	}
	return EnemyBase::pressCallBack(creature, strength, part);
}

/**
 * @note Address: 0x80384768
 * @note Size: 0xBC
 */
bool Obj::hipdropCallBack(Creature* creature, f32 strength, CollPart* part)
{
	P2ASSERTLINE(733, creature);
	if (creature->isPiki()) {
		Piki* piki = static_cast<Piki*>(creature);

		if (piki->getKind() == Purple) {
			strength *= C_PROPERPARMS.mPurpleDamageRate.mValue;
		}
	}
	return EnemyBase::hipdropCallBack(creature, strength, part);
}

/**
 * @note Address: 0x80384824
 * @note Size: 0xAC
 */
bool Obj::earthquakeCallBack(Creature* creature, f32 damage)
{
	P2ASSERTLINE(752, creature);
	if (creature->isPiki() && (int)static_cast<Piki*>(creature)->mPikiKind == Purple) {
		damage *= C_PROPERPARMS.mPurpleDamageRate.mValue;
	}

	return EnemyBase::earthquakeCallBack(creature, damage);
}

/**
 * @note Address: 0x803848D0
 * @note Size: 0x20
 */
void Obj::collisionCallback(CollEvent& event)
{
	EnemyBase::collisionCallback(event);
}

/**
 * @note Address: 0x803848F0
 * @note Size: 0x130
 */
void Obj::initMouthSlots()
{
	mMouthSlots.alloc(7);
	char* mouthSlotNames[7] = { "kamu_joint1", "kamu_joint2", "kamu_joint3", "kamu_joint4", "kamu_joint5", "kamu_joint6", "kamu_joint7" };
	mJointIndices           = new u16[7];

	for (int i = 0; i < mMouthSlots.getMax(); i++) {
		mMouthSlots.setup(i, mModel, mouthSlotNames[i]);
		u32 jointIdx     = mModel->getJointIndex(mouthSlotNames[i]);
		mJointIndices[i] = jointIdx;
		if (mBloysterType == EnemyTypeID::EnemyID_UmiMushiBlind) {
			mMouthSlots.getSlot(i)->mRadius = 25.0f;
		} else {
			mMouthSlots.getSlot(i)->mRadius = 30.0f;
		}
	}
}

/**
 * @note Address: 0x80384A20
 * @note Size: 0x94
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	mCollTree->getCollPart('head')->mSpecialID = 'st__';
	mCollTree->getCollPart('kuti')->mSpecialID = 'st__';
	mCollTree->getCollPart('ketu')->mSpecialID = 'st__';
	fadeAllEffect();
}

/**
 * @note Address: 0x80384AB4
 * @note Size: 0xBC
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	mCollTree->getCollPart('head')->mSpecialID = '____';
	mCollTree->getCollPart('kuti')->mSpecialID = '____';
	mCollTree->getCollPart('ketu')->mSpecialID = '____';
	EnemyFunc::flickStickPikmin(this, C_GENERALPARMS.mShakeChance.mValue, C_GENERALPARMS.mShakeKnockback.mValue,
	                            C_GENERALPARMS.mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);
	mFlickTimer = 0.0f;
	createColorEffect();
}

/**
 * @note Address: 0x80384B70
 * @note Size: 0x28
 */
void Obj::startCarcassMotion()
{
	EnemyBase::startMotion(UMIANIM_Carry, nullptr);
}

/**
 * @note Address: 0x80384B98
 * @note Size: 0x4C
 */
void Obj::doGetLifeGaugeParam(LifeGaugeParam& settings)
{
	EnemyBase::doGetLifeGaugeParam(settings);
	if (mBloysterType == EnemyTypeID::EnemyID_UmiMushiBlind) {
		settings.mPosition.y = 60.0f;
	}
}

/**
 * @note Address: 0x80384BE4
 * @note Size: 0x5C
 */
bool Obj::isReachToGoal(f32 radius)
{
	mReachGoalStopTimer++;
	if (mReachGoalStopTimer > 800) {
		mReachGoalStopTimer = 0;
		return true;
	}
	return (u8)(mPosition.sqrDistance2D(mGoalPosition) < SQUARE(radius));
}

/**
 * @note Address: 0x80384C40
 * @note Size: 0x358
 */
void Obj::walkFunc()
{
	f32 faceDirRads;
	f32 speed         = C_GENERALPARMS.mMoveSpeed.mValue;
	f32 rate          = C_PARMS->mWalkAngleSpeed;
	f32 rotationAccel = C_GENERALPARMS.mTurnSpeed.mValue;
	f32 rotationSpeed = C_GENERALPARMS.mMaxTurnAngle.mValue;

	mWalkRotateAngle += C_PARMS->mRotateAngleDelta;
	if (mWalkRotateAngle > 360.0f) {
		mWalkRotateAngle -= 360.0f;
	}

	f32 rotationAngle = sin(mWalkRotateAngle);
	f32 rotationDelta = rate * rotationAngle;
	if (!C_PARMS->mCanRotate) {
		rotationDelta = 0.0f;
	}

	faceDirRads = TORADIANS(rotationDelta);
	mFaceDir    = mPrevFaceDir;
	turnToTarget(mGoalPosition, rotationAccel, rotationSpeed);

	f32 deltaFaceDir = mFaceDir + faceDirRads;

	f32 x = sinf(deltaFaceDir) * speed;
	f32 y = getTargetVelocity().y;
	f32 z = cosf(deltaFaceDir);

	mPrevFaceDir      = mFaceDir;
	f32 faceDirOffset = roundAng(faceDirRads);
	updateFaceDir(mFaceDir + faceDirOffset);
	mTargetVelocity = Vector3f(x, y, speed * z); // sure

	// check bloyster has moved far enough in the past 120 frames, or else make it forget what it was doing (why does morimura do this)
	mMoveCheckIntervalTimer++;
	if (mMoveCheckIntervalTimer > 120) {
		if (mPosition.sqrDistance2D(mLastCheckedPosition) < SQUARE(30.0f)) {
			mCantSearchTargetTimer = 120;
			mTargetCreature        = nullptr;
			mGoalPosition          = mHomePosition;
		}
		mLastCheckedPosition    = mPosition;
		mMoveCheckIntervalTimer = 0;
	}
	mSoundObj->startSound(PSSE_EN_UMI_ZURUZURU, 0);
}

/**
 * @note Address: 0x80384F98
 * @note Size: 0x150
 */
void Obj::setNextGoal()
{
	f32 rad = C_GENERALPARMS.mTerritoryRadius();
	if (gameSystem && gameSystem->mIsInCave) {
		rad = C_PROPERPARMS.mCaveTerritory();
	}

	mGoalPosition = mHomePosition;
	f32 randAngle = TAU * randFloat();
	mGoalPosition.x += rad * sinf(randAngle);
	mGoalPosition.z += rad * cosf(randAngle);
}

/**
 * @note Address: 0x803850E8
 * @note Size: 0x810
 */
void Obj::changeColor()
{
	f32 frame = getMotionFrame() - 1.0f; // f31

	if (getStateID() == UMIMUSHI_Find) {
		f32 weight2 = 0.0f; // f30
		f32 weight1 = 1.0f; // f29
		if (getCurrAnimIndex() == 10) {
			frame /= (getMotionFrameMax() - 1.0f);
			if (mCurAnim->mType == KEYEVENT_END) {
				frame = 1.0f;
			}

			f32 sinTheta = sinf((3.0f * PI / 2.0f) * frame);
			weight2      = absF(sinTheta);
			weight1      = 1.0f - weight2;
		} else if (mTargetNavi) {
			if (frame < 10.0f) {
				frame /= 10.0f;
				mActiveTailColor.r = ((f32)mNormalColor1.r) * frame + ((f32)mPrevTailColor.r) * (1.0f - frame);
				mActiveTailColor.g = ((f32)mNormalColor1.g) * frame + ((f32)mPrevTailColor.g) * (1.0f - frame);
				mActiveTailColor.b = ((f32)mNormalColor1.b) * frame + ((f32)mPrevTailColor.b) * (1.0f - frame);
			}

			if (frame < 48.0f) {
				return;
			}

			frame -= 48.0f;
			frame /= (getMotionFrameMax() - 48.0f) - 1.0f;
			if (mCurAnim->mType == KEYEVENT_END) {
				frame = 1.0f;
			}

			f32 sinTheta = sinf((3.0f * PI / 2.0f) * frame);
			weight2      = absF(sinTheta);
			weight1      = 1.0f - weight2;
		}

		if (mTargetNavi->mNaviIndex == NAVIID_Olimar) { // red
			mActiveTailColor.r = weight2 * ((f32)mOlimarColor2.r) + weight1 * ((f32)mOlimarColor1.r);
			mActiveTailColor.g = weight2 * ((f32)mOlimarColor2.g) + weight1 * ((f32)mOlimarColor1.g);
			mActiveTailColor.b = weight2 * ((f32)mOlimarColor2.b) + weight1 * ((f32)mOlimarColor1.b);
			return;
		}
		// blue
		mActiveTailColor.r = weight2 * ((f32)mLouieColor2.r) + weight1 * ((f32)mLouieColor1.r);
		mActiveTailColor.g = weight2 * ((f32)mLouieColor2.g) + weight1 * ((f32)mLouieColor1.g);
		mActiveTailColor.b = weight2 * ((f32)mLouieColor2.b) + weight1 * ((f32)mLouieColor1.b);
		return;
	}

	if (frame <= 100.0f) {
		frame *= 0.01f;
	} else {
		frame = 1.0f;
	}

	f32 weight2 = sinf((PI / 2.0f) * frame);
	f32 weight1 = 1.0f - weight2;

	if (mTargetNavi) {
		if (mTargetNavi->mNaviIndex == NAVIID_Olimar) {
			mActiveTailColor.r = weight2 * ((f32)mNormalColor2.r) + weight1 * ((f32)mOlimarColor2.r);
			mActiveTailColor.g = weight2 * ((f32)mNormalColor2.g) + weight1 * ((f32)mOlimarColor2.g);
			mActiveTailColor.b = weight2 * ((f32)mNormalColor2.b) + weight1 * ((f32)mOlimarColor2.b);
			return;
		}

		mActiveTailColor.r = weight2 * ((f32)mNormalColor2.r) + weight1 * ((f32)mLouieColor2.r);
		mActiveTailColor.g = weight2 * ((f32)mNormalColor2.g) + weight1 * ((f32)mLouieColor2.g);
		mActiveTailColor.b = weight2 * ((f32)mNormalColor2.b) + weight1 * ((f32)mLouieColor2.b);
		return;
	}

	mActiveTailColor.r = weight2 * ((f32)mNormalColor2.r) + weight1 * ((f32)mNormalColor1.r);
	mActiveTailColor.g = weight2 * ((f32)mNormalColor2.g) + weight1 * ((f32)mNormalColor1.g);
	mActiveTailColor.b = weight2 * ((f32)mNormalColor2.b) + weight1 * ((f32)mNormalColor1.b);
}

/**
 * @note Address: 0x803858F8
 * @note Size: 0x1C0
 */
void Obj::resetColor()
{
	f32 frame = getMotionFrame() - 1.0f; // f31
	frame /= (getMotionFrameMax() - 1.0f);
	if (mCurAnim->mType == KEYEVENT_END) {
		frame = 1.0f;
	}

	f32 weight2 = absF(sinf((3.0f * PI / 2.0f) * frame));
	f32 weight1 = 1.0f - weight2;

	mActiveTailColor.r = weight2 * ((f32)mNormalColor1.r) + weight1 * ((f32)mPrevTailColor.r);
	mActiveTailColor.g = weight2 * ((f32)mNormalColor1.g) + weight1 * ((f32)mPrevTailColor.g);
	mActiveTailColor.b = weight2 * ((f32)mNormalColor1.b) + weight1 * ((f32)mPrevTailColor.b);
}

/**
 * @note Address: 0x80385AB8
 * @note Size: 0x1BC
 */
f32 Obj::turnFunc()
{
	if (mTargetNavi) {
		mGoalPosition = mTargetNavi->getPosition();
	}

	mSoundObj->startSound(PSSE_EN_UMI_ZURUZURU, 0);

	Vector3f targetPos = mGoalPosition;
	f32 factor         = 1.0f;
	if (mBloysterType == EnemyTypeID::EnemyID_UmiMushiBlind) {
		factor = C_PARMS->mBlindTurnRateReduction;
	}

	f32 angleDist = turnToTarget(targetPos, factor * C_PROPERPARMS.mRotateSpeed(), factor * C_PROPERPARMS.mRotateSpeedMax());
	return absF(angleDist);
}

/**
 * @note Address: 0x80385C74
 * @note Size: 0x14
 */
void Obj::resetWalkParm()
{
	mPrevFaceDir     = mFaceDir;
	mWalkRotateAngle = 0.0f;
}

/**
 * @note Address: 0x80385C88
 * @note Size: 0x248
 */
bool Obj::isChangeNavi()
{
	if (mBloysterType == EnemyTypeID::EnemyID_UmiMushiBlind) {
		return false;
	}

	Navi* navi;
	if (gameSystem && gameSystem->isTwoPlayerMode()) {
		navi = EnemyFunc::getNearestNavi(this, 360.0f, C_GENERALPARMS.mSearchDistance(), nullptr, nullptr);
	} else {
		navi = naviMgr->getActiveNavi();
	}

	if (navi) {
		f32 dist = C_GENERALPARMS.mSearchDistance();
		if (mTargetNavi) {
			dist *= 1.2f;
		}

		dist *= dist;
		if (navi->isAlive()) {
			Vector3f naviPos = Vector3f(navi->getPosition().x, navi->getPosition().y, navi->getPosition().z);
			Vector3f pos(mPosition.x, mPosition.y, mPosition.z);
			if (pos.sqrDistance(naviPos) < dist) {
				if (mTargetNavi != navi) {
					mPrevTailColor       = mActiveTailColor;
					mTargetNavi          = navi;
					mTargetCreature      = mTargetNavi;
					mGoalPosition        = mTargetNavi->getPosition();
					mNeedNaviTargetSound = false;
					return true;
				}
				return false;
			}
		}

		if (mTargetNavi || mTargetNavi == navi) {
			mTargetNavi          = nullptr;
			mPrevTailColor       = mActiveTailColor;
			mNeedNaviTargetSound = false;
			return true;
		}
	}

	return false;
}

/**
 * @note Address: 0x80385ED0
 * @note Size: 0x1D8
 */
bool Obj::isFindTarget()
{
	mTargetCreature = nullptr;
	if (mCantSearchTargetTimer > 0) {
		return false;
	}

	f32 minDist = C_GENERALPARMS.mSearchDistance();
	minDist *= minDist;

	if (mTargetNavi) {
		f32 searchDist = C_GENERALPARMS.mSearchDistance();
		searchDist *= searchDist;
		Vector3f pos;
		getPosition2D(pos);
		Vector3f naviPos = Vector3f(mTargetNavi->getPosition().x, 0.0f, mTargetNavi->getPosition().z);
		if (naviPos.sqrDistance2D(pos) < searchDist) {
			mTargetCreature = mTargetNavi;
			mGoalPosition   = mTargetCreature->getPosition();
			return true;
		}
	}

	mTargetCreature = EnemyFunc::getNearestNavi(this, C_GENERALPARMS.mSearchAngle(), C_GENERALPARMS.mSearchDistance(), &minDist, nullptr);
	f32 naviDist    = minDist;
	Piki* piki      = EnemyFunc::getNearestPikmin(this, C_GENERALPARMS.mSearchAngle(), C_GENERALPARMS.mSearchDistance(), &minDist, nullptr);
	if (minDist < naviDist) {
		mTargetCreature = piki;
	}

	if (mTargetCreature) {
		mGoalPosition = mTargetCreature->getPosition();
		return true;
	}

	return false;
}

/**
 * @note Address: 0x803860A8
 * @note Size: 0x240
 */
bool Obj::isAttackStart()
{
	f32 attackDist  = SQUARE(C_GENERALPARMS.mAttackRadius());      // f31
	f32 attackAngle = TORADIANS(C_GENERALPARMS.mAttackHitAngle()); // f30

	if (mTargetNavi && mTargetNavi->isAlive()) {
		f32 angle = getAngDist(mTargetNavi);
		if (absF(angle) <= attackAngle) {
			Vector3f pos;
			getPosition2D(pos);
			Vector3f naviPos = Vector3f(mTargetNavi->getPosition().x, 0.0f, mTargetNavi->getPosition().z);
			if (naviPos.sqrDistance2D(pos) < attackDist) {
				return true;
			}
		}
	}

	Piki* piki = EnemyFunc::getNearestPikmin(this, attackAngle, C_GENERALPARMS.mAttackRadius(), nullptr, nullptr);
	if (piki) {
		mTargetCreature = piki;
		return true;
	}

	if (mBloysterType == EnemyTypeID::EnemyID_UmiMushiBlind) {
		Navi* navi = EnemyFunc::getNearestNavi(this, attackAngle, C_GENERALPARMS.mAttackRadius(), nullptr, nullptr);
		if (navi) {
			return true;
		}
	}
	return false;
}

/**
 * @note Address: 0x803862E8
 * @note Size: 0x1B4
 */
bool Obj::isNeedTurn()
{
	f32 angle = getAngDist(mGoalPosition);
	if (absF(angle) > TORADIANS(C_PROPERPARMS.mTurnStartAngle())) {
		return true;
	}

	if (mTargetNavi) {
		Vector3f naviPos = mTargetNavi->getPosition();
		f32 naviAngle    = getAngDist(naviPos);
		if (absF(naviAngle) > TORADIANS(C_PROPERPARMS.mTurnStartAngle())) {
			return true;
		}
	}

	return false;
}

/**
 * @note Address: 0x8038649C
 * @note Size: 0x5C
 */
bool Obj::isOutOfTerritory(f32 scale)
{
	f32 rad = C_GENERALPARMS.mTerritoryRadius();
	if (gameSystem && gameSystem->mIsInCave) {
		rad = C_PROPERPARMS.mCaveTerritory();
	}

	f32 scaledRad = rad * scale;
	return (u8)(mHomePosition.sqrDistance2D(mPosition) > SQUARE(scaledRad));
}

/**
 * @note Address: N/A
 * @note Size: 0x44
 */
void Obj::returnHome()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x803864F8
 * @note Size: 0x12C
 */
bool Obj::canMove()
{
	if (isOutOfTerritory(1.0f) && mTargetNavi) {
		f32 rad = C_GENERALPARMS.mTerritoryRadius();
		if (gameSystem && gameSystem->mIsInCave) {
			rad = C_PROPERPARMS.mCaveTerritory();
		}

		Vector3f naviPos = mTargetNavi->getPosition();
		f32 sqrDist      = mHomePosition.sqrDistance2D(naviPos);
		mGoalPosition    = naviPos;
		mTargetCreature  = mTargetNavi;

		if (sqrDist > SQUARE(rad)) {
			mTargetVelocity = Vector3f(0.0f);
			return false;
		}
	}

	return true;
}

/**
 * @note Address: 0x80386624
 * @note Size: 0x490
 */
bool Obj::outMove()
{
	if (mTargetNavi) {
		Vector3f naviPos = mTargetNavi->getPosition(); // f29, f31
		Vector3f dir     = naviPos - mHomePosition;
		dir.y            = 0.0f;
		dir.normalise(); // f2, f3, f4

		f32 rad = C_GENERALPARMS.mTerritoryRadius();
		if (gameSystem && gameSystem->mIsInCave) {
			rad = C_PROPERPARMS.mCaveTerritory();
		}

		f32 moveSpeed   = 0.5f * C_PROPERPARMS.mMoveSpeed(); // f28
		mTargetPosition = mHomePosition + (dir * (1.5f * rad));

		f32 angle1 = angXZ(mTargetPosition.x - mPosition.x, mTargetPosition.z - mPosition.z);
		f32 angle2 = angXZ(naviPos.x - mPosition.x, naviPos.z - mPosition.z);

		f32 angleDist = angDist(angle2, angle1);

		if (absF(angleDist) < 1.0f) {
			Vector3f pos = mPosition;
			Vector3f vec = mTargetPosition;
			if (pos.sqrDistance2D(vec) < 100.0f) {
				mTargetVelocity = Vector3f(0.0f);
				return true;
			}
			Vector3f sep = mTargetPosition - mPosition;
			sep.y        = 0.0f;
			sep.normalise();

			Vector3f vel = sep;
			vel *= moveSpeed;

			f32 velY = getTargetVelocity().y;
			turnToTarget(mTargetPosition, 0.5f * C_PROPERPARMS.mRotateSpeed(), 0.5f * C_PROPERPARMS.mRotateSpeedMax());

			mTargetVelocity = Vector3f(vel.x, velY, vel.z);
		} else {
			turnToTarget(naviPos, 0.5f * C_PROPERPARMS.mRotateSpeed(), 0.5f * C_PROPERPARMS.mRotateSpeedMax());
		}
	}

	mSoundObj->startSound(PSSE_EN_UMI_ZURUZURU, 0);
	return false;
}

/**
 * @note Address: 0x80386AB4
 * @note Size: 0x80
 */
void Obj::setFindAnim()
{
	if (mActiveTailColor.r == mNormalColor1.r && mActiveTailColor.g == mNormalColor1.g && mActiveTailColor.b == mNormalColor1.b) {
		startMotion(UMIANIM_FSearch, nullptr);
		return;
	}

	fadeColorEffect();
	startMotion(UMIANIM_Search, nullptr);
}

/**
 * @note Address: 0x80386B34
 * @note Size: 0x44
 */
void Obj::fadeAllEffect()
{
	mEfxHamon->fade();
	fadeColorEffect();
}

/**
 * @note Address: 0x80386B78
 * @note Size: 0xA8
 */
void Obj::fadeColorEffect()
{
	mEfxWeakRed->fade();
	mEfxWeakBlue->fade();
	mEfxEyeRed[0]->fade();
	mEfxEyeRed[1]->fade();
	mEfxEyeBlue[0]->fade();
	mEfxEyeBlue[1]->fade();
	mNeedNaviTargetSound = false;
}

/**
 * @note Address: 0x80386C20
 * @note Size: 0x10C
 */
void Obj::createColorEffect()
{
	if (mTargetNavi) {
		efx::Arg fxArg(mPosition);
		mChaseSoundTimer     = 0;
		mNeedNaviTargetSound = true;
		if (mTargetNavi->mNaviIndex == NAVIID_Olimar) {
			mEfxWeakRed->create(&fxArg);
			mEfxEyeRed[0]->create(&fxArg);
			mEfxEyeRed[1]->create(&fxArg);
		} else {
			mEfxWeakBlue->create(&fxArg);
			mEfxEyeBlue[0]->create(&fxArg);
			mEfxEyeBlue[1]->create(&fxArg);
		}
	}
}

/**
 * @note Address: 0x80386D2C
 * @note Size: 0xC0
 */
void Obj::attackEffect()
{
	efx::TUmiAttack attackFX(mEatJointMtx);
	efx::ArgScale fxArg(mPosition, mScaleModifier);

	attackFX.create(&fxArg);
}

/**
 * @note Address: 0x80386DEC
 * @note Size: 0xC0
 */
void Obj::meltEffect()
{
	efx::TUmiDeadmelt meltFX;
	efx::ArgScale fxArg(mHamonPosition, mScaleModifier);

	meltFX.create(&fxArg);
	mDoSkipEyeCalc = true;
}

/**
 * @note Address: 0x80386EAC
 * @note Size: 0x10C
 */
void Obj::flickEffect()
{
	if (mWaterBox) {
		efx::TUmiFlick flickFX;
		efx::ArgScale fxArg(mHamonPosition, mScaleModifier);

		flickFX.create(&fxArg);

		PSM::SeSound* sound = PSStartSoundVec(PSSE_EV_ITEM_LAND_WATER1_XL, (Vec*)&mHamonPosition);
		if (sound) {
			sound->setPitch(0.8f, 0, SOUNDPARAM_Unk0);
		}
	}
}

/**
 * @note Address: 0x80386FB8
 * @note Size: 0x70
 */
void Obj::eatEffect()
{
	efx::Arg arg(mPosition);
	mEfxEat->create(&arg);
	mEfxEat->setGlobalScale(mScaleModifier);
}

/**
 * @note Address: 0x80387028
 * @note Size: 0x70
 */
void Obj::bubbleEffect()
{
	efx::Arg arg(mPosition);
	mEfxBubble->create(&arg);
	mEfxBubble->setGlobalScale(mScaleModifier);
}

/**
 * @note Address: 0x80387098
 * @note Size: 0x28
 */
void Obj::delShadow()
{
	shadowMgr->delNormalShadow(this);
}

/**
 * @note Address: 0x803870C0
 * @note Size: 0x2C8
 */
void Obj::eyeScaleMtxCalc()
{
	if (mDoSkipEyeCalc) {
		return;
	}

	Matrixf* mtx = mModel->mJ3dModel->mMtxBuffer->getWorldMatrix(mEyeJointIdx);
	if (C_PARMS->mDoUseParamEyeCalc) {
		mEyeScale = C_PARMS->mDefaultEyeScale;
	} else {
		mEyeScale = 0.45f;
	}
	Vector3f xVec = mtx->getColumn(0);
	xVec.normalise();
	Vector3f yVec = mtx->getColumn(1);
	yVec.normalise();
	Vector3f zVec = mtx->getColumn(2);
	zVec.normalise();

	f32 scale        = mEyeScale;
	Vector3f newXVec = xVec * scale;
	Vector3f newYVec = yVec * scale;
	Vector3f newZVec = zVec * scale;
	mtx->setColumn(0, newXVec);
	mtx->setColumn(1, newYVec);
	mtx->setColumn(2, newZVec);

	f32 y = mtx->mMatrix.structView.ty; // f30

	u16 mouthJointIdx      = mModel->getJointIndex("kuti_joint1");
	Matrixf* mouthWorldMtx = (Matrixf*)mModel->mJ3dModel->mMtxBuffer->mWorldMatrices[mouthJointIdx];
	f32 y2                 = mouthWorldMtx->mMatrix.structView.ty; // f29

	Matrixf* mtx2 = mModel->mJ3dModel->mMtxBuffer->getWorldMatrix(mModel->getJointIndex("kuti_joint1"));

	f32 invScale               = 1.0f - scale;
	mtx->mMatrix.structView.ty = C_PARMS->mEyeYOffset * invScale + (y * scale + y2 * invScale);
	mtx->mMatrix.structView.ty = (y * scale + y2 * invScale) - 5.0f * invScale;

	if (C_PARMS->mDoUseParamEyeCalc) {
		mtx->mMatrix.structView.tx = mtx2->mMatrix.structView.tx;
		mtx->mMatrix.structView.ty = y2 + C_PARMS->mEyeYOffset;
		mtx->mMatrix.structView.tz = mtx2->mMatrix.structView.tz;
	}
}

/**
 * @note Address: 0x80387388
 * @note Size: 0x184
 */
void Obj::weakScaleMtxCalc()
{
	Matrixf* mtx  = mModel->mJ3dModel->mMtxBuffer->getWorldMatrix(mWeakJointIdx);
	Vector3f xVec = mtx->getColumn(0);
	xVec.normalise();
	Vector3f yVec = mtx->getColumn(1);
	yVec.normalise();
	Vector3f zVec = mtx->getColumn(2);
	zVec.normalise();

	f32 scale        = C_PARMS->mTailScale;
	Vector3f newXVec = xVec * scale;
	Vector3f newYVec = yVec * scale;
	Vector3f newZVec = zVec * scale;
	mtx->setColumn(0, newXVec);
	mtx->setColumn(1, newYVec);
	mtx->setColumn(2, newZVec);
}

} // namespace UmiMushi
} // namespace Game
