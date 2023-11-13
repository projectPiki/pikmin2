#include "Game/Entities/UmiMushi.h"
#include "Game/Navi.h"
#include "Game/EnemyFunc.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "PSM/EnemyBoss.h"
#include "PSSystem/PSMainSide_ObjSound.h"
#include "JSystem/J3D/J3DMtxBuffer.h"
#include "JSystem/JMath.h"
#include "Dolphin/rand.h"
#include "PS.h"

namespace Game {
namespace UmiMushi {

static const char unusedString[] = "umiMushi";

Obj* curU;

/*
 * --INFO--
 * Address:	80383100
 * Size:	000038
 */

static bool eyeScaleCallBack(J3DJoint* joint, int t)
{
	if (t == 0 && curU) {
		curU->eyeScaleMtxCalc();
	}
	return true;
};

/*
 * --INFO--
 * Address:	80383138
 * Size:	000038
 */
static bool weakScaleCallBack(J3DJoint* joint, int t)
{
	if (t == 0 && curU) {
		curU->weakScaleMtxCalc();
	}
	return true;
};

/*
 * --INFO--
 * Address:	80383170
 * Size:	0000B4
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
	mCurLodSphere.mRadius = scale * C_PARMS->mGeneral.mOffCameraRadius.mValue;
	if (mBloysterType == EnemyTypeID::EnemyID_UmiMushiBlind) {
		C_PARMS->mGeneral.mHeightOffsetFromFloor.mValue = 50.0f;
	}
	mCollTree->getCollPart('weak')->setScale(C_PARMS->_A34); // scale of weak point (tail bulb)
}

/*
 * --INFO--
 * Address:	80383224
 * Size:	000030
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

/*
 * --INFO--
 * Address:	80383254
 * Size:	000020
 */
void Obj::birth(Vector3f& position, f32 faceDirection) { EnemyBase::birth(position, faceDirection); }

/*
 * --INFO--
 * Address:	80383274
 * Size:	0005A8
 */

void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	disableEvent(0, EB_DeathEffectEnabled);
	mHeadJoint = mModel->getJoint("head_joint1");
	P2ASSERTLINE(124, mHeadJoint);
	mTargetNavi   = nullptr;
	mGoalPosition = mHomePosition;
	_2E0          = 0;
	_2E4          = mHomePosition;
	_2F0          = 0;
	_2F4          = 0;
	_2FC          = 0.0f;
	mTargetNavi   = nullptr; // second null initialization of targetNavi
	_2DC          = 0;
	_300          = 0;
	mNextState    = UMIMUSHI_NULL;

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

	_31C = mNormalColor1;
	_314 = mNormalColor1;

	curU = nullptr;

	mFsm->start(this, UMIMUSHI_Walk, nullptr);

	P2ASSERTLINE(157, _354);
	_354->start(C_MGR->mTexAnimation);

	P2ASSERTLINE(160, mShadowMgr);
	mShadowMgr->init();

	J3DModelData* modelData = mModel->mJ3dModel->mModelData;
	P2ASSERTLINE(166, modelData);

	u16 matIdx = modelData->mMaterialTable.mMaterialNames->getIndex("cc_mat1_v");
	_310       = modelData->mMaterialTable.mMaterials[matIdx];

	P2ASSERTLINE(171, _310);

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
		_35C       = 0.45f;
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

	_388 = mModel->getJoint("bero_joint1")->getWorldMatrix();

	mEfxEat->mMtx    = _388;
	mEfxBubble->mMtx = _388;
}

/*
 * --INFO--
 * Address:	8038381C
 * Size:	000428
 */
Obj::Obj()
    : mHeadJoint(nullptr)
    , mTargetNavi(nullptr)
    , _2DD(0)
    , _310(nullptr)
    , _354(nullptr)
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
	_388           = nullptr;
	mFsm           = nullptr;
	mJointIndices  = nullptr;

	mAnimator = new ProperAnimator;
	setFSM(new FSM);
	_354       = new Sys::MatLoopAnimator;
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

/*
 * --INFO--
 * Address:	80383C44
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
 * Address:	80383C90
 * Size:	000090
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

/*
 * --INFO--
 * Address:	80383D20
 * Size:	0004B0
 */
void Obj::doAnimationCullingOff()
{

	if (mBloysterType == EnemyTypeID::EnemyID_UmiMushiBlind) {
		curU = this;
	}
	EnemyBase::doAnimationCullingOff();
	mShadowMgr->update();
	if (mTargetNavi && _2DC) {
		if (_300 == 0) {
			if (mTargetNavi->mNaviIndex == 0) {
				mSoundObj->startSound(PSSE_EN_UMI_SEARCH_ORIMER, 0);
			} else {
				mSoundObj->startSound(PSSE_EN_UMI_SEARCH_LUGIE, 0);
			}
		}
		_300++;
		if (_300 >= 30) {
			_300 = 0;
		}
	}
	if (mBloysterType == EnemyTypeID::EnemyID_UmiMushi) {
		PSM::EnemyBoss* bossSound = static_cast<PSM::EnemyBoss*>(mSoundObj);
		checkBoss(bossSound);
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

/*
 * --INFO--
 * Address:	803841D0
 * Size:	000034
 */
void Obj::doAnimationCullingOn()
{
	EnemyBase::doAnimationCullingOn();
	createColorEffect();
}

/*
 * --INFO--
 * Address:	80384204
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics& gfx) { }

/*
 * --INFO--
 * Address:	80384208
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	80384228
 * Size:	000098
 */
void Obj::changeMaterial()
{
	J3DModel* model = mModel->mJ3dModel;
	_310->mTevBlock->setTevColor(0, _314);
	model->calcMaterial();
	_354->animate(30.0f);
}

/*
 * --INFO--
 * Address:	803842C0
 * Size:	0000DC
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

/*
 * --INFO--
 * Address:	8038439C
 * Size:	0000DC
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

/*
 * --INFO--
 * Address:	80384478
 * Size:	000090
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

/*
 * --INFO--
 * Address:	80384508
 * Size:	000040
 */
void Obj::doSimulation(f32 speed)
{
	--_2E0;
	if (_2E0 < 0) {
		_2E0 = 0;
	}
	EnemyBase::doSimulation(speed);
}

/*
 * --INFO--
 * Address:	80384548
 * Size:	000164
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

/*
 * --INFO--
 * Address:	803846AC
 * Size:	0000BC
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

/*
 * --INFO--
 * Address:	80384768
 * Size:	0000BC
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

/*
 * --INFO--
 * Address:	80384824
 * Size:	0000AC
 */
bool Obj::earthquakeCallBack(Creature* creature, f32 damage)
{
	P2ASSERTLINE(752, creature);
	if (creature->isPiki() && (int)static_cast<Piki*>(creature)->mPikiKind == Purple) {
		damage *= C_PROPERPARMS.mPurpleDamageRate.mValue;
	}

	return EnemyBase::earthquakeCallBack(creature, damage);
}

/*
 * --INFO--
 * Address:	803848D0
 * Size:	000020
 */
void Obj::collisionCallback(CollEvent& event) { EnemyBase::collisionCallback(event); }

/*
 * --INFO--
 * Address:	803848F0
 * Size:	000130
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

/*
 * --INFO--
 * Address:	80384A20
 * Size:	000094
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	mCollTree->getCollPart('head')->mSpecialID = 'st__';
	mCollTree->getCollPart('kuti')->mSpecialID = 'st__';
	mCollTree->getCollPart('ketu')->mSpecialID = 'st__';
	fadeAllEffect();
}

/*
 * --INFO--
 * Address:	80384AB4
 * Size:	0000BC
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	mCollTree->getCollPart('head')->mSpecialID = '____';
	mCollTree->getCollPart('kuti')->mSpecialID = '____';
	mCollTree->getCollPart('ketu')->mSpecialID = '____';
	EnemyFunc::flickStickPikmin(this, C_PARMS->mGeneral.mShakeChance.mValue, C_PARMS->mGeneral.mShakeKnockback.mValue,
	                            C_PARMS->mGeneral.mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);
	mFlickTimer = 0.0f;
	createColorEffect();
}

/*
 * --INFO--
 * Address:	80384B70
 * Size:	000028
 */
void Obj::startCarcassMotion() { EnemyBase::startMotion(UMIANIM_Carry, nullptr); }

/*
 * --INFO--
 * Address:	80384B98
 * Size:	00004C
 */
void Obj::doGetLifeGaugeParam(LifeGaugeParam& settings)
{
	EnemyBase::doGetLifeGaugeParam(settings);
	if (mBloysterType == EnemyTypeID::EnemyID_UmiMushiBlind) {
		settings.mPosition.y = 60.0f;
	}
}

/*
 * --INFO--
 * Address:	80384BE4
 * Size:	00005C
 */
bool Obj::isReachToGoal(f32 radius)
{
	_2F4++;
	if (_2F4 > 800) {
		_2F4 = 0;
		return true;
	}
	return sqrDistanceXZ(mPosition, mGoalPosition) < SQUARE(radius); // how is this not matching >:O
}

/*
 * --INFO--
 * Address:	80384C40
 * Size:	000358
 */
void Obj::walkFunc()
{
	f32 faceDirRads;
	f32 speed         = C_PARMS->mGeneral.mMoveSpeed.mValue;
	f32 inA1C         = C_PARMS->_A1C;
	f32 rotationAccel = C_PARMS->mGeneral.mTurnSpeed.mValue;
	f32 rotationSpeed = C_PARMS->mGeneral.mMaxTurnAngle.mValue;

	_2FC += C_PARMS->_A20;
	if (_2FC > 360.0f) {
		_2FC -= 360.0f;
	}

	f32 rotationAngle = sin(_2FC);
	f32 rotationDelta = inA1C * rotationAngle;
	if (!C_PARMS->_A10) {
		rotationDelta = 0.0f;
	}

	faceDirRads = TORADIANS(rotationDelta);
	mFaceDir    = _2F8;
	turnToTarget2(mGoalPosition, rotationAccel, rotationSpeed);

	f32 deltaFaceDir = mFaceDir + faceDirRads;

	f32 x = sinf(deltaFaceDir) * speed;
	f32 y = getTargetVelocity().y;
	f32 z = cosf(deltaFaceDir);

	_2F8              = mFaceDir;
	f32 faceDirOffset = roundAng(faceDirRads);
	updateFaceDir(mFaceDir + faceDirOffset);
	mTargetVelocity = Vector3f(x, y, speed * z); // sure

	_2F0++;

	if (_2F0 > 120) {
		if (sqrDistanceXZ(mPosition, _2E4) < SQUARE(30.0f)) {
			_2E0            = 120;
			mTargetCreature = nullptr;
			mGoalPosition   = mHomePosition;
		}
		_2E4 = mPosition;
		_2F0 = 0;
	}
	mSoundObj->startSound(PSSE_EN_UMI_ZURUZURU, 0);
}

/*
 * --INFO--
 * Address:	80384F98
 * Size:	000150
 */
void Obj::setNextGoal()
{
	f32 rad = C_PARMS->mGeneral.mTerritoryRadius();
	if (gameSystem && gameSystem->mIsInCave) {
		rad = C_PROPERPARMS.mCaveTerritory();
	}

	mGoalPosition = mHomePosition;
	f32 randAngle = TAU * randFloat();
	mGoalPosition.x += rad * sinf(randAngle);
	mGoalPosition.z += rad * cosf(randAngle);
}

/*
 * --INFO--
 * Address:	803850E8
 * Size:	000810
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
				_314.r = ((f32)mNormalColor1.r) * frame + ((f32)_31C.r) * (1.0f - frame);
				_314.g = ((f32)mNormalColor1.g) * frame + ((f32)_31C.g) * (1.0f - frame);
				_314.b = ((f32)mNormalColor1.b) * frame + ((f32)_31C.b) * (1.0f - frame);
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
			_314.r = weight2 * ((f32)mOlimarColor2.r) + weight1 * ((f32)mOlimarColor1.r);
			_314.g = weight2 * ((f32)mOlimarColor2.g) + weight1 * ((f32)mOlimarColor1.g);
			_314.b = weight2 * ((f32)mOlimarColor2.b) + weight1 * ((f32)mOlimarColor1.b);
			return;
		}
		// blue
		_314.r = weight2 * ((f32)mLouieColor2.r) + weight1 * ((f32)mLouieColor1.r);
		_314.g = weight2 * ((f32)mLouieColor2.g) + weight1 * ((f32)mLouieColor1.g);
		_314.b = weight2 * ((f32)mLouieColor2.b) + weight1 * ((f32)mLouieColor1.b);
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
			_314.r = weight2 * ((f32)mNormalColor2.r) + weight1 * ((f32)mOlimarColor2.r);
			_314.g = weight2 * ((f32)mNormalColor2.g) + weight1 * ((f32)mOlimarColor2.g);
			_314.b = weight2 * ((f32)mNormalColor2.b) + weight1 * ((f32)mOlimarColor2.b);
			return;
		}

		_314.r = weight2 * ((f32)mNormalColor2.r) + weight1 * ((f32)mLouieColor2.r);
		_314.g = weight2 * ((f32)mNormalColor2.g) + weight1 * ((f32)mLouieColor2.g);
		_314.b = weight2 * ((f32)mNormalColor2.b) + weight1 * ((f32)mLouieColor2.b);
		return;
	}

	_314.r = weight2 * ((f32)mNormalColor2.r) + weight1 * ((f32)mNormalColor1.r);
	_314.g = weight2 * ((f32)mNormalColor2.g) + weight1 * ((f32)mNormalColor1.g);
	_314.b = weight2 * ((f32)mNormalColor2.b) + weight1 * ((f32)mNormalColor1.b);
}

/*
 * --INFO--
 * Address:	803858F8
 * Size:	0001C0
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

	_314.r = weight2 * ((f32)mNormalColor1.r) + weight1 * ((f32)_31C.r);
	_314.g = weight2 * ((f32)mNormalColor1.g) + weight1 * ((f32)_31C.g);
	_314.b = weight2 * ((f32)mNormalColor1.b) + weight1 * ((f32)_31C.b);
}

/*
 * --INFO--
 * Address:	80385AB8
 * Size:	0001BC
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
		factor = C_PARMS->_A2C;
	}

	f32 maxAngle  = factor * C_PROPERPARMS.mRotateSpeedMax();
	f32 turnSpeed = factor * C_PROPERPARMS.mRotateSpeed();

	f32 angleDist = turnToTarget2(targetPos, turnSpeed, maxAngle);
	return absF(angleDist);
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stfd     f30, 0x50(r1)
	psq_st   f30, 88(r1), 0, qr0
	stfd     f29, 0x40(r1)
	psq_st   f29, 72(r1), 0, qr0
	stfd     f28, 0x30(r1)
	psq_st   f28, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	mr       r31, r3
	lwz      r4, 0x2d8(r3)
	cmplwi   r4, 0
	beq      lbl_80385B24
	lwz      r12, 0(r4)
	addi     r3, r1, 0x14
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x14(r1)
	stfs     f0, 0x2bc(r31)
	lfs      f0, 0x18(r1)
	stfs     f0, 0x2c0(r31)
	lfs      f0, 0x1c(r1)
	stfs     f0, 0x2c4(r31)

lbl_80385B24:
	lwz      r3, 0x28c(r31)
	li       r4, 0x513c
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x39c(r31)
	lfs      f31, 0x2bc(r31)
	cmpwi    r0, 0x65
	lfs      f28, 0x2c4(r31)
	lfs      f2, lbl_8051ED90@sda21(r2)
	bne      lbl_80385B60
	lwz      r3, 0xc0(r31)
	lfs      f2, 0xa2c(r3)

lbl_80385B60:
	lwz      r5, 0xc0(r31)
	mr       r4, r31
	lwz      r12, 0(r31)
	addi     r3, r1, 8
	lfs      f1, 0x8e4(r5)
	lfs      f0, 0x8bc(r5)
	lwz      r12, 8(r12)
	fmuls    f29, f2, f1
	fmuls    f30, f2, f0
	mtctr    r12
	bctrl
	lfs      f1, 8(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x10(r1)
	addi     r3, r3, atanTable___5JMath@l
	fsubs    f1, f31, f1
	fsubs    f2, f28, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f31, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f31
	bl       angDist__Fff
	fmr      f31, f1
	lfs      f0, lbl_8051EDD0@sda21(r2)
	lfs      f1, lbl_8051EDCC@sda21(r2)
	fmuls    f0, f0, f29
	fmuls    f29, f31, f30
	fmuls    f1, f1, f0
	fabs     f0, f29
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80385C10
	lfs      f0, lbl_8051EDA0@sda21(r2)
	fcmpo    cr0, f29, f0
	ble      lbl_80385C0C
	fmr      f29, f1
	b        lbl_80385C10

lbl_80385C0C:
	fneg     f29, f1

lbl_80385C10:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f29, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	fabs     f1, f31
	lfs      f0, 0x1fc(r31)
	frsp     f1, f1
	stfs     f0, 0x1a8(r31)
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	psq_l    f29, 72(r1), 0, qr0
	lfd      f29, 0x40(r1)
	psq_l    f28, 56(r1), 0, qr0
	lfd      f28, 0x30(r1)
	lwz      r0, 0x74(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	80385C74
 * Size:	000014
 */
void Obj::resetWalkParm()
{
	_2F8 = mFaceDir;
	_2FC = 0.0f;
}

/*
 * --INFO--
 * Address:	80385C88
 * Size:	000248
 */
bool Obj::isChangeNavi()
{
	if (mBloysterType == EnemyTypeID::EnemyID_UmiMushiBlind) {
		return false;
	}

	Navi* navi;
	if (gameSystem && gameSystem->isTwoPlayerMode()) {
		navi = EnemyFunc::getNearestNavi(this, 360.0f, C_PARMS->mGeneral.mSearchDistance(), nullptr, nullptr);
	} else {
		navi = naviMgr->getActiveNavi();
	}

	if (navi) {
		f32 dist = C_PARMS->mGeneral.mSearchDistance();
		if (mTargetNavi) {
			dist *= 1.2f;
		}

		dist *= dist;
		if (navi->isAlive()) {
			Vector3f naviPos(navi->getPosition().x, navi->getPosition().y, navi->getPosition().z);
			if (mPosition.sqrDistance(naviPos) < dist) {
				if (mTargetNavi != navi) {
					_31C            = _314;
					mTargetNavi     = navi;
					mTargetCreature = mTargetNavi;
					mGoalPosition   = mTargetNavi->getPosition();
					_2DC            = false;
					return true;
				}
				return false;
			}
		}

		if (mTargetNavi || mTargetNavi == navi) {
			mTargetNavi = nullptr;
			_31C        = _314;
			_2DC        = false;
			return true;
		}
	}

	return false;
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stfd     f30, 0x50(r1)
	psq_st   f30, 88(r1), 0, qr0
	stfd     f29, 0x40(r1)
	psq_st   f29, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	mr       r31, r3
	lwz      r0, 0x39c(r3)
	cmpwi    r0, 0x65
	bne      lbl_80385CCC
	li       r3, 0
	b        lbl_80385EA0

lbl_80385CCC:
	lwz      r4, gameSystem__4Game@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_80385D04
	lwz      r0, 0x44(r4)
	cmpwi    r0, 3
	bne      lbl_80385D04
	lwz      r6, 0xc0(r31)
	li       r4, 0
	lfs      f1, lbl_8051EDC8@sda21(r2)
	li       r5, 0
	lfs      f2, 0x44c(r6)
	bl
"getNearestNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>"
	mr       r30, r3
	b        lbl_80385D10

lbl_80385D04:
	lwz      r3, naviMgr__4Game@sda21(r13)
	bl       getActiveNavi__Q24Game7NaviMgrFv
	mr       r30, r3

lbl_80385D10:
	cmplwi   r30, 0
	beq      lbl_80385E9C
	lwz      r0, 0x2d8(r31)
	lwz      r3, 0xc0(r31)
	cmplwi   r0, 0
	lfs      f29, 0x44c(r3)
	beq      lbl_80385D34
	lfs      f0, lbl_8051EE00@sda21(r2)
	fmuls    f29, f29, f0

lbl_80385D34:
	mr       r3, r30
	fmuls    f29, f29, f29
	lwz      r12, 0(r30)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80385E54
	mr       r4, r30
	addi     r3, r1, 0x14
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	addi     r3, r1, 0x20
	lwz      r12, 0(r30)
	lfs      f30, 0x1c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	addi     r3, r1, 0x2c
	lwz      r12, 0(r30)
	lfs      f31, 0x24(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x190(r31)
	lfs      f0, 0x194(r31)
	fsubs    f3, f1, f31
	lfs      f4, 0x2c(r1)
	lfs      f1, 0x18c(r31)
	fsubs    f2, f0, f30
	fsubs    f1, f1, f4
	fmuls    f0, f3, f3
	fmadds   f0, f1, f1, f0
	fmadds   f0, f2, f2, f0
	fcmpo    cr0, f0, f29
	bge      lbl_80385E54
	lwz      r0, 0x2d8(r31)
	cmplw    r0, r30
	beq      lbl_80385E4C
	lha      r0, 0x314(r31)
	addi     r3, r1, 8
	sth      r0, 0x31c(r31)
	lha      r0, 0x316(r31)
	sth      r0, 0x31e(r31)
	lha      r0, 0x318(r31)
	sth      r0, 0x320(r31)
	lha      r0, 0x31a(r31)
	sth      r0, 0x322(r31)
	stw      r30, 0x2d8(r31)
	lwz      r0, 0x2d8(r31)
	stw      r0, 0x230(r31)
	lwz      r4, 0x2d8(r31)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 8(r1)
	li       r0, 0
	li       r3, 1
	stfs     f0, 0x2bc(r31)
	lfs      f0, 0xc(r1)
	stfs     f0, 0x2c0(r31)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x2c4(r31)
	stb      r0, 0x2dc(r31)
	b        lbl_80385EA0

lbl_80385E4C:
	li       r3, 0
	b        lbl_80385EA0

lbl_80385E54:
	lwz      r0, 0x2d8(r31)
	cmplwi   r0, 0
	bne      lbl_80385E68
	cmplw    r0, r30
	bne      lbl_80385E9C

lbl_80385E68:
	li       r4, 0
	li       r3, 1
	stw      r4, 0x2d8(r31)
	lha      r0, 0x314(r31)
	sth      r0, 0x31c(r31)
	lha      r0, 0x316(r31)
	sth      r0, 0x31e(r31)
	lha      r0, 0x318(r31)
	sth      r0, 0x320(r31)
	lha      r0, 0x31a(r31)
	sth      r0, 0x322(r31)
	stb      r4, 0x2dc(r31)
	b        lbl_80385EA0

lbl_80385E9C:
	li       r3, 0

lbl_80385EA0:
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	psq_l    f29, 72(r1), 0, qr0
	lfd      f29, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r0, 0x74(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	80385ED0
 * Size:	0001D8
 */
bool Obj::isFindTarget()
{
	mTargetCreature = nullptr;
	if (_2E0 > 0) {
		return false;
	}

	f32 minDist = C_PARMS->mGeneral.mSearchDistance();
	minDist *= minDist;

	if (mTargetNavi) {
		f32 searchDist = C_PARMS->mGeneral.mSearchDistance();
		searchDist *= searchDist;
		Vector3f pos     = mPosition;
		Vector3f naviPos = Vector3f(mTargetNavi->getPosition().x, 0.0f, mTargetNavi->getPosition().z);
		if (sqrDistanceXZ(naviPos, pos) < searchDist) {
			mTargetCreature = mTargetNavi;
			mGoalPosition   = mTargetCreature->getPosition();
			return true;
		}
	}

	mTargetCreature
	    = EnemyFunc::getNearestNavi(this, C_PARMS->mGeneral.mSearchAngle(), C_PARMS->mGeneral.mSearchDistance(), &minDist, nullptr);
	f32 naviDist = minDist;
	Piki* piki
	    = EnemyFunc::getNearestPikmin(this, C_PARMS->mGeneral.mSearchAngle(), C_PARMS->mGeneral.mSearchDistance(), &minDist, nullptr);
	if (minDist < naviDist) {
		mTargetCreature = piki;
	}

	if (mTargetCreature) {
		mGoalPosition = mTargetCreature->getPosition();
		return true;
	}

	return false;
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stfd     f31, 0x80(r1)
	psq_st   f31, 136(r1), 0, qr0
	stfd     f30, 0x70(r1)
	psq_st   f30, 120(r1), 0, qr0
	stfd     f29, 0x60(r1)
	psq_st   f29, 104(r1), 0, qr0
	stfd     f28, 0x50(r1)
	psq_st   f28, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	mr       r31, r3
	li       r0, 0
	stw      r0, 0x230(r3)
	lwz      r0, 0x2e0(r3)
	cmpwi    r0, 0
	ble      lbl_80385F20
	li       r3, 0
	b        lbl_80386074

lbl_80385F20:
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x44c(r3)
	fmuls    f0, f1, f1
	stfs     f1, 8(r1)
	stfs     f0, 8(r1)
	lwz      r4, 0x2d8(r31)
	cmplwi   r4, 0
	beq      lbl_80385FE0
	lwz      r5, 0xc0(r31)
	addi     r3, r1, 0x24
	lwz      r12, 0(r4)
	lfs      f28, 0x44c(r5)
	lwz      r12, 8(r12)
	fmuls    f28, f28, f28
	lfs      f29, 0x194(r31)
	lfs      f30, 0x18c(r31)
	mtctr    r12
	bctrl
	lwz      r4, 0x2d8(r31)
	addi     r3, r1, 0x30
	lfs      f31, 0x2c(r1)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fsubs    f0, f31, f29
	lfs      f1, 0x30(r1)
	fsubs    f1, f1, f30
	fmuls    f0, f0, f0
	fmadds   f0, f1, f1, f0
	fcmpo    cr0, f0, f28
	bge      lbl_80385FE0
	lwz      r0, 0x2d8(r31)
	addi     r3, r1, 0x18
	stw      r0, 0x230(r31)
	lwz      r4, 0x230(r31)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x18(r1)
	li       r3, 1
	stfs     f0, 0x2bc(r31)
	lfs      f0, 0x1c(r1)
	stfs     f0, 0x2c0(r31)
	lfs      f0, 0x20(r1)
	stfs     f0, 0x2c4(r31)
	b        lbl_80386074

lbl_80385FE0:
	lwz      r6, 0xc0(r31)
	mr       r3, r31
	addi     r4, r1, 8
	li       r5, 0
	lfs      f1, 0x49c(r6)
	lfs      f2, 0x44c(r6)
	bl
"getNearestNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>"
	stw      r3, 0x230(r31)
	mr       r3, r31
	addi     r4, r1, 8
	li       r5, 0
	lwz      r6, 0xc0(r31)
	lfs      f28, 8(r1)
	lfs      f1, 0x49c(r6)
	lfs      f2, 0x44c(r6)
	bl
"getNearestPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Piki>"
	lfs      f0, 8(r1)
	fcmpo    cr0, f0, f28
	bge      lbl_80386030
	stw      r3, 0x230(r31)

lbl_80386030:
	lwz      r4, 0x230(r31)
	cmplwi   r4, 0
	beq      lbl_80386070
	lwz      r12, 0(r4)
	addi     r3, r1, 0xc
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0xc(r1)
	li       r3, 1
	stfs     f0, 0x2bc(r31)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x2c0(r31)
	lfs      f0, 0x14(r1)
	stfs     f0, 0x2c4(r31)
	b        lbl_80386074

lbl_80386070:
	li       r3, 0

lbl_80386074:
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	psq_l    f29, 104(r1), 0, qr0
	lfd      f29, 0x60(r1)
	psq_l    f28, 88(r1), 0, qr0
	lfd      f28, 0x50(r1)
	lwz      r0, 0x94(r1)
	lwz      r31, 0x4c(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	803860A8
 * Size:	000240
 */
bool Obj::isAttackStart()
{
	f32 attackDist  = SQUARE(C_PARMS->mGeneral.mAttackRadius());      // f31
	f32 attackAngle = TORADIANS(C_PARMS->mGeneral.mAttackHitAngle()); // f30

	if (mTargetNavi && mTargetNavi->isAlive()) {
		f32 angle = getCreatureViewAngle(mTargetNavi);
		if (absF(angle) <= attackAngle) {
			Vector3f pos     = mPosition;
			Vector3f naviPos = Vector3f(mTargetNavi->getPosition().x, 0.0f, mTargetNavi->getPosition().z);
			if (sqrDistanceXZ(naviPos, pos) < attackDist) {
				return true;
			}
		}
	}

	Piki* piki = EnemyFunc::getNearestPikmin(this, attackAngle, C_PARMS->mGeneral.mAttackRadius(), nullptr, nullptr);
	if (piki) {
		mTargetCreature = piki;
		return true;
	}

	if (mBloysterType == EnemyTypeID::EnemyID_UmiMushiBlind) {
		Navi* navi = EnemyFunc::getNearestNavi(this, attackAngle, C_PARMS->mGeneral.mAttackRadius(), nullptr, nullptr);
		if (navi) {
			return true;
		}
	}
	return false;
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
	mr       r31, r3
	lfs      f1, lbl_8051EDD0@sda21(r2)
	lwz      r4, 0xc0(r3)
	lwz      r3, 0x2d8(r3)
	lfs      f0, 0x5dc(r4)
	lfs      f2, 0x5b4(r4)
	cmplwi   r3, 0
	fmuls    f0, f1, f0
	lfs      f1, lbl_8051EDCC@sda21(r2)
	fmuls    f31, f2, f2
	fmuls    f30, f1, f0
	beq      lbl_80386240
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80386240
	lwz      r4, 0x2d8(r31)
	addi     r3, r1, 0x20
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f2, 0x20(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x2c
	lfs      f1, 0x24(r1)
	lfs      f0, 0x28(r1)
	lwz      r12, 8(r12)
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x2c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x34(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 8(r1)
	lfs      f0, 0x10(r1)
	lfs      f4, 0x30(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x14(r1)
	stfs     f4, 0x18(r1)
	stfs     f3, 0x1c(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f27, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f27
	bl       angDist__Fff
	fabs     f0, f1
	frsp     f0, f0
	fcmpo    cr0, f0, f30
	cror     2, 0, 2
	bne      lbl_80386240
	lwz      r4, 0x2d8(r31)
	addi     r3, r1, 0x38
	lfs      f27, 0x194(r31)
	lwz      r12, 0(r4)
	lfs      f28, 0x18c(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x2d8(r31)
	addi     r3, r1, 0x44
	lfs      f29, 0x40(r1)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fsubs    f0, f29, f27
	lfs      f1, 0x44(r1)
	fsubs    f1, f1, f28
	fmuls    f0, f0, f0
	fmadds   f0, f1, f1, f0
	fcmpo    cr0, f0, f31
	bge      lbl_80386240
	li       r3, 1
	b        lbl_803862AC

lbl_80386240:
	lwz      r5, 0xc0(r31)
	fmr      f1, f30
	mr       r3, r31
	li       r4, 0
	lfs      f2, 0x5b4(r5)
	li       r5, 0
	bl
"getNearestPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Piki>"
	cmplwi   r3, 0
	beq      lbl_80386270
	stw      r3, 0x230(r31)
	li       r3, 1
	b        lbl_803862AC

lbl_80386270:
	lwz      r0, 0x39c(r31)
	cmpwi    r0, 0x65
	bne      lbl_803862A8
	lwz      r5, 0xc0(r31)
	fmr      f1, f30
	mr       r3, r31
	li       r4, 0
	lfs      f2, 0x5b4(r5)
	li       r5, 0
	bl
"getNearestNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>"
	cmplwi   r3, 0
	beq      lbl_803862A8
	li       r3, 1
	b        lbl_803862AC

lbl_803862A8:
	li       r3, 0

lbl_803862AC:
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
	lwz      r0, 0xb4(r1)
	lwz      r31, 0x5c(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}

/*
 * --INFO--
 * Address:	803862E8
 * Size:	0001B4
 */
bool Obj::isNeedTurn()
{
	f32 angle = getCreatureViewAngle(mGoalPosition);
	if (absF(angle) > TORADIANS(C_PROPERPARMS.mTurnStartAngle())) {
		return true;
	}

	if (mTargetNavi) {
		Vector3f naviPos = mTargetNavi->getPosition();
		f32 naviAngle    = getCreatureViewAngle(naviPos);
		if (absF(naviAngle) > TORADIANS(C_PROPERPARMS.mTurnStartAngle())) {
			return true;
		}
	}

	return false;
}

/*
 * --INFO--
 * Address:	8038649C
 * Size:	00005C
 */
bool Obj::isOutOfTerritory(f32 scale)
{
	f32 rad = C_PARMS->mGeneral.mTerritoryRadius();
	if (gameSystem && gameSystem->mIsInCave) {
		rad = C_PROPERPARMS.mCaveTerritory();
	}

	// needs tweaking to inline correctly in next function
	f32 scaledRad = SQUARE(rad * scale);
	return (u8)(sqrDistanceXZ(mHomePosition, mPosition) > scaledRad);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void Obj::returnHome()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803864F8
 * Size:	00012C
 */
bool Obj::canMove()
{
	if (isOutOfTerritory(1.0f) && mTargetNavi) {
		f32 rad = C_PARMS->mGeneral.mTerritoryRadius();
		if (gameSystem && gameSystem->mIsInCave) {
			rad = C_PROPERPARMS.mCaveTerritory();
		}

		Vector3f naviPos = mTargetNavi->getPosition();
		f32 sqrDist      = sqrDistanceXZ(mHomePosition, naviPos);
		mGoalPosition    = naviPos;
		mTargetCreature  = mTargetNavi;

		if (sqrDist > SQUARE(rad)) {
			mTargetVelocity = Vector3f(0.0f);
			return false;
		}
	}

	return true;
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	mr       r31, r3
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r5, 0xc0(r31)
	cmplwi   r3, 0
	lfs      f3, 0x35c(r5)
	beq      lbl_80386538
	lbz      r0, 0x48(r3)
	cmplwi   r0, 0
	beq      lbl_80386538
	lfs      f3, 0x934(r5)

lbl_80386538:
	lfs      f1, 0x1a0(r31)
	lfs      f0, 0x194(r31)
	lfs      f2, lbl_8051ED90@sda21(r2)
	fsubs    f4, f1, f0
	lfs      f1, 0x198(r31)
	lfs      f0, 0x18c(r31)
	fmuls    f2, f3, f2
	fsubs    f3, f1, f0
	fmuls    f1, f4, f4
	fmuls    f0, f2, f2
	fmadds   f1, f3, f3, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80386604
	lwz      r4, 0x2d8(r31)
	cmplwi   r4, 0
	beq      lbl_80386604
	cmplwi   r3, 0
	lfs      f31, 0x35c(r5)
	beq      lbl_80386594
	lbz      r0, 0x48(r3)
	cmplwi   r0, 0
	beq      lbl_80386594
	lfs      f31, 0x934(r5)

lbl_80386594:
	lwz      r12, 0(r4)
	addi     r3, r1, 8
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f5, 0x10(r1)
	fmuls    f0, f31, f31
	lfs      f1, 0x1a0(r31)
	lfs      f4, 0xc(r1)
	fsubs    f2, f1, f5
	lfs      f1, 0x198(r31)
	lfs      f3, 8(r1)
	stfs     f3, 0x2bc(r31)
	fsubs    f3, f1, f3
	fmuls    f1, f2, f2
	stfs     f4, 0x2c0(r31)
	stfs     f5, 0x2c4(r31)
	fmadds   f1, f3, f3, f1
	lwz      r0, 0x2d8(r31)
	fcmpo    cr0, f1, f0
	stw      r0, 0x230(r31)
	ble      lbl_80386604
	lfs      f0, lbl_8051EDA0@sda21(r2)
	li       r3, 0
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	b        lbl_80386608

lbl_80386604:
	li       r3, 1

lbl_80386608:
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80386624
 * Size:	000490
 */
bool Obj::outMove()
{
	if (mTargetNavi) {
		Vector3f naviPos = mTargetNavi->getPosition(); // f29, f31
		Vector3f dir     = naviPos - mHomePosition;
		dir.y            = 0.0f;
		dir.normalise(); // f2, f3, f4

		f32 rad = C_PARMS->mGeneral.mTerritoryRadius();
		if (gameSystem && gameSystem->mIsInCave) {
			rad = C_PROPERPARMS.mCaveTerritory();
		}

		rad = 1.5f * rad; // f5

		f32 moveSpeed = 0.5f * C_PROPERPARMS.mMoveSpeed(); // f28
		_304          = mHomePosition + (dir * rad);

		f32 angle1 = roundAng(JMAAtan2Radian(_304.x - mPosition.x, _304.z - mPosition.z));
		f32 angle2 = roundAng(JMAAtan2Radian(naviPos.x - mPosition.x, naviPos.z - mPosition.z));

		f32 angleDist = angDist(angle2, angle1);

		if (absF(angleDist) < 1.0f) {
			Vector3f pos = mPosition;
			Vector3f vec = _304;
			if (sqrDistanceXZ(pos, vec) < 100.0f) {
				mTargetVelocity = Vector3f(0.0f);
				return true;
			}
			Vector3f sep = vec - pos;
			sep.y        = 0.0f;
			sep.normalise();

			Vector3f vel = sep * moveSpeed; // f30, f29

			f32 maxAngle  = 0.5f * C_PROPERPARMS.mRotateSpeedMax(); // f27
			f32 turnSpeed = 0.5f * C_PROPERPARMS.mRotateSpeed();    // f28
			f32 velY      = getTargetVelocity().y;
			turnToTarget2(_304, turnSpeed, maxAngle);

			mTargetVelocity = Vector3f(vel.x, velY, vel.z);
		} else {
			f32 maxAngle  = 0.5f * C_PROPERPARMS.mRotateSpeedMax(); // f27
			f32 turnSpeed = 0.5f * C_PROPERPARMS.mRotateSpeed();    // f28

			turnToTarget2(naviPos, turnSpeed, maxAngle);
		}
	}

	mSoundObj->startSound(PSSE_EN_UMI_ZURUZURU, 0);
	return false;
	/*
	stwu     r1, -0xc0(r1)
	mflr     r0
	stw      r0, 0xc4(r1)
	stfd     f31, 0xb0(r1)
	psq_st   f31, 184(r1), 0, qr0
	stfd     f30, 0xa0(r1)
	psq_st   f30, 168(r1), 0, qr0
	stfd     f29, 0x90(r1)
	psq_st   f29, 152(r1), 0, qr0
	stfd     f28, 0x80(r1)
	psq_st   f28, 136(r1), 0, qr0
	stfd     f27, 0x70(r1)
	psq_st   f27, 120(r1), 0, qr0
	stfd     f26, 0x60(r1)
	psq_st   f26, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	mr       r31, r3
	lwz      r4, 0x2d8(r3)
	cmplwi   r4, 0
	beq      lbl_80386A50
	lwz      r12, 0(r4)
	addi     r3, r1, 0x44
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f29, 0x44(r1)
	lfs      f8, 0x198(r31)
	lfs      f31, 0x4c(r1)
	lfs      f6, 0x1a0(r31)
	fsubs    f2, f29, f8
	lfs      f3, lbl_8051EDA0@sda21(r2)
	fsubs    f4, f31, f6
	lfs      f7, 0x19c(r31)
	fmadds   f0, f2, f2, f3
	fmuls    f1, f4, f4
	fadds    f1, f1, f0
	fcmpo    cr0, f1, f3
	ble      lbl_803866CC
	ble      lbl_803866D0
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_803866D0

lbl_803866CC:
	fmr      f1, f3

lbl_803866D0:
	lfs      f0, lbl_8051EDA0@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_803866F0
	lfs      f0, lbl_8051ED90@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f2, f2, f0
	fmuls    f3, f3, f0
	fmuls    f4, f4, f0

lbl_803866F0:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r4, 0xc0(r31)
	cmplwi   r3, 0
	lfs      f5, 0x35c(r4)
	beq      lbl_80386714
	lbz      r0, 0x48(r3)
	cmplwi   r0, 0
	beq      lbl_80386714
	lfs      f5, 0x934(r4)

lbl_80386714:
	lfs      f0, lbl_8051EE04@sda21(r2)
	lis      r3, atanTable___5JMath@ha
	lfs      f1, 0x894(r4)
	addi     r3, r3, atanTable___5JMath@l
	fmuls    f5, f0, f5
	lfs      f0, lbl_8051ED94@sda21(r2)
	fmuls    f28, f0, f1
	fmuls    f1, f2, f5
	fmuls    f0, f3, f5
	fmuls    f3, f4, f5
	fadds    f2, f8, f1
	fadds    f1, f7, f0
	fadds    f0, f6, f3
	stfs     f2, 0x304(r31)
	stfs     f1, 0x308(r31)
	stfs     f0, 0x30c(r31)
	lfs      f3, 0x304(r31)
	lfs      f1, 0x18c(r31)
	lfs      f2, 0x30c(r31)
	lfs      f0, 0x194(r31)
	fsubs    f1, f3, f1
	fsubs    f2, f2, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	fmr      f27, f1
	lfs      f1, 0x18c(r31)
	lfs      f0, 0x194(r31)
	lis      r3, atanTable___5JMath@ha
	fsubs    f1, f29, f1
	addi     r3, r3, atanTable___5JMath@l
	fsubs    f2, f31, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	fmr      f2, f27
	bl       angDist__Fff
	fabs     f1, f1
	lfs      f0, lbl_8051ED90@sda21(r2)
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80386968
	lfs      f3, 0x194(r31)
	lfs      f4, 0x30c(r31)
	lfs      f5, 0x18c(r31)
	fsubs    f1, f3, f4
	lfs      f6, 0x304(r31)
	lfs      f0, lbl_8051ED9C@sda21(r2)
	fsubs    f2, f5, f6
	fmuls    f1, f1, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_803867F8
	lfs      f0, lbl_8051EDA0@sda21(r2)
	li       r3, 1
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	b        lbl_80386A70

lbl_803867F8:
	fsubs    f4, f4, f3
	lfs      f1, lbl_8051EDA0@sda21(r2)
	fsubs    f3, f6, f5
	fmuls    f2, f4, f4
	fmadds   f0, f3, f3, f1
	fadds    f2, f2, f0
	fcmpo    cr0, f2, f1
	ble      lbl_80386828
	ble      lbl_8038682C
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_8038682C

lbl_80386828:
	fmr      f2, f1

lbl_8038682C:
	lfs      f0, lbl_8051EDA0@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_80386848
	lfs      f0, lbl_8051ED90@sda21(r2)
	fdivs    f0, f0, f2
	fmuls    f3, f3, f0
	fmuls    f4, f4, f0

lbl_80386848:
	lwz      r5, 0xc0(r31)
	mr       r4, r31
	lwz      r12, 0(r31)
	fmuls    f30, f3, f28
	lfs      f2, lbl_8051ED94@sda21(r2)
	fmuls    f29, f4, f28
	lfs      f1, 0x8e4(r5)
	addi     r3, r1, 0x2c
	lfs      f0, 0x8bc(r5)
	lfs      f3, 0x1d4(r31)
	fmuls    f27, f2, f1
	lfs      f31, 0x1d8(r31)
	fmuls    f28, f2, f0
	lfs      f0, 0x1dc(r31)
	lwz      r12, 8(r12)
	stfs     f3, 0x38(r1)
	stfs     f31, 0x3c(r1)
	stfs     f0, 0x40(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x2c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x34(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x304(r31)
	lfs      f0, 0x30c(r31)
	lfs      f4, 0x30(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x20(r1)
	stfs     f4, 0x24(r1)
	stfs     f3, 0x28(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f26, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f26
	bl       angDist__Fff
	fmuls    f28, f1, f28
	lfs      f0, lbl_8051EDD0@sda21(r2)
	lfs      f1, lbl_8051EDCC@sda21(r2)
	fmuls    f0, f0, f27
	fabs     f2, f28
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_80386930
	lfs      f0, lbl_8051EDA0@sda21(r2)
	fcmpo    cr0, f28, f0
	ble      lbl_8038692C
	fmr      f28, f1
	b        lbl_80386930

lbl_8038692C:
	fneg     f28, f1

lbl_80386930:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f28, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)
	stfs     f30, 0x1d4(r31)
	stfs     f31, 0x1d8(r31)
	stfs     f29, 0x1dc(r31)
	b        lbl_80386A50

lbl_80386968:
	lwz      r5, 0xc0(r31)
	mr       r4, r31
	lwz      r12, 0(r31)
	addi     r3, r1, 0x14
	lfs      f2, lbl_8051ED94@sda21(r2)
	lfs      f1, 0x8e4(r5)
	lfs      f0, 0x8bc(r5)
	lwz      r12, 8(r12)
	fmuls    f28, f2, f1
	fmuls    f27, f2, f0
	mtctr    r12
	bctrl
	lfs      f4, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x18(r1)
	fsubs    f1, f29, f4
	fsubs    f2, f31, f0
	stfs     f4, 8(r1)
	stfs     f3, 0xc(r1)
	stfs     f0, 0x10(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f26, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f26
	bl       angDist__Fff
	fmuls    f27, f1, f27
	lfs      f0, lbl_8051EDD0@sda21(r2)
	lfs      f1, lbl_8051EDCC@sda21(r2)
	fmuls    f0, f0, f28
	fabs     f2, f27
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_80386A28
	lfs      f0, lbl_8051EDA0@sda21(r2)
	fcmpo    cr0, f27, f0
	ble      lbl_80386A24
	fmr      f27, f1
	b        lbl_80386A28

lbl_80386A24:
	fneg     f27, f1

lbl_80386A28:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f27, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)

lbl_80386A50:
	lwz      r3, 0x28c(r31)
	li       r4, 0x513c
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x88(r12)
	mtctr    r12
	bctrl
	li       r3, 0

lbl_80386A70:
	psq_l    f31, 184(r1), 0, qr0
	lfd      f31, 0xb0(r1)
	psq_l    f30, 168(r1), 0, qr0
	lfd      f30, 0xa0(r1)
	psq_l    f29, 152(r1), 0, qr0
	lfd      f29, 0x90(r1)
	psq_l    f28, 136(r1), 0, qr0
	lfd      f28, 0x80(r1)
	psq_l    f27, 120(r1), 0, qr0
	lfd      f27, 0x70(r1)
	psq_l    f26, 104(r1), 0, qr0
	lfd      f26, 0x60(r1)
	lwz      r0, 0xc4(r1)
	lwz      r31, 0x5c(r1)
	mtlr     r0
	addi     r1, r1, 0xc0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80386AB4
 * Size:	000080
 */
void Obj::setFindAnim()
{
	if (_314.r == mNormalColor1.r && _314.g == mNormalColor1.g && _314.b == mNormalColor1.b) {
		startMotion(UMIANIM_FSearch, nullptr);
		return;
	}

	fadeColorEffect();
	startMotion(UMIANIM_Search, nullptr);
}

/*
 * --INFO--
 * Address:	80386B34
 * Size:	000044
 */
void Obj::fadeAllEffect()
{
	mEfxHamon->fade();
	fadeColorEffect();
}

/*
 * --INFO--
 * Address:	80386B78
 * Size:	0000A8
 */
void Obj::fadeColorEffect()
{
	mEfxWeakRed->fade();
	mEfxWeakBlue->fade();
	mEfxEyeRed[0]->fade();
	mEfxEyeRed[1]->fade();
	mEfxEyeBlue[0]->fade();
	mEfxEyeBlue[1]->fade();
	_2DC = false;
}

/*
 * --INFO--
 * Address:	80386C20
 * Size:	00010C
 */
void Obj::createColorEffect()
{
	if (mTargetNavi) {
		efx::Arg fxArg(mPosition);
		_300 = 0;
		_2DC = true;
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

/*
 * --INFO--
 * Address:	80386D2C
 * Size:	0000C0
 */
void Obj::attackEffect()
{
	efx::TUmiAttack attackFX(_388);
	efx::ArgScale fxArg(mPosition, mScaleModifier);

	attackFX.create(&fxArg);
}

/*
 * --INFO--
 * Address:	80386DEC
 * Size:	0000C0
 */
void Obj::meltEffect()
{
	efx::TUmiDeadmelt meltFX;
	efx::ArgScale fxArg(mHamonPosition, mScaleModifier);

	meltFX.create(&fxArg);
	_2DD = 1;
}

/*
 * --INFO--
 * Address:	80386EAC
 * Size:	00010C
 */
void Obj::flickEffect()
{
	if (mWaterBox) {
		efx::TUmiFlick flickFX;
		efx::ArgScale fxArg(mHamonPosition, mScaleModifier);

		flickFX.create(&fxArg);

		PSM::SeSound* sound = PSStartSoundVec(PSSE_EV_ITEM_LAND_WATER1_XL, (Vec*)&mHamonPosition);
		if (sound) {
			sound->setPitch(0.8f, 0, 0);
		}
	}
}

/*
 * --INFO--
 * Address:	80386FB8
 * Size:	000070
 */
void Obj::eatEffect()
{
	efx::Arg arg(mPosition);
	mEfxEat->create(&arg);
	mEfxEat->setGlobalScale(mScaleModifier);
}

/*
 * --INFO--
 * Address:	80387028
 * Size:	000070
 */
void Obj::bubbleEffect()
{
	efx::Arg arg(mPosition);
	mEfxBubble->create(&arg);
	mEfxBubble->setGlobalScale(mScaleModifier);
}

/*
 * --INFO--
 * Address:	80387098
 * Size:	000028
 */
void Obj::delShadow() { shadowMgr->delNormalShadow(this); }

/*
 * --INFO--
 * Address:	803870C0
 * Size:	0002C8
 */
void Obj::eyeScaleMtxCalc()
{
	if (_2DD) {
		return;
	}

	Matrixf* mtx = mModel->mJ3dModel->mMtxBuffer->getWorldMatrix(mEyeJointIdx);
	if (C_PARMS->_A15) {
		_35C = C_PARMS->_A30;
	} else {
		_35C = 0.45f;
	}
	Vector3f xVec = mtx->getBasis(0);
	xVec.normalise();
	Vector3f yVec = mtx->getBasis(1);
	yVec.normalise();
	Vector3f zVec = mtx->getBasis(2);
	zVec.normalise();

	f32 scale        = _35C;
	Vector3f newXVec = xVec * scale;
	Vector3f newYVec = yVec * scale;
	Vector3f newZVec = zVec * scale;
	mtx->setBasis(0, newXVec);
	mtx->setBasis(1, newYVec);
	mtx->setBasis(2, newZVec);

	f32 y = mtx->mMatrix.structView.ty; // f30

	f32 y2 = mModel->mJ3dModel->mMtxBuffer->getWorldMatrix(mModel->getJointIndex("kuti_joint1"))->mMatrix.structView.ty; // f29

	Matrixf* mtx2 = mModel->mJ3dModel->mMtxBuffer->getWorldMatrix(mModel->getJointIndex("kuti_joint1"));

	f32 val                    = y * scale + y2 * (1.0f - scale);
	mtx->mMatrix.structView.ty = C_PARMS->_A28 * (1.0f - scale) + val;
	mtx->mMatrix.structView.ty = val - 5.0f * (1.0f - scale);

	if (C_PARMS->_A15) {
		mtx->mMatrix.structView.tx = mtx2->mMatrix.structView.tx;
		mtx->mMatrix.structView.ty = y2 + C_PARMS->_A28;
		mtx->mMatrix.structView.tz = mtx2->mMatrix.structView.tz;
	}

	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stfd     f30, 0x20(r1)
	psq_st   f30, 40(r1), 0, qr0
	stfd     f29, 0x10(r1)
	psq_st   f29, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lbz      r0, 0x2dd(r3)
	cmplwi   r0, 0
	bne      lbl_80387358
	lwz      r3, 0x174(r30)
	lwz      r5, 0xc0(r30)
	lwz      r4, 8(r3)
	lhz      r3, 0x360(r30)
	lwz      r4, 0x84(r4)
	lbz      r0, 0xa15(r5)
	mulli    r3, r3, 0x30
	lwz      r4, 0xc(r4)
	cmplwi   r0, 0
	add      r31, r4, r3
	beq      lbl_80387134
	lfs      f0, 0xa30(r5)
	stfs     f0, 0x35c(r30)
	b        lbl_8038713C

lbl_80387134:
	lfs      f0, lbl_8051EDA4@sda21(r2)
	stfs     f0, 0x35c(r30)

lbl_8038713C:
	lfs      f1, 0x10(r31)
	lfs      f2, 0x20(r31)
	fmuls    f4, f1, f1
	lfs      f0, 0(r31)
	fmuls    f5, f2, f2
	lfs      f3, lbl_8051EDA0@sda21(r2)
	fmadds   f4, f0, f0, f4
	fadds    f4, f5, f4
	fcmpo    cr0, f4, f3
	ble      lbl_80387174
	ble      lbl_80387178
	frsqrte  f3, f4
	fmuls    f4, f3, f4
	b        lbl_80387178

lbl_80387174:
	fmr      f4, f3

lbl_80387178:
	lfs      f3, lbl_8051EDA0@sda21(r2)
	fcmpo    cr0, f4, f3
	ble      lbl_80387198
	lfs      f3, lbl_8051ED90@sda21(r2)
	fdivs    f3, f3, f4
	fmuls    f0, f0, f3
	fmuls    f1, f1, f3
	fmuls    f2, f2, f3

lbl_80387198:
	lfs      f4, 0x14(r31)
	lfs      f5, 0x24(r31)
	fmuls    f7, f4, f4
	lfs      f3, 4(r31)
	fmuls    f8, f5, f5
	lfs      f6, lbl_8051EDA0@sda21(r2)
	fmadds   f7, f3, f3, f7
	fadds    f7, f8, f7
	fcmpo    cr0, f7, f6
	ble      lbl_803871D0
	ble      lbl_803871D4
	frsqrte  f6, f7
	fmuls    f7, f6, f7
	b        lbl_803871D4

lbl_803871D0:
	fmr      f7, f6

lbl_803871D4:
	lfs      f6, lbl_8051EDA0@sda21(r2)
	fcmpo    cr0, f7, f6
	ble      lbl_803871F4
	lfs      f6, lbl_8051ED90@sda21(r2)
	fdivs    f6, f6, f7
	fmuls    f3, f3, f6
	fmuls    f4, f4, f6
	fmuls    f5, f5, f6

lbl_803871F4:
	lfs      f9, 0x18(r31)
	lfs      f10, 0x28(r31)
	fmuls    f7, f9, f9
	lfs      f8, 8(r31)
	fmuls    f11, f10, f10
	lfs      f6, lbl_8051EDA0@sda21(r2)
	fmadds   f7, f8, f8, f7
	fadds    f7, f11, f7
	fcmpo    cr0, f7, f6
	ble      lbl_8038722C
	ble      lbl_80387230
	frsqrte  f6, f7
	fmuls    f7, f6, f7
	b        lbl_80387230

lbl_8038722C:
	fmr      f7, f6

lbl_80387230:
	lfs      f6, lbl_8051EDA0@sda21(r2)
	fcmpo    cr0, f7, f6
	ble      lbl_80387250
	lfs      f6, lbl_8051ED90@sda21(r2)
	fdivs    f6, f6, f7
	fmuls    f8, f8, f6
	fmuls    f9, f9, f6
	fmuls    f10, f10, f6

lbl_80387250:
	lfs      f31, 0x35c(r30)
	lis      r3, lbl_80493BEC@ha
	addi     r4, r3, lbl_80493BEC@l
	fmuls    f6, f0, f31
	fmuls    f0, f2, f31
	fmuls    f1, f1, f31
	stfs     f6, 0(r31)
	fmuls    f6, f3, f31
	fmuls    f4, f4, f31
	stfs     f1, 0x10(r31)
	fmuls    f3, f5, f31
	fmuls    f2, f8, f31
	stfs     f0, 0x20(r31)
	fmuls    f1, f9, f31
	fmuls    f0, f10, f31
	stfs     f6, 4(r31)
	stfs     f4, 0x14(r31)
	stfs     f3, 0x24(r31)
	stfs     f2, 8(r31)
	stfs     f1, 0x18(r31)
	stfs     f0, 0x28(r31)
	lfs      f30, 0x1c(r31)
	lwz      r3, 0x174(r30)
	bl       getJointIndex__Q28SysShape5ModelFPc
	lwz      r7, 0x174(r30)
	clrlwi   r0, r3, 0x10
	mulli    r5, r0, 0x30
	lis      r4, lbl_80493BEC@ha
	lwz      r6, 8(r7)
	mr       r3, r7
	addi     r4, r4, lbl_80493BEC@l
	lwz      r6, 0x84(r6)
	addi     r0, r5, 0x1c
	lwz      r5, 0xc(r6)
	lfsx     f29, r5, r0
	bl       getJointIndex__Q28SysShape5ModelFPc
	lfs      f0, lbl_8051ED90@sda21(r2)
	clrlwi   r0, r3, 0x10
	lwz      r4, 0x174(r30)
	mulli    r0, r0, 0x30
	fsubs    f4, f0, f31
	lwz      r3, 0xc0(r30)
	lwz      r4, 8(r4)
	lfs      f2, 0xa28(r3)
	fmuls    f1, f29, f4
	lwz      r3, 0x84(r4)
	lfs      f0, lbl_8051EDB0@sda21(r2)
	lwz      r3, 0xc(r3)
	fmadds   f3, f30, f31, f1
	add      r4, r3, r0
	fmadds   f1, f2, f4, f3
	fnmsubs  f0, f0, f4, f3
	stfs     f1, 0x1c(r31)
	stfs     f0, 0x1c(r31)
	lwz      r3, 0xc0(r30)
	lbz      r0, 0xa15(r3)
	cmplwi   r0, 0
	beq      lbl_80387358
	lfs      f0, 0xc(r4)
	stfs     f0, 0xc(r31)
	lwz      r3, 0xc0(r30)
	lfs      f0, 0xa28(r3)
	fadds    f0, f29, f0
	stfs     f0, 0x1c(r31)
	lfs      f0, 0x2c(r4)
	stfs     f0, 0x2c(r31)

lbl_80387358:
	psq_l    f31, 56(r1), 0, qr0
	lfd      f31, 0x30(r1)
	psq_l    f30, 40(r1), 0, qr0
	lfd      f30, 0x20(r1)
	psq_l    f29, 24(r1), 0, qr0
	lfd      f29, 0x10(r1)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x44(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	80387388
 * Size:	000184
 */
void Obj::weakScaleMtxCalc()
{
	Matrixf* mtx  = mModel->mJ3dModel->mMtxBuffer->getWorldMatrix(mWeakJointIdx);
	Vector3f xVec = mtx->getBasis(0);
	xVec.normalise();
	Vector3f yVec = mtx->getBasis(1);
	yVec.normalise();
	Vector3f zVec = mtx->getBasis(2);
	zVec.normalise();

	f32 scale        = C_PARMS->_A34;
	Vector3f newXVec = xVec * scale;
	Vector3f newYVec = yVec * scale;
	Vector3f newZVec = zVec * scale;
	mtx->setBasis(0, newXVec);
	mtx->setBasis(1, newYVec);
	mtx->setBasis(2, newZVec);
}

} // namespace UmiMushi
} // namespace Game
