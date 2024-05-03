#include "Game/Entities/Sokkuri.h"
#include "Game/EnemyFunc.h"
#include "Game/Navi.h"
#include "efx/TJgm.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Sokkuri {

/**
 * @note Address: 0x802F1264
 * @note Size: 0x130
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
}

/**
 * @note Address: 0x802F1394
 * @note Size: 0x4
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/**
 * @note Address: 0x802F1398
 * @note Size: 0x8C
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	disableEvent(0, EB_LifegaugeVisible);
	mIsHiding  = true;
	mTimer     = 0.0f;
	mNextState = SOKKURI_NULL;
	resetMoveVelocity();
	mFsm->start(this, SOKKURI_Stay, nullptr);
	doAnimationCullingOff();
}

/**
 * @note Address: 0x802F1424
 * @note Size: 0x34
 */
void Obj::doUpdate() { mFsm->exec(this); }

/**
 * @note Address: 0x802F1458
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics&) { }

/**
 * @note Address: 0x802F145C
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/**
 * @note Address: 0x802F147C
 * @note Size: 0x4C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/**
 * @note Address: 0x802F14C8
 * @note Size: 0x118
 */
void Obj::getShadowParam(ShadowParam& param)
{
	if (isAlive() && !isUnderground() && getStateID() != SOKKURI_Appear) {
		param.mPosition = mPosition;
		param.mPosition.y += 2.5f;
		param.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);

		if (isEvent(1, EB2_Earthquake)) {
			param.mBoundingSphere.mRadius = 50.0f;
		} else {
			param.mBoundingSphere.mRadius = 7.5f;
		}

		param.mSize = 10.0f;
	} else {
		param.mPosition                 = mPosition;
		param.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
		param.mBoundingSphere.mRadius   = 0.1f;
		param.mSize                     = 0.1f;
	}
}

/**
 * @note Address: 0x802F15E8
 * @note Size: 0x9C
 */
bool Obj::pressCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	if (creature && creature->isPiki() && !isEvent(0, EB_Bittered)) {
		int stateID = getStateID();
		if (stateID != SOKKURI_Dead && stateID != SOKKURI_Press) {
			mFsm->transit(this, SOKKURI_Press, nullptr);
			return true;
		}
	}

	return false;
}

/**
 * @note Address: 0x802F1684
 * @note Size: 0x9C
 */
bool Obj::hipdropCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	if (creature && creature->isPiki() && !isEvent(0, EB_Bittered)) {
		int stateID = getStateID();
		if (stateID != SOKKURI_Dead && stateID != SOKKURI_Press) {
			mFsm->transit(this, SOKKURI_Press, nullptr);
			return true;
		}
	}

	return false;
}

/**
 * @note Address: 0x802F1720
 * @note Size: 0xFC
 */
void Obj::wallCallback(const MoveInfo& moveInfo)
{
	mTargetPosition = moveInfo.mWallNormal;
	mTargetPosition.toFlatDirection();
	mTargetPosition *= 1000.0f;
	mTargetPosition += mPosition;
}

/**
 * @note Address: 0x802F181C
 * @note Size: 0x40
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	enableEvent(0, EB_LifegaugeVisible);
	mIsHiding = false;
}

/**
 * @note Address: 0x802F185C
 * @note Size: 0x20
 */
void Obj::doFinishStoneState() { EnemyBase::doFinishStoneState(); }

/**
 * @note Address: 0x802F187C
 * @note Size: 0x28
 */
void Obj::startCarcassMotion() { startMotion(SOKKURIANIM_Carry, nullptr); }

/**
 * @note Address: 0x802F18A4
 * @note Size: 0xAC
 */
Vector3f Obj::getOffsetForMapCollision()
{
	if (isAlive()) {
		return Vector3f::zero;
	}

	Vector3f offset = mModel->getJoint("leaf_joint1")->getWorldMatrix()->getColumn(3);
	offset.x -= mPosition.x;
	offset.y = 0.0f;
	offset.z -= mPosition.z;
	return offset;
}

/**
 * @note Address: N/A
 * @note Size: 0x68
 */
Creature* Obj::getSearchedTarget()
{
	if (gameSystem && gameSystem->isZukanMode()) {
		return EnemyFunc::getNearestPikmin(this, C_GENERALPARMS.mViewAngle.mValue, C_GENERALPARMS.mSightRadius.mValue, nullptr, nullptr);
	}

	return EnemyFunc::getNearestNavi(this, C_GENERALPARMS.mViewAngle.mValue, C_GENERALPARMS.mSightRadius.mValue, nullptr, nullptr);
}

/**
 * @note Address: 0x802F1950
 * @note Size: 0x7C
 */
bool Obj::isAppear()
{
	if (getSearchedTarget()) {
		return true;
	}

	return false;
}

/**
 * @note Address: 0x802F19CC
 * @note Size: 0xA8
 */
bool Obj::isDisappear()
{
	if (sqrDistanceXZ(mPosition, mHomePosition) < SQUARE(C_GENERALPARMS.mHomeRadius())) {
		if (!getSearchedTarget()) {
			return true;
		}
	}

	return false;
}

/**
 * @note Address: 0x802F1A74
 * @note Size: 0x1E0
 */
void Obj::setNextMoveInfo()
{
	f32 travelTime = C_PROPERPARMS.mMaxTravelTime.mValue - C_PROPERPARMS.mMinTravelTime.mValue;
	mTimer         = randWeightFloat(travelTime);

	f32 movingAngle = C_PROPERPARMS.mMaxMoveAngle.mValue - C_PROPERPARMS.mMinMoveAngle.mValue;
	f32 randAngle   = randWeightFloat(movingAngle) + getMinAngle();

	randAngle = randAngle * DEG2RAD * PI;

	if (randWeightFloat(1.0f) < 0.5f) {
		randAngle = randAngle + mFaceDir;
	} else {
		randAngle -= mFaceDir;
	}

	mTargetPosition.x = 1000.0f * sinf(randAngle) + mPosition.x;
	mTargetPosition.y = mPosition.y;
	mTargetPosition.z = 1000.0f * cosf(randAngle) + mPosition.z;
}

/**
 * @note Address: 0x802F1C54
 * @note Size: 0x16C
 */
void Obj::updateMoveState()
{
	if (sqrDistanceXZ(mPosition, mHomePosition) > SQUARE(C_GENERALPARMS.mTerritoryRadius())) {
		mTargetPosition = mHomePosition;
	}

	if (mWaterBox) {
		Vector3f velocity    = getVelocity();
		Vector3f newVelocity = velocity;
		newVelocity.y += 5.0f;
		setVelocity(newVelocity);

		mMoveVelocity = adjustVal(mMoveVelocity, C_PROPERPARMS.mUnderwaterMoveSpeed.mValue, 10.0f);

	} else {
		mMoveVelocity = adjustVal(mMoveVelocity, C_GENERALPARMS.mMoveSpeed.mValue, 25.0f);
	}
}

/**
 * @note Address: 0x802F1DC0
 * @note Size: 0x2C
 */
void Obj::resetMoveVelocity()
{
	if (mWaterBox) {
		mMoveVelocity = C_PROPERPARMS.mUnderwaterMoveSpeed.mValue;
		return;
	}

	mMoveVelocity = C_GENERALPARMS.mMoveSpeed.mValue;
}

/**
 * @note Address: 0x802F1DEC
 * @note Size: 0x78
 */
void Obj::setNextWaitInfo()
{
	f32 waitTime = C_PROPERPARMS.mMaxWaitingTime.mValue - C_PROPERPARMS.mMinWaitingTime.mValue;
	mTimer       = randWeightFloat(waitTime);
}

/**
 * @note Address: 0x802F1E64
 * @note Size: 0xC4
 */
void Obj::createDownEffect(f32 groundScale, f32 waterScale)
{
	if (mWaterBox) {
		if (waterScale > 0.0f) {
			Vector3f position = mPosition;
			position.y        = *mWaterBox->getSeaHeightPtr();
			if (position.y - mPosition.y < 22.0f) {
				createSplashDownEffect(position, waterScale);
			}
		}
	} else if (groundScale > 0.0f) {
		createDropEffect(mPosition, groundScale);
	}
}

/**
 * @note Address: 0x802F1F28
 * @note Size: 0xC0
 */
void Obj::createBubbleEffect()
{
	if (mWaterBox) {
		if (getSubmergedDepth() > 10.0f) {
			efx::Arg fxArg(this);
			efx::TJgmBubble bubbleFX;
			bubbleFX.create(&fxArg);
		}
	}
}

/**
 * @note Address: 0x802F1FE8
 * @note Size: 0x48
 */
void Obj::createEfxHamon()
{
	if (!isUnderground()) {
		EnemyBase::createEfxHamon();
	}
}

} // namespace Sokkuri
} // namespace Game
