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
	imomushi->m_simVelocity = 0.0f;
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
	if (imomushi->m_curAnim->m_isRunning) {
		if ((u32)imomushi->m_curAnim->m_type == KEYEVENT_END) {
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
	imomushi->m_simVelocity    = Vector3f(0.0f);
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
	f32 minY      = mapMgr->getMinY(pos);
	if ((vel.y > 0.0f) || (pos.y - minY) < 25.0f) {
		imomushi->finishMotion();
	}
	if (imomushi->m_curAnim->m_isRunning && (u32)imomushi->m_curAnim->m_type == KEYEVENT_END) {
		if (imomushi->m_health <= 0.0f) {
			transit(imomushi, IMOMUSHI_Dead, nullptr);
		} else {
			transit(imomushi, IMOMUSHI_GoHome, nullptr);
		}
	}
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
	imomushi->m_simVelocity    = Vector3f(0.0f);
	imomushi->startMotion(5, nullptr);
}

/*
 * --INFO--
 * Address:	802BA820
 * Size:	000178
 */
void StateFallMove::exec(EnemyBase* enemy)
{
	Obj* imomushi = static_cast<Obj*>(enemy);
	Vector3f vel  = imomushi->getVelocity();
	Vector3f pos  = imomushi->getPosition();
	f32 minY      = mapMgr->getMinY(pos);
	if ((vel.y > 0.0f) || (pos.y - minY) < 25.0f) {
		imomushi->finishMotion();
	}
	if (imomushi->m_curAnim->m_isRunning && (u32)imomushi->m_curAnim->m_type == KEYEVENT_END) {
		if (imomushi->m_health <= 0.0f) {
			transit(imomushi, IMOMUSHI_Dead, nullptr);
		} else if (imomushi->m_targetCreature = imomushi->getRandFruitsPlant()) {
			transit(imomushi, IMOMUSHI_Move, nullptr);
		} else {
			transit(imomushi, IMOMUSHI_GoHome, nullptr);
		}
	}
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
	Obj* imomushi = static_cast<Obj*>(enemy);
	imomushi->setAtari(false);
	imomushi->setEvent(0, EB_Vulnerable);
	imomushi->_2C0 = true;
	imomushi->setEvent(0, EB_BitterImmune);
	imomushi->setEvent(0, EB_SoundCullable);
	imomushi->resetEvent(0, EB_LifegaugeVisible);
	imomushi->hardConstraintOn();
	imomushi->resetEvent(0, EB_16);
	imomushi->setEvent(0, EB_31);
	imomushi->m_simVelocity = Vector3f(0.0f);
	imomushi->_2C8          = 0.0f;
	imomushi->startMotion(1, nullptr);
	imomushi->stopMotion();
}

/*
 * --INFO--
 * Address:	802BAA64
 * Size:	0000A8
 */
void StateStay::exec(EnemyBase* enemy)
{
	Obj* imomushi = static_cast<Obj*>(enemy);
	imomushi->_2C8 += sys->m_deltaTime;
	if ((imomushi->_2C8 > 6.0f)
	    && !(EnemyFunc::isTherePikmin(imomushi, static_cast<Parms*>(imomushi->m_parms)->m_general.m_privateRadius.m_value, nullptr))) {
		if (imomushi->m_targetCreature = imomushi->getRandFruitsPlant()) {
			transit(imomushi, IMOMUSHI_Appear, nullptr);
		}
	}
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
	imomushi->_2C0 = false;
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
	imomushi->m_simVelocity = Vector3f(0.0f);
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
	Obj* imomushi = static_cast<Obj*>(enemy);
	if (imomushi->m_curAnim->m_isRunning && (u32)imomushi->m_curAnim->m_type == KEYEVENT_END) {
		if (imomushi->m_health <= 0.0f) {
			transit(imomushi, IMOMUSHI_Dead, nullptr);
		} else if (imomushi->m_targetCreature = imomushi->getRandFruitsPlant()) {
			transit(imomushi, IMOMUSHI_Move, nullptr);
		} else {
			transit(imomushi, IMOMUSHI_Dive, nullptr);
		}
	}
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
	Obj* imomushi = static_cast<Obj*>(enemy);
	imomushi->hardConstraintOn();
	imomushi->setEvent(0, EB_BitterImmune);
	imomushi->m_targetCreature = nullptr;
	imomushi->m_simVelocity    = Vector3f(0.0f);
	imomushi->setEmotionCaution();
	imomushi->startMotion(2, nullptr);
	imomushi->createDisAppearEffect();
}

/*
 * --INFO--
 * Address:	802BADA4
 * Size:	000050
 */
void StateDive::exec(EnemyBase* enemy)
{
	Obj* imomushi = static_cast<Obj*>(enemy);
	if (imomushi->m_curAnim->m_isRunning && (u32)imomushi->m_curAnim->m_type == KEYEVENT_END) {
		transit(imomushi, IMOMUSHI_Stay, nullptr);
	}
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
	Obj* imomushi         = static_cast<Obj*>(enemy);
	imomushi->m_nextState = IMOMUSHI_NULL;
	imomushi->startMotion(3, nullptr);
	imomushi->startMoveTraceEffect();
}

/*
 * --INFO--
 * Address:	802BAE78
 * Size:	000238
 */
void StateMove::exec(EnemyBase* enemy)
{
	Creature* creature;
	Obj* imomushi = static_cast<Obj*>(enemy);

	if (imomushi->m_health <= 0.0f) {
		transit(imomushi, IMOMUSHI_Dead, nullptr);
		return;
	}

	creature = imomushi->m_targetCreature;
	if (creature) {
		if (imomushi->isFinishMotion()) {
			imomushi->m_simVelocity = Vector3f(0.0f);

		} else {
			Vector3f pos         = imomushi->getPosition();
			Vector3f creaturePos = creature->getPosition();

			if (!imomushi->isAttackable()) {
				imomushi->m_targetCreature = imomushi->getRandFruitsPlant();
			} else {
				if (sqrDistanceXZ(pos, creaturePos) < 900.0f) {
					imomushi->m_nextState = IMOMUSHI_Climb;
					imomushi->finishMotion();
				}
			}

			Parms* parms = static_cast<Parms*>(imomushi->m_parms);
			EnemyFunc::walkToTarget(imomushi, creaturePos, parms->m_general.m_moveSpeed.m_value, parms->m_general.m_rotationalAccel.m_value,
			                        parms->m_general.m_rotationalSpeed.m_value);
		}

	} else {
		imomushi->m_nextState = IMOMUSHI_GoHome;
		imomushi->finishMotion();
	}

	if (imomushi->m_curAnim->m_isRunning && (u32)imomushi->m_curAnim->m_type == KEYEVENT_END) {
		if (imomushi->m_nextState == IMOMUSHI_Climb) {
			if (imomushi->isAttackable()) {
				transit(imomushi, IMOMUSHI_Climb, nullptr);
				return;
			}

			imomushi->m_targetCreature = imomushi->getRandFruitsPlant();
			transit(imomushi, IMOMUSHI_Move, nullptr);

		} else {
			transit(imomushi, imomushi->m_nextState, nullptr);
		}
	}
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
	Obj* imomushi         = static_cast<Obj*>(enemy);
	imomushi->m_nextState = IMOMUSHI_NULL;
	imomushi->startMotion(3, nullptr);
	imomushi->startMoveTraceEffect();
}

/*
 * --INFO--
 * Address:	802BB11C
 * Size:	00014C
 */
void StateGoHome::exec(EnemyBase* enemy)
// does NOT match
{
	Obj* imomushi = static_cast<Obj*>(enemy);

	if (imomushi->m_health <= 0.0f) {
		transit(imomushi, IMOMUSHI_Dead, nullptr);
		return;
	}

	if (imomushi->isFinishMotion()) {
		imomushi->m_simVelocity = Vector3f(0.0f);

	} else {

		Vector3f pos     = imomushi->getPosition();
		Vector3f homePos = imomushi->m_homePosition;
		f32 dist         = sqrDistanceXZ(pos, homePos);
		if (dist < imomushi->getSqrHomeRadius()) {
			imomushi->m_nextState = IMOMUSHI_Dive;
			imomushi->finishMotion();
		}
		Parms* parms2 = static_cast<Parms*>(imomushi->m_parms);
		EnemyFunc::walkToTarget(imomushi, homePos, parms2->m_general.m_moveSpeed.m_value, parms2->m_general.m_rotationalAccel.m_value,
		                        parms2->m_general.m_rotationalSpeed.m_value);
	}

	if ((imomushi->m_curAnim->m_isRunning) && ((u32)imomushi->m_curAnim->m_type == KEYEVENT_END)) {
		transit(imomushi, imomushi->m_nextState, nullptr);
	}
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
	Obj* imomushi         = static_cast<Obj*>(enemy);
	imomushi->m_nextState = IMOMUSHI_NULL;
	Vector3f pos          = imomushi->getPosition();
	imomushi->setStickDiff(pos.x, pos.z);
	imomushi->startClimbPlant(static_cast<CollPart*>(imomushi->m_targetCreature->m_collTree->m_part->m_child));
	imomushi->m_simVelocity = Vector3f(0.0f);
	imomushi->startMotion(4, nullptr);

	f32 faceDir = imomushi->getFaceDir(); // slight misordering here but should be equivalent
	f32 cos     = pikmin2_cosf(faceDir);
	f32 sin     = pikmin2_sinf(faceDir);

	imomushi->_2D8 = Vector3f(sin, 0.01f, cos);
	imomushi->_2E4 = Vector3f(-sin, 0.0f, -cos);

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
	Obj* imomushi = static_cast<Obj*>(enemy);
	if (imomushi->m_health <= 0.0f) {
		transit(imomushi, IMOMUSHI_FallDive, nullptr);
		return;
	}

	if (imomushi->isStickToFall()) {
		transit(imomushi, IMOMUSHI_FallMove, nullptr);
		return;
	}

	if (!imomushi->isFinishMotion()) {
		imomushi->moveStickTube();

		f32 val  = imomushi->_2FC;
		f32 yval = imomushi->_104.y;
		if (yval > 1.0f - val) {
			CollPart* childPart = static_cast<CollPart*>(imomushi->m_stuckCollPart->m_child);
			if (childPart != nullptr && childPart->m_partType == COLLTYPE_TUBETREE) {
				imomushi->startClimbPlant(childPart);
			} else {
				imomushi->m_nextState = IMOMUSHI_Attack;
				imomushi->finishMotion();
			}
		} else if (yval < -val) {
			CollPart* parentPart = static_cast<CollPart*>(imomushi->m_stuckCollPart->m_parent);
			if (parentPart != nullptr && parentPart->m_partType == COLLTYPE_TUBETREE) {
				imomushi->startClimbPlant(parentPart);
			}
		}
	}

	if (imomushi->m_curAnim->m_isRunning && (u32)imomushi->m_curAnim->m_type == KEYEVENT_END) {
		transit(imomushi, imomushi->m_nextState, nullptr);
	}
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
	Creature* target;
	Obj* imomushi         = static_cast<Obj*>(enemy);
	imomushi->m_nextState = IMOMUSHI_NULL;
	imomushi->_2C8        = 0.0f;
	target                = imomushi->m_targetCreature;
	CollPart* collpart    = target->m_collTree->getCollPart('tops');
	imomushi->endStick();
	imomushi->startStick(target, collpart);
	imomushi->m_simVelocity = Vector3f(0.0f);
	imomushi->startMotion(7, nullptr);
}

/*
 * --INFO--
 * Address:	802BB608
 * Size:	00015C
 */
void StateAttack::exec(EnemyBase* enemy)
{
	Obj* imomushi = static_cast<Obj*>(enemy);

	if (imomushi->m_health <= 0.0f) {
		transit(imomushi, IMOMUSHI_FallDive, nullptr);
		return;
	}

	if (imomushi->isStickToFall()) {
		transit(imomushi, IMOMUSHI_FallMove, nullptr);
		return;
	} else if (!imomushi->isFinishMotion()) {
		imomushi->moveStickSphere();
		if (!imomushi->isAttackable()) {
			if (Creature* target = imomushi->getRandFruitsPlant()) {
				imomushi->m_targetCreature = target;
				imomushi->m_nextState      = IMOMUSHI_FallMove;
				imomushi->finishMotion();
			} else {
				imomushi->m_nextState = IMOMUSHI_Wait;
				imomushi->finishMotion();
			}
		}
	}
	imomushi->_2C8 += sys->m_deltaTime;
	if (imomushi->m_curAnim->m_isRunning) {
		if (((u32)imomushi->m_curAnim->m_type == KEYEVENT_2)) {
			imomushi->eatTsuyukusa();
		} else if (((u32)imomushi->m_curAnim->m_type == KEYEVENT_END)) {
			transit(imomushi, imomushi->m_nextState, nullptr);
		}
	}
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
	Creature* target;
	Obj* imomushi         = static_cast<Obj*>(enemy);
	imomushi->m_nextState = IMOMUSHI_NULL;
	target                = imomushi->m_targetCreature;
	CollPart* collpart    = target->m_collTree->getCollPart('tops');
	imomushi->endStick();
	imomushi->startStick(target, collpart);
	imomushi->m_simVelocity = Vector3f(0.0f);
	imomushi->startMotion(4, nullptr);
}

/*
 * --INFO--
 * Address:	802BB81C
 * Size:	000138
 */
void StateWait::exec(EnemyBase* enemy)
{
	Creature* sticker;
	Obj* imomushi = static_cast<Obj*>(enemy);

	if (imomushi->m_health <= 0.0f) {
		transit(imomushi, IMOMUSHI_FallDive, nullptr);
		return;
	}

	if (imomushi->isStickToFall()) {
		transit(imomushi, IMOMUSHI_FallMove, nullptr);
		return;
	} else {
		if (!imomushi->isFinishMotion()) {
			imomushi->moveStickSphere();
			sticker = imomushi->m_sticker;
			if (Creature* target = imomushi->getRandFruitsPlant()) {
				imomushi->m_targetCreature = target;
				if (sticker == target) {
					imomushi->m_nextState = IMOMUSHI_Attack;
					imomushi->finishMotion();
				} else {
					imomushi->m_nextState = IMOMUSHI_FallMove;
					imomushi->finishMotion();
				}
			}
		}
	}
	if ((imomushi->m_curAnim->m_isRunning) && ((u32)imomushi->m_curAnim->m_type == KEYEVENT_END)) {
		transit(imomushi, imomushi->m_nextState, nullptr);
	}
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
	Obj* imomushi = static_cast<Obj*>(enemy);
	imomushi->resetZukanStateTimer();
	imomushi->setEvent(0, EB_BitterImmune);
	imomushi->hardConstraintOn();
	imomushi->m_simVelocity = Vector3f(0.0f);
	imomushi->startMotion(1, nullptr);
	imomushi->stopMotion();
}

/*
 * --INFO--
 * Address:	802BB9E4
 * Size:	000058
 */
void StateZukanStay::exec(EnemyBase* enemy)
{
	Obj* imomushi = static_cast<Obj*>(enemy);
	imomushi->_2C8 += sys->m_deltaTime;
	if (imomushi->_2C8 > 5.0f) {
		transit(imomushi, IMOMUSHI_ZukanAppear, nullptr);
	}
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
	imomushi->m_simVelocity = Vector3f(0.0f);
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
	if ((imomushi->m_curAnim->m_isRunning) && ((u32)imomushi->m_curAnim->m_type == KEYEVENT_END)) {
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
	imomushi->m_simVelocity = 0.0f;
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
	Vector3f target = Vector3f(imomushi->m_zukanTargetPosition);
	Parms* parms    = static_cast<Parms*>(imomushi->m_parms);
	EnemyFunc::walkToTarget(imomushi, target, parms->m_general.m_moveSpeed.m_value, parms->m_general.m_rotationalAccel.m_value,
	                        parms->m_general.m_rotationalSpeed.m_value);
	if (imomushi->isInZukanTargetArea()) {
		imomushi->setZukanTargetPosition();
	}
	if ((imomushi->m_curAnim->m_isRunning) && ((u32)imomushi->m_curAnim->m_type == KEYEVENT_END)) {
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
