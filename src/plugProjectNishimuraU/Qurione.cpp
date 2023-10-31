#include "Game/Entities/Qurione.h"
#include "Game/Entities/Egg.h"
#include "Game/MapMgr.h"
#include "Game/EnemyFunc.h"
#include "Game/generalEnemyMgr.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Qurione {

/*
 * --INFO--
 * Address:	80260178
 * Size:	000154
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator;
	setFSM(new FSM);
	createEffect();
}

/*
 * --INFO--
 * Address:	802602CC
 * Size:	00005C
 */
void Obj::birth(Vector3f& pos, f32 faceDir)
{
	EnemyBase::birth(pos, faceDir);
	attachItem();
	QurioneInitialParam param(200.0f, 30.0f);
	setInitialSetting(&param);
}

/*
 * --INFO--
 * Address:	80260328
 * Size:	00002C
 */
void Obj::setInitialSetting(EnemyInitialParamBase* params)
{
	QurioneInitialParam* qParam = static_cast<QurioneInitialParam*>(params);
	mFlyDist                    = qParam->mFlyDist;
	setQurioneStartPos(qParam->mSlideDist);
}

/*
 * --INFO--
 * Address:	80260354
 * Size:	0000EC
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

/*
 * --INFO--
 * Address:	80260440
 * Size:	000044
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	finishGlowEffect();
	EnemyBase::onKill(killArg);
}

/*
 * --INFO--
 * Address:	80260484
 * Size:	000034
 */
void Obj::doUpdate() { mFsm->exec(this); }

/*
 * --INFO--
 * Address:	802604B8
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
 * Address:	80260504
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	80260508
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	80260528
 * Size:	00005C
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

/*
 * --INFO--
 * Address:	80260584
 * Size:	000088
 */
bool Obj::flyCollisionCallBack(Creature* creature, f32 force, CollPart* part)
{
	if (creature && creature->isPiki() && getStateID() == QURIONE_Move) {
		mFsm->transit(this, QURIONE_Drop, nullptr);
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	8026060C
 * Size:	000034
 */
void Obj::doStartWaitingBirthTypeDrop()
{
	EnemyBase::doStartWaitingBirthTypeDrop();
	effectDrawOff();
}

/*
 * --INFO--
 * Address:	80260640
 * Size:	000034
 */
void Obj::doFinishWaitingBirthTypeDrop()
{
	EnemyBase::doFinishWaitingBirthTypeDrop();
	effectDrawOn();
}

/*
 * --INFO--
 * Address:	80260674
 * Size:	000020
 */
void Obj::doStartMovie() { effectDrawOff(); }

/*
 * --INFO--
 * Address:	80260694
 * Size:	000020
 */
void Obj::doEndMovie() { effectDrawOn(); }

/*
 * --INFO--
 * Address:	802606B4
 * Size:	000188
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

/*
 * --INFO--
 * Address:	8026083C
 * Size:	00016C
 */
void Obj::moveFaceDir()
{
	f32 moveSpeed = C_PARMS->mGeneral.mMoveSpeed.mValue;
	f32 x         = sin(getFaceDir());
	f32 y         = getTargetVelocity().y;
	f32 z         = cos(getFaceDir());

	mTargetVelocity = Vector3f(moveSpeed * x, y, moveSpeed * z);

	f32 minY = mapMgr->getMinY(mPosition);

	addPitchRatio();

	mCurrentVelocity.y
	    = 2.5f * ((minY + (C_PROPERPARMS.mPitchAmp() * sinf(mPitchRatio) + C_PROPERPARMS.mFlightHeight.mValue)) - mPosition.y);
}

/*
 * --INFO--
 * Address:	802609A8
 * Size:	000038
 */
void Obj::addPitchRatio()
{
	mPitchRatio += C_PROPERPARMS.mPitchRate.mValue * sys->mDeltaTime;
	if (mPitchRatio > TAU) {
		mPitchRatio -= TAU;
	}
}

/*
 * --INFO--
 * Address:	802609E0
 * Size:	000088
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

/*
 * --INFO--
 * Address:	80260A68
 * Size:	00006C
 */
bool Obj::isAppear()
{
	if (gameSystem && gameSystem->isZukanMode()) {
		return true;
	}

	if (EnemyFunc::getNearestPikminOrNavi(this, C_PARMS->mGeneral.mViewAngle.mValue, C_PARMS->mGeneral.mSightRadius.mValue, nullptr,
	                                      nullptr, nullptr)) {
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	80260AD4
 * Size:	000030
 */
bool Obj::isFlyKill()
{
	if (!(mLod.isFlag(AILOD_IsVisible)) || mUtilityTimer > C_PROPERPARMS.mFp05.mValue) {
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	80260B04
 * Size:	0000A4
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

/*
 * --INFO--
 * Address:	80260BA8
 * Size:	00004C
 */
void Obj::dropItem()
{
	if (mEgg) {
		mEgg->endCapture();
		mEgg = nullptr;
	}

	setZukanVisible(false);
}

/*
 * --INFO--
 * Address:	80260BF4
 * Size:	00002C
 */
void Obj::addQurioneScale()
{
	mQurioneScale += 0.05; // yes this is a double for some reason
	if (mQurioneScale > 1.0f) {
		mQurioneScale = 1.0f;
	}
}

/*
 * --INFO--
 * Address:	80260C20
 * Size:	00002C
 */
void Obj::subQurioneScale()
{
	mQurioneScale -= 0.05; // yes this is a double for some reason
	if (mQurioneScale < 0.0f) {
		mQurioneScale = 0.0f;
	}
}

/*
 * --INFO--
 * Address:	80260C4C
 * Size:	0001C0
 */
void Obj::createEffect()
{
	mEfxGlow      = new efx::TQuriGlow;
	mEfxAppear    = new efx::TQuriApp;
	mEfxDisappear = new efx::TQuriDisap;
}

/*
 * --INFO--
 * Address:	80260E0C
 * Size:	000054
 */
void Obj::setupEffect()
{
	Matrixf* fxMtx      = mModel->getJoint("body_jnt2")->getWorldMatrix();
	mEfxGlow->mMtx      = fxMtx;
	mEfxAppear->mMtx    = fxMtx;
	mEfxDisappear->mMtx = fxMtx;
}

/*
 * --INFO--
 * Address:	80260E60
 * Size:	0000A0
 */
void Obj::createHitEffect()
{
	Vector3f fxPos = mModel->getJoint("body_jnt2")->getWorldMatrix()->getBasis(3);
	efx::Arg fxArg(fxPos);
	efx::TQuriHit hitFX;

	hitFX.create(&fxArg);
}

/*
 * --INFO--
 * Address:	80260F00
 * Size:	00004C
 */
void Obj::startGlowEffect()
{
	mEfxGlow->create(nullptr);
	mEfxGlow->setGlobalScale(0.0f);
}

/*
 * --INFO--
 * Address:	80260F4C
 * Size:	00002C
 */
void Obj::setGlowEffectScale() { mEfxGlow->setGlobalScale(mQurioneScale); }

/*
 * --INFO--
 * Address:	80260F78
 * Size:	000030
 */
void Obj::finishGlowEffect() { mEfxGlow->forceKill(); }

/*
 * --INFO--
 * Address:	80260FA8
 * Size:	000034
 */
void Obj::createAppearEffect() { mEfxAppear->create(nullptr); }

/*
 * --INFO--
 * Address:	80260FDC
 * Size:	000034
 */
void Obj::createDisppearEffect() { mEfxDisappear->create(nullptr); }

/*
 * --INFO--
 * Address:	80261010
 * Size:	000064
 */
void Obj::effectDrawOn()
{
	mEfxGlow->endDemoDrawOn();
	mEfxAppear->endDemoDrawOn();
	mEfxDisappear->endDemoDrawOn();
}

/*
 * --INFO--
 * Address:	80261074
 * Size:	000064
 */
void Obj::effectDrawOff()
{
	mEfxGlow->startDemoDrawOff();
	mEfxAppear->startDemoDrawOff();
	mEfxDisappear->startDemoDrawOff();
}

} // namespace Qurione
} // namespace Game
