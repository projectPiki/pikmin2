#include "Game/Entities/Queen.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "nans.h"

namespace Game {
namespace Queen {
/*
 * --INFO--
 * Address:	80287B70
 * Size:	000278
 */
void FSM::init(EnemyBase* enemy)
{
	create(7);
	registerState(new StateDead);
	registerState(new StateSleep);
	registerState(new StateWait);
	registerState(new StateDamage);
	registerState(new StateFlick);
	registerState(new StateRolling);
	registerState(new StateBorn);
}

/*
 * --INFO--
 * Address:	80287DE8
 * Size:	000058
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* queen = static_cast<Obj*>(enemy);
	queen->createDeadEffect();
	queen->m_simVelocity = Vector3f(0.0f);
	queen->deathProcedure();
	queen->startMotion(0, nullptr);
}

/*
 * --INFO--
 * Address:	80287E40
 * Size:	0000B8
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* queen = static_cast<Obj*>(enemy);
	if (queen->m_curAnim->m_isRunning != 0) {
		if ((u32)queen->m_curAnim->m_type == KEYEVENT_2) {
			Vector3f position = queen->getPosition();
			cameraMgr->startVibration(6, position, 2);
			rumbleMgr->startRumble(14, position, 2);
		} else if ((u32)queen->m_curAnim->m_type == KEYEVENT_END) {
			queen->releaseJointShadow();
			queen->kill(nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	80287EF8
 * Size:	000004
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	80287EFC
 * Size:	000070
 */
void StateSleep::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* queen         = static_cast<Obj*>(enemy);
	queen->m_nextState = QUEEN_NULL;
	queen->_2C5        = 0;
	queen->m_waitTimer = 0.0f;
	queen->_2D0        = queen->m_toFlick;
	queen->hardConstraintOn();
	queen->m_simVelocity = Vector3f(0.0f);
	queen->startMotion(1, nullptr);
}

/*
 * --INFO--
 * Address:	80287F6C
 * Size:	000154
 */
void StateSleep::exec(EnemyBase* enemy)
{
	Obj* queen = static_cast<Obj*>(enemy);
	if ((queen->m_health <= 0.0f) || (queen->isHitCounterUp()) || (queen->isCreateBaby())) {
		queen->finishMotion();
	}

	if (queen->isFinishMotion()) {
		if (queen->m_health <= 0.0f) {
			queen->m_nextState = QUEEN_Dead;
		} else if (EnemyFunc::isStartFlick(queen, false)) {
			queen->m_nextState = QUEEN_Flick;
		} else if (queen->m_stuckPikminCount != 0) {
			queen->m_nextState = QUEEN_Damage;
		} else {
			queen->m_nextState = QUEEN_Wait;
		}
	}

	if (queen->m_curAnim->m_isRunning != 0) {
		if ((u32)queen->m_curAnim->m_type == 0) {
			queen->startSleepEffect();
		} else if ((u32)queen->m_curAnim->m_type == KEYEVENT_2) {
			queen->finishSleepEffect();
			queen->createWakeUpEffect();
			queen->setMidBossAppearBGM();
		} else if ((u32)queen->m_curAnim->m_type == KEYEVENT_END) {
			transit(queen, queen->m_nextState, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	802880C0
 * Size:	000040
 */
void StateSleep::cleanup(EnemyBase* enemy)
{
	Obj* queen = static_cast<Obj*>(enemy);
	queen->hardConstraintOff();
	queen->finishSleepEffect();
	queen->setMidBossAppearBGM();
}

/*
 * --INFO--
 * Address:	80288100
 * Size:	000070
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* queen         = static_cast<Obj*>(enemy);
	queen->m_nextState = QUEEN_NULL;
	queen->_2C5        = 0;
	queen->m_waitTimer = 0.0f;
	queen->_2D0        = queen->m_toFlick;
	queen->hardConstraintOn();
	queen->m_simVelocity = Vector3f(0.0f);
	queen->startMotion(2, nullptr);
}

/*
 * --INFO--
 * Address:	80288170
 * Size:	00013C
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* queen = static_cast<Obj*>(enemy);
	if (!queen->isCreateBaby() && (queen->m_waitTimer > 30.0f)) {
		queen->m_nextState = QUEEN_Sleep;
		queen->finishMotion();
	}

	if (queen->isHitCounterUp()) {
		queen->m_nextState = QUEEN_Damage;
		queen->finishMotion();
	}

	if (queen->isCreateBaby()) {
		queen->m_nextState = QUEEN_Born;
		queen->finishMotion();
	}

	if (EnemyFunc::isStartFlick(queen, false)) {
		queen->m_nextState = QUEEN_Flick;
		queen->finishMotion();
	}

	if (queen->m_health <= 0.0f) {
		queen->m_nextState = QUEEN_Dead;
		queen->finishMotion();
	}

	queen->m_waitTimer += sys->m_deltaTime;

	if ((queen->m_curAnim->m_isRunning != 0) && ((u32)queen->m_curAnim->m_type == KEYEVENT_END)) {
		transit(queen, queen->m_nextState, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802882AC
 * Size:	000024
 */
void StateWait::cleanup(EnemyBase* enemy) { enemy->hardConstraintOff(); }

/*
 * --INFO--
 * Address:	802882D0
 * Size:	000078
 */
void StateDamage::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* queen         = static_cast<Obj*>(enemy);
	queen->m_nextState = QUEEN_NULL;
	queen->_2C5        = 0;
	queen->m_waitTimer = 0.0f;
	queen->startDamageEffect();
	queen->hardConstraintOn();
	queen->m_simVelocity = Vector3f(0.0f);
	queen->setEmotionExcitement();
	queen->startMotion(3, nullptr);
}

/*
 * --INFO--
 * Address:	80288348
 * Size:	0000F4
 */
void StateDamage::exec(EnemyBase* enemy)
{
	Obj* queen = static_cast<Obj*>(enemy);

	if (queen->isCreateBaby()) {
		queen->m_nextState = QUEEN_Born;
		queen->finishMotion();
	}

	if (queen->m_stuckPikminCount == 0) {
		queen->m_nextState = QUEEN_Wait;
		queen->finishMotion();
	}

	if (EnemyFunc::isStartFlick(queen, false)) {
		queen->m_nextState = QUEEN_Flick;
		queen->finishMotion();
	}

	if (queen->m_health <= 0.0f) {
		queen->m_nextState = QUEEN_Dead;
		queen->finishMotion();
	}

	if ((queen->m_curAnim->m_isRunning != 0) && ((u32)queen->m_curAnim->m_type == KEYEVENT_END)) {
		transit(queen, queen->m_nextState, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8028843C
 * Size:	000040
 */
void StateDamage::cleanup(EnemyBase* enemy)
{
	Obj* queen = static_cast<Obj*>(enemy);
	queen->hardConstraintOff();
	queen->finishDamageEffect();
	queen->setEmotionCaution();
}

/*
 * --INFO--
 * Address:	8028847C
 * Size:	000080
 */
void StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* queen         = static_cast<Obj*>(enemy);
	queen->m_nextState = QUEEN_NULL;
	queen->_2C5        = 0;
	queen->m_waitTimer = 0.0f;
	queen->createFlickEffect();
	queen->hardConstraintOn();
	queen->m_simVelocity = Vector3f(0.0f);
	queen->setEmotionExcitement();
	queen->startMotion(4, nullptr);
	queen->startBossChargeBGM();
}

/*
 * --INFO--
 * Address:	802884FC
 * Size:	0000FC
 */
void StateFlick::exec(EnemyBase* enemy)
{
	Obj* queen = static_cast<Obj*>(enemy);
	if (queen->m_curAnim->m_isRunning != 0) {
		if ((u32)queen->m_curAnim->m_type == KEYEVENT_2) {
			queen->flickPikmin(queen->getFaceDir());
		} else if ((u32)queen->m_curAnim->m_type == KEYEVENT_END) {
			if (queen->m_health <= 0.0f) {
				transit(queen, QUEEN_Dead, nullptr);
			} else if (queen->isRollingAttackLeft()) {
				transit(queen, QUEEN_Rolling, (StateArg*)"left");
			} else {
				transit(queen, QUEEN_Rolling, nullptr);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	802885F8
 * Size:	000038
 */
void StateFlick::cleanup(EnemyBase* enemy)
{
	enemy->hardConstraintOff();
	enemy->setEmotionCaution();
}

/*
 * --INFO--
 * Address:	80288630
 * Size:	000088
 */
void StateRolling::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* queen           = static_cast<Obj*>(enemy);
	queen->m_nextState   = QUEEN_NULL;
	queen->_2C2          = 0;
	queen->m_simVelocity = Vector3f(0.0f);
	queen->setEmotionExcitement();
	RollingStateArg* arg = static_cast<RollingStateArg*>(stateArg);
	if (arg) {
		queen->startMotion(5, nullptr);
	} else {
		queen->startMotion(6, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802886B8
 * Size:	0005BC
 */
void StateRolling::exec(EnemyBase* enemy)
{
	Obj* queen = static_cast<Obj*>(enemy);
	if (static_cast<Obj*>(enemy)->_2C2 != 0) {

		f32 initAngle;
		if (queen->getCurrAnimIndex() == 5) {
			initAngle = HALF_PI;
		} else {
			initAngle = -HALF_PI;
		}

		f32 theta = initAngle + queen->getFaceDir();
		f32 cos   = pikmin2_cosf(theta);
		f32 sin   = pikmin2_sinf(theta);

		Vector3f position = queen->getPosition();
		Vector3f sep      = position - queen->m_homePosition;

		Parms* parms      = static_cast<Parms*>(queen->m_parms);
		f32 territory     = parms->m_general.m_territoryRadius.m_value;
		Vector3f otherVec = Vector3f(cos, 0.0f, sin);
		f32 dotProd       = sep.z * otherVec.z + sep.x * otherVec.x + 0.0f;

		if (dotProd > territory) {
			queen->m_simVelocity = Vector3f(otherVec.y);
		} else {
			f32 increasedRad     = 10.0f + territory;
			Vector3f weightedSep = otherVec * increasedRad + (queen->m_homePosition - position);
			_normalise(weightedSep);

			f32 speed              = parms->m_general.m_moveSpeed.m_value;
			queen->m_simVelocity.x = weightedSep.x * speed;
			queen->m_simVelocity.y = weightedSep.y;
			queen->m_simVelocity.z = weightedSep.z * speed;
		}

		queen->flickPikmin(-1000.0f);
		queen->rollingAttack();
		queen->m_waitTimer += sys->m_deltaTime;

		Vector3f camPos = queen->getPosition();
		cameraMgr->startVibration(15, camPos, 2);

	} else {
		queen->m_simVelocity = Vector3f(0.0f);
	}

	if (queen->m_health <= 0.0f) {
		queen->m_nextState   = QUEEN_Dead;
		queen->_2C2          = 0;
		queen->m_simVelocity = Vector3f(0.0f);

		queen->finishMotion();
		queen->finishBossAttackLoopBGM();
	}

	if (queen->m_curAnim->m_isRunning != 0) {
		if ((u32)queen->m_curAnim->m_type == KEYEVENT_2) {

			f32 initAngle;
			if (queen->getCurrAnimIndex() == 5) {
				initAngle = HALF_PI;
			} else {
				initAngle = -HALF_PI;
			}

			f32 theta = initAngle + queen->getFaceDir();
			f32 cos   = pikmin2_cosf(theta);
			f32 sin   = pikmin2_sinf(theta);

			Vector3f sep = queen->getPosition() - queen->m_homePosition;
			f32 dotProd  = sep.z * cos + sep.x * sin + sep.y * 0.0f;

			Parms* parms  = static_cast<Parms*>(queen->m_parms);
			f32 territory = parms->m_general.m_territoryRadius.m_value - 50.0f;
			f32 homeRad   = -(50.0f + parms->m_general.m_homeRadius.m_value);

			if (queen->m_health <= 0.0f) {
				queen->finishBossAttackLoopBGM();
			}

			if (dotProd > territory) {
				if (queen->_2C2 != 0) {
					queen->createCrashFallRock();
					Vector3f anotherPos = queen->getPosition();

					cameraMgr->startVibration(27, anotherPos, 2);
					rumbleMgr->startRumble(15, anotherPos, 2);
				}
				queen->_2C2        = 0;
				queen->m_nextState = QUEEN_Rolling;

				queen->finishMotion();
				queen->finishRollingEffect(true);
				queen->getJAIObject()->startSound(PSSE_EN_QUEEN_CRUSH, 0);
			} else if ((queen->m_waitTimer > static_cast<Parms*>(queen->m_parms)->m_properParms.m_fp01.m_value) && (dotProd > homeRad)
			           && (dotProd < 50.0f)) {
				if (queen->_2C2 != 0) {
					queen->finishBossAttackLoopBGM();
				}

				queen->_2C2        = 0;
				queen->m_nextState = QUEEN_Wait;

				queen->finishMotion();
				queen->finishRollingEffect(false);
			}
		} else if ((u32)queen->m_curAnim->m_type == 0) {
			if (queen->_2C2 == 0) {
				queen->_2C2 = 1;

				queen->startRollingEffect();
				queen->startBossAttackLoopBGM();
			}
		} else if ((u32)queen->m_curAnim->m_type == KEYEVENT_END) {
			if (queen->getCurrAnimIndex() == 6) {
				transit(queen, queen->m_nextState, (StateArg*)"left");
			} else {
				transit(queen, queen->m_nextState, nullptr);
			}
		}
	}
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
	stw      r31, 0x6c(r1)
	stw      r30, 0x68(r1)
	lbz      r0, 0x2c2(r4)
	mr       r30, r3
	mr       r31, r4
	cmplwi   r0, 0
	beq      lbl_802888FC
	mr       r3, r31
	bl       getCurrAnimIndex__Q24Game9EnemyBaseFv
	cmpwi    r3, 5
	bne      lbl_80288710
	lfs      f30, lbl_8051B7E0@sda21(r2)
	b        lbl_80288714

lbl_80288710:
	lfs      f30, lbl_8051B7E4@sda21(r2)

lbl_80288714:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f3, f30, f1
	lfs      f0, lbl_8051B7D0@sda21(r2)
	fmr      f1, f3
	fcmpo    cr0, f3, f0
	bge      lbl_80288740
	fneg     f1, f3

lbl_80288740:
	lfs      f2, lbl_8051B7E8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051B7D0@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0x50(r1)
	lwz      r0, 0x54(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f31, 4(r3)
	bge      lbl_80288798
	lfs      f0, lbl_8051B7EC@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x58(r1)
	lwz      r0, 0x5c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f30, f0
	b        lbl_802887B0

lbl_80288798:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0x60(r1)
	lwz      r0, 0x64(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f30, r4, r0

lbl_802887B0:
	mr       r4, r31
	addi     r3, r1, 0x2c
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f8, 0x2c(r1)
	lfs      f5, 0x198(r31)
	lwz      r3, 0xc0(r31)
	fsubs    f0, f8, f5
	lfs      f7, lbl_8051B7D0@sda21(r2)
	lfs      f4, 0x34(r1)
	lfs      f6, 0x1a0(r31)
	fmadds   f0, f0, f30, f7
	lfs      f3, 0x35c(r3)
	fsubs    f1, f4, f6
	fmadds   f0, f1, f31, f0
	fcmpo    cr0, f0, f3
	ble      lbl_8028880C
	stfs     f7, 0x1d4(r31)
	stfs     f7, 0x1d8(r31)
	stfs     f7, 0x1dc(r31)
	b        lbl_8028888C

lbl_8028880C:
	lfs      f2, lbl_8051B7F0@sda21(r2)
	fsubs    f1, f5, f8
	fsubs    f0, f6, f4
	fadds    f3, f2, f3
	fmuls    f2, f30, f3
	fmuls    f3, f31, f3
	fadds    f2, f2, f1
	fadds    f3, f3, f0
	fmadds   f0, f2, f2, f7
	fmuls    f1, f3, f3
	fadds    f1, f1, f0
	fcmpo    cr0, f1, f7
	ble      lbl_80288850
	ble      lbl_80288854
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80288854

lbl_80288850:
	fmr      f1, f7

lbl_80288854:
	lfs      f0, lbl_8051B7D0@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80288874
	lfs      f0, lbl_8051B7F4@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f2, f2, f0
	fmuls    f7, f7, f0
	fmuls    f3, f3, f0

lbl_80288874:
	lfs      f0, 0x2e4(r3)
	fmuls    f2, f2, f0
	fmuls    f3, f3, f0
	stfs     f2, 0x1d4(r31)
	stfs     f7, 0x1d8(r31)
	stfs     f3, 0x1dc(r31)

lbl_8028888C:
	lfs      f1, lbl_8051B7F8@sda21(r2)
	mr       r3, r31
	bl       flickPikmin__Q34Game5Queen3ObjFf
	mr       r3, r31
	bl       rollingAttack__Q34Game5Queen3ObjFv
	lwz      r5, sys@sda21(r13)
	mr       r4, r31
	lfs      f1, 0x2c8(r31)
	addi     r3, r1, 0x20
	lfs      f0, 0x54(r5)
	fadds    f0, f1, f0
	stfs     f0, 0x2c8(r31)
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x20(r1)
	addi     r5, r1, 0x44
	lfs      f1, 0x24(r1)
	li       r4, 0xf
	lfs      f0, 0x28(r1)
	li       r6, 2
	stfs     f2, 0x44(r1)
	lwz      r3, cameraMgr__4Game@sda21(r13)
	stfs     f1, 0x48(r1)
	stfs     f0, 0x4c(r1)
	bl       "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
	b        lbl_8028890C

lbl_802888FC:
	lfs      f0, lbl_8051B7D0@sda21(r2)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)

lbl_8028890C:
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051B7D0@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80288948
	li       r0, 0
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	stb      r0, 0x2c2(r31)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       finishBossAttackLoopBGM__Q34Game5Queen3ObjFv

lbl_80288948:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_80288C44
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 2
	bne      lbl_80288BB8
	mr       r3, r31
	bl       getCurrAnimIndex__Q24Game9EnemyBaseFv
	cmpwi    r3, 5
	bne      lbl_8028897C
	lfs      f30, lbl_8051B7E0@sda21(r2)
	b        lbl_80288980

lbl_8028897C:
	lfs      f30, lbl_8051B7E4@sda21(r2)

lbl_80288980:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f3, f30, f1
	lfs      f0, lbl_8051B7D0@sda21(r2)
	fmr      f1, f3
	fcmpo    cr0, f3, f0
	bge      lbl_802889AC
	fneg     f1, f3

lbl_802889AC:
	lfs      f2, lbl_8051B7E8@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051B7D0@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f3, f0
	fctiwz   f0, f1
	stfd     f0, 0x60(r1)
	lwz      r0, 0x64(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f31, 4(r3)
	bge      lbl_80288A04
	lfs      f0, lbl_8051B7EC@sda21(r2)
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x58(r1)
	lwz      r0, 0x5c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f30, f0
	b        lbl_80288A1C

lbl_80288A04:
	fmuls    f0, f3, f2
	fctiwz   f0, f0
	stfd     f0, 0x50(r1)
	lwz      r0, 0x54(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f30, r4, r0

lbl_80288A1C:
	mr       r4, r31
	addi     r3, r1, 0x14
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x14(r1)
	lwz      r3, 0xc0(r31)
	lfs      f0, 0x198(r31)
	lfs      f4, 0x1c(r1)
	lfs      f2, 0x1a0(r31)
	fsubs    f1, f1, f0
	lfs      f3, lbl_8051B7D0@sda21(r2)
	lfs      f0, 0x200(r31)
	fsubs    f5, f4, f2
	fmadds   f4, f1, f30, f3
	lfs      f2, lbl_8051B7FC@sda21(r2)
	lfs      f1, 0x384(r3)
	fcmpo    cr0, f0, f3
	lfs      f3, 0x35c(r3)
	fadds    f0, f2, f1
	fmadds   f30, f5, f31, f4
	fsubs    f31, f3, f2
	fneg     f29, f0
	cror     2, 0, 2
	bne      lbl_80288A8C
	mr       r3, r31
	bl       finishBossAttackLoopBGM__Q34Game5Queen3ObjFv

lbl_80288A8C:
	fcmpo    cr0, f30, f31
	ble      lbl_80288B54
	lbz      r0, 0x2c2(r31)
	cmplwi   r0, 0
	beq      lbl_80288B00
	mr       r3, r31
	bl       createCrashFallRock__Q34Game5Queen3ObjFv
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	addi     r5, r1, 0x38
	lfs      f1, 0xc(r1)
	li       r4, 0x1b
	lfs      f0, 0x10(r1)
	li       r6, 2
	stfs     f2, 0x38(r1)
	lwz      r3, cameraMgr__4Game@sda21(r13)
	stfs     f1, 0x3c(r1)
	stfs     f0, 0x40(r1)
	bl       "startVibration__Q24Game9CameraMgrFiR10Vector3<f>i"
	lwz      r3, rumbleMgr__4Game@sda21(r13)
	addi     r5, r1, 0x38
	li       r4, 0xf
	li       r6, 2
	bl       "startRumble__Q24Game9RumbleMgrFiR10Vector3<f>i"

lbl_80288B00:
	li       r3, 0
	li       r0, 5
	stb      r3, 0x2c2(r31)
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	mr       r3, r31
	li       r4, 1
	bl       finishRollingEffect__Q34Game5Queen3ObjFb
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x58ba
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	b        lbl_80288C44

lbl_80288B54:
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x2c8(r31)
	lfs      f0, 0x81c(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_80288C44
	fcmpo    cr0, f30, f29
	ble      lbl_80288C44
	lfs      f0, lbl_8051B7FC@sda21(r2)
	fcmpo    cr0, f30, f0
	bge      lbl_80288C44
	lbz      r0, 0x2c2(r31)
	cmplwi   r0, 0
	beq      lbl_80288B90
	mr       r3, r31
	bl       finishBossAttackLoopBGM__Q34Game5Queen3ObjFv

lbl_80288B90:
	li       r3, 0
	li       r0, 2
	stb      r3, 0x2c2(r31)
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	mr       r3, r31
	li       r4, 0
	bl       finishRollingEffect__Q34Game5Queen3ObjFb
	b        lbl_80288C44

lbl_80288BB8:
	cmplwi   r0, 0
	bne      lbl_80288BE8
	lbz      r0, 0x2c2(r31)
	cmplwi   r0, 0
	bne      lbl_80288C44
	li       r0, 1
	mr       r3, r31
	stb      r0, 0x2c2(r31)
	bl       startRollingEffect__Q34Game5Queen3ObjFv
	mr       r3, r31
	bl       startBossAttackLoopBGM__Q34Game5Queen3ObjFv
	b        lbl_80288C44

lbl_80288BE8:
	cmplwi   r0, 0x3e8
	bne      lbl_80288C44
	mr       r3, r31
	bl       getCurrAnimIndex__Q24Game9EnemyBaseFv
	cmpwi    r3, 6
	bne      lbl_80288C24
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	addi     r6, r2, lbl_8051B7D8@sda21
	lwz      r5, 0x2d4(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80288C44

lbl_80288C24:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2d4(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80288C44:
	psq_l    f31, 152(r1), 0, qr0
	lfd      f31, 0x90(r1)
	psq_l    f30, 136(r1), 0, qr0
	lfd      f30, 0x80(r1)
	psq_l    f29, 120(r1), 0, qr0
	lfd      f29, 0x70(r1)
	lwz      r31, 0x6c(r1)
	lwz      r0, 0xa4(r1)
	lwz      r30, 0x68(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80288C74
 * Size:	00004C
 */
void StateRolling::cleanup(EnemyBase* enemy)
{
	Obj* queen = static_cast<Obj*>(enemy);
	queen->setEmotionCaution();
	queen->forceFinishRollingEffect();
	queen->m_toFlick = 0.0f;
	queen->_2D0      = 0.0f;
	queen->_2C2      = 0;
}

/*
 * --INFO--
 * Address:	80288CC0
 * Size:	000070
 */
void StateBorn::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* queen         = static_cast<Obj*>(enemy);
	queen->m_nextState = QUEEN_NULL;
	queen->_2C5        = 0;
	queen->m_waitTimer = 0.0f;
	queen->hardConstraintOn();
	queen->m_simVelocity = Vector3f(0.0f);
	queen->startMotion(7, nullptr);
	queen->setEmotionExcitement();
}

/*
 * --INFO--
 * Address:	80288D30
 * Size:	0000A8
 */
void StateBorn::exec(EnemyBase* enemy)
{
	Obj* queen = static_cast<Obj*>(enemy);
	if (queen->m_curAnim->m_isRunning != 0) {
		if ((u32)queen->m_curAnim->m_type == KEYEVENT_2) {
			queen->createBabyChappy();
			queen->createBornEffect();
		} else if ((u32)queen->m_curAnim->m_type == KEYEVENT_END) {
			if (queen->m_health <= 0.0f) {
				transit(queen, QUEEN_Dead, nullptr);
			} else {
				transit(queen, QUEEN_Wait, nullptr);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	80288DD8
 * Size:	000040
 */
void StateBorn::cleanup(EnemyBase* enemy)
{
	Obj* queen = static_cast<Obj*>(enemy);
	queen->hardConstraintOff();
	queen->setEmotionCaution();
	queen->_2CC = 0.0f;
}

} // namespace Queen
} // namespace Game
