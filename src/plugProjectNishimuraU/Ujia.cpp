#include "Game/Entities/Ujia.h"
#include "Game/Entities/ItemBridge.h"
#include "Game/MapMgr.h"
#include "efx/TUjinko.h"
#include "Dolphin/rand.h"
#include "Game/MapMgr.h"

namespace Game {
namespace Ujia {

/**
 * @note Address: 0x80266080
 * @note Size: 0x130
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
}

/**
 * @note Address: 0x802661B0
 * @note Size: 0x4
 */
void Obj::setInitialSetting(EnemyInitialParamBase*)
{
}

/**
 * @note Address: 0x802661B4
 * @note Size: 0x98
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	disableEvent(0, EB_LifegaugeVisible);
	disableEvent(0, EB_Cullable);
	resetAppearCheck();
	mIsUnderground = false;
	mNextState     = UJIA_NULL;
	resetBridgeSearch();
	mFsm->start(this, UJIA_Stay, nullptr);
	doAnimationCullingOff();
}

/**
 * @note Address: 0x8026624C
 * @note Size: 0x34
 */
void Obj::doUpdate()
{
	mFsm->exec(this);
}

/**
 * @note Address: 0x80266280
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics&)
{
}

/**
 * @note Address: 0x80266284
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx)
{
	EnemyBase::doDebugDraw(gfx);
}

/**
 * @note Address: 0x802662A4
 * @note Size: 0x4C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/**
 * @note Address: 0x802662F0
 * @note Size: 0xA8
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{
	shadowParam.mPosition = mModel->getJoint("kosijnt")->getWorldMatrix()->getColumn(3);
	shadowParam.mPosition.y -= 2.5f;
	shadowParam.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	if (isEvent(1, EB2_Earthquake)) {
		shadowParam.mBoundingSphere.mRadius = 50.0f;
	} else {
		shadowParam.mBoundingSphere.mRadius = 15.0f;
	}

	shadowParam.mSize = 8.0f;
}

/**
 * @note Address: 0x80266398
 * @note Size: 0x94
 */
bool Obj::pressCallBack(Creature* creature, f32 damage, CollPart* part)
{
	if (creature && creature->isPiki() && !isEvent(0, EB_Bittered) && getStateID() > UJIA_Dive) {
		// i.e. not in dead, press, stay, appear, or dive states
		mFsm->transit(this, UJIA_Press, nullptr);
		return true;
	}

	return false;
}

/**
 * @note Address: 0x8026642C
 * @note Size: 0x2C
 */
bool Obj::hipdropCallBack(Creature* creature, f32 damage, CollPart* part)
{
	return pressCallBack(creature, damage, part);
}

/**
 * @note Address: 0x80266458
 * @note Size: 0x28
 */
void Obj::startCarcassMotion()
{
	startMotion(UJIAANIM_Carry, nullptr);
}

/**
 * @note Address: 0x80266480
 * @note Size: 0x30
 */
void Obj::lifeIncrement()
{
	mInstantDamage = 0.0f;
	disableEvent(0, EB_TakingDamage);
	if (mHealth <= 0.0f) {
		mHealth = 1.0f;
	}
}

/**
 * @note Address: 0x802664B0
 * @note Size: 0x34
 */
void Obj::setInWaterDamage()
{
	if (mWaterBox) {
		addDamage(2.0f, 1.0f);
	}
}

/**
 * @note Address: 0x802664E4
 * @note Size: 0xB4
 */

void Obj::resetAppearCheck()
{
	if (Game::gameSystem && Game::gameSystem->isZukanMode()) {
		int weight = (rand() / RAND_MAX) * 30.0f; // does not match with inline
		SET_APPCHECK_MAX(mAppearCheck, weight + 5 * getCreatureID());

	} else {
		mAppearCheck = 0;
	}
}

/**
 * @note Address: 0x80266598
 * @note Size: 0x48
 */
bool Obj::isAppearCheck()
{
	if (mAppearCheck != 0) {
		mAppearCheck++;
		if (GET_APPCHECK_VAL(mAppearCheck) > GET_APPCHECK_MAX(mAppearCheck)) {
			mAppearCheck = 0;
			return true;
		}
		return false;
	}

	return true;
}

/**
 * @note Address: 0x802665E0
 * @note Size: 0x20
 */
void Obj::resetBridgeSearch()
{
	mCanSearchBridge      = 1;
	mBridge               = nullptr;
	mBridgeGoalRandOffsX  = 0.0f;
	mBridgeTargetMaxWidth = 0.0f;
}

/**
 * @note Address: 0x80266600
 * @note Size: 0x48
 */
void Obj::setBridgeSearch()
{
	if (mCanSearchBridge) {
		mCanSearchBridge = 0;
		setNearestBridge();
		setCullingCheck();
	}
}

/**
 * @note Address: 0x80266648
 * @note Size: 0x2C0
 */
void Obj::setNearestBridge()
{
	mBridge               = nullptr;
	mBridgeGoalRandOffsX  = 0.0f;
	mBridgeTargetMaxWidth = 0.0f;

	if (ItemBridge::mgr) {
		f32 radius = C_GENERALPARMS.mTerritoryRadius.mValue;
		radius     = SQUARE(radius);
		Iterator<BaseItem> iter(ItemBridge::mgr);
		CI_LOOP(iter)
		{
			ItemBridge::Item* bridge = static_cast<ItemBridge::Item*>(*iter);
			Vector3f startPos        = bridge->getStartPos();
			f32 newRad               = sqrDistanceXZ(mPosition, startPos);
			if (newRad < radius) {
				mBridge = bridge;
				radius  = newRad;
			}
		}
	}

	if (mBridge) {
		f32 width            = mBridge->getStageWidth() - 20.0f;
		mBridgeGoalRandOffsX = -(0.5f * width - randWeightFloat(width));
	}
}

/**
 * @note Address: 0x80266908
 * @note Size: 0x4
 */
void Obj::setCullingCheck()
{
}

/**
 * @note Address: 0x8026690C
 * @note Size: 0x1B4
 */
int Obj::checkBreakOrMove()
{
	if (mBridge) {
		Vector3f zVec     = mBridge->getBridgeZVec();
		Vector3f startPos = mBridge->getStartPos();

		Vector3f bridgeDist = startPos - mPosition;
		if (zVec.dot(bridgeDist) > 0.0f) {
			return UJIA_MoveCentre;
		}

		Vector3f xVec = mBridge->getBridgeXVec();
		f32 halfWidth = 0.5f * mBridge->getStageWidth();
		f32 dotX      = xVec.dot(bridgeDist);
		f32 width     = 20.0f + halfWidth;

		if (dotX < 0.0f) {
			mBridgeTargetMaxWidth = width;
		} else {
			mBridgeTargetMaxWidth = -width;
		}

		if (absVal(dotX) > halfWidth) {
			return UJIA_MoveSide;
		}

		f32 minY = mapMgr->getMinY(mPosition);

		if (mPosition.y > 5.0f + minY) {
			return UJIA_MoveTop;
		}

		return UJIA_MoveSide;
	}

	return UJIA_MoveCentre;
}

/**
 * @note Address: 0x80266AC0
 * @note Size: 0x28
 */
bool Obj::isBreakBridge()
{
	if (mBridge && mBridge->mCurrStageIdx != 0) {
		return true;
	}

	return false;
}

/**
 * @note Address: 0x80266AE8
 * @note Size: 0x2A8
 */
bool Obj::moveBridgeSide()
{
	// NON-MATCHING //
	Vector3f startPos = mBridge->getStartPos();
	Vector3f xVec     = mBridge->getBridgeXVec();
	Vector3f zVec     = mBridge->getBridgeZVec();

	xVec *= mBridgeTargetMaxWidth;
	zVec *= -20.0f;

	startPos += xVec;
	startPos += zVec;

	if (sqrDistanceXZ(mPosition, startPos) < 250.0f) {
		f32 moveSpeed = getMoveSpeed(0.75f);
		f32 x         = dolsinf(getFaceDir());
		f32 y         = getTargetVelocity().y;
		f32 z         = dolcosf(getFaceDir());

		mTargetVelocity = Vector3f(moveSpeed * x, y, moveSpeed * z);

		return true;

	} else {
		f32 val = turnToTarget2(startPos, C_GENERALPARMS.mTurnSpeed(), C_GENERALPARMS.mMaxTurnAngle());

		Vector3f vel;
		f32 moveSpeed = static_cast<EnemyParmsBase*>(mParms)->mGeneral.mMoveSpeed();
		vel.x         = dolsinf(getFaceDir());
		vel.y         = getTargetVelocity().y;
		vel.z         = dolcosf(getFaceDir());

		mTargetVelocity = Vector3f(moveSpeed * vel.x, vel.y, moveSpeed * vel.z);

		return false;
	}
}

/**
 * @note Address: 0x80266D90
 * @note Size: 0x288
 */
bool Obj::moveBridgeCentre()
{
	// NON-MATCHING //
	Vector3f startPos = mBridge->getStartPos();
	Vector3f xVec     = mBridge->getBridgeXVec();

	xVec *= 0.7f * mBridgeGoalRandOffsX;

	startPos += xVec;

	if (sqrDistanceXZ(mPosition, startPos) < 250.0f) {
		f32 moveSpeed = getMoveSpeed(0.75f);
		f32 x         = dolsinf(getFaceDir());
		f32 y         = getTargetVelocity().y;
		f32 z         = dolcosf(getFaceDir());

		mTargetVelocity = Vector3f(moveSpeed * x, y, moveSpeed * z);

		return true;

	} else {
		f32 val = turnToTarget2(startPos, C_GENERALPARMS.mTurnSpeed(), C_GENERALPARMS.mMaxTurnAngle());

		Vector3f vel;
		f32 moveSpeed = static_cast<EnemyParmsBase*>(mParms)->mGeneral.mMoveSpeed();
		vel.x         = dolsinf(getFaceDir());
		vel.y         = getTargetVelocity().y;
		vel.z         = dolcosf(getFaceDir());

		mTargetVelocity = Vector3f(moveSpeed * vel.x, vel.y, moveSpeed * vel.z);

		return false;
	}
}

/**
 * @note Address: 0x80267018
 * @note Size: 0x2F0
 */
bool Obj::moveBridgeTop()
{
	int stageID       = mBridge->mCurrStageIdx - 1;
	Vector3f stagePos = mBridge->getStagePos(stageID);
	Vector3f xVec     = mBridge->getBridgeXVec();

	xVec *= mBridgeGoalRandOffsX;

	stagePos += xVec;

	if (stageID > 0) {
		Vector3f zVec = mBridge->getBridgeZVec();
		zVec *= -20.0f;
		stagePos += zVec;
	}

	f32 val = turnToTarget2(stagePos, C_GENERALPARMS.mTurnSpeed(), C_GENERALPARMS.mMaxTurnAngle());

	f32 dist = sqrDistanceXZ(mPosition, stagePos);

	if (dist < 50.0f) {
		mTargetVelocity = Vector3f(0.0f);
		return true;

	} else if (dist < 250.0f) {
		f32 moveSpeed = C_GENERALPARMS.mMoveSpeed();
		f32 x         = dolsinf(getFaceDir());
		f32 y         = getTargetVelocity().y;
		f32 z         = dolcosf(getFaceDir());

		mTargetVelocity = Vector3f(moveSpeed * x, y, moveSpeed * z);

		return true;

	} else {
		f32 moveSpeed = C_GENERALPARMS.mMoveSpeed();
		f32 x         = dolsinf(getFaceDir());
		f32 y         = getTargetVelocity().y;
		f32 z         = dolcosf(getFaceDir());

		mTargetVelocity = Vector3f(moveSpeed * x, y, moveSpeed * z);
	}

	return false;
}

/**
 * @note Address: 0x80267308
 * @note Size: 0x5C
 */
void Obj::breakTargetBridge()
{
	InteractBreakBridge breakBridge(this, C_PROPERPARMS.mBridgeDamage.mValue);
	mBridge->stimulate(breakBridge);
}

/**
 * @note Address: 0x80267364
 * @note Size: 0x8C
 */
void Obj::createAppearEffect()
{
	Matrixf* worldMat = mModel->getJoint("ujinnko_m")->getWorldMatrix();
	efx::TUjinkoAp appearFX(worldMat);
	appearFX.create(nullptr);
}

/**
 * @note Address: 0x802673F0
 * @note Size: 0x8C
 */
void Obj::createDisAppearEffect()
{
	Matrixf* worldMat = mModel->getJoint("ujinnko_m")->getWorldMatrix();
	efx::TUjinkoHd hideFX(worldMat);
	hideFX.create(nullptr);
}

/**
 * @note Address: 0x8026747C
 * @note Size: 0x90
 */
void Obj::createBridgeEffect()
{
	Vector3f fxPos = mModel->getJoint("kamujnt")->getWorldMatrix()->getColumn(3);
	efx::Arg fxArg(fxPos);
	efx::TUjinkoEat eatFX;
	eatFX.create(&fxArg);
}

} // namespace Ujia
} // namespace Game
