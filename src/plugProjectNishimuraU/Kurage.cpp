#include "Game/Entities/Kurage.h"
#include "Game/MapMgr.h"
#include "Game/EnemyFunc.h"
#include "Game/PikiMgr.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Kurage {

/*
 * --INFO--
 * Address:	802AD6F0
 * Size:	000138
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator();
	setFSM(new FSM());
	createEffect();
}

/*
 * --INFO--
 * Address:	802AD828
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	802AD82C
 * Size:	0000A8
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	disableEvent(0, EB_ToLeaveCarcass);
	enableEvent(0, EB_IsFlying);
	disableEvent(0, EB_IsDeathEffectEnabled);
	mNextState  = KURAGE_NULL;
	mStateTimer = 0.0f;
	mFallTimer  = 0.0f;
	_2C8        = 3.5f;
	mSuckedPiki = 0;
	mIsSucking  = false;

	setupEffect();
	startEyeHireBodyEffect();

	mFsm->start(this, KURAGE_Wait, nullptr);
}

/*
 * --INFO--
 * Address:	802AD8D4
 * Size:	000054
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	finishEyeBodyEffect();
	finishHireEffect();
	finishSuckEffect();
	EnemyBase::onKill(killArg);
}

/*
 * --INFO--
 * Address:	802AD928
 * Size:	000100
 */
void Obj::doUpdate()
{
	mFsm->exec(this);
	updateFallTimer();

	if (isAlive() && isEvent(0, EB_IsCullable)) {
		if (isFlying()) {
			getJAIObject()->startSound(PSSE_EN_KURAGE_AIR, 0);
		}

		if (isEvent(0, EB_IsTakingDamage) && mDamageAnimTimer == 0.0f) {
			getJAIObject()->startSound(PSSE_EN_KURAGE_DAMAGE, 0);
		}
	}
}

/*
 * --INFO--
 * Address:	802ADA28
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	802ADA2C
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	802ADA4C
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
 * Address:	802ADA98
 * Size:	000118
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

/*
 * --INFO--
 * Address:	802ADBB0
 * Size:	000038
 */
bool Obj::damageCallBack(Creature* creature, f32 damage, CollPart* part)
{
	if (part) {
		addDamage(damage, 1.0f);
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	802ADBE8
 * Size:	000044
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	finishEyeBodyEffect();
	finishHireEffect();
	finishSuckEffect();
}

/*
 * --INFO--
 * Address:	802ADC2C
 * Size:	00007C
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

/*
 * --INFO--
 * Address:	802ADCA8
 * Size:	000034
 */
void Obj::doStartWaitingBirthTypeDrop()
{
	EnemyBase::doStartWaitingBirthTypeDrop();
	effectDrawOff();
}

/*
 * --INFO--
 * Address:	802ADCDC
 * Size:	000034
 */
void Obj::doFinishWaitingBirthTypeDrop()
{
	EnemyBase::doFinishWaitingBirthTypeDrop();
	effectDrawOn();
}

/*
 * --INFO--
 * Address:	802ADD10
 * Size:	000020
 */
void Obj::doStartMovie() { effectDrawOff(); }

/*
 * --INFO--
 * Address:	802ADD30
 * Size:	000020
 */
void Obj::doEndMovie() { effectDrawOn(); }

/*
 * --INFO--
 * Address:	802ADD50
 * Size:	000098
 */
f32 Obj::setHeightVelocity(f32 yOffset, f32 speedFactor)
{
	f32 minY = mapMgr->getMinY(mPosition);

	mCurrentVelocity.y
	    = (speedFactor + C_PROPERPARMS.mRiseFactor.mValue) * ((yOffset + C_PROPERPARMS.mFlightHeight.mValue + minY) - mPosition.y);

	return mPosition.y - minY;
}

/*
 * --INFO--
 * Address:	802ADDE8
 * Size:	0001D8
 */
void Obj::setRandTarget()
{
	f32 randRadius = randWeightFloat(C_PARMS->mGeneral.mTerritoryRadius.mValue - C_PARMS->mGeneral.mHomeRadius.mValue)
	               + C_PARMS->mGeneral.mHomeRadius.mValue;
	Vector3f pos     = getPosition();
	Vector3f homePos = mHomePosition;
	f32 ang          = JMAAtan2Radian(pos.x - homePos.x, pos.z - homePos.z);

	f32 theta = HALF_PI + (randWeightFloat(PI) + ang);

	mTargetPosition = Vector3f(randRadius * pikmin2_sinf(theta) + homePos.x, homePos.y, randRadius * pikmin2_cosf(theta) + homePos.z);
}

/*
 * --INFO--
 * Address:	802ADFC0
 * Size:	0000A4
 */
f32 Obj::getMovePitchOffset()
{
	_2C8 += sys->mDeltaTime * PI;

	if (_2C8 > TAU) {
		_2C8 -= TAU;
	}

	return 50.0f * pikmin2_sinf(_2C8);
}

/*
 * --INFO--
 * Address:	802AE064
 * Size:	0001A8
 */
f32 Obj::getAttackPitchOffset()
{
	f32 keyFrames[7] = { 0.0f, 30.0f, 65.0f, 80.0f, 95.0f, 108.0f, 120.0f };
	f32 offsets[7]   = { 0.0f, -20.0f, 15.0f, -30.0f, 0.0f, -25.0f, 0.0f };

	f32 currFrame = getMotionFrame();

	f32 attackOffset = 0.0f;

	for (int i = 0; i < 6; i++) {
		f32 lastKey = keyFrames[i];
		if (currFrame >= lastKey) {
			f32 nextKey = keyFrames[i + 1];
			if (currFrame < nextKey) {
				f32 factor   = (currFrame - lastKey) / (nextKey - lastKey);
				attackOffset = factor * offsets[i + 1] + (1.0f - factor) * offsets[i];
			}
		}
	}

	return attackOffset;
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	lis      r4, lbl_80489DC4@ha
	lis      r5, lbl_80489DA8@ha
	stw      r0, 0x64(r1)
	addi     r10, r4, lbl_80489DC4@l
	stmw     r27, 0x4c(r1)
	lwzu     r27, lbl_80489DA8@l(r5)
	lwz      r9, 0(r10)
	lwz      r28, 4(r5)
	lwz      r29, 8(r5)
	lwz      r30, 0xc(r5)
	lwz      r31, 0x10(r5)
	lwz      r12, 0x14(r5)
	lwz      r11, 0x18(r5)
	lwz      r8, 4(r10)
	lwz      r7, 8(r10)
	lwz      r6, 0xc(r10)
	lwz      r5, 0x10(r10)
	lwz      r4, 0x14(r10)
	lwz      r0, 0x18(r10)
	stw      r27, 0x24(r1)
	stw      r28, 0x28(r1)
	stw      r29, 0x2c(r1)
	stw      r30, 0x30(r1)
	stw      r31, 0x34(r1)
	stw      r12, 0x38(r1)
	stw      r11, 0x3c(r1)
	stw      r9, 8(r1)
	stw      r8, 0xc(r1)
	stw      r7, 0x10(r1)
	stw      r6, 0x14(r1)
	stw      r5, 0x18(r1)
	stw      r4, 0x1c(r1)
	stw      r0, 0x20(r1)
	bl       getMotionFrame__Q24Game9EnemyBaseFv
	addi     r5, r1, 0x24
	addi     r6, r1, 8
	li       r0, 2
	lfs      f0, lbl_8051C0C0@sda21(r2)
	mr       r4, r5
	mr       r3, r6
	lfs      f3, lbl_8051C0D8@sda21(r2)
	li       r7, 0
	mtctr    r0

lbl_802AE118:
	lfs      f2, 0(r5)
	addi     r0, r7, 1
	fcmpo    cr0, f1, f2
	cror     2, 1, 2
	bne      lbl_802AE15C
	slwi     r0, r0, 2
	lfsx     f4, r4, r0
	fcmpo    cr0, f1, f4
	bge      lbl_802AE15C
	fsubs    f5, f1, f2
	lfs      f0, 0(r6)
	fsubs    f2, f4, f2
	lfsx     f4, r3, r0
	fdivs    f5, f5, f2
	fsubs    f2, f3, f5
	fmuls    f0, f2, f0
	fmadds   f0, f5, f4, f0

lbl_802AE15C:
	lfs      f2, 4(r5)
	addi     r0, r7, 2
	fcmpo    cr0, f1, f2
	cror     2, 1, 2
	bne      lbl_802AE1A0
	slwi     r0, r0, 2
	lfsx     f4, r4, r0
	fcmpo    cr0, f1, f4
	bge      lbl_802AE1A0
	fsubs    f5, f1, f2
	lfs      f0, 4(r6)
	fsubs    f2, f4, f2
	lfsx     f4, r3, r0
	fdivs    f5, f5, f2
	fsubs    f2, f3, f5
	fmuls    f0, f2, f0
	fmadds   f0, f5, f4, f0

lbl_802AE1A0:
	lfs      f2, 8(r5)
	addi     r0, r7, 3
	fcmpo    cr0, f1, f2
	cror     2, 1, 2
	bne      lbl_802AE1E4
	slwi     r0, r0, 2
	lfsx     f4, r4, r0
	fcmpo    cr0, f1, f4
	bge      lbl_802AE1E4
	fsubs    f5, f1, f2
	lfs      f0, 8(r6)
	fsubs    f2, f4, f2
	lfsx     f4, r3, r0
	fdivs    f5, f5, f2
	fsubs    f2, f3, f5
	fmuls    f0, f2, f0
	fmadds   f0, f5, f4, f0

lbl_802AE1E4:
	addi     r5, r5, 0xc
	addi     r6, r6, 0xc
	addi     r7, r7, 3
	bdnz     lbl_802AE118
	lmw      r27, 0x4c(r1)
	fmr      f1, f0
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	802AE20C
 * Size:	0001A8
 */
f32 Obj::getFlickPitchOffset()
{
	f32 keyFrames[7] = { 0.0f, 10.0f, 15.0f, 20.0f, 30.0f, 40.0f, 60.0f };   // ??
	f32 offsets[7]   = { 0.0f, -50.0f, 50.0f, -50.0f, 20.0f, -20.0f, 0.0f }; // ??

	f32 currFrame = getMotionFrame();

	f32 flickOffset = 0.0f;

	for (int i = 0; i < 6; i++) {
		f32 lastKey = keyFrames[i];
		if (currFrame >= lastKey) {
			f32 nextKey = keyFrames[i + 1];
			if (currFrame < nextKey) {
				f32 factor  = (currFrame - lastKey) / (nextKey - lastKey);
				flickOffset = factor * offsets[i + 1] + (1.0f - factor) * offsets[i];
			}
		}
	}

	return flickOffset;
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	lis      r4, lbl_80489DFC@ha
	lis      r5, lbl_80489DE0@ha
	stw      r0, 0x64(r1)
	addi     r10, r4, lbl_80489DFC@l
	stmw     r27, 0x4c(r1)
	lwzu     r27, lbl_80489DE0@l(r5)
	lwz      r9, 0(r10)
	lwz      r28, 4(r5)
	lwz      r29, 8(r5)
	lwz      r30, 0xc(r5)
	lwz      r31, 0x10(r5)
	lwz      r12, 0x14(r5)
	lwz      r11, 0x18(r5)
	lwz      r8, 4(r10)
	lwz      r7, 8(r10)
	lwz      r6, 0xc(r10)
	lwz      r5, 0x10(r10)
	lwz      r4, 0x14(r10)
	lwz      r0, 0x18(r10)
	stw      r27, 0x24(r1)
	stw      r28, 0x28(r1)
	stw      r29, 0x2c(r1)
	stw      r30, 0x30(r1)
	stw      r31, 0x34(r1)
	stw      r12, 0x38(r1)
	stw      r11, 0x3c(r1)
	stw      r9, 8(r1)
	stw      r8, 0xc(r1)
	stw      r7, 0x10(r1)
	stw      r6, 0x14(r1)
	stw      r5, 0x18(r1)
	stw      r4, 0x1c(r1)
	stw      r0, 0x20(r1)
	bl       getMotionFrame__Q24Game9EnemyBaseFv
	addi     r5, r1, 0x24
	addi     r6, r1, 8
	li       r0, 2
	lfs      f0, lbl_8051C0C0@sda21(r2)
	mr       r4, r5
	mr       r3, r6
	lfs      f3, lbl_8051C0D8@sda21(r2)
	li       r7, 0
	mtctr    r0

lbl_802AE2C0:
	lfs      f2, 0(r5)
	addi     r0, r7, 1
	fcmpo    cr0, f1, f2
	cror     2, 1, 2
	bne      lbl_802AE304
	slwi     r0, r0, 2
	lfsx     f4, r4, r0
	fcmpo    cr0, f1, f4
	bge      lbl_802AE304
	fsubs    f5, f1, f2
	lfs      f0, 0(r6)
	fsubs    f2, f4, f2
	lfsx     f4, r3, r0
	fdivs    f5, f5, f2
	fsubs    f2, f3, f5
	fmuls    f0, f2, f0
	fmadds   f0, f5, f4, f0

lbl_802AE304:
	lfs      f2, 4(r5)
	addi     r0, r7, 2
	fcmpo    cr0, f1, f2
	cror     2, 1, 2
	bne      lbl_802AE348
	slwi     r0, r0, 2
	lfsx     f4, r4, r0
	fcmpo    cr0, f1, f4
	bge      lbl_802AE348
	fsubs    f5, f1, f2
	lfs      f0, 4(r6)
	fsubs    f2, f4, f2
	lfsx     f4, r3, r0
	fdivs    f5, f5, f2
	fsubs    f2, f3, f5
	fmuls    f0, f2, f0
	fmadds   f0, f5, f4, f0

lbl_802AE348:
	lfs      f2, 8(r5)
	addi     r0, r7, 3
	fcmpo    cr0, f1, f2
	cror     2, 1, 2
	bne      lbl_802AE38C
	slwi     r0, r0, 2
	lfsx     f4, r4, r0
	fcmpo    cr0, f1, f4
	bge      lbl_802AE38C
	fsubs    f5, f1, f2
	lfs      f0, 8(r6)
	fsubs    f2, f4, f2
	lfsx     f4, r3, r0
	fdivs    f5, f5, f2
	fsubs    f2, f3, f5
	fmuls    f0, f2, f0
	fmadds   f0, f5, f4, f0

lbl_802AE38C:
	addi     r5, r5, 0xc
	addi     r6, r6, 0xc
	addi     r7, r7, 3
	bdnz     lbl_802AE2C0
	lmw      r27, 0x4c(r1)
	fmr      f1, f0
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	802AE3B4
 * Size:	000144
 */
f32 Obj::getTakeOffPitchOffset()
{
	f32 keyFrames[5] = { 32.0f, 40.0f, 52.0f, 70.0f, 80.0f };
	f32 offsets[5]   = { 0.0f, -45.0f, -60.0f, -10.0f, -10.0f };

	f32 currFrame = getMotionFrame();

	f32 takeOffOffset = 0.0f;

	for (int i = 0; i < 4; i++) {
		f32 lastKey = keyFrames[i];
		if (currFrame >= lastKey) {
			f32 nextKey = keyFrames[i + 1];
			if (currFrame < nextKey) {
				f32 factor    = (currFrame - lastKey) / (nextKey - lastKey);
				takeOffOffset = factor * offsets[i + 1] + (1.0f - factor) * offsets[i];
			}
		}
	}

	return takeOffOffset;
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lis      r4, lbl_80489E2C@ha
	lis      r5, lbl_80489E18@ha
	stw      r0, 0x44(r1)
	addi     r8, r4, lbl_80489E2C@l
	stw      r31, 0x3c(r1)
	lwzu     r31, lbl_80489E18@l(r5)
	lwz      r7, 0(r8)
	lwz      r12, 4(r5)
	lwz      r11, 8(r5)
	lwz      r10, 0xc(r5)
	lwz      r9, 0x10(r5)
	lwz      r6, 4(r8)
	lwz      r5, 8(r8)
	lwz      r4, 0xc(r8)
	lwz      r0, 0x10(r8)
	stw      r31, 0x1c(r1)
	stw      r12, 0x20(r1)
	stw      r11, 0x24(r1)
	stw      r10, 0x28(r1)
	stw      r9, 0x2c(r1)
	stw      r7, 8(r1)
	stw      r6, 0xc(r1)
	stw      r5, 0x10(r1)
	stw      r4, 0x14(r1)
	stw      r0, 0x18(r1)
	bl       getMotionFrame__Q24Game9EnemyBaseFv
	addi     r5, r1, 0x1c
	addi     r6, r1, 8
	li       r0, 2
	lfs      f0, lbl_8051C0C0@sda21(r2)
	mr       r4, r5
	mr       r3, r6
	lfs      f3, lbl_8051C0D8@sda21(r2)
	li       r7, 0
	mtctr    r0

lbl_802AE448:
	lfs      f2, 0(r5)
	addi     r0, r7, 1
	fcmpo    cr0, f1, f2
	cror     2, 1, 2
	bne      lbl_802AE48C
	slwi     r0, r0, 2
	lfsx     f4, r4, r0
	fcmpo    cr0, f1, f4
	bge      lbl_802AE48C
	fsubs    f5, f1, f2
	lfs      f0, 0(r6)
	fsubs    f2, f4, f2
	lfsx     f4, r3, r0
	fdivs    f5, f5, f2
	fsubs    f2, f3, f5
	fmuls    f0, f2, f0
	fmadds   f0, f5, f4, f0

lbl_802AE48C:
	lfs      f2, 4(r5)
	addi     r0, r7, 2
	fcmpo    cr0, f1, f2
	cror     2, 1, 2
	bne      lbl_802AE4D0
	slwi     r0, r0, 2
	lfsx     f4, r4, r0
	fcmpo    cr0, f1, f4
	bge      lbl_802AE4D0
	fsubs    f5, f1, f2
	lfs      f0, 4(r6)
	fsubs    f2, f4, f2
	lfsx     f4, r3, r0
	fdivs    f5, f5, f2
	fsubs    f2, f3, f5
	fmuls    f0, f2, f0
	fmadds   f0, f5, f4, f0

lbl_802AE4D0:
	addi     r5, r5, 8
	addi     r6, r6, 8
	addi     r7, r7, 2
	bdnz     lbl_802AE448
	lwz      r0, 0x44(r1)
	fmr      f1, f0
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	802AE4F8
 * Size:	000168
 */
f32 Obj::getFallPitchOffset(f32 p1)
{
	f32 currFrame    = 30.0f * p1;
	f32 keyFrames[8] = { 7.0f, 17.0f, 27.0f, 37.0f, 47.0f, 57.0f, 67.0f, 77.0f };
	f32 offsets[8]   = { -20.0f, -15.0f, -35.0f, -25.0f, -40.0f, -35.0f, -65.0f, 0.0f };

	f32 fallOffset = 0.0f;

	for (int i = 0; i < 7; i++) {
		f32 lastKey = keyFrames[i];
		if (currFrame >= lastKey) {
			f32 nextKey = keyFrames[i + 1];
			if (currFrame < nextKey) {
				f32 factor = (currFrame - lastKey) / (nextKey - lastKey);
				fallOffset = factor * offsets[i + 1] + (1.0f - factor) * offsets[i];
			}
		}
	}

	return fallOffset;
	/*
	stwu     r1, -0x80(r1)
	lis      r4, lbl_80489E40@ha
	lis      r3, lbl_80489E60@ha
	lfs      f0, lbl_8051C104@sda21(r2)
	stmw     r21, 0x54(r1)
	addi     r6, r4, lbl_80489E40@l
	addi     r5, r3, lbl_80489E60@l
	addi     r23, r1, 0x28
	addi     r22, r1, 8
	fmuls    f6, f0, f1
	li       r0, 2
	mr       r4, r23
	mr       r3, r22
	li       r21, 0
	lfs      f1, lbl_8051C0C0@sda21(r2)
	lfs      f2, lbl_8051C0D8@sda21(r2)
	lwz      r24, 0(r6)
	lwz      r25, 4(r6)
	lwz      r26, 8(r6)
	lwz      r27, 0xc(r6)
	lwz      r28, 0x10(r6)
	lwz      r29, 0x14(r6)
	lwz      r30, 0x18(r6)
	lwz      r31, 0x1c(r6)
	lwz      r12, 0(r5)
	lwz      r11, 4(r5)
	lwz      r10, 8(r5)
	lwz      r9, 0xc(r5)
	lwz      r8, 0x10(r5)
	lwz      r7, 0x14(r5)
	lwz      r6, 0x18(r5)
	lwz      r5, 0x1c(r5)
	stw      r24, 0x28(r1)
	stw      r25, 0x2c(r1)
	stw      r26, 0x30(r1)
	stw      r27, 0x34(r1)
	stw      r28, 0x38(r1)
	stw      r29, 0x3c(r1)
	stw      r30, 0x40(r1)
	stw      r31, 0x44(r1)
	stw      r12, 8(r1)
	stw      r11, 0xc(r1)
	stw      r10, 0x10(r1)
	stw      r9, 0x14(r1)
	stw      r8, 0x18(r1)
	stw      r7, 0x1c(r1)
	stw      r6, 0x20(r1)
	stw      r5, 0x24(r1)
	mtctr    r0

lbl_802AE5BC:
	lfs      f3, 0(r23)
	addi     r0, r21, 1
	fcmpo    cr0, f6, f3
	cror     2, 1, 2
	bne      lbl_802AE600
	slwi     r0, r0, 2
	lfsx     f5, r4, r0
	fcmpo    cr0, f6, f5
	bge      lbl_802AE600
	fsubs    f4, f6, f3
	lfs      f0, 0(r22)
	fsubs    f1, f5, f3
	lfsx     f3, r3, r0
	fdivs    f4, f4, f1
	fsubs    f1, f2, f4
	fmuls    f0, f1, f0
	fmadds   f1, f4, f3, f0

lbl_802AE600:
	lfs      f3, 4(r23)
	addi     r0, r21, 2
	fcmpo    cr0, f6, f3
	cror     2, 1, 2
	bne      lbl_802AE644
	slwi     r0, r0, 2
	lfsx     f5, r4, r0
	fcmpo    cr0, f6, f5
	bge      lbl_802AE644
	fsubs    f4, f6, f3
	lfs      f0, 4(r22)
	fsubs    f1, f5, f3
	lfsx     f3, r3, r0
	fdivs    f4, f4, f1
	fsubs    f1, f2, f4
	fmuls    f0, f1, f0
	fmadds   f1, f4, f3, f0

lbl_802AE644:
	addi     r23, r23, 8
	addi     r22, r22, 8
	addi     r21, r21, 2
	bdnz     lbl_802AE5BC
	lmw      r21, 0x54(r1)
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	802AE660
 * Size:	000030
 */
void Obj::updateFallTimer()
{
	if (mStuckPikminCount != 0) {
		mFallTimer += sys->mDeltaTime;
		return;
	}

	mFallTimer = 0.0f;
}

/*
 * --INFO--
 * Address:	802AE690
 * Size:	0000A4
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

/*
 * --INFO--
 * Address:	802AE734
 * Size:	000448
 */
Creature* Obj::getSearchedTarget(f32 offset)
{
	Creature* target = nullptr;

	if (sqrDistanceXZ(mPosition, mHomePosition) < SQUARE(*C_PARMS->mGeneral.mTerritoryRadius())) {
		f32 currY       = mPosition.y;
		f32 minY        = currY - offset - 50.0f;
		f32 fovAng      = PI * (DEG2RAD * *C_PARMS->mGeneral.mViewAngle());
		f32 maxDist     = SQUARE(*C_PARMS->mGeneral.mSightRadius());
		f32 attackRange = SQUARE(*C_PARMS->mGeneral.mMaxAttackRange());

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

/*
 * --INFO--
 * Address:	802AEB7C
 * Size:	00033C
 */
bool Obj::isSuck(f32 offset, Creature* target)
{

	f32 currY    = mPosition.y;            // f30
	f32 minY     = currY - offset - 50.0f; // f29
	f32 maxRange = SQUARE(*C_PARMS->mGeneral.mMaxAttackRange());

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

/*
 * --INFO--
 * Address:	802AEEB8
 * Size:	000434
 */
bool Obj::suckPikmin(f32 offset)
{
	f32 currY    = mPosition.y;
	f32 minY     = currY - offset - 50.0f;
	f32 maxRange = SQUARE(*C_PARMS->mGeneral.mAttackRadius());

	CollPart* part   = mCollTree->getCollPart('suck');
	Vector3f partPos = part->mPosition;

	Iterator<Piki> iter(pikiMgr);
	CI_LOOP(iter)
	{
		Piki* currPiki = *iter;
		if (currPiki->isAlive() && currPiki->isPikmin() && currPiki->mSticker != this) {
			if (mSuckedPiki < *C_PROPERPARMS.mMaxSuckPiki() && randWeightFloat(1.0f) < *C_PROPERPARMS.mSuckChance()) {
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

/*
 * --INFO--
 * Address:	802AF2EC
 * Size:	0002B4
 */
void Obj::createEffect()
{
	_2E4        = new efx::TNewkurageEye();
	_2E8        = new efx::TNewkurageEye();
	mEfxHire    = new efx::TNewkurageHire();
	mEfxKira    = new efx::TNewkurageKira(&mPosition);
	mEfxSui     = new efx::TNewkurageSui();
	mEfxDeadrun = new efx::TNewkurageDeadrun();
}

/*
 * --INFO--
 * Address:	802AF5A0
 * Size:	00008C
 */
void Obj::setupEffect()
{
	_2E4->mMtx = mModel->getJoint("Ltuno2")->getWorldMatrix();
	_2E8->mMtx = mModel->getJoint("Rtuno2")->getWorldMatrix();
	mEfxHire->setMtxptr(mModel->getJoint("nyoro")->getWorldMatrix()->mMatrix.mtxView);
	mEfxDeadrun->mMtx = mModel->getJoint("center")->getWorldMatrix();
}

/*
 * --INFO--
 * Address:	802AF62C
 * Size:	000088
 */
void Obj::startEyeHireBodyEffect()
{
	_2E4->create(nullptr);
	_2E8->create(nullptr);
	mEfxHire->create(nullptr);
	mEfxKira->create(nullptr);
}

/*
 * --INFO--
 * Address:	802AF6B4
 * Size:	00007C
 */
void Obj::finishEyeBodyEffect()
{
	_2E4->fade();
	_2E8->fade();
	mEfxKira->fade();

	mEfxDeadrun->create(nullptr);
}

/*
 * --INFO--
 * Address:	802AF730
 * Size:	000024
 */
void Obj::setHireEffectLife(s16 lifeTime) { mEfxHire->setLifeTime(lifeTime); }

/*
 * --INFO--
 * Address:	802AF754
 * Size:	000050
 */
void Obj::finishHireEffect()
{
	mEfxHire->fade();
	mEfxDeadrun->fade();
}

/*
 * --INFO--
 * Address:	802AF7A4
 * Size:	000058
 */
void Obj::startSuckEffect(Vector3f& pos)
{
	efx::Arg fxArg(pos);
	mEfxSui->create(&fxArg);
}

/*
 * --INFO--
 * Address:	802AF7FC
 * Size:	000024
 */
void Obj::updateSuckEffect(Vector3f& pos) { mEfxSui->setGlobalTranslation(pos); }

/*
 * --INFO--
 * Address:	802AF820
 * Size:	000030
 */
void Obj::finishSuckEffect() { mEfxSui->fade(); }

/*
 * --INFO--
 * Address:	802AF850
 * Size:	00009C
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

/*
 * --INFO--
 * Address:	802AF8EC
 * Size:	000044
 */
void Obj::createDownEffect() { createBounceEffect(mPosition, getDownSmokeScale()); }

/*
 * --INFO--
 * Address:	802AF938
 * Size:	0000A0
 */
void Obj::effectDrawOn()
{
	_2E4->endDemoDrawOn();
	_2E8->endDemoDrawOn();
	mEfxHire->endDemoDrawOn();
	mEfxKira->endDemoDrawOn();
	mEfxSui->endDemoDrawOn();
	mEfxDeadrun->endDemoDrawOn();
}

/*
 * --INFO--
 * Address:	802AF9D8
 * Size:	0000A0
 */
void Obj::effectDrawOff()
{
	_2E4->startDemoDrawOff();
	_2E8->startDemoDrawOff();
	mEfxHire->startDemoDrawOff();
	mEfxKira->startDemoDrawOff();
	mEfxSui->startDemoDrawOff();
	mEfxDeadrun->startDemoDrawOff();
}

} // namespace Kurage
} // namespace Game
