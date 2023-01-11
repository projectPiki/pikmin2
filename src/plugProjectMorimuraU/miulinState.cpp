#include "Game/Entities/Miulin.h"
#include "Game/EnemyAnimKeyEvent.h"

namespace Game {
namespace Miulin {

/*
 * --INFO--
 * Address:	80362618
 * Size:	000150
 */
void FSM::init(EnemyBase* enemy)
{
	create(MIULIN_StateCount);
	registerState(new StateWait(MIULIN_Wait));
	registerState(new StateWalk(MIULIN_Walk));
	registerState(new StateAttackStart(MIULIN_AttackStart));
	registerState(new StateAttacking(MIULIN_Attacking));
	registerState(new StateAttackEnd(MIULIN_AttackEnd));
	registerState(new StateTurn(MIULIN_Turn));
	registerState(new StateFlick(MIULIN_Flick));
	registerState(new StateDead(MIULIN_Dead));
}

/*
 * --INFO--
 * Address:	80362768
 * Size:	00003C
 */
StateWait::StateWait(int stateID)
    : State(stateID)
{
	m_name = "wait";
}

/*
 * --INFO--
 * Address:	803627A4
 * Size:	00008C
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(7, nullptr);
	enemy->stopMotion();
	enemy->m_targetVelocity  = Vector3f(0.0f);
	enemy->m_currentVelocity = Vector3f(0.0f);
	enemy->setEmotionCaution();
	enemy->hardConstraintOn();
	static_cast<Obj*>(enemy)->_2E4 = 0;
	enemy->disableEvent(0, EB_LifegaugeVisible);
	enemy->setAnimSpeed(EnemyAnimatorBase::defaultAnimSpeed);
}

/*
 * --INFO--
 * Address:	80362830
 * Size:	000118
 */
void StateWait::exec(EnemyBase* enemy)
{
	if (static_cast<Obj*>(enemy)->isStartWalk()) {
		if (enemy->m_health <= 0.0f) {
			transit(enemy, MIULIN_Dead, nullptr);
		} else if (static_cast<Obj*>(enemy)->isAttackStart()) {
			transit(enemy, MIULIN_AttackStart, nullptr);
		} else if (static_cast<Obj*>(enemy)->nextTargetTurnCheck()) {
			transit(enemy, MIULIN_Turn, nullptr);
		} else {
			transit(enemy, MIULIN_Walk, nullptr);
		}

		enemy->hardConstraintOff();
		enemy->enableEvent(0, EB_LifegaugeVisible);
	}
}

/*
 * --INFO--
 * Address:	80362948
 * Size:	00003C
 */
StateWalk::StateWalk(int stateID)
    : State(stateID)
{
	m_name = "walk";
}

/*
 * --INFO--
 * Address:	80362984
 * Size:	00016C
 */
void StateWalk::init(EnemyBase* enemy, StateArg* stateArg)
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
	mr       r31, r4
	lfs      f1, defaultAnimSpeed__Q24Game17EnemyAnimatorBase@sda21(r2)
	mr       r30, r3
	mr       r3, r31
	bl       setAnimSpeed__Q24Game9EnemyBaseFf
	li       r0, -1
	mr       r3, r31
	stw      r0, 0x2c8(r31)
	li       r4, 5
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	li       r3, 0
	stw      r3, 0x14(r30)
	lwz      r0, 0x230(r31)
	cmplwi   r0, 0
	beq      lbl_80362AC8
	stw      r3, 0x10(r30)
	addi     r3, r1, 0x20
	lwz      r4, 0x230(r31)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x14
	lwz      r12, 0(r31)
	lfs      f31, 0x20(r1)
	lwz      r12, 8(r12)
	lfs      f30, 0x28(r1)
	mtctr    r12
	bctrl
	lfs      f4, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x18(r1)
	fsubs    f1, f31, f4
	fsubs    f2, f30, f0
	stfs     f4, 8(r1)
	stfs     f3, 0xc(r1)
	stfs     f0, 0x10(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f31, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f31
	bl       angDist__Fff
	lwz      r3, 0xc0(r31)
	fabs     f3, f1
	lfs      f1, lbl_8051E79C@sda21(r2)
	lfs      f0, 0x8bc(r3)
	lfs      f2, lbl_8051E798@sda21(r2)
	frsp     f3, f3
	fmuls    f0, f1, f0
	lfs      f1, lbl_8051E794@sda21(r2)
	fmuls    f0, f2, f0
	fmuls    f0, f1, f0
	fcmpo    cr0, f3, f0
	ble      lbl_80362AC8
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 5
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80362AC8:
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	psq_l    f30, 72(r1), 0, qr0
	lfd      f30, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r0, 0x64(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	80362AF0
 * Size:	000364
 */
void StateWalk::exec(EnemyBase* enemy)
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
	mr       r31, r4
	mr       r30, r3
	lwz      r0, 0x2c8(r4)
	cmpwi    r0, 0
	bge      lbl_80362D28
	lwz      r4, 0x14(r30)
	mr       r3, r31
	addi     r0, r4, 1
	stw      r0, 0x14(r30)
	bl       walkFunc__Q34Game6Miulin3ObjFv
	lbz      r0, 0x2e4(r31)
	cmplwi   r0, 0
	beq      lbl_80362B54
	lfs      f1, lbl_8051E7A0@sda21(r2)
	mr       r3, r31
	bl       turnFunc__Q34Game6Miulin3ObjFf

lbl_80362B54:
	lbz      r0, 0x2e4(r31)
	cmplwi   r0, 0
	bne      lbl_80362BA8
	mr       r3, r31
	bl       isOutOfTerritory__Q34Game6Miulin3ObjFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80362B84
	lwz      r3, 0xc0(r31)
	lwz      r4, 0x10(r30)
	lwz      r0, 0x81c(r3)
	cmpw     r4, r0
	ble      lbl_80362BA8

lbl_80362B84:
	mr       r3, r31
	bl       setReturnState__Q34Game6Miulin3ObjFv
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv
	li       r3, 5
	li       r0, 0
	stw      r3, 0x2c8(r31)
	stw      r0, 0x10(r30)
	b        lbl_80362D28

lbl_80362BA8:
	lfs      f1, lbl_8051E7A4@sda21(r2)
	mr       r3, r31
	bl       isReachToGoal__Q34Game6Miulin3ObjFf
	clrlwi.  r0, r3, 0x18
	beq      lbl_80362C00
	lbz      r0, 0x2e4(r31)
	cmplwi   r0, 0
	beq      lbl_80362BDC
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv
	li       r0, 0
	stw      r0, 0x2c8(r31)
	b        lbl_80362D28

lbl_80362BDC:
	mr       r3, r31
	bl       nextTargetTurnCheck__Q34Game6Miulin3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80362D28
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv
	li       r0, 5
	stw      r0, 0x2c8(r31)
	b        lbl_80362D28

lbl_80362C00:
	lwz      r0, 0x14(r30)
	cmpwi    r0, 0x1e
	ble      lbl_80362D28
	lwz      r4, 0x230(r31)
	cmplwi   r4, 0
	beq      lbl_80362C40
	li       r0, 0
	addi     r3, r1, 0x2c
	stw      r0, 0x10(r30)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f31, 0x2c(r1)
	lfs      f30, 0x34(r1)
	b        lbl_80362C7C

lbl_80362C40:
	mr       r3, r31
	bl       isFindTarget__Q34Game6Miulin3ObjFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80362C70
	mr       r4, r31
	addi     r3, r1, 0x20
	lwz      r12, 0(r31)
	lwz      r12, 0x198(r12)
	mtctr    r12
	bctrl
	lfs      f31, 0x20(r1)
	lfs      f30, 0x28(r1)

lbl_80362C70:
	lwz      r3, 0x10(r30)
	addi     r0, r3, 1
	stw      r0, 0x10(r30)

lbl_80362C7C:
	mr       r4, r31
	addi     r3, r1, 0x14
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f4, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x18(r1)
	fsubs    f1, f31, f4
	fsubs    f2, f30, f0
	stfs     f4, 8(r1)
	stfs     f3, 0xc(r1)
	stfs     f0, 0x10(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f31, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f31
	bl       angDist__Fff
	lwz      r3, 0xc0(r31)
	fabs     f3, f1
	lfs      f1, lbl_8051E79C@sda21(r2)
	lfs      f0, 0x8bc(r3)
	lfs      f2, lbl_8051E798@sda21(r2)
	frsp     f3, f3
	fmuls    f0, f1, f0
	lfs      f1, lbl_8051E794@sda21(r2)
	fmuls    f0, f2, f0
	fmuls    f0, f1, f0
	fcmpo    cr0, f3, f0
	ble      lbl_80362D28
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv
	li       r0, 5
	stw      r0, 0x2c8(r31)

lbl_80362D28:
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051E788@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80362D50
	li       r0, 7
	mr       r3, r31
	stw      r0, 0x2c8(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_80362D98

lbl_80362D50:
	mr       r3, r31
	li       r4, 0
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_80362D78
	li       r0, 6
	mr       r3, r31
	stw      r0, 0x2c8(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_80362D98

lbl_80362D78:
	mr       r3, r31
	bl       isAttackStart__Q34Game6Miulin3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80362D98
	li       r0, 2
	mr       r3, r31
	stw      r0, 0x2c8(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_80362D98:
	mr       r3, r31
	bl       isFinishMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80362DCC
	lfs      f1, lbl_8051E7A8@sda21(r2)
	mr       r3, r31
	lfs      f0, defaultAnimSpeed__Q24Game17EnemyAnimatorBase@sda21(r2)
	fmuls    f1, f1, f0
	bl       setAnimSpeed__Q24Game9EnemyBaseFf
	lfs      f0, lbl_8051E788@sda21(r2)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)

lbl_80362DCC:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_80362E2C
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_80362E2C
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2c8(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       resetAnimSpeed__Q24Game9EnemyBaseFv
	lfs      f0, lbl_8051E788@sda21(r2)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	stfs     f0, 0x1c8(r31)
	stfs     f0, 0x1cc(r31)
	stfs     f0, 0x1d0(r31)

lbl_80362E2C:
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	psq_l    f30, 72(r1), 0, qr0
	lfd      f30, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r0, 0x64(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	80362E54
 * Size:	000040
 */
StateAttackStart::StateAttackStart(int stateID)
    : State(stateID)
{
	m_name = "attackstart";
}

/*
 * --INFO--
 * Address:	80362E94
 * Size:	00004C
 */
void StateAttackStart::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->setAnimSpeed(EnemyAnimatorBase::defaultAnimSpeed);
	enemy->startMotion(0, nullptr);
	enemy->setEmotionExcitement();
}

/*
 * --INFO--
 * Address:	80362EE0
 * Size:	000050
 */
void StateAttackStart::exec(EnemyBase* enemy)
{
	if (enemy->m_curAnim->m_isPlaying && (u32)enemy->m_curAnim->m_type == KEYEVENT_END) {
		transit(enemy, MIULIN_Attacking, nullptr);
	}
}

/*
 * --INFO--
 * Address:	80362F30
 * Size:	000040
 */
StateAttacking::StateAttacking(int stateID)
    : State(stateID)
{
	m_name = "attackind"; // thanks devs
}

/*
 * --INFO--
 * Address:	80362F70
 * Size:	000058
 */
void StateAttacking::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->setAnimSpeed(EnemyAnimatorBase::defaultAnimSpeed);
	enemy->startMotion(1, nullptr);
	_10 = 1;
}

/*
 * --INFO--
 * Address:	80362FC8
 * Size:	00082C
 */
void StateAttacking::exec(EnemyBase* enemy)
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
	stw      r31, 0x9c(r1)
	stw      r30, 0x98(r1)
	mr       r30, r3
	mr       r31, r4
	lbz      r0, 0x10(r3)
	cmplwi   r0, 0
	beq      lbl_8036301C
	lfs      f1, lbl_8051E7AC@sda21(r2)
	mr       r3, r31
	bl       turnFunc__Q34Game6Miulin3ObjFf

lbl_8036301C:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_803637BC
	lwz      r0, 0x1c(r3)
	cmpwi    r0, 3
	beq      lbl_8036372C
	bge      lbl_80363048
	cmpwi    r0, 2
	bge      lbl_80363054
	b        lbl_803637BC

lbl_80363048:
	cmpwi    r0, 0x3e8
	beq      lbl_80363768
	b        lbl_803637BC

lbl_80363054:
	li       r0, 0
	mr       r4, r31
	stb      r0, 0x10(r30)
	addi     r3, r1, 0x20
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x20(r1)
	mr       r3, r31
	lfs      f1, 0x24(r1)
	lfs      f0, 0x28(r1)
	stfs     f2, 0x70(r1)
	stfs     f1, 0x74(r1)
	stfs     f0, 0x78(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	lfs      f0, lbl_8051E788@sda21(r2)
	lwz      r3, 0xc0(r31)
	fcmpo    cr0, f2, f0
	lfs      f4, 0x90c(r3)
	bge      lbl_803630BC
	fneg     f2, f2

lbl_803630BC:
	lfs      f3, lbl_8051E7B0@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051E788@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f2, f2, f3
	fcmpo    cr0, f1, f0
	fctiwz   f0, f2
	stfd     f0, 0x80(r1)
	lwz      r0, 0x84(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f6, f4, f0
	bge      lbl_80363118
	lfs      f0, lbl_8051E7B4@sda21(r2)
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x88(r1)
	lwz      r0, 0x8c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_80363130

lbl_80363118:
	fmuls    f0, f1, f3
	fctiwz   f0, f0
	stfd     f0, 0x90(r1)
	lwz      r0, 0x94(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_80363130:
	fmuls    f5, f4, f0
	lfs      f4, lbl_8051E788@sda21(r2)
	lfs      f2, 0x70(r1)
	lis      r4, "__vt__22Iterator<Q24Game4Piki>"@ha
	lfs      f0, 0x74(r1)
	li       r0, 0
	lfs      f1, 0x78(r1)
	fadds    f3, f2, f5
	fadds    f2, f0, f4
	lfs      f0, lbl_8051E7B8@sda21(r2)
	fadds    f1, f1, f6
	stfs     f5, 0x64(r1)
	lwz      r3, pikiMgr__4Game@sda21(r13)
	stfs     f4, 0x68(r1)
	cmplwi   r0, 0
	fadds    f31, f0, f2
	stfs     f6, 0x6c(r1)
	fsubs    f30, f2, f0
	addi     r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
	stfs     f3, 0x70(r1)
	stfs     f2, 0x74(r1)
	stfs     f1, 0x78(r1)
	lwz      r5, 0xc0(r31)
	lfs      f0, 0x5b4(r5)
	fmuls    f29, f0, f0
	stw      r4, 0x54(r1)
	stw      r0, 0x60(r1)
	stw      r0, 0x58(r1)
	stw      r3, 0x5c(r1)
	bne      lbl_803631C0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x58(r1)
	b        lbl_803633E8

lbl_803631C0:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x58(r1)
	b        lbl_8036322C

lbl_803631D8:
	lwz      r3, 0x5c(r1)
	lwz      r4, 0x58(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x60(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_803633E8
	lwz      r3, 0x5c(r1)
	lwz      r4, 0x58(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x58(r1)

lbl_8036322C:
	lwz      r12, 0x54(r1)
	addi     r3, r1, 0x54
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803631D8
	b        lbl_803633E8

lbl_8036324C:
	lwz      r3, 0x5c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r30, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8036332C
	lwz      r0, 0xf4(r30)
	cmplw    r0, r31
	beq      lbl_8036332C
	mr       r4, r30
	addi     r3, r1, 0x14
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x18(r1)
	lfs      f2, 0x14(r1)
	fcmpo    cr0, f31, f0
	lfs      f3, 0x1c(r1)
	ble      lbl_8036332C
	fcmpo    cr0, f30, f0
	bge      lbl_8036332C
	lfs      f0, 0x78(r1)
	lfs      f1, 0x70(r1)
	fsubs    f0, f0, f3
	fsubs    f1, f1, f2
	fmuls    f0, f0, f0
	fmadds   f0, f1, f1, f0
	fcmpo    cr0, f0, f29
	bge      lbl_8036332C
	lwz      r0, 0x230(r31)
	cmplw    r0, r30
	bne      lbl_803632F0
	li       r0, 0
	stw      r0, 0x230(r31)

lbl_803632F0:
	lis      r3, __vt__Q24Game11Interaction@ha
	lfs      f0, lbl_8051E788@sda21(r2)
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lis      r3, __vt__Q24Game12InteractBury@ha
	stw      r0, 0x48(r1)
	addi     r0, r3, __vt__Q24Game12InteractBury@l
	mr       r3, r30
	addi     r4, r1, 0x48
	stw      r31, 0x4c(r1)
	stw      r0, 0x48(r1)
	stfs     f0, 0x50(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_8036332C:
	lwz      r0, 0x60(r1)
	cmplwi   r0, 0
	bne      lbl_80363358
	lwz      r3, 0x5c(r1)
	lwz      r4, 0x58(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x58(r1)
	b        lbl_803633E8

lbl_80363358:
	lwz      r3, 0x5c(r1)
	lwz      r4, 0x58(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x58(r1)
	b        lbl_803633CC

lbl_80363378:
	lwz      r3, 0x5c(r1)
	lwz      r4, 0x58(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x60(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_803633E8
	lwz      r3, 0x5c(r1)
	lwz      r4, 0x58(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x58(r1)

lbl_803633CC:
	lwz      r12, 0x54(r1)
	addi     r3, r1, 0x54
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80363378

lbl_803633E8:
	lwz      r3, 0x5c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x58(r1)
	cmplw    r4, r3
	bne      lbl_8036324C
	li       r0, 0
	lwz      r3, naviMgr__4Game@sda21(r13)
	lis      r4, "__vt__22Iterator<Q24Game4Navi>"@ha
	stw      r0, 0x44(r1)
	addi     r4, r4, "__vt__22Iterator<Q24Game4Navi>"@l
	cmplwi   r0, 0
	stw      r4, 0x38(r1)
	stw      r0, 0x3c(r1)
	stw      r3, 0x40(r1)
	bne      lbl_80363448
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_80363664

lbl_80363448:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_803634B4

lbl_80363460:
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x44(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80363664
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)

lbl_803634B4:
	lwz      r12, 0x38(r1)
	addi     r3, r1, 0x38
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80363460
	b        lbl_80363664

lbl_803634D4:
	lwz      r3, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r30, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803635A8
	mr       r4, r30
	addi     r3, r1, 8
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0xc(r1)
	lfs      f2, 8(r1)
	fcmpo    cr0, f31, f0
	lfs      f3, 0x10(r1)
	ble      lbl_803635A8
	fcmpo    cr0, f30, f0
	bge      lbl_803635A8
	lfs      f0, 0x78(r1)
	lfs      f1, 0x70(r1)
	fsubs    f0, f0, f3
	fsubs    f1, f1, f2
	fmuls    f0, f0, f0
	fmadds   f0, f1, f1, f0
	fcmpo    cr0, f0, f29
	bge      lbl_803635A8
	lwz      r0, 0x230(r31)
	cmplw    r0, r30
	bne      lbl_8036356C
	li       r0, 0
	stw      r0, 0x230(r31)

lbl_8036356C:
	lis      r3, __vt__Q24Game11Interaction@ha
	lfs      f0, lbl_8051E7BC@sda21(r2)
	addi     r0, r3, __vt__Q24Game11Interaction@l
	lis      r3, __vt__Q24Game12InteractBury@ha
	stw      r0, 0x2c(r1)
	addi     r0, r3, __vt__Q24Game12InteractBury@l
	mr       r3, r30
	addi     r4, r1, 0x2c
	stw      r31, 0x30(r1)
	stw      r0, 0x2c(r1)
	stfs     f0, 0x34(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl

lbl_803635A8:
	lwz      r0, 0x44(r1)
	cmplwi   r0, 0
	bne      lbl_803635D4
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_80363664

lbl_803635D4:
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_80363648

lbl_803635F4:
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x44(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80363664
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)

lbl_80363648:
	lwz      r12, 0x38(r1)
	addi     r3, r1, 0x38
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_803635F4

lbl_80363664:
	lwz      r3, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x3c(r1)
	cmplw    r4, r3
	bne      lbl_803634D4
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f4, lbl_8051E7C0@sda21(r2)
	li       r4, 0
	lfs      f30, 0x4c4(r5)
	lfs      f31, 0x4ec(r5)
	lfs      f28, 0x514(r5)
	fmr      f2, f30
	fmr      f3, f31
	lfs      f29, 0x53c(r5)
	fmr      f1, f28
	bl
"flickNearbyPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	fmr      f1, f29
	lfs      f4, lbl_8051E7C0@sda21(r2)
	fmr      f2, f30
	mr       r3, r31
	fmr      f3, f31
	li       r4, 0
	bl
"flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	fmr      f1, f28
	lfs      f4, lbl_8051E7C0@sda21(r2)
	fmr      f2, f30
	mr       r3, r31
	fmr      f3, f31
	li       r4, 0
	bl
"flickNearbyNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Navi>"
	lfs      f2, lbl_8051E788@sda21(r2)
	mr       r3, r31
	lfs      f1, lbl_8051E7C4@sda21(r2)
	addi     r4, r1, 0x64
	stfs     f2, 0x20c(r31)
	lfs      f0, lbl_8051E7C8@sda21(r2)
	stfs     f1, 0x64(r1)
	stfs     f2, 0x68(r1)
	stfs     f0, 0x6c(r1)
	bl       "attackEffect__Q34Game6Miulin3ObjFR10Vector3<f>"
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	addi     r5, r1, 0x70
	li       r4, 0xc
	li       r6, 2
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	b        lbl_803637BC

lbl_8036372C:
	lfs      f2, lbl_8051E7CC@sda21(r2)
	mr       r3, r31
	lfs      f1, lbl_8051E788@sda21(r2)
	addi     r4, r1, 0x64
	lfs      f0, lbl_8051E7D0@sda21(r2)
	stfs     f2, 0x64(r1)
	stfs     f1, 0x68(r1)
	stfs     f0, 0x6c(r1)
	bl       "attackEffect__Q34Game6Miulin3ObjFR10Vector3<f>"
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	addi     r5, r1, 0x70
	li       r4, 0xc
	li       r6, 2
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"
	b        lbl_803637BC

lbl_80363768:
	li       r0, 4
	lfs      f0, lbl_8051E788@sda21(r2)
	stw      r0, 0x2c8(r31)
	lfs      f1, 0x200(r31)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	beq      lbl_8036379C
	mr       r3, r31
	bl       isAttackStart__Q34Game6Miulin3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8036379C
	li       r0, 3
	stw      r0, 0x2c8(r31)

lbl_8036379C:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2c8(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_803637BC:
	psq_l    f31, 216(r1), 0, qr0
	lfd      f31, 0xd0(r1)
	psq_l    f30, 200(r1), 0, qr0
	lfd      f30, 0xc0(r1)
	psq_l    f29, 184(r1), 0, qr0
	lfd      f29, 0xb0(r1)
	psq_l    f28, 168(r1), 0, qr0
	lfd      f28, 0xa0(r1)
	lwz      r31, 0x9c(r1)
	lwz      r0, 0xe4(r1)
	lwz      r30, 0x98(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/*
 * --INFO--
 * Address:	803637F4
 * Size:	000040
 */
StateAttackEnd::StateAttackEnd(int stateID)
    : State(stateID)
{
	m_name = "attackend";
}

/*
 * --INFO--
 * Address:	80363834
 * Size:	000054
 */
void StateAttackEnd::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->setAnimSpeed(EnemyAnimatorBase::defaultAnimSpeed);
	enemy->startMotion(2, nullptr);
	static_cast<Obj*>(enemy)->_2C8 = 5;
	enemy->setEmotionCaution();
}

/*
 * --INFO--
 * Address:	80363888
 * Size:	0000AC
 */
void StateAttackEnd::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051E788@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lfs      f1, 0x200(r4)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_803638C4
	li       r0, 7
	stw      r0, 0x2c8(r31)
	b        lbl_803638E0

lbl_803638C4:
	mr       r3, r31
	li       r4, 0
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_803638E0
	li       r0, 6
	stw      r0, 0x2c8(r31)

lbl_803638E0:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_8036391C
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_8036391C
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2c8(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8036391C:
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
 * Address:	80363934
 * Size:	00003C
 */
StateTurn::StateTurn(int stateID)
    : State(stateID)
{
	m_name = "turn";
}

/*
 * --INFO--
 * Address:	80363970
 * Size:	0000F4
 */
void StateTurn::init(EnemyBase* enemy, StateArg* stateArg)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r31, r4
	lfs      f1, defaultAnimSpeed__Q24Game17EnemyAnimatorBase@sda21(r2)
	mr       r30, r3
	mr       r3, r31
	bl       setAnimSpeed__Q24Game9EnemyBaseFf
	mr       r3, r31
	bl       isFindTarget__Q34Game6Miulin3ObjFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_803639B8
	mr       r3, r31
	bl       setNextGoal__Q34Game6Miulin3ObjFv

lbl_803639B8:
	lwz      r3, 0xc0(r31)
	lbz      r0, 0x2e4(r31)
	lfs      f1, lbl_8051E79C@sda21(r2)
	lfs      f0, 0x8bc(r3)
	cmplwi   r0, 0
	lfs      f2, lbl_8051E798@sda21(r2)
	fmuls    f0, f1, f0
	fmuls    f31, f2, f0
	beq      lbl_803639E0
	lfs      f31, lbl_8051E7DC@sda21(r2)

lbl_803639E0:
	lfs      f1, lbl_8051E7A0@sda21(r2)
	mr       r3, r31
	bl       turnFunc__Q34Game6Miulin3ObjFf
	fcmpo    cr0, f1, f31
	bge      lbl_80363A18
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80363A44

lbl_80363A18:
	mr       r3, r31
	li       r4, 8
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	lfs      f0, lbl_8051E788@sda21(r2)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	stfs     f0, 0x1c8(r31)
	stfs     f0, 0x1cc(r31)
	stfs     f0, 0x1d0(r31)

lbl_80363A44:
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
 * Address:	80363A64
 * Size:	000178
 */
void StateTurn::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051E788@sda21(r2)
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lfs      f1, 0x200(r4)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80363AA8
	li       r0, 7
	mr       r3, r31
	stw      r0, 0x2c8(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_80363B60

lbl_80363AA8:
	mr       r3, r31
	li       r4, 0
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_80363AD0
	li       r0, 6
	mr       r3, r31
	stw      r0, 0x2c8(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_80363B60

lbl_80363AD0:
	mr       r3, r31
	bl       isAttackStart__Q34Game6Miulin3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80363AF4
	li       r0, 2
	mr       r3, r31
	stw      r0, 0x2c8(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_80363B60

lbl_80363AF4:
	mr       r3, r31
	bl       isFinishMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80363B1C
	lfs      f1, lbl_8051E7A8@sda21(r2)
	mr       r3, r31
	lfs      f0, defaultAnimSpeed__Q24Game17EnemyAnimatorBase@sda21(r2)
	fmuls    f1, f1, f0
	bl       setAnimSpeed__Q24Game9EnemyBaseFf
	b        lbl_80363B24

lbl_80363B1C:
	mr       r3, r31
	bl       isFindTarget__Q34Game6Miulin3ObjFv

lbl_80363B24:
	lfs      f1, lbl_8051E7A0@sda21(r2)
	mr       r3, r31
	bl       turnFunc__Q34Game6Miulin3ObjFf
	lwz      r3, 0xc0(r31)
	lfs      f2, lbl_8051E79C@sda21(r2)
	lfs      f0, 0x8bc(r3)
	lfs      f3, lbl_8051E798@sda21(r2)
	fmuls    f0, f2, f0
	fmuls    f0, f3, f0
	fcmpo    cr0, f1, f0
	bge      lbl_80363B60
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv
	li       r0, 1
	stw      r0, 0x2c8(r31)

lbl_80363B60:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_80363BC4
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_80363BC4
	lwz      r0, 0x2c8(r31)
	cmpwi    r0, 0
	bge      lbl_80363BA4
	lis      r3, lbl_80491694@ha
	lis      r5, lbl_804916A4@ha
	addi     r3, r3, lbl_80491694@l
	li       r4, 0x1f1
	addi     r5, r5, lbl_804916A4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80363BA4:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2c8(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80363BC4:
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
 * Address:	80363BDC
 * Size:	00003C
 */
StateFlick::StateFlick(int stateID)
    : State(stateID)
{
	m_name = "flick";
}

/*
 * --INFO--
 * Address:	80363C18
 * Size:	00004C
 */
void StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->setAnimSpeed(EnemyAnimatorBase::defaultAnimSpeed);
	enemy->startMotion(4, nullptr);
	enemy->setEmotionCaution();
}

/*
 * --INFO--
 * Address:	80363C64
 * Size:	000190
 */
void StateFlick::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stfd     f30, 0x30(r1)
	psq_st   f30, 56(r1), 0, qr0
	stfd     f29, 0x20(r1)
	psq_st   f29, 40(r1), 0, qr0
	stfd     f28, 0x10(r1)
	psq_st   f28, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r31, r4
	mr       r30, r3
	lwz      r5, 0x188(r4)
	lbz      r0, 0x24(r5)
	cmplwi   r0, 0
	beq      lbl_80363DBC
	lwz      r0, 0x1c(r5)
	cmplwi   r0, 3
	bne      lbl_80363D30
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f4, lbl_8051E7C0@sda21(r2)
	li       r4, 0
	lfs      f30, 0x4c4(r5)
	lfs      f29, 0x4ec(r5)
	lfs      f28, 0x514(r5)
	fmr      f2, f30
	fmr      f3, f29
	lfs      f31, 0x53c(r5)
	fmr      f1, f28
	bl
"flickNearbyPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	fmr      f1, f31
	lfs      f4, lbl_8051E7C0@sda21(r2)
	fmr      f2, f30
	mr       r3, r31
	fmr      f3, f29
	li       r4, 0
	bl
"flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	fmr      f1, f28
	lfs      f4, lbl_8051E7C0@sda21(r2)
	fmr      f2, f30
	mr       r3, r31
	fmr      f3, f29
	li       r4, 0
	bl
"flickNearbyNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Navi>"
	lfs      f0, lbl_8051E788@sda21(r2)
	stfs     f0, 0x20c(r31)
	b        lbl_80363DBC

lbl_80363D30:
	cmplwi   r0, 0x3e8
	bne      lbl_80363DBC
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051E788@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80363D68
	lwz      r12, 0(r3)
	li       r5, 7
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80363DBC

lbl_80363D68:
	mr       r3, r31
	bl       isAttackStart__Q34Game6Miulin3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80363D9C
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 2
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80363DBC

lbl_80363D9C:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 5
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80363DBC:
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	psq_l    f30, 56(r1), 0, qr0
	lfd      f30, 0x30(r1)
	psq_l    f29, 40(r1), 0, qr0
	lfd      f29, 0x20(r1)
	psq_l    f28, 24(r1), 0, qr0
	lfd      f28, 0x10(r1)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x54(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	80363DF4
 * Size:	00003C
 */
StateDead::StateDead(int stateID)
    : State(stateID)
{
	m_name = "dead";
}

/*
 * --INFO--
 * Address:	80363E30
 * Size:	000054
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->setAnimSpeed(EnemyAnimatorBase::defaultAnimSpeed);
	enemy->startMotion(3, nullptr);
	enemy->setEmotionCaution();
	enemy->deathProcedure();
}

/*
 * --INFO--
 * Address:	80363E84
 * Size:	000060
 */
void StateDead::exec(EnemyBase* enemy)
{
	if (enemy->m_curAnim->m_isPlaying) {
		switch (enemy->m_curAnim->m_type) {
		case KEYEVENT_2:
			static_cast<Obj*>(enemy)->landEffect();
			break;

		case KEYEVENT_END:
			enemy->kill(nullptr);
			break;
		}
	}
}
} // namespace Miulin
} // namespace Game
