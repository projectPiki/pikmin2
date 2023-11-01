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

/*
 * --INFO--
 * Address:	802996A0
 * Size:	000154
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
	createChappyRelation();
}

/*
 * --INFO--
 * Address:	802997F4
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	802997F8
 * Size:	00007C
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

/*
 * --INFO--
 * Address:	80299874
 * Size:	000060
 */
void Obj::doUpdate()
{
	mReviveTimer += sys->mDeltaTime;
	updateTargetDistance();
	mFsm->exec(this);
	mMouthSlots.update();
}

/*
 * --INFO--
 * Address:	802998D4
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	802998D8
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	802998F8
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
 * Address:	80299944
 * Size:	0000C4
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

/*
 * --INFO--
 * Address:	80299A08
 * Size:	000038
 */
bool Obj::damageCallBack(Creature*, f32 dmg, CollPart* part)
{
	if (!part) {
		dmg *= 0.1f;
	}
	EnemyBase::addDamage(dmg, 1.0f);
	return true;
}

/*
 * --INFO--
 * Address:	80299A40
 * Size:	000028
 */
void Obj::startCarcassMotion() { startMotion(KUMACHAPPYANIM_Carry, nullptr); }

/*
 * --INFO--
 * Address:	80299A68
 * Size:	0000A8
 */
Vector3f Obj::getOffsetForMapCollision()
{
	if (isAlive()) {
		return Vector3f(Vector3f::zero);
	}

	Matrixf* mtx = mModel->getJoint("ago")->getWorldMatrix();
	Vector3f pos = mtx->getBasis(3);
	pos -= mPosition;
	pos.y = 0.0f;
	return pos;
}

/*
 * --INFO--
 * Address:	80299B10
 * Size:	0000DC
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

/*
 * --INFO--
 * Address:	80299BEC
 * Size:	000064
 */
void Obj::initWalkSmokeEffect()
{
	mWalkSmokeMgr.alloc(2);
	mWalkSmokeMgr.setup(0, mModel, "asiL", 10.0f);
	mWalkSmokeMgr.setup(1, mModel, "asiR", 10.0f);
}

/*
 * --INFO--
 * Address:	80299C50
 * Size:	000008
 */
WalkSmokeEffect::Mgr* Obj::getWalkSmokeEffectMgr() { return &mWalkSmokeMgr; }

/*
 * --INFO--
 * Address:	80299C58
 * Size:	000014
 */
bool Obj::doBecomeCarcass()
{
	mReviveTimer = 0.0f;
	mHealth      = 0.0f;
	return true;
}

/*
 * --INFO--
 * Address:	80299C6C
 * Size:	0001FC
 */
void Obj::doUpdateCarcass()
{
	if (mPellet->isAlive()) {
		if (mReviveTimer < C_PARMS->mProperParms.mFp11) {
			mReviveTimer += sys->mDeltaTime;
			if (lifeGaugeMgr && mReviveTimer >= C_PARMS->mProperParms.mFp11) {
				lifeGaugeMgr->activeLifeGauge(this, 0.0f);
			}

		} else if (mHealth < mMaxHealth) {
			mHealth += (mMaxHealth / C_PARMS->mProperParms.mFp12()) * sys->getFrameLength();
			if (mHealth >= mMaxHealth) {
				mPellet->kill(nullptr);
				f32 x = mBaseTrMatrix.mMatrix.structView.zx;
				f32 z = mBaseTrMatrix.mMatrix.structView.zz;
				EnemyBirthArg arg;
				arg.mPosition        = mPosition;
				arg.mFaceDir         = JMath::atanTable_.atan2_(x, z);
				arg.mExistenceLength = mExistDuration;
				arg.mIsInPiklopedia  = (u8)mInPiklopedia;
				EnemyBase* obj       = generalEnemyMgr->birth(getEnemyTypeID(), arg);
				if (obj) {
					obj->init(nullptr);
					mFsm->transit(this, KUMACHAPPY_Rebirth, nullptr);
				}
			}
		}
	} else if (lifeGaugeMgr && mReviveTimer >= C_PARMS->mProperParms.mFp11) {
		mReviveTimer = 0.0f;
		mHealth      = 0.0f;
		lifeGaugeMgr->inactiveLifeGauge(this);
	}
}

/*
 * --INFO--
 * Address:	80299E68
 * Size:	000064
 */
void Obj::doGetLifeGaugeParam(LifeGaugeParam& param)
{
	param.mPosition.x = mPosition.x;
	if (mPellet) {
		param.mPosition.y = mPosition.y + 50.0f;
	} else {
		param.mPosition.y = mPosition.y + C_PARMS->mGeneral.mLifeMeterHeight.mValue;
	}
	param.mPosition.z          = mPosition.z;
	param.mCurHealthPercentage = mHealth / mMaxHealth;
	param.mRadius              = 10.0f;
}

/*
 * --INFO--
 * Address:	80299ECC
 * Size:	000024
 */
f32 Obj::getViewAngle()
{
	Parms* parms = C_PARMS;
	if (mReviveTimer < parms->mGeneral.mAlertDuration) {
		return 180.0f;
	}
	return parms->mGeneral.mViewAngle;
}

/*
 * --INFO--
 * Address:	80299EF0
 * Size:	000010
 */
void Obj::resetWayPoint()
{
	mCurrWP = nullptr;
	mPrevWP = nullptr;
}

/*
 * --INFO--
 * Address:	80299F00
 * Size:	0000B0
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

/*
 * --INFO--
 * Address:	80299FB0
 * Size:	000260
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
			int id     = randFloat() * wpNum;
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

/*
 * --INFO--
 * Address:	8029A210
 * Size:	00006C
 */
Creature* Obj::getSearchedTarget()
{
	f32 angle = getViewAngle();

	Creature* target = EnemyFunc::getNearestPikminOrNavi(this, angle, C_PARMS->mGeneral.mSightRadius, nullptr, nullptr, nullptr);
	if (target) {
		mReviveTimer = 0.0f;
	}

	return target;
}

/*
 * --INFO--
 * Address:	8029A27C
 * Size:	000128
 */
void Obj::updateTargetDistance()
{
	f32 radius;
	if (mCurrWP) {
		radius = mCurrWP->mRadius;
	} else {
		radius = C_PARMS->mGeneral.mHomeRadius;
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

/*
 * --INFO--
 * Address:	8029A3A4
 * Size:	0000BC
 */
void Obj::updateHomePosition()
{

	mHomePosition = Vector3f(C_PARMS->mGeneral.mHomeRadius.mValue * sinf(mFaceDir) + mPosition.x, mPosition.y,
	                         C_PARMS->mGeneral.mHomeRadius.mValue * cosf(mFaceDir) + mPosition.z);
	/*
	stwu     r1, -0x20(r1)
	lfs      f0, lbl_8051BB68@sda21(r2)
	lfs      f5, 0x1fc(r3)
	fmr      f1, f5
	fcmpo    cr0, f5, f0
	bge      lbl_8029A3C0
	fneg     f1, f5

lbl_8029A3C0:
	lfs      f3, lbl_8051BBE0@sda21(r2)
	lis      r5, sincosTable___5JMath@ha
	lfs      f0, lbl_8051BB68@sda21(r2)
	addi     r5, r5, sincosTable___5JMath@l
	fmuls    f2, f1, f3
	lwz      r4, 0xc0(r3)
	fcmpo    cr0, f5, f0
	lfs      f1, 0x194(r3)
	lfs      f6, 0x384(r4)
	fctiwz   f0, f2
	lfs      f2, 0x190(r3)
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r4, r5, r0
	lfs      f0, 4(r4)
	fmadds   f4, f0, f6, f1
	bge      lbl_8029A42C
	lfs      f0, lbl_8051BBE4@sda21(r2)
	fmuls    f0, f5, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r5, r0
	fneg     f1, f0
	b        lbl_8029A444

lbl_8029A42C:
	fmuls    f0, f5, f3
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r5, r0

lbl_8029A444:
	lfs      f0, 0x18c(r3)
	fmadds   f0, f1, f6, f0
	stfs     f0, 0x198(r3)
	stfs     f2, 0x19c(r3)
	stfs     f4, 0x1a0(r3)
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8029A460
 * Size:	000070
 */
void Obj::createChappyRelation()
{
	mChappyRelation = new ChappyRelation(this);
	mChappyRelation->clearRelations();
}

/*
 * --INFO--
 * Address:	8029A4D0
 * Size:	00007C
 */
void Obj::startEnemyRumble()
{
	Matrixf* mtx = mModel->getJoint("ago")->getWorldMatrix();
	Vector3f vec(mtx->mMatrix.structView.tx, mtx->mMatrix.structView.ty, mtx->mMatrix.structView.tz);
	vec.y = mPosition.y;

	rumbleMgr->startRumble(11, vec, 2);
	createBounceEffect(vec, 0.75f);
}

} // namespace KumaChappy
} // namespace Game
