#include "Game/Entities/Armor.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/rumble.h"

namespace Game {
namespace Armor {

/*
 * --INFO--
 * Address:	80285ED8
 * Size:	0004CC
 */
void FSM::init(EnemyBase* enemy)
{
	create(ARMOR_StateCount);
	registerState(new StateDead);
	registerState(new StateStay);
	registerState(new StateAppear);
	registerState(new StateDive);
	registerState(new StateMove);
	registerState(new StateMoveSide);
	registerState(new StateMoveCentre);
	registerState(new StateMoveTop);
	registerState(new StateGoHome);
	registerState(new StateAttack1);
	registerState(new StateAttack2);
	registerState(new StateEat);
	registerState(new StateFlick);
	registerState(new StateFail);
}

/*
 * --INFO--
 * Address:	802863A4
 * Size:	00005C
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->deathProcedure();
	enemy->disableEvent(0, EB_IsCullable);
	enemy->m_targetVelocity = Vector3f(0.0f);
	enemy->startMotion(0, nullptr);
}

/*
 * --INFO--
 * Address:	80286400
 * Size:	000090
 */
void StateDead::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	mr       r3, r4
	stw      r0, 0x24(r1)
	lwz      r5, 0x188(r4)
	lbz      r0, 0x24(r5)
	cmplwi   r0, 0
	beq      lbl_80286480
	lwz      r0, 0x1c(r5)
	cmplwi   r0, 2
	bne      lbl_80286470
	lwz      r12, 0(r4)
	addi     r3, r1, 8
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	addi     r5, r1, 0x14
	lfs      f1, 0xc(r1)
	li       r4, 9
	lfs      f0, 0x10(r1)
	li       r6, 2
	stfs     f2, 0x14(r1)
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	b        lbl_80286480

lbl_80286470:
	cmplwi   r0, 0x3e8
	bne      lbl_80286480
	li       r4, 0
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg

lbl_80286480:
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80286490
 * Size:	000004
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	80286494
 * Size:	000070
 */
void StateStay::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->hardConstraintOn();
	enemy->disableEvent(0, EB_LifegaugeVisible);
	enemy->disableEvent(0, EB_IsAnimating);
	enemy->m_targetVelocity = Vector3f(0.0f);
	enemy->startMotion(1, nullptr);
	enemy->stopMotion();
}

/*
 * --INFO--
 * Address:	80286504
 * Size:	0000A0
 */
void StateStay::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	mr       r3, r30
	bl       setBridgeSearch__Q34Game5Armor3ObjFv
	lwz      r7, 0xc0(r30)
	mr       r3, r30
	li       r4, 0
	li       r5, 0
	lfs      f1, 0x424(r7)
	li       r6, 0
	lfs      f2, 0x3d4(r7)
	bl
"getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
	or.      r31, r3, r3
	bne      lbl_80286564
	mr       r3, r30
	bl       isBreakBridge__Q34Game5Armor3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80286588

lbl_80286564:
	stw      r31, 0x230(r30)
	mr       r3, r29
	mr       r4, r30
	li       r5, 2
	lwz      r12, 0(r29)
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80286588:
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
 * Address:	802865A4
 * Size:	00003C
 */
void StateStay::cleanup(EnemyBase* enemy)
{
	enemy->hardConstraintOff();
	enemy->enableEvent(0, EB_IsAnimating);
}

/*
 * --INFO--
 * Address:	802865E0
 * Size:	0000B8
 */
void StateAppear::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* armor = static_cast<Obj*>(enemy);
	armor->lifeIncrement();
	armor->hardConstraintOn();
	armor->enableEvent(0, EB_LifegaugeVisible);
	armor->m_targetVelocity = Vector3f(0.0f);
	armor->setEmotionExcitement();
	armor->startMotion(1, nullptr);
	armor->createAppearEffect();

	Vector3f pos = armor->getPosition();
	rumbleMgr->startRumble(10, pos, 2);
}

/*
 * --INFO--
 * Address:	80286698
 * Size:	0000CC
 */
void StateAppear::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	lwz      r5, 0x188(r4)
	lbz      r0, 0x24(r5)
	cmplwi   r0, 0
	beq      lbl_80286754
	lwz      r0, 0x1c(r5)
	cmplwi   r0, 2
	bne      lbl_80286704
	lwz      r12, 0(r4)
	addi     r3, r1, 8
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	addi     r5, r1, 0x14
	lfs      f1, 0xc(r1)
	li       r4, 9
	lfs      f0, 0x10(r1)
	li       r6, 2
	stfs     f2, 0x14(r1)
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	b        lbl_80286754

lbl_80286704:
	cmplwi   r0, 0x3e8
	bne      lbl_80286754
	lfs      f1, 0x200(r4)
	lfs      f0, lbl_8051B784@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8028673C
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80286754

lbl_8028673C:
	lwz      r12, 0(r3)
	li       r5, 4
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80286754:
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80286764
 * Size:	000024
 */
void StateAppear::cleanup(EnemyBase* enemy) { enemy->hardConstraintOff(); }

/*
 * --INFO--
 * Address:	80286788
 * Size:	000060
 */
void StateDive::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* armor = static_cast<Obj*>(enemy);
	armor->hardConstraintOn();
	armor->m_targetVelocity = Vector3f(0.0f);
	armor->setEmotionCaution();
	armor->startMotion(2, nullptr);
	armor->createDisAppearEffect();
}

/*
 * --INFO--
 * Address:	802867E8
 * Size:	00009C
 */
void StateDive::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	lwz      r5, 0x188(r4)
	lbz      r0, 0x24(r5)
	cmplwi   r0, 0
	beq      lbl_80286874
	lwz      r0, 0x1c(r5)
	cmplwi   r0, 2
	bne      lbl_80286854
	lwz      r12, 0(r4)
	addi     r3, r1, 8
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	addi     r5, r1, 0x14
	lfs      f1, 0xc(r1)
	li       r4, 0xa
	lfs      f0, 0x10(r1)
	li       r6, 2
	stfs     f2, 0x14(r1)
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	b        lbl_80286874

lbl_80286854:
	cmplwi   r0, 0x3e8
	bne      lbl_80286874
	lwz      r12, 0(r3)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80286874:
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80286884
 * Size:	000024
 */
void StateDive::cleanup(EnemyBase* enemy) { enemy->hardConstraintOff(); }

/*
 * --INFO--
 * Address:	802868A8
 * Size:	000034
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* armor  = static_cast<Obj*>(enemy);
	armor->_2C4 = -1;
	armor->startMotion(3, nullptr);
}

/*
 * --INFO--
 * Address:	802868DC
 * Size:	0004F8
 */
void StateMove::exec(EnemyBase* enemy)
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
	mr       r31, r4
	mr       r30, r3
	lwz      r7, 0xc0(r31)
	li       r4, 0
	mr       r3, r31
	li       r5, 0
	lfs      f1, 0x424(r7)
	li       r6, 0
	lfs      f2, 0x3d4(r7)
	bl
"getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
	or.      r28, r3, r3
	beq      lbl_80286CA0
	stw      r28, 0x230(r31)
	mr       r4, r28
	addi     r3, r1, 0x50
	lwz      r12, 0(r28)
	lwz      r5, 0xc0(r31)
	lwz      r12, 8(r12)
	lfs      f29, 0x334(r5)
	lfs      f30, 0x30c(r5)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x5c
	lwz      r12, 0(r31)
	lfs      f26, 0x50(r1)
	lwz      r12, 8(r12)
	lfs      f27, 0x58(r1)
	mtctr    r12
	bctrl
	lfs      f1, 0x5c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x64(r1)
	addi     r3, r3, atanTable___5JMath@l
	fsubs    f1, f26, f1
	fsubs    f2, f27, f0
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
	fmr      f31, f1
	lfs      f0, lbl_8051B78C@sda21(r2)
	lfs      f1, lbl_8051B788@sda21(r2)
	fmuls    f0, f0, f29
	fmuls    f28, f31, f30
	fmuls    f1, f1, f0
	fabs     f0, f28
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80286A24
	lfs      f0, lbl_8051B784@sda21(r2)
	fcmpo    cr0, f28, f0
	ble      lbl_80286A20
	fmr      f28, f1
	b        lbl_80286A24

lbl_80286A20:
	fneg     f28, f1

lbl_80286A24:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f28, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	mr       r3, r31
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)
	lwz      r12, 0(r31)
	lwz      r4, 0xc0(r31)
	lwz      r12, 0x64(r12)
	lfs      f29, 0x2e4(r4)
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r31
	lfs      f2, 0x1d4(r31)
	lwz      r12, 0(r31)
	frsp     f26, f1
	lfs      f30, 0x1d8(r31)
	lfs      f0, 0x1dc(r31)
	lwz      r12, 0x64(r12)
	stfs     f2, 0x74(r1)
	stfs     f30, 0x78(r1)
	stfs     f0, 0x7c(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f29, f26
	mr       r4, r31
	frsp     f1, f1
	addi     r3, r1, 0x14
	li       r29, 0
	stfs     f0, 0x1d4(r31)
	fmuls    f0, f29, f1
	stfs     f30, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	lwz      r12, 0(r31)
	lwz      r5, 0xc0(r31)
	lwz      r12, 8(r12)
	lfs      f28, 0x58c(r5)
	lfs      f29, 0x564(r5)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 8
	lwz      r12, 0(r28)
	lfs      f30, 0x14(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 8(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x2c
	fsubs    f26, f0, f30
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x20
	lwz      r12, 0(r28)
	lfs      f30, 0x30(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 0x24(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x44
	fsubs    f27, f0, f30
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x38
	lwz      r12, 0(r28)
	lfs      f30, 0x4c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fmuls    f1, f27, f27
	lfs      f2, 0x40(r1)
	fmuls    f0, f29, f29
	fsubs    f2, f2, f30
	fmadds   f1, f26, f26, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80286BBC
	lfs      f0, lbl_8051B78C@sda21(r2)
	fabs     f2, f31
	lfs      f1, lbl_8051B788@sda21(r2)
	fmuls    f0, f0, f28
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_80286BBC
	li       r29, 1

lbl_80286BBC:
	clrlwi.  r0, r29, 0x18
	beq      lbl_80286BD8
	li       r0, 0xa
	mr       r3, r31
	stw      r0, 0x2c4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_80286CD8

lbl_80286BD8:
	mr       r4, r31
	addi     r3, r1, 0x68
	lwz      r12, 0(r31)
	lfs      f26, 0x198(r31)
	lwz      r12, 8(r12)
	lfs      f27, 0x19c(r31)
	lfs      f28, 0x1a0(r31)
	mtctr    r12
	bctrl
	lfs      f0, 0x6c(r1)
	lfs      f2, 0x68(r1)
	fsubs    f3, f0, f27
	lfs      f1, 0x70(r1)
	fsubs    f2, f2, f26
	lfs      f0, lbl_8051B784@sda21(r2)
	fsubs    f1, f1, f28
	fmuls    f3, f3, f3
	fmuls    f4, f1, f1
	fmadds   f1, f2, f2, f3
	fadds    f1, f4, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80286C40
	ble      lbl_80286C44
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80286C44

lbl_80286C40:
	fmr      f1, f0

lbl_80286C44:
	lwz      r4, 0xc0(r31)
	lfs      f0, 0x35c(r4)
	fcmpo    cr0, f1, f0
	ble      lbl_80286C68
	li       r0, 8
	mr       r3, r31
	stw      r0, 0x2c4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_80286CD8

lbl_80286C68:
	lfs      f1, 0x58c(r4)
	mr       r3, r31
	lfs      f2, 0x564(r4)
	li       r4, 0
	li       r5, 0
	li       r6, 0
	bl
"getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
	cmplwi   r3, 0
	beq      lbl_80286CD8
	li       r0, 0xa
	mr       r3, r31
	stw      r0, 0x2c4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_80286CD8

lbl_80286CA0:
	mr       r3, r31
	bl       isBreakBridge__Q34Game5Armor3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80286CC8
	mr       r3, r31
	bl       checkBreakOrMove__Q34Game5Armor3ObjFv
	stw      r3, 0x2c4(r31)
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_80286CD8

lbl_80286CC8:
	li       r0, 8
	mr       r3, r31
	stw      r0, 0x2c4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_80286CD8:
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051B784@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80286D10
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80286D84

lbl_80286D10:
	mr       r3, r31
	li       r4, 1
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_80286D48
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0xc
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80286D84

lbl_80286D48:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_80286D84
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_80286D84
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2c4(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80286D84:
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
 * Address:	80286DD4
 * Size:	000004
 */
void StateMove::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	80286DD8
 * Size:	000034
 */
void StateMoveSide::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* armor  = static_cast<Obj*>(enemy);
	armor->_2C4 = -1;
	armor->startMotion(3, nullptr);
}

/*
 * --INFO--
 * Address:	80286E0C
 * Size:	000128
 */
void StateMoveSide::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0
	li       r6, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	li       r4, 0
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	lwz      r7, 0xc0(r31)
	lfs      f1, 0x424(r7)
	lfs      f2, 0x3d4(r7)
	bl
"getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
	cmplwi   r3, 0
	beq      lbl_80286E64
	li       r0, 4
	mr       r3, r31
	stw      r0, 0x2c4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_80286EA8

lbl_80286E64:
	mr       r3, r31
	bl       isBreakBridge__Q34Game5Armor3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80286E98
	mr       r3, r31
	bl       moveBridgeSide__Q34Game5Armor3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80286EA8
	li       r0, 6
	mr       r3, r31
	stw      r0, 0x2c4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_80286EA8

lbl_80286E98:
	li       r0, 8
	mr       r3, r31
	stw      r0, 0x2c4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_80286EA8:
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051B784@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80286EE0
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80286F1C

lbl_80286EE0:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_80286F1C
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_80286F1C
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2c4(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80286F1C:
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
 * Address:	80286F34
 * Size:	000004
 */
void StateMoveSide::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	80286F38
 * Size:	000034
 */
void StateMoveCentre::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* armor  = static_cast<Obj*>(enemy);
	armor->_2C4 = -1;
	armor->startMotion(3, nullptr);
}

/*
 * --INFO--
 * Address:	80286F6C
 * Size:	000128
 */
void StateMoveCentre::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0
	li       r6, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	li       r4, 0
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	lwz      r7, 0xc0(r31)
	lfs      f1, 0x424(r7)
	lfs      f2, 0x3d4(r7)
	bl
"getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
	cmplwi   r3, 0
	beq      lbl_80286FC4
	li       r0, 4
	mr       r3, r31
	stw      r0, 0x2c4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_80287008

lbl_80286FC4:
	mr       r3, r31
	bl       isBreakBridge__Q34Game5Armor3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80286FF8
	mr       r3, r31
	bl       moveBridgeCentre__Q34Game5Armor3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80287008
	li       r0, 7
	mr       r3, r31
	stw      r0, 0x2c4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_80287008

lbl_80286FF8:
	li       r0, 8
	mr       r3, r31
	stw      r0, 0x2c4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_80287008:
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051B784@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80287040
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8028707C

lbl_80287040:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_8028707C
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_8028707C
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2c4(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8028707C:
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
 * Address:	80287094
 * Size:	000004
 */
void StateMoveCentre::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	80287098
 * Size:	000034
 */
void StateMoveTop::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* armor  = static_cast<Obj*>(enemy);
	armor->_2C4 = -1;
	armor->startMotion(3, nullptr);
}

/*
 * --INFO--
 * Address:	802870CC
 * Size:	000128
 */
void StateMoveTop::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0
	li       r6, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	li       r4, 0
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	lwz      r7, 0xc0(r31)
	lfs      f1, 0x424(r7)
	lfs      f2, 0x3d4(r7)
	bl
"getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
	cmplwi   r3, 0
	beq      lbl_80287124
	li       r0, 4
	mr       r3, r31
	stw      r0, 0x2c4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_80287168

lbl_80287124:
	mr       r3, r31
	bl       isBreakBridge__Q34Game5Armor3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80287158
	mr       r3, r31
	bl       moveBridgeTop__Q34Game5Armor3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80287168
	li       r0, 9
	mr       r3, r31
	stw      r0, 0x2c4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_80287168

lbl_80287158:
	li       r0, 8
	mr       r3, r31
	stw      r0, 0x2c4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_80287168:
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051B784@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802871A0
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802871DC

lbl_802871A0:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802871DC
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_802871DC
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2c4(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802871DC:
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
 * Address:	802871F4
 * Size:	000004
 */
void StateMoveTop::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802871F8
 * Size:	000034
 */
void StateGoHome::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* armor  = static_cast<Obj*>(enemy);
	armor->_2C4 = -1;
	armor->startMotion(3, nullptr);
}

/*
 * --INFO--
 * Address:	8028722C
 * Size:	00021C
 */
void StateGoHome::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stfd     f30, 0x50(r1)
	psq_st   f30, 88(r1), 0, qr0
	stfd     f29, 0x40(r1)
	psq_st   f29, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	lwz      r12, 0(r4)
	mr       r30, r3
	addi     r3, r1, 0x14
	mr       r31, r4
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x19c(r31)
	mr       r3, r31
	lfs      f2, 0x1a0(r31)
	addi     r4, r1, 0x20
	lfs      f0, 0x198(r31)
	stfs     f0, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f2, 0x28(r1)
	lwz      r5, 0xc0(r31)
	lfs      f1, 0x2e4(r5)
	lfs      f2, 0x30c(r5)
	lfs      f3, 0x334(r5)
	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff" lwz
r7, 0xc0(r31) mr       r3, r31 li       r4, 0 li       r5, 0 lfs      f1,
0x564(r7) li       r6, 0 lfs      f2, 0x58c(r7) bl
"getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
	cmplwi   r3, 0
	beq      lbl_802872E4
	li       r0, 0xa
	mr       r3, r31
	stw      r0, 0x2c4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_80287370

lbl_802872E4:
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lfs      f31, 0x198(r31)
	lwz      r12, 8(r12)
	lfs      f30, 0x19c(r31)
	lfs      f29, 0x1a0(r31)
	mtctr    r12
	bctrl
	lfs      f0, 0xc(r1)
	lfs      f2, 8(r1)
	fsubs    f3, f0, f30
	lfs      f1, 0x10(r1)
	fsubs    f2, f2, f31
	lfs      f0, lbl_8051B784@sda21(r2)
	fsubs    f1, f1, f29
	fmuls    f3, f3, f3
	fmuls    f4, f1, f1
	fmadds   f1, f2, f2, f3
	fadds    f1, f4, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8028734C
	ble      lbl_80287350
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80287350

lbl_8028734C:
	fmr      f1, f0

lbl_80287350:
	lwz      r3, 0xc0(r31)
	lfs      f0, 0x384(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_80287370
	li       r0, 3
	mr       r3, r31
	stw      r0, 0x2c4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_80287370:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802873AC
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_802873AC
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2c4(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802873AC:
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051B784@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802873E4
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80287418

lbl_802873E4:
	mr       r3, r31
	li       r4, 1
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_80287418
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0xc
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80287418:
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	psq_l    f29, 72(r1), 0, qr0
	lfd      f29, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r0, 0x74(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	80287448
 * Size:	000004
 */
void StateGoHome::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	8028744C
 * Size:	000058
 */
void StateAttack1::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* armor              = static_cast<Obj*>(enemy);
	armor->m_targetVelocity = Vector3f(0.0f);
	armor->startMotion(4, nullptr);
	armor->_2C4 = -1;
	armor->createBridgeEffect();
}

/*
 * --INFO--
 * Address:	802874A4
 * Size:	00013C
 */
void StateAttack1::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0
	li       r6, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	li       r4, 0
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	lwz      r7, 0xc0(r31)
	lfs      f1, 0x424(r7)
	lfs      f2, 0x3d4(r7)
	bl
"getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
	cmplwi   r3, 0
	beq      lbl_802874F4
	li       r0, 4
	stw      r0, 0x2c4(r31)
	b        lbl_80287534

lbl_802874F4:
	mr       r3, r31
	bl       isBreakBridge__Q34Game5Armor3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8028752C
	mr       r3, r31
	bl       moveBridgeTop__Q34Game5Armor3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80287520
	li       r0, 9
	stw      r0, 0x2c4(r31)
	b        lbl_80287534

lbl_80287520:
	li       r0, 7
	stw      r0, 0x2c4(r31)
	b        lbl_80287534

lbl_8028752C:
	li       r0, 8
	stw      r0, 0x2c4(r31)

lbl_80287534:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_80287594
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 2
	bne      lbl_8028756C
	mr       r3, r31
	bl       isBreakBridge__Q34Game5Armor3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80287594
	mr       r3, r31
	bl       breakTargetBridge__Q34Game5Armor3ObjFv
	b        lbl_80287594

lbl_8028756C:
	cmplwi   r0, 0x3e8
	bne      lbl_80287594
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2c4(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80287594:
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051B784@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802875C8
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802875C8:
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
 * Address:	802875E0
 * Size:	000004
 */
void StateAttack1::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802875E4
 * Size:	000040
 */
void StateAttack2::init(EnemyBase* enemy, StateArg* stateArg)
{
	static_cast<Obj*>(enemy)->_2C8 = 0.0f;
	enemy->m_targetVelocity        = Vector3f(0.0f);
	enemy->startMotion(5, nullptr);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r3, r4
	lfs      f0, lbl_8051B784@sda21(r2)
	stw      r0, 0x14(r1)
	li       r4, 5
	li       r5, 0
	stfs     f0, 0x2c8(r3)
	stfs     f0, 0x1d4(r3)
	stfs     f0, 0x1d8(r3)
	stfs     f0, 0x1dc(r3)
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80287624
 * Size:	0001B8
 */
void StateAttack2::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	stw      r30, 0x28(r1)
	mr       r30, r3
	mr       r3, r31
	bl       getMotionFrame__Q24Game9EnemyBaseFv
	lfs      f0, lbl_8051B790@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80287668
	lfs      f0, lbl_8051B794@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80287668
	mr       r3, r31
	bl       attackPikmin__Q34Game5Armor3ObjFv

lbl_80287668:
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x2c8(r31)
	lfs      f0, 0x844(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_80287684
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_80287684:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x2c8(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2c8(r31)
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802877C4
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 2
	bne      lbl_802876C0
	mr       r3, r31
	bl       createAttackEffect__Q34Game5Armor3ObjFv
	b        lbl_802877C4

lbl_802876C0:
	cmplwi   r0, 3
	bne      lbl_80287730
	lwz      r6, 0xc0(r31)
	mr       r3, r31
	li       r4, 0
	li       r5, 0
	lfs      f1, 0x5b4(r6)
	lfs      f2, 0x5dc(r6)
	lfs      f3, 0x604(r6)
	bl
"attackNavi__Q24Game9EnemyFuncFPQ24Game8CreaturefffP8CollPartP23Condition<Q24Game4Navi>"
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	addi     r5, r1, 0x14
	lfs      f1, 0xc(r1)
	li       r4, 9
	lfs      f0, 0x10(r1)
	li       r6, 2
	stfs     f2, 0x14(r1)
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	b        lbl_802877C4

lbl_80287730:
	cmplwi   r0, 0x3e8
	bne      lbl_802877C4
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051B784@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80287770
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802877C4

lbl_80287770:
	mr       r3, r31
	bl       getSlotPikiNum__Q34Game5Armor3ObjFv
	cmpwi    r3, 0
	beq      lbl_802877A4
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0xb
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802877C4

lbl_802877A4:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0xd
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802877C4:
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
 * Address:	802877DC
 * Size:	000004
 */
void StateAttack2::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802877E0
 * Size:	00003C
 */
void StateEat::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->m_targetVelocity = Vector3f(0.0f);
	enemy->startMotion(6, nullptr);
}

/*
 * --INFO--
 * Address:	8028781C
 * Size:	000098
 */
void StateEat::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051B784@sda21(r2)
	mr       r6, r4
	stw      r0, 0x14(r1)
	lfs      f1, 0x200(r4)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8028785C
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802878A4

lbl_8028785C:
	lwz      r5, 0x188(r6)
	lbz      r0, 0x24(r5)
	cmplwi   r0, 0
	beq      lbl_802878A4
	lwz      r0, 0x1c(r5)
	cmplwi   r0, 2
	bne      lbl_80287884
	mr       r3, r6
	bl       killSlotPiki__Q34Game5Armor3ObjFv
	b        lbl_802878A4

lbl_80287884:
	cmplwi   r0, 0x3e8
	bne      lbl_802878A4
	lwz      r12, 0(r3)
	li       r5, 4
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802878A4:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802878B4
 * Size:	000004
 */
void StateEat::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802878B8
 * Size:	00003C
 */
void StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->m_targetVelocity = Vector3f(0.0f);
	enemy->startMotion(7, nullptr);
}

/*
 * --INFO--
 * Address:	802878F4
 * Size:	000144
 */
void StateFlick::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051B784@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r4
	lfs      f1, 0x200(r4)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8028793C
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80287A20

lbl_8028793C:
	lwz      r5, 0x188(r30)
	lbz      r0, 0x24(r5)
	cmplwi   r0, 0
	beq      lbl_80287A20
	lwz      r0, 0x1c(r5)
	cmplwi   r0, 2
	bne      lbl_80287A00
	mr       r3, r30
	lwz      r31, 0xc0(r30)
	lwz      r12, 0(r30)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f4, f1
	lfs      f1, 0x514(r31)
	lfs      f2, 0x4c4(r31)
	mr       r3, r30
	lfs      f3, 0x4ec(r31)
	li       r4, 0
	bl
"flickNearbyNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Navi>"
	mr       r3, r30
	lwz      r31, 0xc0(r30)
	lwz      r12, 0(r30)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f4, f1
	lfs      f1, 0x514(r31)
	lfs      f2, 0x4c4(r31)
	mr       r3, r30
	lfs      f3, 0x4ec(r31)
	li       r4, 0
	bl
"flickNearbyPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	mr       r3, r30
	lwz      r31, 0xc0(r30)
	lwz      r12, 0(r30)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f4, f1
	lfs      f1, 0x53c(r31)
	lfs      f2, 0x4c4(r31)
	mr       r3, r30
	lfs      f3, 0x4ec(r31)
	li       r4, 0
	bl
"flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	lfs      f0, lbl_8051B784@sda21(r2)
	stfs     f0, 0x20c(r30)
	b        lbl_80287A20

lbl_80287A00:
	cmplwi   r0, 0x3e8
	bne      lbl_80287A20
	lwz      r12, 0(r3)
	li       r5, 4
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80287A20:
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
 * Address:	80287A38
 * Size:	000004
 */
void StateFlick::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	80287A3C
 * Size:	00003C
 */
void StateFail::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->m_targetVelocity = Vector3f(0.0f);
	enemy->startMotion(8, nullptr);
}

/*
 * --INFO--
 * Address:	80287A78
 * Size:	000080
 */
void StateFail::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051B784@sda21(r2)
	stw      r0, 0x14(r1)
	lfs      f1, 0x200(r4)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80287AB4
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80287AE8

lbl_80287AB4:
	lwz      r5, 0x188(r4)
	lbz      r0, 0x24(r5)
	cmplwi   r0, 0
	beq      lbl_80287AE8
	lwz      r0, 0x1c(r5)
	cmplwi   r0, 0x3e8
	bne      lbl_80287AE8
	lwz      r12, 0(r3)
	li       r5, 4
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80287AE8:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80287AF8
 * Size:	000004
 */
void StateFail::cleanup(EnemyBase* enemy) { }

} // namespace Armor
} // namespace Game
