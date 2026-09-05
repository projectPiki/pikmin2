#include "Game/Entities/KumaChappy.h"
#include "LifeGaugeMgr.h"
#include "Game/generalEnemyMgr.h"
#include "Game/routeMgr.h"
#include "Game/MapMgr.h"
#include "Game/EnemyFunc.h"
#include "Dolphin/rand.h"
#include "trig.h"
#include "Game/ChappyRelation.h"
#include "Game/rumble.h"

namespace Game {
namespace KumaChappy {

/**
 * @note Address: 0x802996A0
 * @note Size: 0x154
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
	createChappyRelation();
}

/**
 * @note Address: 0x802997F4
 * @note Size: 0x4
 */
void Obj::setInitialSetting(EnemyInitialParamBase*)
{
}

/**
 * @note Address: 0x802997F8
 * @note Size: 0x7C
 */
void Obj::onInit(CreatureInitArg* arg)
{
	EnemyBase::onInit(arg);
	disableEvent(0, EB_Cullable);
	mReviveTimer = 0.0f;
	mTimer       = 0.0f;
	mNextState   = -1;
	resetWayPoint();
	setNearestWayPoint();
	mFsm->start(this, KUMACHAPPY_TurnPath, nullptr);
}

/**
 * @note Address: 0x80299874
 * @note Size: 0x60
 */
void Obj::doUpdate()
{
	mReviveTimer += sys->mDeltaTime;
	updateTargetDistance();
	mFsm->exec(this);
	mMouthSlots.update();
}

/**
 * @note Address: 0x802998D4
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics&)
{
}

/**
 * @note Address: 0x802998D8
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx)
{
	EnemyBase::doDebugDraw(gfx);
}

/**
 * @note Address: 0x802998F8
 * @note Size: 0x4C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/**
 * @note Address: 0x80299944
 * @note Size: 0xC4
 */
void Obj::getShadowParam(ShadowParam& param)
{
	Matrixf* mtx    = mModel->getJoint("ago")->getWorldMatrix();
	param.mPosition = Vector3f(mtx->mMatrix.structView.tx, mtx->mMatrix.structView.ty, mtx->mMatrix.structView.tz);
	param.mPosition.y -= 17.5f;

	f32 temp = mPosition.y + 5.0f;
	if (param.mPosition.y < temp) {
		param.mPosition.y = temp;
	}

	param.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	if (isEvent(1, EB2_Earthquake)) {
		param.mBoundingSphere.mRadius = 100.0f;
	} else {
		param.mBoundingSphere.mRadius = 75.0f;
	}
	param.mSize = 30.0f;
}

/**
 * @note Address: 0x80299A08
 * @note Size: 0x38
 */
bool Obj::damageCallBack(Creature*, f32 dmg, CollPart* part)
{
	if (!part) {
		dmg *= 0.1f;
	}
	EnemyBase::addDamage(dmg, 1.0f);
	return true;
}

/**
 * @note Address: 0x80299A40
 * @note Size: 0x28
 */
void Obj::startCarcassMotion()
{
	startMotion(KUMACHAPPYANIM_Carry, nullptr);
}

/**
 * @note Address: 0x80299A68
 * @note Size: 0xA8
 */
Vector3f Obj::getOffsetForMapCollision()
{
	if (isAlive()) {
		return Vector3f(Vector3f::zero);
	}

	Matrixf* mtx = mModel->getJoint("ago")->getWorldMatrix();
	Vector3f pos = mtx->getColumn(3);
	pos -= mPosition;
	pos.y = 0.0f;
	return pos;
}

/**
 * @note Address: 0x80299B10
 * @note Size: 0xDC
 */
void Obj::initMouthSlots()
{
	mMouthSlots.alloc(5);
	mMouthSlots.setup(0, mModel, "kamu1");
	mMouthSlots.setup(1, mModel, "kamu2");
	mMouthSlots.setup(2, mModel, "kamu3");
	mMouthSlots.setup(3, mModel, "kamu4");
	mMouthSlots.setup(4, mModel, "kamu5");
	f32 size = 35.0f;
	for (int i = 0; i < mMouthSlots.mMax; i++) {
		mMouthSlots.getSlot(i)->mRadius = size;
	}
}

/**
 * @note Address: 0x80299BEC
 * @note Size: 0x64
 */
void Obj::initWalkSmokeEffect()
{
	mWalkSmokeMgr.alloc(2);
	mWalkSmokeMgr.setup(0, mModel, "asiL", 10.0f);
	mWalkSmokeMgr.setup(1, mModel, "asiR", 10.0f);
}

/**
 * @note Address: 0x80299C50
 * @note Size: 0x8
 */
WalkSmokeEffect::Mgr* Obj::getWalkSmokeEffectMgr()
{
	return &mWalkSmokeMgr;
}

/**
 * @note Address: 0x80299C58
 * @note Size: 0x14
 */
bool Obj::doBecomeCarcass()
{
	mReviveTimer = 0.0f;
	mHealth      = 0.0f;
	return true;
}

/**
 * @note Address: 0x80299C6C
 * @note Size: 0x1FC
 */
void Obj::doUpdateCarcass()
{
	if (mPellet->isAlive()) {
		if (mReviveTimer < C_PROPERPARMS.mHealthGaugeTimer()) {
			mReviveTimer += sys->mDeltaTime;
			if (lifeGaugeMgr && mReviveTimer >= C_PROPERPARMS.mHealthGaugeTimer()) {
				lifeGaugeMgr->activeLifeGauge(this, 0.0f);
			}

		} else if (mHealth < mMaxHealth) {
			mHealth += (mMaxHealth / C_PROPERPARMS.mRespawnRate()) * sys->getDeltaTime();
			if (mHealth >= mMaxHealth) {
				mPellet->kill(nullptr);
				f32 x = mBaseTrMatrix.mMatrix.structView.zx;
				f32 z = mBaseTrMatrix.mMatrix.structView.zz;
				EnemyBirthArg arg;
				arg.mPosition        = mPosition;
				arg.mFaceDir         = JMAAtan2Radian(x, z);
				arg.mExistenceLength = mExistDuration;
				arg.mIsInPiklopedia  = (u8)mInPiklopedia;
				EnemyBase* obj       = generalEnemyMgr->birth(getEnemyTypeID(), arg);
				if (obj) {
					obj->init(nullptr);
					mFsm->transit(this, KUMACHAPPY_Rebirth, nullptr);
				}
			}
		}
	} else if (lifeGaugeMgr && mReviveTimer >= C_PROPERPARMS.mHealthGaugeTimer()) {
		mReviveTimer = 0.0f;
		mHealth      = 0.0f;
		lifeGaugeMgr->inactiveLifeGauge(this);
	}
}

/**
 * @note Address: 0x80299E68
 * @note Size: 0x64
 */
void Obj::doGetLifeGaugeParam(LifeGaugeParam& param)
{
	param.mPosition.x = mPosition.x;
	if (mPellet) {
		param.mPosition.y = mPosition.y + 50.0f;
	} else {
		param.mPosition.y = mPosition.y + C_GENERALPARMS.mLifeMeterHeight.mValue;
	}
	param.mPosition.z      = mPosition.z;
	param.mCurrHealthRatio = mHealth / mMaxHealth;
	param.mRadius          = 10.0f;
}

/**
 * @note Address: 0x80299ECC
 * @note Size: 0x24
 */
f32 Obj::getViewAngle()
{
	Parms* parms = C_PARMS;
	if (mReviveTimer < parms->mGeneral.mAlertDuration) {
		return 180.0f;
	}
	return parms->mGeneral.mViewAngle;
}

/**
 * @note Address: 0x80299EF0
 * @note Size: 0x10
 */
void Obj::resetWayPoint()
{
	mCurrWP = nullptr;
	mPrevWP = nullptr;
}

/**
 * @note Address: 0x80299F00
 * @note Size: 0xB0
 */
void Obj::setNearestWayPoint()
{
	mPrevWP = mCurrWP;
	WPSearchArg arg(mPosition, nullptr, false, 10.0f);

	mCurrWP = mapMgr->mRouteMgr->getNearestWayPoint(arg);

	WayPoint* wp = mCurrWP;
	if (wp) {
		mTargetPos = Vector3f(wp->mPosition);
	} else {
		mTargetPos = mHomePosition;
	}
}

/**
 * @note Address: 0x80299FB0
 * @note Size: 0x260
 */
void Obj::setLinkWayPoint()
{
	if (mCurrWP) {
		int wpNum = 0;
		int wpID  = -1;
		if (mPrevWP) {
			wpID = mPrevWP->mIndex;
		}
		// create collection of all children of the current WP
		WayPoint* wpList[9];
		WayPointIterator it(mCurrWP, true);
		CI_LOOP(it)
		{
			s16 id = *it;
			if ((int)id != wpID) {
				WayPoint* wp = mapMgr->mRouteMgr->getWayPoint(id);
				if (wp && !(wp->isFlag(WPF_Closed))) {
					wpList[wpNum] = wp;
					wpNum++;
				}
			}
		}

		// children of the current waypoint were found
		if (wpNum) {
			mPrevWP    = mCurrWP;
			int id     = randInt(wpNum);
			mCurrWP    = wpList[id];
			mTargetPos = Vector3f(mCurrWP->mPosition);
			return;
		}

		// no children at current waypoint, backtrack to previous point
		if (wpID >= 0) {
			WayPoint* wp = mapMgr->mRouteMgr->getWayPoint(wpID);
			if (wp && !(wp->isFlag(WPF_Closed))) {
				mPrevWP    = mCurrWP;
				mCurrWP    = wp;
				mTargetPos = Vector3f(mCurrWP->mPosition);
				return;
			}
		}
	}
	// no waypoints found, default to searching for nearest
	setNearestWayPoint();
}

/**
 * @note Address: 0x8029A210
 * @note Size: 0x6C
 */
Creature* Obj::getSearchedTarget()
{
	f32 angle = getViewAngle();

	Creature* target = EnemyFunc::getNearestPikminOrNavi(this, angle, C_GENERALPARMS.mSightRadius, nullptr, nullptr, nullptr);
	if (target) {
		mReviveTimer = 0.0f;
	}

	return target;
}

/**
 * @note Address: 0x8029A27C
 * @note Size: 0x128
 */
void Obj::updateTargetDistance()
{
	f32 radius;
	if (mCurrWP) {
		radius = mCurrWP->mRadius;
	} else {
		radius = C_GENERALPARMS.mHomeRadius;
	}

	if (sqrDistanceXZ(mPosition, mTargetPos) < radius * radius) {
		setLinkWayPoint();
		mTimer = 0.0f;
	}

	if (mTimer > 5.0f) {
		mTimer = 0.0f;
		setNearestWayPoint();
		updateHomePosition();
	}
}

/**
 * @note Address: 0x8029A3A4
 * @note Size: 0xBC
 */
void Obj::updateHomePosition()
{
	mHomePosition = getForwardHomePosition();
}

/**
 * @note Address: 0x8029A460
 * @note Size: 0x70
 */
void Obj::createChappyRelation()
{
	mChappyRelation = new ChappyRelation(this);
	mChappyRelation->clearRelations();
}

/**
 * @note Address: 0x8029A4D0
 * @note Size: 0x7C
 */
void Obj::startEnemyRumble()
{
	Matrixf* mtx = mModel->getJoint("ago")->getWorldMatrix();
	Vector3f vec(mtx->mMatrix.structView.tx, mtx->mMatrix.structView.ty, mtx->mMatrix.structView.tz);
	vec.y = mPosition.y;

	rumbleMgr->startRumble(RUMBLETYPE_Fixed11, vec, RUMBLEID_Both);
	createBounceEffect(vec, 0.75f);
}

} // namespace KumaChappy
} // namespace Game
