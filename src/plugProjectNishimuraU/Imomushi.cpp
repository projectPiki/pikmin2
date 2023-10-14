#include "Game/Entities/Imomushi.h"
#include "Game/Entities/ItemPlant.h"
#include "efx/TUjinko.h"

namespace Game {
namespace Imomushi {

/*
 * --INFO--
 * Address:	802BC138
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
 * Address:	802BC270
 * Size:	000004
 */
void Obj::setInitialSetting(EnemyInitialParamBase*) { }

/*
 * --INFO--
 * Address:	802BC274
 * Size:	0000E8
 */
void Obj::onInit(CreatureInitArg* initArg)
{
	EnemyBase::onInit(initArg);
	disableEvent(0, EB_LifegaugeVisible);
	disableEvent(0, EB_Cullable);
	disableEvent(0, EB_DeathEffectEnabled);
	mIsUnderground = false;
	mNextState     = IMOMUSHI_NULL;
	mStateTimer    = 0.0f;
	resetStickDiff();
	setupEffect();

	if (gameSystem && gameSystem->isZukanMode()) {
		mFsm->start(this, IMOMUSHI_ZukanStay, nullptr);
	} else {
		mFsm->start(this, IMOMUSHI_Stay, nullptr);
		doAnimationCullingOff();
	}
}

/*
 * --INFO--
 * Address:	802BC35C
 * Size:	000044
 */
void Obj::onKill(CreatureKillArg* killArg)
{
	finishMoveTraceEffect();
	EnemyBase::onKill(killArg);
}

/*
 * --INFO--
 * Address:	802BC3A0
 * Size:	000034
 */
void Obj::doUpdate() { mFsm->exec(this); }

/*
 * --INFO--
 * Address:	802BC3D4
 * Size:	0004D0
 */
void Obj::doAnimationStick()
{
	CollPart* stuckPart = mStuckCollPart;
	Vector3f crossVec;
	if (stuckPart->mPartType == COLLTYPE_SPHERE) {
		Vector3f sep = mPosition - stuckPart->mPosition;
		sep.normalise();
		sep *= C_PROPERPARMS.mFp91.mValue;

		_2E4 += sep;

		crossVec = cross(_2E4, _2D8);
		_2D8     = cross(crossVec, _2E4);
	} else {
		Vector3f sep = _2CC - _2D8;
		sep *= C_PROPERPARMS.mFp91.mValue;

		_2D8 += sep;

		crossVec = cross(_2D8, _2E4);
		_2E4     = cross(crossVec, _2D8);
	}

	_2D8.normalise();
	crossVec.normalise();
	_2E4.normalise();

	mObjMatrix.setBasis(0, crossVec);
	mObjMatrix.setBasis(1, _2E4);
	mObjMatrix.setBasis(2, _2D8);

	if (_2C1) {
		Vector3f pos = mPosition;
		if (_2C2) {
			bool check = false;

			f32 xDiff = pos.x - _300;
			f32 zDiff = pos.z - _304;

			f32 absX = absVal(xDiff);
			f32 absZ = absVal(zDiff);

			if (absX > C_PROPERPARMS.mFp90()) {
				check = true;
				pos.x = (xDiff / absX) * C_PROPERPARMS.mFp90() + _300;
			}

			if (absZ > C_PROPERPARMS.mFp90()) {
				check = true;
				pos.z = (zDiff / absZ) * C_PROPERPARMS.mFp90() + _304;
			}
			_2C1 = check;

			_300 = pos.x;
			_304 = pos.z;
		}

		_2C2 = true;
		mObjMatrix.newTranslation(pos);
	} else {
		mObjMatrix.newTranslation(mPosition);
	}

	mFaceDir    = JMAAtan2Radian(_2D8.x, _2D8.z);
	mRotation.y = mFaceDir;
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r3
	lwz      r3, 0xf8(r3)
	lbz      r0, 0x58(r3)
	cmplwi   r0, 0
	bne      lbl_802BC4FC
	lfs      f1, 0x190(r31)
	lfs      f0, 0x50(r3)
	lfs      f2, 0x194(r31)
	fsubs    f3, f1, f0
	lfs      f0, 0x54(r3)
	lfs      f1, 0x18c(r31)
	fsubs    f4, f2, f0
	lfs      f0, 0x4c(r3)
	fmuls    f5, f3, f3
	fsubs    f2, f1, f0
	lfs      f0, lbl_8051C3C0@sda21(r2)
	fmuls    f6, f4, f4
	fmadds   f1, f2, f2, f5
	fadds    f1, f6, f1
	fcmpo    cr0, f1, f0
	ble      lbl_802BC448
	ble      lbl_802BC44C
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_802BC44C

lbl_802BC448:
	fmr      f1, f0

lbl_802BC44C:
	lfs      f0, lbl_8051C3C0@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802BC46C
	lfs      f0, lbl_8051C3C4@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f2, f2, f0
	fmuls    f3, f3, f0
	fmuls    f4, f4, f0

lbl_802BC46C:
	lwz      r3, 0xc0(r31)
	lfs      f0, 0x2e4(r31)
	lfs      f1, 0x8bc(r3)
	fmuls    f2, f2, f1
	fmuls    f3, f3, f1
	fmuls    f4, f4, f1
	fadds    f0, f0, f2
	stfs     f0, 0x2e4(r31)
	lfs      f0, 0x2e8(r31)
	fadds    f0, f0, f3
	stfs     f0, 0x2e8(r31)
	lfs      f0, 0x2ec(r31)
	fadds    f0, f0, f4
	stfs     f0, 0x2ec(r31)
	lfs      f7, 0x2e8(r31)
	lfs      f6, 0x2d8(r31)
	lfs      f5, 0x2ec(r31)
	lfs      f1, 0x2dc(r31)
	fmuls    f0, f7, f6
	lfs      f8, 0x2e4(r31)
	lfs      f4, 0x2e0(r31)
	fmuls    f3, f5, f1
	fmsubs   f2, f8, f1, f0
	fmuls    f1, f8, f4
	fmsubs   f0, f7, f4, f3
	fmuls    f3, f2, f7
	fmsubs   f1, f5, f6, f1
	fmuls    f4, f0, f5
	fmsubs   f5, f1, f5, f3
	fmuls    f3, f1, f8
	fmsubs   f4, f2, f8, f4
	stfs     f5, 0x2d8(r31)
	fmsubs   f3, f0, f7, f3
	stfs     f4, 0x2dc(r31)
	stfs     f3, 0x2e0(r31)
	b        lbl_802BC5AC

lbl_802BC4FC:
	lfs      f1, 0x2cc(r31)
	lfs      f0, 0x2d8(r31)
	lwz      r3, 0xc0(r31)
	fsubs    f5, f1, f0
	lfs      f0, 0x2d8(r31)
	lfs      f4, 0x8bc(r3)
	lfs      f3, 0x2d0(r31)
	fmuls    f5, f5, f4
	lfs      f1, 0x2dc(r31)
	lfs      f2, 0x2d4(r31)
	fsubs    f3, f3, f1
	lfs      f1, 0x2e0(r31)
	fadds    f0, f0, f5
	fsubs    f1, f2, f1
	fmuls    f3, f3, f4
	stfs     f0, 0x2d8(r31)
	fmuls    f1, f1, f4
	lfs      f0, 0x2dc(r31)
	fadds    f0, f0, f3
	stfs     f0, 0x2dc(r31)
	lfs      f0, 0x2e0(r31)
	fadds    f0, f0, f1
	stfs     f0, 0x2e0(r31)
	lfs      f6, 0x2e0(r31)
	lfs      f3, 0x2e4(r31)
	lfs      f5, 0x2e8(r31)
	lfs      f7, 0x2d8(r31)
	fmuls    f1, f3, f6
	lfs      f2, 0x2ec(r31)
	lfs      f8, 0x2dc(r31)
	fmuls    f0, f5, f7
	fmsubs   f1, f2, f7, f1
	fmuls    f4, f2, f8
	fmsubs   f2, f3, f8, f0
	fmuls    f3, f6, f1
	fmsubs   f0, f5, f6, f4
	fmuls    f4, f7, f2
	fmsubs   f5, f8, f2, f3
	fmuls    f3, f8, f0
	fmsubs   f4, f6, f0, f4
	stfs     f5, 0x2e4(r31)
	fmsubs   f3, f7, f1, f3
	stfs     f4, 0x2e8(r31)
	stfs     f3, 0x2ec(r31)

lbl_802BC5AC:
	lfs      f5, 0x2d8(r31)
	lfs      f4, 0x2dc(r31)
	fmuls    f3, f5, f5
	lfs      f6, 0x2e0(r31)
	fmuls    f7, f4, f4
	lfs      f4, lbl_8051C3C0@sda21(r2)
	fmuls    f6, f6, f6
	fadds    f3, f3, f7
	fadds    f3, f6, f3
	fcmpo    cr0, f3, f4
	ble      lbl_802BC5F4
	fmadds   f3, f5, f5, f7
	fadds    f5, f6, f3
	fcmpo    cr0, f5, f4
	ble      lbl_802BC5F8
	frsqrte  f3, f5
	fmuls    f5, f3, f5
	b        lbl_802BC5F8

lbl_802BC5F4:
	fmr      f5, f4

lbl_802BC5F8:
	lfs      f3, lbl_8051C3C0@sda21(r2)
	fcmpo    cr0, f5, f3
	ble      lbl_802BC630
	lfs      f4, lbl_8051C3C4@sda21(r2)
	lfs      f3, 0x2d8(r31)
	fdivs    f4, f4, f5
	fmuls    f3, f3, f4
	stfs     f3, 0x2d8(r31)
	lfs      f3, 0x2dc(r31)
	fmuls    f3, f3, f4
	stfs     f3, 0x2dc(r31)
	lfs      f3, 0x2e0(r31)
	fmuls    f3, f3, f4
	stfs     f3, 0x2e0(r31)

lbl_802BC630:
	fmuls    f4, f1, f1
	lfs      f3, lbl_8051C3C0@sda21(r2)
	fmuls    f5, f2, f2
	fmadds   f4, f0, f0, f4
	fadds    f4, f5, f4
	fcmpo    cr0, f4, f3
	ble      lbl_802BC65C
	ble      lbl_802BC660
	frsqrte  f3, f4
	fmuls    f4, f3, f4
	b        lbl_802BC660

lbl_802BC65C:
	fmr      f4, f3

lbl_802BC660:
	lfs      f3, lbl_8051C3C0@sda21(r2)
	fcmpo    cr0, f4, f3
	ble      lbl_802BC680
	lfs      f3, lbl_8051C3C4@sda21(r2)
	fdivs    f3, f3, f4
	fmuls    f0, f0, f3
	fmuls    f1, f1, f3
	fmuls    f2, f2, f3

lbl_802BC680:
	lfs      f5, 0x2e4(r31)
	lfs      f4, 0x2e8(r31)
	fmuls    f3, f5, f5
	lfs      f6, 0x2ec(r31)
	fmuls    f7, f4, f4
	lfs      f4, lbl_8051C3C0@sda21(r2)
	fmuls    f6, f6, f6
	fadds    f3, f3, f7
	fadds    f3, f6, f3
	fcmpo    cr0, f3, f4
	ble      lbl_802BC6C8
	fmadds   f3, f5, f5, f7
	fadds    f5, f6, f3
	fcmpo    cr0, f5, f4
	ble      lbl_802BC6CC
	frsqrte  f3, f5
	fmuls    f5, f3, f5
	b        lbl_802BC6CC

lbl_802BC6C8:
	fmr      f5, f4

lbl_802BC6CC:
	lfs      f3, lbl_8051C3C0@sda21(r2)
	fcmpo    cr0, f5, f3
	ble      lbl_802BC704
	lfs      f4, lbl_8051C3C4@sda21(r2)
	lfs      f3, 0x2e4(r31)
	fdivs    f4, f4, f5
	fmuls    f3, f3, f4
	stfs     f3, 0x2e4(r31)
	lfs      f3, 0x2e8(r31)
	fmuls    f3, f3, f4
	stfs     f3, 0x2e8(r31)
	lfs      f3, 0x2ec(r31)
	fmuls    f3, f3, f4
	stfs     f3, 0x2ec(r31)

lbl_802BC704:
	stfs     f0, 0x138(r31)
	stfs     f1, 0x148(r31)
	stfs     f2, 0x158(r31)
	lfs      f0, 0x2e4(r31)
	stfs     f0, 0x13c(r31)
	lfs      f0, 0x2e8(r31)
	stfs     f0, 0x14c(r31)
	lfs      f0, 0x2ec(r31)
	stfs     f0, 0x15c(r31)
	lfs      f0, 0x2d8(r31)
	stfs     f0, 0x140(r31)
	lfs      f0, 0x2dc(r31)
	stfs     f0, 0x150(r31)
	lfs      f0, 0x2e0(r31)
	stfs     f0, 0x160(r31)
	lbz      r0, 0x2c1(r31)
	cmplwi   r0, 0
	beq      lbl_802BC840
	lbz      r0, 0x2c2(r31)
	lfs      f1, 0x18c(r31)
	lfs      f0, 0x190(r31)
	cmplwi   r0, 0
	lfs      f2, 0x194(r31)
	stfs     f1, 0x20(r1)
	stfs     f0, 0x24(r1)
	stfs     f2, 0x28(r1)
	beq      lbl_802BC804
	lfs      f4, 0x300(r31)
	li       r0, 0
	lfs      f5, 0x304(r31)
	fsubs    f6, f1, f4
	lfs      f0, lbl_8051C3C0@sda21(r2)
	fsubs    f7, f2, f5
	fcmpo    cr0, f6, f0
	ble      lbl_802BC798
	fmr      f2, f6
	b        lbl_802BC79C

lbl_802BC798:
	fneg     f2, f6

lbl_802BC79C:
	lfs      f0, lbl_8051C3C0@sda21(r2)
	fcmpo    cr0, f7, f0
	ble      lbl_802BC7B0
	fmr      f3, f7
	b        lbl_802BC7B4

lbl_802BC7B0:
	fneg     f3, f7

lbl_802BC7B4:
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x894(r3)
	fcmpo    cr0, f2, f1
	ble      lbl_802BC7D4
	fdivs    f0, f6, f2
	li       r0, 1
	fmadds   f0, f0, f1, f4
	stfs     f0, 0x20(r1)

lbl_802BC7D4:
	lfs      f1, 0x894(r3)
	fcmpo    cr0, f3, f1
	ble      lbl_802BC7F0
	fdivs    f0, f7, f3
	li       r0, 1
	fmadds   f0, f0, f1, f5
	stfs     f0, 0x28(r1)

lbl_802BC7F0:
	stb      r0, 0x2c1(r31)
	lfs      f1, 0x20(r1)
	lfs      f0, 0x28(r1)
	stfs     f1, 0x300(r31)
	stfs     f0, 0x304(r31)

lbl_802BC804:
	lwz      r0, 0x20(r1)
	li       r4, 1
	lwz      r3, 0x24(r1)
	stw      r0, 0x14(r1)
	lwz      r0, 0x28(r1)
	stw      r3, 0x18(r1)
	lfs      f0, 0x14(r1)
	stb      r4, 0x2c2(r31)
	lfs      f1, 0x18(r1)
	stw      r0, 0x1c(r1)
	stfs     f0, 0x144(r31)
	lfs      f0, 0x1c(r1)
	stfs     f1, 0x154(r31)
	stfs     f0, 0x164(r31)
	b        lbl_802BC870

lbl_802BC840:
	lwz      r0, 0x18c(r31)
	lwz      r3, 0x190(r31)
	stw      r0, 8(r1)
	lwz      r0, 0x194(r31)
	stw      r3, 0xc(r1)
	lfs      f0, 8(r1)
	stw      r0, 0x10(r1)
	lfs      f1, 0xc(r1)
	stfs     f0, 0x144(r31)
	lfs      f0, 0x10(r1)
	stfs     f1, 0x154(r31)
	stfs     f0, 0x164(r31)

lbl_802BC870:
	lis      r3, atanTable___5JMath@ha
	lfs      f1, 0x2d8(r31)
	lfs      f2, 0x2e0(r31)
	addi     r3, r3, atanTable___5JMath@l
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	stfs     f1, 0x1fc(r31)
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)
	lwz      r31, 0x3c(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BC8A4
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	802BC8A8
 * Size:	000020
 */
void Obj::doDebugDraw(Graphics& gfx) { EnemyBase::doDebugDraw(gfx); }

/*
 * --INFO--
 * Address:	802BC8C8
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
 * Address:	802BC914
 * Size:	0000D0
 */
void Obj::getShadowParam(ShadowParam& shadowParam)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lis      r3, lbl_8048AC30@ha
	addi     r0, r3, lbl_8048AC30@l
	lwz      r3, 0x174(r30)
	mr       r4, r0
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f4, 0x2c(r3)
	lfs      f3, 0x1c(r3)
	lfs      f0, 0xc(r3)
	mr       r3, r30
	lfs      f2, lbl_8051C3C8@sda21(r2)
	stfs     f0, 0(r31)
	lfs      f1, lbl_8051C3C0@sda21(r2)
	stfs     f3, 4(r31)
	lfs      f0, lbl_8051C3C4@sda21(r2)
	stfs     f4, 8(r31)
	lfs      f3, 4(r31)
	fsubs    f2, f3, f2
	stfs     f2, 4(r31)
	stfs     f1, 0xc(r31)
	stfs     f0, 0x10(r31)
	stfs     f1, 0x14(r31)
	bl       isStickTo__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802BC9A4
	lfs      f0, lbl_8051C3CC@sda21(r2)
	stfs     f0, 0x18(r31)
	stfs     f0, 0x1c(r31)
	b        lbl_802BC9CC

lbl_802BC9A4:
	lwz      r0, 0x1e4(r30)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_802BC9BC
	lfs      f0, lbl_8051C3D0@sda21(r2)
	stfs     f0, 0x18(r31)
	b        lbl_802BC9C4

lbl_802BC9BC:
	lfs      f0, lbl_8051C3D4@sda21(r2)
	stfs     f0, 0x18(r31)

lbl_802BC9C4:
	lfs      f0, lbl_8051C3D8@sda21(r2)
	stfs     f0, 0x1c(r31)

lbl_802BC9CC:
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
 * Address:	802BC9E4
 * Size:	000064
 */
bool Obj::earthquakeCallBack(Creature* creature, f32 damage)
{
	if (isStickTo()) {
		return false;
	}

	return EnemyBase::earthquakeCallBack(creature, damage);
}

/*
 * --INFO--
 * Address:	802BCA48
 * Size:	000080
 */
bool Obj::dropCallBack(Creature* creature)
{

	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0xf4(r3)
	cmplwi   r0, 0
	beq      lbl_802BCAB0
	lwz      r0, 0x1e0(r31)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	bne      lbl_802BCAB0
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 1
	beq      lbl_802BCA88
	cmpwi    r3, 9
	bne      lbl_802BCAB0

lbl_802BCA88:
	lwz      r3, 0x2bc(r31)
	mr       r4, r31
	li       r5, 2
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	b        lbl_802BCAB4

lbl_802BCAB0:
	li       r3, 0

lbl_802BCAB4:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BCAC8
 * Size:	000034
 */
void Obj::doStartStoneState()
{
	EnemyBase::doStartStoneState();
	finishMoveTraceEffect();
}

/*
 * --INFO--
 * Address:	802BCAFC
 * Size:	00004C
 */
void Obj::doFinishStoneState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doFinishStoneState__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 7
	beq      lbl_802BCB2C
	cmpwi    r3, 8
	bne      lbl_802BCB34

lbl_802BCB2C:
	mr       r3, r31
	bl       startMoveTraceEffect__Q34Game8Imomushi3ObjFv

lbl_802BCB34:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BCB48
 * Size:	000034
 */
void Obj::doStartEarthquakeState(float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doStartEarthquakeState__Q24Game9EnemyBaseFf
	mr       r3, r31
	bl       finishMoveTraceEffect__Q34Game8Imomushi3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BCB7C
 * Size:	00004C
 */
void Obj::doFinishEarthquakeState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doFinishEarthquakeState__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 7
	beq      lbl_802BCBAC
	cmpwi    r3, 8
	bne      lbl_802BCBB4

lbl_802BCBAC:
	mr       r3, r31
	bl       startMoveTraceEffect__Q34Game8Imomushi3ObjFv

lbl_802BCBB4:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BCBC8
 * Size:	000034
 */
void Obj::doStartEarthquakeFitState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doStartEarthquakeFitState__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       finishMoveTraceEffect__Q34Game8Imomushi3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BCBFC
 * Size:	00004C
 */
void Obj::doFinishEarthquakeFitState()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       doFinishEarthquakeFitState__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       getStateID__Q24Game9EnemyBaseFv
	cmpwi    r3, 7
	beq      lbl_802BCC2C
	cmpwi    r3, 8
	bne      lbl_802BCC34

lbl_802BCC2C:
	mr       r3, r31
	bl       startMoveTraceEffect__Q34Game8Imomushi3ObjFv

lbl_802BCC34:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BCC48
 * Size:	000028
 */
void Obj::startCarcassMotion() { startMotion(IMOMUSHIANIM_Carry, nullptr); }

/*
 * --INFO--
 * Address:	802BCC70
 * Size:	000020
 */
void Obj::doStartMovie()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       effectDrawOff__Q34Game8Imomushi3ObjFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BCC90
 * Size:	000020
 */
void Obj::doEndMovie()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       effectDrawOn__Q34Game8Imomushi3ObjFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BCCB0
 * Size:	000024
 */
void Obj::lifeIncrement()
{
	/*
	lfs      f0, lbl_8051C3C0@sda21(r2)
	stfs     f0, 0x208(r3)
	lwz      r0, 0x1e0(r3)
	rlwinm   r0, r0, 0, 0x1f, 0x1d
	stw      r0, 0x1e0(r3)
	lwz      r4, 0xc0(r3)
	lfs      f0, 0x104(r4)
	stfs     f0, 0x200(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BCCD4
 * Size:	0000AC
 */
void Obj::resetZukanStateTimer()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	mr       r31, r3
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	mr       r3, r31
	lwz      r12, 0(r31)
	stw      r0, 8(r1)
	lfd      f2, lbl_8051C3E8@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f1, lbl_8051C3DC@sda21(r2)
	fsubs    f2, f0, f2
	lfs      f0, lbl_8051C3E0@sda21(r2)
	lwz      r12, 0x1ac(r12)
	fmuls    f1, f1, f2
	fdivs    f31, f1, f0
	mtctr    r12
	bctrl
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	lfd      f3, lbl_8051C3E8@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f1, lbl_8051C3DC@sda21(r2)
	lfd      f2, 0x10(r1)
	lfs      f0, lbl_8051C3C8@sda21(r2)
	fsubs    f2, f2, f3
	fmadds   f1, f1, f2, f31
	fsubs    f0, f0, f1
	stfs     f0, 0x2c8(r31)
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BCD80
 * Size:	000010
 */
void Obj::resetStickDiff()
{
	/*
	li       r0, 0
	stb      r0, 0x2c2(r3)
	stb      r0, 0x2c1(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BCD90
 * Size:	00001C
 */
void Obj::setStickDiff(float, float)
{
	/*
	li       r4, 1
	li       r0, 0
	stb      r4, 0x2c1(r3)
	stb      r0, 0x2c2(r3)
	stfs     f1, 0x300(r3)
	stfs     f2, 0x304(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BCDAC
 * Size:	00031C
 */
Creature* Obj::getRandFruitsPlant()
{
	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stfd     f31, 0xd0(r1)
	psq_st   f31, 216(r1), 0, qr0
	stw      r31, 0xcc(r1)
	stw      r30, 0xc8(r1)
	stw      r29, 0xc4(r1)
	stw      r28, 0xc0(r1)
	mr       r30, r3
	lwz      r3, mgr__Q24Game9ItemPlant@sda21(r13)
	lwz      r4, 0xc0(r30)
	li       r31, 0
	cmplwi   r3, 0
	lfs      f0, 0x35c(r4)
	fmuls    f31, f0, f0
	beq      lbl_802BCDF4
	addi     r3, r3, 0x30

lbl_802BCDF4:
	li       r0, 0
	lis      r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
	addi     r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
	stw      r0, 0x20(r1)
	cmplwi   r0, 0
	stw      r4, 0x14(r1)
	stw      r0, 0x18(r1)
	stw      r3, 0x1c(r1)
	bne      lbl_802BCE30
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_802BCEB8

lbl_802BCE30:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_802BCE9C

lbl_802BCE48:
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
	bne      lbl_802BCEB8
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)

lbl_802BCE9C:
	lwz      r12, 0x14(r1)
	addi     r3, r1, 0x14
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802BCE48

lbl_802BCEB8:
	addi     r29, r1, 0x24
	b        lbl_802BD018

lbl_802BCEC0:
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r0, r3
	mr       r28, r0
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802BCF5C
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x224(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802BCF5C
	mr       r4, r28
	addi     r3, r1, 8
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x1a0(r30)
	lfs      f0, 0x10(r1)
	lfs      f2, 0x198(r30)
	fsubs    f1, f1, f0
	lfs      f0, 8(r1)
	fsubs    f2, f2, f0
	fmuls    f0, f1, f1
	fmadds   f0, f2, f2, f0
	fcmpo    cr0, f0, f31
	bge      lbl_802BCF5C
	stw      r28, 0(r29)
	addi     r29, r29, 4
	addi     r31, r31, 1

lbl_802BCF5C:
	lwz      r0, 0x20(r1)
	cmplwi   r0, 0
	bne      lbl_802BCF88
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_802BD018

lbl_802BCF88:
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_802BCFFC

lbl_802BCFA8:
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
	bne      lbl_802BD018
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)

lbl_802BCFFC:
	lwz      r12, 0x14(r1)
	addi     r3, r1, 0x14
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802BCFA8

lbl_802BD018:
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x18(r1)
	cmplw    r4, r3
	bne      lbl_802BCEC0
	cmpwi    r31, 0
	beq      lbl_802BD09C
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0xac(r1)
	xoris    r0, r31, 0x8000
	lfd      f2, lbl_8051C3E8@sda21(r2)
	addi     r3, r1, 0x24
	stw      r4, 0xa8(r1)
	lfs      f0, lbl_8051C3E0@sda21(r2)
	lfd      f1, 0xa8(r1)
	stw      r0, 0xb4(r1)
	fsubs    f1, f1, f2
	stw      r4, 0xb0(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0xb0(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0xb8(r1)
	lwz      r0, 0xbc(r1)
	slwi     r0, r0, 2
	lwzx     r3, r3, r0
	b        lbl_802BD0A0

lbl_802BD09C:
	li       r3, 0

lbl_802BD0A0:
	psq_l    f31, 216(r1), 0, qr0
	lwz      r0, 0xe4(r1)
	lfd      f31, 0xd0(r1)
	lwz      r31, 0xcc(r1)
	lwz      r30, 0xc8(r1)
	lwz      r29, 0xc4(r1)
	lwz      r28, 0xc0(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BD0C8
 * Size:	0000C8
 */
void Obj::startClimbPlant(CollPart*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	stw      r30, 0x28(r1)
	mr       r30, r3
	bl       endStick__Q24Game8CreatureFv
	cmplwi   r31, 0
	beq      lbl_802BD178
	lwz      r4, 0x230(r30)
	mr       r3, r30
	mr       r5, r31
	bl       startStick__Q24Game8CreatureFPQ24Game8CreatureP8CollPart
	mr       r3, r31
	addi     r4, r1, 8
	bl       getTube__8CollPartFRQ23Sys4Tube
	addi     r3, r1, 8
	addi     r4, r30, 0x2cc
	bl       "getAxisVector__Q23Sys4TubeFR10Vector3<f>"
	lfs      f1, 0xc(r1)
	lfs      f0, 0x18(r1)
	lfs      f3, 8(r1)
	fsubs    f4, f1, f0
	lfs      f2, 0x14(r1)
	lfs      f1, 0x10(r1)
	lfs      f0, 0x1c(r1)
	fsubs    f3, f3, f2
	fmuls    f4, f4, f4
	fsubs    f2, f1, f0
	lfs      f0, lbl_8051C3C0@sda21(r2)
	fmadds   f1, f3, f3, f4
	fmuls    f2, f2, f2
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_802BD168
	ble      lbl_802BD16C
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_802BD16C

lbl_802BD168:
	fmr      f1, f0

lbl_802BD16C:
	lfs      f0, lbl_8051C3C4@sda21(r2)
	fdivs    f0, f0, f1
	stfs     f0, 0x2fc(r30)

lbl_802BD178:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BD190
 * Size:	000030
 */
void Obj::moveStickTube()
{
	Vector3f pos = _2CC;
	pos *= C_PROPERPARMS.mFp01();
	mTargetVelocity = pos;
}

/*
 * --INFO--
 * Address:	802BD1C0
 * Size:	0000CC
 */
void Obj::moveStickSphere()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r31, 0xf4(r3)
	lwz      r30, 0xf8(r3)
	bl       endStick__Q24Game8CreatureFv
	lwz      r4, 0xc0(r29)
	mr       r3, r29
	lfs      f1, 0x2d8(r29)
	lfs      f0, 0x844(r4)
	lfs      f2, 0x2dc(r29)
	fmuls    f1, f1, f0
	lfs      f3, 0x2e0(r29)
	fmuls    f2, f2, f0
	fmuls    f3, f3, f0
	stfs     f1, 0x1d4(r29)
	stfs     f2, 0x1d8(r29)
	stfs     f3, 0x1dc(r29)
	lwz      r12, 0(r29)
	lwz      r4, sys@sda21(r13)
	lwz      r12, 0x1fc(r12)
	lfs      f1, 0x54(r4)
	mtctr    r12
	bctrl
	lfs      f1, 0x18c(r29)
	mr       r3, r29
	lfs      f0, 0x1c8(r29)
	mr       r4, r31
	mr       r5, r30
	fadds    f0, f1, f0
	stfs     f0, 0x18c(r29)
	lfs      f1, 0x190(r29)
	lfs      f0, 0x1cc(r29)
	fadds    f0, f1, f0
	stfs     f0, 0x190(r29)
	lfs      f1, 0x194(r29)
	lfs      f0, 0x1d0(r29)
	fadds    f0, f1, f0
	stfs     f0, 0x194(r29)
	bl       startStick__Q24Game8CreatureFPQ24Game8CreatureP8CollPart
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BD28C
 * Size:	00019C
 */
void Obj::eatTsuyukusa()
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	mr       r30, r3
	lwz      r3, 0xf4(r3)
	cmplwi   r3, 0
	beq      lbl_802BD410
	lwz      r12, 0(r3)
	mr       r31, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802BD410
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x224(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802BD410
	mr       r3, r31
	addi     r4, r30, 0x18c
	lwz      r12, 0(r31)
	lwz      r12, 0x22c(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_802BD3B8
	lhz      r0, 0x43e(r3)
	cmplwi   r0, 0
	bne      lbl_802BD368
	lis      r4, __vt__Q23efx3Arg@ha
	lis      r3, __vt__Q23efx9ArgImoEat@ha
	addi     r4, r4, __vt__Q23efx3Arg@l
	li       r0, 0
	stw      r4, 0x28(r1)
	addi     r3, r3, __vt__Q23efx9ArgImoEat@l
	addi     r4, r1, 0x28
	lfs      f0, 0x18c(r30)
	stfs     f0, 0x2c(r1)
	lfs      f0, 0x190(r30)
	stfs     f0, 0x30(r1)
	lfs      f0, 0x194(r30)
	stfs     f0, 0x34(r1)
	stw      r3, 0x28(r1)
	stw      r0, 0x38(r1)
	lwz      r3, 0x308(r30)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_802BD3B8

lbl_802BD368:
	lis      r4, __vt__Q23efx3Arg@ha
	lis      r3, __vt__Q23efx9ArgImoEat@ha
	addi     r4, r4, __vt__Q23efx3Arg@l
	li       r0, 1
	stw      r4, 0x14(r1)
	addi     r3, r3, __vt__Q23efx9ArgImoEat@l
	addi     r4, r1, 0x14
	lfs      f0, 0x18c(r30)
	stfs     f0, 0x18(r1)
	lfs      f0, 0x190(r30)
	stfs     f0, 0x1c(r1)
	lfs      f0, 0x194(r30)
	stfs     f0, 0x20(r1)
	stw      r3, 0x14(r1)
	stw      r0, 0x24(r1)
	lwz      r3, 0x308(r30)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_802BD3B8:
	lwz      r3, 0xc0(r30)
	lfs      f1, 0x2c8(r30)
	lfs      f0, 0x86c(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_802BD410
	lis      r4, __vt__Q24Game11Interaction@ha
	lis      r3, __vt__Q24Game11InteractEat@ha
	addi     r4, r4, __vt__Q24Game11Interaction@l
	li       r0, 2
	stw      r4, 8(r1)
	addi     r5, r3, __vt__Q24Game11InteractEat@l
	mr       r3, r31
	addi     r4, r1, 8
	stw      r30, 0xc(r1)
	stw      r5, 8(r1)
	stw      r0, 0x10(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_8051C3C0@sda21(r2)
	stfs     f0, 0x2c8(r30)

lbl_802BD410:
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BD428
 * Size:	000074
 */
bool Obj::isAttackable()
{

	if (mTargetCreature) {
		ItemPlant::Item* target = static_cast<ItemPlant::Item*>(mTargetCreature);
		if (target->isAlive() && static_cast<ItemPlant::Item*>(target)->hasFruits()) {
			return true;
		}
	}

	return false;
}

/*
 * --INFO--
 * Address:	802BD49C
 * Size:	00004C
 */
bool Obj::isStickToFall()
{
	if (mSticker && !mSticker->isAlive()) {
		return true;
	}

	return false;
}

/*
 * --INFO--
 * Address:	802BD4E8
 * Size:	000188
 */
void Obj::setZukanTargetPosition()
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stfd     f30, 0x40(r1)
	psq_st   f30, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	mr       r31, r3
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lis      r3, atanTable___5JMath@ha
	lfd      f2, lbl_8051C3E8@sda21(r2)
	addi     r3, r3, atanTable___5JMath@l
	stw      r0, 8(r1)
	lfs      f0, lbl_8051C3F0@sda21(r2)
	lfd      f1, 8(r1)
	lfs      f5, lbl_8051C3E0@sda21(r2)
	fsubs    f2, f1, f2
	lfs      f3, 0x18c(r31)
	lfs      f1, 0x198(r31)
	lfs      f4, lbl_8051C3D0@sda21(r2)
	fmuls    f6, f0, f2
	lfs      f2, 0x194(r31)
	fsubs    f1, f3, f1
	lfs      f0, 0x1a0(r31)
	fdivs    f3, f6, f5
	fadds    f31, f4, f3
	fsubs    f2, f2, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	fmr      f30, f1
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x14(r1)
	lfd      f2, lbl_8051C3E8@sda21(r2)
	stw      r0, 0x10(r1)
	lfs      f3, lbl_8051C3F4@sda21(r2)
	lfd      f0, 0x10(r1)
	lfs      f1, lbl_8051C3E0@sda21(r2)
	fsubs    f4, f0, f2
	lfs      f2, lbl_8051C3F8@sda21(r2)
	lfs      f0, lbl_8051C3C0@sda21(r2)
	fmuls    f3, f3, f4
	fdivs    f1, f3, f1
	fadds    f1, f30, f1
	fadds    f5, f2, f1
	fmr      f1, f5
	fcmpo    cr0, f5, f0
	bge      lbl_802BD5BC
	fneg     f1, f5

lbl_802BD5BC:
	lfs      f3, lbl_8051C3FC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051C3C0@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f2, f1, f3
	lfs      f1, 0x1a0(r31)
	fcmpo    cr0, f5, f0
	lfs      f4, 0x19c(r31)
	fctiwz   f0, f2
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmadds   f2, f31, f0, f1
	bge      lbl_802BD620
	lfs      f0, lbl_8051C400@sda21(r2)
	fmuls    f0, f5, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f1, f0
	b        lbl_802BD638

lbl_802BD620:
	fmuls    f0, f5, f3
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r4, r0

lbl_802BD638:
	lfs      f0, 0x198(r31)
	fmadds   f0, f31, f1, f0
	stfs     f0, 0x2f0(r31)
	stfs     f4, 0x2f4(r31)
	stfs     f2, 0x2f8(r31)
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	psq_l    f30, 72(r1), 0, qr0
	lfd      f30, 0x40(r1)
	lwz      r0, 0x64(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BD670
 * Size:	000034
 */
bool Obj::isInZukanTargetArea() { return (sqrDistanceXZ(mPosition, mZukanTargetPosition) < 500.0f); }

/*
 * --INFO--
 * Address:	802BD6A4
 * Size:	00013C
 */
void Obj::createEffect()
{
	mEfxEat   = new efx::TImoEat();
	mEfxSmoke = new efx::TImoSmoke(&mPosition);
}

/*
 * --INFO--
 * Address:	802BD7E0
 * Size:	000040
 */
void Obj::setupEffect() { mEfxEat->mMtx = mModel->getJoint("headjnt")->getWorldMatrix(); }

/*
 * --INFO--
 * Address:	802BD820
 * Size:	00008C
 */
void Obj::createAppearEffect()
{
	efx::TUjinkoAp_Imo appearFX(mModel->getJoint("imomushi")->getWorldMatrix());
	appearFX.create(nullptr);
}

/*
 * --INFO--
 * Address:	802BD8AC
 * Size:	00008C
 */
void Obj::createDisAppearEffect()
{
	efx::TUjinkoHd_Imo hideFX(mModel->getJoint("imomushi")->getWorldMatrix());
	hideFX.create(nullptr);
}

/*
 * --INFO--
 * Address:	802BD938
 * Size:	000084
 */
void Obj::startMoveTraceEffect()
{
	efx::ArgScale fxArg(mPosition, 1.0f);
	mEfxSmoke->create(&fxArg);
}

/*
 * --INFO--
 * Address:	802BD9BC
 * Size:	000030
 */
void Obj::finishMoveTraceEffect() { mEfxSmoke->fade(); }

/*
 * --INFO--
 * Address:	802BD9EC
 * Size:	000050
 */
void Obj::effectDrawOn()
{
	mEfxEat->endDemoDrawOn();
	mEfxSmoke->endDemoDrawOn();
}

/*
 * --INFO--
 * Address:	802BDA3C
 * Size:	000050
 */
void Obj::effectDrawOff()
{
	mEfxEat->startDemoDrawOff();
	mEfxSmoke->startDemoDrawOff();
}
} // namespace Imomushi
} // namespace Game
