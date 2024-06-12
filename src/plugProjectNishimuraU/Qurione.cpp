#include "Game/Entities/Qurione.h"
#include "Game/Entities/Egg.h"
#include "Game/MapMgr.h"
#include "Game/EnemyFunc.h"
#include "Game/generalEnemyMgr.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Qurione {

/**
 * @note Address: 0x80260178
 * @note Size: 0x154
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
	createEffect();
}

/**
 * @note Address: 0x802602CC
 * @note Size: 0x5C
 */
void Obj::birth(Vector3f& pos, f32 faceDir)
{
	EnemyBase::birth(pos, faceDir);
	attachItem();
	QurioneInitialParam param(200.0f, 30.0f);
	setInitialSetting(&param);
}

/**
 * @note Address: 0x80260328
 * @note Size: 0x2C
 */
void Obj::setInitialSetting(EnemyInitialParamBase* params)
{
	QurioneInitialParam* qParam = static_cast<QurioneInitialParam*>(params);
	mFlyDist                    = qParam->mFlyDist;
	setQurioneStartPos(qParam->mSlideDist);
}

/**
 * @note Address: 0x80260354
 * @note Size: 0xEC
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	enableEvent(0, EB_Untargetable);
	enableEvent(0, EB_Invulnerable);
	disableEvent(0, EB_PlatformCollEnabled);
	disableEvent(0, EB_DamageAnimEnabled);
	disableEvent(0, EB_LeaveCarcass);
	disableEvent(0, EB_DeathEffectEnabled);
	disableEvent(0, EB_LifegaugeVisible);
	enableEvent(0, EB_BitterImmune);
	mDropGroup  = EDG_None;
	mPitchRatio = 0.0f;
	mSpawnIndex = QSPAWN_Start;

	resetUtilityTimer();
	mQurioneScale = 0.0f;
	setupEffect();
	mFsm->start(this, QURIONE_Stay, nullptr);
	doAnimationCullingOff();
}

/**
 * @note Address: 0x80260440
 * @note Size: 0x44
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	finishGlowEffect();
	EnemyBase::onKill(killArg);
}

/**
 * @note Address: 0x80260484
 * @note Size: 0x34
 */
void Obj::doUpdate() { mFsm->exec(this); }

/**
 * @note Address: 0x802604B8
 * @note Size: 0x4C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/**
 * @note Address: 0x80260504
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics&) { }

/**
 * @note Address: 0x80260508
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/**
 * @note Address: 0x80260528
 * @note Size: 0x5C
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{
	shadowParam.mPosition.x               = mPosition.x;
	shadowParam.mPosition.y               = mPosition.y - 25.0f;
	shadowParam.mPosition.z               = mPosition.z;
	shadowParam.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
	shadowParam.mSize                     = 7.5f * mQurioneScale;
	shadowParam.mBoundingSphere.mRadius   = C_PROPERPARMS.mFlightHeight.mValue + C_PROPERPARMS.mPitchAmp.mValue;
}

/**
 * @note Address: 0x80260584
 * @note Size: 0x88
 */
bool Obj::flyCollisionCallBack(Creature* creature, f32 force, CollPart* part)
{
	if (creature && creature->isPiki() && getStateID() == QURIONE_Move) {
		mFsm->transit(this, QURIONE_Drop, nullptr);
		return true;
	}

	return false;
}

/**
 * @note Address: 0x8026060C
 * @note Size: 0x34
 */
void Obj::doStartWaitingBirthTypeDrop()
{
	EnemyBase::doStartWaitingBirthTypeDrop();
	effectDrawOff();
}

/**
 * @note Address: 0x80260640
 * @note Size: 0x34
 */
void Obj::doFinishWaitingBirthTypeDrop()
{
	EnemyBase::doFinishWaitingBirthTypeDrop();
	effectDrawOn();
}

/**
 * @note Address: 0x80260674
 * @note Size: 0x20
 */
void Obj::doStartMovie() { effectDrawOff(); }

/**
 * @note Address: 0x80260694
 * @note Size: 0x20
 */
void Obj::doEndMovie() { effectDrawOn(); }

/**
 * @note Address: 0x802606B4
 * @note Size: 0x188
 */
void Obj::setQurioneStartPos(f32 slideDist)
{
	mSpawnPositions[QSPAWN_Start].x = mPosition.x;
	mSpawnPositions[QSPAWN_Start].y = mPosition.y + C_PROPERPARMS.mFlightHeight.mValue;
	mSpawnPositions[QSPAWN_Start].z = mPosition.z;

	f32 flyX = mFlyDist * sinf(mFaceDir);
	f32 flyZ = mFlyDist * cosf(mFaceDir);

	f32 orthAngle = mFaceDir - HALF_PI;
	f32 slideX    = slideDist * sinf(orthAngle);
	f32 slideZ    = slideDist * cosf(orthAngle);

	mSpawnPositions[QSPAWN_End].x = slideX + (mSpawnPositions[QSPAWN_Start].x + flyX);
	mSpawnPositions[QSPAWN_End].y = mSpawnPositions[QSPAWN_Start].y;
	mSpawnPositions[QSPAWN_End].z = slideZ + (mSpawnPositions[QSPAWN_Start].z + flyZ);
}

/**
 * @note Address: 0x8026083C
 * @note Size: 0x16C
 */
void Obj::moveFaceDir()
{
	f32 moveSpeed = getMoveSpeed();
	// Vector3f vel;
	f32 x = dolsinf(getFaceDir());
	f32 y = getTargetVelocity().y;
	f32 z = dolcosf(getFaceDir());

	mTargetVelocity = Vector3f(moveSpeed * x, y, moveSpeed * z);

	f32 minY = mapMgr->getMinY(mPosition);

	addPitchRatio();

	mCurrentVelocity.y
	    = 2.5f * ((minY + (C_PROPERPARMS.mPitchAmp() * sinf(mPitchRatio) + C_PROPERPARMS.mFlightHeight.mValue)) - mPosition.y);
}

/**
 * @note Address: 0x802609A8
 * @note Size: 0x38
 */
void Obj::addPitchRatio()
{
	mPitchRatio += C_PROPERPARMS.mPitchRate.mValue * sys->mDeltaTime;
	if (mPitchRatio > TAU) {
		mPitchRatio -= TAU;
	}
}

/**
 * @note Address: 0x802609E0
 * @note Size: 0x88
 */
void Obj::resetUtilityTimer()
{
	if (gameSystem && gameSystem->isZukanMode()) {
		// utility timer between -1 and 1 in Piklopedia
		mUtilityTimer = 1.0f - randWeightFloat(2.0f);
	} else {
		// utility timer 0 otherwise
		mUtilityTimer = 0.0f;
	}
}

/**
 * @note Address: 0x80260A68
 * @note Size: 0x6C
 */
bool Obj::isAppear()
{
	if (gameSystem && gameSystem->isZukanMode()) {
		return true;
	}

	if (EnemyFunc::getNearestPikminOrNavi(this, C_GENERALPARMS.mViewAngle.mValue, C_GENERALPARMS.mSightRadius.mValue, nullptr, nullptr,
	                                      nullptr)) {
		return true;
	}

	return false;
}

/**
 * @note Address: 0x80260AD4
 * @note Size: 0x30
 */
bool Obj::isFlyKill()
{
	if (!(mLod.isFlag(AILOD_IsVisible)) || mUtilityTimer > C_PROPERPARMS.mDeathTime.mValue) {
		return true;
	}

	return false;
}

/**
 * @note Address: 0x80260B04
 * @note Size: 0xA4
 */
void Obj::attachItem()
{
	Matrixf* worldMat = mModel->getJoint("water")->getWorldMatrix();
	EnemyBirthArg birthArg;
	birthArg.mPosition = mPosition;
	birthArg.mFaceDir  = mFaceDir;
	mEgg               = static_cast<Egg::Obj*>(generalEnemyMgr->birth(EnemyTypeID::EnemyID_Egg, birthArg));

	if (mEgg) {
		mEgg->init(nullptr);
		mEgg->startCapture(worldMat);
	}
}

/**
 * @note Address: 0x80260BA8
 * @note Size: 0x4C
 */
void Obj::dropItem()
{
	if (mEgg) {
		mEgg->endCapture();
		mEgg = nullptr;
	}

	setZukanVisible(false);
}

/**
 * @note Address: 0x80260BF4
 * @note Size: 0x2C
 */
void Obj::addQurioneScale()
{
	mQurioneScale += 0.05; // yes this is a double for some reason
	if (mQurioneScale > 1.0f) {
		mQurioneScale = 1.0f;
	}
}

/**
 * @note Address: 0x80260C20
 * @note Size: 0x2C
 */
void Obj::subQurioneScale()
{
	mQurioneScale -= 0.05; // yes this is a double for some reason
	if (mQurioneScale < 0.0f) {
		mQurioneScale = 0.0f;
	}
}

/**
 * @note Address: 0x80260C4C
 * @note Size: 0x1C0
 */
void Obj::createEffect()
{
	mEfxGlow      = new efx::TQuriGlow;
	mEfxAppear    = new efx::TQuriApp;
	mEfxDisappear = new efx::TQuriDisap;
}

/**
 * @note Address: 0x80260E0C
 * @note Size: 0x54
 */
void Obj::setupEffect()
{
	Matrixf* fxMtx      = mModel->getJoint("body_jnt2")->getWorldMatrix();
	mEfxGlow->mMtx      = fxMtx;
	mEfxAppear->mMtx    = fxMtx;
	mEfxDisappear->mMtx = fxMtx;
}

/**
 * @note Address: 0x80260E60
 * @note Size: 0xA0
 */
void Obj::createHitEffect()
{
	Vector3f fxPos = mModel->getJoint("body_jnt2")->getWorldMatrix()->getColumn(3);
	efx::Arg fxArg(fxPos);
	efx::TQuriHit hitFX;

	hitFX.create(&fxArg);
}

/**
 * @note Address: 0x80260F00
 * @note Size: 0x4C
 */
void Obj::startGlowEffect()
{
	mEfxGlow->create(nullptr);
	mEfxGlow->setGlobalScale(0.0f);
}

/**
 * @note Address: 0x80260F4C
 * @note Size: 0x2C
 */
void Obj::setGlowEffectScale() { mEfxGlow->setGlobalScale(mQurioneScale); }

/**
 * @note Address: 0x80260F78
 * @note Size: 0x30
 */
void Obj::finishGlowEffect() { mEfxGlow->forceKill(); }

/**
 * @note Address: 0x80260FA8
 * @note Size: 0x34
 */
void Obj::createAppearEffect() { mEfxAppear->create(nullptr); }

/**
 * @note Address: 0x80260FDC
 * @note Size: 0x34
 */
void Obj::createDisppearEffect() { mEfxDisappear->create(nullptr); }

/**
 * @note Address: 0x80261010
 * @note Size: 0x64
 */
void Obj::effectDrawOn()
{
	mEfxGlow->endDemoDrawOn();
	mEfxAppear->endDemoDrawOn();
	mEfxDisappear->endDemoDrawOn();
}

/**
 * @note Address: 0x80261074
 * @note Size: 0x64
 */
void Obj::effectDrawOff()
{
	mEfxGlow->startDemoDrawOff();
	mEfxAppear->startDemoDrawOff();
	mEfxDisappear->startDemoDrawOff();
}

} // namespace Qurione
} // namespace Game
