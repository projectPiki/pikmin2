#include "types.h"
#include "Game/Entities/Miulin.h"
#include "Game/generalEnemyMgr.h"
#include "Game/Entities/ShijimiChou.h"
#include "Game/PikiMgr.h"
#include "Game/EnemyFunc.h"
#include "Game/Navi.h"
#include "efx/TMiuAttack.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Miulin {

/**
 * @note Address: 0x80364454
 * @note Size: 0x20
 */
void Obj::setParameters()
{
	EnemyBase::setParameters();
}

/**
 * @note Address: 0x80364474
 * @note Size: 0xB0
 */
void Obj::birth(Vector3f& position, f32 faceDirection)
{
	EnemyBase::birth(position, faceDirection);
	ShijimiChou::Mgr* specMgr = static_cast<ShijimiChou::Mgr*>(generalEnemyMgr->getEnemyMgr(EnemyTypeID::EnemyID_ShijimiChou));
	if (specMgr) {
		EnemyBirthArg arg;
		arg.mPosition = position;
		arg.mPosition.y += 80.0f;
		arg.mFaceDir = faceDirection;

		specMgr->createGroupByEnemy(arg, this, 5, true);
	}
}

/**
 * @note Address: 0x80364524
 * @note Size: 0xB4
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	mKoshiJoint = mModel->getJoint("jnt_koshi");
	P2ASSERTLINE(74, mKoshiJoint);
	mNoSearchCounter        = 0;
	mLastPositionCheck      = mHomePosition;
	mLastPositionCheckTimer = 0;
	mIsSearching            = false;
	mFsm->start(this, MIULIN_Wait, nullptr);
}

/**
 * @note Address: 0x803645D8
 * @note Size: 0x140
 */
Obj::Obj()
{
	mFsm      = nullptr;
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
}

/**
 * @note Address: 0x80364764
 * @note Size: 0x80
 */
void Obj::doUpdate()
{
	mFsm->exec(this);
	mAlertTimer += sys->mDeltaTime;

	if (mTargetCreature && !mTargetCreature->isAlive()) {
		mTargetCreature = nullptr;
	}
}

/**
 * @note Address: 0x803647E4
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics&)
{
}

/**
 * @note Address: 0x803647E8
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx)
{
	EnemyBase::doDebugDraw(gfx);
}

/**
 * @note Address: 0x80364808
 * @note Size: 0x88
 */
void Obj::getShadowParam(ShadowParam& param)
{
	mKoshiJoint->getWorldMatrix()->getColumn(3, param.mPosition);
	param.mPosition.y               = mPosition.y + 2.0f;
	param.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	param.mBoundingSphere.mRadius   = 20.0f;
	param.mSize                     = 25.0f;
}

/**
 * @note Address: 0x80364890
 * @note Size: 0x40
 */
void Obj::doSimulation(f32 simSpeed)
{
	mNoSearchCounter--;
	if (mNoSearchCounter < 0) {
		mNoSearchCounter = 0;
	}

	EnemyBase::doSimulation(simSpeed);
}

/**
 * @note Address: 0x803648D0
 * @note Size: 0x2C
 */
void Obj::wallCallback(MoveInfo const& moveInfo)
{
	mNoSearchCounter = 120;
	mTargetCreature  = nullptr;
	mGoalPosition    = mHomePosition;
}

/**
 * @note Address: 0x803648FC
 * @note Size: 0x28
 */
void Obj::startCarcassMotion()
{
	startMotion(MIULINANIM_Carry, nullptr);
}

/**
 * @note Address: 0x80364924
 * @note Size: 0x6C
 */
void Obj::initWalkSmokeEffect()
{
	mWalkSmokeMgr.alloc(2);
	mWalkSmokeMgr.setup(0, mModel, "jnt_footR", 5.0f);
	mWalkSmokeMgr.setup(1, mModel, "jnt_footL", 5.0f);
}

/**
 * @note Address: 0x80364990
 * @note Size: 0x8
 */
Game::WalkSmokeEffect::Mgr* Obj::getWalkSmokeEffectMgr()
{
	return &mWalkSmokeMgr;
}

/**
 * @note Address: 0x80364998
 * @note Size: 0x534
 */
bool Obj::isAttackStart()
{
	f32 atkRadius    = SQUARE(C_GENERALPARMS.mAttackRadius.mValue);
	f32 minAtkRange  = SQUARE(C_PROPERPARMS.mMinAttackRange.mValue);
	f32 contAtkAngle = PI * (DEG2RAD * (C_PROPERPARMS.mContinuousPressAngle.mValue));

	if (mTargetCreature) {
		if (FABS(getAngDist(mTargetCreature)) <= contAtkAngle) {
			f32 sqrDist = sqrDistance2D(mTargetCreature->getPosition().x, mTargetCreature->getPosition().z, mPosition.x, mPosition.z);
			if (sqrDist < minAtkRange + atkRadius && sqrDist > minAtkRange - atkRadius) {
				return true;
			}
		}
	}

	Iterator<Piki> iter(pikiMgr);

	CI_LOOP(iter)
	{
		Piki* piki = *iter;

		if (piki->isSearchable()) {
			if (FABS(getAngDist(piki)) <= contAtkAngle) {
				f32 sqrDist = sqrDistance2D(piki->getPosition().x, piki->getPosition().z, mPosition.x, mPosition.z);
				if (sqrDist < minAtkRange + atkRadius && sqrDist > minAtkRange - atkRadius) {
					mTargetCreature = piki;
					return true;
				}
			}
		}
	}

	return false;
}

/**
 * @note Address: 0x80364ECC
 * @note Size: 0x4A4
 */
bool Obj::isFindTarget()
{
	f32 searchAngle = PI * (DEG2RAD * C_GENERALPARMS.mSearchAngle.mValue);
	mTargetCreature = nullptr;

	if (isNowCaution()) {
		searchAngle = PI;
	} else if (isProhibitedSearch()) {
		return false;
	}

	f32 searchDist = C_GENERALPARMS.mSearchDistance.mValue;
	searchDist *= searchDist;

	mTargetCreature
	    = EnemyFunc::getNearestNavi(this, C_GENERALPARMS.mSearchAngle.mValue, C_GENERALPARMS.mSearchDistance.mValue, &searchDist, nullptr);

	Iterator<Piki> iter(pikiMgr);

	f32 minDist = 10.0f;
	minDist *= minDist;

	CI_LOOP(iter)
	{
		Piki* piki = *iter;

		if (piki->isSearchable() && !piki->isStickTo()) {
			if (FABS(getAngDist(piki)) <= searchAngle) {
				Vector3f pos;
				getPosition2D(pos);
				Vector3f targetPos = Vector3f(piki->getPosition().x, 0.0f, piki->getPosition().z);

				f32 sqrDist = targetPos.sqrDistance2D(pos);
				if (sqrDist < searchDist && sqrDist > minDist) {
					mTargetCreature = piki;
					searchDist      = sqrDist;
				}
			}
		}
	}

	if (mTargetCreature) {
		mGoalPosition = mTargetCreature->getPosition();
		mIsSearching  = false;
		return true;
	}

	return false;
}

/**
 * @note Address: 0x80365370
 * @note Size: 0x3C
 */
bool Obj::isOutOfTerritory()
{
	return mHomePosition.sqrDistance2D(mPosition) > SQUARE(C_GENERALPARMS.mTerritoryRadius.mValue);
}

/**
 * @note Address: 0x803653AC
 * @note Size: 0x88
 */
bool Obj::isProhibitedSearch()
{
	if (mNoSearchCounter > 0) {
		return true;
	}

	if (mIsSearching) {
		f32 radius = C_GENERALPARMS.mTerritoryRadius.mValue;
		radius *= 0.7f;

		if (mFlickTimer > 0.0f) {
			mFlickTimer = 0.0f;
			return false;
		}

		if (mHomePosition.sqrDistance2D(mPosition) > SQUARE(radius)) {
			return true;
		}
	}

	return false;
}

/**
 * @note Address: 0x80365434
 * @note Size: 0xAC
 */
bool Obj::isStartWalk()
{
	f32 viewAngle = C_GENERALPARMS.mViewAngle.mValue;
	if (mFlickTimer > 0.0f) {
		viewAngle   = 180.0f;
		mFlickTimer = 0.0f;
	}

	mTargetCreature = EnemyFunc::getNearestPikminOrNavi(this, viewAngle, C_GENERALPARMS.mSearchDistance.mValue, nullptr, nullptr, nullptr);

	if (mTargetCreature) {
		mGoalPosition = mTargetCreature->getPosition();
		return true;
	}

	return false;
}

/**
 * @note Address: 0x803654E0
 * @note Size: 0x2C
 */
void Obj::setReturnState()
{
	mTargetCreature = nullptr;
	mIsSearching    = true;
	mGoalPosition   = mHomePosition;
}

/**
 * @note Address: 0x8036550C
 * @note Size: 0x270
 */
void Obj::walkFunc()
{
	getMotionFrame();

	f32 dashSpeedMultiplier = 1.0f;
	f32 dashAnimScale       = 1.0f;

	if (mTargetCreature && absF(getAngDist(mTargetCreature)) < TORADIANS(C_PROPERPARMS.mDashableAngle.mValue)) {
		dashSpeedMultiplier = C_PROPERPARMS.mDashSpeedMultiplier();
		dashAnimScale       = C_PROPERPARMS.mDashAnimationScale();
		setEmotionExcitement();
	} else {
		setEmotionCaution();
	}

	setTargetSpeed(dashSpeedMultiplier * C_GENERALPARMS.mMoveSpeed());

	setAnimSpeed(EnemyAnimatorBase::defaultAnimSpeed * dashAnimScale);

	// check that the mamuta is covering enough distance every 120 frames, if not, make it forget what it was doing
	mLastPositionCheckTimer++;
	if (mLastPositionCheckTimer > 120) {
		if (mPosition.sqrDistance2D(mLastPositionCheck) < SQUARE(30.0f)) {
			mNoSearchCounter = 120;
			mTargetCreature  = nullptr;
			mGoalPosition    = mHomePosition;
		}

		mLastPositionCheck      = mPosition;
		mLastPositionCheckTimer = 0;
	}
}

/**
 * @note Address: 0x8036577C
 * @note Size: 0x17C
 */
f32 Obj::turnFunc(f32 factor)
{
	Vector3f targetPos = mGoalPosition;

	if (mTargetCreature) {
		targetPos = mTargetCreature->getPosition();
	}

	f32 angleDist = turnToTarget(targetPos, factor * C_GENERALPARMS.mTurnSpeed(), factor * C_GENERALPARMS.mMaxTurnAngle());

	return FABS(angleDist);
}

/**
 * @note Address: 0x803658F8
 * @note Size: 0x50
 */
bool Obj::isReachToGoal(f32 distance)
{
	if (mIsSearching) {
		distance = C_GENERALPARMS.mHomeRadius.mValue;
	}

	if (mPosition.sqrDistance2D(mGoalPosition) < SQUARE(distance)) {
		return true;
	}

	return false;
}

// sigh
static void fixData(f32& p1, f32& p2, f32& p3)
{
	p1 = RAND_MAX;
	p2 = -325.9493f;
	p3 = 325.9493f;
}

/**
 * @note Address: 0x80365948
 * @note Size: 0x15C
 */
void Obj::setNextGoal()
{
	if (mIsSearching) {
		mGoalPosition = mHomePosition;
		return;
	}

	f32 radius    = C_GENERALPARMS.mTerritoryRadius.mValue;
	mGoalPosition = mHomePosition;

	f32 angle = TAU * randFloat();
	mGoalPosition.x += radius * sinf(angle);
	mGoalPosition.z += radius * cosf(angle);
}

/**
 * @note Address: 0x80365AA4
 * @note Size: 0x2E0
 */
bool Obj::nextTargetTurnCheck()
{
	if (!isFindTarget()) {
		setNextGoal();
	}

	// SHOULD match when turnFunc matches, but turnFunc might need tweaking to make sure this matches.
	if (turnFunc(0.1f) < PI * (DEG2RAD * C_PROPERPARMS.mMaxTurnAngle())) {
		return false;
	}

	return true;
}

/**
 * @note Address: 0x80365D84
 * @note Size: 0xD0
 */
bool Obj::isNowCaution()
{
	bool doBecomeAlert;
	f32 privateRad = C_GENERALPARMS.mPrivateRadius.mValue;
	if (EnemyFunc::isThereOlimar(this, privateRad, nullptr)) {
		doBecomeAlert = true;
	} else if (EnemyFunc::isTherePikmin(this, privateRad, nullptr)) {
		doBecomeAlert = true;
	} else {
		doBecomeAlert = false;
	}

	if (!doBecomeAlert) {
		doBecomeAlert = mHealth < C_GENERALPARMS.mLifeBeforeAlert.mValue;
	}

	if (doBecomeAlert) {
		mAlertTimer = 0.0f;
		return true;
	}

	return mAlertTimer < C_GENERALPARMS.mAlertDuration.mValue;
}

/**
 * @note Address: 0x80365E54
 * @note Size: 0x28
 */
void Obj::landEffect()
{
	EnemyBase::createBounceEffect(mPosition, 0.9f);
}

/**
 * @note Address: 0x80365E7C
 * @note Size: 0x144
 */
void Obj::attackEffect(Vector3f& effectPos)
{
	Matrixf mat;
	Vector3f pos = mPosition;
	Vector3f rotation(0.0f, mFaceDir, 0.0f);
	mat.makeTR(Vector3f::zero, rotation);
	PSMTXMultVec(mat.mMatrix.mtxView, (Vec*)&effectPos, (Vec*)&effectPos);

	pos += effectPos;

	efx::TMiuAttack fxAttack;
	efx::Arg fxArg(pos);

	fxAttack.create(&fxArg);

	if (mWaterBox) {
		createBounceEffect(mPosition, 0.8f);
	}
}
} // namespace Miulin
} // namespace Game
