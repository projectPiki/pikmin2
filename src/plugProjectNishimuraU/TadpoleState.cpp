#include "Game/Entities/Tadpole.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/Navi.h"
#include "Game/EnemyFunc.h"
#include "Dolphin/rand.h"

namespace Game {
namespace Tadpole {

/*
 * --INFO--
 * Address:	8027730C
 * Size:	000224
 */
void FSM::init(EnemyBase* enemy)
{
	create(TADPOLE_StateCount);

	registerState(new StateDead);
	registerState(new StateWait);
	registerState(new StateMove);
	registerState(new StateAmaze);
	registerState(new StateEscape);
	registerState(new StateLeap);
}

/*
 * --INFO--
 * Address:	80277530
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
 * Address:	8027758C
 * Size:	000058
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* tadpole = static_cast<Obj*>(enemy);
	if (tadpole->m_curAnim->m_isPlaying) {
		if (tadpole->m_curAnim->m_type == KEYEVENT_2) {
			tadpole->createLeapEffect();
		} else if (tadpole->m_curAnim->m_type == KEYEVENT_END) {
			tadpole->kill(nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	802775E4
 * Size:	000004
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802775E8
 * Size:	000048
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* tadpole              = static_cast<Obj*>(enemy);
	tadpole->m_stateTimer     = 0.0f;
	tadpole->m_nextState      = TADPOLE_Move;
	tadpole->m_targetVelocity = Vector3f(0.0f);
	tadpole->startMotion(1, nullptr);
}

/*
 * --INFO--
 * Address:	80277630
 * Size:	00015C
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* tadpole = static_cast<Obj*>(enemy);
	if (tadpole->m_stateTimer > 3.0f) {
		tadpole->finishMotion();
	}

	Navi* navi = EnemyFunc::getNearestNavi(tadpole, CG_PARMS(tadpole)->m_general.m_viewAngle.m_value,
	                                       CG_PARMS(tadpole)->m_general.m_sightRadius.m_value, nullptr, nullptr);
	if (navi) {
		tadpole->m_targetPosition = Vector3f(tadpole->getTargetPosition(navi));
		tadpole->m_nextState      = TADPOLE_Amaze;
		tadpole->finishMotion();
	}

	tadpole->m_stateTimer += sys->m_deltaTime;

	if (tadpole->m_health <= 0.0f) {
		transit(tadpole, TADPOLE_Dead, nullptr);
		return;
	}

	if (!tadpole->m_waterBox) {
		transit(tadpole, TADPOLE_Leap, nullptr);
	}

	if (tadpole->m_curAnim->m_isPlaying && tadpole->m_curAnim->m_type == KEYEVENT_END) {
		transit(tadpole, tadpole->m_nextState, nullptr);
	}
}

/*
 * --INFO--
 * Address:	8027778C
 * Size:	000004
 */
void StateWait::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	80277790
 * Size:	000054
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* tadpole          = static_cast<Obj*>(enemy);
	tadpole->m_stateTimer = 0.0f;
	tadpole->setRandTarget(false);
	tadpole->m_nextState = TADPOLE_Wait;
	tadpole->startMotion(2, nullptr);
}

/*
 * --INFO--
 * Address:	802777E4
 * Size:	000210
 */
void StateMove::exec(EnemyBase* enemy)
{
	Obj* tadpole        = static_cast<Obj*>(enemy);
	Vector3f tadpolePos = tadpole->getPosition();
	Vector3f targetPos  = Vector3f(tadpole->m_targetPosition);

	EnemyFunc::walkToTarget(tadpole, targetPos, CG_PARMS(tadpole)->m_general.m_moveSpeed.m_value,
	                        CG_PARMS(tadpole)->m_general.m_rotationalAccel.m_value, CG_PARMS(tadpole)->m_general.m_rotationalSpeed.m_value);

	if (tadpole->m_stateTimer > 3.0f || sqrDistanceXZ(tadpolePos, targetPos) < 100.0f) {
		tadpole->m_targetVelocity = Vector3f(0.0f);
		tadpole->finishMotion();
	}

	Navi* navi = EnemyFunc::getNearestNavi(tadpole, CG_PARMS(tadpole)->m_general.m_viewAngle.m_value,
	                                       CG_PARMS(tadpole)->m_general.m_sightRadius.m_value, nullptr, nullptr);
	if (navi) {
		tadpole->m_targetPosition = Vector3f(tadpole->getTargetPosition(navi));
		tadpole->m_nextState      = TADPOLE_Amaze;
		tadpole->m_targetVelocity = Vector3f(0.0f);
		tadpole->finishMotion();
	}

	tadpole->m_stateTimer += sys->m_deltaTime;

	if (tadpole->m_health <= 0.0f) {
		transit(tadpole, TADPOLE_Dead, nullptr);
		return;
	}

	if (!tadpole->m_waterBox) {
		transit(tadpole, TADPOLE_Leap, nullptr);
	}

	if (tadpole->m_curAnim->m_isPlaying && tadpole->m_curAnim->m_type == KEYEVENT_END) {
		transit(tadpole, tadpole->m_nextState, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802779F4
 * Size:	000004
 */
void StateMove::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802779F8
 * Size:	00005C
 */
void StateAmaze::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->disableEvent(0, EB_IsEnemyNotBitter);
	enemy->m_targetVelocity = Vector3f(0.0f);
	enemy->setEmotionExcitement();
	enemy->startMotion(3, nullptr);
}

/*
 * --INFO--
 * Address:	80277A54
 * Size:	0000B4
 */
void StateAmaze::exec(EnemyBase* enemy)
{
	Obj* tadpole = static_cast<Obj*>(enemy);
	if (tadpole->m_curAnim->m_isPlaying) {
		if (tadpole->m_curAnim->m_type == KEYEVENT_2) {
			tadpole->enableEvent(0, EB_IsEnemyNotBitter);
			tadpole->createLeapEffect();
			EnemyFunc::flickNearbyPikmin(tadpole, CG_PARMS(tadpole)->m_general.m_shakeRange.m_value,
			                             CG_PARMS(tadpole)->m_general.m_shakeKnockback.m_value,
			                             CG_PARMS(tadpole)->m_general.m_shakeDamage.m_value, -1000.0f, nullptr);

		} else if (tadpole->m_curAnim->m_type == KEYEVENT_3) {
			tadpole->disableEvent(0, EB_IsEnemyNotBitter);

		} else if (tadpole->m_curAnim->m_type == KEYEVENT_END) {
			transit(tadpole, TADPOLE_Escape, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	80277B08
 * Size:	000030
 */
void StateAmaze::cleanup(EnemyBase* enemy)
{
	enemy->disableEvent(0, EB_IsEnemyNotBitter);
	enemy->setEmotionCaution();
}

/*
 * --INFO--
 * Address:	80277B38
 * Size:	000040
 */
void StateEscape::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->setEmotionExcitement();
	enemy->startMotion(2, nullptr);
}

/*
 * --INFO--
 * Address:	80277B78
 * Size:	000168
 */
void StateEscape::exec(EnemyBase* enemy)
{
	Obj* tadpole = static_cast<Obj*>(enemy);

	Navi* navi = EnemyFunc::getNearestNavi(tadpole, CG_PARMS(tadpole)->m_general.m_viewAngle.m_value,
	                                       CG_PARMS(tadpole)->m_general.m_sightRadius.m_value, nullptr, nullptr);
	if (navi) {
		Vector3f tadpolePos = tadpole->getPosition(); // this is pointless
		Vector3f targetPos  = tadpole->getTargetPosition(navi);

		EnemyFunc::walkToTarget(tadpole, targetPos, CG_PARMS(tadpole)->m_general.m_moveSpeed.m_value,
		                        CG_PARMS(tadpole)->m_general.m_rotationalAccel.m_value,
		                        CG_PARMS(tadpole)->m_general.m_rotationalSpeed.m_value);

	} else {
		tadpole->finishMotion();
	}

	if (tadpole->m_health <= 0.0f) {
		transit(tadpole, TADPOLE_Dead, nullptr);
		return;
	}

	if (!tadpole->m_waterBox) {
		transit(tadpole, TADPOLE_Leap, nullptr);
	}

	if (tadpole->m_curAnim->m_isPlaying && tadpole->m_curAnim->m_type == KEYEVENT_END) {
		transit(tadpole, TADPOLE_Wait, nullptr);
	}
}

/*
 * --INFO--
 * Address:	80277CE0
 * Size:	000024
 */
void StateEscape::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/*
 * --INFO--
 * Address:	80277D04
 * Size:	0000E0
 */
void StateLeap::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* tadpole          = static_cast<Obj*>(enemy);
	tadpole->m_stateTimer = 0.0f;
	tadpole->setRandTarget(true);
	if (randWeightFloat(1.0f) < 0.5f) {
		tadpole->_2C0 = true;
	} else {
		tadpole->_2C0 = false;
	}

	tadpole->m_nextState = TADPOLE_NULL;
	tadpole->enableEvent(0, EB_IsEnemyNotBitter);
	tadpole->startMotion(4, nullptr);
	tadpole->m_targetVelocity = Vector3f(tadpole->getVelocity());
}

/*
 * --INFO--
 * Address:	80277DE4
 * Size:	0003FC
 */
void StateLeap::exec(EnemyBase* enemy)
{
	Obj* tadpole = static_cast<Obj*>(enemy);

	if (tadpole->isFinishMotion()) {
		tadpole->m_targetVelocity = Vector3f(0.0f);
	} else if (tadpole->getMotionFrame() >= 15.0f) {
		Vector3f tadpolePos = tadpole->getPosition();
		Vector3f targetPos  = tadpole->m_targetPosition;
		if (tadpole->m_waterBox) {
			tadpole->m_nextState = TADPOLE_Wait;
			tadpole->finishMotion();
		} else if (tadpole->m_stateTimer > 10.0f || sqrDistanceXZ(tadpolePos, targetPos) < 100.0f) {
			tadpole->m_stateTimer = 0.0f;
			tadpole->setRandTarget(true);
		}

		f32 angle = 0.0f;
		if (tadpole->_2C0) {
			angle += 0.15f;
		} else {
			angle -= 0.15f;
		}

		f32 adjustedDir = angle + tadpole->getFaceDir();
		if (adjustedDir < 0.0f) {
			adjustedDir = adjustedDir + TAU;
		} else if (adjustedDir >= TAU) {
			adjustedDir -= TAU;
		}

		// f1-f2 regswap. smfh.
		tadpole->m_faceDir    = adjustedDir;
		tadpole->m_rotation.y = tadpole->m_faceDir;

		Vector3f targetVel = tadpole->m_targetVelocity;
		Vector3f diff(targetPos.x - tadpolePos.x, 0.0f, targetPos.z - tadpolePos.z);

		_normalise(diff);

		diff.x *= CG_PARMS(tadpole)->m_properParms.m_pitterPatterMoveSpeed.m_value;
		diff.y *= CG_PARMS(tadpole)->m_properParms.m_pitterPatterMoveSpeed.m_value;
		diff.z *= CG_PARMS(tadpole)->m_properParms.m_pitterPatterMoveSpeed.m_value;

		tadpole->m_targetVelocity.x = 0.1f * (diff.x - targetVel.x) + targetVel.x;
		tadpole->m_targetVelocity.y = diff.y;
		tadpole->m_targetVelocity.z = 0.1f * (diff.z - targetVel.z) + targetVel.z;
	}

	tadpole->m_stateTimer += sys->m_deltaTime;

	if (tadpole->m_health <= 0.0f) {
		transit(tadpole, TADPOLE_Dead, nullptr);
		return;
	}

	if (tadpole->m_curAnim->m_isPlaying) {
		if (tadpole->m_curAnim->m_type == KEYEVENT_2) {
			tadpole->createLeapEffect();

		} else if (tadpole->m_curAnim->m_type == KEYEVENT_3) {
			tadpole->disableEvent(0, EB_IsEnemyNotBitter);
			tadpole->createLeapEffect();

		} else if (tadpole->m_curAnim->m_type == KEYEVENT_4) {
			tadpole->enableEvent(0, EB_IsEnemyNotBitter);

		} else if (tadpole->m_curAnim->m_type == KEYEVENT_NULL) {
			tadpole->enableEvent(0, EB_IsEnemyNotBitter);

		} else if (tadpole->m_curAnim->m_type == KEYEVENT_1) {
			tadpole->disableEvent(0, EB_IsEnemyNotBitter);
			tadpole->createLeapEffect();
			if (randWeightFloat(1.0f) < 0.5f) {
				tadpole->_2C0 = true;
			} else {
				tadpole->_2C0 = false;
			}

		} else if (tadpole->m_curAnim->m_type == KEYEVENT_END) {
			Navi* navi = EnemyFunc::getNearestNavi(tadpole, CG_PARMS(tadpole)->m_general.m_viewAngle.m_value,
			                                       CG_PARMS(tadpole)->m_general.m_sightRadius.m_value, nullptr, nullptr);
			if (navi) {
				tadpole->m_targetPosition = Vector3f(tadpole->getTargetPosition(navi));
				tadpole->m_nextState      = TADPOLE_Amaze;
			}

			transit(tadpole, tadpole->m_nextState, nullptr);
		}
	}
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stfd     f30, 0x60(r1)
	psq_st   f30, 104(r1), 0, qr0
	stfd     f29, 0x50(r1)
	psq_st   f29, 88(r1), 0, qr0
	stfd     f28, 0x40(r1)
	psq_st   f28, 72(r1), 0, qr0
	stfd     f27, 0x30(r1)
	psq_st   f27, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	mr       r31, r4
	mr       r30, r3
	mr       r3, r31
	bl       isFinishMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80277E4C
	lfs      f0, lbl_8051B3C0@sda21(r2)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	b        lbl_80277FF0

lbl_80277E4C:
	mr       r3, r31
	bl       getMotionFrame__Q24Game9EnemyBaseFv
	lfs      f0, lbl_8051B3E8@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80277FF0
	mr       r4, r31
	addi     r3, r1, 0x14
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x280(r31)
	lfs      f31, 0x14(r1)
	cmplwi   r0, 0
	lfs      f30, 0x1c(r1)
	lfs      f29, 0x2cc(r31)
	lfs      f28, 0x2d4(r31)
	beq      lbl_80277EAC
	li       r0, 1
	mr       r3, r31
	stw      r0, 0x2c8(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_80277EEC

lbl_80277EAC:
	lfs      f1, 0x2c4(r31)
	lfs      f0, lbl_8051B3EC@sda21(r2)
	fcmpo    cr0, f1, f0
	bgt      lbl_80277ED8
	fsubs    f1, f30, f28
	lfs      f0, lbl_8051B3C8@sda21(r2)
	fsubs    f2, f31, f29
	fmuls    f1, f1, f1
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80277EEC

lbl_80277ED8:
	lfs      f0, lbl_8051B3C0@sda21(r2)
	mr       r3, r31
	li       r4, 1
	stfs     f0, 0x2c4(r31)
	bl       setRandTarget__Q34Game7Tadpole3ObjFb

lbl_80277EEC:
	lbz      r0, 0x2c0(r31)
	lfs      f27, lbl_8051B3C0@sda21(r2)
	cmplwi   r0, 0
	beq      lbl_80277F08
	lfs      f0, lbl_8051B3F0@sda21(r2)
	fadds    f27, f27, f0
	b        lbl_80277F10

lbl_80277F08:
	lfs      f0, lbl_8051B3F0@sda21(r2)
	fsubs    f27, f27, f0

lbl_80277F10:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f27, f1
	lfs      f0, lbl_8051B3C0@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80277F40
	lfs      f0, lbl_8051B3F4@sda21(r2)
	fadds    f1, f0, f1
	b        lbl_80277F54

lbl_80277F40:
	lfs      f0, lbl_8051B3F4@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_80277F54
	fsubs    f1, f1, f0

lbl_80277F54:
	fsubs    f7, f28, f30
	stfs     f1, 0x1fc(r31)
	fsubs    f5, f29, f31
	lfs      f6, lbl_8051B3C0@sda21(r2)
	lfs      f1, 0x1fc(r31)
	fmuls    f2, f7, f7
	fmadds   f0, f5, f5, f6
	stfs     f1, 0x1a8(r31)
	lfs      f3, 0x1d4(r31)
	fadds    f1, f2, f0
	lfs      f4, 0x1dc(r31)
	fcmpo    cr0, f1, f6
	ble      lbl_80277F98
	ble      lbl_80277F9C
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80277F9C

lbl_80277F98:
	fmr      f1, f6

lbl_80277F9C:
	lfs      f0, lbl_8051B3C0@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80277FBC
	lfs      f0, lbl_8051B3D0@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f5, f5, f0
	fmuls    f6, f6, f0
	fmuls    f7, f7, f0

lbl_80277FBC:
	lwz      r3, 0xc0(r31)
	lfs      f2, lbl_8051B3F8@sda21(r2)
	lfs      f0, 0x81c(r3)
	fmuls    f5, f5, f0
	fmuls    f7, f7, f0
	fmuls    f6, f6, f0
	fsubs    f1, f5, f3
	fsubs    f0, f7, f4
	fmadds   f1, f2, f1, f3
	fmadds   f0, f2, f0, f4
	stfs     f1, 0x1d4(r31)
	stfs     f6, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)

lbl_80277FF0:
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x2c4(r31)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_8051B3C0@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0x2c4(r31)
	lfs      f1, 0x200(r31)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8027803C
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802781A0

lbl_8027803C:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802781A0
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 2
	bne      lbl_80278064
	mr       r3, r31
	bl       createLeapEffect__Q34Game7Tadpole3ObjFv
	b        lbl_802781A0

lbl_80278064:
	cmplwi   r0, 3
	bne      lbl_80278084
	lwz      r0, 0x1e0(r31)
	mr       r3, r31
	rlwinm   r0, r0, 0, 0xb, 9
	stw      r0, 0x1e0(r31)
	bl       createLeapEffect__Q34Game7Tadpole3ObjFv
	b        lbl_802781A0

lbl_80278084:
	cmplwi   r0, 4
	bne      lbl_8027809C
	lwz      r0, 0x1e0(r31)
	oris     r0, r0, 0x20
	stw      r0, 0x1e0(r31)
	b        lbl_802781A0

lbl_8027809C:
	cmplwi   r0, 0
	bne      lbl_802780B4
	lwz      r0, 0x1e0(r31)
	oris     r0, r0, 0x20
	stw      r0, 0x1e0(r31)
	b        lbl_802781A0

lbl_802780B4:
	cmplwi   r0, 1
	bne      lbl_80278124
	lwz      r0, 0x1e0(r31)
	mr       r3, r31
	rlwinm   r0, r0, 0, 0xb, 9
	stw      r0, 0x1e0(r31)
	bl       createLeapEffect__Q34Game7Tadpole3ObjFv
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x24(r1)
	lfd      f3, lbl_8051B3E0@sda21(r2)
	stw      r0, 0x20(r1)
	lfs      f2, lbl_8051B3D0@sda21(r2)
	lfd      f0, 0x20(r1)
	lfs      f1, lbl_8051B3D4@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051B3D8@sda21(r2)
	fmuls    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80278118
	li       r0, 1
	stb      r0, 0x2c0(r31)
	b        lbl_802781A0

lbl_80278118:
	li       r0, 0
	stb      r0, 0x2c0(r31)
	b        lbl_802781A0

lbl_80278124:
	cmplwi   r0, 0x3e8
	bne      lbl_802781A0
	lwz      r6, 0xc0(r31)
	mr       r3, r31
	li       r4, 0
	li       r5, 0
	lfs      f1, 0x424(r6)
	lfs      f2, 0x3d4(r6)
	bl
"getNearestNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>"
	cmplwi   r3, 0
	beq      lbl_80278180
	mr       r4, r31
	mr       r5, r3
	addi     r3, r1, 8
	bl       getTargetPosition__Q34Game7Tadpole3ObjFPQ24Game8Creature
	lfs      f1, 0xc(r1)
	li       r0, 3
	lfs      f2, 0x10(r1)
	lfs      f0, 8(r1)
	stfs     f0, 0x2cc(r31)
	stfs     f1, 0x2d0(r31)
	stfs     f2, 0x2d4(r31)
	stw      r0, 0x2c8(r31)

lbl_80278180:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2c8(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802781A0:
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	psq_l    f29, 88(r1), 0, qr0
	lfd      f29, 0x50(r1)
	psq_l    f28, 72(r1), 0, qr0
	lfd      f28, 0x40(r1)
	psq_l    f27, 56(r1), 0, qr0
	lfd      f27, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r0, 0x84(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	802781E0
 * Size:	000010
 */
void StateLeap::cleanup(EnemyBase* enemy) { enemy->disableEvent(0, EB_IsEnemyNotBitter); }
} // namespace Tadpole
} // namespace Game
