#include "Game/Entities/Tank.h"
#include "Game/MapMgr.h"

namespace Game {
namespace Tank {

/**
 * @note Address: 0x80275D8C
 * @note Size: 0x138
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
}

/**
 * @note Address: 0x80275EC4
 * @note Size: 0x4
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/**
 * @note Address: 0x80275EC8
 * @note Size: 0x9C
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	mCautionTimer    = 128.0f;
	mJoint           = mModel->getJoint("hoppe");
	mWalkTimer       = 0.0f;
	mCautionTimer    = 0.0f;
	mIsBlowing       = false;
	mAttackTimer     = 0.0f;
	mAttackMaxGrowth = 1.0f;
	mTurnGoalDir     = 0.0f;

	setupEffect();

	mFsm->start(this, TANK_Wait, nullptr);
}

/**
 * @note Address: 0x80275F68
 * @note Size: 0x50
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	finishEffect();
	EnemyBase::onKill(killArg);
}

/**
 * @note Address: 0x80275FB8
 * @note Size: 0x4C
 */
void Obj::doUpdate()
{
	updateCaution();
	updateEmit();
	mFsm->exec(this);
}

/**
 * @note Address: 0x80276004
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics&) { }

/**
 * @note Address: 0x80276008
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/**
 * @note Address: 0x80276028
 * @note Size: 0x4C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/**
 * @note Address: 0x80276074
 * @note Size: 0x90
 */
void Obj::getShadowParam(ShadowParam& param)
{
	getCommonEffectPos(param.mPosition);
	param.mPosition.y               = 2.5f + mPosition.y;
	param.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	if (isEvent(1, EB2_Earthquake)) {
		param.mBoundingSphere.mRadius = 50.0f;
	} else {
		param.mBoundingSphere.mRadius = 20.0f;
	}

	param.mSize = 15.0f;
}

/**
 * @note Address: 0x80276104
 * @note Size: 0x54
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	if (mIsBlowing) {
		mAttackTimer = 0.0f;
		finishEffect();
	}
}

/**
 * @note Address: 0x80276158
 * @note Size: 0x4C
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	if (mIsBlowing) {
		startEffect();
	}
}

/**
 * @note Address: 0x802761A4
 * @note Size: 0x54
 */
void Obj::doStartEarthquakeFitState()
{
	EnemyBase::doStartEarthquakeFitState();
	if (mIsBlowing) {
		mAttackTimer = 0.0f;
		finishEffect();
	}
}

/**
 * @note Address: 0x802761F8
 * @note Size: 0x4C
 */
void Obj::doFinishEarthquakeFitState()
{
	EnemyBase::doFinishEarthquakeFitState();
	if (mIsBlowing) {
		startEffect();
	}
}

/**
 * @note Address: 0x80276244
 * @note Size: 0x40
 */
void Obj::doStartWaitingBirthTypeDrop()
{
	EnemyBase::doStartWaitingBirthTypeDrop();
	effectDrawOff();
}

/**
 * @note Address: 0x80276288
 * @note Size: 0x40
 */
void Obj::doFinishWaitingBirthTypeDrop()
{
	EnemyBase::doFinishWaitingBirthTypeDrop();
	effectDrawOn();
}

/**
 * @note Address: 0x802762CC
 * @note Size: 0x28
 */
void Obj::startCarcassMotion() { startMotion(TANKANIM_Carry, nullptr); }

/**
 * @note Address: 0x802762F4
 * @note Size: 0x2C
 */
void Obj::doStartMovie() { effectDrawOff(); }

/**
 * @note Address: 0x80276320
 * @note Size: 0x2C
 */
void Obj::doEndMovie() { effectDrawOn(); }

/**
 * @note Address: 0x8027634C
 * @note Size: 0xC4
 */
Vector3f Obj::getOffsetForMapCollision()
{
	if (isAlive()) {
		return Vector3f::zero;
	}

	Vector3f effectPos;
	getCommonEffectPos(effectPos);
	effectPos.x -= mPosition.x;
	effectPos.y = 0.0f;
	effectPos.z -= mPosition.z;
	return effectPos;
}

/**
 * @note Address: 0x80276410
 * @note Size: 0x94
 */
void Obj::initWalkSmokeEffect()
{
	mWalkSmokeMgr.alloc(4);

	mWalkSmokeMgr.setup(0, mModel, "rsuneR", 2.0f);
	mWalkSmokeMgr.setup(1, mModel, "rsuneL", 2.0f);
	mWalkSmokeMgr.setup(2, mModel, "fsuneR", 3.0f);
	mWalkSmokeMgr.setup(3, mModel, "fsuneL", 3.0f);
}

/**
 * @note Address: 0x802764A4
 * @note Size: 0x8
 */
WalkSmokeEffect::Mgr* Obj::getWalkSmokeEffectMgr() { return &mWalkSmokeMgr; }

/**
 * @note Address: 0x802764AC
 * @note Size: 0x54
 */
void Obj::getCommonEffectPos(Vector3f& pos)
{
	Sys::Sphere sphere;
	getBoundingSphere(sphere);
	pos = sphere.mPosition;
}

/**
 * @note Address: 0x80276500
 * @note Size: 0x338
 */
bool Obj::isAttackable(bool check)
{
	Vector3f targetPos = Vector3f(mAttackStartPos);
	const f32 theta    = getFaceDir();

	Vector3f dir = Vector3f(sinf(theta), 0.0f, cosf(theta));

	f32 cosTheta, sinTheta;
	sinTheta = dir.x;
	cosTheta = -dir.z;

	f32 ratio = C_GENERALPARMS.mMaxAttackRange.mValue;
	if (check) {
		ratio = emitCollideRatio(dir, targetPos, ratio);
	}

	f32 halfRatio = 0.5f * ratio;
	Sys::Sphere sphere;
	sphere.mPosition = Vector3f(dir.x * halfRatio + targetPos.x, targetPos.y, dir.z * halfRatio + targetPos.z);
	sphere.mRadius   = halfRatio;

	CellIteratorArg iterArg(sphere);
	iterArg.mOptimise = true;

	CellIterator iter(iterArg);

	CI_LOOP(iter)
	{
		Creature* creature = static_cast<Creature*>(*iter);
		if (creature->isAlive() && (creature->isNavi() || creature->isPiki() && static_cast<FakePiki*>(creature)->isPikmin())) {
			Vector3f creaturePos = creature->getPosition();

			Vector3f diff = creaturePos - targetPos;
			Parms* parms  = C_PARMS;
			f32 absY      = absVal(diff.y);
			if (absY < parms->mGeneral.mAttackRadius()) {
				Vector3f angle(cosTheta, 0.0f, sinTheta);
				if (absVal(angle.dot(diff)) < parms->mGeneral.mAttackRadius()) {
					f32 dotProd = dir.dot(diff);
					if (dotProd < ratio && dotProd > 0.0f) {
						if (check) {
							interactCreature(creature);
						} else {
							mTargetCreature = creature;
							return true;
						}
					}
				}
			}
		}
	}

	return check;
}

/**
 * @note Address: 0x8027683C
 * @note Size: 0x228
 */
f32 Obj::emitCollideRatio(Vector3f& dir, Vector3f& pos, f32 range)
{
	range *= mAttackTimer;
	if (0.0f == mAttackTimer) {
		mAttackTimer     = 0.001f;
		mAttackMaxGrowth = 1.0f;
	}

	if (mAttackTimer < mAttackMaxGrowth) {
		Vector3f ballPos = dir;
		ballPos *= range;
		ballPos += pos;
		ballPos.y += 10.0f;

		Sys::Sphere sphere(ballPos, 2.5f);

		Vector3f vec = dir;
		vec *= (2.0f * C_GENERALPARMS.mMaxAttackRange.mValue);

		MoveInfo moveInfo(&sphere, &vec, C_PARMS->mCreatureProps.mProps.mWallReflection.mValue);
		moveInfo.mMovingCreature = this;

		mapMgr->traceMove(moveInfo, sys->mDeltaTime);

		if (moveInfo.mFloorTriangle || moveInfo.mWallTriangle) {
			mAttackMaxGrowth = mAttackTimer;
		} else {
			mAttackTimer += 2.0f * sys->mDeltaTime;
			if (mAttackTimer > mAttackMaxGrowth) {
				mAttackTimer = mAttackMaxGrowth;
			}
		}

		if (mAttackMaxGrowth < 1.0f) {
			stopEffectRadius(5.0f + range);
		}
	}

	if (mAttackMaxGrowth < 1.0f) {
		return 2.5f + range;
	}

	return range;
}

/**
 * @note Address: 0x80276A68
 * @note Size: 0x130
 */
void Obj::updateEmit()
{
	Matrixf* mat = mJoint->getWorldMatrix();
	if (mat) {
		mat->getTranslation(mAttackStartPos);
		mat->getColumn(0, mAttackDirection);

		mAttackDirection.normalise();

		Vector3f vec = mAttackDirection;
		vec *= 10.0f;
		vec.y -= 10.0f;

		mAttackStartPos += vec;
	}
}

/**
 * @note Address: 0x80276B98
 * @note Size: 0x50
 */
void Obj::updateCaution()
{
	if (isEvent(0, EB_Colliding) || isEvent(0, EB_TakingDamage) || mStuckPikminCount) {
		mCautionTimer = 0.0f;
	}

	if (mCautionTimer < C_GENERALPARMS.mAlertDuration.mValue) {
		mCautionTimer += sys->mDeltaTime;
	}
}

/**
 * @note Address: 0x80276BE8
 * @note Size: 0x24
 */
f32 Obj::getViewAngle()
{
	if (mCautionTimer < C_GENERALPARMS.mAlertDuration.mValue) {
		return 180.0f;
	}

	return C_GENERALPARMS.mViewAngle.mValue;
}

} // namespace Tank
} // namespace Game
