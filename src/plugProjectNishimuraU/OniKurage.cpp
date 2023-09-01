#include "Game/Entities/OniKurage.h"
#include "Game/MapMgr.h"
#include "nans.h"

namespace Game {
namespace OniKurage {

namespace {
const f32 cDefaultKamuJointOffset[2] = { 7.5f, -7.5f };
const f32 cFlickKamuJointOffset[2]   = { 10.0f, -10.0f };
} // namespace

/*
 * --INFO--
 * Address:	802D3F84
 * Size:	000140
 */
Obj::Obj()
{
	mAnimator = new ProperAnimator();
	setFSM(new FSM());
	createEffect();
}

/*
 * --INFO--
 * Address:	802D40C4
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	802D40C8
 * Size:	0000B0
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	disableEvent(0, EB_ToLeaveCarcass);
	enableEvent(0, EB_IsFlying);
	disableEvent(0, EB_IsDeathEffectEnabled);
	mNextState  = ONIKURAGE_NULL;
	mStateTimer = 0.0f;
	mFallTimer  = 0.0f;
	_2C8        = 3.5f;
	mSuckedPiki = 0;
	mIsSucking  = false;

	_2F0 = 0;
	_2EC = 0;

	setupEffect();
	startEyeHireBodyEffect();

	mFsm->start(this, ONIKURAGE_Wait, nullptr);
}

/*
 * --INFO--
 * Address:	802D4178
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
 * Address:	802D41CC
 * Size:	000108
 */
void Obj::doUpdate()
{
	mFsm->exec(this);
	mMouthSlots.update();
	updateFallTimer();

	if (isAlive() && isEvent(0, EB_IsCullable)) {
		if (isFlying()) {
			getJAIObject()->startSound(PSSE_EN_ONIKURAGE_AIR, 0);
		}

		if (isEvent(0, EB_IsTakingDamage) && mDamageAnimTimer == 0.0f) {
			getJAIObject()->startSound(PSSE_EN_ONIKURAGE_DAMAGE, 0);
		}
	}
}

/*
 * --INFO--
 * Address:	802D42D4
 * Size:	000034
 */
void Obj::doUpdateCommon()
{
	EnemyBase::doUpdateCommon();
	escapeCheckNavi();
}

/*
 * --INFO--
 * Address:	802D4308
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	802D430C
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	802D432C
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
 * Address:	802D4378
 * Size:	00010C
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

/*
 * --INFO--
 * Address:	802D4484
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
 * Address:	802D44BC
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
 * Address:	802D4500
 * Size:	0000B8
 */
void Obj::doFinishStoneState()
{
	EnemyBase::doFinishStoneState();
	startEyeHireBodyEffect();

	int id = getStateID();
	if ((id >= ONIKURAGE_Wait && id <= ONIKURAGE_Drop) || (id >= ONIKURAGE_TakeOff && id <= ONIKURAGE_FlyFlick)) {
		if (_2EC != 0 || _2F0 != 0) {
			mFsm->transit(this, ONIKURAGE_GroundFlick, nullptr);
		} else {
			mFsm->transit(this, ONIKURAGE_TakeOff, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	802D45B8
 * Size:	000034
 */
void Obj::doStartWaitingBirthTypeDrop()
{
	EnemyBase::doStartWaitingBirthTypeDrop();
	effectDrawOff();
}

/*
 * --INFO--
 * Address:	802D45EC
 * Size:	000034
 */
void Obj::doFinishWaitingBirthTypeDrop()
{
	EnemyBase::doFinishWaitingBirthTypeDrop();
	effectDrawOn();
}

/*
 * --INFO--
 * Address:	802D4620
 * Size:	000020
 */
void Obj::doStartMovie() { effectDrawOff(); }

/*
 * --INFO--
 * Address:	802D4640
 * Size:	000020
 */
void Obj::doEndMovie() { effectDrawOn(); }

/*
 * --INFO--
 * Address:	802D4660
 * Size:	0000C8
 */
void Obj::initMouthSlots()
{
	mMouthSlots.alloc(2);
	mMouthSlots.setup(0, mModel, "Proom");
	mMouthSlots.setup(1, mModel, "Proom");

	for (int i = 0; i < mMouthSlots.getMax(); i++) {
		MouthCollPart* slot = mMouthSlots.getSlot(i);
		slot->_6C           = 1;
		f32 offset          = cDefaultKamuJointOffset[i];
		slot->mRadius       = 1.0f;
		slot->mOffset.x     = offset;
	}
}

/*
 * --INFO--
 * Address:	802D4728
 * Size:	000098
 */
f32 Obj::setHeightVelocity(float, float)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stfd     f30, 0x10(r1)
	psq_st   f30, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, mapMgr__4Game@sda21(r13)
	fmr      f30, f1
	addi     r4, r31, 0x18c
	lwz      r12, 4(r3)
	fmr      f31, f2
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xc0(r31)
	lfs      f0, 0x190(r31)
	lfs      f2, 0x81c(r3)
	lfs      f3, 0x844(r3)
	fadds    f2, f30, f2
	fadds    f3, f31, f3
	fadds    f2, f1, f2
	fsubs    f0, f2, f0
	fmuls    f0, f3, f0
	stfs     f0, 0x1cc(r31)
	lfs      f0, 0x190(r31)
	fsubs    f1, f0, f1
	psq_l    f31, 40(r1), 0, qr0
	lfd      f31, 0x20(r1)
	psq_l    f30, 24(r1), 0, qr0
	lfd      f30, 0x10(r1)
	lwz      r0, 0x34(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D47C0
 * Size:	0001D8
 */
void Obj::setRandTarget()
{
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	stw      r0, 0xa4(r1)
	stfd     f31, 0x90(r1)
	psq_st   f31, 152(r1), 0, qr0
	stfd     f30, 0x80(r1)
	psq_st   f30, 136(r1), 0, qr0
	stfd     f29, 0x70(r1)
	psq_st   f29, 120(r1), 0, qr0
	stfd     f28, 0x60(r1)
	psq_st   f28, 104(r1), 0, qr0
	stfd     f27, 0x50(r1)
	psq_st   f27, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	mr       r31, r3
	lwz      r3, 0xc0(r3)
	lfs      f1, 0x35c(r3)
	lfs      f0, 0x384(r3)
	fsubs    f27, f1, f0
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x1c(r1)
	mr       r4, r31
	lwz      r5, 0xc0(r31)
	addi     r3, r1, 8
	stw      r0, 0x18(r1)
	lfd      f1, lbl_8051C9E0@sda21(r2)
	lfd      f0, 0x18(r1)
	lwz      r12, 0(r31)
	fsubs    f2, f0, f1
	lfs      f1, lbl_8051C9CC@sda21(r2)
	lfs      f0, 0x384(r5)
	lwz      r12, 8(r12)
	fmuls    f2, f27, f2
	fdivs    f1, f2, f1
	fadds    f28, f0, f1
	mtctr    r12
	bctrl
	lfs      f31, 0x198(r31)
	lis      r3, atanTable___5JMath@ha
	lfs      f1, 8(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f29, 0x1a0(r31)
	lfs      f0, 0x10(r1)
	fsubs    f1, f1, f31
	lfs      f30, 0x19c(r31)
	fsubs    f2, f0, f29
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	fmr      f27, f1
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x24(r1)
	lfd      f2, lbl_8051C9E0@sda21(r2)
	stw      r0, 0x20(r1)
	lfs      f3, lbl_8051C9D0@sda21(r2)
	lfd      f0, 0x20(r1)
	lfs      f1, lbl_8051C9CC@sda21(r2)
	fsubs    f4, f0, f2
	lfs      f2, lbl_8051C9D4@sda21(r2)
	lfs      f0, lbl_8051C9A0@sda21(r2)
	fmuls    f3, f3, f4
	fdivs    f1, f3, f1
	fadds    f1, f27, f1
	fadds    f3, f2, f1
	fmr      f1, f3
	fcmpo    cr0, f3, f0
	bge      lbl_802D48D8
	fneg     f1, f3

lbl_802D48D8:
	lfs      f2, lbl_8051C9D8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051C9A0@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmadds   f1, f28, f0, f29
	bge      lbl_802D4934
	lfs      f0, lbl_8051C9DC@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_802D494C

lbl_802D4934:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_802D494C:
	fmadds   f0, f28, f0, f31
	stfs     f0, 0x2d0(r31)
	stfs     f30, 0x2d4(r31)
	stfs     f1, 0x2d8(r31)
	psq_l    f31, 152(r1), 0, qr0
	lfd      f31, 0x90(r1)
	psq_l    f30, 136(r1), 0, qr0
	lfd      f30, 0x80(r1)
	psq_l    f29, 120(r1), 0, qr0
	lfd      f29, 0x70(r1)
	psq_l    f28, 104(r1), 0, qr0
	lfd      f28, 0x60(r1)
	psq_l    f27, 88(r1), 0, qr0
	lfd      f27, 0x50(r1)
	lwz      r0, 0xa4(r1)
	lwz      r31, 0x4c(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D4998
 * Size:	0000A4
 */
f32 Obj::getMovePitchOffset()
{
	/*
	stwu     r1, -0x20(r1)
	lfs      f3, lbl_8051C9D0@sda21(r2)
	lwz      r4, sys@sda21(r13)
	lfs      f1, 0x2c8(r3)
	lfs      f2, 0x54(r4)
	lfs      f0, lbl_8051C9E8@sda21(r2)
	fmadds   f1, f3, f2, f1
	stfs     f1, 0x2c8(r3)
	lfs      f1, 0x2c8(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_802D49CC
	fsubs    f0, f1, f0
	stfs     f0, 0x2c8(r3)

lbl_802D49CC:
	lfs      f2, 0x2c8(r3)
	lfs      f0, lbl_8051C9A0@sda21(r2)
	lfs      f1, lbl_8051C9EC@sda21(r2)
	fcmpo    cr0, f2, f0
	bge      lbl_802D4A0C
	lfs      f0, lbl_8051C9DC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_802D4A30

lbl_802D4A0C:
	lfs      f0, lbl_8051C9D8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_802D4A30:
	fmuls    f1, f1, f0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D4A3C
 * Size:	0001A8
 */
f32 Obj::getAttackPitchOffset()
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	lis      r4, lbl_8048C0DC@ha
	lis      r5, lbl_8048C0C0@ha
	stw      r0, 0x64(r1)
	addi     r10, r4, lbl_8048C0DC@l
	stmw     r27, 0x4c(r1)
	lwzu     r27, lbl_8048C0C0@l(r5)
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
	lfs      f0, lbl_8051C9A0@sda21(r2)
	mr       r4, r5
	mr       r3, r6
	lfs      f3, lbl_8051C9B8@sda21(r2)
	li       r7, 0
	mtctr    r0

lbl_802D4AF0:
	lfs      f2, 0(r5)
	addi     r0, r7, 1
	fcmpo    cr0, f1, f2
	cror     2, 1, 2
	bne      lbl_802D4B34
	slwi     r0, r0, 2
	lfsx     f4, r4, r0
	fcmpo    cr0, f1, f4
	bge      lbl_802D4B34
	fsubs    f5, f1, f2
	lfs      f0, 0(r6)
	fsubs    f2, f4, f2
	lfsx     f4, r3, r0
	fdivs    f5, f5, f2
	fsubs    f2, f3, f5
	fmuls    f0, f2, f0
	fmadds   f0, f5, f4, f0

lbl_802D4B34:
	lfs      f2, 4(r5)
	addi     r0, r7, 2
	fcmpo    cr0, f1, f2
	cror     2, 1, 2
	bne      lbl_802D4B78
	slwi     r0, r0, 2
	lfsx     f4, r4, r0
	fcmpo    cr0, f1, f4
	bge      lbl_802D4B78
	fsubs    f5, f1, f2
	lfs      f0, 4(r6)
	fsubs    f2, f4, f2
	lfsx     f4, r3, r0
	fdivs    f5, f5, f2
	fsubs    f2, f3, f5
	fmuls    f0, f2, f0
	fmadds   f0, f5, f4, f0

lbl_802D4B78:
	lfs      f2, 8(r5)
	addi     r0, r7, 3
	fcmpo    cr0, f1, f2
	cror     2, 1, 2
	bne      lbl_802D4BBC
	slwi     r0, r0, 2
	lfsx     f4, r4, r0
	fcmpo    cr0, f1, f4
	bge      lbl_802D4BBC
	fsubs    f5, f1, f2
	lfs      f0, 8(r6)
	fsubs    f2, f4, f2
	lfsx     f4, r3, r0
	fdivs    f5, f5, f2
	fsubs    f2, f3, f5
	fmuls    f0, f2, f0
	fmadds   f0, f5, f4, f0

lbl_802D4BBC:
	addi     r5, r5, 0xc
	addi     r6, r6, 0xc
	addi     r7, r7, 3
	bdnz     lbl_802D4AF0
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
 * Address:	802D4BE4
 * Size:	0001A8
 */
f32 Obj::getFlickPitchOffset()
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	lis      r4, lbl_8048C114@ha
	lis      r5, lbl_8048C0F8@ha
	stw      r0, 0x64(r1)
	addi     r10, r4, lbl_8048C114@l
	stmw     r27, 0x4c(r1)
	lwzu     r27, lbl_8048C0F8@l(r5)
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
	lfs      f0, lbl_8051C9A0@sda21(r2)
	mr       r4, r5
	mr       r3, r6
	lfs      f3, lbl_8051C9B8@sda21(r2)
	li       r7, 0
	mtctr    r0

lbl_802D4C98:
	lfs      f2, 0(r5)
	addi     r0, r7, 1
	fcmpo    cr0, f1, f2
	cror     2, 1, 2
	bne      lbl_802D4CDC
	slwi     r0, r0, 2
	lfsx     f4, r4, r0
	fcmpo    cr0, f1, f4
	bge      lbl_802D4CDC
	fsubs    f5, f1, f2
	lfs      f0, 0(r6)
	fsubs    f2, f4, f2
	lfsx     f4, r3, r0
	fdivs    f5, f5, f2
	fsubs    f2, f3, f5
	fmuls    f0, f2, f0
	fmadds   f0, f5, f4, f0

lbl_802D4CDC:
	lfs      f2, 4(r5)
	addi     r0, r7, 2
	fcmpo    cr0, f1, f2
	cror     2, 1, 2
	bne      lbl_802D4D20
	slwi     r0, r0, 2
	lfsx     f4, r4, r0
	fcmpo    cr0, f1, f4
	bge      lbl_802D4D20
	fsubs    f5, f1, f2
	lfs      f0, 4(r6)
	fsubs    f2, f4, f2
	lfsx     f4, r3, r0
	fdivs    f5, f5, f2
	fsubs    f2, f3, f5
	fmuls    f0, f2, f0
	fmadds   f0, f5, f4, f0

lbl_802D4D20:
	lfs      f2, 8(r5)
	addi     r0, r7, 3
	fcmpo    cr0, f1, f2
	cror     2, 1, 2
	bne      lbl_802D4D64
	slwi     r0, r0, 2
	lfsx     f4, r4, r0
	fcmpo    cr0, f1, f4
	bge      lbl_802D4D64
	fsubs    f5, f1, f2
	lfs      f0, 8(r6)
	fsubs    f2, f4, f2
	lfsx     f4, r3, r0
	fdivs    f5, f5, f2
	fsubs    f2, f3, f5
	fmuls    f0, f2, f0
	fmadds   f0, f5, f4, f0

lbl_802D4D64:
	addi     r5, r5, 0xc
	addi     r6, r6, 0xc
	addi     r7, r7, 3
	bdnz     lbl_802D4C98
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
 * Address:	802D4D8C
 * Size:	000144
 */
f32 Obj::getTakeOffPitchOffset()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lis      r4, lbl_8048C144@ha
	lis      r5, lbl_8048C130@ha
	stw      r0, 0x44(r1)
	addi     r8, r4, lbl_8048C144@l
	stw      r31, 0x3c(r1)
	lwzu     r31, lbl_8048C130@l(r5)
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
	lfs      f0, lbl_8051C9A0@sda21(r2)
	mr       r4, r5
	mr       r3, r6
	lfs      f3, lbl_8051C9B8@sda21(r2)
	li       r7, 0
	mtctr    r0

lbl_802D4E20:
	lfs      f2, 0(r5)
	addi     r0, r7, 1
	fcmpo    cr0, f1, f2
	cror     2, 1, 2
	bne      lbl_802D4E64
	slwi     r0, r0, 2
	lfsx     f4, r4, r0
	fcmpo    cr0, f1, f4
	bge      lbl_802D4E64
	fsubs    f5, f1, f2
	lfs      f0, 0(r6)
	fsubs    f2, f4, f2
	lfsx     f4, r3, r0
	fdivs    f5, f5, f2
	fsubs    f2, f3, f5
	fmuls    f0, f2, f0
	fmadds   f0, f5, f4, f0

lbl_802D4E64:
	lfs      f2, 4(r5)
	addi     r0, r7, 2
	fcmpo    cr0, f1, f2
	cror     2, 1, 2
	bne      lbl_802D4EA8
	slwi     r0, r0, 2
	lfsx     f4, r4, r0
	fcmpo    cr0, f1, f4
	bge      lbl_802D4EA8
	fsubs    f5, f1, f2
	lfs      f0, 4(r6)
	fsubs    f2, f4, f2
	lfsx     f4, r3, r0
	fdivs    f5, f5, f2
	fsubs    f2, f3, f5
	fmuls    f0, f2, f0
	fmadds   f0, f5, f4, f0

lbl_802D4EA8:
	addi     r5, r5, 8
	addi     r6, r6, 8
	addi     r7, r7, 2
	bdnz     lbl_802D4E20
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
 * Address:	802D4ED0
 * Size:	000168
 */
f32 Obj::getFallPitchOffset(f32)
{
	/*
	stwu     r1, -0x80(r1)
	lis      r4, lbl_8048C158@ha
	lis      r3, lbl_8048C178@ha
	lfs      f0, lbl_8051C9F0@sda21(r2)
	stmw     r21, 0x54(r1)
	addi     r6, r4, lbl_8048C158@l
	addi     r5, r3, lbl_8048C178@l
	addi     r23, r1, 0x28
	addi     r22, r1, 8
	fmuls    f6, f0, f1
	li       r0, 2
	mr       r4, r23
	mr       r3, r22
	li       r21, 0
	lfs      f1, lbl_8051C9A0@sda21(r2)
	lfs      f2, lbl_8051C9B8@sda21(r2)
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

lbl_802D4F94:
	lfs      f3, 0(r23)
	addi     r0, r21, 1
	fcmpo    cr0, f6, f3
	cror     2, 1, 2
	bne      lbl_802D4FD8
	slwi     r0, r0, 2
	lfsx     f5, r4, r0
	fcmpo    cr0, f6, f5
	bge      lbl_802D4FD8
	fsubs    f4, f6, f3
	lfs      f0, 0(r22)
	fsubs    f1, f5, f3
	lfsx     f3, r3, r0
	fdivs    f4, f4, f1
	fsubs    f1, f2, f4
	fmuls    f0, f1, f0
	fmadds   f1, f4, f3, f0

lbl_802D4FD8:
	lfs      f3, 4(r23)
	addi     r0, r21, 2
	fcmpo    cr0, f6, f3
	cror     2, 1, 2
	bne      lbl_802D501C
	slwi     r0, r0, 2
	lfsx     f5, r4, r0
	fcmpo    cr0, f6, f5
	bge      lbl_802D501C
	fsubs    f4, f6, f3
	lfs      f0, 4(r22)
	fsubs    f1, f5, f3
	lfsx     f3, r3, r0
	fdivs    f4, f4, f1
	fsubs    f1, f2, f4
	fmuls    f0, f1, f0
	fmadds   f1, f4, f3, f0

lbl_802D501C:
	addi     r23, r23, 8
	addi     r22, r22, 8
	addi     r21, r21, 2
	bdnz     lbl_802D4F94
	lmw      r21, 0x54(r1)
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D5038
 * Size:	000030
 */
void Obj::updateFallTimer()
{
	/*
	lwz      r0, 0x1f4(r3)
	cmpwi    r0, 0
	beq      lbl_802D505C
	lwz      r4, sys@sda21(r13)
	lfs      f1, 0x2cc(r3)
	lfs      f0, 0x54(r4)
	fadds    f0, f1, f0
	stfs     f0, 0x2cc(r3)
	blr

lbl_802D505C:
	lfs      f0, lbl_8051C9A0@sda21(r2)
	stfs     f0, 0x2cc(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D5068
 * Size:	0000A4
 */
StateID Obj::getFlyingNextState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051C9A0@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lfs      f1, 0x200(r3)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802D5098
	li       r3, 0
	b        lbl_802D50F8

lbl_802D5098:
	li       r4, 3
	bl       getStickPikminColorNum__Q24Game9EnemyFuncFPQ24Game8Creaturei
	cmpwi    r3, 0
	ble      lbl_802D50B0
	li       r3, 5
	b        lbl_802D50F8

lbl_802D50B0:
	lwz      r4, 0xc0(r31)
	lfs      f1, 0x2cc(r31)
	lfs      f0, 0x8e4(r4)
	fcmpo    cr0, f1, f0
	bgt      lbl_802D50D4
	lwz      r3, 0x1f4(r31)
	lwz      r0, 0x90c(r4)
	cmpw     r3, r0
	blt      lbl_802D50F4

lbl_802D50D4:
	lwz      r3, 0x1f4(r31)
	lwz      r0, 0x90c(r4)
	cmpw     r3, r0
	bge      lbl_802D50EC
	li       r3, 0xa
	b        lbl_802D50F8

lbl_802D50EC:
	li       r3, 5
	b        lbl_802D50F8

lbl_802D50F4:
	li       r3, -1

lbl_802D50F8:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D510C
 * Size:	000340
 */
Creature* Obj::getSearchedTarget(f32)
{
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

/*
 * --INFO--
 * Address:	802D544C
 * Size:	000238
 */
bool Obj::isSuck(f32, Creature*)
{
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
	stw      r31, 0xac(r1)
	stw      r30, 0xa8(r1)
	stw      r29, 0xa4(r1)
	mr       r29, r3
	lfs      f0, lbl_8051C9C0@sda21(r2)
	lfs      f31, 0x190(r3)
	cmplwi   r4, 0
	lwz      r3, 0xc0(r3)
	fsubs    f1, f31, f1
	lfs      f2, 0x564(r3)
	fsubs    f29, f1, f0
	fmuls    f30, f2, f2
	beq      lbl_802D54FC
	lwz      r12, 0(r4)
	addi     r3, r1, 0x14
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x18(r1)
	lfs      f2, 0x14(r1)
	fcmpo    cr0, f0, f29
	lfs      f3, 0x1c(r1)
	ble      lbl_802D564C
	fcmpo    cr0, f0, f31
	bge      lbl_802D564C
	lfs      f0, 0x194(r29)
	lfs      f1, 0x18c(r29)
	fsubs    f0, f0, f3
	fsubs    f1, f1, f2
	fmuls    f0, f0, f0
	fmadds   f0, f1, f1, f0
	fcmpo    cr0, f0, f30
	bge      lbl_802D564C
	li       r3, 1
	b        lbl_802D5650

lbl_802D54FC:
	lfs      f0, 0x18c(r29)
	addi     r3, r1, 0x30
	addi     r4, r1, 0x20
	stfs     f0, 0x20(r1)
	lfs      f0, 0x190(r29)
	stfs     f0, 0x24(r1)
	lfs      f0, 0x194(r29)
	stfs     f0, 0x28(r1)
	stfs     f2, 0x2c(r1)
	bl       __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
	li       r0, 1
	addi     r3, r1, 0x50
	stb      r0, 0x4c(r1)
	addi     r4, r1, 0x30
	bl       __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
	addi     r3, r1, 0x50
	bl       first__Q24Game12CellIteratorFv
	b        lbl_802D563C

lbl_802D5544:
	addi     r3, r1, 0x50
	bl       __ml__Q24Game12CellIteratorFv
	lwz      r12, 0(r3)
	mr       r31, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802D5634
	lwz      r0, 0xf4(r31)
	cmplw    r0, r29
	beq      lbl_802D5634
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	mr       r30, r3
	bne      lbl_802D55D0
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802D55D0
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802D55D0
	li       r30, 1

lbl_802D55D0:
	clrlwi.  r0, r30, 0x18
	beq      lbl_802D5634
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0xc(r1)
	lfs      f2, 8(r1)
	fcmpo    cr0, f0, f29
	lfs      f3, 0x10(r1)
	ble      lbl_802D5634
	fcmpo    cr0, f0, f31
	bge      lbl_802D5634
	lfs      f0, 0x194(r29)
	lfs      f1, 0x18c(r29)
	fsubs    f0, f0, f3
	fsubs    f1, f1, f2
	fmuls    f0, f0, f0
	fmadds   f0, f1, f1, f0
	fcmpo    cr0, f0, f30
	bge      lbl_802D5634
	li       r3, 1
	b        lbl_802D5650

lbl_802D5634:
	addi     r3, r1, 0x50
	bl       next__Q24Game12CellIteratorFv

lbl_802D563C:
	addi     r3, r1, 0x50
	bl       isDone__Q24Game12CellIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802D5544

lbl_802D564C:
	li       r3, 0

lbl_802D5650:
	psq_l    f31, 216(r1), 0, qr0
	lfd      f31, 0xd0(r1)
	psq_l    f30, 200(r1), 0, qr0
	lfd      f30, 0xc0(r1)
	psq_l    f29, 184(r1), 0, qr0
	lfd      f29, 0xb0(r1)
	lwz      r31, 0xac(r1)
	lwz      r30, 0xa8(r1)
	lwz      r0, 0xe4(r1)
	lwz      r29, 0xa4(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D5684
 * Size:	000434
 */
bool Obj::suckPikmin(f32)
{
	/*
	stwu     r1, -0xc0(r1)
	mflr     r0
	stw      r0, 0xc4(r1)
	stfd     f31, 0xb0(r1)
	psq_st   f31, 184(r1), 0, qr0
	stfd     f30, 0xa0(r1)
	psq_st   f30, 168(r1), 0, qr0
	stfd     f29, 0x90(r1)
	psq_st   f29, 152(r1), 0, qr0
	stfd     f28, 0x80(r1)
	psq_st   f28, 136(r1), 0, qr0
	stfd     f27, 0x70(r1)
	psq_st   f27, 120(r1), 0, qr0
	stfd     f26, 0x60(r1)
	psq_st   f26, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	stw      r29, 0x54(r1)
	stw      r28, 0x50(r1)
	mr       r30, r3
	lis      r3, 0x7375636B@ha
	lfs      f28, 0x190(r30)
	addi     r4, r3, 0x7375636B@l
	lwz      r3, 0xc0(r30)
	fsubs    f2, f28, f1
	lfs      f1, lbl_8051C9C0@sda21(r2)
	lfs      f0, 0x5b4(r3)
	lwz      r3, 0x114(r30)
	fsubs    f27, f2, f1
	fmuls    f26, f0, f0
	bl       getCollPart__8CollTreeFUl
	mr       r31, r3
	lis      r3, "__vt__22Iterator<Q24Game4Piki>"@ha
	li       r0, 0
	lfs      f31, 0x4c(r31)
	lfs      f30, 0x50(r31)
	cmplwi   r0, 0
	lfs      f29, 0x54(r31)
	addi     r4, r3, "__vt__22Iterator<Q24Game4Piki>"@l
	lwz      r3, pikiMgr__4Game@sda21(r13)
	stw      r4, 0x14(r1)
	stw      r0, 0x20(r1)
	stw      r0, 0x18(r1)
	stw      r3, 0x1c(r1)
	bne      lbl_802D5750
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_802D5A2C

lbl_802D5750:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_802D57BC

lbl_802D5768:
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
	bne      lbl_802D5A2C
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)

lbl_802D57BC:
	lwz      r12, 0x14(r1)
	addi     r3, r1, 0x14
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802D5768
	b        lbl_802D5A2C

lbl_802D57DC:
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r29, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802D5970
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802D5970
	lwz      r0, 0xf4(r29)
	cmplw    r0, r30
	beq      lbl_802D5970
	lwz      r28, 0xc0(r30)
	lwz      r3, 0x2e0(r30)
	lwz      r0, 0x934(r28)
	cmpw     r3, r0
	bge      lbl_802D5970
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x44(r1)
	lfd      f3, lbl_8051C9E0@sda21(r2)
	stw      r0, 0x40(r1)
	lfs      f2, lbl_8051C9B8@sda21(r2)
	lfd      f0, 0x40(r1)
	lfs      f1, lbl_8051C9CC@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, 0x8bc(r28)
	fmuls    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802D5970
	mr       r4, r29
	addi     r3, r1, 8
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f3, 0xc(r1)
	lfs      f2, 8(r1)
	fcmpo    cr0, f3, f27
	lfs      f4, 0x10(r1)
	ble      lbl_802D5970
	fcmpo    cr0, f3, f28
	bge      lbl_802D5970
	lfs      f0, 0x194(r30)
	lfs      f1, 0x18c(r30)
	fsubs    f0, f0, f4
	fsubs    f1, f1, f2
	fmuls    f0, f0, f0
	fmadds   f0, f1, f1, f0
	fcmpo    cr0, f0, f26
	bge      lbl_802D5970
	lis      r3, __vt__Q24Game11Interaction@ha
	fsubs    f2, f31, f2
	addi     r4, r3, __vt__Q24Game11Interaction@l
	fsubs    f1, f30, f3
	fsubs    f0, f29, f4
	lis      r3, __vt__Q24Game20InteractSuikomi_Test@ha
	li       r0, 0
	stw      r4, 0x24(r1)
	addi     r5, r3, __vt__Q24Game20InteractSuikomi_Test@l
	mr       r3, r29
	stw      r30, 0x28(r1)
	addi     r4, r1, 0x24
	stw      r5, 0x24(r1)
	stfs     f2, 0x2c(r1)
	stfs     f1, 0x30(r1)
	stfs     f0, 0x34(r1)
	stw      r0, 0x38(r1)
	stw      r31, 0x3c(r1)
	lwz      r12, 0(r29)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802D5970
	lwz      r4, 0x2e0(r30)
	mr       r3, r30
	addi     r0, r4, 1
	stw      r0, 0x2e0(r30)
	lwz      r12, 0(r30)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x282a
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_802D5970:
	lwz      r0, 0x20(r1)
	cmplwi   r0, 0
	bne      lbl_802D599C
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_802D5A2C

lbl_802D599C:
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_802D5A10

lbl_802D59BC:
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
	bne      lbl_802D5A2C
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)

lbl_802D5A10:
	lwz      r12, 0x14(r1)
	addi     r3, r1, 0x14
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802D59BC

lbl_802D5A2C:
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x18(r1)
	cmplw    r4, r3
	bne      lbl_802D57DC
	lwz      r3, 0xc0(r30)
	lwz      r5, 0x2e0(r30)
	lwz      r0, 0x934(r3)
	srawi    r4, r5, 0x1f
	srwi     r3, r0, 0x1f
	subfc    r0, r0, r5
	adde     r3, r4, r3
	psq_l    f31, 184(r1), 0, qr0
	lfd      f31, 0xb0(r1)
	psq_l    f30, 168(r1), 0, qr0
	lfd      f30, 0xa0(r1)
	psq_l    f29, 152(r1), 0, qr0
	lfd      f29, 0x90(r1)
	psq_l    f28, 136(r1), 0, qr0
	lfd      f28, 0x80(r1)
	psq_l    f27, 120(r1), 0, qr0
	lfd      f27, 0x70(r1)
	psq_l    f26, 104(r1), 0, qr0
	lfd      f26, 0x60(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	lwz      r29, 0x54(r1)
	lwz      r0, 0xc4(r1)
	lwz      r28, 0x50(r1)
	mtlr     r0
	addi     r1, r1, 0xc0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D5AB8
 * Size:	000570
 */
bool Obj::suckNavi(f32)
{
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

/*
 * --INFO--
 * Address:	802D6028
 * Size:	00026C
 */
void Obj::updateCollPartOffset()
{
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

/*
 * --INFO--
 * Address:	802D6294
 * Size:	000100
 */
bool Obj::isFinishNaviSuck()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	addi     r31, r2,
"cDefaultKamuJointOffset__Q34Game9OniKurage23@unnamed@OniKurage_cpp@"@sda21 stw
r30, 0x18(r1) li       r30, 1 stw      r29, 0x14(r1) li       r29, 0 stw r28,
0x10(r1) mr       r28, r3 b        lbl_802D6364

lbl_802D62C4:
	mr       r4, r29
	addi     r3, r28, 0x2e4
	bl       getSlot__10MouthSlotsFi
	lwz      r0, 0x64(r3)
	cmplwi   r0, 0
	beq      lbl_802D635C
	lfs      f2, 0x20(r3)
	lfs      f1, 0(r31)
	lfs      f0, lbl_8051C9A0@sda21(r2)
	fsubs    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_802D62F8
	b        lbl_802D62FC

lbl_802D62F8:
	fneg     f1, f1

lbl_802D62FC:
	lfs      f0, lbl_8051C9B8@sda21(r2)
	fcmpo    cr0, f1, f0
	bgt      lbl_802D6358
	lfs      f2, lbl_8051C9EC@sda21(r2)
	lfs      f1, 0x24(r3)
	lfs      f0, lbl_8051C9A0@sda21(r2)
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_802D6324
	b        lbl_802D6328

lbl_802D6324:
	fneg     f1, f1

lbl_802D6328:
	lfs      f0, lbl_8051C9B8@sda21(r2)
	fcmpo    cr0, f1, f0
	bgt      lbl_802D6358
	lfs      f1, 0x28(r3)
	lfs      f0, lbl_8051C9A0@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802D6348
	b        lbl_802D634C

lbl_802D6348:
	fneg     f1, f1

lbl_802D634C:
	lfs      f0, lbl_8051C9B8@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802D635C

lbl_802D6358:
	li       r30, 0

lbl_802D635C:
	addi     r31, r31, 4
	addi     r29, r29, 1

lbl_802D6364:
	lwz      r0, 0x2e4(r28)
	cmpw     r29, r0
	blt      lbl_802D62C4
	lwz      r0, 0x24(r1)
	mr       r3, r30
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D6394
 * Size:	000028
 */
bool Obj::isNaviSucked()
{
	/*
	lwz      r0, 0x2ec(r3)
	cmplwi   r0, 0
	bne      lbl_802D63AC
	lwz      r0, 0x2f0(r3)
	cmplwi   r0, 0
	beq      lbl_802D63B4

lbl_802D63AC:
	li       r3, 1
	blr

lbl_802D63B4:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D63BC
 * Size:	00029C
 */
void Obj::flickStickNavi(bool)
{
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

/*
 * --INFO--
 * Address:	802D6658
 * Size:	000130
 */
void Obj::escapeCheckNavi()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	li       r30, 0
	stw      r29, 0x24(r1)
	mr       r29, r3
	mr       r31, r29
	b        lbl_802D6760

lbl_802D6680:
	mr       r4, r30
	addi     r3, r29, 0x2e4
	bl       getSlot__10MouthSlotsFi
	lwz      r3, 0x64(r3)
	cmplwi   r3, 0
	beq      lbl_802D66AC
	lwz      r0, 0x2ec(r31)
	cmplwi   r0, 0
	bne      lbl_802D6758
	stw      r3, 0x2ec(r31)
	b        lbl_802D6758

lbl_802D66AC:
	lwz      r0, 0x2ec(r31)
	cmplwi   r0, 0
	beq      lbl_802D6758
	lwz      r0, 0x1e0(r29)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	beq      lbl_802D66D0
	lfs      f0, lbl_8051C9A0@sda21(r2)
	stfs     f0, 0x200(r29)
	b        lbl_802D6750

lbl_802D66D0:
	mr       r3, r29
	bl       createFlickNaviEffect__Q34Game9OniKurage3ObjFv
	mr       r4, r29
	addi     r3, r1, 8
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	addi     r5, r1, 0x14
	lfs      f1, 0xc(r1)
	li       r4, 0
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
	lwz      r3, 0x2ec(r31)
	li       r4, 0x816
	li       r5, 0
	lwz      r3, 0x26c(r3)
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl

lbl_802D6750:
	li       r0, 0
	stw      r0, 0x2ec(r31)

lbl_802D6758:
	addi     r31, r31, 4
	addi     r30, r30, 1

lbl_802D6760:
	lwz      r0, 0x2e4(r29)
	cmpw     r30, r0
	blt      lbl_802D6680
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D6788
 * Size:	000340
 */
void Obj::createEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0x14
	stw      r30, 8(r1)
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802D6824
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	addi     r5, r4, __vt__Q23efx5TSync@l
	lis      r4, __vt__Q23efx9TChaseMtx@ha
	stw      r0, 4(r3)
	addi     r7, r4, __vt__Q23efx9TChaseMtx@l
	lis      r4, __vt__Q23efx10TKurageEye@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx10TKurageEye@l
	li       r9, 0
	li       r8, 0x2b2
	stw      r0, 4(r3)
	addi     r6, r7, 0x14
	li       r5, 0xd5
	addi     r0, r4, 0x14
	stw      r9, 8(r3)
	sth      r8, 0xc(r3)
	stb      r9, 0xe(r3)
	stw      r7, 0(r3)
	stw      r6, 4(r3)
	stw      r9, 0x10(r3)
	sth      r5, 0xc(r3)
	stw      r4, 0(r3)
	stw      r0, 4(r3)

lbl_802D6824:
	stw      r3, 0x2f4(r31)
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802D68AC
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	addi     r5, r4, __vt__Q23efx5TSync@l
	lis      r4, __vt__Q23efx9TChaseMtx@ha
	stw      r0, 4(r3)
	addi     r7, r4, __vt__Q23efx9TChaseMtx@l
	lis      r4, __vt__Q23efx10TKurageEye@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx10TKurageEye@l
	li       r9, 0
	li       r8, 0x2b2
	stw      r0, 4(r3)
	addi     r6, r7, 0x14
	li       r5, 0xd5
	addi     r0, r4, 0x14
	stw      r9, 8(r3)
	sth      r8, 0xc(r3)
	stb      r9, 0xe(r3)
	stw      r7, 0(r3)
	stw      r6, 4(r3)
	stw      r9, 0x10(r3)
	sth      r5, 0xc(r3)
	stw      r4, 0(r3)
	stw      r0, 4(r3)

lbl_802D68AC:
	stw      r3, 0x2f8(r31)
	li       r3, 0x40
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_802D68E0
	li       r4, 0
	li       r5, 0xd8
	li       r6, 0xd9
	li       r7, 0xda
	bl       __ct__Q23efx10TChaseMtx3FPA4_fUsUsUs
	lis      r3, __vt__Q23efx11TKurageHire@ha
	addi     r0, r3, __vt__Q23efx11TKurageHire@l
	stw      r0, 0(r30)

lbl_802D68E0:
	stw      r30, 0x2fc(r31)
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802D696C
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	addi     r5, r4, __vt__Q23efx5TSync@l
	lis      r4, __vt__Q23efx9TChasePos@ha
	stw      r0, 4(r3)
	addi     r8, r4, __vt__Q23efx9TChasePos@l
	lis      r4, __vt__Q23efx11TKurageKira@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx11TKurageKira@l
	li       r10, 0
	li       r9, 0x2b2
	stw      r0, 4(r3)
	addi     r7, r8, 0x14
	addi     r6, r31, 0x18c
	li       r5, 0xdb
	stw      r10, 8(r3)
	addi     r0, r4, 0x14
	sth      r9, 0xc(r3)
	stb      r10, 0xe(r3)
	stw      r8, 0(r3)
	stw      r7, 4(r3)
	stw      r6, 0x10(r3)
	sth      r5, 0xc(r3)
	stw      r4, 0(r3)
	stw      r0, 4(r3)

lbl_802D696C:
	stw      r3, 0x300(r31)
	li       r3, 0x24
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_802D6998
	li       r4, 0xdc
	li       r5, 0xdd
	bl       __ct__Q23efx9TForever2FUsUs
	lis      r3, __vt__Q23efx10TKurageSui@ha
	addi     r0, r3, __vt__Q23efx10TKurageSui@l
	stw      r0, 0(r30)

lbl_802D6998:
	stw      r30, 0x304(r31)
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802D6A24
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	addi     r5, r4, __vt__Q23efx5TSync@l
	lis      r4, __vt__Q23efx9TChasePos@ha
	stw      r0, 4(r3)
	addi     r8, r4, __vt__Q23efx9TChasePos@l
	lis      r4, __vt__Q23efx11TKurageGepu@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx11TKurageGepu@l
	li       r10, 0
	li       r9, 0x2b2
	stw      r0, 4(r3)
	addi     r7, r8, 0x14
	addi     r6, r31, 0x18c
	li       r5, 0xd7
	stw      r10, 8(r3)
	addi     r0, r4, 0x14
	sth      r9, 0xc(r3)
	stb      r10, 0xe(r3)
	stw      r8, 0(r3)
	stw      r7, 4(r3)
	stw      r6, 0x10(r3)
	sth      r5, 0xc(r3)
	stw      r4, 0(r3)
	stw      r0, 4(r3)

lbl_802D6A24:
	stw      r3, 0x308(r31)
	li       r3, 0x14
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_802D6AAC
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	addi     r5, r4, __vt__Q23efx5TSync@l
	lis      r4, __vt__Q23efx10TChaseMtxT@ha
	stw      r0, 4(r3)
	addi     r7, r4, __vt__Q23efx10TChaseMtxT@l
	lis      r4, __vt__Q23efx14TKurageDeadrun@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx14TKurageDeadrun@l
	li       r9, 0
	li       r8, 0x2b2
	stw      r0, 4(r3)
	addi     r6, r7, 0x14
	li       r5, 0xd4
	addi     r0, r4, 0x14
	stw      r9, 8(r3)
	sth      r8, 0xc(r3)
	stb      r9, 0xe(r3)
	stw      r7, 0(r3)
	stw      r6, 4(r3)
	stw      r9, 0x10(r3)
	sth      r5, 0xc(r3)
	stw      r4, 0(r3)
	stw      r0, 4(r3)

lbl_802D6AAC:
	stw      r3, 0x30c(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D6AC8
 * Size:	00008C
 */
void Obj::setupEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r4, r2, lbl_8051CA18@sda21
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r5, 0x2f4(r31)
	addi     r4, r2, lbl_8051CA20@sda21
	stw      r3, 0x10(r5)
	lwz      r3, 0x174(r31)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r5, 0x2f8(r31)
	addi     r4, r2, lbl_8051CA28@sda21
	stw      r3, 0x10(r5)
	lwz      r3, 0x174(r31)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	mr       r4, r3
	lwz      r3, 0x2fc(r31)
	bl       setMtxptr__Q23efx10TChaseMtx3FPA4_f
	lwz      r3, 0x174(r31)
	addi     r4, r2, lbl_8051CA30@sda21
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lwz      r4, 0x30c(r31)
	stw      r3, 0x10(r4)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D6B54
 * Size:	000088
 */
void Obj::startEyeHireBodyEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2f4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2f8(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2fc(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x300(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D6BDC
 * Size:	00007C
 */
void Obj::finishEyeBodyEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2f4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2f8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x300(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x30c(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D6C58
 * Size:	000024
 */
void Obj::setHireEffectLife(short)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x2fc(r3)
	bl       setLifeTime__Q23efx11TKurageHireFs
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D6C7C
 * Size:	000050
 */
void Obj::finishHireEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2fc(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x30c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D6CCC
 * Size:	000058
 */
void Obj::startSuckEffect(Vector3f&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, __vt__Q23efx3Arg@ha
	stw      r0, 0x24(r1)
	addi     r0, r5, __vt__Q23efx3Arg@l
	stw      r0, 8(r1)
	lfs      f0, 0(r4)
	stfs     f0, 0xc(r1)
	lfs      f0, 4(r4)
	stfs     f0, 0x10(r1)
	lfs      f0, 8(r4)
	addi     r4, r1, 8
	stfs     f0, 0x14(r1)
	lwz      r3, 0x304(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D6D24
 * Size:	000024
 */
void Obj::updateSuckEffect(Vector3f&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x304(r3)
	bl       "setGlobalTranslation__Q23efx10TKurageSuiFR10Vector3<f>"
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D6D48
 * Size:	000030
 */
void Obj::finishSuckEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x304(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D6D78
 * Size:	000034
 */
void Obj::createFlickNaviEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	lwz      r3, 0x308(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D6DAC
 * Size:	00009C
 */
void Obj::createBodyBombEffect()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	addi     r4, r2, lbl_8051CA30@sda21
	stw      r0, 0x34(r1)
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lis      r4, __vt__Q23efx5TBase@ha
	lfs      f0, 0xc(r3)
	lfs      f1, 0x1c(r3)
	addi     r0, r4, __vt__Q23efx5TBase@l
	lfs      f2, 0x2c(r3)
	lis      r3, __vt__Q23efx8TSimple2@ha
	addi     r5, r3, __vt__Q23efx8TSimple2@l
	li       r6, 0
	stw      r0, 0x18(r1)
	lis      r4, __vt__Q23efx11TKurageBomb@ha
	lis      r3, __vt__Q23efx3Arg@ha
	li       r8, 0xd2
	addi     r0, r3, __vt__Q23efx3Arg@l
	li       r7, 0xd3
	stw      r5, 0x18(r1)
	addi     r5, r4, __vt__Q23efx11TKurageBomb@l
	addi     r3, r1, 0x18
	addi     r4, r1, 8
	sth      r8, 0x1c(r1)
	sth      r7, 0x1e(r1)
	stw      r6, 0x20(r1)
	stw      r6, 0x24(r1)
	stw      r5, 0x18(r1)
	stw      r0, 8(r1)
	stfs     f0, 0xc(r1)
	stfs     f1, 0x10(r1)
	stfs     f2, 0x14(r1)
	bl       create__Q23efx8TSimple2FPQ23efx3Arg
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D6E48
 * Size:	000044
 */
void Obj::createDownEffect()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x2ec(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	addi     r4, r31, 0x18c
	bl       "createBounceEffect__Q24Game9EnemyBaseFRC10Vector3<f>f"
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D6E94
 * Size:	0000B4
 */
void Obj::effectDrawOn()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2f4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2f8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2fc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x300(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x304(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x308(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x30c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802D6F48
 * Size:	0000B4
 */
void Obj::effectDrawOff()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2f4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2f8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2fc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x300(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x304(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x308(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x30c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace OniKurage
} // namespace Game
