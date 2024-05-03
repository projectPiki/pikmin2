#include "Game/Entities/BombSarai.h"
#include "Game/Entities/Bomb.h"
#include "Game/EnemyFunc.h"
#include "Game/generalEnemyMgr.h"
#include "Game/MapMgr.h"
#include "Dolphin/rand.h"

static const char bombSaraiName[] = "246-BombSarai";

namespace Game {

/**
 * @note Address: 0x802B27CC
 * @note Size: 0x138
 */
BombSarai::Obj::Obj()
{
	mAnimator = new ProperAnimator();
	setFSM(new FSM());
	createEffect();
}

/**
 * @note Address: 0x802B2904
 * @note Size: 0x4
 */
void BombSarai::Obj::setInitialSetting(EnemyInitialParamBase*) { }

/**
 * @note Address: 0x802B2908
 * @note Size: 0x98
 */
void BombSarai::Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	if (gameSystem && gameSystem->isZukanMode()) {
		enableEvent(0, EB_Invulnerable);
	}

	mNextState      = BOMBSARAI_NULL;
	mStateTimer     = 0.0f;
	mBombCarryTimer = 0.0f;
	mPitchRatio     = 0.0f;
	mHeldBomb       = nullptr;

	setupEffect();

	mFsm->start(this, BOMBSARAI_Wait, nullptr);
}

/**
 * @note Address: 0x802B29A0
 * @note Size: 0x50
 */
void BombSarai::Obj::onKill(CreatureKillArg* killArg)
{
	throwBomb(Vector3f::zero);
	EnemyBase::onKill(killArg);
}

/**
 * @note Address: 0x802B29F0
 * @note Size: 0xA4
 */
void BombSarai::Obj::doUpdate()
{
	mFsm->exec(this);
	if (isAlive() && isFlying()) {
		getJAIObject()->startSound(PSSE_EN_BOMBSARAI_AIR, 0);
	}
}

/**
 * @note Address: 0x802B2A94
 * @note Size: 0x4
 */
void BombSarai::Obj::doDirectDraw(Graphics&) { }

/**
 * @note Address: 0x802B2A98
 * @note Size: 0x20
 */
void BombSarai::Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/**
 * @note Address: 0x802B2AB8
 * @note Size: 0x4C
 */
void BombSarai::Obj::setFSM(BombSarai::FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/**
 * @note Address: 0x802B2B04
 * @note Size: 0xD4
 */
void BombSarai::Obj::getShadowParam(ShadowParam& shadowParam)
{
	Matrixf* worldMat     = mModel->getJoint("body_joint1")->getWorldMatrix();
	shadowParam.mPosition = worldMat->getColumn(3);

	if (isFlying()) {
		shadowParam.mPosition.y -= 15.0f;
	} else {
		shadowParam.mPosition.y = 5.0f + mPosition.y;
	}

	shadowParam.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	shadowParam.mBoundingSphere.mRadius   = 50.0f + C_PROPERPARMS.mFlightHeight.mValue;
	shadowParam.mSize                     = 17.5f;
}

/**
 * @note Address: 0x802B2BD8
 * @note Size: 0x3C
 */
bool BombSarai::Obj::bombCallBack(Creature* creature, Vector3f& vec, f32 damage)
{
	if (mFloorTriangle) {
		addDamage(damage, 1.0f);
		return true;
	}

	return false;
}

/**
 * @note Address: 0x802B2C14
 * @note Size: 0x8C
 */
void BombSarai::Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	if (mHealth > 0.5f * C_GENERALPARMS.mHealth.mValue) {
		mFsm->transit(this, BOMBSARAI_TakeOff1, nullptr);
	} else {
		mFsm->transit(this, BOMBSARAI_TakeOff2, nullptr);
	}
}

/**
 * @note Address: 0x802B2CA0
 * @note Size: 0x34
 */
void BombSarai::Obj::doStartWaitingBirthTypeDrop()
{
	EnemyBase::doStartWaitingBirthTypeDrop();
	effectDrawOff();
}

/**
 * @note Address: 0x802B2CD4
 * @note Size: 0x34
 */
void BombSarai::Obj::doFinishWaitingBirthTypeDrop()
{
	EnemyBase::doFinishWaitingBirthTypeDrop();
	effectDrawOn();
}

/**
 * @note Address: 0x802B2D08
 * @note Size: 0x28
 */
void BombSarai::Obj::startCarcassMotion() { startMotion(BOMBSARAIANIM_Carry, nullptr); }

/**
 * @note Address: 0x802B2D30
 * @note Size: 0x20
 */
void BombSarai::Obj::doStartMovie() { effectDrawOff(); }

/**
 * @note Address: 0x802B2D50
 * @note Size: 0x20
 */
void BombSarai::Obj::doEndMovie() { effectDrawOn(); }

/**
 * @note Address: 0x802B2D70
 * @note Size: 0x1A0
 */
f32 BombSarai::Obj::setHeightVelocity(bool isFastTakeOff)
{
	f32 minY       = mapMgr->getMinY(mPosition);
	f32 riseFactor = 6.0f;
	if (!isFastTakeOff) {
		int pikiCount = (mStuckPikminCount < 0) ? 0 : (mStuckPikminCount <= 5) ? mStuckPikminCount : 5;

		f32 pikiCountF = (f32)pikiCount;
		riseFactor
		    = (5.0f - pikiCountF) / 5.0f * C_PROPERPARMS.mFreeRiseFactor.mValue + pikiCountF / 5.0f * C_PROPERPARMS.mLadenRiseFactor.mValue;
	}

	f32 newHeight = C_PROPERPARMS.mFlightHeight.mValue;
	if (mPosition.y - minY > newHeight - C_PROPERPARMS.mPitchAmp.mValue) {
		addPitchRatio();

		newHeight += C_PROPERPARMS.mPitchAmp.mValue * sinf(mPitchRatio);
	}

	mCurrentVelocity.y = riseFactor * ((minY + newHeight) - mPosition.y);

	return mPosition.y - minY;
}

/**
 * @note Address: 0x802B2F10
 * @note Size: 0x1E8
 */
void BombSarai::Obj::setRandTarget()
{
	f32 randAmp;
	if (gameSystem && gameSystem->mIsInCave) {
		randAmp = 50.0f + randWeightFloat(50.0f);
	} else {
		randAmp = C_GENERALPARMS.mHomeRadius.mValue
		        + randWeightFloat(C_GENERALPARMS.mTerritoryRadius.mValue - C_GENERALPARMS.mHomeRadius.mValue);
	}

	f32 angleToHome = JMAAtan2Radian(mPosition.x - mHomePosition.x, mPosition.z - mHomePosition.z);

	f32 theta = HALF_PI + (angleToHome + randWeightFloat(PI));

	mTargetPosition = Vector3f(randAmp * sinf(theta) + mHomePosition.x, mHomePosition.y, randAmp * cosf(theta) + mHomePosition.z);
}

/**
 * @note Address: 0x802B30F8
 * @note Size: 0x38
 */
void BombSarai::Obj::addPitchRatio()
{
	mPitchRatio += C_PROPERPARMS.mPitchRate.mValue * sys->mDeltaTime;
	if (mPitchRatio > TAU) {
		mPitchRatio -= TAU;
	}
}

/**
 * @note Address: 0x802B3130
 * @note Size: 0xC8
 */
void BombSarai::Obj::supplyBomb()
{
	if (!mHeldBomb) {
		Bomb::Mgr* bombMgr = static_cast<Bomb::Mgr*>(generalEnemyMgr->getEnemyMgr(EnemyTypeID::EnemyID_Bomb));
		if (bombMgr) {
			EnemyBirthArg birthArg;
			birthArg.mFaceDir = getFaceDir();
			Bomb::Obj* bomb   = static_cast<Bomb::Obj*>(bombMgr->birth(birthArg));
			if (bomb) {
				mHeldBomb = bomb;
				mHeldBomb->init(nullptr);
				mHeldBomb->startCapture(mModel->getJoint("kamu_jnt1")->getWorldMatrix());
				mHeldBomb->mCarrier = this;
			}
		}
	}
}

/**
 * @note Address: 0x802B31F8
 * @note Size: 0x78
 */
void BombSarai::Obj::throwBomb(Vector3f& velocity)
{
	if (mHeldBomb) {
		mHeldBomb->endCapture();
		mHeldBomb->setVelocity(velocity);
		mHeldBomb->updateFaceDir(mFaceDir);
	}

	mHeldBomb = nullptr;
}

/**
 * @note Address: 0x802B3270
 * @note Size: 0x70
 */
Creature* BombSarai::Obj::getAttackablePikmin()
{
	if (sqrDistanceXZ(mPosition, mHomePosition) < SQUARE(C_GENERALPARMS.mTerritoryRadius())) {
		return EnemyFunc::getNearestPikminOrNavi(this, C_GENERALPARMS.mViewAngle.mValue, C_GENERALPARMS.mSightRadius.mValue, nullptr,
		                                         nullptr, nullptr);
	}

	return nullptr;
}

/**
 * @note Address: 0x802B32E0
 * @note Size: 0x144
 */
BombSarai::StateID BombSarai::Obj::getNextStateOnHeight()
{
	if (mHealth <= 0.0f) {
		return BOMBSARAI_Fall;
	}

	int pikiCount = mStuckPikminCount;
	if (pikiCount != 0) {
		if (EnemyFunc::getStickPikminColorNum(this, Purple) > 0) {
			return BOMBSARAI_Fall;
		}

		int popCount = (pikiCount - 1 < 0) ? 0 : (pikiCount - 1 <= 4) ? pikiCount - 1 : 4;

		f32 popCountF = (f32)popCount;
		f32 limit
		    = (4.0f - popCountF) / 4.0f * C_PROPERPARMS.mFreeFlickChance.mValue + popCountF / 4.0f * C_PROPERPARMS.mLadenFlickChance.mValue;

		if (randWeightFloat(1.0f) < limit) {
			return (StateID)((int)BOMBSARAI_Flick + (StateID)(mHeldBomb != nullptr));
		}

		return BOMBSARAI_Fall;
	}

	return BOMBSARAI_NULL;
}

/**
 * @note Address: 0x802B3424
 * @note Size: 0xB0
 */
void BombSarai::Obj::createEffect() { mEfxSupli = new efx::TBsaraiSupli(); }

/**
 * @note Address: 0x802B34D4
 * @note Size: 0x44
 */
void BombSarai::Obj::setupEffect() { mEfxSupli->mMtx = mModel->getJoint("kuti_joint1")->getWorldMatrix(); }

/**
 * @note Address: 0x802B3518
 * @note Size: 0x34
 */
void BombSarai::Obj::createSupliEffect() { mEfxSupli->create(nullptr); }

/**
 * @note Address: 0x802B354C
 * @note Size: 0x11C
 */
void BombSarai::Obj::createBalloonEffect(int balloon)
{
	Matrixf* worldMat;
	if (balloon == 0) {
		worldMat = mModel->getJoint("balloon1")->getWorldMatrix();

	} else if (balloon == 1) {
		worldMat = mModel->getJoint("balloon2")->getWorldMatrix();

	} else if (balloon == 2) {
		worldMat = mModel->getJoint("balloon3")->getWorldMatrix();

	} else if (balloon == 3) {
		worldMat = mModel->getJoint("balloon4")->getWorldMatrix();

	} else {
		worldMat = mModel->getJoint("balloon5")->getWorldMatrix();
	}

	if (worldMat) {
		Vector3f pos;
		worldMat->getTranslation(pos);

		efx::TBsaraiDead deadFX;
		efx::Arg fxArg(pos);

		deadFX.create(&fxArg);
	}
}

/**
 * @note Address: 0x802B3668
 * @note Size: 0x24
 */
void BombSarai::Obj::createDownEffect(f32 p1) { createBounceEffect(mPosition, p1); }

/**
 * @note Address: 0x802B368C
 * @note Size: 0x30
 */
void BombSarai::Obj::effectDrawOn() { mEfxSupli->endDemoDrawOn(); }

/**
 * @note Address: 0x802B36BC
 * @note Size: 0x30
 */
void BombSarai::Obj::effectDrawOff() { mEfxSupli->startDemoDrawOff(); }

} // namespace Game
