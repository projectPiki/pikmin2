#include "Game/Entities/ShijimiChou.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/MapMgr.h"
#include "Game/Stickers.h"
#include "Game/gamePlayData.h"
#include "Game/Entities/ItemHoney.h"
#include "Game/EnemyFunc.h"
#include "Game/Navi.h"
#include "efx/TChou.h"
#include "PSM/Cluster.h"
#include "Dolphin/rand.h"

namespace Game {
namespace ShijimiChou {

static const char unusedName[] = "shijimiChou";

static J2DGXColorS10 mMatColorY0;
static J2DGXColorS10 mMatColorR0;
static J2DGXColorS10 mMatColorB0;
static GXColor mMatKColorY;
static GXColor mMatKColorR;
static GXColor mMatKColorB;

/**
 * @note Address: 0x80389634
 * @note Size: 0xA4
 */
void Obj::setParameters()
{
	EnemyBase::setParameters();
	f32 max        = C_PARMS->mMaxScale;
	f32 min        = C_PARMS->mMinScale;
	f32 randScale  = (max - min) * randFloat() + min;
	mScaleModifier = randScale;
	mScale         = Vector3f(randScale);
	mCollTree->mPart->setScale(randScale);
}

/**
 * @note Address: 0x803896D8
 * @note Size: 0x20
 */
void Obj::birth(Vector3f& pos, f32 faceDir)
{
	EnemyBase::birth(pos, faceDir);
}

/**
 * @note Address: 0x803896F8
 * @note Size: 0x24C
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	disableEvent(0, EB_LeaveCarcass);
	disableEvent(0, EB_DamageAnimEnabled);
	disableEvent(0, EB_DeathEffectEnabled);
	disableEvent(0, EB_PlatformCollEnabled);
	mUpdateContext.init(C_MGR->mUpdateMgr);

	mPitchRate       = randFloat();
	mPitchAmp        = 0.0f;
	mFlyTime         = 0;
	mGoalPosition    = mPosition;
	mYawRate         = 0.0f;
	mTargetFaceDir   = mFaceDir;
	mMapMinY         = 0.0f;
	mIsStuckToPiki   = false;
	mFallDir         = 0.0f;
	mZukanGoalHeight = mPosition.y;
	mHomePosition    = mPosition;
	mSpawningEnemy   = nullptr;
	mSpawnSource     = SHIJIMISOURCE_Null;

	if (mGroupLeader && mGroupLeader != this) {
		mSpawnSource = mGroupLeader->mSpawnSource;
	}

	disableEvent(0, EB_Cullable);
	mInPiklopedia = 0;
	shadowMgr->setForceVisible(this, true);

	mMatColorY0.r = 255;
	mMatColorY0.g = 255;
	mMatColorY0.b = 175;

	mMatColorR0.r = 255;
	mMatColorR0.g = 120;
	mMatColorR0.b = 180;

	mMatColorB0.r = 90;
	mMatColorB0.g = 30;
	mMatColorB0.b = 210;

	mMatKColorY.r = 85;
	mMatKColorY.g = 45;
	mMatKColorY.b = 10;

	mMatKColorR.r = 80;
	mMatKColorR.g = 10;
	mMatKColorR.b = 5;

	mMatKColorB.r = 5;
	mMatKColorB.g = 17;
	mMatKColorB.b = 5;

	J3DModelData* data = mModel->mJ3dModel->mModelData;
	u16 idx            = data->getMaterialName()->getIndex("mat_shijimi_hane_v");
	mMaterial          = data->getMaterialNodePointer(idx);
	P2ASSERTLINE(107, mMaterial);

	mFsm->start(this, SHIJIMICHOU_Wait, nullptr);
	mIsFallVertical = false;
}

/**
 * @note Address: 0x80389944
 * @note Size: 0x250
 */
Obj::Obj()
    : mSpecType(SHIJIMITYPE_Yellow)
    , mSpawnSource(SHIJIMISOURCE_Null)
    , mSpawningEnemy(nullptr)
    , mFsm(nullptr)
{
	mGroupLeader   = nullptr;
	mMaterial      = nullptr;
	mIsStuckToPiki = false;
	mGroupCount    = 0;
	mFlyType       = 0;
	mEfxDown       = nullptr;
	mSoundCluster  = nullptr;

	mAnimator = new ProperAnimator;
	setFSM(new FSM);

	mEfxDown = new efx::TChouDown(&mPosition);
	P2ASSERTLINE(140, mEfxDown);

	mSoundCluster = newPSCluster_SijimiChou(this);
	P2ASSERTLINE(143, mSoundCluster);
}

/**
 * @note Address: 0x80389BE0
 * @note Size: 0xAC
 */
void Obj::doUpdate()
{
	mFsm->exec(this);
	mPitchAmp = sinf(TAU * mPitchRate);
}

/**
 * @note Address: 0x80389C8C
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics&)
{
}

/**
 * @note Address: 0x80389C90
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx)
{
	EnemyBase::doDebugDraw(gfx);
}

/**
 * @note Address: 0x80389CB0
 * @note Size: 0x20
 */
void Obj::doAnimation()
{
	EnemyBase::doAnimation();
}

/**
 * @note Address: 0x80389CD0
 * @note Size: 0x4C
 */
void Obj::doEntry()
{
	if (mGroupLeader == this) {
		if (gameSystem && gameSystem->isZukanMode()) {
			EnemyBase::doEntry();
		}
	} else {
		EnemyBase::doEntry();
	}
}

/**
 * @note Address: 0x80389D1C
 * @note Size: 0x1A0
 */
void Obj::doAnimationCullingOff()
{
	mCurAnim->mIsPlaying = false;
	doAnimationUpdateAnimator();
	if (mPellet) {
		viewMakeMatrix(mBaseTrMatrix);
		Matrixf mtx;
		PSMTXScale(mtx.mMatrix.mtxView, mScale.x, mScale.y, mScale.z);
		PSMTXConcat(mBaseTrMatrix.mMatrix.mtxView, mtx.mMatrix.mtxView, mBaseTrMatrix.mMatrix.mtxView);
		Vector3f pos;
		mBaseTrMatrix.getTranslation(pos);
		onSetPosition(pos);
		onSetPositionPost(pos);

	} else {
		mBaseTrMatrix.makeTR(mPosition, mRotation);
	}

	if (isCullingOff()) {
		PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mModel->mJ3dModel->mPosMtx);

		if (C_PARMS->mDoUpdateAnimation && getCurrAnimIndex() == 2 && getStateID() != SHIJIMICHOU_Rest) {
			J3DModel* model = mModel->getJ3DModel();
			C_MGR->fetch(model, getMotionFrame());

		} else {
			mModel->mJ3dModel->calc();
		}

	} else {
		mModel->mJ3dModel->mModelData->mJointTree.mJoints[0]->mMtxCalc = nullptr;
	}

	mCollTree->update();
	updateCluster();
}

/**
 * @note Address: 0x80389EBC
 * @note Size: 0xB8
 */
void Obj::doAnimationCullingOn()
{
	updateCluster();
	EnemyBase::doAnimationCullingOn();
	if (mGroupLeader && mGroupLeader != this) {
		if (mGroupLeader->getStateID() == SHIJIMICHOU_Leave) {
			kill(nullptr);
		} else if (FABS(mPosition.x - mHomePosition.x) > 3.0f * C_GENERALPARMS.mTerritoryRadius()
		           || FABS(mPosition.z - mHomePosition.z) > 3.0f * C_GENERALPARMS.mTerritoryRadius()) {
			kill(nullptr);
		}
	}
}

/**
 * @note Address: 0x80389F74
 * @note Size: 0x84
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	if (mGroupLeader && mGroupLeader != this) {
		mGroupLeader->mGroupCount--;
	}

	mSpawningEnemy = nullptr;
	mEfxDown->fade();
	mUpdateContext.exit();
	EnemyBase::onKill(killArg);
}

/**
 * @note Address: 0x80389FF8
 * @note Size: 0x438
 */
void Obj::doSimulation(f32 simSpeed)
{
	mAcceleration = Vector3f(0.0f);
	if (mSticked && !mIsStuckToPiki && getStateID() != SHIJIMICHOU_Dead) {
		P2ASSERTLINE(374, mGroupLeader != this);

		efx::ArgChou fxChou;

		if (mSpecType == SHIJIMITYPE_Red) {
			fxChou.mType = efx::CHOU_Red;
		} else if (mSpecType == SHIJIMITYPE_Purple) {
			fxChou.mType = efx::CHOU_Purple;
		}

		mEfxDown->create(&fxChou);

		efx::TChouHit hitFX;
		efx::Arg fxArg(mPosition);
		hitFX.create(&fxArg);

		mIsStuckToPiki = true;
		mFsm->transit(this, SHIJIMICHOU_Fall, nullptr);

		Stickers stickers(this);

		Iterator<Creature> iter(&stickers);
		CI_LOOP(iter)
		{
			Creature* stuck = *iter;
			if (stuck->isPiki()) {
				Vector3f pos = stuck->mClimbingPosition;
				pos *= 0.1f;
				stuck->mClimbingPosition = pos;
			}
		}
	}

	EnemyBase::doSimulation(simSpeed);
	if (isEvent(0, EB_Bittered) && (mPosition.y < mMapMinY + 2.0f || mFloorTriangle)) {
		if (gameSystem && gameSystem->isZukanMode()) {
			mGoalPosition.y = mZukanGoalHeight;
		} else {
			genItem();
			kill(nullptr);
		}
	}
}

/**
 * @note Address: 0x8038A430
 * @note Size: 0x26C
 */
void Obj::changeMaterial()
{
	if (mSpecType == SHIJIMITYPE_Yellow) {
		mMaterial->getTevBlock()->setTevColor(0, mMatColorY0);
		mMaterial->getTevBlock()->setTevKColor(0, mMatKColorY);
	} else if (mSpecType == SHIJIMITYPE_Red) {
		mMaterial->getTevBlock()->setTevColor(0, mMatColorR0);
		mMaterial->getTevBlock()->setTevKColor(0, mMatKColorR);
	} else {
		mMaterial->getTevBlock()->setTevColor(0, mMatColorB0);
		mMaterial->getTevBlock()->setTevKColor(0, mMatKColorB);
	}

	J3DModel* j3dModel      = mModel->mJ3dModel;
	J3DModelData* modelData = j3dModel->getModelData();
	j3dModel->calcMaterial();

	for (u16 i = 0; i < modelData->getMaterialNum(); i++) {
		J3DMatPacket* packet = j3dModel->getMatPacket(i);
		j3dSys.setMatPacket(packet);
		J3DMaterial* material = modelData->getMaterialNodePointer(i);
		material->diff(packet->getShapePacket()->mDiffFlag);
	}
}

/**
 * @note Address: 0x8038A69C
 * @note Size: 0x30
 */
void Obj::doStartMovie()
{
	mEfxDown->startDemoDrawOff();
}

/**
 * @note Address: 0x8038A6CC
 * @note Size: 0x30
 */
void Obj::doEndMovie()
{
	mEfxDown->endDemoDrawOn();
}

/**
 * @note Address: 0x8038A6FC
 * @note Size: 0x34
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	hardConstraintOff();
}

/**
 * @note Address: 0x8038A730
 * @note Size: 0x8
 */
bool Obj::damageCallBack(Creature*, f32, CollPart*)
{
	return false;
}

/**
 * @note Address: 0x8038A738
 * @note Size: 0x94
 */
void Obj::wallCallback(const MoveInfo& moveInfo)
{
	if (!gameSystem || !gameSystem->isZukanMode()) {
		if (getStateID() == SHIJIMICHOU_Fall) {
			mIsFallVertical = true;
		} else {
			Vector3f pos = mPosition;
			pos.x += 100.0f * moveInfo.mWallNormal.x;
			pos.z += 100.0f * moveInfo.mWallNormal.z;
			mGoalPosition = pos;
		}
	}
}

/**
 * @note Address: 0x8038A7CC
 * @note Size: 0x64
 */
void Obj::collisionCallback(CollEvent& event)
{
	if (event.mCollidingCreature && event.mCollidingCreature->isPiki()) {
		EnemyBase::collisionCallback(event);
	}
}

/**
 * @note Address: 0x8038A830
 * @note Size: 0x28
 */
void Obj::startCarcassMotion()
{
	startMotion(SHIJIMIANIM_Carry, nullptr);
}

/**
 * @note Address: 0x8038A858
 * @note Size: 0x124
 */
void Obj::getShadowParam(ShadowParam& param)
{
	param.mPosition = mPosition;
	if (!C_PARMS->mDoUpdateAnimation || mUpdateContext.updatable() || mGroupLeader == this) {
		P2ASSERTLINE(601, mapMgr);

		mMapMinY = mapMgr->getMinY(param.mPosition);
	}

	param.mPosition.y               = 2.0f + mMapMinY;
	param.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	param.mBoundingSphere.mRadius   = 20.0f;

	// adjust shadow size based on how much above/below home position we are
	f32 sizeFactor     = 1.0f;
	f32 heightFromHome = mPosition.y - mHomePosition.y;
	if (heightFromHome > 0.0f) {
		sizeFactor -= heightFromHome / 100.0f;
	}

	if (sizeFactor < 0.0f) {
		sizeFactor = 0.0f;
	}

	param.mSize = 7.0f * sizeFactor;
}

/**
 * @note Address: 0x8038A97C
 * @note Size: 0x23C
 */
void Obj::genItem()
{
	if (!gameSystem || !gameSystem->isZukanMode()) {
		mInPiklopedia = 1;

		if (mSpawnSource == SHIJIMISOURCE_Plants || !(randFloat() > C_PROPERPARMS.mNectarRate())) {
			if (mSpecType == SHIJIMITYPE_Red) {
				if (playData && !playData->isDemoFlag(DEMO_First_Spicy_Spray_Made)) {
					return;
				}
			} else if (mSpecType == SHIJIMITYPE_Purple) {
				if (playData && !playData->isDemoFlag(DEMO_First_Bitter_Spray_Made)) {
					return;
				}
			}

			Vector3f nectarVel = Vector3f(sinf(mFaceDir) * 50.0f, 200.0f, sinf(mFaceDir) * 50.0f);
			Vector3f nectarPos = mPosition;
			nectarPos.y += 2.0f;

			BaseItem* item = ItemHoney::mgr->birth();
			if (item) {
				ItemHoney::Item* nectar = static_cast<ItemHoney::Item*>(item);
				nectar->init(nullptr);
				nectar->mHoneyType = mSpecType;
				nectar->setPosition(nectarPos, false);
				nectar->setVelocity(nectarVel);
			}
		}
	}
}

/**
 * @note Address: 0x8038ABB8
 * @note Size: 0x80
 */
bool Obj::checkFlyStart()
{
	if (gameSystem && gameSystem->isZukanMode() && mSpawnSource != SHIJIMISOURCE_Enemy) {
		return false;
	}

	if (mGroupLeader) {
		if (mGroupLeader == this) {
			return true;
		}

		return (mGroupLeader->getStateID() != SHIJIMICHOU_Wait);
	}

	return true;
}

/**
 * @note Address: 0x8038AC38
 * @note Size: 0x3BC
 */
void Obj::fly()
{
	if (mGroupLeader != this && (!gameSystem || !gameSystem->isZukanMode())) {
		enableEvent(0, EB_Cullable);
	}

	mPitchRate += C_PROPERPARMS.mPitchRate();
	mPosition.y += mPitchAmp * C_PROPERPARMS.mPitchAmpRate();

	if (mPitchRate > 1.0f) {
		mPitchRate -= 1.0f;
	}

	mCurrentVelocity.y = 0.0f;

	if (mPosition.sqrDistance2D(mGoalPosition) < 1000.0f) {
		setNextGoal();
		return;
	}

	f32 moveSpeed = C_GENERALPARMS.mMoveSpeed();
	if (!C_PARMS->mDoManualFlight) {
		EnemyFunc::walkToTarget(this, mGoalPosition, moveSpeed, C_GENERALPARMS.mTurnSpeed(), C_GENERALPARMS.mMaxTurnAngle());
	} else {
		f32 rotAccel = C_GENERALPARMS.mTurnSpeed();
		f32 rotSpeed = C_GENERALPARMS.mMaxTurnAngle();

		mYawRate += C_PARMS->mYawRate;
		if (mYawRate > 360.0f) {
			mYawRate -= 360.0f;
		}

		f32 sinVal        = (f32)sin(mYawRate);
		f32 scaledSin     = C_PARMS->mRotateFaceDirFactor * sinVal;
		f32 faceDirOffset = TORADIANS(scaledSin);
		mFaceDir          = mTargetFaceDir;
		turnToTarget(mGoalPosition, rotAccel, rotSpeed);

		f32 angle = mFaceDir + faceDirOffset;
		Vector3f velocity;
		velocity.x = moveSpeed * sinf(angle);
		velocity.y = getTargetVelocity().y;
		velocity.z = moveSpeed * cosf(angle);

		mTargetFaceDir = mFaceDir;
		if (absF(faceDirOffset) > rotSpeed) {
			if (faceDirOffset > 0.0f) {
				faceDirOffset = rotSpeed;
			} else {
				faceDirOffset = -rotSpeed;
			}
		}
		updateFaceDir(mFaceDir + roundAng(faceDirOffset));

		mTargetVelocity = velocity;
	}

	mPosition.y += 0.01f * (mGoalPosition.y - mPosition.y);
}

/**
 * @note Address: 0x8038AFF4
 * @note Size: 0x108
 */
void Obj::restFly()
{
	mRotation.x += 0.2f * mRotation.x;
	if (mRotation.x > TAU) {
		mRotation.x = 0.0f;
	}

	mPitchRate += C_PROPERPARMS.mPitchRate();
	mPosition.y += mPitchAmp * C_PROPERPARMS.mPitchAmpRate();

	if (mPitchRate > 1.0f) {
		mPitchRate -= 1.0f;
	}

	mCurrentVelocity.y = 0.0f;

	if (mPosition.sqrDistance2D(mGoalPosition) < 1000.0f) {
		setNextGoal();
	} else {
		EnemyFunc::walkToTarget(this, mGoalPosition, C_GENERALPARMS.mMoveSpeed(), C_GENERALPARMS.mTurnSpeed(),
		                        C_GENERALPARMS.mMaxTurnAngle());
	}

	mPosition.y += 0.05f * (mGoalPosition.y - mPosition.y);
}

/**
 * @note Address: 0x8038B0FC
 * @note Size: 0xB4
 */
void Obj::restCheck()
{
	if (mGroupLeader && mGroupLeader->getStateID() != SHIJIMICHOU_Wait && getStateID() != SHIJIMICHOU_Dead) {
		startMotion(SHIJIMIANIM_Move, nullptr);
		mFsm->transit(this, SHIJIMICHOU_Fly, nullptr);
		mRotation.x = 0.0f;
		hardConstraintOff();
		if (gameSystem && gameSystem->isZukanMode()) {
			enableEvent(0, EB_Cullable);
		}
	}
}

/**
 * @note Address: 0x8038B1B0
 * @note Size: 0x370
 */
bool Obj::checkRestOn()
{
	P2ASSERTLINE(827, mSpawningEnemy);
	Sys::Sphere collSphere;
	static_cast<CollPart*>(mSpawningEnemy->mCollTree->mPart->mChild)->getSphere(collSphere);

	f32 dist;
	f32 rad     = collSphere.mRadius;
	f32 restRad = 1.2f * rad;

	f32 dx = mPosition.x - collSphere.mPosition.x;
	f32 dy = mPosition.y - collSphere.mPosition.y;
	f32 dz = mPosition.z - collSphere.mPosition.z;

	dist                 = dx * dx + dy * dy + dz * dz;
	mRestEnemyCollSphere = collSphere;
	if (dist < SQUARE(restRad)) {
		mTargetVelocity *= 0.0f;
		mCurrentVelocity *= 0.0f;
		hardConstraintOn();

		if (dist > SQUARE(rad)) {
			collSphere.mPosition -= mPosition;
			collSphere.mPosition.normalise();

			mPosition += collSphere.mPosition;
			// more float math
		}

		f32 xRotVelocity = PI * ((collSphere.mPosition.y + collSphere.mRadius) - mPosition.y) / (-collSphere.mRadius * 2.0f);

		if (collSphere.mPosition.y + collSphere.mRadius < mPosition.y) {
			xRotVelocity = 0.0f;
		}

		if (collSphere.mPosition.y - collSphere.mRadius > mPosition.y) {
			xRotVelocity = PI;
		}

		mRotation.x += 0.3f * (xRotVelocity - mRotation.x);

		if (dist < SQUARE(rad) && FABS(xRotVelocity - mRotation.x) < 0.01f) {
			if (mRotation.x > TAU) {
				mRotation.x -= TAU;
			}

			if (mRotation.x < 0.0f) {
				mRotation.x += TAU;
			}

			return true;
		}

		f32 turnRate  = 0.3f;
		f32 angleDist = getAngDist(collSphere.mPosition);
		updateFaceDir(roundAng(angleDist * turnRate + mFaceDir));
	}

	return false;
}

/**
 * @note Address: 0x8038B520
 * @note Size: 0x2AC
 */
bool Obj::checkRestOff()
{
	P2ASSERTLINE(875, mSpawningEnemy);
	Sys::Sphere collSphere;
	Vector3f enemyPos = mSpawningEnemy->getPosition();
	static_cast<CollPart*>(mSpawningEnemy->mCollTree->mPart->mChild)->getSphere(collSphere);
	f32 rad = 2.0f * SQUARE(collSphere.mRadius);

	// this is a mess, but genuinely nothing else ive tried has worked, but somehow THIS gets the right
	// register alloc. >:(
	f32 dz, dx;
	f32 positionX      = mPosition.x;
	Vector3f pos1      = mPosition;
	Vector3f spherePos = collSphere.mPosition;
	dx                 = positionX - spherePos.x;
	dz                 = mPosition.z - spherePos.z;
	f32 dist           = dx * dx + (mPosition.y - spherePos.y) * (mPosition.y - spherePos.y) + dz * dz;

	if (dist > rad) {
		Vector3f pos;
		mPitchRate = 0.0f;
		pos        = mPosition;
		collSphere.mPosition -= mPosition;
		collSphere.mPosition.normalise();
		collSphere.mPosition *= 100.0f;
		mGoalPosition = pos - collSphere.mPosition;

		return true;
	}

	collSphere.mPosition = Vector3f(spherePos.x - positionX, spherePos.y - pos1.y, spherePos.z - pos1.z);
	collSphere.mPosition.normalise();
	collSphere.mPosition *= 2.0f;
	mPosition -= collSphere.mPosition;
	return false;
}

/**
 * @note Address: 0x8038B7CC
 * @note Size: 0xFC
 */
void Obj::resetRestPos()
{
	P2ASSERTLINE(910, mSpawningEnemy);
	Sys::Sphere collSphere;
	Vector3f vec = mRestEnemyCollSphere.mPosition;
	static_cast<CollPart*>(mSpawningEnemy->mCollTree->mPart->mChild)->getSphere(collSphere);
	vec -= collSphere.mPosition;
	mRestEnemyCollSphere = collSphere;
	mPosition -= vec;
}

/**
 * @note Address: 0x8038B8C8
 * @note Size: 0x174
 */
void Obj::leave()
{
	if (mGroupLeader && mGroupLeader != this && mGroupLeader->isAlive()) {
		if (mPosition.sqrDistance2D(mGoalPosition) < 1000.0f) {
			setTraceGoal();
		}

		EnemyFunc::walkToTarget(this, mGoalPosition, C_GENERALPARMS.mMoveSpeed(), C_GENERALPARMS.mTurnSpeed(),
		                        C_GENERALPARMS.mMaxTurnAngle());
		mPosition.y += 0.02f * (mGoalPosition.y - mPosition.y);
		mPitchRate += C_PROPERPARMS.mPitchRate();

		mPosition.y += mPitchAmp * C_PROPERPARMS.mPitchAmpRate();

		if (mPitchRate > 1.0f) {
			mPitchRate -= 1.0f;
		}
	} else if (isCullingOff()) {
		f32 riseFactor = 3.0f;
		if (mPitchRate > 1.0f) {
			mPitchRate = 0.0f;
		}

		f32 val = mPitchAmp;
		if (val < 0.0f) {
			riseFactor = -1.0f;
			mPitchRate += 0.05f;
		} else {
			mPitchRate += 0.01f;
		}

		mPosition.y += riseFactor * val;
	}
}

/**
 * @note Address: 0x8038BA3C
 * @note Size: 0x1AC
 */
void Obj::leaveInit()
{
	if (mGroupLeader && mGroupLeader == this) {
		Navi* navi = naviMgr->getActiveNavi();
		if (navi) {
			// run 'away' from navi
			Vector3f targetPos = navi->getPosition();
			f32 angle          = navi->getFaceDir();
			targetPos.x -= 500.0f * sinf(angle);
			targetPos.z -= 500.0f * cosf(angle);

			EnemyFunc::walkToTarget(this, targetPos, C_PARMS->mLeaveInitSpeedFactor * C_GENERALPARMS.mMoveSpeed(), 1.0f, 180.0f);
			Vector3f targetVel = getTargetVelocity();
			setVelocity(targetVel);
		}
	} else {
		setTraceGoal();
	}
}

/**
 * @note Address: 0x8038BBE8
 * @note Size: 0x210
 */
void Obj::setNextGoal()
{
	int stateID = getStateID();
	if (getFlyType() == 1 && stateID == SHIJIMICHOU_Fly && mGroupLeader && mGroupLeader != this
	    && (f32)mFlyTime < 0.5f * C_PROPERPARMS.mMaxFlyTime()) {
		setTraceGoal();
		return;
	}

	f32 radius = C_GENERALPARMS.mTerritoryRadius();
	if (mSpawnSource == SHIJIMISOURCE_Plants || mSpawnSource == SHIJIMISOURCE_Enemy) {
		radius = 100.0f;
	}

	radius *= 0.5f * randFloat() + 0.5f;
	mGoalPosition = mHomePosition;

	f32 randAngle = TAU * randFloat();

	f32 sinVal = sinf(randAngle);
	mGoalPosition.x += radius * sinVal;
	mGoalPosition.y += 50.0f * sinVal; // sure.
	mGoalPosition.z += radius * cosf(randAngle);
}

/**
 * @note Address: 0x8038BDF8
 * @note Size: 0x100
 */
void Obj::setTraceGoal()
{
	if (mGroupLeader) {
		Vector3f leaderPos = mGroupLeader->getPosition();
		f32 heightDiff     = (mPosition.y - leaderPos.y);
		heightDiff *= C_PARMS->mTraceGoalWeight;
		mGoalPosition = leaderPos;

		mGroupLeader->getFaceDir(); // ?

		f32 randVal = randFloat();
		f32 factor  = randVal;
		if (heightDiff > 0.0f) {
			factor = -randVal;
		}

		Vector3f offset;
		offset.x = factor * heightDiff;
		offset.z = offset.x;
		mGoalPosition.x += offset.x;
		mGoalPosition.y += 10.0f * factor;
		mGoalPosition.z += offset.z;
	}
}

/**
 * @note Address: 0x8038BEF8
 * @note Size: 0x60
 */
bool Obj::isFallEnd()
{
	if (mPosition.y < 10.0f + mMapMinY || mFloorTriangle) {
		mEfxDown->fade();
		return true;
	}

	return false;
}

/**
 * @note Address: 0x8038BF58
 * @note Size: 0x28
 */
void Obj::deadEffect()
{
	createBounceEffect(mPosition, 0.35f);
}

/**
 * @note Address: 0x8038BF80
 * @note Size: 0x1C4
 */
void Obj::fallBehavior()
{
	if (!mIsFallVertical) {
		mFallDir += C_PARMS->mFallRotateRate;
		if (mFallDir > TAU) {
			mFallDir -= TAU;
		}

		f32 sinVal  = sinf(mFallDir);
		f32 dist    = C_PARMS->mHorizFallScatter;
		mPosition.x = dist * sinVal + mFallStartPosition.x;
		mPosition.z = (0.5f * dist) * sinVal + mFallStartPosition.z;
		mPosition.y += sinVal;

		Vector3f vel = getVelocity();
		if (vel.y < -C_PARMS->mMaxFallSpeed) {
			vel.y = -C_PARMS->mMaxFallSpeed;
		}
		setVelocity(vel);

	} else {
		Vector3f vel = getVelocity();
		if (vel.y < -C_PARMS->mMaxFallSpeed) {
			vel.y = -C_PARMS->mMaxFallSpeed;
		}

		vel.x = 0.0f;
		vel.z = 0.0f;
		setVelocity(vel);
	}
}

/**
 * @note Address: 0x8038C144
 * @note Size: 0xB0
 */
void Obj::updateCluster()
{
	if (mGroupLeader == this) {
		int count = mGroupCount;
		if (count > 40) {
			count = 40;
		}

		if (count <= 1 && getStateID() != SHIJIMICHOU_Wait) {
			kill(nullptr);
			mGroupLeader = nullptr;
			return;
		}

		P2ASSERTLINE(1170, mSoundCluster);
		mSoundCluster->startClusterSound(count);
	}
}

/**
 * @note Address: 0x8038C1F4
 * @note Size: 0x20
 */
int Obj::getFlyType()
{
	if (C_PARMS->mUseParmFlyType) {
		return C_PARMS->mFlyType;
	}

	return mFlyType;
}

/**
 * @note Address: 0x8038C214
 * @note Size: 0x6C
 */
void Obj::leaderInit()
{
	setAtari(false);
	if (gameSystem && !gameSystem->isZukanMode()) {
		enableEvent(0, EB_BitterImmune);
	}

	shadowMgr->delNormalShadow(this);
}

/**
 * @note Address: 0x8038C280
 * @note Size: 0xA8
 */
void Obj::createAppearEffect()
{
	if (mGroupLeader != this) {
		efx::ArgChou fxArg;
		if (mSpecType == SHIJIMITYPE_Red) {
			fxArg.mType = efx::CHOU_Red;
		} else if (mSpecType == SHIJIMITYPE_Purple) {
			fxArg.mType = efx::CHOU_Purple;
		}

		mEfxDown->create(&fxArg);
	}
}

/**
 * @note Address: 0x8038C328
 * @note Size: 0x30
 */
void Obj::fadeAppearEffect()
{
	mEfxDown->fade();
}

} // namespace ShijimiChou
} // namespace Game
