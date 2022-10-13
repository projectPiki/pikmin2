#include "types.h"
#include "Game/Entities/Imomushi.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/MapMgr.h"
namespace Game {
namespace Imomushi {

const char statename[] = "246-ImomushiState";

/*
 * --INFO--
 * Address:	802BA0D8
 * Size:	0004D4
 */
void FSM::init(EnemyBase* enemy)
{
	create(IMOMUSHI_Count);

	registerState(new StateDead);
	registerState(new StateFallDive);
	registerState(new StateFallMove);
	registerState(new StateStay);
	registerState(new StateAppear);
	registerState(new StateDive);
	registerState(new StateMove);
	registerState(new StateGoHome);
	registerState(new StateClimb);
	registerState(new StateAttack);
	registerState(new StateWait);
	// zukan states
	registerState(new StateZukanStay);
	registerState(new StateZukanAppear);
	registerState(new StateZukanMove);
}

/*
 * --INFO--
 * Address:	802BA5AC
 * Size:	000050
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* imomushi = static_cast<Obj*>(enemy);
	imomushi->deathProcedure();
	imomushi->m_velocity2 = 0.0f;
	imomushi->startMotion(0, nullptr);
}

/*
 * --INFO--
 * Address:	802BA5FC
 * Size:	000044
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* imomushi = static_cast<Obj*>(enemy);
	if (imomushi->m_animKeyEvent->m_running) {
		if ((u32)imomushi->m_animKeyEvent->m_type == 1000) {
			imomushi->kill(nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	802BA640
 * Size:	000004
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802BA644
 * Size:	00004C
 */
void StateFallDive::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* imomushi              = static_cast<Obj*>(enemy);
	imomushi->m_nextState      = IMOMUSHI_NULL;
	imomushi->m_targetCreature = nullptr;
	imomushi->m_velocity2      = Vector3f(0.0f);
	imomushi->startMotion(6, nullptr);
}

/*
 * --INFO--
 * Address:	802BA690
 * Size:	000140
 */
void StateFallDive::exec(EnemyBase* enemy)
{
	Obj* imomushi = static_cast<Obj*>(enemy);
	Vector3f vel  = imomushi->getVelocity();
	Vector3f pos  = imomushi->getPosition();

	if ((pos.y - mapMgr->getMinY(pos) > 25.0f) || (vel.y < 0.0f)) { // misordered instructions
		imomushi->finishMotion();
	}
	if (imomushi->m_animKeyEvent->m_running && (u32)imomushi->m_animKeyEvent->m_type == 1000) {
		if (imomushi->m_health <= 0.0f) {
			transit(imomushi, IMOMUSHI_Dead, nullptr);
		} else {
			transit(imomushi, IMOMUSHI_GoHome, nullptr);
		}
	}
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	lwz      r12, 0(r4)
	mr       r30, r3
	addi     r3, r1, 0x14
	mr       r31, r4
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lfs      f31, 0x18(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	addi     r4, r1, 0x20
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x20(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_8051C378@sda21(r2)
	fcmpo    cr0, f31, f0
	bgt      lbl_802BA734
	lfs      f2, 0x24(r1)
	lfs      f0, lbl_8051C37C@sda21(r2)
	fsubs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802BA73C

lbl_802BA734:
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_802BA73C:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802BA7B0
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_802BA7B0
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051C378@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802BA790
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802BA7B0

lbl_802BA790:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 8
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802BA7B0:
	psq_l    f31, 72(r1), 0, qr0
	lwz      r0, 0x54(r1)
	lfd      f31, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BA7D0
 * Size:	000004
 */
void StateFallDive::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802BA7D4
 * Size:	00004C
 */
void StateFallMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* imomushi              = static_cast<Obj*>(enemy);
	imomushi->m_nextState      = IMOMUSHI_NULL;
	imomushi->m_targetCreature = nullptr;
	imomushi->m_velocity2      = Vector3f(0.0f);
	imomushi->startMotion(5, nullptr);
}

/*
 * --INFO--
 * Address:	802BA820
 * Size:	000178
 */
void StateFallMove::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	lwz      r12, 0(r4)
	mr       r30, r3
	addi     r3, r1, 0x14
	mr       r31, r4
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lfs      f31, 0x18(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	addi     r4, r1, 0x20
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x20(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_8051C378@sda21(r2)
	fcmpo    cr0, f31, f0
	bgt      lbl_802BA8C4
	lfs      f2, 0x24(r1)
	lfs      f0, lbl_8051C37C@sda21(r2)
	fsubs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802BA8CC

lbl_802BA8C4:
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_802BA8CC:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802BA978
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_802BA978
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051C378@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802BA920
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802BA978

lbl_802BA920:
	mr       r3, r31
	bl       getRandFruitsPlant__Q34Game8Imomushi3ObjFv
	cmplwi   r3, 0
	stw      r3, 0x230(r31)
	beq      lbl_802BA958
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 7
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802BA978

lbl_802BA958:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 8
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802BA978:
	psq_l    f31, 72(r1), 0, qr0
	lwz      r0, 0x54(r1)
	lfd      f31, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BA998
 * Size:	000004
 */
void StateFallMove::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802BA99C
 * Size:	0000C8
 */
void StateStay::init(EnemyBase* enemy, StateArg* stateArg)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	mr       r0, r4
	li       r4, 0
	stw      r31, 0xc(r1)
	mr       r31, r0
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x1e0(r31)
	li       r0, 1
	mr       r3, r31
	ori      r4, r4, 1
	stw      r4, 0x1e0(r31)
	stb      r0, 0x2c0(r31)
	lwz      r0, 0x1e0(r31)
	oris     r0, r0, 0x40
	stw      r0, 0x1e0(r31)
	lwz      r0, 0x1e0(r31)
	ori      r0, r0, 0x2000
	stw      r0, 0x1e0(r31)
	lwz      r0, 0x1e0(r31)
	rlwinm   r0, r0, 0, 0x15, 0x13
	stw      r0, 0x1e0(r31)
	bl       hardConstraintOn__Q24Game9EnemyBaseFv
	lwz      r0, 0x1e0(r31)
	mr       r3, r31
	lfs      f0, lbl_8051C378@sda21(r2)
	li       r4, 1
	rlwinm   r0, r0, 0, 0x11, 0xf
	li       r5, 0
	stw      r0, 0x1e0(r31)
	lwz      r0, 0x1e0(r31)
	oris     r0, r0, 0x4000
	stw      r0, 0x1e0(r31)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	stfs     f0, 0x2c8(r31)
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	mr       r3, r31
	bl       stopMotion__Q24Game9EnemyBaseFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BAA64
 * Size:	0000A8
 */
void StateStay::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051C380@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r5, sys@sda21(r13)
	lfs      f2, 0x2c8(r4)
	lfs      f1, 0x54(r5)
	fadds    f1, f2, f1
	stfs     f1, 0x2c8(r4)
	lfs      f1, 0x2c8(r4)
	fcmpo    cr0, f1, f0
	ble      lbl_802BAAF4
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	li       r4, 0
	lfs      f1, 0x3ac(r5)
	bl
"isTherePikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
	clrlwi.  r0, r3, 0x18
	bne      lbl_802BAAF4
	mr       r3, r31
	bl       getRandFruitsPlant__Q34Game8Imomushi3ObjFv
	cmplwi   r3, 0
	stw      r3, 0x230(r31)
	beq      lbl_802BAAF4
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 5
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802BAAF4:
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
 * Address:	802BAB0C
 * Size:	000090
 */
void StateStay::cleanup(EnemyBase* enemy)
{
	Obj* imomushi = static_cast<Obj*>(enemy);
	imomushi->setAtari(true);
	imomushi->resetEvent(0, EB_Vulnerable);
	imomushi->_2C0[0] = 0;
	imomushi->resetEvent(0, EB_BitterImmune);
	imomushi->resetEvent(0, EB_SoundCullable);
	imomushi->hardConstraintOff();
	imomushi->setEvent(0, EB_16);
	imomushi->resetEvent(0, EB_31);
}

/*
 * --INFO--
 * Address:	802BAB9C
 * Size:	000080
 */
void StateAppear::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* imomushi = static_cast<Obj*>(enemy);
	imomushi->lifeIncrement();
	imomushi->hardConstraintOn();
	imomushi->setEvent(0, EB_22);
	imomushi->setEvent(0, EB_LifegaugeVisible);
	imomushi->m_velocity2 = Vector3f(0.0f);
	imomushi->setEmotionExcitement();
	imomushi->startMotion(1, nullptr);
	imomushi->createAppearEffect();
}

/*
 * --INFO--
 * Address:	802BAC1C
 * Size:	0000D8
 */
void StateAppear::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r5, 0x188(r4)
	lbz      r0, 0x24(r5)
	cmplwi   r0, 0
	beq      lbl_802BACDC
	lwz      r0, 0x1c(r5)
	cmplwi   r0, 0x3e8
	bne      lbl_802BACDC
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051C378@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802BAC84
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802BACDC

lbl_802BAC84:
	mr       r3, r31
	bl       getRandFruitsPlant__Q34Game8Imomushi3ObjFv
	cmplwi   r3, 0
	stw      r3, 0x230(r31)
	beq      lbl_802BACBC
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 7
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802BACDC

lbl_802BACBC:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 6
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802BACDC:
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
 * Address:	802BACF4
 * Size:	00003C
 */
void StateAppear::cleanup(EnemyBase* enemy)
{
	Obj* imomushi = static_cast<Obj*>(enemy);
	imomushi->hardConstraintOff();
	imomushi->resetEvent(0, EB_22);
}

/*
 * --INFO--
 * Address:	802BAD30
 * Size:	000074
 */
void StateDive::init(EnemyBase* enemy, StateArg* stateArg)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	bl       hardConstraintOn__Q24Game9EnemyBaseFv
	lwz      r4, 0x1e0(r31)
	li       r0, 0
	lfs      f0, lbl_8051C378@sda21(r2)
	mr       r3, r31
	oris     r4, r4, 0x40
	stw      r4, 0x1e0(r31)
	stw      r0, 0x230(r31)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	bl       setEmotionCaution__Q24Game9EnemyBaseFv
	mr       r3, r31
	li       r4, 2
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	mr       r3, r31
	bl       createDisAppearEffect__Q34Game8Imomushi3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BADA4
 * Size:	000050
 */
void StateDive::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r5, 0x188(r4)
	lbz      r0, 0x24(r5)
	cmplwi   r0, 0
	beq      lbl_802BADE4
	lwz      r0, 0x1c(r5)
	cmplwi   r0, 0x3e8
	bne      lbl_802BADE4
	lwz      r12, 0(r3)
	li       r5, 4
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802BADE4:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BADF4
 * Size:	00003C
 */
void StateDive::cleanup(EnemyBase* enemy)
{
	Obj* imomushi = static_cast<Obj*>(enemy);
	imomushi->hardConstraintOff();
	imomushi->resetEvent(0, EB_BitterImmune);
}

/*
 * --INFO--
 * Address:	802BAE30
 * Size:	000048
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x14(r1)
	li       r0, -1
	stw      r31, 0xc(r1)
	mr       r31, r4
	li       r4, 3
	stw      r0, 0x2c4(r31)
	mr       r3, r31
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	mr       r3, r31
	bl       startMoveTraceEffect__Q34Game8Imomushi3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BAE78
 * Size:	000238
 */
void StateMove::exec(EnemyBase* enemy)
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
	stw      r30, 0x38(r1)
	stw      r29, 0x34(r1)
	lfs      f0, lbl_8051C378@sda21(r2)
	mr       r30, r4
	lfs      f1, 0x200(r4)
	mr       r29, r3
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802BAED8
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802BB084

lbl_802BAED8:
	lwz      r31, 0x230(r30)
	cmplwi   r31, 0
	beq      lbl_802BAFCC
	mr       r3, r30
	bl       isFinishMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802BAF08
	lfs      f0, lbl_8051C378@sda21(r2)
	stfs     f0, 0x1d4(r30)
	stfs     f0, 0x1d8(r30)
	stfs     f0, 0x1dc(r30)
	b        lbl_802BAFDC

lbl_802BAF08:
	mr       r4, r30
	addi     r3, r1, 0x14
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lfs      f31, 0x14(r1)
	lwz      r12, 8(r12)
	lfs      f30, 0x1c(r1)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	mr       r3, r30
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	bl       isAttackable__Q34Game8Imomushi3ObjFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_802BAF78
	mr       r3, r30
	bl       getRandFruitsPlant__Q34Game8Imomushi3ObjFv
	stw      r3, 0x230(r30)
	b        lbl_802BAFAC

lbl_802BAF78:
	lfs      f0, 0x28(r1)
	lfs      f1, 0x20(r1)
	fsubs    f2, f30, f0
	lfs      f0, lbl_8051C384@sda21(r2)
	fsubs    f3, f31, f1
	fmuls    f1, f2, f2
	fmadds   f1, f3, f3, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802BAFAC
	li       r0, 0xa
	mr       r3, r30
	stw      r0, 0x2c4(r30)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_802BAFAC:
	lwz      r5, 0xc0(r30)
	mr       r3, r30
	addi     r4, r1, 0x20
	lfs      f1, 0x2e4(r5)
	lfs      f2, 0x30c(r5)
	lfs      f3, 0x334(r5)
	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff" b
lbl_802BAFDC

lbl_802BAFCC:
	li       r0, 8
	mr       r3, r30
	stw      r0, 0x2c4(r30)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_802BAFDC:
	lwz      r3, 0x188(r30)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802BB084
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_802BB084
	lwz      r5, 0x2c4(r30)
	cmpwi    r5, 0xa
	bne      lbl_802BB068
	mr       r3, r30
	bl       isAttackable__Q34Game8Imomushi3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802BB038
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	li       r5, 0xa
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802BB084

lbl_802BB038:
	mr       r3, r30
	bl       getRandFruitsPlant__Q34Game8Imomushi3ObjFv
	stw      r3, 0x230(r30)
	mr       r3, r29
	mr       r4, r30
	li       r5, 7
	lwz      r12, 0(r29)
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802BB084

lbl_802BB068:
	lwz      r12, 0(r29)
	mr       r3, r29
	mr       r4, r30
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802BB084:
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	psq_l    f30, 72(r1), 0, qr0
	lfd      f30, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r0, 0x64(r1)
	lwz      r29, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BB0B0
 * Size:	000024
 */
void StateMove::cleanup(EnemyBase* enemy)
{
	Obj* imomushi = static_cast<Obj*>(enemy);
	imomushi->finishMoveTraceEffect();
}

/*
 * --INFO--
 * Address:	802BB0D4
 * Size:	000048
 */
void StateGoHome::init(EnemyBase* enemy, StateArg* stateArg)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x14(r1)
	li       r0, -1
	stw      r31, 0xc(r1)
	mr       r31, r4
	li       r4, 3
	stw      r0, 0x2c4(r31)
	mr       r3, r31
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	mr       r3, r31
	bl       startMoveTraceEffect__Q34Game8Imomushi3ObjFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BB11C
 * Size:	00014C
 */
void StateGoHome::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lfs      f0, lbl_8051C378@sda21(r2)
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	stw      r30, 0x28(r1)
	mr       r30, r3
	lfs      f1, 0x200(r4)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802BB168
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802BB250

lbl_802BB168:
	mr       r3, r31
	bl       isFinishMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802BB18C
	lfs      f0, lbl_8051C378@sda21(r2)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	b        lbl_802BB214

lbl_802BB18C:
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x10(r1)
	lfs      f4, 0x1a0(r31)
	lfs      f3, 0x19c(r31)
	lfs      f1, 0x198(r31)
	fsubs    f2, f0, f4
	lfs      f0, 8(r1)
	stfs     f1, 0x14(r1)
	fsubs    f1, f0, f1
	fmuls    f0, f2, f2
	stfs     f3, 0x18(r1)
	stfs     f4, 0x1c(r1)
	fmadds   f1, f1, f1, f0
	lwz      r3, 0xc0(r31)
	lfs      f0, 0x384(r3)
	fmuls    f0, f0, f0
	fcmpo    cr0, f1, f0
	bge      lbl_802BB1F8
	li       r0, 6
	mr       r3, r31
	stw      r0, 0x2c4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_802BB1F8:
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	addi     r4, r1, 0x14
	lfs      f1, 0x2e4(r5)
	lfs      f2, 0x30c(r5)
	lfs      f3, 0x334(r5)
	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff"

lbl_802BB214:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802BB250
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_802BB250
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2c4(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802BB250:
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
 * Address:	802BB268
 * Size:	000024
 */
void StateGoHome::cleanup(EnemyBase* enemy)
{
	Obj* imomushi = static_cast<Obj*>(enemy);
	imomushi->finishMoveTraceEffect();
}

/*
 * --INFO--
 * Address:	802BB28C
 * Size:	00014C
 */
void StateClimb::init(EnemyBase* enemy, StateArg* stateArg)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	li       r0, -1
	addi     r3, r1, 8
	stw      r31, 0x3c(r1)
	mr       r31, r4
	stw      r0, 0x2c4(r4)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 8(r1)
	mr       r3, r31
	lfs      f2, 0x10(r1)
	bl       setStickDiff__Q34Game8Imomushi3ObjFff
	lwz      r4, 0x230(r31)
	mr       r3, r31
	lwz      r4, 0x114(r4)
	lwz      r4, 0(r4)
	lwz      r4, 0x10(r4)
	bl       startClimbPlant__Q34Game8Imomushi3ObjFP8CollPart
	lfs      f0, lbl_8051C378@sda21(r2)
	mr       r3, r31
	li       r4, 4
	li       r5, 0
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	lfs      f0, lbl_8051C378@sda21(r2)
	fcmpo    cr0, f2, f0
	bge      lbl_802BB32C
	fneg     f2, f2

lbl_802BB32C:
	lfs      f3, lbl_8051C388@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051C378@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f2, f2, f3
	fcmpo    cr0, f1, f0
	fctiwz   f0, f2
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f4, 4(r3)
	bge      lbl_802BB384
	lfs      f0, lbl_8051C38C@sda21(r2)
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_802BB39C

lbl_802BB384:
	fmuls    f0, f1, f3
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_802BB39C:
	stfs     f0, 0x2d8(r31)
	fneg     f2, f0
	lfs      f3, lbl_8051C390@sda21(r2)
	fneg     f0, f4
	lfs      f1, lbl_8051C378@sda21(r2)
	stfs     f3, 0x2dc(r31)
	stfs     f4, 0x2e0(r31)
	stfs     f2, 0x2e4(r31)
	stfs     f1, 0x2e8(r31)
	stfs     f0, 0x2ec(r31)
	lwz      r31, 0x3c(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BB3D8
 * Size:	000170
 */
void StateClimb::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051C378@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lfs      f1, 0x200(r4)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802BB424
	lwz      r12, 0(r3)
	li       r5, 2
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802BB530

lbl_802BB424:
	mr       r3, r31
	bl       isStickToFall__Q34Game8Imomushi3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802BB458
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 3
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802BB530

lbl_802BB458:
	mr       r3, r31
	bl       isFinishMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_802BB4F4
	mr       r3, r31
	bl       moveStickTube__Q34Game8Imomushi3ObjFv
	lfs      f1, 0x2fc(r31)
	lfs      f0, lbl_8051C394@sda21(r2)
	lfs      f2, 0x108(r31)
	fsubs    f0, f0, f1
	fcmpo    cr0, f2, f0
	ble      lbl_802BB4C4
	lwz      r3, 0xf8(r31)
	lwz      r4, 0x10(r3)
	cmplwi   r4, 0
	beq      lbl_802BB4B0
	lbz      r0, 0x58(r4)
	cmplwi   r0, 2
	bne      lbl_802BB4B0
	mr       r3, r31
	bl       startClimbPlant__Q34Game8Imomushi3ObjFP8CollPart
	b        lbl_802BB4F4

lbl_802BB4B0:
	li       r0, 9
	mr       r3, r31
	stw      r0, 0x2c4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802BB4F4

lbl_802BB4C4:
	fneg     f0, f1
	fcmpo    cr0, f2, f0
	bge      lbl_802BB4F4
	lwz      r3, 0xf8(r31)
	lwz      r4, 0xc(r3)
	cmplwi   r4, 0
	beq      lbl_802BB4F4
	lbz      r0, 0x58(r4)
	cmplwi   r0, 2
	bne      lbl_802BB4F4
	mr       r3, r31
	bl       startClimbPlant__Q34Game8Imomushi3ObjFP8CollPart

lbl_802BB4F4:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802BB530
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_802BB530
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2c4(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802BB530:
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
 * Address:	802BB548
 * Size:	000024
 */
void StateClimb::cleanup(EnemyBase* enemy)
{
	Obj* imomushi = static_cast<Obj*>(enemy);
	imomushi->endStick();
}

/*
 * --INFO--
 * Address:	802BB56C
 * Size:	00009C
 */
void StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lfs      f0, lbl_8051C378@sda21(r2)
	lis      r3, 0x746F7073@ha
	stw      r0, 0x24(r1)
	li       r0, -1
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	stw      r0, 0x2c4(r4)
	addi     r4, r3, 0x746F7073@l
	stfs     f0, 0x2c8(r30)
	lwz      r31, 0x230(r30)
	lwz      r3, 0x114(r31)
	bl       getCollPart__8CollTreeFUl
	mr       r0, r3
	mr       r3, r30
	mr       r29, r0
	bl       endStick__Q24Game8CreatureFv
	mr       r3, r30
	mr       r4, r31
	mr       r5, r29
	bl       startStick__Q24Game8CreatureFPQ24Game8CreatureP8CollPart
	lfs      f0, lbl_8051C378@sda21(r2)
	mr       r3, r30
	li       r4, 7
	li       r5, 0
	stfs     f0, 0x1d4(r30)
	stfs     f0, 0x1d8(r30)
	stfs     f0, 0x1dc(r30)
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
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
 * Address:	802BB608
 * Size:	00015C
 */
void StateAttack::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051C378@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lfs      f1, 0x200(r4)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802BB654
	lwz      r12, 0(r3)
	li       r5, 2
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802BB74C

lbl_802BB654:
	mr       r3, r31
	bl       isStickToFall__Q34Game8Imomushi3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802BB688
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 3
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802BB74C

lbl_802BB688:
	mr       r3, r31
	bl       isFinishMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_802BB6E8
	mr       r3, r31
	bl       moveStickSphere__Q34Game8Imomushi3ObjFv
	mr       r3, r31
	bl       isAttackable__Q34Game8Imomushi3ObjFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_802BB6E8
	mr       r3, r31
	bl       getRandFruitsPlant__Q34Game8Imomushi3ObjFv
	cmplwi   r3, 0
	beq      lbl_802BB6D8
	stw      r3, 0x230(r31)
	li       r0, 3
	mr       r3, r31
	stw      r0, 0x2c4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802BB6E8

lbl_802BB6D8:
	li       r0, 1
	mr       r3, r31
	stw      r0, 0x2c4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_802BB6E8:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x2c8(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2c8(r31)
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802BB74C
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 2
	bne      lbl_802BB724
	mr       r3, r31
	bl       eatTsuyukusa__Q34Game8Imomushi3ObjFv
	b        lbl_802BB74C

lbl_802BB724:
	cmplwi   r0, 0x3e8
	bne      lbl_802BB74C
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2c4(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802BB74C:
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
 * Address:	802BB764
 * Size:	000024
 */
void StateAttack::cleanup(EnemyBase* enemy)
{
	Obj* imomushi = static_cast<Obj*>(enemy);
	imomushi->endStick();
}

/*
 * --INFO--
 * Address:	802BB788
 * Size:	000094
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r3, 0x746F7073@ha
	stw      r0, 0x24(r1)
	li       r0, -1
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	stw      r0, 0x2c4(r4)
	addi     r4, r3, 0x746F7073@l
	lwz      r31, 0x230(r30)
	lwz      r3, 0x114(r31)
	bl       getCollPart__8CollTreeFUl
	mr       r0, r3
	mr       r3, r30
	mr       r29, r0
	bl       endStick__Q24Game8CreatureFv
	mr       r3, r30
	mr       r4, r31
	mr       r5, r29
	bl       startStick__Q24Game8CreatureFPQ24Game8CreatureP8CollPart
	lfs      f0, lbl_8051C378@sda21(r2)
	mr       r3, r30
	li       r4, 4
	li       r5, 0
	stfs     f0, 0x1d4(r30)
	stfs     f0, 0x1d8(r30)
	stfs     f0, 0x1dc(r30)
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
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
 * Address:	802BB81C
 * Size:	000138
 */
void StateWait::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lfs      f0, lbl_8051C378@sda21(r2)
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lfs      f1, 0x200(r4)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802BB86C
	lwz      r12, 0(r3)
	li       r5, 2
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802BB938

lbl_802BB86C:
	mr       r3, r30
	bl       isStickToFall__Q34Game8Imomushi3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802BB8A0
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	li       r5, 3
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802BB938

lbl_802BB8A0:
	mr       r3, r30
	bl       isFinishMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_802BB8FC
	mr       r3, r30
	bl       moveStickSphere__Q34Game8Imomushi3ObjFv
	lwz      r31, 0xf4(r30)
	mr       r3, r30
	bl       getRandFruitsPlant__Q34Game8Imomushi3ObjFv
	cmplwi   r3, 0
	beq      lbl_802BB8FC
	cmplw    r31, r3
	stw      r3, 0x230(r30)
	bne      lbl_802BB8EC
	li       r0, 9
	mr       r3, r30
	stw      r0, 0x2c4(r30)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802BB8FC

lbl_802BB8EC:
	li       r0, 3
	mr       r3, r30
	stw      r0, 0x2c4(r30)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_802BB8FC:
	lwz      r3, 0x188(r30)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802BB938
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_802BB938
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	li       r6, 0
	lwz      r5, 0x2c4(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802BB938:
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
 * Address:	802BB954
 * Size:	000024
 */
void StateWait::cleanup(EnemyBase* enemy)
{
	Obj* imomushi = static_cast<Obj*>(enemy);
	imomushi->endStick();
}

/*
 * --INFO--
 * Address:	802BB978
 * Size:	00006C
 */
void StateZukanStay::init(EnemyBase* enemy, StateArg* stateArg)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	mr       r3, r31
	bl       resetZukanStateTimer__Q34Game8Imomushi3ObjFv
	lwz      r0, 0x1e0(r31)
	mr       r3, r31
	oris     r0, r0, 0x40
	stw      r0, 0x1e0(r31)
	bl       hardConstraintOn__Q24Game9EnemyBaseFv
	lfs      f0, lbl_8051C378@sda21(r2)
	mr       r3, r31
	li       r4, 1
	li       r5, 0
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	mr       r3, r31
	bl       stopMotion__Q24Game9EnemyBaseFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BB9E4
 * Size:	000058
 */
void StateZukanStay::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051C398@sda21(r2)
	stw      r0, 0x14(r1)
	lwz      r5, sys@sda21(r13)
	lfs      f2, 0x2c8(r4)
	lfs      f1, 0x54(r5)
	fadds    f1, f2, f1
	stfs     f1, 0x2c8(r4)
	lfs      f1, 0x2c8(r4)
	fcmpo    cr0, f1, f0
	ble      lbl_802BBA2C
	lwz      r12, 0(r3)
	li       r5, 0xc
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802BBA2C:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802BBA3C
 * Size:	000030
 */
void StateZukanStay::cleanup(EnemyBase* enemy)
{
	Obj* imomushi = static_cast<Obj*>(enemy);
	imomushi->resetEvent(0, EB_BitterImmune);
	imomushi->hardConstraintOff();
}

/*
 * --INFO--
 * Address:	802BBA6C
 * Size:	00005C
 */
void StateZukanAppear::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* imomushi = static_cast<Obj*>(enemy);
	imomushi->setEvent(0, EB_22);
	imomushi->m_velocity2 = Vector3f(0.0f);
	imomushi->startMotion(1, nullptr);
	imomushi->createAppearEffect();
}

/*
 * --INFO--
 * Address:	802BBAC8
 * Size:	000050
 */
void StateZukanAppear::exec(EnemyBase* enemy)
{
	Obj* imomushi = static_cast<Obj*>(enemy);
	if ((imomushi->m_animKeyEvent->m_running) && ((u32)imomushi->m_animKeyEvent->m_type == 1000)) {
		transit(imomushi, IMOMUSHI_ZukanMove, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802BBB18
 * Size:	000010
 */
void StateZukanAppear::cleanup(EnemyBase* enemy)
{
	Obj* imomushi = static_cast<Obj*>(enemy);
	imomushi->resetEvent(0, EB_22);
}

/*
 * --INFO--
 * Address:	802BBB28
 * Size:	000058
 */
void StateZukanMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* imomushi = static_cast<Obj*>(enemy);
	imomushi->setZukanTargetPosition();
	imomushi->m_velocity2 = 0.0f;
	imomushi->startMotion(3, nullptr);
	imomushi->startMoveTraceEffect();
}

/*
 * --INFO--
 * Address:	802BBB80
 * Size:	0000BC
 */
void StateZukanMove::exec(EnemyBase* enemy)
{
	Obj* imomushi   = static_cast<Obj*>(enemy);
	Vector3f target = imomushi->m_zukanTargetPosition; // mismatch here
	Parms* parms    = static_cast<Parms*>(imomushi->m_parms);
	EnemyFunc::walkToTarget(imomushi, target, parms->m_general.m_moveSpeed.m_value, parms->m_general.m_rotationalAccel.m_value,
	                        parms->m_general.m_rotationalSpeed.m_value);
	if (imomushi->isInZukanTargetArea()) {
		imomushi->setZukanTargetPosition();
	}
	if ((imomushi->m_animKeyEvent->m_running) && ((u32)imomushi->m_animKeyEvent->m_type == 1000)) {
		transit(imomushi, IMOMUSHI_ZukanMove, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802BBC3C
 * Size:	000024
 */
void StateZukanMove::cleanup(EnemyBase* enemy)
{
	Obj* imomushi = static_cast<Obj*>(enemy);
	imomushi->finishMoveTraceEffect();
}
} // namespace Imomushi
} // namespace Game
