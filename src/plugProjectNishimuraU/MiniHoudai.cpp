#include "Game/Entities/MiniHoudai.h"
#include "Game/generalEnemyMgr.h"
#include "Game/routeMgr.h"
#include "Game/MapMgr.h"
#include "Game/EnemyFunc.h"
#include "LifeGaugeMgr.h"
#include "Dolphin/rand.h"

namespace Game {
namespace MiniHoudai {
/*
 * --INFO--
 * Address:	802EBFF8
 * Size:	000148
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
	createShotGun();
	createEffect();
}

/*
 * --INFO--
 * Address:	802EC140
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	802EC144
 * Size:	0000C8
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	disableEvent(0, EB_DeathEffectEnabled);
	disableEvent(0, EB_Cullable);

	if (getEnemyTypeID() == EnemyTypeID::EnemyID_FminiHoudai) {
		enableEvent(0, EB_Constrained);
	}

	mHealthGaugeTimer = 128.0f;
	_2CC              = 0.0f;
	mUpdateTimer      = 0.0f;
	mNextState        = MINIHOUDAI_NULL;
	resetWayPoint();
	setNearestWayPoint();
	setupShotGun();
	setupEffect();

	mFsm->start(this, MINIHOUDAI_TurnPath, nullptr);
}

/*
 * --INFO--
 * Address:	802EC20C
 * Size:	00004C
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	finishChargeEffect();
	forceFinishShotGun();
	EnemyBase::onKill(killArg);
}

/*
 * --INFO--
 * Address:	802EC258
 * Size:	000054
 */
void Obj::doUpdate()
{
	updateCaution();
	updateTargetDistance();
	mFsm->exec(this);
	doUpdateShotGun();
}

/*
 * --INFO--
 * Address:	802EC2AC
 * Size:	000034
 */
void Obj::doUpdateCommon()
{
	EnemyBase::doUpdateCommon();
	doUpdateCommonShotGun();
}

/*
 * --INFO--
 * Address:	802EC2E0
 * Size:	00003C
 */
void Obj::doAnimationCullingOff()
{
	setShotGunCallBack();
	EnemyBase::doAnimationCullingOff();
	resetShotGunCallBack();
}

/*
 * --INFO--
 * Address:	802EC31C
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	802EC320
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	802EC340
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
 * Address:	802EC38C
 * Size:	0000E0
 */
void Obj::getShadowParam(ShadowParam& param)
{
	param.mPosition = mModel->getJoint("kosi")->getWorldMatrix()->getBasis(3);
	param.mPosition.y -= 17.5f;

	f32 minHeight = 5.0f + mPosition.y;
	if (param.mPosition.y < minHeight) {
		param.mPosition.y = minHeight;
	}

	param.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);

	// null, dead, rebirth
	if (getStateID() <= MINIHOUDAI_Rebirth) {
		param.mBoundingSphere.mRadius = 100.0f;
	} else if (isEvent(1, EB2_Earthquake)) {
		param.mBoundingSphere.mRadius = 75.0f;
	} else {
		param.mBoundingSphere.mRadius = 50.0f;
	}

	param.mSize = 30.0f;
}

/*
 * --INFO--
 * Address:	802EC46C
 * Size:	000044
 */
bool Obj::damageCallBack(Creature* creature, f32 damage, CollPart* part)
{
	if (part) {
		addDamage(damage, 1.0f);
	} else {
		addDamage(damage / 4, 1.0f);
	}

	return true;
}

/*
 * --INFO--
 * Address:	802EC4B0
 * Size:	000034
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	finishChargeEffect();
}

/*
 * --INFO--
 * Address:	802EC4E4
 * Size:	000020
 */
void Obj::doFinishStoneState() { EnemyBase::doFinishStoneState(); }

/*
 * --INFO--
 * Address:	802EC504
 * Size:	000034
 */
void Obj::doStartEarthquakeFitState()
{
	EnemyBase::doStartEarthquakeFitState();
	finishChargeEffect();
}

/*
 * --INFO--
 * Address:	802EC538
 * Size:	000020
 */
void Obj::doFinishEarthquakeFitState() { EnemyBase::doFinishEarthquakeFitState(); }

/*
 * --INFO--
 * Address:	802EC558
 * Size:	000034
 */
void Obj::doStartWaitingBirthTypeDrop()
{
	EnemyBase::doStartWaitingBirthTypeDrop();
	effectDrawOff();
}

/*
 * --INFO--
 * Address:	802EC58C
 * Size:	000034
 */
void Obj::doFinishWaitingBirthTypeDrop()
{
	EnemyBase::doFinishWaitingBirthTypeDrop();
	effectDrawOn();
}

/*
 * --INFO--
 * Address:	802EC5C0
 * Size:	000028
 */
void Obj::startCarcassMotion() { startMotion(MINIHOUDAIANIM_Carry, nullptr); }

/*
 * --INFO--
 * Address:	802EC5E8
 * Size:	000020
 */
void Obj::doStartMovie() { effectDrawOff(); }

/*
 * --INFO--
 * Address:	802EC608
 * Size:	000020
 */
void Obj::doEndMovie() { effectDrawOn(); }

/*
 * --INFO--
 * Address:	802EC628
 * Size:	000064
 */
void Obj::initWalkSmokeEffect()
{
	mWalkSmokeMgr.alloc(2);
	mWalkSmokeMgr.setup(0, mModel, "handL", 5.0f);
	mWalkSmokeMgr.setup(1, mModel, "handR", 5.0f);
}

/*
 * --INFO--
 * Address:	802EC68C
 * Size:	000008
 */
WalkSmokeEffect::Mgr* Obj::getWalkSmokeEffectMgr() { return &mWalkSmokeMgr; }

/*
 * --INFO--
 * Address:	802EC694
 * Size:	000014
 */
bool Obj::doBecomeCarcass()
{
	mHealthGaugeTimer = 0.0f;
	mHealth           = 0.0f;
	return true;
}

/*
 * --INFO--
 * Address:	802EC6A8
 * Size:	0001FC
 */
void Obj::doUpdateCarcass()
{
	if (mPellet->isAlive()) {
		if (mHealthGaugeTimer < C_PROPERPARMS.mHealthGaugeTimer.mValue) {
			mHealthGaugeTimer += sys->mDeltaTime;
			if (lifeGaugeMgr && mHealthGaugeTimer >= C_PROPERPARMS.mHealthGaugeTimer.mValue) {
				lifeGaugeMgr->activeLifeGauge(this, 0.0f);
			}
		} else if (mHealth < mMaxHealth) {
			mHealth += (mMaxHealth / C_PROPERPARMS.mRespawnRate.mValue) * sys->getFrameLength();
			if (mHealth >= mMaxHealth) {
				mPellet->kill(nullptr);
				f32 zx = mBaseTrMatrix.mMatrix.structView.zx;
				f32 zz = mBaseTrMatrix.mMatrix.structView.zz;
				EnemyBirthArg birthArg;
				birthArg.mPosition        = mPosition;
				birthArg.mFaceDir         = JMAAtan2Radian(zx, zz);
				birthArg.mExistenceLength = mExistDuration;
				birthArg.mIsInPiklopedia  = (mInPiklopedia > 0); // sure.

				Obj* groink = static_cast<Obj*>(generalEnemyMgr->birth(getEnemyTypeID(), birthArg));
				if (groink) {
					groink->init(nullptr);
					mFsm->transit(this, MINIHOUDAI_Rebirth, nullptr);
				}
			}
		}
	} else if (lifeGaugeMgr && mHealthGaugeTimer >= C_PROPERPARMS.mHealthGaugeTimer.mValue) {
		mHealthGaugeTimer = 0.0f;
		mHealth           = 0.0f;
		lifeGaugeMgr->inactiveLifeGauge(this);
	}
}

/*
 * --INFO--
 * Address:	802EC8A4
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
	param.mCurHealthPercentage = (mHealth / mMaxHealth);
	param.mRadius              = 10.0f;
}

/*
 * --INFO--
 * Address:	802EC908
 * Size:	000050
 */
void Obj::updateCaution()
{
	if (isEvent(0, EB_Colliding) || isEvent(0, EB_TakingDamage) || mStuckPikminCount != 0) {
		mHealthGaugeTimer = 0.0f;
	}

	if (mHealthGaugeTimer < C_PARMS->mGeneral.mAlertDuration.mValue) {
		mHealthGaugeTimer += sys->mDeltaTime;
	}
}

/*
 * --INFO--
 * Address:	802EC958
 * Size:	000024
 */
f32 Obj::getViewAngle() { return (mHealthGaugeTimer < C_PARMS->mGeneral.mAlertDuration()) ? 180.0f : C_PARMS->mGeneral.mViewAngle(); }

/*
 * --INFO--
 * Address:	802EC97C
 * Size:	000010
 */
void Obj::resetWayPoint()
{
	mNearestWaypoint    = nullptr;
	mOldNearestWaypoint = nullptr;
}

/*
 * --INFO--
 * Address:	802EC98C
 * Size:	0000B0
 */
void Obj::setNearestWayPoint()
{
	mOldNearestWaypoint = mNearestWaypoint;
	WPSearchArg searchArg(mPosition, nullptr, false, 10.0f);
	mNearestWaypoint = mapMgr->mRouteMgr->getNearestWayPoint(searchArg);

	if (mNearestWaypoint) {
		mWalkTargetPosition = Vector3f(mNearestWaypoint->mPosition);
	} else {
		mWalkTargetPosition = mHomePosition;
	}
}

/*
 * --INFO--
 * Address:	802ECA3C
 * Size:	000260
 */
void Obj::setLinkWayPoint()
{
	if (mNearestWaypoint) {
		WayPoint* wpList[8];
		int counter = 0;
		int wpIdx   = -1;
		if (mOldNearestWaypoint) {
			wpIdx = mOldNearestWaypoint->mIndex;
		}

		WayPointIterator iter(mNearestWaypoint, true);
		CI_LOOP(iter)
		{
			s16 currIdx = *iter;
			if (currIdx != wpIdx) {
				WayPoint* wp = mapMgr->mRouteMgr->getWayPoint(currIdx);
				if (wp && !wp->isFlag(WPF_Closed)) {
					wpList[counter] = wp;
					counter++;
				}
			}
		}

		if (counter != 0) {
			mOldNearestWaypoint = mNearestWaypoint;
			mNearestWaypoint    = wpList[(int)((f32)counter * randFloat())];
			mWalkTargetPosition = Vector3f(mNearestWaypoint->mPosition);
			return;

		} else if (wpIdx >= 0) {
			WayPoint* wp = mapMgr->mRouteMgr->getWayPoint(wpIdx);
			if (wp && !wp->isFlag(WPF_Closed)) {
				mOldNearestWaypoint = mNearestWaypoint;
				mNearestWaypoint    = wp;
				mWalkTargetPosition = Vector3f(mNearestWaypoint->mPosition);
				return;
			}
		}
	}

	setNearestWayPoint();
}

/*
 * --INFO--
 * Address:	802ECC9C
 * Size:	00006C
 */
Creature* Obj::getSearchedTarget()
{
	f32 viewAngle    = getViewAngle();
	Creature* target = EnemyFunc::getNearestPikminOrNavi(this, viewAngle, C_PARMS->mGeneral.mSightRadius(), nullptr, nullptr, nullptr);

	if (target) {
		mHealthGaugeTimer = 0.0f;
	}

	return target;
}

/*
 * --INFO--
 * Address:	802ECD08
 * Size:	000128
 */
void Obj::updateTargetDistance()
{
	f32 radius = (mNearestWaypoint) ? mNearestWaypoint->mRadius : C_PARMS->mGeneral.mHomeRadius.mValue;

	if (sqrDistanceXZ(mPosition, mWalkTargetPosition) < radius * radius) {
		setLinkWayPoint();
		mUpdateTimer = 0.0f;
	}

	if (mUpdateTimer > 5.0f) {
		mUpdateTimer = 0.0f;
		setNearestWayPoint();
		updateHomePosition();
	}
}

/*
 * --INFO--
 * Address:	802ECE30
 * Size:	0000BC
 */
void Obj::updateHomePosition()
{
	mHomePosition = Vector3f(sinf(mFaceDir) * C_PARMS->mGeneral.mHomeRadius.mValue + mPosition.x, mPosition.y,
	                         cosf(mFaceDir) * C_PARMS->mGeneral.mHomeRadius.mValue + mPosition.z);
	/*
	stwu     r1, -0x20(r1)
	lfs      f0, lbl_8051CF8C@sda21(r2)
	lfs      f5, 0x1fc(r3)
	fmr      f1, f5
	fcmpo    cr0, f5, f0
	bge      lbl_802ECE4C
	fneg     f1, f5

lbl_802ECE4C:
	lfs      f3, lbl_8051CFE0@sda21(r2)
	lis      r5, sincosTable___5JMath@ha
	lfs      f0, lbl_8051CF8C@sda21(r2)
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
	bge      lbl_802ECEB8
	lfs      f0, lbl_8051CFE4@sda21(r2)
	fmuls    f0, f5, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r5, r0
	fneg     f1, f0
	b        lbl_802ECED0

lbl_802ECEB8:
	fmuls    f0, f5, f3
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r5, r0

lbl_802ECED0:
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
 * Address:	802ECEEC
 * Size:	00032C
 */
bool Obj::isAttackableTarget()
{
	Vector3f shotGunPos = mShotgunMgr->getShotGunPosition();
	Vector3f dir        = getDirection(mFaceDir);
	Vector3f perpDir(-dir.z, 0.0f, dir.x);

	f32 offset   = C_PARMS->mGeneral.mSearchDistance.mValue * 0.5f;
	Vector3f pos = Vector3f(dir.x * offset + mPosition.x, dir.y * offset + mPosition.y, dir.z * offset + mPosition.z);
	f32 rad      = C_PARMS->mGeneral.mSearchDistance.mValue * 0.75f;
	Sys::Sphere sphere(pos, rad);
	// sphere.mRadius = C_PARMS->mGeneral.mSearchDistance.mValue * 0.75f;
	CellIteratorArg iterArg(sphere);
	iterArg.mIsSphereCollisionDisabled = true;
	CellIterator iter(iterArg);
	CI_LOOP(iter)
	{
		Creature* target = static_cast<Creature*>(*iter);
		if (target->isAlive()) {
			bool targetable = target->isNavi();
			if (!targetable) {
				if (target->isPiki() && static_cast<Piki*>(target)->isPikmin()) {
					targetable = true;
				}
			}

			if (targetable) {
				Vector3f targetPos = target->getPosition();
				targetPos -= shotGunPos;
				if (absVal(targetPos.y) < 200.0f && absVal(dot(perpDir, targetPos)) < 25.0f) {
					f32 dotProd = dot(dir, targetPos);
					if (dotProd > 1.0f && dotProd < C_PARMS->mGeneral.mSearchDistance.mValue) {
						mTargetPosition = target->getPosition();
						return true;
					}
				}
			}
		}
	}

	return false;
	/*
	stwu     r1, -0x130(r1)
	mflr     r0
	stw      r0, 0x134(r1)
	stfd     f31, 0x120(r1)
	psq_st   f31, 296(r1), 0, qr0
	stfd     f30, 0x110(r1)
	psq_st   f30, 280(r1), 0, qr0
	stfd     f29, 0x100(r1)
	psq_st   f29, 264(r1), 0, qr0
	stfd     f28, 0xf0(r1)
	psq_st   f28, 248(r1), 0, qr0
	stfd     f27, 0xe0(r1)
	psq_st   f27, 232(r1), 0, qr0
	stfd     f26, 0xd0(r1)
	psq_st   f26, 216(r1), 0, qr0
	stw      r31, 0xcc(r1)
	stw      r30, 0xc8(r1)
	stw      r29, 0xc4(r1)
	mr       r31, r3
	addi     r3, r1, 0x20
	lwz      r4, 0x2f8(r31)
	bl       getShotGunPosition__Q34Game10MiniHoudai20MiniHoudaiShotGunMgrFv
	lfs      f3, 0x1fc(r31)
	lfs      f0, lbl_8051CF8C@sda21(r2)
	fmr      f1, f3
	lfs      f28, 0x20(r1)
	fcmpo    cr0, f3, f0
	lfs      f27, 0x24(r1)
	lfs      f26, 0x28(r1)
	bge      lbl_802ECF68
	fneg     f1, f3

lbl_802ECF68:
	lfs      f2, lbl_8051CFE0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051CF8C@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0xa8(r1)
	lwz      r0, 0xac(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f30, 4(r3)
	bge      lbl_802ECFC0
	lfs      f0, lbl_8051CFE4@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0xb0(r1)
	lwz      r0, 0xb4(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f29, f0
	b        lbl_802ECFD8

lbl_802ECFC0:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0xb8(r1)
	lwz      r0, 0xbc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f29, r4, r0

lbl_802ECFD8:
	lwz      r4, 0xc0(r31)
	fneg     f31, f30
	lfs      f0, lbl_8051CFE8@sda21(r2)
	addi     r3, r1, 0x3c
	lfs      f2, 0x44c(r4)
	addi     r4, r1, 0x2c
	lfs      f1, lbl_8051CFEC@sda21(r2)
	fmuls    f5, f0, f2
	lfs      f3, 0x194(r31)
	lfs      f0, 0x18c(r31)
	fmuls    f4, f1, f2
	lfs      f1, 0x190(r31)
	lfs      f2, lbl_8051CF8C@sda21(r2)
	fmadds   f3, f30, f5, f3
	stfs     f4, 0x38(r1)
	fmadds   f1, f2, f5, f1
	fmadds   f0, f29, f5, f0
	stfs     f3, 0x34(r1)
	stfs     f0, 0x2c(r1)
	stfs     f1, 0x30(r1)
	bl       __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
	li       r0, 1
	addi     r3, r1, 0x5c
	stb      r0, 0x58(r1)
	addi     r4, r1, 0x3c
	bl       __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
	addi     r3, r1, 0x5c
	bl       first__Q24Game12CellIteratorFv
	b        lbl_802ED1B8

lbl_802ED04C:
	addi     r3, r1, 0x5c
	bl       __ml__Q24Game12CellIteratorFv
	lwz      r12, 0(r3)
	mr       r30, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802ED1B0
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	mr       r29, r3
	bne      lbl_802ED0CC
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802ED0CC
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802ED0CC
	li       r29, 1

lbl_802ED0CC:
	clrlwi.  r0, r29, 0x18
	beq      lbl_802ED1B0
	mr       r4, r30
	addi     r3, r1, 0x14
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x18(r1)
	lfs      f3, 0x14(r1)
	fsubs    f2, f2, f27
	lfs      f4, 0x1c(r1)
	lfs      f0, lbl_8051CF8C@sda21(r2)
	fsubs    f3, f3, f28
	fsubs    f4, f4, f26
	fcmpo    cr0, f2, f0
	ble      lbl_802ED118
	fmr      f1, f2
	b        lbl_802ED11C

lbl_802ED118:
	fneg     f1, f2

lbl_802ED11C:
	lfs      f0, lbl_8051CFF0@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_802ED1B0
	lfs      f1, lbl_8051CF8C@sda21(r2)
	fmuls    f5, f1, f2
	fmadds   f0, f31, f3, f5
	fmadds   f2, f29, f4, f0
	fcmpo    cr0, f2, f1
	ble      lbl_802ED144
	b        lbl_802ED148

lbl_802ED144:
	fneg     f2, f2

lbl_802ED148:
	lfs      f0, lbl_8051CFF4@sda21(r2)
	fcmpo    cr0, f2, f0
	bge      lbl_802ED1B0
	fmadds   f1, f29, f3, f5
	lfs      f0, lbl_8051CFA0@sda21(r2)
	fmadds   f1, f30, f4, f1
	fcmpo    cr0, f1, f0
	ble      lbl_802ED1B0
	lwz      r3, 0xc0(r31)
	lfs      f0, 0x44c(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_802ED1B0
	mr       r4, r30
	addi     r3, r1, 8
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 8(r1)
	li       r3, 1
	stfs     f0, 0x2d8(r31)
	lfs      f0, 0xc(r1)
	stfs     f0, 0x2dc(r31)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x2e0(r31)
	b        lbl_802ED1CC

lbl_802ED1B0:
	addi     r3, r1, 0x5c
	bl       next__Q24Game12CellIteratorFv

lbl_802ED1B8:
	addi     r3, r1, 0x5c
	bl       isDone__Q24Game12CellIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802ED04C
	li       r3, 0

lbl_802ED1CC:
	psq_l    f31, 296(r1), 0, qr0
	lfd      f31, 0x120(r1)
	psq_l    f30, 280(r1), 0, qr0
	lfd      f30, 0x110(r1)
	psq_l    f29, 264(r1), 0, qr0
	lfd      f29, 0x100(r1)
	psq_l    f28, 248(r1), 0, qr0
	lfd      f28, 0xf0(r1)
	psq_l    f27, 232(r1), 0, qr0
	lfd      f27, 0xe0(r1)
	psq_l    f26, 216(r1), 0, qr0
	lfd      f26, 0xd0(r1)
	lwz      r31, 0xcc(r1)
	lwz      r30, 0xc8(r1)
	lwz      r0, 0x134(r1)
	lwz      r29, 0xc4(r1)
	mtlr     r0
	addi     r1, r1, 0x130
	blr
	*/
}

/*
 * --INFO--
 * Address:	802ED218
 * Size:	000048
 */
void Obj::createShotGun() { mShotgunMgr = new MiniHoudaiShotGunMgr(this); }

/*
 * --INFO--
 * Address:	802ED260
 * Size:	000024
 */
void Obj::setupShotGun() { mShotgunMgr->setupShotGun(); }

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void Obj::setShotGunTarget(Vector3f& pos) { mShotgunMgr->setShotGunTarget(pos); }

/*
 * --INFO--
 * Address:	802ED284
 * Size:	000024
 */
void Obj::resetShotGunCallBack() { mShotgunMgr->resetCallBack(); }

/*
 * --INFO--
 * Address:	802ED2A8
 * Size:	000024
 */
void Obj::setShotGunCallBack() { mShotgunMgr->setCallBack(); }

/*
 * --INFO--
 * Address:	802ED2CC
 * Size:	000024
 */
void Obj::doUpdateShotGun() { mShotgunMgr->doUpdate(); }

/*
 * --INFO--
 * Address:	802ED2F0
 * Size:	000024
 */
void Obj::doUpdateCommonShotGun() { mShotgunMgr->doUpdateCommon(); }

/*
 * --INFO--
 * Address:	802ED314
 * Size:	000024
 */
void Obj::startShotGunRotation() { mShotgunMgr->startRotation(); }

/*
 * --INFO--
 * Address:	802ED338
 * Size:	000024
 */
void Obj::finishShotGunRotation() { mShotgunMgr->finishRotation(); }

/*
 * --INFO--
 * Address:	802ED35C
 * Size:	000024
 */
bool Obj::isShotGunRotation() { return mShotgunMgr->isShotGunRotation(); }

/*
 * --INFO--
 * Address:	802ED380
 * Size:	000024
 */
bool Obj::isShotGunLockOn() { return mShotgunMgr->isShotGunLockOn(); }

/*
 * --INFO--
 * Address:	802ED3A4
 * Size:	000024
 */
bool Obj::isFinishShotGun() { return mShotgunMgr->isFinishShotGun(); }

/*
 * --INFO--
 * Address:	802ED3C8
 * Size:	000024
 */
void Obj::emitShotGun() { mShotgunMgr->emitShotGun(); }

/*
 * --INFO--
 * Address:	802ED3EC
 * Size:	00002C
 */
void Obj::setShotGunTargetPosition() { mShotgunMgr->setShotGunTarget(mTargetPosition); }

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void Obj::shotGunDoDebugDraw(Graphics& gfx) { mShotgunMgr->doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	802ED418
 * Size:	000024
 */
void Obj::forceFinishShotGun() { mShotgunMgr->forceFinishShotGun(); }

/*
 * --INFO--
 * Address:	802ED43C
 * Size:	000138
 */
void Obj::createEffect()
{
	mEfxCharge    = new efx::TChibiCharge;
	mEfxDeadLight = new efx::TChibiDeadLight;
}

/*
 * --INFO--
 * Address:	802ED574
 * Size:	000058
 */
void Obj::setupEffect()
{
	mEfxCharge->mMtx    = mModel->getJoint("kuti")->getWorldMatrix();
	mEfxDeadLight->mMtx = mModel->getJoint("head")->getWorldMatrix();
}

/*
 * --INFO--
 * Address:	802ED5CC
 * Size:	0000A0
 */
void Obj::createSmokeSmallEffect(bool useSebire1Joint)
{
	Matrixf* mat;
	if (useSebire1Joint) {
		mat = mModel->getJoint("sebire1")->getWorldMatrix();
	} else {
		mat = mModel->getJoint("sebire2")->getWorldMatrix();
	}

	efx::TChibiSmokeS smokeSmall(mat);
	smokeSmall.create(nullptr);
}

/*
 * --INFO--
 * Address:	802ED66C
 * Size:	0000E8
 */
void Obj::createSmokeLargeEffect()
{
	efx::TChibiSmokeL smokeLarge1(mModel->getJoint("sebire1")->getWorldMatrix());
	smokeLarge1.create(nullptr);
	efx::TChibiSmokeL smokeLarge2(mModel->getJoint("sebire2")->getWorldMatrix());
	smokeLarge2.create(nullptr);
}

/*
 * --INFO--
 * Address:	802ED754
 * Size:	000024
 */
void Obj::createDownEffect(f32 scale) { EnemyBase::createBounceEffect(mPosition, scale); }

/*
 * --INFO--
 * Address:	802ED778
 * Size:	000034
 */
void Obj::startChargeEffect() { mEfxCharge->create(nullptr); }

/*
 * --INFO--
 * Address:	802ED7AC
 * Size:	000030
 */
void Obj::finishChargeEffect() { mEfxCharge->fade(); }

/*
 * --INFO--
 * Address:	802ED7DC
 * Size:	000034
 */
void Obj::createDeadLightEffect() { mEfxDeadLight->create(nullptr); }

/*
 * --INFO--
 * Address:	802ED810
 * Size:	0001D4
 */
void Obj::createDeadBombEmitEffect()
{
	Matrixf* kutiMtx = mModel->getJoint("kuti")->getWorldMatrix();
	efx::TChibiShoot shootFX(kutiMtx);
	shootFX.create(nullptr);

	efx::TChibiDeadMouth mouthFX(kutiMtx);
	mouthFX.create(nullptr);

	efx::TChibiDeadSe deadSe1(mModel->getJoint("sebire1")->getWorldMatrix());
	deadSe1.create(nullptr);

	efx::TChibiDeadSe deadSe2(mModel->getJoint("sebire2")->getWorldMatrix());
	deadSe2.create(nullptr);
}

/*
 * --INFO--
 * Address:	802ED9E4
 * Size:	000058
 */
void Obj::effectDrawOn()
{
	mShotgunMgr->effectDrawOn();
	mEfxCharge->endDemoDrawOn();
	mEfxDeadLight->endDemoDrawOn();
}

/*
 * --INFO--
 * Address:	802EDA3C
 * Size:	000058
 */
void Obj::effectDrawOff()
{
	mShotgunMgr->effectDrawOff();
	mEfxCharge->startDemoDrawOff();
	mEfxDeadLight->startDemoDrawOff();
}

} // namespace MiniHoudai
} // namespace Game
