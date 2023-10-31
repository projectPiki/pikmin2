#include "Game/Entities/Tank.h"
#include "Game/MapMgr.h"

namespace Game {
namespace Tank {

/*
 * --INFO--
 * Address:	80275D8C
 * Size:	000138
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
}

/*
 * --INFO--
 * Address:	80275EC4
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	80275EC8
 * Size:	00009C
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	mCautionTimer = 128.0f;
	mJoint        = mModel->getJoint("hoppe");
	_2F0          = 0.0f;
	mCautionTimer = 0.0f;
	mIsBlowing    = false;
	_2E4          = 0.0f;
	_2E8          = 1.0f;
	_2F4          = 0.0f;

	setupEffect();

	mFsm->start(this, TANK_Wait, nullptr);
}

/*
 * --INFO--
 * Address:	80275F68
 * Size:	000050
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	finishEffect();
	EnemyBase::onKill(killArg);
}

/*
 * --INFO--
 * Address:	80275FB8
 * Size:	00004C
 */
void Obj::doUpdate()
{
	updateCaution();
	updateEmit();
	mFsm->exec(this);
}

/*
 * --INFO--
 * Address:	80276004
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	80276008
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	80276028
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
 * Address:	80276074
 * Size:	000090
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

/*
 * --INFO--
 * Address:	80276104
 * Size:	000054
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	if (mIsBlowing) {
		_2E4 = 0.0f;
		finishEffect();
	}
}

/*
 * --INFO--
 * Address:	80276158
 * Size:	00004C
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	if (mIsBlowing) {
		startEffect();
	}
}

/*
 * --INFO--
 * Address:	802761A4
 * Size:	000054
 */
void Obj::doStartEarthquakeFitState()
{
	EnemyBase::doStartEarthquakeFitState();
	if (mIsBlowing) {
		_2E4 = 0.0f;
		finishEffect();
	}
}

/*
 * --INFO--
 * Address:	802761F8
 * Size:	00004C
 */
void Obj::doFinishEarthquakeFitState()
{
	EnemyBase::doFinishEarthquakeFitState();
	if (mIsBlowing) {
		startEffect();
	}
}

/*
 * --INFO--
 * Address:	80276244
 * Size:	000040
 */
void Obj::doStartWaitingBirthTypeDrop()
{
	EnemyBase::doStartWaitingBirthTypeDrop();
	effectDrawOff();
}

/*
 * --INFO--
 * Address:	80276288
 * Size:	000040
 */
void Obj::doFinishWaitingBirthTypeDrop()
{
	EnemyBase::doFinishWaitingBirthTypeDrop();
	effectDrawOn();
}

/*
 * --INFO--
 * Address:	802762CC
 * Size:	000028
 */
void Obj::startCarcassMotion() { startMotion(TANKANIM_Carry, nullptr); }

/*
 * --INFO--
 * Address:	802762F4
 * Size:	00002C
 */
void Obj::doStartMovie() { effectDrawOff(); }

/*
 * --INFO--
 * Address:	80276320
 * Size:	00002C
 */
void Obj::doEndMovie() { effectDrawOn(); }

/*
 * --INFO--
 * Address:	8027634C
 * Size:	0000C4
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

/*
 * --INFO--
 * Address:	80276410
 * Size:	000094
 */
void Obj::initWalkSmokeEffect()
{
	mWalkSmokeMgr.alloc(4);

	mWalkSmokeMgr.setup(0, mModel, "rsuneR", 2.0f);
	mWalkSmokeMgr.setup(1, mModel, "rsuneL", 2.0f);
	mWalkSmokeMgr.setup(2, mModel, "fsuneR", 3.0f);
	mWalkSmokeMgr.setup(3, mModel, "fsuneL", 3.0f);
}

/*
 * --INFO--
 * Address:	802764A4
 * Size:	000008
 */
WalkSmokeEffect::Mgr* Obj::getWalkSmokeEffectMgr() { return &mWalkSmokeMgr; }

/*
 * --INFO--
 * Address:	802764AC
 * Size:	000054
 */
void Obj::getCommonEffectPos(Vector3f& pos)
{
	Sys::Sphere sphere;
	getBoundingSphere(sphere);
	pos = sphere.mPosition;
}

/*
 * --INFO--
 * Address:	80276500
 * Size:	000338
 */
bool Obj::isAttackable(bool check)
{
	Vector3f targetPos = Vector3f(_2CC);
	const f32 theta    = getFaceDir();

	Vector3f dir = Vector3f(sinf(theta), 0.0f, cosf(theta));

	f32 cosTheta, sinTheta;
	sinTheta = dir.x;
	cosTheta = -dir.z;

	f32 ratio = C_PARMS->mGeneral.mMaxAttackRange.mValue;
	if (check) {
		ratio = emitCollideRatio(dir, targetPos, ratio);
	}

	f32 halfRatio = 0.5f * ratio;
	Sys::Sphere sphere;
	sphere.mPosition = Vector3f(dir.x * halfRatio + targetPos.x, targetPos.y, dir.z * halfRatio + targetPos.z);
	sphere.mRadius   = halfRatio;

	CellIteratorArg iterArg(sphere);
	iterArg.mIsSphereCollisionDisabled = true;

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
				if (absVal(dot(angle, diff)) < parms->mGeneral.mAttackRadius()) {
					f32 dotProd = dot(dir, diff);
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

/*
 * --INFO--
 * Address:	8027683C
 * Size:	000228
 */
f32 Obj::emitCollideRatio(Vector3f& dir, Vector3f& pos, f32 range)
{
	range *= _2E4;
	if (0.0f == _2E4) {
		_2E4 = 0.001f;
		_2E8 = 1.0f;
	}

	if (_2E4 < _2E8) {
		Vector3f ballPos = dir;
		ballPos *= range;
		ballPos += pos;
		ballPos.y += 10.0f;

		Sys::Sphere sphere(ballPos, 2.5f);

		Vector3f vec = dir;
		vec *= (2.0f * C_PARMS->mGeneral.mMaxAttackRange.mValue);

		MoveInfo moveInfo(&sphere, &vec, C_PARMS->mCreatureProps.mProps.mWallReflection.mValue);
		moveInfo.mInfoOrigin = static_cast<Creature*>(this);

		mapMgr->traceMove(moveInfo, sys->mDeltaTime);

		if (moveInfo.mBounceTriangle || moveInfo.mWallTriangle) {
			_2E8 = _2E4;
		} else {
			_2E4 += 2.0f * sys->mDeltaTime;
			if (_2E4 > _2E8) {
				_2E4 = _2E8;
			}
		}

		if (_2E8 < 1.0f) {
			stopEffectRadius(5.0f + range);
		}
	}

	if (_2E8 < 1.0f) {
		return 2.5f + range;
	}

	return range;
}

/*
 * --INFO--
 * Address:	80276A68
 * Size:	000130
 */
void Obj::updateEmit()
{
	Matrixf* mat = mJoint->getWorldMatrix();
	if (mat) {
		mat->getTranslation(_2CC);
		mat->getBasis(0, _2D8);

		_2D8.normalise();

		Vector3f vec = _2D8;
		vec *= 10.0f;
		vec.y -= 10.0f;

		_2CC += vec;
	}
}

/*
 * --INFO--
 * Address:	80276B98
 * Size:	000050
 */
void Obj::updateCaution()
{
	if (isEvent(0, EB_Colliding) || isEvent(0, EB_TakingDamage) || mStuckPikminCount) {
		mCautionTimer = 0.0f;
	}

	if (mCautionTimer < C_PARMS->mGeneral.mAlertDuration.mValue) {
		mCautionTimer += sys->mDeltaTime;
	}
}

/*
 * --INFO--
 * Address:	80276BE8
 * Size:	000024
 */
f32 Obj::getViewAngle()
{
	if (mCautionTimer < C_PARMS->mGeneral.mAlertDuration.mValue) {
		return 180.0f;
	}

	return C_PARMS->mGeneral.mViewAngle.mValue;
}

} // namespace Tank
} // namespace Game
