#include "Game/Entities/KochappyBase.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/gamePlayData.h"
#include "nans.h"

namespace Game {
namespace KochappyBase {

/*
 * --INFO--
 * Address:	8010F874
 * Size:	000198
 */
void FSM::init(EnemyBase* enemy)
{
	create(KOCHAPPY_Count);
	registerState(new StateWait(KOCHAPPY_Wait));
	registerState(new StateDead(KOCHAPPY_Dead));
	registerState(new StateTurn(KOCHAPPY_Turn));
	registerState(new StateWalk(KOCHAPPY_Walk));
	registerState(new StateAttack(KOCHAPPY_Attack));
	registerState(new StateFlick(KOCHAPPY_Flick));
	registerState(new StateTurnToHome(KOCHAPPY_TurnToHome));
	registerState(new StateGoHome(KOCHAPPY_GoHome));
	registerState(new StatePress(KOCHAPPY_Press));
	registerState(new StateDemo(KOCHAPPY_Demo));
}

/*
 * --INFO--
 * Address:	8010FA0C
 * Size:	00003C
 */
StatePress::StatePress(int stateID)
    : State(stateID)
{
	m_name = "press";
}

/*
 * --INFO--
 * Address:	8010FA48
 * Size:	000054
 */
void StatePress::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->m_health = 0.0f;
	enemy->startMotion(4, nullptr);
	enemy->deathProcedure();
	enemy->m_curAnim->m_isRunning = 0;
}

/*
 * --INFO--
 * Address:	8010FA9C
 * Size:	000050
 */
void StatePress::exec(EnemyBase* enemy)
{
	if (enemy->m_curAnim->m_isRunning && (u32)enemy->m_curAnim->m_type == KEYEVENT_END) {
		transit(enemy, KOCHAPPY_Demo, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8010FAEC
 * Size:	00003C
 */
StateWait::StateWait(int stateID)
    : State(stateID)
{
	m_name = "wait";
}

/*
 * --INFO--
 * Address:	8010FB28
 * Size:	0000C8
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(6, nullptr);
	enemy->m_targetCreature = nullptr;
	if (static_cast<WaitArg*>(stateArg) == (WaitArg*)('rand')) {
		enemy->setMotionFrame(randFloat() * enemy->getFirstKeyFrame());
	}

	static_cast<Obj*>(enemy)->setAnimationSpeed(30.0f);
	enemy->setEvent(0, EB_Constraint);
}

/*
 * --INFO--
 * Address:	8010FBF0
 * Size:	000308
 */
void StateWait::exec(EnemyBase* enemy)
{
	if (EnemyFunc::isStartFlick(enemy, true)) {
		FlickArg flickArg;
		flickArg._00 = 2;
		transit(enemy, KOCHAPPY_Flick, &flickArg);
	} else if (!enemy->m_targetCreature) {
		Parms* parms = CG_PARMS(enemy);
		Creature* target
		    = EnemyFunc::getNearestPikminOrNavi(enemy, 180.0f, parms->m_general.m_sightRadius.m_value, nullptr, nullptr, nullptr);
		if (target) {
			enemy->m_targetCreature = target;
			enemy->finishMotion();
		}

		if (enemy->m_curAnim->m_isRunning) {
			switch (enemy->m_curAnim->m_type) {
			case KEYEVENT_2:
				enemy->getJAIObject()->startSound(PSSE_EN_KOCHAPPY_NOTICE, 0);
				break;
			case KEYEVENT_END:
				Parms* parms = static_cast<Parms*>(enemy->m_parms);
				f32 angLimit = parms->m_properParms._854.m_value;
				f32 angDist  = enemy->changeFaceDir(enemy->m_targetCreature); // this is wrong?
				if (FABS(angDist) <= PI * (DEG2RAD * angLimit)) {
					transit(enemy, KOCHAPPY_Walk, nullptr);
				} else {
					transit(enemy, KOCHAPPY_Turn, nullptr);
				}
				break;
			}
		}
	}

	if (enemy->m_health <= 0.0f) {
		transit(enemy, KOCHAPPY_Dead, nullptr);
	}
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stfd     f31, 0x80(r1)
	psq_st   f31, 136(r1), 0, qr0
	stfd     f30, 0x70(r1)
	psq_st   f30, 120(r1), 0, qr0
	stfd     f29, 0x60(r1)
	psq_st   f29, 104(r1), 0, qr0
	stfd     f28, 0x50(r1)
	psq_st   f28, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	mr       r31, r4
	mr       r30, r3
	mr       r3, r31
	li       r4, 1
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_8010FC6C
	li       r0, 2
	mr       r3, r30
	stw      r0, 8(r1)
	mr       r4, r31
	addi     r6, r1, 8
	li       r5, 5
	lwz      r12, 0(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8010FE8C

lbl_8010FC6C:
	lwz      r0, 0x230(r31)
	cmplwi   r0, 0
	bne      lbl_8010FCAC
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f1, lbl_80517A00@sda21(r2)
	li       r4, 0
	lfs      f2, 0x3d4(r5)
	li       r5, 0
	li       r6, 0
	bl
"getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
	cmplwi   r3, 0
	beq      lbl_8010FCAC
	stw      r3, 0x230(r31)
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_8010FCAC:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_8010FE8C
	lwz      r0, 0x1c(r3)
	cmpwi    r0, 0x3e8
	beq      lbl_8010FD08
	bge      lbl_8010FE8C
	cmpwi    r0, 2
	beq      lbl_8010FCD8
	b        lbl_8010FE8C

lbl_8010FCD8:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x596a
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	b        lbl_8010FE8C

lbl_8010FD08:
	lwz      r4, 0x230(r31)
	addi     r3, r1, 0x24
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r4)
	lfs      f31, 0x86c(r5)
	lwz      r12, 8(r12)
	lfs      f28, 0x334(r5)
	lfs      f29, 0x30c(r5)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f2, 0x24(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x30
	lfs      f1, 0x28(r1)
	lfs      f0, 0x2c(r1)
	lwz      r12, 8(r12)
	stfs     f2, 0xc(r1)
	stfs     f1, 0x10(r1)
	stfs     f0, 0x14(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x30(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x38(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0xc(r1)
	lfs      f0, 0x14(r1)
	lfs      f4, 0x34(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x18(r1)
	stfs     f4, 0x1c(r1)
	stfs     f3, 0x20(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f30, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f30
	bl       angDist__Fff
	fmr      f30, f1
	lfs      f0, lbl_80517A08@sda21(r2)
	lfs      f1, lbl_80517A04@sda21(r2)
	fmuls    f0, f0, f28
	fmuls    f28, f30, f29
	fmuls    f1, f1, f0
	fabs     f0, f28
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8010FDFC
	lfs      f0, lbl_805179E0@sda21(r2)
	fcmpo    cr0, f28, f0
	ble      lbl_8010FDF8
	fmr      f28, f1
	b        lbl_8010FDFC

lbl_8010FDF8:
	fneg     f28, f1

lbl_8010FDFC:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f28, f1
	bl       roundAng__Ff
	lfs      f0, lbl_80517A08@sda21(r2)
	fabs     f2, f30
	stfs     f1, 0x1fc(r31)
	fmuls    f0, f0, f31
	lfs      f1, lbl_80517A04@sda21(r2)
	lfs      f3, 0x1fc(r31)
	frsp     f2, f2
	fmuls    f0, f1, f0
	stfs     f3, 0x1a8(r31)
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_8010FE6C
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 3
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8010FE8C

lbl_8010FE6C:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 2
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8010FE8C:
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_805179E0@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8010FEC0
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8010FEC0:
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	psq_l    f29, 104(r1), 0, qr0
	lfd      f29, 0x60(r1)
	psq_l    f28, 88(r1), 0, qr0
	lfd      f28, 0x50(r1)
	lwz      r31, 0x4c(r1)
	lwz      r0, 0x94(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	8010FEF8
 * Size:	000024
 */
void StateWait::cleanup(EnemyBase* enemy) { enemy->constraintOff(); }

/*
 * --INFO--
 * Address:	8010FF1C
 * Size:	00003C
 */
StateDead::StateDead(int stateID)
    : State(stateID)
{
	m_name = "dead";
}

/*
 * --INFO--
 * Address:	8010FF58
 * Size:	000040
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->startMotion(1, nullptr);
	enemy->deathProcedure();
}

/*
 * --INFO--
 * Address:	8010FF98
 * Size:	000050
 */
void StateDead::exec(EnemyBase* enemy)
{
	if (enemy->m_curAnim->m_isRunning && (u32)enemy->m_curAnim->m_type == KEYEVENT_END) {
		transit(enemy, KOCHAPPY_Demo, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8010FFE8
 * Size:	000004
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	8010FFEC
 * Size:	00003C
 */
StateTurn::StateTurn(int stateID)
    : State(stateID)
{
	m_name = "turn";
}

/*
 * --INFO--
 * Address:	80110028
 * Size:	000054
 */
void StateTurn::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->setEmotionExcitement();
	enemy->startMotion(7, nullptr);
	_10 = -1;
}

/*
 * --INFO--
 * Address:	8011007C
 * Size:	000710
 */
void StateTurn::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x190(r1)
	mflr     r0
	stw      r0, 0x194(r1)
	stfd     f31, 0x180(r1)
	psq_st   f31, 392(r1), 0, qr0
	stfd     f30, 0x170(r1)
	psq_st   f30, 376(r1), 0, qr0
	stfd     f29, 0x160(r1)
	psq_st   f29, 360(r1), 0, qr0
	stfd     f28, 0x150(r1)
	psq_st   f28, 344(r1), 0, qr0
	stfd     f27, 0x140(r1)
	psq_st   f27, 328(r1), 0, qr0
	stfd     f26, 0x130(r1)
	psq_st   f26, 312(r1), 0, qr0
	stfd     f25, 0x120(r1)
	psq_st   f25, 296(r1), 0, qr0
	stfd     f24, 0x110(r1)
	psq_st   f24, 280(r1), 0, qr0
	stw      r31, 0x10c(r1)
	stw      r30, 0x108(r1)
	stw      r29, 0x104(r1)
	stw      r28, 0x100(r1)
	mr       r31, r4
	mr       r30, r3
	mr       r3, r31
	li       r4, 1
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_80110118
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 5
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_801106F8

lbl_80110118:
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	li       r4, 0
	lfs      f24, 0x3ac(r5)
	fmr      f1, f24
	bl
"isThereOlimar__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Navi>"
	clrlwi.  r0, r3, 0x18
	beq      lbl_80110140
	li       r3, 1
	b        lbl_80110164

lbl_80110140:
	fmr      f1, f24
	mr       r3, r31
	li       r4, 0
	bl
"isTherePikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
	clrlwi.  r0, r3, 0x18
	beq      lbl_80110160
	li       r3, 1
	b        lbl_80110164

lbl_80110160:
	li       r3, 0

lbl_80110164:
	clrlwi.  r0, r3, 0x18
	bne      lbl_80110184
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x200(r31)
	lfs      f0, 0x17c(r3)
	fcmpo    cr0, f1, f0
	mfcr     r0
	srwi     r3, r0, 0x1f

lbl_80110184:
	clrlwi.  r0, r3, 0x18
	beq      lbl_80110194
	lfs      f0, lbl_805179E0@sda21(r2)
	stfs     f0, 0x2cc(r31)

lbl_80110194:
	lwz      r3, 0xc0(r31)
	lfs      f2, 0x2cc(r31)
	lfs      f0, 0x62c(r3)
	fcmpo    cr0, f2, f0
	bge      lbl_801101C4
	lwz      r3, sys@sda21(r13)
	lfs      f30, lbl_80517A00@sda21(r2)
	lfs      f0, 0x54(r3)
	fmr      f1, f30
	fadds    f0, f2, f0
	stfs     f0, 0x2cc(r31)
	b        lbl_801101CC

lbl_801101C4:
	lfs      f30, 0x424(r3)
	lfs      f1, 0x49c(r3)

lbl_801101CC:
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	li       r4, 0
	li       r6, 0
	lfs      f2, 0x44c(r5)
	li       r5, 0
	bl
"getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
	cmplwi   r3, 0
	beq      lbl_801106AC
	stw      r3, 0x230(r31)
	addi     r3, r1, 0xe0
	lwz      r4, 0x230(r31)
	lwz      r12, 0(r4)
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
	fmr      f24, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f24
	bl       angDist__Fff
	mr       r4, r31
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r31)
	fmr      f31, f1
	addi     r3, r1, 0x44
	lfs      f27, 0x58c(r5)
	lwz      r12, 8(r12)
	li       r28, 0
	lfs      f28, 0x564(r5)
	lwz      r29, 0x230(r31)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x38
	lwz      r12, 0(r29)
	lfs      f29, 0x44(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 0x38(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x5c
	fsubs    f25, f0, f29
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x50
	lwz      r12, 0(r29)
	lfs      f29, 0x60(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 0x54(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x74
	fsubs    f24, f0, f29
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x68
	lwz      r12, 0(r29)
	lfs      f29, 0x7c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fmuls    f1, f24, f24
	lfs      f2, 0x70(r1)
	fmuls    f0, f28, f28
	fsubs    f2, f2, f29
	fmadds   f1, f25, f25, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_801103A4
	lfs      f0, lbl_80517A08@sda21(r2)
	fabs     f2, f31
	lfs      f1, lbl_80517A04@sda21(r2)
	fmuls    f0, f0, f27
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_801103A4
	li       r28, 1

lbl_801103A4:
	clrlwi.  r0, r28, 0x18
	beq      lbl_801103D8
	li       r0, 4
	mr       r3, r31
	stw      r0, 0x10(r30)
	bl       finishMotion__Q24Game9EnemyBaseFv
	mr       r3, r31
	lfs      f1, lbl_80517A1C@sda21(r2)
	lwz      r12, 0(r31)
	lwz      r12, 0x2fc(r12)
	mtctr    r12
	bctrl
	b        lbl_801106BC

lbl_801103D8:
	mr       r4, r31
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x8c
	lfs      f24, 0x3fc(r5)
	lwz      r12, 8(r12)
	lfs      f25, 0x3d4(r5)
	lfs      f26, 0x3ac(r5)
	lwz      r28, 0x230(r31)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x80
	lwz      r12, 0(r28)
	lfs      f29, 0x8c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 0x80(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0xa4
	fsubs    f28, f0, f29
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x98
	lwz      r12, 0(r28)
	lfs      f29, 0xa8(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 0x9c(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0xbc
	fsubs    f27, f0, f29
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0xb0
	lwz      r12, 0(r28)
	lfs      f29, 0xc4(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0xb8(r1)
	fmuls    f26, f26, f26
	fmuls    f25, f25, f25
	li       r3, 1
	fsubs    f0, f0, f29
	li       r4, 0
	fmuls    f0, f0, f0
	fmadds   f0, f28, f28, f0
	fcmpo    cr0, f0, f26
	ble      lbl_801104EC
	fcmpo    cr0, f0, f25
	mr       r0, r4
	ble      lbl_801104E0
	fabs     f0, f27
	frsp     f0, f0
	fcmpo    cr0, f0, f24
	bge      lbl_801104E0
	mr       r0, r3

lbl_801104E0:
	clrlwi.  r0, r0, 0x18
	beq      lbl_801104EC
	li       r4, 1

lbl_801104EC:
	clrlwi.  r0, r4, 0x18
	bne      lbl_80110524
	lfs      f0, lbl_80517A08@sda21(r2)
	fabs     f2, f31
	lfs      f1, lbl_80517A04@sda21(r2)
	fmuls    f0, f0, f30
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	mfcr     r0
	rlwinm.  r0, r0, 3, 0x1f, 0x1f
	beq      lbl_80110524
	li       r3, 0

lbl_80110524:
	clrlwi.  r0, r3, 0x18
	beq      lbl_80110540
	li       r0, 6
	mr       r3, r31
	stw      r0, 0x10(r30)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_801106BC

lbl_80110540:
	lwz      r4, 0x230(r31)
	addi     r3, r1, 0x20
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r4)
	lfs      f31, 0x86c(r5)
	lwz      r12, 8(r12)
	lfs      f25, 0x334(r5)
	lfs      f24, 0x30c(r5)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f2, 0x20(r1)
	lwz      r12, 0(r31)
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
	lwz      r12, 0(r31)
	fmr      f26, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f26
	bl       angDist__Fff
	fmr      f30, f1
	lfs      f0, lbl_80517A08@sda21(r2)
	lfs      f1, lbl_80517A04@sda21(r2)
	fmuls    f0, f0, f25
	fmuls    f24, f30, f24
	fmuls    f1, f1, f0
	fabs     f0, f24
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80110634
	lfs      f0, lbl_805179E0@sda21(r2)
	fcmpo    cr0, f24, f0
	ble      lbl_80110630
	fmr      f24, f1
	b        lbl_80110634

lbl_80110630:
	fneg     f24, f1

lbl_80110634:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f24, f1
	bl       roundAng__Ff
	lfs      f0, lbl_80517A08@sda21(r2)
	fabs     f2, f30
	stfs     f1, 0x1fc(r31)
	fmuls    f0, f0, f31
	lfs      f1, lbl_80517A04@sda21(r2)
	lfs      f3, 0x1fc(r31)
	frsp     f2, f2
	fmuls    f0, f1, f0
	stfs     f3, 0x1a8(r31)
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_801106BC
	li       r0, 3
	mr       r3, r31
	stw      r0, 0x10(r30)
	bl       finishMotion__Q24Game9EnemyBaseFv
	mr       r3, r31
	lfs      f1, lbl_80517A1C@sda21(r2)
	lwz      r12, 0(r31)
	lwz      r12, 0x2fc(r12)
	mtctr    r12
	bctrl
	b        lbl_801106BC

lbl_801106AC:
	li       r0, 6
	mr       r3, r31
	stw      r0, 0x10(r30)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_801106BC:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_801106F8
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_801106F8
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x10(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_801106F8:
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_805179E0@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8011072C
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8011072C:
	psq_l    f31, 392(r1), 0, qr0
	lfd      f31, 0x180(r1)
	psq_l    f30, 376(r1), 0, qr0
	lfd      f30, 0x170(r1)
	psq_l    f29, 360(r1), 0, qr0
	lfd      f29, 0x160(r1)
	psq_l    f28, 344(r1), 0, qr0
	lfd      f28, 0x150(r1)
	psq_l    f27, 328(r1), 0, qr0
	lfd      f27, 0x140(r1)
	psq_l    f26, 312(r1), 0, qr0
	lfd      f26, 0x130(r1)
	psq_l    f25, 296(r1), 0, qr0
	lfd      f25, 0x120(r1)
	psq_l    f24, 280(r1), 0, qr0
	lfd      f24, 0x110(r1)
	lwz      r31, 0x10c(r1)
	lwz      r30, 0x108(r1)
	lwz      r29, 0x104(r1)
	lwz      r0, 0x194(r1)
	lwz      r28, 0x100(r1)
	mtlr     r0
	addi     r1, r1, 0x190
	blr
	*/
}

/*
 * --INFO--
 * Address:	8011078C
 * Size:	000024
 */
void StateTurn::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/*
 * --INFO--
 * Address:	801107B0
 * Size:	000044
 */
StateWalk::StateWalk(int stateID)
    : State(stateID)
{
	_10    = -1;
	m_name = "Walk";
}

/*
 * --INFO--
 * Address:	801107F4
 * Size:	000080
 */
void StateWalk::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kochappy = static_cast<Obj*>(enemy);
	kochappy->setEmotionExcitement();
	Parms* parms = kochappy->getParms();
	kochappy->setAnimationSpeed(40.0f * (parms->m_general.m_moveSpeed.m_value / 50.0f));
	kochappy->startMotion(3, nullptr);
	_10 = -1;
}

/*
 * --INFO--
 * Address:	80110874
 * Size:	0006E4
 */
void StateWalk::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x170(r1)
	mflr     r0
	stw      r0, 0x174(r1)
	stfd     f31, 0x160(r1)
	psq_st   f31, 360(r1), 0, qr0
	stfd     f30, 0x150(r1)
	psq_st   f30, 344(r1), 0, qr0
	stfd     f29, 0x140(r1)
	psq_st   f29, 328(r1), 0, qr0
	stfd     f28, 0x130(r1)
	psq_st   f28, 312(r1), 0, qr0
	stfd     f27, 0x120(r1)
	psq_st   f27, 296(r1), 0, qr0
	stfd     f26, 0x110(r1)
	psq_st   f26, 280(r1), 0, qr0
	stfd     f25, 0x100(r1)
	psq_st   f25, 264(r1), 0, qr0
	stfd     f24, 0xf0(r1)
	psq_st   f24, 248(r1), 0, qr0
	stw      r31, 0xec(r1)
	stw      r30, 0xe8(r1)
	stw      r29, 0xe4(r1)
	stw      r28, 0xe0(r1)
	mr       r31, r4
	mr       r30, r3
	mr       r3, r31
	li       r4, 1
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_80110910
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 5
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80110EC4

lbl_80110910:
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	li       r4, 0
	lfs      f24, 0x3ac(r5)
	fmr      f1, f24
	bl
"isThereOlimar__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Navi>"
	clrlwi.  r0, r3, 0x18
	beq      lbl_80110938
	li       r3, 1
	b        lbl_8011095C

lbl_80110938:
	fmr      f1, f24
	mr       r3, r31
	li       r4, 0
	bl
"isTherePikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
	clrlwi.  r0, r3, 0x18
	beq      lbl_80110958
	li       r3, 1
	b        lbl_8011095C

lbl_80110958:
	li       r3, 0

lbl_8011095C:
	clrlwi.  r0, r3, 0x18
	bne      lbl_8011097C
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x200(r31)
	lfs      f0, 0x17c(r3)
	fcmpo    cr0, f1, f0
	mfcr     r0
	srwi     r3, r0, 0x1f

lbl_8011097C:
	clrlwi.  r0, r3, 0x18
	beq      lbl_8011098C
	lfs      f0, lbl_805179E0@sda21(r2)
	stfs     f0, 0x2cc(r31)

lbl_8011098C:
	lwz      r3, 0xc0(r31)
	lfs      f2, 0x2cc(r31)
	lfs      f0, 0x62c(r3)
	fcmpo    cr0, f2, f0
	bge      lbl_801109B8
	lwz      r3, sys@sda21(r13)
	lfs      f1, lbl_80517A00@sda21(r2)
	lfs      f0, 0x54(r3)
	fadds    f0, f2, f0
	stfs     f0, 0x2cc(r31)
	b        lbl_801109BC

lbl_801109B8:
	lfs      f1, 0x49c(r3)

lbl_801109BC:
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	li       r4, 0
	li       r6, 0
	lfs      f2, 0x44c(r5)
	li       r5, 0
	bl
"getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
	cmplwi   r3, 0
	beq      lbl_80110DC0
	stw      r3, 0x230(r31)
	addi     r3, r1, 0xbc
	lwz      r4, 0x230(r31)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f2, 0xbc(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0xc8
	lfs      f1, 0xc0(r1)
	lfs      f0, 0xc4(r1)
	lwz      r12, 8(r12)
	stfs     f2, 0xa4(r1)
	stfs     f1, 0xa8(r1)
	stfs     f0, 0xac(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0xc8(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0xd0(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0xa4(r1)
	lfs      f0, 0xac(r1)
	lfs      f4, 0xcc(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0xb0(r1)
	stfs     f4, 0xb4(r1)
	stfs     f3, 0xb8(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f24, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f24
	bl       angDist__Fff
	mr       r4, r31
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r31)
	fmr      f31, f1
	addi     r3, r1, 0x14
	lfs      f28, 0x58c(r5)
	lwz      r12, 8(r12)
	li       r28, 0
	lfs      f30, 0x564(r5)
	lwz      r29, 0x230(r31)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 8
	lwz      r12, 0(r29)
	lfs      f29, 0x14(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 8(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x2c
	fsubs    f25, f0, f29
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
	mr       r4, r31
	lfs      f0, 0x24(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x44
	fsubs    f24, f0, f29
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
	fmuls    f1, f24, f24
	lfs      f2, 0x40(r1)
	fmuls    f0, f30, f30
	fsubs    f2, f2, f29
	fmadds   f1, f25, f25, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80110B94
	lfs      f0, lbl_80517A08@sda21(r2)
	fabs     f2, f31
	lfs      f1, lbl_80517A04@sda21(r2)
	fmuls    f0, f0, f28
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_80110B94
	li       r28, 1

lbl_80110B94:
	clrlwi.  r0, r28, 0x18
	beq      lbl_80110BD8
	li       r0, 4
	mr       r3, r31
	stw      r0, 0x10(r30)
	bl       finishMotion__Q24Game9EnemyBaseFv
	lfs      f0, lbl_805179E0@sda21(r2)
	mr       r3, r31
	lfs      f1, lbl_80517A1C@sda21(r2)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0x2fc(r12)
	mtctr    r12
	bctrl
	b        lbl_80110DEC

lbl_80110BD8:
	mr       r4, r31
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x68
	lfs      f30, 0x424(r5)
	lwz      r12, 8(r12)
	lfs      f24, 0x3fc(r5)
	lfs      f25, 0x3d4(r5)
	lfs      f26, 0x3ac(r5)
	lwz      r28, 0x230(r31)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x5c
	lwz      r12, 0(r28)
	lfs      f29, 0x68(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 0x5c(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x80
	fsubs    f27, f0, f29
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x74
	lwz      r12, 0(r28)
	lfs      f29, 0x84(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 0x78(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x98
	fsubs    f28, f0, f29
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x8c
	lwz      r12, 0(r28)
	lfs      f29, 0xa0(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x94(r1)
	fmuls    f26, f26, f26
	fmuls    f25, f25, f25
	li       r3, 1
	fsubs    f0, f0, f29
	li       r4, 0
	fmuls    f0, f0, f0
	fmadds   f0, f27, f27, f0
	fcmpo    cr0, f0, f26
	ble      lbl_80110CF0
	fcmpo    cr0, f0, f25
	mr       r0, r4
	ble      lbl_80110CE4
	fabs     f0, f28
	frsp     f0, f0
	fcmpo    cr0, f0, f24
	bge      lbl_80110CE4
	mr       r0, r3

lbl_80110CE4:
	clrlwi.  r0, r0, 0x18
	beq      lbl_80110CF0
	li       r4, 1

lbl_80110CF0:
	clrlwi.  r0, r4, 0x18
	bne      lbl_80110D28
	lfs      f0, lbl_80517A08@sda21(r2)
	fabs     f2, f31
	lfs      f1, lbl_80517A04@sda21(r2)
	fmuls    f0, f0, f30
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	mfcr     r0
	rlwinm.  r0, r0, 3, 0x1f, 0x1f
	beq      lbl_80110D28
	li       r3, 0

lbl_80110D28:
	clrlwi.  r0, r3, 0x18
	beq      lbl_80110D54
	li       r0, 6
	mr       r3, r31
	stw      r0, 0x10(r30)
	bl       finishMotion__Q24Game9EnemyBaseFv
	lfs      f0, lbl_805179E0@sda21(r2)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	b        lbl_80110DEC

lbl_80110D54:
	lwz      r5, 0xc0(r31)
	fabs     f2, f31
	lfs      f0, lbl_80517A08@sda21(r2)
	lfs      f3, 0x424(r5)
	lfs      f1, lbl_80517A04@sda21(r2)
	frsp     f2, f2
	fmuls    f0, f0, f3
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_80110D9C
	lwz      r4, 0x230(r31)
	mr       r3, r31
	lfs      f1, 0x2e4(r5)
	lfs      f2, 0x30c(r5)
	lfs      f3, 0x334(r5)
	bl walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBasePQ24Game8Creaturefff b
lbl_80110DEC

lbl_80110D9C:
	li       r0, 2
	mr       r3, r31
	stw      r0, 0x10(r30)
	bl       finishMotion__Q24Game9EnemyBaseFv
	lfs      f0, lbl_805179E0@sda21(r2)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	b        lbl_80110DEC

lbl_80110DC0:
	lfs      f1, 0x20c(r31)
	lfs      f0, lbl_805179E0@sda21(r2)
	fcmpu    cr0, f1, f0
	beq      lbl_80110DDC
	li       r0, 5
	stw      r0, 0x10(r30)
	b        lbl_80110DE4

lbl_80110DDC:
	li       r0, 6
	stw      r0, 0x10(r30)

lbl_80110DE4:
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_80110DEC:
	mr       r4, r31
	addi     r3, r1, 0x50
	lwz      r12, 0(r31)
	lfs      f24, 0x198(r31)
	lwz      r12, 8(r12)
	lfs      f25, 0x19c(r31)
	lfs      f26, 0x1a0(r31)
	mtctr    r12
	bctrl
	lfs      f0, 0x54(r1)
	lfs      f2, 0x50(r1)
	fsubs    f3, f0, f25
	lfs      f1, 0x58(r1)
	fsubs    f2, f2, f24
	lfs      f0, lbl_805179E0@sda21(r2)
	fsubs    f1, f1, f26
	fmuls    f3, f3, f3
	fmuls    f4, f1, f1
	fmadds   f1, f2, f2, f3
	fadds    f1, f4, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80110E54
	ble      lbl_80110E58
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80110E58

lbl_80110E54:
	fmr      f1, f0

lbl_80110E58:
	lwz      r3, 0xc0(r31)
	lfs      f0, 0x35c(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_80110E88
	li       r0, 6
	mr       r3, r31
	stw      r0, 0x10(r30)
	bl       finishMotion__Q24Game9EnemyBaseFv
	lfs      f0, lbl_805179E0@sda21(r2)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)

lbl_80110E88:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_80110EC4
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_80110EC4
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x10(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80110EC4:
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_805179E0@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80110EF8
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80110EF8:
	psq_l    f31, 360(r1), 0, qr0
	lfd      f31, 0x160(r1)
	psq_l    f30, 344(r1), 0, qr0
	lfd      f30, 0x150(r1)
	psq_l    f29, 328(r1), 0, qr0
	lfd      f29, 0x140(r1)
	psq_l    f28, 312(r1), 0, qr0
	lfd      f28, 0x130(r1)
	psq_l    f27, 296(r1), 0, qr0
	lfd      f27, 0x120(r1)
	psq_l    f26, 280(r1), 0, qr0
	lfd      f26, 0x110(r1)
	psq_l    f25, 264(r1), 0, qr0
	lfd      f25, 0x100(r1)
	psq_l    f24, 248(r1), 0, qr0
	lfd      f24, 0xf0(r1)
	lwz      r31, 0xec(r1)
	lwz      r30, 0xe8(r1)
	lwz      r29, 0xe4(r1)
	lwz      r0, 0x174(r1)
	lwz      r28, 0xe0(r1)
	mtlr     r0
	addi     r1, r1, 0x170
	blr
	*/
}

/*
 * --INFO--
 * Address:	80110F58
 * Size:	000048
 */
void StateWalk::cleanup(EnemyBase* enemy)
{
	enemy->setEmotionCaution();
	enemy->resetAnimSpeed();
	enemy->m_simVelocity = Vector3f(0.0f);
}

/*
 * --INFO--
 * Address:	80110FA0
 * Size:	00003C
 */
StateAttack::StateAttack(int stateID)
    : State(stateID)
{
	m_name = "Attack";
}

/*
 * --INFO--
 * Address:	80110FDC
 * Size:	000048
 */
void StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->setEmotionExcitement();
	enemy->startMotion(0, nullptr);
	enemy->resetAnimSpeed();
}

/*
 * --INFO--
 * Address:	80111024
 * Size:	0003F0
 */
void StateAttack::exec(EnemyBase* enemy)
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
	mr       r29, r4
	mr       r28, r3
	lwz      r3, 0x188(r4)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_80111390
	lwz      r0, 0x1c(r3)
	cmpwi    r0, 3
	beq      lbl_8011112C
	bge      lbl_801110A4
	cmpwi    r0, 2
	bge      lbl_801110B0
	b        lbl_80111390

lbl_801110A4:
	cmpwi    r0, 0x3e8
	beq      lbl_80111144
	b        lbl_80111390

lbl_801110B0:
	lwz      r6, 0xc0(r29)
	mr       r3, r29
	li       r4, 0
	li       r5, 0
	lfs      f1, 0x5b4(r6)
	lfs      f2, 0x5dc(r6)
	lfs      f3, 0x604(r6)
	bl
"attackNavi__Q24Game9EnemyFuncFPQ24Game8CreaturefffP8CollPartP23Condition<Q24Game4Navi>"
	mr       r3, r29
	li       r4, 0
	bl
"eatPikmin__Q24Game9EnemyFuncFPQ24Game9EnemyBaseP23Condition<Q24Game4Piki>"
	cmpwi    r3, 0
	bne      lbl_801110F4
	mr       r3, r29
	li       r4, 8
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener

lbl_801110F4:
	mr       r3, r29
	lwz      r30, 0xc0(r29)
	lwz      r12, 0(r29)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f4, f1
	lfs      f1, 0x53c(r30)
	lfs      f2, 0x4c4(r30)
	mr       r3, r29
	lfs      f3, 0x4ec(r30)
	li       r4, 0
	bl
"flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	b        lbl_80111390

lbl_8011112C:
	lwz      r5, 0xc0(r29)
	mr       r3, r29
	li       r4, 0
	lfs      f1, 0x844(r5)
	bl
"swallowPikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
	b        lbl_80111390

lbl_80111144:
	lwz      r7, 0xc0(r29)
	mr       r3, r29
	li       r4, 0
	li       r5, 0
	lfs      f1, 0x49c(r7)
	li       r6, 0
	lfs      f2, 0x44c(r7)
	bl
"getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
	cmplwi   r3, 0
	beq      lbl_80111370
	stw      r3, 0x230(r29)
	addi     r3, r1, 0x68
	lwz      r4, 0x230(r29)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	lfs      f2, 0x68(r1)
	lwz      r12, 0(r29)
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
	lwz      r12, 0(r29)
	fmr      f26, f1
	mr       r3, r29
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f26
	bl       angDist__Fff
	mr       r4, r29
	lwz      r5, 0xc0(r29)
	lwz      r12, 0(r29)
	fmr      f30, f1
	addi     r3, r1, 0x14
	lfs      f28, 0x58c(r5)
	lwz      r12, 8(r12)
	li       r30, 0
	lfs      f29, 0x564(r5)
	lwz      r31, 0x230(r29)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lfs      f31, 0x14(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	lfs      f0, 8(r1)
	lwz      r12, 0(r29)
	addi     r3, r1, 0x2c
	fsubs    f26, f0, f31
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x20
	lwz      r12, 0(r31)
	lfs      f31, 0x30(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	lfs      f0, 0x24(r1)
	lwz      r12, 0(r29)
	addi     r3, r1, 0x44
	fsubs    f27, f0, f31
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x38
	lwz      r12, 0(r31)
	lfs      f31, 0x4c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	fmuls    f1, f27, f27
	lfs      f2, 0x40(r1)
	fmuls    f0, f29, f29
	fsubs    f2, f2, f31
	fmadds   f1, f26, f26, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80111320
	lfs      f0, lbl_80517A08@sda21(r2)
	fabs     f2, f30
	lfs      f1, lbl_80517A04@sda21(r2)
	fmuls    f0, f0, f28
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_80111320
	li       r30, 1

lbl_80111320:
	clrlwi.  r0, r30, 0x18
	beq      lbl_8011134C
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	li       r5, 4
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80111390

lbl_8011134C:
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	li       r5, 2
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80111390

lbl_80111370:
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	li       r5, 6
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80111390:
	lfs      f1, 0x200(r29)
	lfs      f0, lbl_805179E0@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_801113C4
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_801113C4:
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
 * Address:	80111414
 * Size:	000024
 */
void StateAttack::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/*
 * --INFO--
 * Address:	80111438
 * Size:	000044
 */
StateFlick::StateFlick(int stateID)
    : State(stateID)
{
	m_name = "Flick";
}

/*
 * --INFO--
 * Address:	8011147C
 * Size:	000094
 */
void StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->setEmotionExcitement();

	FlickArg* flickArg = static_cast<FlickArg*>(stateArg);
	if (flickArg) {
		_10 = flickArg->_00;
	} else {
		_10 = -1;
	}

	enemy->startMotion(2, nullptr);
	enemy->resetEvent(0, EB_DropMassSet);
	static_cast<Obj*>(enemy)->resetEnemyNonStone();
}

/*
 * --INFO--
 * Address:	80111510
 * Size:	000178
 */
void StateFlick::exec(EnemyBase* enemy)
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
	beq      lbl_8011163C
	lwz      r0, 0x1c(r5)
	cmpwi    r0, 3
	beq      lbl_801115E4
	bge      lbl_80111558
	cmpwi    r0, 2
	bge      lbl_80111564
	b        lbl_8011163C

lbl_80111558:
	cmpwi    r0, 0x3e8
	beq      lbl_801115FC
	b        lbl_8011163C

lbl_80111564:
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f4, lbl_80517A40@sda21(r2)
	li       r4, 0
	lfs      f1, 0x53c(r5)
	lfs      f2, 0x4c4(r5)
	lfs      f3, 0x4ec(r5)
	bl
"flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f4, lbl_80517A40@sda21(r2)
	li       r4, 0
	lfs      f1, 0x514(r5)
	lfs      f2, 0x4c4(r5)
	lfs      f3, 0x4ec(r5)
	bl
"flickNearbyPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f4, lbl_80517A40@sda21(r2)
	li       r4, 0
	lfs      f1, 0x514(r5)
	lfs      f2, 0x4c4(r5)
	lfs      f3, 0x4ec(r5)
	bl
"flickNearbyNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Navi>"
	lfs      f0, lbl_805179E0@sda21(r2)
	mr       r3, r31
	stfs     f0, 0x20c(r31)
	lwz      r12, 0(r31)
	lwz      r12, 0x304(r12)
	mtctr    r12
	bctrl
	b        lbl_8011163C

lbl_801115E4:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x300(r12)
	mtctr    r12
	bctrl
	b        lbl_8011163C

lbl_801115FC:
	lwz      r5, 0x10(r30)
	cmpwi    r5, -1
	beq      lbl_80111620
	lwz      r12, 0(r3)
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8011163C

lbl_80111620:
	lwz      r12, 0(r3)
	li       r6, 0
	lwz      r5, 8(r30)
	lwz      r12, 0x1c(r12)
	lwz      r5, 0x18(r5)
	mtctr    r12
	bctrl

lbl_8011163C:
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_805179E0@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80111670
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80111670:
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
 * Address:	80111688
 * Size:	000050
 */
void StateFlick::cleanup(EnemyBase* enemy)
{
	Obj* kochappy = static_cast<Obj*>(enemy);
	kochappy->setEmotionCaution();
	kochappy->setEvent(0, EB_DropMassSet);
	kochappy->resetEnemyNonStone();
}

/*
 * --INFO--
 * Address:	801116D8
 * Size:	000040
 */
StateTurnToHome::StateTurnToHome(int stateID)
    : State(stateID)
{
	m_name = "TurnToHome";
}

/*
 * --INFO--
 * Address:	80111718
 * Size:	000120
 */
void StateTurnToHome::init(EnemyBase* enemy, StateArg* stateArg)
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
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	lfs      f0, lbl_805179E0@sda21(r2)
	mr       r31, r4
	mr       r30, r3
	addi     r3, r1, 8
	stfs     f0, 0x1d4(r4)
	stfs     f0, 0x1d8(r4)
	stfs     f0, 0x1dc(r4)
	lwz      r12, 0(r4)
	lfs      f31, 0x198(r4)
	lwz      r12, 8(r12)
	lfs      f30, 0x19c(r4)
	lfs      f29, 0x1a0(r4)
	mtctr    r12
	bctrl
	lfs      f0, 0xc(r1)
	lfs      f2, 8(r1)
	fsubs    f3, f0, f30
	lfs      f1, 0x10(r1)
	fsubs    f2, f2, f31
	lfs      f0, lbl_805179E0@sda21(r2)
	fsubs    f1, f1, f29
	fmuls    f3, f3, f3
	fmuls    f4, f1, f1
	fmadds   f1, f2, f2, f3
	fadds    f1, f4, f1
	fcmpo    cr0, f1, f0
	ble      lbl_801117C0
	ble      lbl_801117C4
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_801117C4

lbl_801117C0:
	fmr      f1, f0

lbl_801117C4:
	lwz      r3, 0xc0(r31)
	lfs      f0, 0x384(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_801117F8
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80111808

lbl_801117F8:
	mr       r3, r31
	li       r4, 7
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener

lbl_80111808:
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	psq_l    f30, 56(r1), 0, qr0
	lfd      f30, 0x30(r1)
	psq_l    f29, 40(r1), 0, qr0
	lfd      f29, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r0, 0x54(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	80111838
 * Size:	00046C
 */
void StateTurnToHome::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x110(r1)
	mflr     r0
	stw      r0, 0x114(r1)
	stfd     f31, 0x100(r1)
	psq_st   f31, 264(r1), 0, qr0
	stfd     f30, 0xf0(r1)
	psq_st   f30, 248(r1), 0, qr0
	stfd     f29, 0xe0(r1)
	psq_st   f29, 232(r1), 0, qr0
	stfd     f28, 0xd0(r1)
	psq_st   f28, 216(r1), 0, qr0
	stfd     f27, 0xc0(r1)
	psq_st   f27, 200(r1), 0, qr0
	stfd     f26, 0xb0(r1)
	psq_st   f26, 184(r1), 0, qr0
	stw      r31, 0xac(r1)
	stw      r30, 0xa8(r1)
	stw      r29, 0xa4(r1)
	stw      r28, 0xa0(r1)
	mr       r29, r4
	mr       r28, r3
	mr       r3, r29
	li       r4, 1
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_801118C4
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	li       r5, 5
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80111C54

lbl_801118C4:
	mr       r4, r29
	lwz      r5, 0xc0(r29)
	lwz      r12, 0(r29)
	addi     r3, r1, 0x8c
	lfs      f26, 0x198(r29)
	lwz      r12, 8(r12)
	lfs      f27, 0x1a0(r29)
	lfs      f31, 0x58c(r5)
	lfs      f30, 0x334(r5)
	lfs      f29, 0x30c(r5)
	mtctr    r12
	bctrl
	lfs      f4, 0x8c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x94(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x90(r1)
	fsubs    f1, f26, f4
	fsubs    f2, f27, f0
	stfs     f4, 0x80(r1)
	stfs     f3, 0x84(r1)
	stfs     f0, 0x88(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r29)
	fmr      f26, f1
	mr       r3, r29
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f26
	bl       angDist__Fff
	fmr      f28, f1
	lfs      f0, lbl_80517A08@sda21(r2)
	lfs      f1, lbl_80517A04@sda21(r2)
	fmuls    f0, f0, f30
	fmuls    f29, f28, f29
	fmuls    f1, f1, f0
	fabs     f0, f29
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80111988
	lfs      f0, lbl_805179E0@sda21(r2)
	fcmpo    cr0, f29, f0
	ble      lbl_80111984
	fmr      f29, f1
	b        lbl_80111988

lbl_80111984:
	fneg     f29, f1

lbl_80111988:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f29, f1
	bl       roundAng__Ff
	lfs      f0, lbl_80517A08@sda21(r2)
	fabs     f2, f28
	stfs     f1, 0x1fc(r29)
	fmuls    f0, f0, f31
	lfs      f1, lbl_80517A04@sda21(r2)
	lfs      f3, 0x1fc(r29)
	frsp     f2, f2
	fmuls    f0, f1, f0
	stfs     f3, 0x1a8(r29)
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_801119DC
	mr       r3, r29
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_801119DC:
	lwz      r3, 0x188(r29)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_80111A1C
	lwz      r0, 0x1c(r3)
	cmpwi    r0, 0x3e8
	beq      lbl_801119FC
	b        lbl_80111A1C

lbl_801119FC:
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	li       r5, 7
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80111A1C:
	lwz      r7, 0xc0(r29)
	mr       r3, r29
	li       r4, 0
	li       r5, 0
	lfs      f1, 0x49c(r7)
	li       r6, 0
	lfs      f2, 0x44c(r7)
	bl
"getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
	cmplwi   r3, 0
	beq      lbl_80111C20
	stw      r3, 0x230(r29)
	addi     r3, r1, 0x68
	lwz      r31, 0x230(r29)
	lwz      r5, 0xc0(r29)
	mr       r4, r31
	lwz      r12, 0(r31)
	lfs      f30, 0x58c(r5)
	lwz      r12, 8(r12)
	lfs      f31, 0x564(r5)
	mtctr    r12
	bctrl
	mr       r4, r29
	lfs      f2, 0x68(r1)
	lwz      r12, 0(r29)
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
	lwz      r12, 0(r29)
	fmr      f26, f1
	mr       r3, r29
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f26
	bl       angDist__Fff
	mr       r4, r29
	fmr      f28, f1
	lwz      r12, 0(r29)
	addi     r3, r1, 0x14
	li       r30, 0
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lfs      f29, 0x14(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	lfs      f0, 8(r1)
	lwz      r12, 0(r29)
	addi     r3, r1, 0x2c
	fsubs    f26, f0, f29
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x20
	lwz      r12, 0(r31)
	lfs      f29, 0x30(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	lfs      f0, 0x24(r1)
	lwz      r12, 0(r29)
	addi     r3, r1, 0x44
	fsubs    f27, f0, f29
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x38
	lwz      r12, 0(r31)
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
	bge      lbl_80111BF8
	lfs      f0, lbl_80517A08@sda21(r2)
	fabs     f2, f28
	lfs      f1, lbl_80517A04@sda21(r2)
	fmuls    f0, f0, f30
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_80111BF8
	li       r30, 1

lbl_80111BF8:
	clrlwi.  r0, r30, 0x18
	beq      lbl_80111C20
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	li       r5, 4
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80111C20:
	lfs      f1, 0x200(r29)
	lfs      f0, lbl_805179E0@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80111C54
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80111C54:
	psq_l    f31, 264(r1), 0, qr0
	lfd      f31, 0x100(r1)
	psq_l    f30, 248(r1), 0, qr0
	lfd      f30, 0xf0(r1)
	psq_l    f29, 232(r1), 0, qr0
	lfd      f29, 0xe0(r1)
	psq_l    f28, 216(r1), 0, qr0
	lfd      f28, 0xd0(r1)
	psq_l    f27, 200(r1), 0, qr0
	lfd      f27, 0xc0(r1)
	psq_l    f26, 184(r1), 0, qr0
	lfd      f26, 0xb0(r1)
	lwz      r31, 0xac(r1)
	lwz      r30, 0xa8(r1)
	lwz      r29, 0xa4(r1)
	lwz      r0, 0x114(r1)
	lwz      r28, 0xa0(r1)
	mtlr     r0
	addi     r1, r1, 0x110
	blr
	*/
}

/*
 * --INFO--
 * Address:	80111CA4
 * Size:	000004
 */
void StateTurnToHome::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	80111CA8
 * Size:	00003C
 */
StateGoHome::StateGoHome(int stateID)
    : State(stateID)
{
	m_name = "GoHome";
}

/*
 * --INFO--
 * Address:	80111CE4
 * Size:	000064
 */
void StateGoHome::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kochappy = static_cast<Obj*>(enemy);
	kochappy->setAnimationSpeed(40.0f);
	kochappy->startMotion(3, nullptr);
	_10 = -1;
}

/*
 * --INFO--
 * Address:	80111D48
 * Size:	000440
 */
void StateGoHome::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x110(r1)
	mflr     r0
	stw      r0, 0x114(r1)
	stfd     f31, 0x100(r1)
	psq_st   f31, 264(r1), 0, qr0
	stfd     f30, 0xf0(r1)
	psq_st   f30, 248(r1), 0, qr0
	stfd     f29, 0xe0(r1)
	psq_st   f29, 232(r1), 0, qr0
	stfd     f28, 0xd0(r1)
	psq_st   f28, 216(r1), 0, qr0
	stfd     f27, 0xc0(r1)
	psq_st   f27, 200(r1), 0, qr0
	stfd     f26, 0xb0(r1)
	psq_st   f26, 184(r1), 0, qr0
	stw      r31, 0xac(r1)
	stw      r30, 0xa8(r1)
	stw      r29, 0xa4(r1)
	stw      r28, 0xa0(r1)
	mr       r31, r4
	mr       r30, r3
	mr       r3, r31
	li       r4, 1
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_80111DD4
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 5
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80112104

lbl_80111DD4:
	lfs      f1, 0x19c(r31)
	mr       r3, r31
	lfs      f2, 0x1a0(r31)
	addi     r4, r1, 0x8c
	lfs      f0, 0x198(r31)
	stfs     f0, 0x8c(r1)
	stfs     f1, 0x90(r1)
	stfs     f2, 0x94(r1)
	lwz      r5, 0xc0(r31)
	lfs      f1, 0x2e4(r5)
	lfs      f2, 0x30c(r5)
	lfs      f3, 0x334(r5)
	bl "walkToTarget__Q24Game9EnemyFuncFPQ24Game9EnemyBaseR10Vector3<f>fff" mr
r4, r31 addi     r3, r1, 0x80 lwz      r12, 0(r31) lfs      f26, 0x198(r31) lwz
r12, 8(r12) lfs      f27, 0x19c(r31) lfs      f28, 0x1a0(r31) mtctr    r12 bctrl
	lfs      f0, 0x84(r1)
	lfs      f2, 0x80(r1)
	fsubs    f3, f0, f27
	lfs      f1, 0x88(r1)
	fsubs    f2, f2, f26
	lfs      f0, lbl_805179E0@sda21(r2)
	fsubs    f1, f1, f28
	fmuls    f3, f3, f3
	fmuls    f4, f1, f1
	fmadds   f1, f2, f2, f3
	fadds    f1, f4, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80111E70
	ble      lbl_80111E74
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80111E74

lbl_80111E70:
	fmr      f1, f0

lbl_80111E74:
	lwz      r3, 0xc0(r31)
	lfs      f0, 0x384(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_80111EA4
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv
	lfs      f0, lbl_805179E0@sda21(r2)
	li       r0, 0
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	stw      r0, 0x10(r30)

lbl_80111EA4:
	lwz      r7, 0xc0(r31)
	mr       r3, r31
	li       r4, 0
	li       r5, 0
	lfs      f1, 0x49c(r7)
	li       r6, 0
	lfs      f2, 0x44c(r7)
	bl
"getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
	cmplwi   r3, 0
	beq      lbl_801120C4
	stw      r3, 0x230(r31)
	addi     r3, r1, 0x68
	lwz      r29, 0x230(r31)
	lwz      r5, 0xc0(r31)
	mr       r4, r29
	lwz      r12, 0(r29)
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
	li       r28, 0
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
	mr       r4, r31
	lfs      f0, 8(r1)
	lwz      r12, 0(r31)
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
	mr       r4, r31
	lfs      f0, 0x24(r1)
	lwz      r12, 0(r31)
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
	bge      lbl_80112080
	lfs      f0, lbl_80517A08@sda21(r2)
	fabs     f2, f28
	lfs      f1, lbl_80517A04@sda21(r2)
	fmuls    f0, f0, f30
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_80112080
	li       r28, 1

lbl_80112080:
	clrlwi.  r0, r28, 0x18
	beq      lbl_801120B4
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv
	mr       r3, r31
	lfs      f1, lbl_80517A1C@sda21(r2)
	lwz      r12, 0(r31)
	lwz      r12, 0x2fc(r12)
	mtctr    r12
	bctrl
	li       r0, 4
	stw      r0, 0x10(r30)
	b        lbl_801120C4

lbl_801120B4:
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv
	li       r0, 3
	stw      r0, 0x10(r30)

lbl_801120C4:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_80112104
	lwz      r0, 0x1c(r3)
	cmpwi    r0, 0x3e8
	beq      lbl_801120E4
	b        lbl_80112104

lbl_801120E4:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x10(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80112104:
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_805179E0@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80112138
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 1
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80112138:
	psq_l    f31, 264(r1), 0, qr0
	lfd      f31, 0x100(r1)
	psq_l    f30, 248(r1), 0, qr0
	lfd      f30, 0xf0(r1)
	psq_l    f29, 232(r1), 0, qr0
	lfd      f29, 0xe0(r1)
	psq_l    f28, 216(r1), 0, qr0
	lfd      f28, 0xd0(r1)
	psq_l    f27, 200(r1), 0, qr0
	lfd      f27, 0xc0(r1)
	psq_l    f26, 184(r1), 0, qr0
	lfd      f26, 0xb0(r1)
	lwz      r31, 0xac(r1)
	lwz      r30, 0xa8(r1)
	lwz      r29, 0xa4(r1)
	lwz      r0, 0x114(r1)
	lwz      r28, 0xa0(r1)
	mtlr     r0
	addi     r1, r1, 0x110
	blr
	*/
}

/*
 * --INFO--
 * Address:	80112188
 * Size:	000040
 */
void StateGoHome::cleanup(EnemyBase* enemy)
{
	enemy->resetAnimSpeed();
	enemy->m_simVelocity = Vector3f(0.0f);
}

/*
 * --INFO--
 * Address:	801121C8
 * Size:	00003C
 */
StateDemo::StateDemo(int stateID)
    : State(stateID)
{
	m_name = "demo";
}

/*
 * --INFO--
 * Address:	80112204
 * Size:	00007C
 */
void StateDemo::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->kill(nullptr);
	if (gameSystem->m_section->getTimerType() != 3 && !playData->isDemoFlag(DEMO_Unlock_Captain_Switch)) {
		gameSystem->m_section->enableTimer(5.0f, 3);
	}
}

} // namespace KochappyBase
} // namespace Game
