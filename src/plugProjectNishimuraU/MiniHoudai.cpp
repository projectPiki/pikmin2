#include "Game/Entities/MiniHoudai.h"
#include "Game/generalEnemyMgr.h"
#include "Game/routeMgr.h"
#include "Game/MapMgr.h"
#include "Game/EnemyFunc.h"
#include "LifeGaugeMgr.h"
#include "Dolphin/rand.h"

namespace Game {
namespace MiniHoudai {
/**
 * @note Address: 0x802EBFF8
 * @note Size: 0x148
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
	createShotGun();
	createEffect();
}

/**
 * @note Address: 0x802EC140
 * @note Size: 0x4
 */
void Obj::setInitialSetting(EnemyInitialParamBase*)
{
}

/**
 * @note Address: 0x802EC144
 * @note Size: 0xC8
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
	mAttackWaitTimer  = 0.0f;
	mUpdateTimer      = 0.0f;
	mNextState        = MINIHOUDAI_NULL;
	resetWayPoint();
	setNearestWayPoint();
	setupShotGun();
	setupEffect();

	mFsm->start(this, MINIHOUDAI_TurnPath, nullptr);
}

/**
 * @note Address: 0x802EC20C
 * @note Size: 0x4C
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	finishChargeEffect();
	forceFinishShotGun();
	EnemyBase::onKill(killArg);
}

/**
 * @note Address: 0x802EC258
 * @note Size: 0x54
 */
void Obj::doUpdate()
{
	updateCaution();
	updateTargetDistance();
	mFsm->exec(this);
	doUpdateShotGun();
}

/**
 * @note Address: 0x802EC2AC
 * @note Size: 0x34
 */
void Obj::doUpdateCommon()
{
	EnemyBase::doUpdateCommon();
	doUpdateCommonShotGun();
}

/**
 * @note Address: 0x802EC2E0
 * @note Size: 0x3C
 */
void Obj::doAnimationCullingOff()
{
	setShotGunCallBack();
	EnemyBase::doAnimationCullingOff();
	resetShotGunCallBack();
}

/**
 * @note Address: 0x802EC31C
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics&)
{
}

/**
 * @note Address: 0x802EC320
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx)
{
	EnemyBase::doDebugDraw(gfx);
}

/**
 * @note Address: 0x802EC340
 * @note Size: 0x4C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/**
 * @note Address: 0x802EC38C
 * @note Size: 0xE0
 */
void Obj::getShadowParam(ShadowParam& param)
{
	param.mPosition = mModel->getJoint("kosi")->getWorldMatrix()->getColumn(3);
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

/**
 * @note Address: 0x802EC46C
 * @note Size: 0x44
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

/**
 * @note Address: 0x802EC4B0
 * @note Size: 0x34
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	finishChargeEffect();
}

/**
 * @note Address: 0x802EC4E4
 * @note Size: 0x20
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
}

/**
 * @note Address: 0x802EC504
 * @note Size: 0x34
 */
void Obj::doStartEarthquakeFitState()
{
	EnemyBase::doStartEarthquakeFitState();
	finishChargeEffect();
}

/**
 * @note Address: 0x802EC538
 * @note Size: 0x20
 */
void Obj::doFinishEarthquakeFitState()
{
	EnemyBase::doFinishEarthquakeFitState();
}

/**
 * @note Address: 0x802EC558
 * @note Size: 0x34
 */
void Obj::doStartWaitingBirthTypeDrop()
{
	EnemyBase::doStartWaitingBirthTypeDrop();
	effectDrawOff();
}

/**
 * @note Address: 0x802EC58C
 * @note Size: 0x34
 */
void Obj::doFinishWaitingBirthTypeDrop()
{
	EnemyBase::doFinishWaitingBirthTypeDrop();
	effectDrawOn();
}

/**
 * @note Address: 0x802EC5C0
 * @note Size: 0x28
 */
void Obj::startCarcassMotion()
{
	startMotion(MINIHOUDAIANIM_Carry, nullptr);
}

/**
 * @note Address: 0x802EC5E8
 * @note Size: 0x20
 */
void Obj::doStartMovie()
{
	effectDrawOff();
}

/**
 * @note Address: 0x802EC608
 * @note Size: 0x20
 */
void Obj::doEndMovie()
{
	effectDrawOn();
}

/**
 * @note Address: 0x802EC628
 * @note Size: 0x64
 */
void Obj::initWalkSmokeEffect()
{
	mWalkSmokeMgr.alloc(2);
	mWalkSmokeMgr.setup(0, mModel, "handL", 5.0f);
	mWalkSmokeMgr.setup(1, mModel, "handR", 5.0f);
}

/**
 * @note Address: 0x802EC68C
 * @note Size: 0x8
 */
WalkSmokeEffect::Mgr* Obj::getWalkSmokeEffectMgr()
{
	return &mWalkSmokeMgr;
}

/**
 * @note Address: 0x802EC694
 * @note Size: 0x14
 */
bool Obj::doBecomeCarcass()
{
	mHealthGaugeTimer = 0.0f;
	mHealth           = 0.0f;
	return true;
}

/**
 * @note Address: 0x802EC6A8
 * @note Size: 0x1FC
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
			mHealth += (mMaxHealth / C_PROPERPARMS.mRespawnRate.mValue) * sys->getDeltaTime();
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

/**
 * @note Address: 0x802EC8A4
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
	param.mCurrHealthRatio = (mHealth / mMaxHealth);
	param.mRadius          = 10.0f;
}

/**
 * @note Address: 0x802EC908
 * @note Size: 0x50
 */
void Obj::updateCaution()
{
	if (isEvent(0, EB_Colliding) || isEvent(0, EB_TakingDamage) || mStuckPikminCount != 0) {
		mHealthGaugeTimer = 0.0f;
	}

	if (mHealthGaugeTimer < C_GENERALPARMS.mAlertDuration.mValue) {
		mHealthGaugeTimer += sys->mDeltaTime;
	}
}

/**
 * @note Address: 0x802EC958
 * @note Size: 0x24
 */
f32 Obj::getViewAngle()
{
	return (mHealthGaugeTimer < C_GENERALPARMS.mAlertDuration()) ? 180.0f : C_GENERALPARMS.mViewAngle();
}

/**
 * @note Address: 0x802EC97C
 * @note Size: 0x10
 */
void Obj::resetWayPoint()
{
	mNearestWaypoint    = nullptr;
	mOldNearestWaypoint = nullptr;
}

/**
 * @note Address: 0x802EC98C
 * @note Size: 0xB0
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

/**
 * @note Address: 0x802ECA3C
 * @note Size: 0x260
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
			mNearestWaypoint    = wpList[randInt(counter)];
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

/**
 * @note Address: 0x802ECC9C
 * @note Size: 0x6C
 */
Creature* Obj::getSearchedTarget()
{
	f32 viewAngle    = getViewAngle();
	Creature* target = EnemyFunc::getNearestPikminOrNavi(this, viewAngle, C_GENERALPARMS.mSightRadius(), nullptr, nullptr, nullptr);

	if (target) {
		mHealthGaugeTimer = 0.0f;
	}

	return target;
}

/**
 * @note Address: 0x802ECD08
 * @note Size: 0x128
 */
void Obj::updateTargetDistance()
{
	f32 radius = (mNearestWaypoint) ? mNearestWaypoint->mRadius : C_GENERALPARMS.mHomeRadius.mValue;

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

/**
 * @note Address: 0x802ECE30
 * @note Size: 0xBC
 */
void Obj::updateHomePosition()
{
	mHomePosition = Vector3f(sinf(mFaceDir) * C_GENERALPARMS.mHomeRadius.mValue + mPosition.x, mPosition.y,
	                         cosf(mFaceDir) * C_GENERALPARMS.mHomeRadius.mValue + mPosition.z);
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

/**
 * @note Address: 0x802ECEEC
 * @note Size: 0x32C
 */
bool Obj::isAttackableTarget()
{
	Vector3f shotGunPos = mShotgunMgr->getShotGunPosition();
	Vector3f dir        = getDirection(mFaceDir);
	Vector3f perpDir(-dir.z, 0.0f, dir.x);

	f32 scale = 0.5f * C_GENERALPARMS.mSearchDistance();

	Vector3f pos(dir.x * scale + mPosition.x, dir.y * scale + mPosition.y, dir.z * scale + mPosition.z);
	Sys::Sphere sphere(pos, 0.75f * C_GENERALPARMS.mSearchDistance());

	CellIteratorArg iterArg(sphere);
	iterArg.mOptimise = true;
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
				if (absVal(targetPos.y) < 200.0f && absVal(perpDir.dot(targetPos)) < 25.0f) {
					f32 dotProd = dir.dot(targetPos);
					if (dotProd > 1.0f && dotProd < C_GENERALPARMS.mSearchDistance.mValue) {
						mTargetPosition = target->getPosition();
						return true;
					}
				}
			}
		}
	}
	return false;
}

/**
 * @note Address: 0x802ED218
 * @note Size: 0x48
 */
void Obj::createShotGun()
{
	mShotgunMgr = new MiniHoudaiShotGunMgr(this);
}

/**
 * @note Address: 0x802ED260
 * @note Size: 0x24
 */
void Obj::setupShotGun()
{
	mShotgunMgr->setupShotGun();
}

/**
 * @note Address: N/A
 * @note Size: 0x24
 */
void Obj::setShotGunTarget(Vector3f& pos)
{
	mShotgunMgr->setShotGunTarget(pos);
}

/**
 * @note Address: 0x802ED284
 * @note Size: 0x24
 */
void Obj::resetShotGunCallBack()
{
	mShotgunMgr->resetCallBack();
}

/**
 * @note Address: 0x802ED2A8
 * @note Size: 0x24
 */
void Obj::setShotGunCallBack()
{
	mShotgunMgr->setCallBack();
}

/**
 * @note Address: 0x802ED2CC
 * @note Size: 0x24
 */
void Obj::doUpdateShotGun()
{
	mShotgunMgr->doUpdate();
}

/**
 * @note Address: 0x802ED2F0
 * @note Size: 0x24
 */
void Obj::doUpdateCommonShotGun()
{
	mShotgunMgr->doUpdateCommon();
}

/**
 * @note Address: 0x802ED314
 * @note Size: 0x24
 */
void Obj::startShotGunRotation()
{
	mShotgunMgr->startRotation();
}

/**
 * @note Address: 0x802ED338
 * @note Size: 0x24
 */
void Obj::finishShotGunRotation()
{
	mShotgunMgr->finishRotation();
}

/**
 * @note Address: 0x802ED35C
 * @note Size: 0x24
 */
bool Obj::isShotGunRotation()
{
	return mShotgunMgr->isShotGunRotation();
}

/**
 * @note Address: 0x802ED380
 * @note Size: 0x24
 */
bool Obj::isShotGunLockOn()
{
	return mShotgunMgr->isShotGunLockOn();
}

/**
 * @note Address: 0x802ED3A4
 * @note Size: 0x24
 */
bool Obj::isFinishShotGun()
{
	return mShotgunMgr->isFinishShotGun();
}

/**
 * @note Address: 0x802ED3C8
 * @note Size: 0x24
 */
void Obj::emitShotGun()
{
	mShotgunMgr->emitShotGun();
}

/**
 * @note Address: 0x802ED3EC
 * @note Size: 0x2C
 */
void Obj::setShotGunTargetPosition()
{
	mShotgunMgr->setShotGunTarget(mTargetPosition);
}

/**
 * @note Address: N/A
 * @note Size: 0x24
 */
void Obj::shotGunDoDebugDraw(Graphics& gfx)
{
	mShotgunMgr->doDebugDraw(gfx);
}

/**
 * @note Address: 0x802ED418
 * @note Size: 0x24
 */
void Obj::forceFinishShotGun()
{
	mShotgunMgr->forceFinishShotGun();
}

/**
 * @note Address: 0x802ED43C
 * @note Size: 0x138
 */
void Obj::createEffect()
{
	mEfxCharge    = new efx::TChibiCharge;
	mEfxDeadLight = new efx::TChibiDeadLight;
}

/**
 * @note Address: 0x802ED574
 * @note Size: 0x58
 */
void Obj::setupEffect()
{
	mEfxCharge->mMtx    = mModel->getJoint("kuti")->getWorldMatrix();
	mEfxDeadLight->mMtx = mModel->getJoint("head")->getWorldMatrix();
}

/**
 * @note Address: 0x802ED5CC
 * @note Size: 0xA0
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

/**
 * @note Address: 0x802ED66C
 * @note Size: 0xE8
 */
void Obj::createSmokeLargeEffect()
{
	efx::TChibiSmokeL smokeLarge1(mModel->getJoint("sebire1")->getWorldMatrix());
	smokeLarge1.create(nullptr);
	efx::TChibiSmokeL smokeLarge2(mModel->getJoint("sebire2")->getWorldMatrix());
	smokeLarge2.create(nullptr);
}

/**
 * @note Address: 0x802ED754
 * @note Size: 0x24
 */
void Obj::createDownEffect(f32 scale)
{
	EnemyBase::createBounceEffect(mPosition, scale);
}

/**
 * @note Address: 0x802ED778
 * @note Size: 0x34
 */
void Obj::startChargeEffect()
{
	mEfxCharge->create(nullptr);
}

/**
 * @note Address: 0x802ED7AC
 * @note Size: 0x30
 */
void Obj::finishChargeEffect()
{
	mEfxCharge->fade();
}

/**
 * @note Address: 0x802ED7DC
 * @note Size: 0x34
 */
void Obj::createDeadLightEffect()
{
	mEfxDeadLight->create(nullptr);
}

/**
 * @note Address: 0x802ED810
 * @note Size: 0x1D4
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

/**
 * @note Address: 0x802ED9E4
 * @note Size: 0x58
 */
void Obj::effectDrawOn()
{
	mShotgunMgr->effectDrawOn();
	mEfxCharge->endDemoDrawOn();
	mEfxDeadLight->endDemoDrawOn();
}

/**
 * @note Address: 0x802EDA3C
 * @note Size: 0x58
 */
void Obj::effectDrawOff()
{
	mShotgunMgr->effectDrawOff();
	mEfxCharge->startDemoDrawOff();
	mEfxDeadLight->startDemoDrawOff();
}

} // namespace MiniHoudai
} // namespace Game
