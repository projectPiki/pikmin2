#include "Game/Entities/Kurage.h"
#include "Game/MapMgr.h"
#include "Game/EnemyFunc.h"
#include "Game/PikiMgr.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Kurage {

/**
 * @note Address: 0x802AD6F0
 * @note Size: 0x138
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator();
	setFSM(new FSM());
	createEffect();
}

/**
 * @note Address: 0x802AD828
 * @note Size: 0x4
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/**
 * @note Address: 0x802AD82C
 * @note Size: 0xA8
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	disableEvent(0, EB_LeaveCarcass);
	enableEvent(0, EB_Untargetable);
	disableEvent(0, EB_DeathEffectEnabled);
	mNextState      = KURAGE_NULL;
	mStateTimer     = 0.0f;
	mFallTimer      = 0.0f;
	mMovePitchTimer = 3.5f;
	mSuckedPiki     = 0;
	mIsSucking      = false;

	setupEffect();
	startEyeHireBodyEffect();

	mFsm->start(this, KURAGE_Wait, nullptr);
}

/**
 * @note Address: 0x802AD8D4
 * @note Size: 0x54
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	finishEyeBodyEffect();
	finishHireEffect();
	finishSuckEffect();
	EnemyBase::onKill(killArg);
}

/**
 * @note Address: 0x802AD928
 * @note Size: 0x100
 */
void Obj::doUpdate()
{
	mFsm->exec(this);
	updateFallTimer();

	if (isAlive() && isEvent(0, EB_Cullable)) {
		if (isFlying()) {
			getJAIObject()->startSound(PSSE_EN_KURAGE_AIR, 0);
		}

		if (isEvent(0, EB_TakingDamage) && mDamageAnimTimer == 0.0f) {
			getJAIObject()->startSound(PSSE_EN_KURAGE_DAMAGE, 0);
		}
	}
}

/**
 * @note Address: 0x802ADA28
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics&) { }

/**
 * @note Address: 0x802ADA2C
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/**
 * @note Address: 0x802ADA4C
 * @note Size: 0x4C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/**
 * @note Address: 0x802ADA98
 * @note Size: 0x118
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{
	Matrixf* worldMat     = mModel->getJoint("koshi1")->getWorldMatrix();
	shadowParam.mPosition = Vector3f(worldMat->mMatrix.mtxView[0][3], worldMat->mMatrix.mtxView[1][3], worldMat->mMatrix.mtxView[2][3]);

	f32 minY = mapMgr->getMinY(shadowParam.mPosition);

	if (isFlying()) {
		shadowParam.mPosition.y = 25.0f + minY;
	} else {
		shadowParam.mPosition.y = 5.0f + minY;
	}

	shadowParam.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);

	if (isFlying()) {
		shadowParam.mBoundingSphere.mRadius = 50.0f + C_PROPERPARMS.mFlightHeight.mValue;
	} else {
		shadowParam.mBoundingSphere.mRadius = 50.0f;
	}

	shadowParam.mSize = 15.0f;
}

/**
 * @note Address: 0x802ADBB0
 * @note Size: 0x38
 */
bool Obj::damageCallBack(Creature* creature, f32 damage, CollPart* part)
{
	if (part) {
		addDamage(damage, 1.0f);
		return true;
	}

	return false;
}

/**
 * @note Address: 0x802ADBE8
 * @note Size: 0x44
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	finishEyeBodyEffect();
	finishHireEffect();
	finishSuckEffect();
}

/**
 * @note Address: 0x802ADC2C
 * @note Size: 0x7C
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	startEyeHireBodyEffect();

	int id = getStateID();
	if ((id >= KURAGE_Wait && id <= KURAGE_Fall) || (id >= KURAGE_TakeOff && id <= KURAGE_FlyFlick)) {

		mFsm->transit(this, KURAGE_TakeOff, nullptr);
	}
}

/**
 * @note Address: 0x802ADCA8
 * @note Size: 0x34
 */
void Obj::doStartWaitingBirthTypeDrop()
{
	EnemyBase::doStartWaitingBirthTypeDrop();
	effectDrawOff();
}

/**
 * @note Address: 0x802ADCDC
 * @note Size: 0x34
 */
void Obj::doFinishWaitingBirthTypeDrop()
{
	EnemyBase::doFinishWaitingBirthTypeDrop();
	effectDrawOn();
}

/**
 * @note Address: 0x802ADD10
 * @note Size: 0x20
 */
void Obj::doStartMovie() { effectDrawOff(); }

/**
 * @note Address: 0x802ADD30
 * @note Size: 0x20
 */
void Obj::doEndMovie() { effectDrawOn(); }

/**
 * @note Address: 0x802ADD50
 * @note Size: 0x98
 */
f32 Obj::setHeightVelocity(f32 yOffset, f32 speedFactor)
{
	f32 minY = mapMgr->getMinY(mPosition);

	mCurrentVelocity.y
	    = (speedFactor + C_PROPERPARMS.mRiseFactor.mValue) * ((yOffset + C_PROPERPARMS.mFlightHeight.mValue + minY) - mPosition.y);

	return mPosition.y - minY;
}

/**
 * @note Address: 0x802ADDE8
 * @note Size: 0x1D8
 */
void Obj::setRandTarget()
{
	f32 randRadius
	    = randWeightFloat(C_GENERALPARMS.mTerritoryRadius.mValue - C_GENERALPARMS.mHomeRadius.mValue) + C_GENERALPARMS.mHomeRadius.mValue;
	Vector3f pos     = getPosition();
	Vector3f homePos = mHomePosition;
	f32 ang          = JMAAtan2Radian(pos.x - homePos.x, pos.z - homePos.z);

	f32 theta = HALF_PI + (randWeightFloat(PI) + ang);

	mTargetPosition = Vector3f(randRadius * sinf(theta) + homePos.x, homePos.y, randRadius * cosf(theta) + homePos.z);
}

/**
 * @note Address: 0x802ADFC0
 * @note Size: 0xA4
 */
f32 Obj::getMovePitchOffset()
{
	mMovePitchTimer += sys->mDeltaTime * PI;

	if (mMovePitchTimer > TAU) {
		mMovePitchTimer -= TAU;
	}

	return 50.0f * sinf(mMovePitchTimer);
}

/**
 * @note Address: 0x802AE064
 * @note Size: 0x1A8
 */
f32 Obj::getAttackPitchOffset()
{
	f32 keyFrames[7] = { 0.0f, 30.0f, 65.0f, 80.0f, 95.0f, 108.0f, 120.0f };
	f32 offsets[7]   = { 0.0f, -20.0f, 15.0f, -30.0f, 0.0f, -25.0f, 0.0f };

	f32 currFrame = getMotionFrame();

	f32 attackOffset = 0.0f;

	for (int i = 0; i < 6; i++) {
		int j       = i + 1;
		f32 prevKey = keyFrames[i];
		if (currFrame >= prevKey) {
			f32 nextKey = keyFrames[j];
			if (currFrame < nextKey) {
				f32 factor   = (currFrame - prevKey) / (nextKey - prevKey);
				attackOffset = factor * offsets[j] + (1.0f - factor) * offsets[i];
			}
		}
	}

	return attackOffset;
}

/**
 * @note Address: 0x802AE20C
 * @note Size: 0x1A8
 */
f32 Obj::getFlickPitchOffset()
{
	f32 keyFrames[7] = { 0.0f, 10.0f, 15.0f, 20.0f, 30.0f, 40.0f, 60.0f };   // ??
	f32 offsets[7]   = { 0.0f, -50.0f, 50.0f, -50.0f, 20.0f, -20.0f, 0.0f }; // ??

	f32 currFrame = getMotionFrame();

	f32 flickOffset = 0.0f;

	for (int i = 0; i < 6; i++) {
		int j       = i + 1;
		f32 prevKey = keyFrames[i];
		if (currFrame >= prevKey) {
			f32 nextKey = keyFrames[j];
			if (currFrame < nextKey) {
				f32 factor  = (currFrame - prevKey) / (nextKey - prevKey);
				flickOffset = factor * offsets[j] + (1.0f - factor) * offsets[i];
			}
		}
	}

	return flickOffset;
}

/**
 * @note Address: 0x802AE3B4
 * @note Size: 0x144
 */
f32 Obj::getTakeOffPitchOffset()
{
	f32 keyFrames[5] = { 32.0f, 40.0f, 52.0f, 70.0f, 80.0f };
	f32 offsets[5]   = { 0.0f, -45.0f, -60.0f, -10.0f, -10.0f };

	f32 currFrame = getMotionFrame();

	f32 takeOffOffset = 0.0f;

	for (int i = 0; i < 4; i++) {
		int j       = i + 1;
		f32 prevKey = keyFrames[i];
		if (currFrame >= prevKey) {
			f32 nextKey = keyFrames[j];
			if (currFrame < nextKey) {
				f32 factor    = (currFrame - prevKey) / (nextKey - prevKey);
				takeOffOffset = factor * offsets[j] + (1.0f - factor) * offsets[i];
			}
		}
	}

	return takeOffOffset;
}

/**
 * @note Address: 0x802AE4F8
 * @note Size: 0x168
 */
f32 Obj::getFallPitchOffset(f32 currFrame)
{
	currFrame        = 30.0f * currFrame;
	f32 keyFrames[8] = { 7.0f, 17.0f, 27.0f, 37.0f, 47.0f, 57.0f, 67.0f, 77.0f };
	f32 offsets[8]   = { -20.0f, -15.0f, -35.0f, -25.0f, -40.0f, -35.0f, -65.0f, 0.0f };

	f32 fallOffset = 0.0f;

	for (int i = 0; i < 4; i++) {
		int j       = i + 1;
		f32 prevKey = keyFrames[i];
		if (currFrame >= prevKey) {
			f32 nextKey = keyFrames[j];
			if (currFrame < nextKey) {
				f32 factor = (currFrame - prevKey) / (nextKey - prevKey);
				fallOffset = factor * offsets[j] + (1.0f - factor) * offsets[i];
			}
		}
	}

	return fallOffset;
}

/**
 * @note Address: 0x802AE660
 * @note Size: 0x30
 */
void Obj::updateFallTimer()
{
	if (mStuckPikminCount != 0) {
		mFallTimer += sys->mDeltaTime;
		return;
	}

	mFallTimer = 0.0f;
}

/**
 * @note Address: 0x802AE690
 * @note Size: 0xA4
 */
StateID Obj::getFlyingNextState()
{
	if (mHealth <= 0.0f) {
		return KURAGE_Dead;
	}

	if (EnemyFunc::getStickPikminColorNum(this, Purple) > 0) {
		return KURAGE_Fall;
	}

	if (mFallTimer > C_PROPERPARMS.mShakeTime.mValue || mStuckPikminCount >= C_PROPERPARMS.mMinFallPiki.mValue) {
		if (mStuckPikminCount < C_PROPERPARMS.mMinFallPiki.mValue) {
			return KURAGE_FlyFlick;
		} else {
			return KURAGE_Fall;
		}
	}

	return KURAGE_NULL;
}

/**
 * @note Address: 0x802AE734
 * @note Size: 0x448
 */
Creature* Obj::getSearchedTarget(f32 offset)
{
	Creature* target = nullptr;

	if (sqrDistanceXZ(mPosition, mHomePosition) < SQUARE(C_GENERALPARMS.mTerritoryRadius())) {
		f32 currY       = mPosition.y;
		f32 minY        = currY - offset - 50.0f;
		f32 fovAng      = PI * (DEG2RAD * C_GENERALPARMS.mViewAngle());
		f32 maxDist     = SQUARE(C_GENERALPARMS.mSightRadius());
		f32 attackRange = SQUARE(C_GENERALPARMS.mMaxAttackRange());

		Iterator<Piki> iter(pikiMgr, nullptr, nullptr);

		CI_LOOP(iter)
		{
			Piki* currPiki = *iter;
			if (currPiki->isAlive() && currPiki->isPikmin() && currPiki->mSticker != this) {
				Vector3f pikiPos = currPiki->getPosition();
				if (pikiPos.y > minY && pikiPos.y < currY) {
					f32 dist = sqrDistanceXZ(mPosition, pikiPos);
					if (dist < attackRange) {
						return currPiki;
					}

					if (dist < maxDist) {
						f32 angSep = getAngDist(currPiki);
						if (absVal(angSep) <= fovAng) {
							target  = currPiki;
							maxDist = dist;
						}
					}
				}
			}
		}
	}

	return target;
}

/**
 * @note Address: 0x802AEB7C
 * @note Size: 0x33C
 */
bool Obj::isSuck(f32 offset, Creature* target)
{

	f32 currY    = mPosition.y;            // f30
	f32 minY     = currY - offset - 50.0f; // f29
	f32 maxRange = SQUARE(C_GENERALPARMS.mMaxAttackRange());

	if (target) {
		Vector3f targetPos = target->getPosition();
		if (targetPos.y > minY && targetPos.y < currY) {
			if (sqrDistanceXZ(mPosition, targetPos) < maxRange) {
				return true;
			}
		}
	} else {
		Iterator<Piki> iter(pikiMgr, nullptr, nullptr);
		CI_LOOP(iter)
		{
			Piki* currPiki = *iter;
			if (currPiki->isAlive() && currPiki->isPikmin() && currPiki->mSticker != this) {
				Vector3f pikiPos = currPiki->getPosition();
				if (pikiPos.y > minY && pikiPos.y < currY && sqrDistanceXZ(mPosition, pikiPos) < maxRange) {
					return true;
				}
			}
		}
	}

	return false;
}

/**
 * @note Address: 0x802AEEB8
 * @note Size: 0x434
 */
bool Obj::suckPikmin(f32 offset)
{
	f32 currY    = mPosition.y;
	f32 minY     = currY - offset - 50.0f;
	f32 maxRange = SQUARE(C_GENERALPARMS.mAttackRadius());

	CollPart* part   = mCollTree->getCollPart('suck');
	Vector3f partPos = part->mPosition;

	Iterator<Piki> iter(pikiMgr);
	CI_LOOP(iter)
	{
		Piki* currPiki = *iter;
		if (currPiki->isAlive() && currPiki->isPikmin() && currPiki->mSticker != this) {
			if (mSuckedPiki < C_PROPERPARMS.mMaxSuckPiki() && randWeightFloat(1.0f) < C_PROPERPARMS.mSuckChance()) {
				Vector3f pikiPos = currPiki->getPosition();
				if (pikiPos.y > minY && pikiPos.y < currY && sqrDistanceXZ(mPosition, pikiPos) < maxRange) {
					Vector3f suckVec = partPos - pikiPos;
					InteractSuikomi_Test suck(this, &suckVec, nullptr, part);
					if (currPiki->stimulate(suck)) {
						mSuckedPiki++;
						getJAIObject()->startSound(PSSE_EN_KURAGE_GET_PIKI, 0);
					}
				}
			}
		}
	}

	return mSuckedPiki >= C_PROPERPARMS.mMaxSuckPiki.mValue;
}

/**
 * @note Address: 0x802AF2EC
 * @note Size: 0x2B4
 */
void Obj::createEffect()
{
	mEfxEyeL    = new efx::TNewkurageEye;
	mEfxEyeR    = new efx::TNewkurageEye;
	mEfxHire    = new efx::TNewkurageHire;
	mEfxKira    = new efx::TNewkurageKira(&mPosition);
	mEfxSui     = new efx::TNewkurageSui;
	mEfxDeadrun = new efx::TNewkurageDeadrun;
}

/**
 * @note Address: 0x802AF5A0
 * @note Size: 0x8C
 */
void Obj::setupEffect()
{
	mEfxEyeL->mMtx = mModel->getJoint("Ltuno2")->getWorldMatrix();
	mEfxEyeR->mMtx = mModel->getJoint("Rtuno2")->getWorldMatrix();
	mEfxHire->setMtxptr(mModel->getJoint("nyoro")->getWorldMatrix()->mMatrix.mtxView);
	mEfxDeadrun->mMtx = mModel->getJoint("center")->getWorldMatrix();
}

/**
 * @note Address: 0x802AF62C
 * @note Size: 0x88
 */
void Obj::startEyeHireBodyEffect()
{
	mEfxEyeL->create(nullptr);
	mEfxEyeR->create(nullptr);
	mEfxHire->create(nullptr);
	mEfxKira->create(nullptr);
}

/**
 * @note Address: 0x802AF6B4
 * @note Size: 0x7C
 */
void Obj::finishEyeBodyEffect()
{
	mEfxEyeL->fade();
	mEfxEyeR->fade();
	mEfxKira->fade();

	mEfxDeadrun->create(nullptr);
}

/**
 * @note Address: 0x802AF730
 * @note Size: 0x24
 */
void Obj::setHireEffectLife(s16 lifeTime) { mEfxHire->setLifeTime(lifeTime); }

/**
 * @note Address: 0x802AF754
 * @note Size: 0x50
 */
void Obj::finishHireEffect()
{
	mEfxHire->fade();
	mEfxDeadrun->fade();
}

/**
 * @note Address: 0x802AF7A4
 * @note Size: 0x58
 */
void Obj::startSuckEffect(Vector3f& pos)
{
	efx::Arg fxArg(pos);
	mEfxSui->create(&fxArg);
}

/**
 * @note Address: 0x802AF7FC
 * @note Size: 0x24
 */
void Obj::updateSuckEffect(Vector3f& pos) { mEfxSui->setGlobalTranslation(pos); }

/**
 * @note Address: 0x802AF820
 * @note Size: 0x30
 */
void Obj::finishSuckEffect() { mEfxSui->fade(); }

/**
 * @note Address: 0x802AF850
 * @note Size: 0x9C
 */
void Obj::createBodyBombEffect()
{
	Matrixf* worldMat = mModel->getJoint("center")->getWorldMatrix();
	Vector3f pos;
	worldMat->getTranslation(pos);

	efx::TNewkurageBomb bombFX;
	efx::Arg fxArg(pos);
	bombFX.create(&fxArg);
}

/**
 * @note Address: 0x802AF8EC
 * @note Size: 0x44
 */
void Obj::createDownEffect() { createBounceEffect(mPosition, getDownSmokeScale()); }

/**
 * @note Address: 0x802AF938
 * @note Size: 0xA0
 */
void Obj::effectDrawOn()
{
	mEfxEyeL->endDemoDrawOn();
	mEfxEyeR->endDemoDrawOn();
	mEfxHire->endDemoDrawOn();
	mEfxKira->endDemoDrawOn();
	mEfxSui->endDemoDrawOn();
	mEfxDeadrun->endDemoDrawOn();
}

/**
 * @note Address: 0x802AF9D8
 * @note Size: 0xA0
 */
void Obj::effectDrawOff()
{
	mEfxEyeL->startDemoDrawOff();
	mEfxEyeR->startDemoDrawOff();
	mEfxHire->startDemoDrawOff();
	mEfxKira->startDemoDrawOff();
	mEfxSui->startDemoDrawOff();
	mEfxDeadrun->startDemoDrawOff();
}

} // namespace Kurage
} // namespace Game
