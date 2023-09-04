#include "Game/Entities/DangoMushi.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "nans.h"

namespace Game {
namespace DangoMushi {

/*
 * --INFO--
 * Address:	802F9A8C
 * Size:	000320
 */
void FSM::init(EnemyBase* enemy)
{
	create(DANGOMUSHI_StateCount);

	registerState(new StateDead);
	registerState(new StateStay);
	registerState(new StateAppear);
	registerState(new StateWait);
	registerState(new StateMove);
	registerState(new StateAttack);
	registerState(new StateTurn);
	registerState(new StateRecover);
	registerState(new StateFlick);
}

/*
 * --INFO--
 * Address:	802F9DAC
 * Size:	000088
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* crab  = OBJ(enemy);
	crab->_2C2 = false;
	crab->deathProcedure();
	crab->mTargetVelocity = Vector3f(0.0f);
	crab->setEmotionCaution();

	if (stateArg) {
		crab->startBlendAnimation(7, true);
	} else {
		crab->startBlendAnimation(7, false);
	}
}

/*
 * --INFO--
 * Address:	802F9E34
 * Size:	00013C
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* crab = OBJ(enemy);

	if (crab->getMotionFrame() > 50.0f) {
		Vector3f crabPos = crab->getPosition();
		cameraMgr->startVibration(6, crabPos, 2);
	}

	if (crab->mCurAnim->mIsPlaying) {
		if (crab->mCurAnim->mType == KEYEVENT_END_BLEND) {
			crab->endBlendAnimation();

		} else if (crab->mCurAnim->mType == KEYEVENT_2) {
			crab->createDeadSmokeEffect();

		} else if (crab->mCurAnim->mType == KEYEVENT_3) {
			crab->createDeadBombEffect();
			Vector3f crabPos = crab->getPosition();
			cameraMgr->startVibration(26, crabPos, 2);
			rumbleMgr->startRumble(14, crabPos, 2);
		} else if (crab->mCurAnim->mType == KEYEVENT_END) {
			crab->kill(nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	802F9F70
 * Size:	000004
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802F9F74
 * Size:	000094
 */
void StateStay::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* crab        = OBJ(enemy);
	crab->mNextState = DANGOMUSHI_NULL;
	crab->_2C4       = 0.0f;
	crab->_2C2       = false;
	crab->enableEvent(0, EB_IsVulnerable);
	crab->enableEvent(0, EB_IsImmuneBitter);
	crab->hardConstraintOn();
	crab->enableEvent(0, EB_IsModelHidden);
	crab->mTargetVelocity = Vector3f(0.0f);
	crab->startBlendAnimation(0, false);
	crab->stopMotion();
}

/*
 * --INFO--
 * Address:	802FA008
 * Size:	000144
 */
void StateStay::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	lfs      f0, lbl_8051D340@sda21(r2)
	mr       r31, r4
	lfs      f1, 0x2c8(r4)
	mr       r30, r3
	fcmpo    cr0, f1, f0
	ble      lbl_802FA070
	mr       r3, r31
	bl       addShadowScale__Q34Game10DangoMushi3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802FA12C
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 2
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802FA12C

lbl_802FA070:
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	li       r4, 0
	lfs      f31, 0x3ac(r5)
	fmr      f1, f31
	bl
"isThereOlimar__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Navi>"
	clrlwi.  r0, r3, 0x18
	beq      lbl_802FA098
	li       r0, 1
	b        lbl_802FA0BC

lbl_802FA098:
	fmr      f1, f31
	mr       r3, r31
	li       r4, 0
	bl
"isTherePikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
	clrlwi.  r0, r3, 0x18
	beq      lbl_802FA0B8
	li       r0, 1
	b        lbl_802FA0BC

lbl_802FA0B8:
	li       r0, 0

lbl_802FA0BC:
	clrlwi.  r0, r0, 0x18
	beq      lbl_802FA12C
	lwz      r3, shadowMgr__4Game@sda21(r13)
	mr       r4, r31
	bl       addShadow__Q24Game9ShadowMgrFPQ24Game8Creature
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x597d
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       addShadowScale__Q34Game10DangoMushi3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802FA12C
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 2
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802FA12C:
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FA14C
 * Size:	000004
 */
void StateStay::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802FA150
 * Size:	00008C
 */
void StateAppear::init(EnemyBase* enemy, StateArg* stateArg)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051D340@sda21(r2)
	stw      r0, 0x14(r1)
	li       r0, -1
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	stw      r0, 0x2cc(r4)
	li       r0, 0
	stfs     f0, 0x2c4(r4)
	stb      r0, 0x2c2(r4)
	lwz      r0, 0x1e0(r4)
	ori      r0, r0, 1
	stw      r0, 0x1e0(r4)
	lwz      r0, 0x1e0(r4)
	oris     r0, r0, 0x40
	stw      r0, 0x1e0(r4)
	bl       hardConstraintOn__Q24Game9EnemyBaseFv
	lwz      r0, 0x1e0(r31)
	mr       r3, r31
	lfs      f0, lbl_8051D340@sda21(r2)
	li       r4, 0
	rlwinm   r0, r0, 0, 2, 0
	li       r5, 0
	stw      r0, 0x1e0(r31)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	bl       startBlendAnimation__Q34Game10DangoMushi3ObjFib
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FA1DC
 * Size:	000400
 */
void StateAppear::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x120(r1)
	mflr     r0
	stw      r0, 0x124(r1)
	stfd     f31, 0x110(r1)
	psq_st   f31, 280(r1), 0, qr0
	stfd     f30, 0x100(r1)
	psq_st   f30, 264(r1), 0, qr0
	stfd     f29, 0xf0(r1)
	psq_st   f29, 248(r1), 0, qr0
	stfd     f28, 0xe0(r1)
	psq_st   f28, 232(r1), 0, qr0
	stfd     f27, 0xd0(r1)
	psq_st   f27, 216(r1), 0, qr0
	stfd     f26, 0xc0(r1)
	psq_st   f26, 200(r1), 0, qr0
	stw      r31, 0xbc(r1)
	stw      r30, 0xb8(r1)
	stw      r29, 0xb4(r1)
	stw      r28, 0xb0(r1)
	mr       r28, r3
	lwz      r3, 0x188(r4)
	mr       r30, r4
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802FA58C
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x7d0
	bne      lbl_802FA258
	mr       r3, r30
	bl       endBlendAnimation__Q34Game10DangoMushi3ObjFv
	b        lbl_802FA58C

lbl_802FA258:
	cmplwi   r0, 2
	bne      lbl_802FA2C4
	mr       r3, r30
	bl       createAppearSmokeEffect__Q34Game10DangoMushi3ObjFv
	mr       r4, r30
	addi     r3, r1, 0x8c
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x8c(r1)
	addi     r5, r1, 0xa4
	lfs      f1, 0x90(r1)
	li       r4, 0x1b
	lfs      f0, 0x94(r1)
	li       r6, 2
	stfs     f2, 0xa4(r1)
	lwz      r3, cameraMgr__4Game@sda21(r13)
	stfs     f1, 0xa8(r1)
	stfs     f0, 0xac(r1)
	bl       "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	addi     r5, r1, 0xa4
	li       r4, 0xf
	li       r6, 2
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	b        lbl_802FA58C

lbl_802FA2C4:
	cmplwi   r0, 3
	bne      lbl_802FA2D8
	mr       r3, r30
	bl       setBossAppearBGM__Q34Game10DangoMushi3ObjFv
	b        lbl_802FA58C

lbl_802FA2D8:
	cmplwi   r0, 4
	bne      lbl_802FA338
	lwz      r12, 0(r4)
	addi     r3, r1, 0x80
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x80(r1)
	addi     r5, r1, 0x98
	lfs      f1, 0x84(r1)
	li       r4, 0xf
	lfs      f0, 0x88(r1)
	li       r6, 2
	stfs     f2, 0x98(r1)
	lwz      r3, cameraMgr__4Game@sda21(r13)
	stfs     f1, 0x9c(r1)
	stfs     f0, 0xa0(r1)
	bl       "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	addi     r5, r1, 0x98
	li       r4, 0xb
	li       r6, 2
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	b        lbl_802FA58C

lbl_802FA338:
	cmplwi   r0, 0x3e8
	bne      lbl_802FA58C
	mr       r3, r30
	bl       getSearchedTarget__Q34Game10DangoMushi3ObjFv
	or.      r29, r3, r3
	beq      lbl_802FA56C
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_802FA56C
	lwz      r0, 0x44(r3)
	cmpwi    r0, 4
	beq      lbl_802FA56C
	mr       r4, r29
	lwz      r5, 0xc0(r30)
	lwz      r12, 0(r29)
	addi     r3, r1, 0x68
	lfs      f30, 0x58c(r5)
	lwz      r12, 8(r12)
	lfs      f31, 0x564(r5)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f2, 0x68(r1)
	lwz      r12, 0(r30)
	addi     r3, r1, 0x74
	lfs      f1, 0x6c(r1)
	lfs      f0, 0x70(r1)
	lwz      r12, 8(r12)
	stfs     f2, 0x50(r1)
	stfs     f1, 0x54(r1)
	stfs     f0, 0x58(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x74(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x7c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x50(r1)
	lfs      f0, 0x58(r1)
	lfs      f4, 0x78(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x5c(r1)
	stfs     f4, 0x60(r1)
	stfs     f3, 0x64(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r30)
	fmr      f26, f1
	mr       r3, r30
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f26
	bl       angDist__Fff
	mr       r4, r30
	fmr      f28, f1
	lwz      r12, 0(r30)
	addi     r3, r1, 0x14
	li       r31, 0
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 8
	lwz      r12, 0(r29)
	lfs      f29, 0x14(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f0, 8(r1)
	lwz      r12, 0(r30)
	addi     r3, r1, 0x2c
	fsubs    f26, f0, f29
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x20
	lwz      r12, 0(r29)
	lfs      f29, 0x30(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f0, 0x24(r1)
	lwz      r12, 0(r30)
	addi     r3, r1, 0x44
	fsubs    f27, f0, f29
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x38
	lwz      r12, 0(r29)
	lfs      f29, 0x4c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fmuls    f1, f27, f27
	lfs      f2, 0x40(r1)
	fmuls    f0, f31, f31
	fsubs    f2, f2, f29
	fmadds   f1, f26, f26, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802FA514
	lfs      f0, lbl_8051D34C@sda21(r2)
	fabs     f2, f28
	lfs      f1, lbl_8051D348@sda21(r2)
	fmuls    f0, f0, f30
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_802FA514
	li       r31, 1

lbl_802FA514:
	clrlwi.  r0, r31, 0x18
	beq      lbl_802FA540
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	li       r5, 5
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802FA58C

lbl_802FA540:
	mr       r3, r30
	bl       setRandTarget__Q34Game10DangoMushi3ObjFv
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	li       r5, 4
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802FA58C

lbl_802FA56C:
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	li       r5, 3
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802FA58C:
	psq_l    f31, 280(r1), 0, qr0
	lfd      f31, 0x110(r1)
	psq_l    f30, 264(r1), 0, qr0
	lfd      f30, 0x100(r1)
	psq_l    f29, 248(r1), 0, qr0
	lfd      f29, 0xf0(r1)
	psq_l    f28, 232(r1), 0, qr0
	lfd      f28, 0xe0(r1)
	psq_l    f27, 216(r1), 0, qr0
	lfd      f27, 0xd0(r1)
	psq_l    f26, 200(r1), 0, qr0
	lfd      f26, 0xc0(r1)
	lwz      r31, 0xbc(r1)
	lwz      r30, 0xb8(r1)
	lwz      r29, 0xb4(r1)
	lwz      r0, 0x124(r1)
	lwz      r28, 0xb0(r1)
	mtlr     r0
	addi     r1, r1, 0x120
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FA5DC
 * Size:	000030
 */
void StateAppear::cleanup(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r3, r4
	stw      r0, 0x14(r1)
	lwz      r0, 0x1e0(r4)
	rlwinm   r0, r0, 0, 0xa, 8
	stw      r0, 0x1e0(r4)
	bl       hardConstraintOff__Q24Game9EnemyBaseFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FA60C
 * Size:	00009C
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051D340@sda21(r2)
	stw      r0, 0x14(r1)
	li       r0, -1
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	stw      r30, 8(r1)
	mr       r30, r5
	stw      r0, 0x2cc(r4)
	stfs     f0, 0x2c4(r4)
	bl       setRandTarget__Q34Game10DangoMushi3ObjFv
	li       r0, 0
	lfs      f0, lbl_8051D340@sda21(r2)
	stb      r0, 0x2c2(r31)
	cmplwi   r30, 0
	lwz      r0, 0x1e0(r31)
	ori      r0, r0, 1
	stw      r0, 0x1e0(r31)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	beq      lbl_802FA680
	mr       r3, r31
	li       r4, 1
	li       r5, 1
	bl       startBlendAnimation__Q34Game10DangoMushi3ObjFib
	b        lbl_802FA690

lbl_802FA680:
	mr       r3, r31
	li       r4, 1
	li       r5, 0
	bl       startBlendAnimation__Q34Game10DangoMushi3ObjFib

lbl_802FA690:
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
 * Address:	802FA6A8
 * Size:	000364
 */
void StateWait::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0xf0(r1)
	mflr     r0
	stw      r0, 0xf4(r1)
	stfd     f31, 0xe0(r1)
	psq_st   f31, 232(r1), 0, qr0
	stfd     f30, 0xd0(r1)
	psq_st   f30, 216(r1), 0, qr0
	stfd     f29, 0xc0(r1)
	psq_st   f29, 200(r1), 0, qr0
	stfd     f28, 0xb0(r1)
	psq_st   f28, 184(r1), 0, qr0
	stfd     f27, 0xa0(r1)
	psq_st   f27, 168(r1), 0, qr0
	stfd     f26, 0x90(r1)
	psq_st   f26, 152(r1), 0, qr0
	stw      r31, 0x8c(r1)
	stw      r30, 0x88(r1)
	stw      r29, 0x84(r1)
	stw      r28, 0x80(r1)
	lfs      f0, lbl_8051D340@sda21(r2)
	mr       r31, r4
	lfs      f1, 0x200(r4)
	mr       r30, r3
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802FA734
	li       r0, 0
	li       r5, 0
	stw      r0, 0x2cc(r31)
	addi     r6, r2, lbl_8051D350@sda21
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802FA9BC

lbl_802FA734:
	mr       r3, r31
	bl       getSearchedTarget__Q34Game10DangoMushi3ObjFv
	or.      r28, r3, r3
	beq      lbl_802FA938
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_802FA938
	lwz      r0, 0x44(r3)
	cmpwi    r0, 4
	beq      lbl_802FA938
	mr       r4, r28
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r28)
	addi     r3, r1, 0x68
	lfs      f30, 0x58c(r5)
	lwz      r12, 8(r12)
	lfs      f31, 0x564(r5)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f2, 0x68(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x74
	lfs      f1, 0x6c(r1)
	lfs      f0, 0x70(r1)
	lwz      r12, 8(r12)
	stfs     f2, 0x50(r1)
	stfs     f1, 0x54(r1)
	stfs     f0, 0x58(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x74(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x7c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x50(r1)
	lfs      f0, 0x58(r1)
	lfs      f4, 0x78(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x5c(r1)
	stfs     f4, 0x60(r1)
	stfs     f3, 0x64(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f26, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f26
	bl       angDist__Fff
	mr       r4, r31
	fmr      f28, f1
	lwz      r12, 0(r31)
	addi     r3, r1, 0x14
	li       r29, 0
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 8
	lwz      r12, 0(r28)
	lfs      f29, 0x14(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 8(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x2c
	fsubs    f26, f0, f29
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x20
	lwz      r12, 0(r28)
	lfs      f29, 0x30(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 0x24(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x44
	fsubs    f27, f0, f29
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x38
	lwz      r12, 0(r28)
	lfs      f29, 0x4c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fmuls    f1, f27, f27
	lfs      f2, 0x40(r1)
	fmuls    f0, f31, f31
	fsubs    f2, f2, f29
	fmadds   f1, f26, f26, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802FA908
	lfs      f0, lbl_8051D34C@sda21(r2)
	fabs     f2, f28
	lfs      f1, lbl_8051D348@sda21(r2)
	fmuls    f0, f0, f30
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_802FA908
	li       r29, 1

lbl_802FA908:
	clrlwi.  r0, r29, 0x18
	beq      lbl_802FA924
	li       r0, 5
	mr       r3, r31
	stw      r0, 0x2cc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802FA958

lbl_802FA924:
	li       r0, 4
	mr       r3, r31
	stw      r0, 0x2cc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802FA958

lbl_802FA938:
	lfs      f1, 0x2c4(r31)
	lfs      f0, lbl_8051D358@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802FA958
	li       r0, 4
	mr       r3, r31
	stw      r0, 0x2cc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_802FA958:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2c4(r31)
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802FA9BC
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x7d0
	bne      lbl_802FA994
	mr       r3, r31
	bl       endBlendAnimation__Q34Game10DangoMushi3ObjFv
	b        lbl_802FA9BC

lbl_802FA994:
	cmplwi   r0, 0x3e8
	bne      lbl_802FA9BC
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2cc(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802FA9BC:
	psq_l    f31, 232(r1), 0, qr0
	lfd      f31, 0xe0(r1)
	psq_l    f30, 216(r1), 0, qr0
	lfd      f30, 0xd0(r1)
	psq_l    f29, 200(r1), 0, qr0
	lfd      f29, 0xc0(r1)
	psq_l    f28, 184(r1), 0, qr0
	lfd      f28, 0xb0(r1)
	psq_l    f27, 168(r1), 0, qr0
	lfd      f27, 0xa0(r1)
	psq_l    f26, 152(r1), 0, qr0
	lfd      f26, 0x90(r1)
	lwz      r31, 0x8c(r1)
	lwz      r30, 0x88(r1)
	lwz      r29, 0x84(r1)
	lwz      r0, 0xf4(r1)
	lwz      r28, 0x80(r1)
	mtlr     r0
	addi     r1, r1, 0xf0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FAA0C
 * Size:	000004
 */
void StateWait::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802FAA10
 * Size:	00005C
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051D340@sda21(r2)
	mr       r3, r4
	stw      r0, 0x14(r1)
	li       r5, -1
	li       r0, 0
	stfs     f0, 0x2c4(r4)
	li       r4, 2
	stw      r5, 0x2cc(r3)
	li       r5, 0
	stb      r0, 0x2c2(r3)
	lwz      r0, 0x1e0(r3)
	ori      r0, r0, 1
	stw      r0, 0x1e0(r3)
	stfs     f0, 0x1d4(r3)
	stfs     f0, 0x1d8(r3)
	stfs     f0, 0x1dc(r3)
	bl       startBlendAnimation__Q34Game10DangoMushi3ObjFib
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FAA6C
 * Size:	0007A8
 */
void StateMove::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x180(r1)
	mflr     r0
	stw      r0, 0x184(r1)
	stfd     f31, 0x170(r1)
	psq_st   f31, 376(r1), 0, qr0
	stfd     f30, 0x160(r1)
	psq_st   f30, 360(r1), 0, qr0
	stfd     f29, 0x150(r1)
	psq_st   f29, 344(r1), 0, qr0
	stfd     f28, 0x140(r1)
	psq_st   f28, 328(r1), 0, qr0
	stfd     f27, 0x130(r1)
	psq_st   f27, 312(r1), 0, qr0
	stfd     f26, 0x120(r1)
	psq_st   f26, 296(r1), 0, qr0
	stw      r31, 0x11c(r1)
	stw      r30, 0x118(r1)
	stw      r29, 0x114(r1)
	stw      r28, 0x110(r1)
	lfs      f0, lbl_8051D340@sda21(r2)
	mr       r31, r4
	lfs      f1, 0x200(r4)
	mr       r30, r3
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802FAAF8
	li       r0, 0
	li       r5, 0
	stw      r0, 0x2cc(r31)
	addi     r6, r2, lbl_8051D350@sda21
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802FB1C4

lbl_802FAAF8:
	mr       r3, r31
	bl       getSearchedTarget__Q34Game10DangoMushi3ObjFv
	or.      r28, r3, r3
	beq      lbl_802FAEA8
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_802FAEA8
	lwz      r0, 0x44(r3)
	cmpwi    r0, 4
	beq      lbl_802FAEA8
	mr       r4, r28
	addi     r3, r1, 0xe0
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f2, 0xe0(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0xec
	lfs      f1, 0xe4(r1)
	lfs      f0, 0xe8(r1)
	lwz      r12, 8(r12)
	stfs     f2, 0xc8(r1)
	stfs     f1, 0xcc(r1)
	stfs     f0, 0xd0(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0xec(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0xf4(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0xc8(r1)
	lfs      f0, 0xd0(r1)
	lfs      f4, 0xf0(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0xd4(r1)
	stfs     f4, 0xd8(r1)
	stfs     f3, 0xdc(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f26, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f26
	bl       angDist__Fff
	mr       r4, r31
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r31)
	fmr      f31, f1
	addi     r3, r1, 0x5c
	lfs      f28, 0x58c(r5)
	lwz      r12, 8(r12)
	li       r29, 0
	lfs      f29, 0x564(r5)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x50
	lwz      r12, 0(r28)
	lfs      f30, 0x5c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 0x50(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x74
	fsubs    f26, f0, f30
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x68
	lwz      r12, 0(r28)
	lfs      f30, 0x78(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 0x6c(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x8c
	fsubs    f27, f0, f30
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x80
	lwz      r12, 0(r28)
	lfs      f30, 0x94(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fmuls    f1, f27, f27
	lfs      f2, 0x88(r1)
	fmuls    f0, f29, f29
	fsubs    f2, f2, f30
	fmadds   f1, f26, f26, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802FACCC
	lfs      f0, lbl_8051D34C@sda21(r2)
	fabs     f2, f31
	lfs      f1, lbl_8051D348@sda21(r2)
	fmuls    f0, f0, f28
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_802FACCC
	li       r29, 1

lbl_802FACCC:
	clrlwi.  r0, r29, 0x18
	beq      lbl_802FACE8
	li       r0, 5
	mr       r3, r31
	stw      r0, 0x2cc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802FB0DC

lbl_802FACE8:
	mr       r4, r28
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r28)
	addi     r3, r1, 0x38
	lfs      f29, 0x334(r5)
	lwz      r12, 8(r12)
	lfs      f28, 0x30c(r5)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f2, 0x38(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x44
	lfs      f1, 0x3c(r1)
	lfs      f0, 0x40(r1)
	lwz      r12, 8(r12)
	stfs     f2, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x44(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x4c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x20(r1)
	lfs      f0, 0x28(r1)
	lfs      f4, 0x48(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x2c(r1)
	stfs     f4, 0x30(r1)
	stfs     f3, 0x34(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f26, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f26
	bl       angDist__Fff
	fmuls    f26, f1, f28
	lfs      f0, lbl_8051D34C@sda21(r2)
	lfs      f1, lbl_8051D348@sda21(r2)
	fmuls    f0, f0, f29
	fabs     f2, f26
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_802FADD4
	lfs      f0, lbl_8051D340@sda21(r2)
	fcmpo    cr0, f26, f0
	ble      lbl_802FADD0
	fmr      f26, f1
	b        lbl_802FADD4

lbl_802FADD0:
	fneg     f26, f1

lbl_802FADD4:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f26, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	fabs     f2, f31
	lfs      f0, lbl_8051D34C@sda21(r2)
	lfs      f3, 0x1fc(r31)
	lfs      f1, lbl_8051D348@sda21(r2)
	frsp     f2, f2
	stfs     f3, 0x1a8(r31)
	lwz      r4, 0xc0(r31)
	lfs      f3, 0x58c(r4)
	fmuls    f0, f0, f3
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_802FAE94
	mr       r3, r31
	lfs      f28, 0x2e4(r4)
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r31
	lfs      f2, 0x1d4(r31)
	lwz      r12, 0(r31)
	frsp     f26, f1
	lfs      f31, 0x1d8(r31)
	lfs      f0, 0x1dc(r31)
	lwz      r12, 0x64(r12)
	stfs     f2, 0xbc(r1)
	stfs     f31, 0xc0(r1)
	stfs     f0, 0xc4(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f28, f26
	frsp     f1, f1
	stfs     f0, 0x1d4(r31)
	fmuls    f0, f28, f1
	stfs     f31, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	b        lbl_802FB0DC

lbl_802FAE94:
	lfs      f0, lbl_8051D340@sda21(r2)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	b        lbl_802FB0DC

lbl_802FAEA8:
	mr       r3, r31
	bl       isReachedTarget__Q34Game10DangoMushi3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802FAECC
	li       r0, 3
	mr       r3, r31
	stw      r0, 0x2cc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802FB0DC

lbl_802FAECC:
	lfs      f1, 0x2c4(r31)
	lfs      f0, lbl_8051D35C@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802FAEF0
	li       r0, 3
	mr       r3, r31
	stw      r0, 0x2cc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802FB0DC

lbl_802FAEF0:
	mr       r4, r31
	addi     r3, r1, 0xb0
	lwz      r12, 0(r31)
	lfs      f27, 0x2d0(r31)
	lwz      r12, 8(r12)
	lfs      f30, 0x2d8(r31)
	mtctr    r12
	bctrl
	lfs      f4, 0xb0(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0xb8(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0xb4(r1)
	fsubs    f1, f27, f4
	fsubs    f2, f30, f0
	stfs     f4, 0xa4(r1)
	stfs     f3, 0xa8(r1)
	stfs     f0, 0xac(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f26, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f26
	bl       angDist__Fff
	mr       r4, r31
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r31)
	fmr      f31, f1
	addi     r3, r1, 0x14
	lfs      f29, 0x334(r5)
	lwz      r12, 8(r12)
	lfs      f28, 0x30c(r5)
	mtctr    r12
	bctrl
	lfs      f4, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x18(r1)
	fsubs    f1, f27, f4
	fsubs    f2, f30, f0
	stfs     f4, 8(r1)
	stfs     f3, 0xc(r1)
	stfs     f0, 0x10(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f26, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f26
	bl       angDist__Fff
	fmuls    f26, f1, f28
	lfs      f0, lbl_8051D34C@sda21(r2)
	lfs      f1, lbl_8051D348@sda21(r2)
	fmuls    f0, f0, f29
	fabs     f2, f26
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_802FB01C
	lfs      f0, lbl_8051D340@sda21(r2)
	fcmpo    cr0, f26, f0
	ble      lbl_802FB018
	fmr      f26, f1
	b        lbl_802FB01C

lbl_802FB018:
	fneg     f26, f1

lbl_802FB01C:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f26, f1
	bl       roundAng__Ff
	fabs     f3, f31
	stfs     f1, 0x1fc(r31)
	lfs      f0, lbl_8051D360@sda21(r2)
	lfs      f2, 0x1fc(r31)
	frsp     f1, f3
	stfs     f2, 0x1a8(r31)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802FB0CC
	mr       r3, r31
	lwz      r4, 0xc0(r31)
	lwz      r12, 0(r31)
	lfs      f28, 0x2e4(r4)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r31
	lfs      f2, 0x1d4(r31)
	lwz      r12, 0(r31)
	frsp     f26, f1
	lfs      f31, 0x1d8(r31)
	lfs      f0, 0x1dc(r31)
	lwz      r12, 0x64(r12)
	stfs     f2, 0x98(r1)
	stfs     f31, 0x9c(r1)
	stfs     f0, 0xa0(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f28, f26
	frsp     f1, f1
	stfs     f0, 0x1d4(r31)
	fmuls    f0, f28, f1
	stfs     f31, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	b        lbl_802FB0DC

lbl_802FB0CC:
	lfs      f0, lbl_8051D340@sda21(r2)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)

lbl_802FB0DC:
	mr       r3, r31
	bl       isFinishMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802FB0FC
	lfs      f0, lbl_8051D340@sda21(r2)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)

lbl_802FB0FC:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2c4(r31)
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802FB1C4
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x7d0
	bne      lbl_802FB138
	mr       r3, r31
	bl       endBlendAnimation__Q34Game10DangoMushi3ObjFv
	b        lbl_802FB1C4

lbl_802FB138:
	cmplwi   r0, 2
	bne      lbl_802FB19C
	mr       r4, r31
	addi     r3, r1, 0xf8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0xf8(r1)
	addi     r5, r1, 0x104
	lfs      f1, 0xfc(r1)
	li       r4, 3
	lfs      f0, 0x100(r1)
	li       r6, 2
	stfs     f2, 0x104(r1)
	lwz      r3, cameraMgr__4Game@sda21(r13)
	stfs     f1, 0x108(r1)
	stfs     f0, 0x10c(r1)
	bl       "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	addi     r5, r1, 0x104
	li       r4, 0xb
	li       r6, 2
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	b        lbl_802FB1C4

lbl_802FB19C:
	cmplwi   r0, 0x3e8
	bne      lbl_802FB1C4
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2cc(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802FB1C4:
	psq_l    f31, 376(r1), 0, qr0
	lfd      f31, 0x170(r1)
	psq_l    f30, 360(r1), 0, qr0
	lfd      f30, 0x160(r1)
	psq_l    f29, 344(r1), 0, qr0
	lfd      f29, 0x150(r1)
	psq_l    f28, 328(r1), 0, qr0
	lfd      f28, 0x140(r1)
	psq_l    f27, 312(r1), 0, qr0
	lfd      f27, 0x130(r1)
	psq_l    f26, 296(r1), 0, qr0
	lfd      f26, 0x120(r1)
	lwz      r31, 0x11c(r1)
	lwz      r30, 0x118(r1)
	lwz      r29, 0x114(r1)
	lwz      r0, 0x184(r1)
	lwz      r28, 0x110(r1)
	mtlr     r0
	addi     r1, r1, 0x180
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FB214
 * Size:	000004
 */
void StateMove::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802FB218
 * Size:	000088
 */
void StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051D340@sda21(r2)
	stw      r0, 0x14(r1)
	li       r0, -1
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	stw      r0, 0x2cc(r4)
	li       r4, 0
	li       r0, 1
	stfs     f0, 0x2c4(r31)
	stb      r4, 0x2c0(r31)
	stb      r0, 0x2c2(r31)
	lwz      r0, 0x1e0(r31)
	ori      r0, r0, 1
	stw      r0, 0x1e0(r31)
	lwz      r0, 0x1e0(r31)
	oris     r0, r0, 0x40
	stw      r0, 0x1e0(r31)
	bl       setEmotionExcitement__Q24Game9EnemyBaseFv
	lfs      f0, lbl_8051D340@sda21(r2)
	mr       r3, r31
	li       r4, 3
	li       r5, 0
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	bl       startBlendAnimation__Q34Game10DangoMushi3ObjFib
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FB2A0
 * Size:	000288
 */
void StateAttack::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	lfs      f0, lbl_8051D364@sda21(r2)
	stw      r0, 0x64(r1)
	stw      r31, 0x5c(r1)
	mr       r31, r4
	stw      r30, 0x58(r1)
	mr       r30, r3
	lfs      f1, 0x2c4(r4)
	fcmpo    cr0, f1, f0
	ble      lbl_802FB2DC
	li       r0, 3
	mr       r3, r31
	stw      r0, 0x2cc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_802FB2DC:
	lbz      r0, 0x2c0(r31)
	cmplwi   r0, 0
	beq      lbl_802FB364
	mr       r3, r31
	bl       rollingMove__Q34Game10DangoMushi3ObjFv
	mr       r4, r31
	addi     r3, r1, 0x20
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x20(r1)
	addi     r5, r1, 0x44
	lfs      f1, 0x24(r1)
	li       r4, 0x19
	lfs      f0, 0x28(r1)
	li       r6, 2
	stfs     f2, 0x44(r1)
	lwz      r3, cameraMgr__4Game@sda21(r13)
	stfs     f1, 0x48(r1)
	stfs     f0, 0x4c(r1)
	bl       "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x5180
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	b        lbl_802FB374

lbl_802FB364:
	lfs      f0, lbl_8051D340@sda21(r2)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)

lbl_802FB374:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802FB510
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x7d0
	bne      lbl_802FB39C
	mr       r3, r31
	bl       endBlendAnimation__Q34Game10DangoMushi3ObjFv
	b        lbl_802FB510

lbl_802FB39C:
	cmplwi   r0, 2
	bne      lbl_802FB3B0
	mr       r3, r31
	bl       createEnemyBounceEffect__Q34Game10DangoMushi3ObjFv
	b        lbl_802FB510

lbl_802FB3B0:
	cmplwi   r0, 3
	bne      lbl_802FB424
	mr       r3, r31
	bl       startBossAttackLoopBGM__Q34Game10DangoMushi3ObjFv
	mr       r3, r31
	bl       createEnemyBounceEffect__Q34Game10DangoMushi3ObjFv
	mr       r4, r31
	addi     r3, r1, 0x14
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x14(r1)
	addi     r5, r1, 0x38
	lfs      f1, 0x18(r1)
	li       r4, 0xf
	lfs      f0, 0x1c(r1)
	li       r6, 2
	stfs     f2, 0x38(r1)
	lwz      r3, cameraMgr__4Game@sda21(r13)
	stfs     f1, 0x3c(r1)
	stfs     f0, 0x40(r1)
	bl       "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	addi     r5, r1, 0x38
	li       r4, 0xe
	li       r6, 2
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	b        lbl_802FB510

lbl_802FB424:
	cmplwi   r0, 4
	bne      lbl_802FB44C
	lbz      r0, 0x2c0(r31)
	cmplwi   r0, 0
	bne      lbl_802FB510
	li       r0, 1
	mr       r3, r31
	stb      r0, 0x2c0(r31)
	bl       startRollingMoveEffect__Q34Game10DangoMushi3ObjFv
	b        lbl_802FB510

lbl_802FB44C:
	cmplwi   r0, 1
	bne      lbl_802FB47C
	mr       r3, r31
	bl       isFinishMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802FB510
	li       r0, 0
	mr       r3, r31
	stb      r0, 0x2c0(r31)
	stb      r0, 0x2c2(r31)
	bl       finishRollingMoveEffect__Q34Game10DangoMushi3ObjFv
	b        lbl_802FB510

lbl_802FB47C:
	cmplwi   r0, 5
	bne      lbl_802FB4E8
	mr       r3, r31
	bl       createEnemyBounceEffect__Q34Game10DangoMushi3ObjFv
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	addi     r5, r1, 0x2c
	lfs      f1, 0xc(r1)
	li       r4, 0x19
	lfs      f0, 0x10(r1)
	li       r6, 2
	stfs     f2, 0x2c(r1)
	lwz      r3, cameraMgr__4Game@sda21(r13)
	stfs     f1, 0x30(r1)
	stfs     f0, 0x34(r1)
	bl       "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	addi     r5, r1, 0x2c
	li       r4, 0xe
	li       r6, 2
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	b        lbl_802FB510

lbl_802FB4E8:
	cmplwi   r0, 0x3e8
	bne      lbl_802FB510
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2cc(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802FB510:
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FB528
 * Size:	000058
 */
void StateAttack::cleanup(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	lwz      r0, 0x1e0(r4)
	rlwinm   r0, r0, 0, 0xa, 8
	stw      r0, 0x1e0(r4)
	bl       setEmotionCaution__Q24Game9EnemyBaseFv
	li       r0, 0
	mr       r3, r31
	stb      r0, 0x2c0(r31)
	stb      r0, 0x2c2(r31)
	bl       finishRollingMoveEffect__Q34Game10DangoMushi3ObjFv
	mr       r3, r31
	bl       finishBossAttackLoopBGM__Q34Game10DangoMushi3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FB580
 * Size:	0000D4
 */
void StateTurn::init(EnemyBase* enemy, StateArg* stateArg)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lfs      f0, lbl_8051D340@sda21(r2)
	li       r5, 0
	stw      r0, 0x34(r1)
	li       r0, -1
	stw      r31, 0x2c(r1)
	mr       r31, r4
	mr       r3, r31
	stw      r0, 0x2cc(r4)
	li       r0, 0
	li       r4, 5
	stfs     f0, 0x2c4(r31)
	stb      r0, 0x2c2(r31)
	lwz      r0, 0x1e0(r31)
	oris     r0, r0, 0x20
	stw      r0, 0x1e0(r31)
	lwz      r0, 0x1e0(r31)
	ori      r0, r0, 1
	stw      r0, 0x1e0(r31)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	bl       startBlendAnimation__Q34Game10DangoMushi3ObjFib
	mr       r3, r31
	bl       createCrashEnemy__Q34Game10DangoMushi3ObjFv
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	addi     r5, r1, 0x14
	lfs      f1, 0xc(r1)
	li       r4, 0x1b
	lfs      f0, 0x10(r1)
	li       r6, 2
	stfs     f2, 0x14(r1)
	lwz      r3, cameraMgr__4Game@sda21(r13)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	bl       "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	addi     r5, r1, 0x14
	li       r4, 0xf
	li       r6, 2
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FB654
 * Size:	000270
 */
void StateTurn::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	lfs      f0, lbl_8051D340@sda21(r2)
	stw      r0, 0x64(r1)
	stw      r31, 0x5c(r1)
	mr       r31, r4
	stw      r30, 0x58(r1)
	mr       r30, r3
	lfs      f1, 0x200(r4)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802FB698
	li       r0, 0
	mr       r3, r31
	stw      r0, 0x2cc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802FB6BC

lbl_802FB698:
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x894(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_802FB6BC
	li       r0, 7
	mr       r3, r31
	stw      r0, 0x2cc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_802FB6BC:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2c4(r31)
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802FB8AC
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x7d0
	bne      lbl_802FB6F8
	mr       r3, r31
	bl       endBlendAnimation__Q34Game10DangoMushi3ObjFv
	b        lbl_802FB8AC

lbl_802FB6F8:
	cmplwi   r0, 2
	bne      lbl_802FB764
	mr       r3, r31
	bl       createEnemyBounceEffect__Q34Game10DangoMushi3ObjFv
	mr       r4, r31
	addi     r3, r1, 0x20
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x20(r1)
	addi     r5, r1, 0x44
	lfs      f1, 0x24(r1)
	li       r4, 0x15
	lfs      f0, 0x28(r1)
	li       r6, 2
	stfs     f2, 0x44(r1)
	lwz      r3, cameraMgr__4Game@sda21(r13)
	stfs     f1, 0x48(r1)
	stfs     f0, 0x4c(r1)
	bl       "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	addi     r5, r1, 0x44
	li       r4, 0xe
	li       r6, 2
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	b        lbl_802FB8AC

lbl_802FB764:
	cmplwi   r0, 0
	bne      lbl_802FB79C
	lwz      r3, 0x1e0(r31)
	clrlwi.  r0, r3, 0x1f
	beq      lbl_802FB8AC
	rlwinm   r0, r3, 0, 0xb, 9
	mr       r3, r31
	stw      r0, 0x1e0(r31)
	li       r4, 0
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0, 0x1e
	stw      r0, 0x1e0(r31)
	bl       setBodyCollision__Q34Game10DangoMushi3ObjFb
	b        lbl_802FB8AC

lbl_802FB79C:
	cmplwi   r0, 3
	bne      lbl_802FB818
	lwz      r0, 0x1e0(r31)
	mr       r3, r31
	li       r4, 1
	ori      r0, r0, 1
	stw      r0, 0x1e0(r31)
	bl       setBodyCollision__Q34Game10DangoMushi3ObjFb
	mr       r4, r31
	addi     r3, r1, 0x14
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x14(r1)
	addi     r5, r1, 0x38
	lfs      f1, 0x18(r1)
	li       r4, 0xf
	lfs      f0, 0x1c(r1)
	li       r6, 2
	stfs     f2, 0x38(r1)
	lwz      r3, cameraMgr__4Game@sda21(r13)
	stfs     f1, 0x3c(r1)
	stfs     f0, 0x40(r1)
	bl       "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	addi     r5, r1, 0x38
	li       r4, 0xb
	li       r6, 2
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	b        lbl_802FB8AC

lbl_802FB818:
	cmplwi   r0, 4
	bne      lbl_802FB884
	mr       r3, r31
	bl       createBodyTurnEffect__Q34Game10DangoMushi3ObjFv
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	addi     r5, r1, 0x2c
	lfs      f1, 0xc(r1)
	li       r4, 0x19
	lfs      f0, 0x10(r1)
	li       r6, 2
	stfs     f2, 0x2c(r1)
	lwz      r3, cameraMgr__4Game@sda21(r13)
	stfs     f1, 0x30(r1)
	stfs     f0, 0x34(r1)
	bl       "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	addi     r5, r1, 0x2c
	li       r4, 0xe
	li       r6, 2
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	b        lbl_802FB8AC

lbl_802FB884:
	cmplwi   r0, 0x3e8
	bne      lbl_802FB8AC
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2cc(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802FB8AC:
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FB8C4
 * Size:	000068
 */
void StateTurn::cleanup(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f1, lbl_8051D368@sda21(r2)
	stw      r0, 0x14(r1)
	lfs      f2, lbl_8051D35C@sda21(r2)
	stw      r31, 0xc(r1)
	mr       r31, r4
	lfs      f3, lbl_8051D340@sda21(r2)
	mr       r3, r31
	lfs      f4, lbl_8051D36C@sda21(r2)
	li       r4, 0
	bl
	"flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	lwz      r0, 0x1e0(r31)
	mr       r3, r31
	li       r4, 1
	ori      r0, r0, 1
	stw      r0, 0x1e0(r31)
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0xb, 9
	stw      r0, 0x1e0(r31)
	bl       setBodyCollision__Q34Game10DangoMushi3ObjFb
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FB92C
 * Size:	000050
 */
void StateRecover::init(EnemyBase* enemy, StateArg* stateArg)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051D340@sda21(r2)
	mr       r3, r4
	stw      r0, 0x14(r1)
	li       r0, -1
	li       r5, 0
	stw      r0, 0x2cc(r4)
	li       r0, 0
	li       r4, 6
	stfs     f0, 0x2c4(r3)
	stb      r0, 0x2c2(r3)
	stfs     f0, 0x1d4(r3)
	stfs     f0, 0x1d8(r3)
	stfs     f0, 0x1dc(r3)
	bl       startBlendAnimation__Q34Game10DangoMushi3ObjFib
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FB97C
 * Size:	0000FC
 */
void StateRecover::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	lwz      r5, 0x188(r4)
	lbz      r0, 0x24(r5)
	cmplwi   r0, 0
	beq      lbl_802FBA64
	lwz      r0, 0x1c(r5)
	cmplwi   r0, 0x7d0
	bne      lbl_802FB9B8
	mr       r3, r31
	bl       endBlendAnimation__Q34Game10DangoMushi3ObjFv
	b        lbl_802FBA64

lbl_802FB9B8:
	cmplwi   r0, 2
	bne      lbl_802FBA2C
	mr       r3, r31
	bl       createEnemyBounceEffect__Q34Game10DangoMushi3ObjFv
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	addi     r5, r1, 0x14
	lfs      f1, 0xc(r1)
	li       r4, 0xf
	lfs      f0, 0x10(r1)
	li       r6, 2
	stfs     f2, 0x14(r1)
	lwz      r3, cameraMgr__4Game@sda21(r13)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	bl       "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	addi     r5, r1, 0x14
	li       r4, 0xb
	li       r6, 2
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	mr       r3, r31
	bl       startBossFlickBGM__Q34Game10DangoMushi3ObjFv
	b        lbl_802FBA64

lbl_802FBA2C:
	cmplwi   r0, 0x3e8
	bne      lbl_802FBA64
	lfs      f1, 0x1fc(r31)
	li       r5, 8
	lfs      f0, lbl_8051D348@sda21(r2)
	li       r6, 0
	fadds    f0, f1, f0
	stfs     f0, 0x1fc(r31)
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802FBA64:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FBA78
 * Size:	000004
 */
void StateRecover::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802FBA7C
 * Size:	00006C
 */
void StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051D340@sda21(r2)
	stw      r0, 0x14(r1)
	li       r0, -1
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	stw      r0, 0x2cc(r4)
	li       r0, 0
	stfs     f0, 0x2c4(r4)
	stb      r0, 0x2c1(r4)
	stb      r0, 0x2c2(r4)
	bl       setEmotionExcitement__Q24Game9EnemyBaseFv
	lfs      f0, lbl_8051D340@sda21(r2)
	mr       r3, r31
	li       r4, 4
	li       r5, 0
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	bl       startBlendAnimation__Q34Game10DangoMushi3ObjFib
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FBAE8
 * Size:	0001E0
 */
void StateFlick::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r4
	stw      r30, 0x38(r1)
	mr       r30, r3
	mr       r3, r31
	bl       flickHandCollision__Q34Game10DangoMushi3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802FBBC4
	mr       r3, r31
	bl       createWallBreakEffect__Q34Game10DangoMushi3ObjFv
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x5982
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x14
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x14(r1)
	addi     r5, r1, 0x2c
	lfs      f1, 0x18(r1)
	li       r4, 0x19
	lfs      f0, 0x1c(r1)
	li       r6, 2
	stfs     f2, 0x2c(r1)
	lwz      r3, cameraMgr__4Game@sda21(r13)
	stfs     f1, 0x30(r1)
	stfs     f0, 0x34(r1)
	bl       "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	addi     r5, r1, 0x2c
	li       r4, 0xe
	li       r6, 2
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 3
	addi     r6, r2, lbl_8051D350@sda21
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802FBCB0

lbl_802FBBC4:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802FBCB0
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x7d0
	bne      lbl_802FBBEC
	mr       r3, r31
	bl       endBlendAnimation__Q34Game10DangoMushi3ObjFv
	b        lbl_802FBCB0

lbl_802FBBEC:
	cmplwi   r0, 2
	bne      lbl_802FBC1C
	li       r0, 1
	mr       r3, r31
	stb      r0, 0x2c1(r31)
	bl       getMotionFrame__Q24Game9EnemyBaseFv
	lfs      f0, lbl_8051D370@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_802FBCB0
	mr       r3, r31
	bl       createFlickAttackEffect__Q34Game10DangoMushi3ObjFv
	b        lbl_802FBCB0

lbl_802FBC1C:
	cmplwi   r0, 3
	bne      lbl_802FBC88
	li       r0, 0
	mr       r4, r31
	stb      r0, 0x2c1(r31)
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	addi     r5, r1, 0x20
	lfs      f1, 0xc(r1)
	li       r4, 0xf
	lfs      f0, 0x10(r1)
	li       r6, 2
	stfs     f2, 0x20(r1)
	lwz      r3, cameraMgr__4Game@sda21(r13)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	bl       "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	addi     r5, r1, 0x20
	li       r4, 0xb
	li       r6, 2
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	b        lbl_802FBCB0

lbl_802FBC88:
	cmplwi   r0, 0x3e8
	bne      lbl_802FBCB0
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 3
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802FBCB0:
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	802FBCC8
 * Size:	00002C
 */
void StateFlick::cleanup(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r3, r4
	stw      r0, 0x14(r1)
	li       r0, 0
	stb      r0, 0x2c1(r4)
	bl       setEmotionCaution__Q24Game9EnemyBaseFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace DangoMushi
} // namespace Game
