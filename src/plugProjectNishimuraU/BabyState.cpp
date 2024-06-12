#include "Game/Entities/Baby.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "efx/TBaby.h"

namespace Game {
namespace Baby {
/**
 * @note Address: 0x8028C584
 * @note Size: 0x1D0
 */
void FSM::init(EnemyBase* enemy)
{
	create(BABY_Count), registerState(new StateDead);
	registerState(new StatePress);
	registerState(new StateBorn);
	registerState(new StateMove);
	registerState(new StateAttack);
}

/**
 * @note Address: 0x8028C754
 * @note Size: 0x58
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* baby = OBJ(enemy);
	baby->createHoney();
	baby->deathProcedure();
	baby->mTargetVelocity = Vector3f(0.0f);
	baby->startMotion(BABYANIM_Dead, nullptr);
}

/**
 * @note Address: 0x8028C7AC
 * @note Size: 0x44
 */
void StateDead::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && (u32)enemy->mCurAnim->mType == KEYEVENT_END) {
		enemy->kill(nullptr);
	}
}

/**
 * @note Address: 0x8028C7F0
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x8028C7F4
 * @note Size: 0xDC
 */
void StatePress::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* baby = OBJ(enemy);
	baby->createHoney();
	baby->mHealth = 0.0f;
	baby->deathProcedure();
	baby->mTargetVelocity = Vector3f(0.0f);
	baby->startMotion(BABYANIM_DeadPress, nullptr);
	Vector3f position = baby->getPosition();

	efx::Arg fxArg(position);
	efx::TBabyBecha bechaEffect;

	bechaEffect.create(&fxArg);
}

/**
 * @note Address: 0x8028C8D0
 * @note Size: 0x44
 */
void StatePress::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && (u32)enemy->mCurAnim->mType == KEYEVENT_END) {
		enemy->kill(nullptr);
	}
}

/**
 * @note Address: 0x8028C914
 * @note Size: 0x4
 */
void StatePress::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x8028C918
 * @note Size: 0x40
 */
void StateBorn::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* baby = OBJ(enemy);
	baby->createBornEffect();
	baby->startMotion(BABYANIM_Born, nullptr);
}

/**
 * @note Address: 0x8028C958
 * @note Size: 0xD8
 */
void StateBorn::exec(EnemyBase* enemy)
{
	if (enemy->mFloorTriangle) {

		Vector3f vec = enemy->mTargetVelocity;
		vec.scale2D(0.95f);
		enemy->mTargetVelocity = vec;

		enemy->finishMotion();
	}

	if (enemy->mCurAnim->mIsPlaying && (u32)enemy->mCurAnim->mType == KEYEVENT_END) {
		if (enemy->mHealth <= 0.0f) {
			transit(enemy, BABY_Dead, nullptr);

		} else {
			transit(enemy, BABY_Move, nullptr);
		}
	}
}

/**
 * @note Address: 0x8028CA30
 * @note Size: 0x4
 */
void StateBorn::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x8028CA34
 * @note Size: 0x34
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* baby             = OBJ(enemy);
	baby->mTargetCreature = nullptr;
	baby->startMotion(BABYANIM_Move, nullptr);
}

/**
 * @note Address: 0x8028CA68
 * @note Size: 0x468
 */
// NON-MATCHING
void StateMove::exec(EnemyBase* enemy)
{
	Obj* baby = OBJ(enemy);
	if (baby->mHealth <= 0.0f) {
		transit(baby, BABY_Dead, nullptr);
		return;
	}

	Creature* creature = EnemyFunc::getNearestPikminOrNavi(baby, CG_GENERALPARMS(baby).mViewAngle.mValue,
	                                                       CG_GENERALPARMS(baby).mSightRadius.mValue, nullptr, nullptr, nullptr);

	if (creature) {

		// Vector3f targetPos = creature->getPosition();
		f32 angleDist = baby->turnToTarget(creature, CG_GENERALPARMS(baby).mTurnSpeed(), CG_GENERALPARMS(baby).mMaxTurnAngle());

		f32 limit   = PI * (DEG2RAD * CG_GENERALPARMS(baby).mMaxAttackAngle());
		f32 absDist = FABS(angleDist);

		if (absDist <= limit) {
			f32 speed    = baby->getMoveSpeed();
			f32 sintheta = dolsinf(baby->getFaceDir());
			f32 y        = baby->getTargetVelocity().y;
			f32 costheta = dolcosf(baby->getFaceDir());

			baby->mTargetVelocity = Vector3f(speed * sintheta, y, speed * costheta);

		} else {
			f32 speed    = baby->getMoveSpeed(0.25f);
			f32 sintheta = dolsinf(baby->getFaceDir());
			f32 y        = baby->getTargetVelocity().y;
			f32 costheta = dolcosf(baby->getFaceDir());

			baby->mTargetVelocity = Vector3f(speed * sintheta, y, speed * costheta);
		}

		if (baby->isTargetAttackable(creature, angleDist, CG_GENERALPARMS(baby).mMaxAttackRange.mValue,
		                             CG_GENERALPARMS(baby).mMaxAttackAngle.mValue)) {
			transit(baby, BABY_Attack, nullptr);
		}

	} else {
		baby->moveNoTarget();
	}

	if (baby->mCurAnim->mIsPlaying && (u32)baby->mCurAnim->mType == KEYEVENT_END) {
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

/**
 * @note Address: 0x8028CED0
 * @note Size: 0x4
 */
void StateMove::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x8028CED4
 * @note Size: 0x50
 */
void StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->setEmotionExcitement();
	enemy->startMotion(BABYANIM_Attack, nullptr);
}

/**
 * @note Address: 0x8028CF24
 * @note Size: 0x104
 */
void StateAttack::exec(EnemyBase* enemy)
{
	Obj* baby = OBJ(enemy);
	if (baby->mCurAnim->mIsPlaying) {
		if ((u32)baby->mCurAnim->mType == KEYEVENT_2) {
			Parms* parms = CG_PARMS(baby);
			EnemyFunc::attackNavi(baby, parms->mGeneral.mAttackRadius.mValue, parms->mGeneral.mAttackHitAngle.mValue,
			                      parms->mGeneral.mAttackDamage.mValue, nullptr, nullptr);
			EnemyFunc::eatPikmin(baby, nullptr);
			int slotCount = baby->getSlotPikiNum();
			if (slotCount == 0) {
				baby->startMotion(BABYANIM_AttackFail, nullptr);
			}
		} else if ((u32)baby->mCurAnim->mType == KEYEVENT_3) {
			Parms* parms = CG_PARMS(baby);
			EnemyFunc::swallowPikmin(baby, parms->mProperParms.mPoisonDamage.mValue, nullptr);
		} else if ((u32)baby->mCurAnim->mType == KEYEVENT_END) {
			if (baby->mHealth <= 0.0f) {
				transit(baby, BABY_Dead, nullptr);
			} else {
				transit(baby, BABY_Move, nullptr);
			}
		}
	}
}

/**
 * @note Address: 0x8028D028
 * @note Size: 0x24
 */
void StateAttack::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }
} // namespace Baby
} // namespace Game
