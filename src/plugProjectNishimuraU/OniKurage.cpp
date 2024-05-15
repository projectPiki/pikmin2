#include "Game/Entities/OniKurage.h"
#include "Game/MapMgr.h"
#include "Game/EnemyFunc.h"
#include "Game/PikiMgr.h"
#include "Game/Navi.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "PSM/Navi.h"
#include "Dolphin/rand.h"
#include "nans.h"

namespace Game {
namespace OniKurage {

namespace {
const f32 cDefaultKamuJointOffset[2] = { 7.5f, -7.5f };
const f32 cFlickKamuJointOffset[2]   = { 10.0f, -10.0f };
} // namespace

/**
 * @note Address: 0x802D3F84
 * @note Size: 0x140
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator();
	setFSM(new FSM());
	createEffect();
}

/**
 * @note Address: 0x802D40C4
 * @note Size: 0x4
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/**
 * @note Address: 0x802D40C8
 * @note Size: 0xB0
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	disableEvent(0, EB_LeaveCarcass);
	enableEvent(0, EB_Untargetable);
	disableEvent(0, EB_DeathEffectEnabled);
	mNextState      = ONIKURAGE_NULL;
	mStateTimer     = 0.0f;
	mFallTimer      = 0.0f;
	mMovePitchTimer = 3.5f;
	mSuckedPiki     = 0;
	mIsSucking      = false;

	mSuckedNavis[1] = nullptr;
	mSuckedNavis[0] = nullptr;

	setupEffect();
	startEyeHireBodyEffect();

	mFsm->start(this, ONIKURAGE_Wait, nullptr);
}

/**
 * @note Address: 0x802D4178
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
 * @note Address: 0x802D41CC
 * @note Size: 0x108
 */
void Obj::doUpdate()
{
	mFsm->exec(this);
	mMouthSlots.update();
	updateFallTimer();

	if (isAlive() && isEvent(0, EB_Cullable)) {
		if (isFlying()) {
			getJAIObject()->startSound(PSSE_EN_ONIKURAGE_AIR, 0);
		}

		if (isEvent(0, EB_TakingDamage) && mDamageAnimTimer == 0.0f) {
			getJAIObject()->startSound(PSSE_EN_ONIKURAGE_DAMAGE, 0);
		}
	}
}

/**
 * @note Address: 0x802D42D4
 * @note Size: 0x34
 */
void Obj::doUpdateCommon()
{
	EnemyBase::doUpdateCommon();
	escapeCheckNavi();
}

/**
 * @note Address: 0x802D4308
 * @note Size: 0x4
 */
void Obj::doDirectDraw(Graphics&) { }

/**
 * @note Address: 0x802D430C
 * @note Size: 0x20
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/**
 * @note Address: 0x802D432C
 * @note Size: 0x4C
 */
void Obj::setFSM(FSM* fsm)
{
	mFsm = fsm;
	mFsm->init(this);
	mCurrentLifecycleState = nullptr;
}

/**
 * @note Address: 0x802D4378
 * @note Size: 0x10C
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
		shadowParam.mBoundingSphere.mRadius = 100.0f;
	} else {
		shadowParam.mBoundingSphere.mRadius = 50.0f;
	}

	shadowParam.mSize = 25.0f;
}

/**
 * @note Address: 0x802D4484
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
 * @note Address: 0x802D44BC
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
 * @note Address: 0x802D4500
 * @note Size: 0xB8
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	startEyeHireBodyEffect();

	int id = getStateID();
	if ((id >= ONIKURAGE_Wait && id <= ONIKURAGE_Drop) || (id >= ONIKURAGE_TakeOff && id <= ONIKURAGE_FlyFlick)) {
		if (mSuckedNavis[0] || mSuckedNavis[1]) {
			mFsm->transit(this, ONIKURAGE_GroundFlick, nullptr);
		} else {
			mFsm->transit(this, ONIKURAGE_TakeOff, nullptr);
		}
	}
}

/**
 * @note Address: 0x802D45B8
 * @note Size: 0x34
 */
void Obj::doStartWaitingBirthTypeDrop()
{
	EnemyBase::doStartWaitingBirthTypeDrop();
	effectDrawOff();
}

/**
 * @note Address: 0x802D45EC
 * @note Size: 0x34
 */
void Obj::doFinishWaitingBirthTypeDrop()
{
	EnemyBase::doFinishWaitingBirthTypeDrop();
	effectDrawOn();
}

/**
 * @note Address: 0x802D4620
 * @note Size: 0x20
 */
void Obj::doStartMovie() { effectDrawOff(); }

/**
 * @note Address: 0x802D4640
 * @note Size: 0x20
 */
void Obj::doEndMovie() { effectDrawOn(); }

/**
 * @note Address: 0x802D4660
 * @note Size: 0xC8
 */
void Obj::initMouthSlots()
{
	mMouthSlots.alloc(2);
	mMouthSlots.setup(0, mModel, "Proom");
	mMouthSlots.setup(1, mModel, "Proom");

	for (int i = 0; i < mMouthSlots.getMax(); i++) {
		MouthCollPart* slot = mMouthSlots.getSlot(i);
		slot->mIsOniKurage  = true;
		f32 offset          = cDefaultKamuJointOffset[i];
		slot->mRadius       = 1.0f;
		slot->mOffset.x     = offset;
	}
}

/**
 * @note Address: 0x802D4728
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
 * @note Address: 0x802D47C0
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
 * @note Address: 0x802D4998
 * @note Size: 0xA4
 */
f32 Obj::getMovePitchOffset()
{
	mMovePitchTimer += sys->mDeltaTime * PI;

	if (mMovePitchTimer > TAU) {
		mMovePitchTimer -= TAU;
	}

	return 20.0f * sinf(mMovePitchTimer);
}

/**
 * @note Address: 0x802D4A3C
 * @note Size: 0x1A8
 */
f32 Obj::getAttackPitchOffset()
{
	f32 keyFrames[7] = { 0.0f, 30.0f, 65.0f, 80.0f, 95.0f, 108.0f, 120.0f };
	f32 offsets[7]   = { 0.0f, -30.0f, 30.0f, -50.0f, 0.0f, -40.0f, 0.0f };

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
 * @note Address: 0x802D4BE4
 * @note Size: 0x1A8
 */
f32 Obj::getFlickPitchOffset()
{
	f32 keyFrames[7] = { 0.0f, 10.0f, 15.0f, 20.0f, 30.0f, 40.0f, 60.0f };    // ??
	f32 offsets[7]   = { 0.0f, -80.0f, 80.0f, -100.0f, 30.0f, -50.0f, 0.0f }; // ??

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
 * @note Address: 0x802D4D8C
 * @note Size: 0x144
 */
f32 Obj::getTakeOffPitchOffset()
{
	f32 keyFrames[5] = { 32.0f, 40.0f, 52.0f, 70.0f, 80.0f };
	f32 offsets[5]   = { 0.0f, -50.0f, -60.0f, -10.0f, -10.0f };

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
 * @note Address: 0x802D4ED0
 * @note Size: 0x168
 */
f32 Obj::getFallPitchOffset(f32 currFrame)
{
	currFrame        = 30.0f * currFrame;
	f32 keyFrames[8] = { 7.0f, 17.0f, 27.0f, 37.0f, 47.0f, 57.0f, 67.0f, 77.0f };
	f32 offsets[8]   = { -25.0f, -15.0f, -40.0f, -30.0f, -45.0f, -35.0f, -70.0f, 0.0f };

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
 * @note Address: 0x802D5038
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
 * @note Address: 0x802D5068
 * @note Size: 0xA4
 */
StateID Obj::getFlyingNextState()
{
	if (mHealth <= 0.0f) {
		return ONIKURAGE_Dead;
	}

	if (EnemyFunc::getStickPikminColorNum(this, Purple) > 0) {
		return ONIKURAGE_Fall;
	}

	if (mFallTimer > C_PROPERPARMS.mShakeTime.mValue || mStuckPikminCount >= C_PROPERPARMS.mMinFallPiki.mValue) {
		if (mStuckPikminCount < C_PROPERPARMS.mMinFallPiki.mValue) {
			return ONIKURAGE_FlyFlick;
		} else {
			return ONIKURAGE_Fall;
		}
	}

	return ONIKURAGE_NULL;
}

/**
 * @note Address: 0x802D510C
 * @note Size: 0x340
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

		Sys::Sphere sphere(mPosition, C_GENERALPARMS.mTerritoryRadius());
		CellIteratorArg iterArg(sphere);
		iterArg.mOptimise = true;
		CellIterator iter(iterArg);

		CI_LOOP(iter)
		{
			Creature* creature = (Creature*)*iter;
			if (creature->isAlive() && creature->mSticker != this) {
				bool isValidTarget = creature->isNavi();
				if (!isValidTarget && creature->isPiki() && static_cast<Piki*>(creature)->isPikmin()) {
					isValidTarget = true;
				}
				if (isValidTarget) {
					Vector3f pikiPos = creature->getPosition();
					if (pikiPos.y > minY && pikiPos.y < currY) {
						f32 dist = sqrDistanceXZ(mPosition, pikiPos);
						if (dist < attackRange) {
							return creature;
						}

						if (dist < maxDist) {
							f32 angSep = getAngDist(creature);
							if (absVal(angSep) <= fovAng) {
								target  = creature;
								maxDist = dist;
							}
						}
					}
				}
			}
		}
	}

	return target;
	/*
	stwu     r1, -0x140(r1)
	mflr     r0
	stw      r0, 0x144(r1)
	stfd     f31, 0x130(r1)
	psq_st   f31, 312(r1), 0, qr0
	stfd     f30, 0x120(r1)
	psq_st   f30, 296(r1), 0, qr0
	stfd     f29, 0x110(r1)
	psq_st   f29, 280(r1), 0, qr0
	stfd     f28, 0x100(r1)
	psq_st   f28, 264(r1), 0, qr0
	stfd     f27, 0xf0(r1)
	psq_st   f27, 248(r1), 0, qr0
	stfd     f26, 0xe0(r1)
	psq_st   f26, 232(r1), 0, qr0
	stfd     f25, 0xd0(r1)
	psq_st   f25, 216(r1), 0, qr0
	stw      r31, 0xcc(r1)
	stw      r30, 0xc8(r1)
	stw      r29, 0xc4(r1)
	stw      r28, 0xc0(r1)
	mr       r28, r3
	li       r31, 0
	lfs      f2, 0x194(r3)
	lfs      f0, 0x1a0(r3)
	lwz      r5, 0xc0(r3)
	fsubs    f3, f2, f0
	lfs      f5, 0x18c(r3)
	lfs      f2, 0x198(r3)
	lfs      f0, 0x35c(r5)
	fsubs    f4, f5, f2
	fmuls    f2, f3, f3
	fmuls    f0, f0, f0
	fmadds   f2, f4, f4, f2
	fcmpo    cr0, f2, f0
	bge      lbl_802D53F0
	lfs      f30, 0x190(r28)
	addi     r3, r1, 0x54
	lfs      f6, 0x3d4(r5)
	addi     r4, r1, 0x44
	lfs      f0, 0x564(r5)
	fsubs    f4, f30, f1
	lfs      f1, 0x424(r5)
	fmuls    f27, f6, f6
	lfs      f2, lbl_8051C9F4@sda21(r2)
	fmuls    f26, f0, f0
	stfs     f5, 0x44(r1)
	fmuls    f1, f2, f1
	lfs      f3, lbl_8051C9C0@sda21(r2)
	lfs      f0, 0x190(r28)
	lfs      f2, lbl_8051C9D0@sda21(r2)
	fsubs    f29, f4, f3
	stfs     f0, 0x48(r1)
	fmuls    f28, f2, f1
	lfs      f0, 0x194(r28)
	stfs     f0, 0x4c(r1)
	stfs     f6, 0x50(r1)
	bl       __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
	li       r0, 1
	addi     r3, r1, 0x74
	stb      r0, 0x70(r1)
	addi     r4, r1, 0x54
	bl       __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
	addi     r3, r1, 0x74
	bl       first__Q24Game12CellIteratorFv
	b        lbl_802D53E0

lbl_802D5214:
	addi     r3, r1, 0x74
	bl       __ml__Q24Game12CellIteratorFv
	lwz      r12, 0(r3)
	mr       r30, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802D53D8
	lwz      r0, 0xf4(r30)
	cmplw    r0, r28
	beq      lbl_802D53D8
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	mr       r29, r3
	bne      lbl_802D52A0
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802D52A0
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802D52A0
	li       r29, 1

lbl_802D52A0:
	clrlwi.  r0, r29, 0x18
	beq      lbl_802D53D8
	mr       r4, r30
	addi     r3, r1, 0x38
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x3c(r1)
	lfs      f2, 0x38(r1)
	fcmpo    cr0, f0, f29
	lfs      f3, 0x40(r1)
	ble      lbl_802D53D8
	fcmpo    cr0, f0, f30
	bge      lbl_802D53D8
	lfs      f0, 0x194(r28)
	lfs      f1, 0x18c(r28)
	fsubs    f0, f0, f3
	fsubs    f1, f1, f2
	fmuls    f0, f0, f0
	fmadds   f31, f1, f1, f0
	fcmpo    cr0, f31, f26
	bge      lbl_802D5304
	mr       r3, r30
	b        lbl_802D53F4

lbl_802D5304:
	fcmpo    cr0, f31, f27
	bge      lbl_802D53D8
	mr       r4, r30
	addi     r3, r1, 0x20
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	lfs      f2, 0x20(r1)
	lwz      r12, 0(r28)
	addi     r3, r1, 0x2c
	lfs      f1, 0x24(r1)
	lfs      f0, 0x28(r1)
	lwz      r12, 8(r12)
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x2c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x34(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 8(r1)
	lfs      f0, 0x10(r1)
	lfs      f4, 0x30(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x14(r1)
	stfs     f4, 0x18(r1)
	stfs     f3, 0x1c(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r28)
	fmr      f25, f1
	mr       r3, r28
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f25
	bl       angDist__Fff
	lfs      f0, lbl_8051C9A0@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802D53C0
	b        lbl_802D53C4

lbl_802D53C0:
	fneg     f1, f1

lbl_802D53C4:
	fcmpo    cr0, f1, f28
	cror     2, 0, 2
	bne      lbl_802D53D8
	mr       r31, r30
	fmr      f27, f31

lbl_802D53D8:
	addi     r3, r1, 0x74
	bl       next__Q24Game12CellIteratorFv

lbl_802D53E0:
	addi     r3, r1, 0x74
	bl       isDone__Q24Game12CellIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802D5214

lbl_802D53F0:
	mr       r3, r31

lbl_802D53F4:
	psq_l    f31, 312(r1), 0, qr0
	lfd      f31, 0x130(r1)
	psq_l    f30, 296(r1), 0, qr0
	lfd      f30, 0x120(r1)
	psq_l    f29, 280(r1), 0, qr0
	lfd      f29, 0x110(r1)
	psq_l    f28, 264(r1), 0, qr0
	lfd      f28, 0x100(r1)
	psq_l    f27, 248(r1), 0, qr0
	lfd      f27, 0xf0(r1)
	psq_l    f26, 232(r1), 0, qr0
	lfd      f26, 0xe0(r1)
	psq_l    f25, 216(r1), 0, qr0
	lfd      f25, 0xd0(r1)
	lwz      r31, 0xcc(r1)
	lwz      r30, 0xc8(r1)
	lwz      r29, 0xc4(r1)
	lwz      r0, 0x144(r1)
	lwz      r28, 0xc0(r1)
	mtlr     r0
	addi     r1, r1, 0x140
	blr
	*/
}

/**
 * @note Address: 0x802D544C
 * @note Size: 0x238
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
		Sys::Sphere sphere(mPosition, C_GENERALPARMS.mMaxAttackRange());
		CellIteratorArg iterArg(sphere);
		iterArg.mOptimise = true;
		CellIterator iter(iterArg);

		CI_LOOP(iter)
		{
			Creature* creature = (Creature*)*iter;
			if (creature->isAlive() && creature->mSticker != this) {
				bool isValidTarget = creature->isNavi();
				if (!isValidTarget && creature->isPiki() && static_cast<Piki*>(creature)->isPikmin()) {
					isValidTarget = true;
				}
				if (isValidTarget) {
					Vector3f pikiPos = creature->getPosition();
					if (pikiPos.y > minY && pikiPos.y < currY && sqrDistanceXZ(mPosition, pikiPos) < maxRange) {
						return true;
					}
				}
			}
		}
	}

	return false;
}

/**
 * @note Address: 0x802D5684
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
 * @note Address: 0x802D5AB8
 * @note Size: 0x570
 */
bool Obj::suckNavi(f32 offset)
{
	f32 currY    = mPosition.y;
	f32 minY     = currY - offset - 50.0f;
	f32 maxRange = SQUARE(C_GENERALPARMS.mAttackRadius());

	CollPart* part   = mCollTree->getCollPart('suck');
	Vector3f partPos = part->mPosition;

	Iterator<Navi> iter(naviMgr);
	CI_LOOP(iter)
	{
		Navi* currNavi = *iter;
		if (currNavi->isAlive() && currNavi->mSticker != this) {
			Vector3f naviPos = currNavi->getPosition();
			if (naviPos.y > minY && naviPos.y < currY && sqrDistanceXZ(mPosition, naviPos) < maxRange) {
				for (int i = 0; i < mMouthSlots.getMax(); i++) {
					MouthCollPart* slot = mMouthSlots.getSlot(i);
					if (!slot->mStuckCreature) {
						Matrixf* worldMat = mModel->getJoint("Proom")->getWorldMatrix();
						Vector3f xVec     = worldMat->getColumn(0);
						Vector3f yVec     = worldMat->getColumn(1);
						Vector3f zVec     = worldMat->getColumn(2);

						xVec.normalise();
						yVec.normalise();
						zVec.normalise();

						Vector3f sep = naviPos - partPos;
						InteractSarai suck(this, 100.0f, nullptr);
						slot->mOffset = Vector3f(xVec.dot(sep), yVec.dot(sep), zVec.dot(sep));

						if (currNavi->stimulate(suck)) {
							mSuckedNavis[i] = currNavi;
							break;
						} else {
							break;
						}
					}
				}
			}
		}
	}

	if (mSuckedNavis[0] || mSuckedNavis[1]) {
		return true;
	}

	return false;
	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stfd     f31, 0xd0(r1)
	psq_st   f31, 216(r1), 0, qr0
	stfd     f30, 0xc0(r1)
	psq_st   f30, 200(r1), 0, qr0
	stfd     f29, 0xb0(r1)
	psq_st   f29, 184(r1), 0, qr0
	stfd     f28, 0xa0(r1)
	psq_st   f28, 168(r1), 0, qr0
	stfd     f27, 0x90(r1)
	psq_st   f27, 152(r1), 0, qr0
	stfd     f26, 0x80(r1)
	psq_st   f26, 136(r1), 0, qr0
	stfd     f25, 0x70(r1)
	psq_st   f25, 120(r1), 0, qr0
	stfd     f24, 0x60(r1)
	psq_st   f24, 104(r1), 0, qr0
	stfd     f23, 0x50(r1)
	psq_st   f23, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	stw      r29, 0x44(r1)
	stw      r28, 0x40(r1)
	mr       r30, r3
	lis      r3, 0x7375636B@ha
	lfs      f31, 0x190(r30)
	addi     r4, r3, 0x7375636B@l
	lwz      r3, 0xc0(r30)
	fsubs    f2, f31, f1
	lfs      f1, lbl_8051C9C0@sda21(r2)
	lfs      f0, 0x5b4(r3)
	lwz      r3, 0x114(r30)
	fsubs    f30, f2, f1
	fmuls    f29, f0, f0
	bl       getCollPart__8CollTreeFUl
	lis      r4, "__vt__22Iterator<Q24Game4Navi>"@ha
	li       r0, 0
	lfs      f28, 0x4c(r3)
	cmplwi   r0, 0
	lfs      f27, 0x50(r3)
	addi     r4, r4, "__vt__22Iterator<Q24Game4Navi>"@l
	lfs      f26, 0x54(r3)
	lwz      r3, naviMgr__4Game@sda21(r13)
	stw      r4, 0x14(r1)
	stw      r0, 0x20(r1)
	stw      r0, 0x18(r1)
	stw      r3, 0x1c(r1)
	bne      lbl_802D5B98
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_802D5F7C

lbl_802D5B98:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_802D5C04

lbl_802D5BB0:
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802D5F7C
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)

lbl_802D5C04:
	lwz      r12, 0x14(r1)
	addi     r3, r1, 0x14
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802D5BB0
	b        lbl_802D5F7C

lbl_802D5C24:
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r31, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802D5EC0
	lwz      r0, 0xf4(r31)
	cmplw    r0, r30
	beq      lbl_802D5EC0
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f24, 0xc(r1)
	lfs      f25, 8(r1)
	fcmpo    cr0, f24, f30
	lfs      f23, 0x10(r1)
	ble      lbl_802D5EC0
	fcmpo    cr0, f24, f31
	bge      lbl_802D5EC0
	lfs      f0, 0x194(r30)
	lfs      f1, 0x18c(r30)
	fsubs    f0, f0, f23
	fsubs    f1, f1, f25
	fmuls    f0, f0, f0
	fmadds   f0, f1, f1, f0
	fcmpo    cr0, f0, f29
	bge      lbl_802D5EC0
	li       r28, 0
	b        lbl_802D5EB4

lbl_802D5CBC:
	mr       r4, r28
	addi     r3, r30, 0x2e4
	bl       getSlot__10MouthSlotsFi
	mr       r29, r3
	lwz      r0, 0x64(r3)
	cmplwi   r0, 0
	bne      lbl_802D5EB0
	lwz      r3, 0x174(r30)
	addi     r4, r2, lbl_8051C9C4@sda21
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f1, 0x10(r3)
	lfs      f2, 0x20(r3)
	fmuls    f4, f1, f1
	lfs      f0, 0(r3)
	fmuls    f7, f2, f2
	lfs      f9, lbl_8051C9A0@sda21(r2)
	lfs      f3, 4(r3)
	fmadds   f6, f0, f0, f4
	lfs      f4, 0x14(r3)
	lfs      f5, 0x24(r3)
	fadds    f10, f7, f6
	lfs      f6, 8(r3)
	lfs      f7, 0x18(r3)
	lfs      f8, 0x28(r3)
	fcmpo    cr0, f10, f9
	ble      lbl_802D5D38
	ble      lbl_802D5D3C
	frsqrte  f9, f10
	fmuls    f10, f9, f10
	b        lbl_802D5D3C

lbl_802D5D38:
	fmr      f10, f9

lbl_802D5D3C:
	lfs      f9, lbl_8051C9A0@sda21(r2)
	fcmpo    cr0, f10, f9
	ble      lbl_802D5D5C
	lfs      f9, lbl_8051C9B8@sda21(r2)
	fdivs    f9, f9, f10
	fmuls    f0, f0, f9
	fmuls    f1, f1, f9
	fmuls    f2, f2, f9

lbl_802D5D5C:
	fmuls    f10, f4, f4
	lfs      f9, lbl_8051C9A0@sda21(r2)
	fmuls    f11, f5, f5
	fmadds   f10, f3, f3, f10
	fadds    f10, f11, f10
	fcmpo    cr0, f10, f9
	ble      lbl_802D5D88
	ble      lbl_802D5D8C
	frsqrte  f9, f10
	fmuls    f10, f9, f10
	b        lbl_802D5D8C

lbl_802D5D88:
	fmr      f10, f9

lbl_802D5D8C:
	lfs      f9, lbl_8051C9A0@sda21(r2)
	fcmpo    cr0, f10, f9
	ble      lbl_802D5DAC
	lfs      f9, lbl_8051C9B8@sda21(r2)
	fdivs    f9, f9, f10
	fmuls    f3, f3, f9
	fmuls    f4, f4, f9
	fmuls    f5, f5, f9

lbl_802D5DAC:
	fmuls    f10, f7, f7
	lfs      f9, lbl_8051C9A0@sda21(r2)
	fmuls    f11, f8, f8
	fmadds   f10, f6, f6, f10
	fadds    f10, f11, f10
	fcmpo    cr0, f10, f9
	ble      lbl_802D5DD8
	ble      lbl_802D5DDC
	frsqrte  f9, f10
	fmuls    f10, f9, f10
	b        lbl_802D5DDC

lbl_802D5DD8:
	fmr      f10, f9

lbl_802D5DDC:
	lfs      f9, lbl_8051C9A0@sda21(r2)
	fcmpo    cr0, f10, f9
	ble      lbl_802D5DFC
	lfs      f9, lbl_8051C9B8@sda21(r2)
	fdivs    f9, f9, f10
	fmuls    f6, f6, f9
	fmuls    f7, f7, f9
	fmuls    f8, f8, f9

lbl_802D5DFC:
	fsubs    f11, f24, f27
	lis      r6, __vt__Q24Game11Interaction@ha
	lis      r5, __vt__Q24Game14InteractAttack@ha
	lis      r4, __vt__Q24Game15InteractSwallow@ha
	lis      r3, __vt__Q24Game13InteractSarai@ha
	fsubs    f10, f25, f28
	fmuls    f1, f1, f11
	addi     r8, r6, __vt__Q24Game11Interaction@l
	fmuls    f4, f4, f11
	addi     r7, r5, __vt__Q24Game14InteractAttack@l
	fsubs    f12, f23, f26
	addi     r6, r4, __vt__Q24Game15InteractSwallow@l
	fmadds   f9, f0, f10, f1
	lfs      f0, lbl_8051C9B8@sda21(r2)
	fmuls    f1, f7, f11
	addi     r0, r3, __vt__Q24Game13InteractSarai@l
	fmadds   f3, f3, f10, f4
	li       r5, 0
	fmadds   f4, f2, f12, f9
	mr       r3, r31
	fmadds   f1, f6, f10, f1
	addi     r4, r1, 0x24
	fmadds   f2, f5, f12, f3
	stfs     f4, 0x20(r29)
	fmadds   f1, f8, f12, f1
	stfs     f2, 0x24(r29)
	stfs     f1, 0x28(r29)
	stw      r8, 0x24(r1)
	stw      r7, 0x24(r1)
	stw      r6, 0x24(r1)
	stw      r30, 0x28(r1)
	stfs     f0, 0x2c(r1)
	stw      r29, 0x30(r1)
	stw      r5, 0x34(r1)
	stw      r0, 0x24(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802D5EC0
	slwi     r3, r28, 2
	addi     r0, r3, 0x2ec
	stwx     r31, r30, r0
	b        lbl_802D5EC0

lbl_802D5EB0:
	addi     r28, r28, 1

lbl_802D5EB4:
	lwz      r0, 0x2e4(r30)
	cmpw     r28, r0
	blt      lbl_802D5CBC

lbl_802D5EC0:
	lwz      r0, 0x20(r1)
	cmplwi   r0, 0
	bne      lbl_802D5EEC
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_802D5F7C

lbl_802D5EEC:
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_802D5F60

lbl_802D5F0C:
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802D5F7C
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)

lbl_802D5F60:
	lwz      r12, 0x14(r1)
	addi     r3, r1, 0x14
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802D5F0C

lbl_802D5F7C:
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x18(r1)
	cmplw    r4, r3
	bne      lbl_802D5C24
	lwz      r0, 0x2ec(r30)
	cmplwi   r0, 0
	bne      lbl_802D5FB4
	lwz      r0, 0x2f0(r30)
	cmplwi   r0, 0
	beq      lbl_802D5FBC

lbl_802D5FB4:
	li       r3, 1
	b        lbl_802D5FC0

lbl_802D5FBC:
	li       r3, 0

lbl_802D5FC0:
	psq_l    f31, 216(r1), 0, qr0
	lfd      f31, 0xd0(r1)
	psq_l    f30, 200(r1), 0, qr0
	lfd      f30, 0xc0(r1)
	psq_l    f29, 184(r1), 0, qr0
	lfd      f29, 0xb0(r1)
	psq_l    f28, 168(r1), 0, qr0
	lfd      f28, 0xa0(r1)
	psq_l    f27, 152(r1), 0, qr0
	lfd      f27, 0x90(r1)
	psq_l    f26, 136(r1), 0, qr0
	lfd      f26, 0x80(r1)
	psq_l    f25, 120(r1), 0, qr0
	lfd      f25, 0x70(r1)
	psq_l    f24, 104(r1), 0, qr0
	lfd      f24, 0x60(r1)
	psq_l    f23, 88(r1), 0, qr0
	lfd      f23, 0x50(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	lwz      r29, 0x44(r1)
	lwz      r0, 0xe4(r1)
	lwz      r28, 0x40(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/**
 * @note Address: 0x802D6028
 * @note Size: 0x26C
 */
void Obj::updateCollPartOffset()
{
	for (int i = 0; i < mMouthSlots.getMax(); i++) {
		MouthCollPart* slot = mMouthSlots.getSlot(i);
		if (slot->mStuckCreature) {
			if (absVal(slot->mOffset.x - cDefaultKamuJointOffset[i]) > 1.0f || absVal(20.0f + slot->mOffset.y) > 1.0f
			    || absVal(slot->mOffset.z) > 1.0f) {
				slot->mOffset.x = slot->mOffset.x * 0.8f + (0.2f * cDefaultKamuJointOffset[i]); // probably a weighted setting inline

				f32 yDiff = absVal(slot->mOffset.y - -20.0f);
				f32 yOffset;
				if (yDiff < 7.5f) { // probably an inline
					yOffset = -20.0f;
				} else if (slot->mOffset.y < -20.0f) {
					yOffset = 7.5f + slot->mOffset.y;
				} else {
					yOffset = slot->mOffset.y - 7.5f;
				}

				slot->mOffset.y = yOffset;

				slot->mOffset.z *= 0.8f;

				if (absVal(slot->mOffset.x - cDefaultKamuJointOffset[i]) < 1.0f && absVal(20.0f + slot->mOffset.y) < 1.0f
				    && absVal(slot->mOffset.z) < 1.0f) {

					if (mSuckedNavis[i]) {
						mSuckedNavis[i]->mSoundObj->startSound(PSSE_EN_ONIKURAGE_GET_ORIMA, 0);
					}
					Vector3f pos = getPosition();
					cameraMgr->startVibration(VIBTYPE_LightSlowLong, pos, CAMNAVI_Both);
					rumbleMgr->startRumble(RUMBLETYPE_Fixed10, pos, RUMBLEID_Both);
				}
			}
		}
	}
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	addi     r31, r2,
"cDefaultKamuJointOffset__Q34Game9OniKurage23@unnamed@OniKurage_cpp@"@sda21 stw
r30, 0x28(r1) stw      r29, 0x24(r1) li       r29, 0 stw      r28, 0x20(r1) mr
r28, r3 mr       r30, r28 b        lbl_802D6268

lbl_802D6058:
	mr       r4, r29
	addi     r3, r28, 0x2e4
	bl       getSlot__10MouthSlotsFi
	lwz      r0, 0x64(r3)
	cmplwi   r0, 0
	beq      lbl_802D625C
	lfs      f5, 0x20(r3)
	lfs      f4, 0(r31)
	lfs      f0, lbl_8051C9A0@sda21(r2)
	fsubs    f1, f5, f4
	fcmpo    cr0, f1, f0
	ble      lbl_802D608C
	b        lbl_802D6090

lbl_802D608C:
	fneg     f1, f1

lbl_802D6090:
	lfs      f0, lbl_8051C9B8@sda21(r2)
	fcmpo    cr0, f1, f0
	bgt      lbl_802D60EC
	lfs      f2, lbl_8051C9EC@sda21(r2)
	lfs      f1, 0x24(r3)
	lfs      f0, lbl_8051C9A0@sda21(r2)
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_802D60B8
	b        lbl_802D60BC

lbl_802D60B8:
	fneg     f1, f1

lbl_802D60BC:
	lfs      f0, lbl_8051C9B8@sda21(r2)
	fcmpo    cr0, f1, f0
	bgt      lbl_802D60EC
	lfs      f1, 0x28(r3)
	lfs      f0, lbl_8051C9A0@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802D60DC
	b        lbl_802D60E0

lbl_802D60DC:
	fneg     f1, f1

lbl_802D60E0:
	lfs      f0, lbl_8051C9B8@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802D625C

lbl_802D60EC:
	lfs      f0, lbl_8051C9FC@sda21(r2)
	lfs      f3, lbl_8051C9F8@sda21(r2)
	fmuls    f2, f0, f4
	lfs      f1, lbl_8051CA00@sda21(r2)
	lfs      f0, lbl_8051C9A0@sda21(r2)
	fmadds   f2, f5, f3, f2
	stfs     f2, 0x20(r3)
	lfs      f3, 0x24(r3)
	fsubs    f2, f3, f1
	fcmpo    cr0, f2, f0
	ble      lbl_802D611C
	b        lbl_802D6120

lbl_802D611C:
	fneg     f2, f2

lbl_802D6120:
	lfs      f1, lbl_8051CA04@sda21(r2)
	fcmpo    cr0, f2, f1
	bge      lbl_802D6134
	lfs      f0, lbl_8051CA00@sda21(r2)
	b        lbl_802D614C

lbl_802D6134:
	lfs      f0, lbl_8051CA00@sda21(r2)
	fcmpo    cr0, f3, f0
	bge      lbl_802D6148
	fadds    f0, f3, f1
	b        lbl_802D614C

lbl_802D6148:
	fsubs    f0, f3, f1

lbl_802D614C:
	stfs     f0, 0x24(r3)
	lfs      f0, lbl_8051C9F8@sda21(r2)
	lfs      f2, 0x28(r3)
	lfs      f1, 0(r31)
	fmuls    f2, f2, f0
	lfs      f0, lbl_8051C9A0@sda21(r2)
	stfs     f2, 0x28(r3)
	lfs      f2, 0x20(r3)
	fsubs    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_802D617C
	b        lbl_802D6180

lbl_802D617C:
	fneg     f1, f1

lbl_802D6180:
	lfs      f0, lbl_8051C9B8@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_802D625C
	lfs      f2, lbl_8051C9EC@sda21(r2)
	lfs      f1, 0x24(r3)
	lfs      f0, lbl_8051C9A0@sda21(r2)
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_802D61A8
	b        lbl_802D61AC

lbl_802D61A8:
	fneg     f1, f1

lbl_802D61AC:
	lfs      f0, lbl_8051C9B8@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_802D625C
	lfs      f1, 0x28(r3)
	lfs      f0, lbl_8051C9A0@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802D61CC
	b        lbl_802D61D0

lbl_802D61CC:
	fneg     f1, f1

lbl_802D61D0:
	lfs      f0, lbl_8051C9B8@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_802D625C
	lwz      r3, 0x2ec(r30)
	cmplwi   r3, 0
	beq      lbl_802D6204
	lwz      r3, 0x26c(r3)
	li       r4, 0x815
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl

lbl_802D6204:
	mr       r4, r28
	addi     r3, r1, 8
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	addi     r5, r1, 0x14
	lfs      f1, 0xc(r1)
	li       r4, 2
	lfs      f0, 0x10(r1)
	li       r6, 2
	stfs     f2, 0x14(r1)
	lwz      r3, cameraMgr__4Game@sda21(r13)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	bl       "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	addi     r5, r1, 0x14
	li       r4, 0xa
	li       r6, 2
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"

lbl_802D625C:
	addi     r31, r31, 4
	addi     r30, r30, 4
	addi     r29, r29, 1

lbl_802D6268:
	lwz      r0, 0x2e4(r28)
	cmpw     r29, r0
	blt      lbl_802D6058
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/**
 * @note Address: 0x802D6294
 * @note Size: 0x100
 */
bool Obj::isFinishNaviSuck()
{
	bool result = true;
	for (int i = 0; i < mMouthSlots.getMax(); i++) {
		MouthCollPart* slot = mMouthSlots.getSlot(i);
		if (slot->mStuckCreature) {
			if (absVal(slot->mOffset.x - cDefaultKamuJointOffset[i]) > 1.0f || absVal(20.0f + slot->mOffset.y) > 1.0f
			    || absVal(slot->mOffset.z) > 1.0f) {
				result = false;
			}
		}
	}

	return result;
}

/**
 * @note Address: 0x802D6394
 * @note Size: 0x28
 */
bool Obj::isNaviSucked()
{
	if (mSuckedNavis[0] || mSuckedNavis[1]) {
		return true;
	}

	return false;
}

/**
 * @note Address: 0x802D63BC
 * @note Size: 0x29C
 */
void Obj::flickStickNavi(bool check)
{
	for (int i = 0; i < mMouthSlots.getMax(); i++) {
		MouthCollPart* slot = mMouthSlots.getSlot(i);
		if (slot->mStuckCreature) {
			f32 offset = cFlickKamuJointOffset[i];
			f32 val    = -50.0f;
			if (check) {
				offset = cDefaultKamuJointOffset[i];
				val    = -75.0f;
			}

			// rough scaffold, values are probably incorrect
			f32 xOffset;
			if (slot->mOffset.x < -20.0f) {
				xOffset = 7.5f + slot->mOffset.x;
			} else {
				xOffset = slot->mOffset.x - 7.5f;
			}
			slot->mOffset.x = xOffset;

			f32 yOffset;
			if (slot->mOffset.y < -20.0f) {
				yOffset = 7.5f + slot->mOffset.y;
			} else {
				yOffset = slot->mOffset.y - 7.5f;
			}

			slot->mOffset.y = yOffset;

			if (absVal(slot->mOffset.x - offset) < 1.0f && absVal(slot->mOffset.y - val) < 1.0f) {
				Creature* navi = slot->mStuckCreature;
				if (navi) {
					InteractFlick flick(this, 0.0f, 0.0f, FLICK_BACKWARD_ANGLE);
					navi->stimulate(flick);

					Vector3f naviPos = navi->getPosition();
					Vector3f sep     = naviPos - mPosition;
					sep.y            = 0.0f;

					sep.normalise();
					sep *= 50.0f;
					InteractBomb bomb(this, C_GENERALPARMS.mAttackDamage.mValue, &sep);
					navi->stimulate(bomb);
				}
			}
		}
	}
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stmw     r26, 0x48(r1)
	mr       r27, r3
	mr       r28, r4
	li       r29, 0
	addi     r31, r2,
"cFlickKamuJointOffset__Q34Game9OniKurage23@unnamed@OniKurage_cpp@"@sda21 addi
r30, r2,
"cDefaultKamuJointOffset__Q34Game9OniKurage23@unnamed@OniKurage_cpp@"@sda21 b
lbl_802D6638

lbl_802D63E4:
	mr       r4, r29
	addi     r3, r27, 0x2e4
	bl       getSlot__10MouthSlotsFi
	lwz      r0, 0x64(r3)
	cmplwi   r0, 0
	beq      lbl_802D662C
	clrlwi.  r0, r28, 0x18
	lfs      f3, 0(r31)
	lfs      f4, lbl_8051CA08@sda21(r2)
	beq      lbl_802D6414
	lfs      f3, 0(r30)
	lfs      f4, lbl_8051CA0C@sda21(r2)

lbl_802D6414:
	lfs      f1, 0x20(r3)
	lfs      f0, lbl_8051C9A0@sda21(r2)
	fsubs    f2, f1, f3
	fcmpo    cr0, f2, f0
	ble      lbl_802D642C
	b        lbl_802D6430

lbl_802D642C:
	fneg     f2, f2

lbl_802D6430:
	lfs      f0, lbl_8051C9B8@sda21(r2)
	fcmpo    cr0, f2, f0
	bge      lbl_802D6444
	fmr      f0, f3
	b        lbl_802D6458

lbl_802D6444:
	fcmpo    cr0, f1, f3
	bge      lbl_802D6454
	fadds    f0, f1, f0
	b        lbl_802D6458

lbl_802D6454:
	fsubs    f0, f1, f0

lbl_802D6458:
	stfs     f0, 0x20(r3)
	lfs      f0, lbl_8051C9A0@sda21(r2)
	lfs      f1, 0x24(r3)
	fsubs    f2, f1, f4
	fcmpo    cr0, f2, f0
	ble      lbl_802D6474
	b        lbl_802D6478

lbl_802D6474:
	fneg     f2, f2

lbl_802D6478:
	lfs      f0, lbl_8051CA10@sda21(r2)
	fcmpo    cr0, f2, f0
	bge      lbl_802D648C
	fmr      f0, f4
	b        lbl_802D64A0

lbl_802D648C:
	fcmpo    cr0, f1, f4
	bge      lbl_802D649C
	fadds    f0, f1, f0
	b        lbl_802D64A0

lbl_802D649C:
	fsubs    f0, f1, f0

lbl_802D64A0:
	stfs     f0, 0x24(r3)
	lfs      f0, lbl_8051C9A0@sda21(r2)
	lfs      f1, 0x20(r3)
	fsubs    f1, f1, f3
	fcmpo    cr0, f1, f0
	ble      lbl_802D64BC
	b        lbl_802D64C0

lbl_802D64BC:
	fneg     f1, f1

lbl_802D64C0:
	lfs      f0, lbl_8051C9B8@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_802D662C
	lfs      f1, 0x24(r3)
	lfs      f0, lbl_8051C9A0@sda21(r2)
	fsubs    f1, f1, f4
	fcmpo    cr0, f1, f0
	ble      lbl_802D64E4
	b        lbl_802D64E8

lbl_802D64E4:
	fneg     f1, f1

lbl_802D64E8:
	lfs      f0, lbl_8051C9B8@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_802D662C
	lwz      r26, 0x64(r3)
	cmplwi   r26, 0
	beq      lbl_802D662C
	lis      r3, __vt__Q24Game11Interaction@ha
	lfs      f1, lbl_8051C9A0@sda21(r2)
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lfs      f0, lbl_8051CA14@sda21(r2)
	lis      r3, __vt__Q24Game13InteractFlick@ha
	stw      r0, 0x2c(r1)
	addi     r0, r3, __vt__Q24Game13InteractFlick@l
	mr       r3, r26
	stw      r27, 0x30(r1)
	addi     r4, r1, 0x2c
	stw      r0, 0x2c(r1)
	stfs     f1, 0x34(r1)
	stfs     f1, 0x38(r1)
	stfs     f0, 0x3c(r1)
	lwz      r12, 0(r26)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	mr       r4, r26
	addi     r3, r1, 8
	lwz      r12, 0(r26)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x10(r1)
	lfs      f0, 0x194(r27)
	lfs      f1, 8(r1)
	fsubs    f4, f2, f0
	lfs      f0, 0x18c(r27)
	lfs      f3, lbl_8051C9A0@sda21(r2)
	fsubs    f2, f1, f0
	fmuls    f1, f4, f4
	fmadds   f0, f2, f2, f3
	fadds    f1, f1, f0
	fcmpo    cr0, f1, f3
	ble      lbl_802D65A0
	ble      lbl_802D65A4
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_802D65A4

lbl_802D65A0:
	fmr      f1, f3

lbl_802D65A4:
	lfs      f0, lbl_8051C9A0@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802D65C4
	lfs      f0, lbl_8051C9B8@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f2, f2, f0
	fmuls    f3, f3, f0
	fmuls    f4, f4, f0

lbl_802D65C4:
	lwz      r5, 0xc0(r27)
	lis      r3, __vt__Q24Game11Interaction@ha
	lfs      f0, lbl_8051C9C0@sda21(r2)
	lis      r4, __vt__Q24Game12InteractWind@ha
	lfs      f1, 0x604(r5)
	addi     r0, r3, __vt__Q24Game11Interaction@l
	fmuls    f2, f2, f0
	lis      r3, __vt__Q24Game12InteractBomb@ha
	stw      r0, 0x14(r1)
	fmuls    f3, f3, f0
	fmuls    f4, f4, f0
	addi     r0, r4, __vt__Q24Game12InteractWind@l
	stw      r0, 0x14(r1)
	addi     r0, r3, __vt__Q24Game12InteractBomb@l
	mr       r3, r26
	addi     r4, r1, 0x14
	stw      r27, 0x18(r1)
	stfs     f1, 0x1c(r1)
	stfs     f2, 0x20(r1)
	stfs     f3, 0x24(r1)
	stfs     f4, 0x28(r1)
	stw      r0, 0x14(r1)
	lwz      r12, 0(r26)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_802D662C:
	addi     r31, r31, 4
	addi     r30, r30, 4
	addi     r29, r29, 1

lbl_802D6638:
	lwz      r0, 0x2e4(r27)
	cmpw     r29, r0
	blt      lbl_802D63E4
	lmw      r26, 0x48(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/**
 * @note Address: 0x802D6658
 * @note Size: 0x130
 */
void Obj::escapeCheckNavi()
{
	for (int i = 0; i < mMouthSlots.getMax(); i++) {
		MouthCollPart* slot = mMouthSlots.getSlot(i);
		if (slot->mStuckCreature) {
			if (!mSuckedNavis[i]) {
				mSuckedNavis[i] = static_cast<Navi*>(slot->mStuckCreature);
			}
		} else if (mSuckedNavis[i]) {
			if (isEvent(0, EB_Bittered)) {
				mHealth = 0.0f;
			} else {
				createFlickNaviEffect();
				Vector3f pos = getPosition();
				cameraMgr->startVibration(VIBTYPE_LightSlowShort, pos, CAMNAVI_Both);
				rumbleMgr->startRumble(RUMBLETYPE_Fixed10, pos, RUMBLEID_Both);
				mSuckedNavis[i]->mSoundObj->startSound(PSSE_EN_ONIKURAGE_VOMIT, 0);
			}
			mSuckedNavis[i] = nullptr;
		}
	}
}

/**
 * @note Address: 0x802D6788
 * @note Size: 0x340
 */
void Obj::createEffect()
{
	mEfxEyeL    = new efx::TKurageEye();
	mEfxEyeR    = new efx::TKurageEye();
	mEfxHire    = new efx::TKurageHire();
	mEfxKira    = new efx::TKurageKira(&mPosition);
	mEfxSui     = new efx::TKurageSui();
	mEfxGepu    = new efx::TKurageGepu(&mPosition);
	mEfxDeadrun = new efx::TKurageDeadrun();
}

/**
 * @note Address: 0x802D6AC8
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
 * @note Address: 0x802D6B54
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
 * @note Address: 0x802D6BDC
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
 * @note Address: 0x802D6C58
 * @note Size: 0x24
 */
void Obj::setHireEffectLife(s16 lifeTime) { mEfxHire->setLifeTime(lifeTime); }

/**
 * @note Address: 0x802D6C7C
 * @note Size: 0x50
 */
void Obj::finishHireEffect()
{
	mEfxHire->fade();
	mEfxDeadrun->fade();
}

/**
 * @note Address: 0x802D6CCC
 * @note Size: 0x58
 */
void Obj::startSuckEffect(Vector3f& pos)
{
	efx::Arg fxArg(pos);
	mEfxSui->create(&fxArg);
}

/**
 * @note Address: 0x802D6D24
 * @note Size: 0x24
 */
void Obj::updateSuckEffect(Vector3f& pos) { mEfxSui->setGlobalTranslation(pos); }

/**
 * @note Address: 0x802D6D48
 * @note Size: 0x30
 */
void Obj::finishSuckEffect() { mEfxSui->fade(); }

/**
 * @note Address: 0x802D6D78
 * @note Size: 0x34
 */
void Obj::createFlickNaviEffect() { mEfxGepu->create(nullptr); }

/**
 * @note Address: 0x802D6DAC
 * @note Size: 0x9C
 */
void Obj::createBodyBombEffect()
{
	Matrixf* worldMat = mModel->getJoint("center")->getWorldMatrix();
	Vector3f pos;
	worldMat->getTranslation(pos);

	efx::TKurageBomb bombFX;
	efx::Arg fxArg(pos);
	bombFX.create(&fxArg);
}

/**
 * @note Address: 0x802D6E48
 * @note Size: 0x44
 */
void Obj::createDownEffect() { createBounceEffect(mPosition, getDownSmokeScale()); }

/**
 * @note Address: 0x802D6E94
 * @note Size: 0xB4
 */
void Obj::effectDrawOn()
{
	mEfxEyeL->endDemoDrawOn();
	mEfxEyeR->endDemoDrawOn();
	mEfxHire->endDemoDrawOn();
	mEfxKira->endDemoDrawOn();
	mEfxSui->endDemoDrawOn();
	mEfxGepu->endDemoDrawOn();
	mEfxDeadrun->endDemoDrawOn();
}

/**
 * @note Address: 0x802D6F48
 * @note Size: 0xB4
 */
void Obj::effectDrawOff()
{
	mEfxEyeL->startDemoDrawOff();
	mEfxEyeR->startDemoDrawOff();
	mEfxHire->startDemoDrawOff();
	mEfxKira->startDemoDrawOff();
	mEfxSui->startDemoDrawOff();
	mEfxGepu->startDemoDrawOff();
	mEfxDeadrun->startDemoDrawOff();
}

} // namespace OniKurage
} // namespace Game
