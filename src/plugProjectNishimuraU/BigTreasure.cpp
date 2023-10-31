#include "Game/Entities/BigTreasure.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/ConditionNotStick.h"
#include "Game/IKSystemBase.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "Game/Navi.h"
#include "Game/MoviePlayer.h"
#include "Game/gamePlayData.h"
#include "Game/Stickers.h"
#include "PSM/EnemyBoss.h"
#include "PSSystem/PSMainSide_ObjSound.h"
#include "PS.h"
#include "Dolphin/rand.h"
#include "nans.h"

namespace Game {
namespace BigTreasure {

static const int unusedBigTreasureArray[] = { 0, 0, 0 };
static const char bigTreasureName[]       = "246-BigTreasure";

/*
 * --INFO--
 * Address:	802DBBB4
 * Size:	000024
 */
void BigTreasureGroundCallBack::invokeOnGround(int footIdx, WaterBox* wbox) { mObj->createOnGroundEffect(footIdx, wbox); }

/*
 * --INFO--
 * Address:	802DBBD8
 * Size:	000024
 */
void BigTreasureGroundCallBack::invokeOffGround(int footIdx, WaterBox* wbox) { mObj->createOffGroundEffect(footIdx, wbox); }

/*
 * --INFO--
 * Address:	802DBBFC
 * Size:	00013C
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);

	createIKSystem();
	createShadowSystem();
	createAttack();
	createEffect();
}

/*
 * --INFO--
 * Address:	802DBD38
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	802DBD3C
 * Size:	000160
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	enableEvent(0, EB_Untargetable);

	hardConstraintOn();

	disableEvent(0, EB_Cullable);
	disableEvent(0, EB_PlatformCollEnabled);
	disableEvent(0, EB_LeaveCarcass);

	mStateTimer = 0.0f;

	resetAttackLimitTimer();

	mNextState      = BIGTREASURE_NULL;
	mTargetPosition = mHomePosition;
	mShadowScale    = 1.0f;

	setupIKSystem();
	setupShadowSystem();
	setupAttack();
	setupCollision();
	setupTreasure();
	resetMaterialColor();
	setupEffect();
	resetBossAppearBGM();
	shadowMgr->delShadow(this);

	mFsm->start(this, BIGTREASURE_Stay, nullptr);

	if (gameSystem && gameSystem->isZukanMode()) {
		mFsm->transit(this, BIGTREASURE_Land, nullptr);
	} else {
		doAnimationCullingOff();
	}

	startShineParticleEffect();
}

/*
 * --INFO--
 * Address:	802DBE9C
 * Size:	00004C
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	finishShineParticleEffect();
	releaseItemLoozy();
	EnemyBase::onKill(killArg);
}

/*
 * --INFO--
 * Address:	802DBEE8
 * Size:	00004C
 */
void Obj::doUpdate()
{
	updateMaterialColor();
	mFsm->exec(this);
	updateIKSystem();
}

/*
 * --INFO--
 * Address:	802DBF34
 * Size:	00003C
 */
void Obj::doUpdateCommon()
{
	updateAttack();
	EnemyBase::doUpdateCommon();
	updateBossBGM();
}

/*
 * --INFO--
 * Address:	802DBF70
 * Size:	000094
 */
void Obj::doAnimationUpdateAnimator()
{
	SysShape::BlendLinearFun linearBlend;
	f32 animTime = EnemyAnimatorBase::defaultAnimSpeed * sys->mDeltaTime;
	static_cast<ProperAnimator*>(mAnimator)->animate(&linearBlend, 60.0f * sys->mDeltaTime, animTime, animTime);

	SysShape::Model* model = mModel;
	model->mJ3dModel->mModelData->mJointTree.mJoints[0]->mMtxCalc
	    = static_cast<J3DMtxCalcAnmBase*>(static_cast<ProperAnimator*>(mAnimator)->mAnimator.getCalc());
}

/*
 * --INFO--
 * Address:	802DC004
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
	updateTreasure();
	finishAnimationIKSystem();
}

/*
 * --INFO--
 * Address:	802DC09C
 * Size:	000194
 */
void Obj::changeMaterial()
{
	J3DModel* j3dModel      = mModel->mJ3dModel;
	J3DModelData* modelData = j3dModel->getModelData();

	u16 bodyIdx          = modelData->mMaterialTable.mMaterialNames->getIndex("mat_body");
	J3DMaterial* bodyMat = modelData->mMaterialTable.mMaterials[bodyIdx];
	bodyMat->mTevBlock->setTevColor(0, mCurrMatBodyColor);

	J3DGXColorS10 color1(mCurrClusterEyeColor.mRgb[0], mCurrClusterEyeColor.mRgb[1], mCurrClusterEyeColor.mRgb[2], 255);

	u16 eyeIdx1          = modelData->mMaterialTable.mMaterialNames->getIndex("mat_eye1");
	J3DMaterial* eyeMat1 = modelData->mMaterialTable.mMaterials[eyeIdx1];
	eyeMat1->mTevBlock->setTevColor(0, color1);

	J3DGXColorS10 color2(mCurrSideEyeColor.mRgb[0], mCurrSideEyeColor.mRgb[1], mCurrSideEyeColor.mRgb[2], 255);

	u16 eyeIdx2          = modelData->mMaterialTable.mMaterialNames->getIndex("mat_eye2");
	J3DMaterial* eyeMat2 = modelData->mMaterialTable.mMaterials[eyeIdx2];
	eyeMat2->mTevBlock->setTevColor(0, color2);

	j3dModel->calcMaterial();
}

/*
 * --INFO--
 * Address:	802DC230
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	802DC234
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	802DC254
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
 * Address:	802DC2A0
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
 * Address:	802DC2DC
 * Size:	000100
 */
bool Obj::damageCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	f32 adjustedDamage = damage;
	if (collpart && creature && creature->isPiki()) {
		// damage reduced to 25% when in land state
		if (getStateID() == BIGTREASURE_Land) {
			adjustedDamage *= 0.25f;
		}

		// check if piki is damaging a weapon
		for (int i = 0; i < 4; i++) {
			if (mTreasureCollParts[i] == collpart) {
				addTreasureDamage(i, adjustedDamage);
				mFlickTimer++;
				return true;
			}
		}

		// if no weapon hit, check if we even *have* any weapons
		// if we don't, damage actual health
		if (!isCapturedTreasure()) {
			addDamage(adjustedDamage, 1.0f);
			return true;
		}
	}

	return false;
}

/*
 * --INFO--
 * Address:	802DC3DC
 * Size:	000038
 */
bool BigTreasure::Obj::hipdropCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	return damageCallBack(creature, damage, collpart) == false; // sure.
}

/*
 * --INFO--
 * Address:	802DC414
 * Size:	000020
 */
void Obj::doStartStoneState() { EnemyBase::doStartStoneState(); }

/*
 * --INFO--
 * Address:	802DC434
 * Size:	000048
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	EnemyFunc::flickStickPikmin(this, 1.0f, 10.0f, 0.0f, FLICK_BACKWARD_ANGLE, nullptr);
}

/*
 * --INFO--
 * Address:	802DC47C
 * Size:	000020
 */
void Obj::doStartMovie() { effectDrawOff(); }

/*
 * --INFO--
 * Address:	802DC49C
 * Size:	000020
 */
void Obj::doEndMovie() { effectDrawOn(); }

/*
 * --INFO--
 * Address:	802DC4BC
 * Size:	000050
 */
void Obj::getThrowupItemPosition(Vector3f* position) { *position = mModel->getJoint("kosi")->getWorldMatrix()->getBasis(3); }

/*
 * --INFO--
 * Address:	802DC50C
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
 * Address:	802DC520
 * Size:	00005C
 */
void Obj::resetAttackLimitTimer() { mAttackLimitTimer = randWeightFloat(2.0f); }

/*
 * --INFO--
 * Address:	802DC57C
 * Size:	000228
 */
bool Obj::isAttackLimitTime()
{
	bool check         = false;
	f32 incTime        = sys->mDeltaTime;
	f32 extendedTime   = 3.0f * sys->mDeltaTime;
	f32 treasureFactor = 2.0f * (f32)getCapturedTreasureNum() + 4.0f;

	Sys::Sphere sphere(mPosition, 300.0f);
	CellIteratorArg iterArg(sphere);
	iterArg.mIsSphereCollisionDisabled = true;

	CellIterator iter(iterArg);

	CI_LOOP(iter)
	{
		Creature* creature = static_cast<Creature*>(*iter);
		if (creature->isAlive() && (creature->isNavi() || creature->isPiki())) {
			if (!check) {
				Vector3f creaturePos = creature->getPosition();

				f32 xDiff = mPosition.x - creaturePos.x;
				xDiff     = (xDiff > 0.0f) ? xDiff : -xDiff;

				if (xDiff < 225.0f) {
					f32 zDiff = mPosition.z - creaturePos.z;
					zDiff     = (zDiff > 0.0f) ? zDiff : -zDiff;

					if (zDiff < 225.0f) {
						check = true;
					}
				}
			}

			if (creature->isStickTo()) {
				if (creature->mSticker != this) {
					incTime = extendedTime;
				}
			}
		}
	}

	if (mAttackLimitTimer > treasureFactor) {
		return check;
	} else {
		mAttackLimitTimer += incTime;
		return false;
	}
}

/*
 * --INFO--
 * Address:	802DC7A4
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
 * Address:	802DCA3C
 * Size:	00010C
 */
void Obj::createIKSystem()
{
	mIkSystemMgr    = new IKSystemMgr;
	mIkSystemParms  = new IKSystemParms;
	mGroundCallBack = new BigTreasureGroundCallBack(this);
}

/*
 * --INFO--
 * Address:	802DCB48
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
 * Address:	802DCC6C
 * Size:	000084
 */
void Obj::setIKParameter()
{
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
 * Address:	802DCCF0
 * Size:	000020
 */
void Obj::setIKSystemTargetPosition(Vector3f& targetPos) { mIkSystemMgr->mTargetPosition = targetPos; }

/*
 * --INFO--
 * Address:	802DCD10
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
 * Address:	802DCD70
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
 * Address:	802DCDD0
 * Size:	000024
 */
void Obj::finishAnimationIKSystem() { mIkSystemMgr->resetAnimationCallBack(); }

/*
 * --INFO--
 * Address:	802DCDF4
 * Size:	000024
 */
void Obj::startProgramedIK() { mIkSystemMgr->startProgramedIK(); }

/*
 * --INFO--
 * Address:	802DCE18
 * Size:	000024
 */
void Obj::startIKMotion() { mIkSystemMgr->startIKMotion(); }

/*
 * --INFO--
 * Address:	802DCE3C
 * Size:	000024
 */
void Obj::finishIKMotion() { mIkSystemMgr->finishIKMotion(); }

/*
 * --INFO--
 * Address:	802DCE60
 * Size:	000024
 */
void Obj::forceFinishIKMotion() { mIkSystemMgr->forceFinishIKMotion(); }

/*
 * --INFO--
 * Address:	802DCE84
 * Size:	000024
 */
bool Obj::isFinishIKMotion() { return mIkSystemMgr->isFinishIKMotion(); }

/*
 * --INFO--
 * Address:	802DCEA8
 * Size:	000024
 */
void Obj::startBlendMotion() { mIkSystemMgr->startBlendMotion(); }

/*
 * --INFO--
 * Address:	802DCECC
 * Size:	000024
 */
void Obj::finishBlendMotion() { mIkSystemMgr->finishBlendMotion(); }

/*
 * --INFO--
 * Address:	802DCEF0
 * Size:	000024
 */
void Obj::checkJointScaleOn() { mIkSystemMgr->checkJointScaleOn(); }

/*
 * --INFO--
 * Address:	802DCF14
 * Size:	000020
 */
Vector3f Obj::getTraceCentrePosition() { return mIkSystemMgr->mTraceCentrePosition; }

/*
 * --INFO--
 * Address:	802DCF34
 * Size:	00001C
 */
Vector3f* Obj::getJointPositionPtr(int p1, int p2) { return &mJointPositions[p1][p2]; }

/*
 * --INFO--
 * Address:	802DCF50
 * Size:	000048
 */
void Obj::createShadowSystem() { mShadowMgr = new BigTreasureShadowMgr(this); }

/*
 * --INFO--
 * Address:	802DCF98
 * Size:	000080
 */
void Obj::setupShadowSystem()
{
	mShadowMgr->init();
	mShadowMgr->setKosiJointPosPtr(&mKosiJointPos);
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			mShadowMgr->setJointPosPtr(i, j, &mJointPositions[i][j]);
		}
	}
}

/*
 * --INFO--
 * Address:	802DD018
 * Size:	000024
 */
void Obj::doAnimationShadowSystem() { mShadowMgr->update(); }

/*
 * --INFO--
 * Address:	802DD03C
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
 * Address:	........
 * Size:	00013C
 */
void Obj::setupBigTreasureCollision()
{
	bool treasureCheck = true;
	for (int i = 0; i < 4; i++) {
		if (mTreasures[i]) {
			treasureCheck = false;
		} else if (mTreasureCollParts[i]) {
			flickStickCollPartPikmin(mTreasureCollParts[i]);
			mTreasureCollParts[i]->mSpecialID = '_t__';
			mTreasureCollParts[i]->mRadius    = 0.0f;
			mTreasureCollParts[i]->mAttribute = 1;
			mTreasureCollParts[i]             = nullptr;
		}
	}

	CollPart* tam1 = mCollTree->getCollPart('tam1');
	CollPart* tam2 = mCollTree->getCollPart('tam2');

	if (tam1 && tam2) {
		if (treasureCheck) {
			tam1->mSpecialID = 'st__';
			tam2->mSpecialID = 'st__';
		} else {
			tam1->mSpecialID = '_t__';
			tam2->mSpecialID = '_t__';
		}
	}
}

/*
 * --INFO--
 * Address:	802DD0CC
 * Size:	00035C
 */
void Obj::setupTreasure()
{
	u32 collTags[]      = { 'elec', 'fire', 'gasi', 'mizu' };
	char* pelletNames[] = { "elec", "fire", "gas", "water" };
	char* jointNames[]  = { "otakara_elec", "otakara_fire", "otakara_gas", "otakara_water" };

	for (int i = 0; i < 4; i++) {
		mIsWeaponAttacked[i]   = false;
		mTreasures[i]          = nullptr;
		mTreasureHealth[i]     = 0.0f;
		mTreasureShakeAngle[i] = 0.0f;
		mTreasureCollParts[i]  = mCollTree->getCollPart(collTags[i]);

		PelletInitArg weaponArg;
		if (pelletMgr->makePelletInitArg(weaponArg, pelletNames[i])) {
			mTreasures[i] = pelletMgr->birth(&weaponArg);

			if (mTreasures[i]) {
				Matrixf* pelletMat = mModel->getJoint(jointNames[i])->getWorldMatrix();
				mTreasures[i]->startCapture(pelletMat);
				mTreasureHealth[i] = 6000.0f;
			}
		}
	}

	mLouie = nullptr;
	PelletInitArg louieArg;
	if (pelletMgr->makePelletInitArg(louieArg, "loozy")) {
		mLouie = pelletMgr->birth(&louieArg);

		if (mLouie) {
			Matrixf* louieMat = mModel->getJoint("otakara_loozy")->getWorldMatrix();
			mLouie->startCapture(louieMat);
		}
	}

	setupBigTreasureCollision();

	mAttackIndex = -1;
}

/*
 * --INFO--
 * Address:	802DD428
 * Size:	000168
 */
void Obj::updateTreasure()
{
	dropTreasure();
	Matrixf captureMtx;
	for (int i = 0; i < 4; i++) {
		if (mTreasures[i]) {
			PSMTXIdentity(captureMtx.mMatrix.mtxView);

			if (mIsWeaponAttacked[i]) {
				mTreasureShakeAngle[i] += 1.4f;

				if (mTreasureShakeAngle[i] > TAU) {
					mTreasureShakeAngle[i] = 0.0f;
					mIsWeaponAttacked[i]   = false;
				}

				Matrixf rotRad;
				PSMTXRotRad(rotRad.mMatrix.mtxView, 'Y', 0.15f * sinf(mTreasureShakeAngle[i]));
				PSMTXConcat(captureMtx.mMatrix.mtxView, rotRad.mMatrix.mtxView, captureMtx.mMatrix.mtxView);
			}

			// vertically offset the comedy bomb from where it should be
			if (i == 2) {
				captureMtx.mMatrix.structView.ty = -22.0f;
			}

			mTreasures[i]->updateCapture(captureMtx);
		}
	}

	if (mLouie) {
		PSMTXIdentity(captureMtx.mMatrix.mtxView);
		mLouie->updateCapture(captureMtx);
	}
}

/*
 * --INFO--
 * Address:	802DD590
 * Size:	0001C0
 */
void Obj::dropTreasure()
{
	bool dropCheck = false;
	for (int i = 0; i < 4; i++) {
		if (mTreasures[i] && mTreasureHealth[i] <= 0.0f) {
			dropCheck = true;
			createDropTreasureEffect(i);
			finishTreasurePinchSmoke(i);
			dropTreasure(i);
		}
	}

	if (dropCheck) {
		startBossItemDropBGM();
		setupBigTreasureCollision();
	}
}

/*
 * --INFO--
 * Address:	802DD750
 * Size:	000088
 */
bool Obj::dropTreasure(int idx)
{
	mTreasures[idx]->endCapture();
	Vector3f velocity(0.0f, 100.0f, 0.0f);
	mTreasures[idx]->setVelocity(velocity);
	mTreasures[idx]      = nullptr;
	mTreasureHealth[idx] = 0.0f;
	return true;
}

/*
 * --INFO--
 * Address:	802DD7D8
 * Size:	00005C
 */
bool Obj::isCapturedTreasure()
{
	for (int i = 0; i < 4; i++) {
		if (mTreasures[i]) {
			return true;
		}
	}

	return false;
}

/*
 * --INFO--
 * Address:	802DD834
 * Size:	00001C
 */
bool Obj::isCapturedTreasure(int idx) { return mTreasures[idx]; }

/*
 * --INFO--
 * Address:	802DD850
 * Size:	00004C
 */
int Obj::getCapturedTreasureNum()
{
	int count = 0;
	for (int i = 0; i < 4; i++) {
		if (mTreasures[i]) {
			count++;
		}
	}

	return count;
}

/*
 * --INFO--
 * Address:	802DD89C
 * Size:	0000A0
 */
bool Obj::addTreasureDamage(int idx, f32 damage)
{
	if (mTreasures[idx]) {
		f32 startingHealth = mTreasureHealth[idx];

		if (isEvent(0, EB_Bittered)) {
			damage *= 0.1f;
		}

		mIsWeaponAttacked[idx] = true;
		mTreasureHealth[idx] -= damage;
		if (mTreasureHealth[idx] < 0.0f) {
			mTreasureHealth[idx] = 0.0f;
		}

		if (startingHealth >= 3000.0f && mTreasureHealth[idx] < 3000.0f) {
			startTreasurePinchSmoke(idx);
		}

		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	802DD93C
 * Size:	000284
 */
void Obj::flickStickCollPartPikmin(CollPart* collpart)
{
	Stickers stickers(this);
	Iterator<Creature> iter(&stickers);

	CI_LOOP(iter)
	{
		Creature* creature = (*iter);
		if (creature->isAlive() && creature->mStuckCollPart == collpart) {
			InteractFlick flick(this, 10.0f, 0.0f, FLICK_BACKWARD_ANGLE);
			creature->stimulate(flick);
		}
	}
}

/*
 * --INFO--
 * Address:	802DDBC0
 * Size:	00006C
 */
void Obj::releaseItemLoozy()
{
	if (mLouie) {
		mLouie->endCapture();
		Vector3f velocity(0.0f, 150.0f, 0.0f);
		mLouie->setVelocity(velocity);
		mLouie = nullptr;
	}
}

/*
 * --INFO--
 * Address:	802DDC2C
 * Size:	000048
 */
void Obj::createAttack() { mAttackMgr = new BigTreasureAttackMgr(this); }

/*
 * --INFO--
 * Address:	802DDC74
 * Size:	000024
 */
void Obj::setupAttack() { mAttackMgr->init(); }

/*
 * --INFO--
 * Address:	802DDC98
 * Size:	000024
 */
void Obj::updateAttack() { mAttackMgr->update(); }

/*
 * --INFO--
 * Address:	802DDCBC
 * Size:	000074
 */
void Obj::startAttack()
{
	switch (mAttackIndex) {
	case BIGATTACK_Elec:
		mAttackMgr->startElecAttack();
		break;
	case BIGATTACK_Fire:
		mAttackMgr->startFireAttack();
		break;
	case BIGATTACK_Gas:
		mAttackMgr->startGasAttack();
		break;
	case BIGATTACK_Water:
		mAttackMgr->startWaterAttack();
		break;
	}
}

/*
 * --INFO--
 * Address:	802DDD30
 * Size:	000024
 */
void Obj::finishAttack() { mAttackMgr->finishAttack(); }

/*
 * --INFO--
 * Address:	802DDD54
 * Size:	0001A8
 */
void Obj::setTreasureAttack()
{
	int attackIdx[BIGATTACK_AttackCount];     // indices for available attacks, max 4
	f32 weaponWeights[BIGATTACK_AttackCount]; // weightings for each available attack based on health, max 4

	f32 totalWeights = 0.0f; // total weightings
	int count        = 0;    // how many weapons alive, max 4

	// loop through all weapons; if alive, calc weighting + add to arrays
	// 0 = elec, 1 = fire, 2 = gas, 3 = water
	for (int i = 0; i < BIGATTACK_AttackCount; i++) {
		if (mTreasures[i]) {
			attackIdx[count] = i;

			// each weapon weight is [6000.0f, 12000.0f)
			// 6000.0f at max health, linearly approaches 12000.0f as health decreases
			weaponWeights[count] = 12000.0f - mTreasureHealth[i];
			totalWeights += weaponWeights[count];

			count++;
		}
	}

	// if we have any weapons left, determine attack
	if (count) {
		/*
		 * 'threshold' is a random float between 0 and totalWeights.
		 * - If threshold falls 'within' one of the 'bands' of weights, that weapon is selected.
		 * - A given band is bigger if that weapon is on lower health.
		 * - Bands are always in the order (elec -> fire -> gas -> water).
		 *
		 * i.e.
		 *
		 *      |     elec     | fire |   gas   |       water       |
		 *      0                 ^(threshold)                    total
		 *
		 * == fire gets chosen.
		 */
		f32 threshold = randWeightFloat(totalWeights);
		f32 inc       = 0.0f;
		for (int i = 0; i < count; i++) {
			inc += weaponWeights[i]; // jump to next weapon bracket
			if (inc > threshold) {   // if threshold falls in that bracket, choose weapon
				mAttackIndex = attackIdx[i];
				return;
			}
		}
	}

	// no weapons left/something weird happened, no attack
	mAttackIndex = BIGATTACK_NULL;
}

/*
 * --INFO--
 * Address:	802DDEFC
 * Size:	000048
 */
int Obj::getPreAttackAnimIndex()
{
	if (mAttackIndex == BIGATTACK_Elec) {
		return BIGTREASUREANIM_PreAttackE;
	} else if (mAttackIndex == BIGATTACK_Fire) {
		return BIGTREASUREANIM_PreAttackF;
	} else if (mAttackIndex == BIGATTACK_Gas) {
		return BIGTREASUREANIM_PreAttackG;
	} else if (mAttackIndex == BIGATTACK_Water) {
		return BIGTREASUREANIM_PreAttackW;
	}

	return BIGTREASUREANIM_DropItem;
}

/*
 * --INFO--
 * Address:	802DDF44
 * Size:	000090
 */
int Obj::getAttackAnimIndex()
{
	if (mAttackIndex == BIGATTACK_Elec) {
		return BIGTREASUREANIM_AttackE;
	} else if (mAttackIndex == BIGATTACK_Fire) {
		int currAnimIdx = getCurrAnimationIndex();
		if (currAnimIdx == BIGTREASUREANIM_PreAttackF) {
			return BIGTREASUREANIM_AttackF;
		} else if (currAnimIdx == BIGTREASUREANIM_PreAttackFR) {
			return BIGTREASUREANIM_AttackFR;
		} else if (currAnimIdx == BIGTREASUREANIM_PreAttackFL) {
			return BIGTREASUREANIM_AttackFL;
		} else {
			return BIGTREASUREANIM_AttackFB;
		}
	} else if (mAttackIndex == BIGATTACK_Gas) {
		return BIGTREASUREANIM_AttackG;
	} else if (mAttackIndex == BIGATTACK_Water) {
		return BIGTREASUREANIM_AttackW;
	}

	return BIGTREASUREANIM_DropItem;
}

/*
 * --INFO--
 * Address:	802DDFD4
 * Size:	000090
 */
int Obj::getPutItemAnimIndex()
{
	if (mAttackIndex == BIGATTACK_Elec) {
		return BIGTREASUREANIM_AttackEndE;
	} else if (mAttackIndex == BIGATTACK_Fire) {
		int currAnimIdx = getCurrAnimationIndex();
		if (currAnimIdx == BIGTREASUREANIM_AttackF) {
			return BIGTREASUREANIM_AttackEndF;
		} else if (currAnimIdx == BIGTREASUREANIM_AttackFR) {
			return BIGTREASUREANIM_AttackEndFR;
		} else if (currAnimIdx == BIGTREASUREANIM_AttackFL) {
			return BIGTREASUREANIM_AttackEndFL;
		} else {
			return BIGTREASUREANIM_AttackEndFB;
		}
	} else if (mAttackIndex == BIGATTACK_Gas) {
		return BIGTREASUREANIM_AttackEndG;
	} else if (mAttackIndex == BIGATTACK_Water) {
		return BIGTREASUREANIM_AttackEndW;
	}

	return BIGTREASUREANIM_DropItem;
}

/*
 * --INFO--
 * Address:	802DE064
 * Size:	000184
 */
int Obj::getFireAttackAnimIndex()
{
	f32 angle;

	Navi* navi = EnemyFunc::getNearestNavi(this, 180.0f, 1280.0f, nullptr, nullptr);

	if (navi) {
		Vector3f naviPos = navi->getPosition();
		angle            = JMath::atanTable_.atan2_(naviPos.x - mPosition.x, naviPos.z - mPosition.z);
		clampAngle(angle);

		angle -= mFaceDir;

		clampAngle(angle);

	} else {
		angle = randWeightFloat(TAU);
	}

	if (angle > (PI / 4) && angle <= (3 * PI / 4)) {
		return BIGTREASUREANIM_PreAttackFL;

	} else if (angle > (3 * PI / 4) && angle <= (5 * PI / 4)) {
		return BIGTREASUREANIM_PreAttackFB;

	} else if (angle > (5 * PI / 4) && angle <= (7 * PI / 4)) {
		return BIGTREASUREANIM_PreAttackFR;
	}

	return BIGTREASUREANIM_PreAttackF;
}

/*
 * --INFO--
 * Address:	802DE1E8
 * Size:	000098
 */
f32 Obj::getPreAttackTimeMax()
{
	if (mAttackIndex == BIGATTACK_Elec) {
		return C_PROPERPARMS.mFp10.mValue;

	} else if (mAttackIndex == BIGATTACK_Fire) {
		if (isNormalAttack(mAttackIndex)) {
			return C_PROPERPARMS.mFp11.mValue;
		} else {
			return C_PROPERPARMS.mFp31.mValue;
		}

	} else if (mAttackIndex == BIGATTACK_Gas) {
		return C_PROPERPARMS.mFp12.mValue;

	} else if (mAttackIndex == BIGATTACK_Water) {
		return C_PROPERPARMS.mFp13.mValue;
	}

	return 5.0f;
}

/*
 * --INFO--
 * Address:	802DE280
 * Size:	00005C
 */
f32 Obj::getAttackTimeMax()
{
	if (mAttackIndex == BIGATTACK_Elec) {
		return C_PROPERPARMS.mElecAttackTimeMax.mValue;

	} else if (mAttackIndex == BIGATTACK_Fire) {
		return C_PROPERPARMS.mFireAttackTimeMax.mValue;

	} else if (mAttackIndex == BIGATTACK_Gas) {
		return C_PROPERPARMS.mGasAttackTimeMax.mValue;

	} else if (mAttackIndex == BIGATTACK_Water) {
		return C_PROPERPARMS.mWaterAttackTimeMax.mValue;
	}

	return 5.0f;
}

/*
 * --INFO--
 * Address:	802DE2DC
 * Size:	000020
 */
bool Obj::isNormalAttack(int idx) { return (mTreasureHealth[idx] > 3000.0f); }

/*
 * --INFO--
 * Address:	802DE2FC
 * Size:	0000B0
 */
void Obj::resetMaterialColor()
{
	mIsFastMatAnim = false;

	resetTargetMatBodyColor(isCapturedTreasure());
	resetCurrentMatBodyColor();

	mTargetEyeColorIdx = EYECOLOR_Light; // initially go towards light color
	resetTargetEyeMatColor();
	resetCurrentMatEyeColor();

	setMatEyeAnimSpeed();
}

/*
 * --INFO--
 * Address:	802DE3AC
 * Size:	000038
 */
void Obj::resetTargetMatBodyColor(bool isVisible)
{
	mTargetMatBodyColor.r = 30;
	mTargetMatBodyColor.g = 70;
	mTargetMatBodyColor.b = 60;
	if (isVisible) {
		mTargetMatBodyColor.a = 255;
	} else {
		mTargetMatBodyColor.a = 0;
	}
}

/*
 * --INFO--
 * Address:	802DE3E4
 * Size:	000024
 */
void Obj::resetCurrentMatBodyColor() { mCurrMatBodyColor = mTargetMatBodyColor; }

/*
 * --INFO--
 * Address:	802DE408
 * Size:	000058
 */
void Obj::resetTargetEyeMatColor()
{
	mTargetClusterEyeColor[EYECOLOR_Dark].set(20.0f, 60.0f, 20.0f);
	mTargetClusterEyeColor[EYECOLOR_Light].set(120.0f, 255.0f, 90.0f);
	mTargetSideEyeColor[EYECOLOR_Dark].set(0.0f, 30.0f, 0.0f);
	mTargetSideEyeColor[EYECOLOR_Light].set(90.0f, 180.0f, 160.0f);
}

/*
 * --INFO--
 * Address:	802DE460
 * Size:	000034
 */
void Obj::resetCurrentMatEyeColor()
{
	mCurrClusterEyeColor = mTargetClusterEyeColor[EYECOLOR_Dark];
	mCurrSideEyeColor    = mTargetSideEyeColor[EYECOLOR_Dark];
}

/*
 * --INFO--
 * Address:	802DE494
 * Size:	00012C
 */
void Obj::setMatEyeAnimSpeed()
{
	f32 time = 30.0f;
	if (mIsFastMatAnim) {
		time = 10.0f; // i.e. when readying an attack
	}

	// 0 = red, 1 = green, 2 = blue
	for (int i = 0; i < 3; i++) {
		// eye 1 - cluster of eyes
		f32 colorDiff1   = absVal(mTargetClusterEyeColor[mTargetEyeColorIdx].mRgb[i] - mCurrClusterEyeColor.mRgb[i]);
		f32 defaultDiff1 = absVal(mTargetClusterEyeColor[EYECOLOR_Light].mRgb[i] - mTargetClusterEyeColor[EYECOLOR_Dark].mRgb[i]);

		// go faster if 'further away' than the normal oscillating range
		// otherwise just go 'normal speed'
		colorDiff1               = (colorDiff1 > defaultDiff1) ? colorDiff1 : defaultDiff1;
		mClusterEyeAnimSpeeds[i] = colorDiff1;
		if (mClusterEyeAnimSpeeds[i] < 1.0f) {
			mClusterEyeAnimSpeeds[i] = 1.0f;
		}

		mClusterEyeAnimSpeeds[i] = mClusterEyeAnimSpeeds[i] / time;

		// eye 2 - side eyes
		f32 colorDiff2 = absVal(mTargetSideEyeColor[mTargetEyeColorIdx].mRgb[i] - mCurrSideEyeColor.mRgb[i]);
		f32 otherDiff2 = absVal(mTargetSideEyeColor[EYECOLOR_Light].mRgb[i] - mTargetSideEyeColor[EYECOLOR_Dark].mRgb[i]);

		// go faster if 'further away' than the normal oscillating range
		// otherwise just go 'normal speed'
		colorDiff2            = (colorDiff2 > otherDiff2) ? colorDiff2 : otherDiff2;
		mSideEyeAnimSpeeds[i] = colorDiff2;
		if (mSideEyeAnimSpeeds[i] < 1.0f) {
			mSideEyeAnimSpeeds[i] = 1.0f;
		}

		mSideEyeAnimSpeeds[i] = mSideEyeAnimSpeeds[i] / time;
	}
}

/*
 * --INFO--
 * Address:	802DE5C0
 * Size:	0004D0
 */
void Obj::setAttackMaterialColor(bool isFast)
{
	mIsFastMatAnim = isFast;

	if (mIsFastMatAnim) {
		switch (mAttackIndex) {
		case BIGATTACK_Elec:
			mTargetMatBodyColor.r = 150;
			mTargetMatBodyColor.g = 130;
			mTargetMatBodyColor.b = 20;

			mTargetClusterEyeColor[EYECOLOR_Dark].set(30.0f, 30.0f, 0.0f);
			mTargetClusterEyeColor[EYECOLOR_Light].set(255.0f, 180.0f, 70.0f);

			mTargetSideEyeColor[EYECOLOR_Dark].set(60.0f, 60.0f, 30.0f);
			mTargetSideEyeColor[EYECOLOR_Light].set(255.0f, 150.0f, 80.0f);
			break;

		case BIGATTACK_Fire:
			mTargetMatBodyColor.r = 160;
			mTargetMatBodyColor.g = 50;
			mTargetMatBodyColor.b = 20;

			mTargetClusterEyeColor[EYECOLOR_Dark].set(60.0f, 20.0f, 20.0f);
			mTargetClusterEyeColor[EYECOLOR_Light].set(255.0f, 100.0f, 100.0f);

			mTargetSideEyeColor[EYECOLOR_Dark].set(80.0f, 60.0f, 45.0f);
			mTargetSideEyeColor[EYECOLOR_Light].set(255.0f, 150.0f, 120.0f);
			break;

		case BIGATTACK_Gas:
			mTargetMatBodyColor.r = 90;
			mTargetMatBodyColor.g = 5;
			mTargetMatBodyColor.b = 120;

			mTargetClusterEyeColor[EYECOLOR_Dark].set(30.0f, 0.0f, 30.0f);
			mTargetClusterEyeColor[EYECOLOR_Light].set(220.0f, 68.0f, 160.0f);

			mTargetSideEyeColor[EYECOLOR_Dark].set(40.0f, 20.0f, 80.0f);
			mTargetSideEyeColor[EYECOLOR_Light].set(120.0f, 20.0f, 200.0f);
			break;

		case BIGATTACK_Water:
			mTargetMatBodyColor.r = 40;
			mTargetMatBodyColor.g = 100;
			mTargetMatBodyColor.b = 180;

			mTargetClusterEyeColor[EYECOLOR_Dark].set(40.0f, 80.0f, 70.0f);
			mTargetClusterEyeColor[EYECOLOR_Light].set(120.0f, 255.0f, 180.0f);

			mTargetSideEyeColor[EYECOLOR_Dark].set(20.0f, 20.0f, 60.0f);
			mTargetSideEyeColor[EYECOLOR_Light].set(120.0f, 150.0f, 255.0f);
			break;
		}

	} else {
		bool hasTreasures = isCapturedTreasure();

		mTargetMatBodyColor.r = 30;
		mTargetMatBodyColor.g = 70;
		mTargetMatBodyColor.b = 60;

		if (hasTreasures) {
			mTargetMatBodyColor.a = 255;
		} else {
			mTargetMatBodyColor.a = 0;
		}

		if (hasTreasures) {
			mTargetClusterEyeColor[EYECOLOR_Dark].set(20.0f, 60.0f, 20.0f);
			mTargetClusterEyeColor[EYECOLOR_Light].set(120.0f, 255.0f, 90.0f);

			mTargetSideEyeColor[EYECOLOR_Dark].set(0.0f, 30.0f, 0.0f);
			mTargetSideEyeColor[EYECOLOR_Light].set(90.0f, 180.0f, 160.0f);

		} else {
			mTargetClusterEyeColor[EYECOLOR_Dark].set(10.0f, 100.0f, 255.0f);
			mTargetClusterEyeColor[EYECOLOR_Light].set(255.0f, 180.0f, 64.0f);

			mTargetSideEyeColor[EYECOLOR_Dark].set(60.0f, 230.0f, 30.0f);
			mTargetSideEyeColor[EYECOLOR_Light].set(100.0f, 30.0f, 200.0f);

			if (mTargetMatBodyColor.a == 0 && mCurrMatBodyColor.a == 255) {
				createChangeMaterialEffect();
				getJAIObject()->startSound(PSSE_EN_BIGTAKARA_SHELL, 0);
			}
		}
	}

	setMatEyeAnimSpeed();
}

/*
 * --INFO--
 * Address:	802DEA90
 * Size:	0004C0
 */
void Obj::updateMaterialColor()
{
	// body
	const int& targetRed = getTargetBodyRed();
	const int& currRed   = getCurrentBodyRed();
	mCurrMatBodyColor.r  = adjustValInt(currRed, targetRed, 5);

	const int& targetGreen = getTargetBodyGreen();
	const int& currGreen   = getCurrentBodyGreen();
	mCurrMatBodyColor.g    = adjustValInt(currGreen, targetGreen, 5);

	const int& targetBlue = getTargetBodyBlue();
	const int& currBlue   = getCurrentBodyBlue();
	mCurrMatBodyColor.b   = adjustValInt(currBlue, targetBlue, 5);

	const int& targetAlpha = getTargetBodyAlpha();
	const int& currAlpha   = getCurrentBodyAlpha();
	mCurrMatBodyColor.a    = adjustValInt(currAlpha, targetAlpha, 5);

	// cluster eyes
	mCurrClusterEyeColor.mRgb[0]
	    = adjustVal(mCurrClusterEyeColor.mRgb[0], mTargetClusterEyeColor[mTargetEyeColorIdx].mRgb[0], mClusterEyeAnimSpeeds[0]);
	mCurrClusterEyeColor.mRgb[1]
	    = adjustVal(mCurrClusterEyeColor.mRgb[1], mTargetClusterEyeColor[mTargetEyeColorIdx].mRgb[1], mClusterEyeAnimSpeeds[1]);
	mCurrClusterEyeColor.mRgb[2]
	    = adjustVal(mCurrClusterEyeColor.mRgb[2], mTargetClusterEyeColor[mTargetEyeColorIdx].mRgb[2], mClusterEyeAnimSpeeds[2]);

	// side eyes
	mCurrSideEyeColor.mRgb[0]
	    = adjustVal(mCurrSideEyeColor.mRgb[0], mTargetSideEyeColor[mTargetEyeColorIdx].mRgb[0], mSideEyeAnimSpeeds[0]);
	mCurrSideEyeColor.mRgb[1]
	    = adjustVal(mCurrSideEyeColor.mRgb[1], mTargetSideEyeColor[mTargetEyeColorIdx].mRgb[1], mSideEyeAnimSpeeds[1]);
	mCurrSideEyeColor.mRgb[2]
	    = adjustVal(mCurrSideEyeColor.mRgb[2], mTargetSideEyeColor[mTargetEyeColorIdx].mRgb[2], mSideEyeAnimSpeeds[2]);

	// if both cluster and side eyes are within 0.01f of the target color (for R, G, and B), swap target (light->dark or dark->light)
	bool check = true;
	for (int i = 0; i < 3; i++) {
		f32 clusterColorDiff = absVal(mCurrClusterEyeColor.mRgb[i] - mTargetClusterEyeColor[mTargetEyeColorIdx].mRgb[i]);
		if (!(clusterColorDiff > 0.01f)) {
			f32 sideColorDiff = absVal(mCurrSideEyeColor.mRgb[i] - mTargetSideEyeColor[mTargetEyeColorIdx].mRgb[i]);
			if (!(sideColorDiff > 0.01f)) {
				continue;
			}
		}
		check = false;
		break;
	}

	if (check) {
		mTargetEyeColorIdx ^= 1;

		setMatEyeAnimSpeed();
	}
}

/*
 * --INFO--
 * Address:	802DEF50
 * Size:	00011C
 */
void Obj::startBlendAnimation(int animIdx, bool doBlendAnim)
{
	if (doBlendAnim) {
		SysShape::Animator& animator = static_cast<ProperAnimator*>(mAnimator)->getAnimator(0);
		SysShape::AnimInfo* animInfo = animator.mAnimInfo;
		f32 time;

		if (animInfo) {
			time = animInfo->mAnm->mMaxFrame;
		} else {
			time = 0.0f;
		}

		f32 currFrame = animator.mTimer;

		if (time - 1.0f > currFrame) {
			int newIdx;
			if (animInfo) {
				newIdx = animInfo->mId;
			} else {
				newIdx = BIGTREASUREANIM_NULL;
			}

			if (animIdx != newIdx) {
				startBlend(newIdx, animIdx, &EnemyBlendAnimatorBase::sBlendLinearFun, 30.0f, nullptr);
				animator.setCurrFrame(currFrame);
			}
		} else {
			startMotion(animIdx, nullptr);
		}

	} else {
		startMotion(animIdx, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802DF06C
 * Size:	000098
 */
void Obj::endBlendAnimation()
{
	SysShape::Animator& animator = static_cast<ProperAnimator*>(mAnimator)->getAnimator(1);
	SysShape::AnimInfo* animInfo = animator.mAnimInfo;
	int animIdx;
	if (animInfo) {
		animIdx = animInfo->mId;
	} else {
		animIdx = BIGTREASUREANIM_NULL;
	}

	f32 currFrame = animator.mTimer;

	endBlend();
	startMotion(animIdx, nullptr);
	setMotionFrame(currFrame);
}

/*
 * --INFO--
 * Address:	802DF104
 * Size:	00004C
 */
int Obj::getCurrAnimationIndex()
{
	SysShape::AnimInfo* animInfo = static_cast<ProperAnimator*>(mAnimator)->getAnimator(0).mAnimInfo;
	if (animInfo) {
		return animInfo->mId;
	}

	return BIGTREASUREANIM_NULL;
}

/*
 * --INFO--
 * Address:	802DF150
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
 * Address:	802DF218
 * Size:	000120
 */
void Obj::startBossAttackBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
	PSM::checkBoss(soundObj);

	int jumpReqIdx = 3;
	switch (mAttackIndex) {
	case 0:
		jumpReqIdx = 7;
		break;
	case 1:
		jumpReqIdx = 3;
		break;
	case 2:
		jumpReqIdx = 5;
		break;
	case 3:
		jumpReqIdx = 6;
		break;
	}

	soundObj->jumpRequest(jumpReqIdx);
}

/*
 * --INFO--
 * Address:	802DF338
 * Size:	00016C
 */
void Obj::finishBossAttackBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
	PSM::checkBoss(soundObj);

	int jumpReqIdx = 1;
	int counter    = 0;
	for (int i = 0; i < 4; i++) {
		if (mTreasures[i]) {
			counter++;
		}
	}

	switch (counter) {
	case 0:
		jumpReqIdx = 11;
		break;
	case 1:
		jumpReqIdx = 10;
		break;
	case 2:
		jumpReqIdx = 9;
		break;
	case 3:
		jumpReqIdx = 8;
		break;
	case 4:
		jumpReqIdx = 1;
		break;
	}

	soundObj->jumpRequest(jumpReqIdx);
}

/*
 * --INFO--
 * Address:	802DF4A4
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
 * Address:	802DF56C
 * Size:	0001B0
 */
void Obj::startBossItemDropBGM()
{
	PSM::EnemyBoss* soundObj = static_cast<PSM::EnemyBoss*>(mSoundObj);
	PSM::checkBoss(soundObj);

	int jumpReqIdx = 8;
	int counter    = 0;
	for (int i = 0; i < 4; i++) {
		if (mTreasures[i]) {
			counter++;
		}
	}

	switch (counter) {
	case 0:
		jumpReqIdx = 11;
		break;
	case 1:
		jumpReqIdx = 10;
		break;
	case 2:
		jumpReqIdx = 9;
		break;
	case 3:
		jumpReqIdx = 8;
		break;
	}

	if (getStateID() == BIGTREASURE_Attack) {
		if (isEvent(0, EB_Bittered) && !mTreasures[mAttackIndex]) {
			soundObj->jumpRequest(jumpReqIdx);
		}
	} else {
		soundObj->jumpRequest(jumpReqIdx);
	}
}

/*
 * --INFO--
 * Address:	802DF71C
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
 * Address:	802DF818
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
 * Address:	802DF8D4
 * Size:	000164
 */
void Obj::setBossAppearBGM()
{
	PSM::EnemyBigBoss* soundObj = static_cast<PSM::EnemyBigBoss*>(mSoundObj);
	PSM::checkBoss(soundObj);

	int counter, jumpReqIdx;
	jumpReqIdx = 1;
	counter    = 0;

	for (int i = 0; i < 4; i++) {
		if (mTreasures[i]) {
			counter++;
		}
	}

	switch (counter) {
	case 0:
		jumpReqIdx = 11;
		break;
	case 1:
		jumpReqIdx = 10;
		break;
	case 2:
		jumpReqIdx = 9;
		break;
	case 3:
		jumpReqIdx = 8;
		break;
	case 4:
		jumpReqIdx = 1;
		break;
	}

	soundObj->_11C = jumpReqIdx;

	soundObj->setAppearFlag(true);
}

/*
 * --INFO--
 * Address:	802DFA38
 * Size:	00061C
 */
void Obj::createEffect()
{
	for (int i = 0; i < 4; i++) {
		mFootFX[i]          = new efx::TOootaFoot;
		mFootWFX[i]         = new efx::TDamaFootw;
		mTreasureSmokeFX[i] = new efx::TDamaSmoke;
		mStartTreasureFX[i] = new efx::TOootaStartOta;
		for (int j = 0; j < 3; j++) {
			mStartLegFX[i][j] = new efx::TOootaStartLeg;
		}

		for (int j = 0; j < 4; j++) {
			mDeadLegFX[i][j]   = new efx::TOootaDeadLeg;
			mChangeLegFX[i][j] = new efx::TOootaChangeLeg;
		}
	}

	mStartBodyFX     = new efx::TOootaStartBody;
	mDeadBodyFX      = new efx::TOootaDeadBody;
	mDeadAwaFX       = new efx::TOootaDeadAwa;
	mChangeBodyFX    = new efx::TOootaChangeBody;
	mShineParticleFX = new efx::TOootaParticle;
}

/*
 * --INFO--
 * Address:	802E00D8
 * Size:	000220
 */
void Obj::setupEffect()
{
	for (int i = 0; i < 4; i++) {
		mFootFX[i]->setPosptr(&mJointPositions[i][3]);
		mFootWFX[i]->mPosition = &mJointPositions[i][3];

		mStartLegFX[i][0]->setPosPosPtr(&mKosiJointPos, &mJointPositions[i][0]);
		for (int j = 1; j < 3; j++) {
			mStartLegFX[i][j]->setPosPosPtr(&mJointPositions[i][j - 1], &mJointPositions[i][j]);
		}

		mDeadLegFX[i][0]->setPosptr(&mKosiJointPos, &mJointPositions[i][0]);
		mChangeLegFX[i][0]->setPosPosPtr(&mKosiJointPos, &mJointPositions[i][0]);
		for (int j = 1; j < 4; j++) {
			mDeadLegFX[i][j]->setPosptr(&mJointPositions[i][j - 1], &mJointPositions[i][j]);
			mChangeLegFX[i][j]->setPosPosPtr(&mJointPositions[i][j - 1], &mJointPositions[i][j]);
		}
	}

	for (int i = 0; i < 4; i++) {
		if (mTreasures[i]) {
			mTreasureSmokeFX[i]->mPosition = &mTreasures[i]->mPelletPosition;
		}
	}

	Matrixf* kosiMtx   = mModel->getJoint("kosi")->getWorldMatrix();
	mStartBodyFX->mMtx = kosiMtx;
	mDeadBodyFX->setMtxptr(kosiMtx->mMatrix.mtxView);
	mDeadAwaFX->mMtx    = kosiMtx;
	mChangeBodyFX->mMtx = kosiMtx;

	mStartTreasureFX[0]->mMtx = mModel->getJoint("otakara_elec")->getWorldMatrix();
	mStartTreasureFX[1]->mMtx = mModel->getJoint("otakara_fire")->getWorldMatrix();
	mStartTreasureFX[2]->mMtx = mModel->getJoint("otakara_gas")->getWorldMatrix();
	mStartTreasureFX[3]->mMtx = mModel->getJoint("otakara_water")->getWorldMatrix();

	mShineParticleFX->mPosition = &mHomePosition;
}

/*
 * --INFO--
 * Address:	802E02F8
 * Size:	0001C0
 */
void Obj::createOnGroundEffect(int footIdx, WaterBox* wbox)
{
	Vector3f effectPos = mJointPositions[footIdx][3];

	if (wbox) {
		effectPos.y = *wbox->getSeaHeightPtr();

		efx::Arg fxArg(effectPos);
		efx::TDamaWalkw waterWalk;

		waterWalk.create(&fxArg);
		PSM::SeSound* sound = PSStartSoundVec(PSSE_EV_ITEM_LAND_WATER1_XL, (Vec*)&mJointPositions[footIdx][3]);
		if (sound) {
			sound->setPitch(1.2f, 0, 0);
		}

	} else {
		efx::Arg fxArg(effectPos);
		efx::TOootaWalk walk;

		walk.create(&fxArg);
	}

	PSStartSoundVec(PSSE_EN_BIGTAKARA_WALK, (Vec*)&mJointPositions[footIdx][3]);
	cameraMgr->startVibration(6, effectPos, 2);
	rumbleMgr->startRumble(14, effectPos, 2);
}

/*
 * --INFO--
 * Address:	802E04B8
 * Size:	0000A0
 */
void Obj::createOffGroundEffect(int footIdx, WaterBox* wbox)
{
	if (wbox) {
		mFootWFX[footIdx]->create(nullptr);
	} else {
		mFootFX[footIdx]->create(nullptr);
	}

	getJAIObject()->startSound(PSSE_EN_BIGTAKARA_RAISE, 0);
}

/*
 * --INFO--
 * Address:	802E0558
 * Size:	00003C
 */
void Obj::startTreasurePinchSmoke(int treasureIdx) { mTreasureSmokeFX[treasureIdx]->create(nullptr); }

/*
 * --INFO--
 * Address:	802E0594
 * Size:	000038
 */
void Obj::finishTreasurePinchSmoke(int treasureIdx) { mTreasureSmokeFX[treasureIdx]->fade(); }

/*
 * --INFO--
 * Address:	802E05CC
 * Size:	0000D8
 */
void Obj::createDropTreasureEffect(int treasureIdx)
{
	Vector3f pelletPos = mTreasures[treasureIdx]->getPosition();

	efx::Arg fxArg(pelletPos);
	efx::TOootaPartsoff partsOff;

	partsOff.create(&fxArg);

	getJAIObject()->startSound(PSSE_EN_BIGTAKARA_DROP_ITEM, 0);
}

/*
 * --INFO--
 * Address:	802E06A4
 * Size:	0000F0
 */
void Obj::createAppearBodyEffect()
{
	mStartBodyFX->create(nullptr);

	for (int i = 0; i < 4; i++) {
		if (mTreasures[i]) {
			mStartTreasureFX[i]->create(nullptr);
		}
	}

	efx::Arg fxArg(this);
	efx::TOootaStartSmoke smokeFX;

	smokeFX.create(&fxArg);
}

/*
 * --INFO--
 * Address:	802E0794
 * Size:	000060
 */
void Obj::createAppearLegEffect(int legIdx)
{
	for (int i = 0; i < 3; i++) {
		mStartLegFX[legIdx][i]->create(nullptr);
	}
}

/*
 * --INFO--
 * Address:	802E07F4
 * Size:	00021C
 */
void Obj::createDeadBombLegEffect(int idx)
{
	if (idx == 0) {
		for (int i = 0; i < 4; i++) {
			efx::ArgPosPos fxArg(mKosiJointPos, mJointPositions[i][idx]);
			efx::TOootaBombLeg bombLegFX;

			bombLegFX.create(&fxArg);
		}

	} else {
		for (int i = 0; i < 4; i++) {
			efx::ArgPosPos fxArg(mJointPositions[i][idx - 1], mJointPositions[i][idx]);
			efx::TOootaBombLeg bombLegFX;

			bombLegFX.create(&fxArg);
		}
	}
}

/*
 * --INFO--
 * Address:	802E0A10
 * Size:	000090
 */
void Obj::createDeadBombBodyEffect()
{
	Vector3f effectPos = mModel->getJoint("kosi")->getWorldMatrix()->getBasis(3);
	efx::Arg fxArg(effectPos);
	efx::TOootaBombBody bombBodyFX;
	bombBodyFX.create(&fxArg);
}

/*
 * --INFO--
 * Address:	802E0AA0
 * Size:	000060
 */
void Obj::startDeadBubbleLegEffect(int idx)
{
	for (int i = 0; i < 4; i++) {
		mDeadLegFX[i][idx]->create(nullptr);
	}
}

/*
 * --INFO--
 * Address:	802E0B00
 * Size:	00005C
 */
void Obj::finishDeadBubbleLegEffect(int idx)
{
	for (int i = 0; i < 4; i++) {
		mDeadLegFX[i][idx]->fade();
	}
}

/*
 * --INFO--
 * Address:	802E0B5C
 * Size:	000034
 */
void Obj::startDeadBubbleBodyEffect() { mDeadBodyFX->create(nullptr); }

/*
 * --INFO--
 * Address:	802E0B90
 * Size:	000030
 */
void Obj::finishDeadBubbleBodyEffect() { mDeadBodyFX->fade(); }

/*
 * --INFO--
 * Address:	802E0BC0
 * Size:	000034
 */
void Obj::startDeadBubbleMouthEffect() { mDeadAwaFX->create(nullptr); }

/*
 * --INFO--
 * Address:	802E0BF4
 * Size:	000030
 */
void Obj::finishDeadBubbleMouthEffect() { mDeadAwaFX->fade(); }

/*
 * --INFO--
 * Address:	802E0C24
 * Size:	0000A0
 */
void Obj::createChangeMaterialEffect()
{
	mChangeBodyFX->create(nullptr);

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			mChangeLegFX[i][j]->create(nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	802E0CC4
 * Size:	0000B8
 */
void Obj::createDeadBombFootEffect()
{
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			efx::Arg fxArg(mJointPositions[i][j]);
			efx::TDamaDeadBomb deadBombFX;
			deadBombFX.create(&fxArg);
		}
	}
}

/*
 * --INFO--
 * Address:	802E0D7C
 * Size:	000034
 */
void Obj::startShineParticleEffect() { mShineParticleFX->create(nullptr); }

/*
 * --INFO--
 * Address:	802E0DB0
 * Size:	000030
 */
void Obj::finishShineParticleEffect() { mShineParticleFX->fade(); }

/*
 * --INFO--
 * Address:	802E0DE0
 * Size:	0001C4
 */
void Obj::effectDrawOn()
{
	for (int i = 0; i < 4; i++) {
		mFootFX[i]->endDemoDrawOn();
		mFootWFX[i]->endDemoDrawOn();
		mTreasureSmokeFX[i]->endDemoDrawOn();
	}

	mStartBodyFX->endDemoDrawOn();

	for (int i = 0; i < 4; i++) {
		mStartTreasureFX[i]->endDemoDrawOn();
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			mStartLegFX[i][j]->endDemoDrawOn();
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			mDeadLegFX[i][j]->endDemoDrawOn();
		}
	}

	mDeadBodyFX->endDemoDrawOn();
	mDeadAwaFX->endDemoDrawOn();

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			mChangeLegFX[i][j]->endDemoDrawOn();
		}
	}

	mChangeBodyFX->endDemoDrawOn();
}

/*
 * --INFO--
 * Address:	802E0FA4
 * Size:	0001C4
 */
void Obj::effectDrawOff()
{
	for (int i = 0; i < 4; i++) {
		mFootFX[i]->startDemoDrawOff();
		mFootWFX[i]->startDemoDrawOff();
		mTreasureSmokeFX[i]->startDemoDrawOff();
	}

	mStartBodyFX->startDemoDrawOff();

	for (int i = 0; i < 4; i++) {
		mStartTreasureFX[i]->startDemoDrawOff();
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			mStartLegFX[i][j]->startDemoDrawOff();
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			mDeadLegFX[i][j]->startDemoDrawOff();
		}
	}

	mDeadBodyFX->startDemoDrawOff();
	mDeadAwaFX->startDemoDrawOff();

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			mChangeLegFX[i][j]->startDemoDrawOff();
		}
	}

	mChangeBodyFX->startDemoDrawOff();
}

/*
 * --INFO--
 * Address:	802E1168
 * Size:	00002C
 */
void Obj::subShadowScale()
{
	mShadowScale -= sys->mDeltaTime;
	if (mShadowScale < 0.00001f) {
		mShadowScale = 0.00001f;
	}
}

/*
 * --INFO--
 * Address:	802E1194
 * Size:	0000FC
 */
bool Obj::startBigTreasureBootUpDemo()
{
	if (gameSystem && gameSystem->isStoryMode() && moviePlayer && !playData->isDemoFlag(DEMO_Find_Titan_Dweevil)) {
		playData->setDemoFlag(DEMO_Find_Titan_Dweevil);

		MoviePlayArg movieArg("g36_find_louie", nullptr, nullptr, 0);
		movieArg.mOrigin           = mPosition;
		movieArg.mAngle            = mFaceDir;
		moviePlayer->mTargetObject = this;

		movie_begin(false);
		moviePlayer->play(movieArg);

		return true;
	}

	return false;
}

} // namespace BigTreasure
} // namespace Game
