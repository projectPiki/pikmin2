#include "Game/Entities/Sokkuri.h"
#include "Game/EnemyFunc.h"
#include "Game/Navi.h"
#include "efx/TJgm.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Sokkuri {

/*
 * --INFO--
 * Address:	802F1264
 * Size:	000130
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
}

/*
 * --INFO--
 * Address:	802F1394
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	802F1398
 * Size:	00008C
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

/*
 * --INFO--
 * Address:	802F1424
 * Size:	000034
 */
void Obj::doUpdate() { mFsm->exec(this); }

/*
 * --INFO--
 * Address:	802F1458
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	802F145C
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	802F147C
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
 * Address:	802F14C8
 * Size:	000118
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

/*
 * --INFO--
 * Address:	802F15E8
 * Size:	00009C
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

/*
 * --INFO--
 * Address:	802F1684
 * Size:	00009C
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

/*
 * --INFO--
 * Address:	802F1720
 * Size:	0000FC
 */
void Obj::wallCallback(const MoveInfo& moveInfo)
{
	mTargetPosition   = moveInfo.mReflectPosition;
	mTargetPosition.y = 0.0f;
	mTargetPosition.normalise();

	mTargetPosition *= 1000.0f;

	mTargetPosition += mPosition;
}

/*
 * --INFO--
 * Address:	802F181C
 * Size:	000040
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	enableEvent(0, EB_LifegaugeVisible);
	mIsHiding = false;
}

/*
 * --INFO--
 * Address:	802F185C
 * Size:	000020
 */
void Obj::doFinishStoneState() { EnemyBase::doFinishStoneState(); }

/*
 * --INFO--
 * Address:	802F187C
 * Size:	000028
 */
void Obj::startCarcassMotion() { startMotion(SOKKURIANIM_Carry, nullptr); }

/*
 * --INFO--
 * Address:	802F18A4
 * Size:	0000AC
 */
Vector3f Obj::getOffsetForMapCollision()
{
	if (isAlive()) {
		return Vector3f::zero;
	}

	Vector3f offset = mModel->getJoint("leaf_joint1")->getWorldMatrix()->getBasis(3);
	offset.x -= mPosition.x;
	offset.y = 0.0f;
	offset.z -= mPosition.z;
	return offset;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
Creature* Obj::getSearchedTarget()
{
	if (gameSystem && gameSystem->isZukanMode()) {
		return EnemyFunc::getNearestPikmin(this, C_PARMS->mGeneral.mViewAngle.mValue, C_PARMS->mGeneral.mSightRadius.mValue, nullptr,
		                                   nullptr);
	}

	return EnemyFunc::getNearestNavi(this, C_PARMS->mGeneral.mViewAngle.mValue, C_PARMS->mGeneral.mSightRadius.mValue, nullptr, nullptr);
}

/*
 * --INFO--
 * Address:	802F1950
 * Size:	00007C
 */
bool Obj::isAppear()
{
	if (getSearchedTarget()) {
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	802F19CC
 * Size:	0000A8
 */
bool Obj::isDisappear()
{
	if (sqrDistanceXZ(mPosition, mHomePosition) < SQUARE(C_PARMS->mGeneral.mHomeRadius())) {
		if (!getSearchedTarget()) {
			return true;
		}
	}

	return false;
}

/*
 * --INFO--
 * Address:	802F1A74
 * Size:	0001E0
 */
void Obj::setNextMoveInfo()
{
	f32 travelTime = C_PROPERPARMS.mFp01.mValue - C_PROPERPARMS.mFp02.mValue;
	mTimer         = randWeightFloat(travelTime);

	f32 movingAngle = C_PROPERPARMS.mFp03.mValue - C_PROPERPARMS.mFp04.mValue;
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

/*
 * --INFO--
 * Address:	802F1C54
 * Size:	00016C
 */
void Obj::updateMoveState()
{
	if (sqrDistanceXZ(mPosition, mHomePosition) > SQUARE(C_PARMS->mGeneral.mTerritoryRadius())) {
		mTargetPosition = mHomePosition;
	}

	if (mWaterBox) {
		Vector3f velocity    = getVelocity();
		Vector3f newVelocity = velocity;
		newVelocity.y += 5.0f;
		setVelocity(newVelocity);

		mMoveVelocity = adjustVal(mMoveVelocity, C_PROPERPARMS.mFp21.mValue, 10.0f);

	} else {
		mMoveVelocity = adjustVal(mMoveVelocity, C_PARMS->mGeneral.mMoveSpeed.mValue, 25.0f);
	}
}

/*
 * --INFO--
 * Address:	802F1DC0
 * Size:	00002C
 */
void Obj::resetMoveVelocity()
{
	if (mWaterBox) {
		mMoveVelocity = C_PROPERPARMS.mFp21.mValue;
		return;
	}

	mMoveVelocity = C_PARMS->mGeneral.mMoveSpeed.mValue;
}

/*
 * --INFO--
 * Address:	802F1DEC
 * Size:	000078
 */
void Obj::setNextWaitInfo()
{
	f32 waitTime = C_PROPERPARMS.mFp12.mValue - C_PROPERPARMS.mFp13.mValue;
	mTimer       = randWeightFloat(waitTime);
}

/*
 * --INFO--
 * Address:	802F1E64
 * Size:	0000C4
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

/*
 * --INFO--
 * Address:	802F1F28
 * Size:	0000C0
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

/*
 * --INFO--
 * Address:	802F1FE8
 * Size:	000048
 */
void Obj::createEfxHamon()
{
	if (!isUnderground()) {
		EnemyBase::createEfxHamon();
	}
}

} // namespace Sokkuri
} // namespace Game
