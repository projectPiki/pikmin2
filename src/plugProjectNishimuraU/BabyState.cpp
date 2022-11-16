#include "Game/Entities/Baby.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "efx/TBaby.h"

namespace Game {
namespace Baby {
/*
 * --INFO--
 * Address:	8028C584
 * Size:	0001D0
 */
void FSM::init(EnemyBase* enemy)
{
	create(BABY_Count), registerState(new StateDead);
	registerState(new StatePress);
	registerState(new StateBorn);
	registerState(new StateMove);
	registerState(new StateAttack);
}

/*
 * --INFO--
 * Address:	8028C754
 * Size:	000058
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* baby = static_cast<Obj*>(enemy);
	baby->createHoney();
	baby->deathProcedure();
	baby->m_simVelocity = Vector3f(0.0f);
	baby->startMotion(0, nullptr);
}

/*
 * --INFO--
 * Address:	8028C7AC
 * Size:	000044
 */
void StateDead::exec(EnemyBase* enemy)
{
	if (enemy->m_curAnim->m_isRunning && (u32)enemy->m_curAnim->m_type == KEYEVENT_END) {
		enemy->kill(nullptr);
	}
}

/*
 * --INFO--
 * Address:	8028C7F0
 * Size:	000004
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	8028C7F4
 * Size:	0000DC
 */
void StatePress::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* baby = static_cast<Obj*>(enemy);
	baby->createHoney();
	baby->m_health = 0.0f;
	baby->deathProcedure();
	baby->m_simVelocity = Vector3f(0.0f);
	baby->startMotion(1, nullptr);
	Vector3f position = baby->getPosition();

	efx::Arg fxArg(position);
	efx::TBabyBecha bechaEffect;

	bechaEffect.create(&fxArg);
}

/*
 * --INFO--
 * Address:	8028C8D0
 * Size:	000044
 */
void StatePress::exec(EnemyBase* enemy)
{
	if (enemy->m_curAnim->m_isRunning && (u32)enemy->m_curAnim->m_type == KEYEVENT_END) {
		enemy->kill(nullptr);
	}
}

/*
 * --INFO--
 * Address:	8028C914
 * Size:	000004
 */
void StatePress::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	8028C918
 * Size:	000040
 */
void StateBorn::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* baby = static_cast<Obj*>(enemy);
	baby->createBornEffect();
	baby->startMotion(5, nullptr);
}

/*
 * --INFO--
 * Address:	8028C958
 * Size:	0000D8
 */
void StateBorn::exec(EnemyBase* enemy)
{
	if (enemy->m_curTriangle) {

		Vector3f vec = enemy->m_simVelocity;
		weightVecXZ(vec, 0.95f);
		enemy->m_simVelocity = vec;

		enemy->finishMotion();
	}

	if (enemy->m_curAnim->m_isRunning && (u32)enemy->m_curAnim->m_type == KEYEVENT_END) {
		if (enemy->m_health <= 0.0f) {
			transit(enemy, BABY_Dead, nullptr);

		} else {
			transit(enemy, BABY_Move, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	8028CA30
 * Size:	000004
 */
void StateBorn::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	8028CA34
 * Size:	000034
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* baby              = static_cast<Obj*>(enemy);
	baby->m_targetCreature = nullptr;
	baby->startMotion(2, nullptr);
}

/*
 * --INFO--
 * Address:	8028CA68
 * Size:	000468
 */
// NON-MATCHING
void StateMove::exec(EnemyBase* enemy)
{

	Obj* baby = static_cast<Obj*>(enemy);
	if (baby->m_health <= 0.0f) {
		transit(baby, BABY_Dead, nullptr);
		return;
	}

	Creature* creature
	    = EnemyFunc::getNearestPikminOrNavi(baby, static_cast<Parms*>(baby->m_parms)->m_general.m_fov.m_value,
	                                        static_cast<Parms*>(baby->m_parms)->m_general.m_sightRadius.m_value, nullptr, nullptr, nullptr);

	if (creature) {
		Vector3f creaturePos = creature->getPosition();
		Vector2f XZ;
		XZ.x          = creaturePos.x;
		XZ.y          = creaturePos.z;
		f32 angleDist = baby->changeFaceDir(XZ);

		f64 abs = fabs(angleDist);
		if ((f32)(abs) <= (DEG2RAD * static_cast<Parms*>(baby->m_parms)->m_general.m_fp21.m_value) * PI) {
			f32 speed    = static_cast<Parms*>(baby->m_parms)->m_general.m_moveSpeed.m_value;
			f32 sintheta = (f32)sin(baby->getFaceDir());
			Vector3f vel = baby->m_simVelocity;
			f32 costheta = (f32)cos(baby->getFaceDir());

			enemy->m_simVelocity = Vector3f(speed * sintheta, vel.y, speed * costheta);

		} else {
			f32 speed    = static_cast<Parms*>(baby->m_parms)->m_general.m_moveSpeed.m_value / 4;
			f32 sintheta = (f32)sin(baby->getFaceDir());
			Vector3f vel = baby->m_simVelocity;
			f32 costheta = (f32)cos(baby->getFaceDir());

			enemy->m_simVelocity = Vector3f(speed * sintheta, vel.y, speed * costheta);
		}

		f32 attackAngle = static_cast<Parms*>(baby->m_parms)->m_general.m_fp21.m_value;
		bool check      = false;
		f32 range       = static_cast<Parms*>(baby->m_parms)->m_general.m_fp20.m_value;

		Vector3f sep(baby->getPosition().x - creature->getPosition().x, baby->getPosition().y - creature->getPosition().y,
		             baby->getPosition().z - creature->getPosition().z);
		if ((sep.x * sep.x + sep.y * sep.y + sep.z * sep.z < range * range) && FABS(angleDist) <= (DEG2RAD * attackAngle) * PI) {
			check = true;
		}

		if (check) {
			transit(baby, BABY_Attack, nullptr);
		}
	} else {
		baby->moveNoTarget();
	}

	if (baby->m_curAnim->m_isRunning && (u32)baby->m_curAnim->m_type == KEYEVENT_END) {
		transit(baby, BABY_Move, nullptr);
	}

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
	lfs      f0, lbl_8051B8B0@sda21(r2)
	mr       r30, r4
	lfs      f1, 0x200(r4)
	mr       r28, r3
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8028CAEC
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8028CE80

lbl_8028CAEC:
	lwz      r7, 0xc0(r30)
	mr       r3, r30
	li       r4, 0
	li       r5, 0
	lfs      f1, 0x424(r7)
	li       r6, 0
	lfs      f2, 0x3d4(r7)
	bl
"getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
	or.      r29, r3, r3
	beq      lbl_8028CE3C
	mr       r4, r29
	lwz      r5, 0xc0(r30)
	lwz      r12, 0(r29)
	addi     r3, r1, 0x50
	lfs      f29, 0x334(r5)
	lwz      r12, 8(r12)
	lfs      f30, 0x30c(r5)
	mtctr    r12
	bctrl
	mr       r4, r30
	addi     r3, r1, 0x5c
	lwz      r12, 0(r30)
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
	lwz      r12, 0(r30)
	fmr      f26, f1
	mr       r3, r30
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f26
	bl       angDist__Fff
	fmr      f31, f1
	lfs      f0, lbl_8051B8BC@sda21(r2)
	lfs      f1, lbl_8051B8B8@sda21(r2)
	fmuls    f0, f0, f29
	fmuls    f28, f31, f30
	fmuls    f1, f1, f0
	fabs     f0, f28
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_8028CBDC
	lfs      f0, lbl_8051B8B0@sda21(r2)
	fcmpo    cr0, f28, f0
	ble      lbl_8028CBD8
	fmr      f28, f1
	b        lbl_8028CBDC

lbl_8028CBD8:
	fneg     f28, f1

lbl_8028CBDC:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f28, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r30)
	fabs     f2, f31
	lfs      f0, lbl_8051B8BC@sda21(r2)
	lfs      f3, 0x1fc(r30)
	lfs      f1, lbl_8051B8B8@sda21(r2)
	frsp     f2, f2
	stfs     f3, 0x1a8(r30)
	lwz      r4, 0xc0(r30)
	lfs      f3, 0x58c(r4)
	fmuls    f0, f0, f3
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_8028CC9C
	mr       r3, r30
	lfs      f29, 0x2e4(r4)
	lwz      r12, 0(r30)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r30
	lfs      f2, 0x1d4(r30)
	lwz      r12, 0(r30)
	frsp     f26, f1
	lfs      f30, 0x1d8(r30)
	lfs      f0, 0x1dc(r30)
	lwz      r12, 0x64(r12)
	stfs     f2, 0x74(r1)
	stfs     f30, 0x78(r1)
	stfs     f0, 0x7c(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f29, f26
	frsp     f1, f1
	stfs     f0, 0x1d4(r30)
	fmuls    f0, f29, f1
	stfs     f30, 0x1d8(r30)
	stfs     f0, 0x1dc(r30)
	b        lbl_8028CD0C

lbl_8028CC9C:
	mr       r3, r30
	lfs      f1, lbl_8051B8C0@sda21(r2)
	lwz      r12, 0(r30)
	lfs      f0, 0x2e4(r4)
	lwz      r12, 0x64(r12)
	fmuls    f29, f1, f0
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r30
	lfs      f2, 0x1d4(r30)
	lwz      r12, 0(r30)
	frsp     f26, f1
	lfs      f30, 0x1d8(r30)
	lfs      f0, 0x1dc(r30)
	lwz      r12, 0x64(r12)
	stfs     f2, 0x68(r1)
	stfs     f30, 0x6c(r1)
	stfs     f0, 0x70(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f29, f26
	frsp     f1, f1
	stfs     f0, 0x1d4(r30)
	fmuls    f0, f29, f1
	stfs     f30, 0x1d8(r30)
	stfs     f0, 0x1dc(r30)

lbl_8028CD0C:
	mr       r4, r30
	lwz      r5, 0xc0(r30)
	lwz      r12, 0(r30)
	addi     r3, r1, 0x14
	lfs      f28, 0x58c(r5)
	li       r31, 0
	lwz      r12, 8(r12)
	lfs      f29, 0x564(r5)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 8
	lwz      r12, 0(r29)
	lfs      f30, 0x14(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f0, 8(r1)
	lwz      r12, 0(r30)
	addi     r3, r1, 0x2c
	fsubs    f26, f0, f30
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x20
	lwz      r12, 0(r29)
	lfs      f30, 0x30(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r30
	lfs      f0, 0x24(r1)
	lwz      r12, 0(r30)
	addi     r3, r1, 0x44
	fsubs    f27, f0, f30
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x38
	lwz      r12, 0(r29)
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
	bge      lbl_8028CE10
	lfs      f0, lbl_8051B8BC@sda21(r2)
	fabs     f2, f31
	lfs      f1, lbl_8051B8B8@sda21(r2)
	fmuls    f0, f0, f28
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_8028CE10
	li       r31, 1

lbl_8028CE10:
	clrlwi.  r0, r31, 0x18
	beq      lbl_8028CE44
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	li       r5, 4
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8028CE44

lbl_8028CE3C:
	mr       r3, r30
	bl       moveNoTarget__Q34Game4Baby3ObjFv

lbl_8028CE44:
	lwz      r3, 0x188(r30)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_8028CE80
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_8028CE80
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	li       r5, 3
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8028CE80:
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
 * Address:	8028CED0
 * Size:	000004
 */
void StateMove::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	8028CED4
 * Size:	000050
 */
void StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->m_simVelocity = Vector3f(0.0f);
	enemy->setEmotionExcitement();
	enemy->startMotion(3, nullptr);
}

/*
 * --INFO--
 * Address:	8028CF24
 * Size:	000104
 */
void StateAttack::exec(EnemyBase* enemy)
{
	Obj* baby = static_cast<Obj*>(enemy);
	if (baby->m_curAnim->m_isRunning) {
		if ((u32)baby->m_curAnim->m_type == KEYEVENT_2) {
			Parms* parms = static_cast<Parms*>(baby->m_parms);
			EnemyFunc::attackNavi(baby, parms->m_general.m_fp22.m_value, parms->m_general.m_fp23.m_value,
			                      parms->m_general.m_attackDamage.m_value, nullptr, nullptr);
			EnemyFunc::eatPikmin(baby, nullptr);
			int slotCount = baby->getSlotPikiNum();
			if (slotCount == 0) {
				baby->startMotion(4, nullptr);
			}
		} else if ((u32)baby->m_curAnim->m_type == KEYEVENT_3) {
			Parms* parms = static_cast<Parms*>(baby->m_parms);
			EnemyFunc::swallowPikmin(baby, parms->m_properParms.m_poisonDamage.m_value, nullptr);
		} else if ((u32)baby->m_curAnim->m_type == KEYEVENT_END) {
			if (baby->m_health <= 0.0f) {
				transit(baby, BABY_Dead, nullptr);
			} else {
				transit(baby, BABY_Move, nullptr);
			}
		}
	}
}
/*
 * --INFO--
 * Address:	8028D028
 * Size:	000024
 */
void StateAttack::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }
} // namespace Baby
} // namespace Game
