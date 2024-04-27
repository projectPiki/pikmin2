#include "Game/Entities/OtakaraBase.h"
#include "Game/Entities/Bomb.h"
#include "Game/EnemyFunc.h"
#include "Game/generalEnemyMgr.h"
#include "Game/ConditionNotStick.h"
#include "efx/TOta.h"

namespace Game {
namespace OtakaraBase {

/**
 * @note Address: 0x802B624C
 * @note Size: 0x130
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator();
	setFSM(new FSM);
}

/**
 * @note Address: 0x802B637C
 * @note Size: 0x4
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/**
 * @note Address: 0x802B6380
 * @note Size: 0x104
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);

	mNextState       = OTA_Null;
	mAttackWaitTimer = 0.0f;
	resetTreasure();
	mIsAttackCharging  = 0;
	mAttackActiveTimer = 12800.0f;
	mEscapeSfxTimer    = 0.0f;
	setupEffect();

	if (getEnemyTypeID() == EnemyTypeID::EnemyID_BombOtakara) {
		disableEvent(0, EB_LifegaugeVisible);
		disableEvent(0, EB_LeaveCarcass);

		if (mDropGroup == EDG_None) {
			initBombOtakara();
		}

		mFsm->start(this, 11, nullptr);
		return;
	}

	mItemSearchDelayTimer = 12800.0f;
	mFsm->start(this, 2, nullptr);
}

/**
 * @note Address: 0x802B6490
 * @note Size: 0x5C
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	fallTreasure(true);
	finishChargeEffect();
	EnemyBase::onKill(killArg);
}

/**
 * @note Address: 0x802B64EC
 * @note Size: 0x34
 */
void Obj::doUpdate() { mFsm->exec(this); }

/**
 * @note Address: 0x802B6520
 * @note Size: 0xF0
 */
void Obj::doUpdateCommon()
{
	EnemyBase::doUpdateCommon();
	if (mAttackActiveTimer < 1.0f) {
		mAttackActiveTimer += sys->mDeltaTime;
		startDisChargeSE();
		attackTarget();
	}

	if (getEnemyTypeID() == EnemyTypeID::EnemyID_BombOtakara) {
		if (mTargetCreature) {
			if (!mTargetCreature->isAlive()) {
				mTargetCreature = nullptr;
				mHealth         = 0.0f;
			} else if (mTargetCreature->isStickTo()) {
				mTargetCreature->endCapture();
				mTargetCreature = nullptr;
				mHealth         = 0.0f;
			}
		} else {
			mHealth = 0.0f;
		}
	}
}

/**
 * @note Address: 0x802B6614
 * @note Size: 0x7C
 */
void Obj::doAnimationCullingOff()
{
	EnemyBase::doAnimationCullingOff();
	if (mTreasure) {
		if (!mTreasure->isAlive()) {
			fallTreasure(false);
		} else {
			Matrixf mtx;
			PSMTXIdentity(mtx.mMatrix.mtxView);
			mtx.mMatrix.structView.ty = mBodyHeightOffset;
			mTreasure->updateCapture(mtx);
		}
	}
}

/**
 * @note Address: 0x802B6690
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics&) { }

/**
 * @note Address: 0x802B6694
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/**
 * @note Address: 0x802B66B4
 * @note Size: 0x4C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/**
 * @note Address: 0x802B6700
 * @note Size: 0xEC
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{
	Matrixf* mat          = mModel->getJoint("otakara")->getWorldMatrix();
	shadowParam.mPosition = Vector3f(mat->mMatrix.mtxView[0][3], mat->mMatrix.mtxView[1][3], mat->mMatrix.mtxView[2][3]);
	shadowParam.mPosition.y -= 5.0f;

	shadowParam.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);

	if (mTreasure) {
		shadowParam.mBoundingSphere.mRadius = 30.0f;
	} else {
		shadowParam.mBoundingSphere.mRadius = 50.0f;
	}

	if (isEvent(1, EB2_Earthquake)) {
		shadowParam.mBoundingSphere.mRadius += 25.0f;
	}

	if (getEnemyTypeID() == EnemyTypeID::EnemyID_BombOtakara) {
		shadowParam.mSize = 12.5f;
	} else {
		shadowParam.mSize = 5.0f;
	}
}

/**
 * @note Address: 0x802B67EC
 * @note Size: 0x34
 */
bool Obj::damageCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	if (collpart) {
		damageTreasure(damage);
		return true;
	}
	return false;
}

/**
 * @note Address: 0x802B6820
 * @note Size: 0x78
 */
bool Obj::hipdropCallBack(Creature* creature, f32 damage, CollPart* collpart)
{
	if (collpart) {
		if (mTreasure) {
			damageTreasure(C_PROPERPARMS.mOtakaraLife.mValue);
		} else {
			damageTreasure(damage);
		}
	}

	return EnemyBase::hipdropCallBack(creature, 0.0f, collpart);
}

/**
 * @note Address: 0x802B6898
 * @note Size: 0x70
 */
bool Obj::earthquakeCallBack(Creature* creature, f32 damage)
{
	if (mTreasure) {
		damageTreasure(C_PROPERPARMS.mOtakaraLife.mValue);
	}
	return EnemyBase::earthquakeCallBack(creature, damage);
}

/**
 * @note Address: 0x802B6908
 * @note Size: 0x24
 */
bool Obj::bombCallBack(Game::Creature* creature, Vector3f& vec, f32 damage)
{
	damageTreasure(damage);
	return true;
}

/**
 * @note Address: 0x802B692C
 * @note Size: 0x4C
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	fallTreasure(true);
	finishChargeEffect();
}

/**
 * @note Address: 0x802B6978
 * @note Size: 0x4C
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	if (mIsAttackCharging != 0) {
		startChargeEffect();
	}
}

/**
 * @note Address: 0x802B69C4
 * @note Size: 0x4C
 */
void Obj::doStartEarthquakeState(f32 p1)
{
	EnemyBase::doStartEarthquakeState(p1);
	fallTreasure(true);
	finishChargeEffect();
}

/**
 * @note Address: 0x802B6A10
 * @note Size: 0x4C
 */
void Obj::doFinishEarthquakeState()
{
	EnemyBase::doFinishEarthquakeState();
	if (mIsAttackCharging != 0) {
		startChargeEffect();
	}
}

/**
 * @note Address: 0x802B6A5C
 * @note Size: 0x4C
 */
void Obj::doStartEarthquakeFitState()
{
	EnemyBase::doStartEarthquakeFitState();
	fallTreasure(true);
	finishChargeEffect();
}

/**
 * @note Address: 0x802B6AA8
 * @note Size: 0x4C
 */
void Obj::doFinishEarthquakeFitState()
{
	EnemyBase::doFinishEarthquakeFitState();
	if (mIsAttackCharging != 0) {
		startChargeEffect();
	}
}

/**
 * @note Address: 0x802B6AF4
 * @note Size: 0x40
 */
void Obj::doStartWaitingBirthTypeDrop()
{
	EnemyBase::doStartWaitingBirthTypeDrop();
	effectDrawOff();
}

/**
 * @note Address: 0x802B6B38
 * @note Size: 0x64
 */
void Obj::doFinishWaitingBirthTypeDrop()
{
	EnemyBase::doFinishWaitingBirthTypeDrop();
	effectDrawOn();
	if (getEnemyTypeID() == EnemyTypeID::EnemyID_BombOtakara) {
		initBombOtakara();
	}
}

/**
 * @note Address: 0x802B6BA0
 * @note Size: 0x28
 */
void Obj::startCarcassMotion() { EnemyBase::startMotion(OTAKARAANIM_Carry, nullptr); }

/**
 * @note Address: 0x802B6BC8
 * @note Size: 0x2C
 */
void Obj::doStartMovie() { effectDrawOff(); }

/**
 * @note Address: 0x802B6BF4
 * @note Size: 0x2C
 */
void Obj::doEndMovie() { effectDrawOn(); }

/**
 * @note Address: 0x802B6C20
 * @note Size: 0x140
 */
bool OtakaraBase::Obj::isMovePositionSet(bool ignoringTreasures)
{
	Creature* target = nullptr;
	if (!ignoringTreasures && (mItemSearchDelayTimer > C_PROPERPARMS.mTreasureCatch.mValue)) {
		target = getNearestTreasure();
	} else {
		mItemSearchDelayTimer += sys->mDeltaTime;
	}

	if (target) {
		mMovePosition   = target->getPosition();
		mTargetCreature = target;
	} else {
		ConditionNotStickClientAndItem condition(this, mTreasure);
		Parms* parms = C_PARMS;
		target = EnemyFunc::getNearestPikminOrNavi(this, parms->mGeneral.mViewAngle.mValue, parms->mGeneral.mSightRadius.mValue, nullptr,
		                                           nullptr, &condition);
		if (target) {
			mMovePosition = getTargetPosition(target);
		}
		mTargetCreature = nullptr;
	}

	if (target) {
		return true;
	} else {
		return false;
	}
}

/**
 * @note Address: 0x802B6D60
 * @note Size: 0x148
 */
Pellet* OtakaraBase::Obj::getNearestTreasure()
{
	Pellet* treasure = nullptr;
	f32 sightRadius  = C_GENERALPARMS.mSightRadius.mValue;
	f32 minDist      = sightRadius * sightRadius;
	PelletIterator iterator;
	CI_LOOP(iterator)
	{
		Pellet* pellet = (Pellet*)(*iterator);
		if (pellet->isAlive() && (pellet->mCaptureMatrix == nullptr && pellet->isPickable())) {
			Vector3f position = pellet->getPosition();
			if (sqrDistanceXZ(position, mHomePosition) < SQUARE(C_GENERALPARMS.mTerritoryRadius())) {
				Vector3f sep2 = mPosition;
				sep2 -= position;
				f32 dist2D = SQUARE(sep2.x) + SQUARE(sep2.z);
				if (dist2D < minDist) {
					treasure = pellet;
					minDist  = dist2D;
				}
			}
		}
	}
	return treasure;
}

/**
 * @note Address: 0x802B6EA8
 * @note Size: 0x1C8
 */
Vector3f Obj::getTargetPosition(Creature* target)
{
	Vector3f otakaraPosition = getPosition();
	Vector3f targetPosition  = target->getPosition();
	Vector3f homePos         = mHomePosition;

	Vector3f sep = otakaraPosition - targetPosition;
	sep.y        = 0.0f;
	sep.normalise();

	sep *= C_GENERALPARMS.mMoveSpeed.mValue;
	sep += otakaraPosition;

	f32 territory = C_GENERALPARMS.mTerritoryRadius.mValue;
	if (sqrDistanceXZ(sep, homePos) > SQUARE(territory)) {
		Vector3f::getFlatDirectionFromTo(homePos, sep);
		sep *= territory;
		sep += homePos;
	}
	return sep;
}

/**
 * @note Address: 0x802B7070
 * @note Size: 0x94
 */
void Obj::resetTreasure()
{
	mTreasure         = nullptr;
	mTreasureHealth   = 0.0f;
	mBodyHeightOffset = 0.0f;
	mCellRadius       = C_GENERALPARMS.mCellRadius.mValue;

	CollPart* collpart  = mCollTree->getCollPart('body');
	collpart->mRadius   = 10.0f;
	collpart->mOffset.y = 0.0f;

	CollPart* basepart  = mCollTree->mPart;
	basepart->mRadius   = 20.0f;
	basepart->mOffset.y = 0.0f;

	EnemyFunc::flickStickPikmin(this, 1.0f, 0.0f, 0.0f, FLICK_BACKWARD_ANGLE, nullptr);
}

/**
 * @note Address: 0x802B7104
 * @note Size: 0x10C
 */
bool Obj::isTakeTreasure()
{
	Pellet* target = static_cast<Pellet*>(mTargetCreature);
	if (target) {
		Vector3f targetPos = target->getPosition();
		f32 radius         = 20.0f + target->getPickRadius();
		if (radius < 50.0f) {
			radius = 50.0f;
		}

		if (targetPos.distance(mPosition) < radius) {
			return true;
		}
	}
	return false;
}

/**
 * @note Address: 0x802B7210
 * @note Size: 0x24C
 */
bool Obj::takeTreasure()
{
	Creature* target = mTargetCreature;
	if (target) {
		bool check;
		if (target->isAlive() && !target->mCaptureMatrix && target->isPellet() && static_cast<Pellet*>(target)->isPickable()
		    && isTakeTreasure()) {
			mTreasure         = target;
			mTreasureHealth   = C_PROPERPARMS.mOtakaraLife.mValue;
			mBodyHeightOffset = 0.5f * static_cast<Pellet*>(target)->getCylinderHeight();
			mCellRadius       = static_cast<Pellet*>(target)->getPickRadius();

			CollPart* bodyPart  = mCollTree->getCollPart('body');
			bodyPart->mRadius   = static_cast<Pellet*>(target)->getPickRadius();
			bodyPart->mOffset.y = mBodyHeightOffset;

			CollPart* basePart  = mCollTree->mPart;
			basePart->mRadius   = 10.0f + static_cast<Pellet*>(target)->getPickRadius();
			basePart->mOffset.y = mBodyHeightOffset;
			mCellRadius += 10.0f;
			check = true;
		} else {
			check = false;
		}

		if (check) {
			mTreasure->startCapture(mModel->getJoint("otakara")->getWorldMatrix());
			return true;
		}
	}
	return false;
}

/**
 * @note Address: 0x802B745C
 * @note Size: 0xF8
 */
bool Obj::fallTreasure(bool check)
{
	if (mTreasure) {
		mTreasure->endCapture();
		if (check) {
			Vector3f velocity(0.0f, 100.0f, 0.0f);
			mTreasure->setVelocity(velocity);
		}

		createTreasureFallEffect();
		resetTreasure();
		return true;
	}
	return false;
}

/**
 * @note Address: 0x802B7554
 * @note Size: 0x28
 */
bool Obj::isDropTreasure()
{
	// != 0.0f gives incorrect asm smh
	if ((mTreasureHealth) && (mTreasureHealth > 0.0f)) {
		return false;
	}
	return true;
}

/**
 * @note Address: 0x802B757C
 * @note Size: 0x54
 */
void Obj::damageTreasure(f32 damage)
{
	if (mTreasure) {
		mTreasureHealth -= damage;
		if (mTreasureHealth < 0.0f) {
			mTreasureHealth = 0.0f;
		}
		return;
	}

	addDamage(damage, 1.0f);
}

/**
 * @note Address: 0x802B75D0
 * @note Size: 0x1A8
 */
void Obj::attackTarget()
{
	f32 maxRange = getMaxAttackHeight();
	f32 minRange = getMinAttackHeight();
	f32 radius   = C_GENERALPARMS.mAttackRadius.mValue;

	f32 dist = SQUARE(radius);

	Sys::Sphere sphere;
	sphere.mPosition = mPosition;
	sphere.mRadius   = radius;

	CellIteratorArg iterArg(sphere);
	iterArg.mOptimise = true;
	CellIterator iter(iterArg);

	CI_LOOP(iter)
	{
		Creature* target = static_cast<Creature*>(*iter);
		if (target->isAlive() && (target->isNavi() || target->isPiki())) {
			Vector3f targetPos = target->getPosition();
			if (maxRange > targetPos.y && minRange < targetPos.y && sqrDistanceXZ(mPosition, targetPos) < dist) {
				interactCreature(target);
			}
		}
	}
}

/**
 * @note Address: 0x802B777C
 * @note Size: 0x134
 */
void Obj::createTreasureFallEffect()
{
	Matrixf* mtx         = mModel->getJoint("center")->getWorldMatrix();
	Vector3f translation = Vector3f(mtx->mMatrix.structView.tx, mtx->mMatrix.structView.ty, mtx->mMatrix.structView.tz);

	f32 scale = 0.0285f * (mCellRadius - 10.0f);
	if (scale < 1.0f) {
		scale = 0.5f * (1.0f + scale);
	}

	efx::ArgScale arg(translation, scale); // this is what causes the sdata2 mismatch- inherits Arg's getName
	efx::TOtaPartsoff treasureFallFX;

	treasureFallFX.create(&arg);
	getJAIObject()->startSound(PSSE_EN_OTAKARA_DROP_ITEM, 0);
}

/**
 * @note Address: 0x802B78B0
 * @note Size: 0x88
 */
void Obj::startEscapeSE()
{
	if (mTargetCreature == nullptr) {
		if (mEscapeSfxTimer > 3.0f) {
			getJAIObject()->startSound(PSSE_EN_OTAKARA_STANDUP, 0);
			mEscapeSfxTimer = 0.0f;
		} else {
			mEscapeSfxTimer += sys->mDeltaTime;
		}
	}
}

/**
 * @note Address: 0x802B7938
 * @note Size: 0xFC
 */
void Obj::initBombOtakara()
{
	if (mTargetCreature != nullptr) {
		return;
	}

	Bomb::Mgr* mgr = static_cast<Bomb::Mgr*>(generalEnemyMgr->getEnemyMgr(EnemyTypeID::EnemyID_Bomb));
	if (!mgr) {
		return;
	}

	EnemyBirthArg birthArg;
	birthArg.mFaceDir = mFaceDir;
	mTargetCreature   = mgr->birth(birthArg);
	if (mTargetCreature) {
		mTargetCreature->init(nullptr);
		mTargetCreature->startCapture(mModel->getJoint("otakara")->getWorldMatrix());
		static_cast<Bomb::Obj*>(mTargetCreature)->mCarrier = this;
		mBodyHeightOffset                                  = 10.0f;
		mCellRadius                                        = 25.0f;

		CollPart* collpart  = mCollTree->getCollPart('body');
		collpart->mRadius   = 15.0f;
		collpart->mOffset.y = mBodyHeightOffset;

		CollPart* basepart  = mCollTree->mPart;
		basepart->mRadius   = 25.0f;
		basepart->mOffset.y = mBodyHeightOffset;
	}
}

/**
 * @note Address: 0x802B7A34
 * @note Size: 0x68
 */
bool Obj::isTransitChaseState()
{
	if (isEvent(0, EB_Colliding) || isEvent(0, EB_TakingDamage) || (mStuckPikminCount != 0)) {
		return true;
	}

	Parms* parms = C_PARMS;
	Navi* navi = EnemyFunc::getNearestNavi(this, parms->mGeneral.mViewAngle.mValue, parms->mGeneral.mSightRadius.mValue, nullptr, nullptr);
	return (navi != nullptr);
}

/**
 * @note Address: 0x802B7A9C
 * @note Size: 0x8C
 */
bool Obj::stimulateBomb()
{
	mItemSearchDelayTimer += sys->mDeltaTime;
	if ((mItemSearchDelayTimer > 1.5f) && (mTargetCreature != nullptr) && (mTargetCreature->isAlive())) {
		disableEvent(0, EB_Cullable);
		static_cast<Bomb::Obj*>(mTargetCreature)->forceBomb();
	}

	return isEvent(0, EB_Cullable);
}

/**
 * @note Address: 0x802B7B28
 * @note Size: 0x38
 */
Creature* Obj::getChaseTargetCreature()
{
	return EnemyFunc::getNearestPikminOrNavi(this, C_GENERALPARMS.mViewAngle.mValue, C_GENERALPARMS.mSightRadius.mValue, nullptr, nullptr,
	                                         nullptr);
}
} // namespace OtakaraBase
} // namespace Game
