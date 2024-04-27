#include "Game/Entities/KumaKochappy.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"

namespace Game {
namespace KumaKochappy {

/**
 * @note Address: 0x802E4EE8
 * @note Size: 0x27C
 */
void FSM::init(EnemyBase* enemy)
{
	create(KUMAKOCHAPPY_StateCount);
	registerState(new StateDead);
	registerState(new StatePress);
	registerState(new StateWait);
	registerState(new StateAttack);
	registerState(new StateFlick);
	registerState(new StateWalk);
	registerState(new StateWalkPath);
}

/**
 * @note Address: 0x802E5164
 * @note Size: 0x50
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->deathProcedure();
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->startMotion(KUMAKOCHAPPYANIM_Dead, nullptr);
}

/**
 * @note Address: 0x802E51B4
 * @note Size: 0x44
 */
void StateDead::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		enemy->kill(nullptr);
	}
}

/**
 * @note Address: 0x802E51F8
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802E51FC
 * @note Size: 0x58
 */
void StatePress::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->mHealth = 0.0f;
	enemy->deathProcedure();
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->startMotion(KUMAKOCHAPPYANIM_Press, nullptr);
}

/**
 * @note Address: 0x802E5254
 * @note Size: 0x44
 */
void StatePress::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		enemy->kill(nullptr);
	}
}

/**
 * @note Address: 0x802E5298
 * @note Size: 0x4
 */
void StatePress::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802E529C
 * @note Size: 0x54
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kuma          = OBJ(enemy);
	kuma->mUnusedValue = 0.0f;
	kuma->mNextState   = KUMAKOCHAPPY_NULL;
	kuma->enableEvent(0, EB_Constrained);
	kuma->mTargetVelocity = Vector3f(0.0f);
	kuma->startMotion(KUMAKOCHAPPYANIM_Wait, nullptr);
}

/**
 * @note Address: 0x802E52F0
 * @note Size: 0x3A8
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* kuma = OBJ(enemy);
	if (kuma->mHealth <= 0.0f) {
		transit(kuma, KUMAKOCHAPPY_Dead, nullptr);
		return;
	}

	if (EnemyFunc::isStartFlick(kuma, false)) {
		transit(kuma, KUMAKOCHAPPY_Flick, nullptr);
		return;
	}

	Creature* target = kuma->getSearchedTarget();
	if (target) {
		// more nonsense going on in here than this
		f32 dist = kuma->turnToTarget(target, CG_GENERALPARMS(kuma).mMaxTurnAngle.mValue, CG_GENERALPARMS(kuma).mTurnSpeed.mValue);

		// this isn't the comparison, probably a bool spat out from an inline
		if (FABS(dist) <= CG_GENERALPARMS(kuma).mTurnSpeed.mValue) {
			kuma->mNextState = KUMAKOCHAPPY_Attack;
			kuma->finishMotion();
		} else {
			kuma->mNextState = KUMAKOCHAPPY_Walk;
			kuma->finishMotion();
		}
	} else if (kuma->setTargetParentPosition()) {
		kuma->mNextState = KUMAKOCHAPPY_WalkPath;
		kuma->finishMotion();
	}

	if (kuma->isFinishMotion()) {
		kuma->setAnimSpeed(60.0f);
	}

	if (kuma->mCurAnim->mIsPlaying) {
		if (kuma->mCurAnim->mType == KEYEVENT_2) {
			kuma->getJAIObject()->startSound(PSSE_EN_KOCHAPPY_NOTICE, 0);

		} else if (kuma->mCurAnim->mType == KEYEVENT_END) {
			transit(kuma, kuma->mNextState, nullptr);
		}
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
	lfs      f0, lbl_8051CE90@sda21(r2)
	mr       r30, r4
	lfs      f1, 0x200(r4)
	mr       r28, r3
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802E5374
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E5648

lbl_802E5374:
	mr       r3, r30
	li       r4, 0
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E53AC
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	li       r5, 4
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E5648

lbl_802E53AC:
	mr       r3, r30
	bl       getSearchedTarget__Q34Game12KumaKochappy3ObjFv
	or.      r29, r3, r3
	beq      lbl_802E5598
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
	bge      lbl_802E5568
	lfs      f0, lbl_8051CE98@sda21(r2)
	fabs     f2, f28
	lfs      f1, lbl_8051CE94@sda21(r2)
	fmuls    f0, f0, f30
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_802E5568
	li       r31, 1

lbl_802E5568:
	clrlwi.  r0, r31, 0x18
	beq      lbl_802E5584
	li       r0, 3
	mr       r3, r30
	stw      r0, 0x2cc(r30)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802E55B8

lbl_802E5584:
	li       r0, 5
	mr       r3, r30
	stw      r0, 0x2cc(r30)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802E55B8

lbl_802E5598:
	mr       r3, r30
	bl       setTargetParentPosition__Q34Game12KumaKochappy3ObjFv
	cmplwi   r3, 0
	beq      lbl_802E55B8
	li       r0, 6
	mr       r3, r30
	stw      r0, 0x2cc(r30)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_802E55B8:
	mr       r3, r30
	bl       isFinishMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E55D4
	lfs      f1, lbl_8051CE9C@sda21(r2)
	mr       r3, r30
	bl       setAnimSpeed__Q24Game9EnemyBaseFf

lbl_802E55D4:
	lwz      r3, 0x188(r30)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802E5648
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 2
	bne      lbl_802E5620
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x596a
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	b        lbl_802E5648

lbl_802E5620:
	cmplwi   r0, 0x3e8
	bne      lbl_802E5648
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	li       r6, 0
	lwz      r5, 0x2cc(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802E5648:
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
 * @note Address: 0x802E5698
 * @note Size: 0x3C
 */
void StateWait::cleanup(EnemyBase* enemy)
{
	enemy->constraintOff();
	enemy->setAnimSpeed(30.0f);
}

/**
 * @note Address: 0x802E56D4
 * @note Size: 0x58
 */
void StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kuma             = OBJ(enemy);
	kuma->mNextState      = KUMAKOCHAPPY_NULL;
	kuma->mTargetVelocity = Vector3f(0.0f);
	kuma->setEmotionExcitement();
	kuma->startMotion(KUMAKOCHAPPYANIM_Attack, nullptr);
}

/**
 * @note Address: 0x802E572C
 * @note Size: 0x4CC
 */
void StateAttack::exec(EnemyBase* enemy)
{
	Obj* kuma = OBJ(enemy);
	if (kuma->mHealth <= 0.0f) {
		transit(kuma, KUMAKOCHAPPY_Dead, nullptr);
		return;
	}

	if (kuma->mCurAnim->mIsPlaying) {
		if (kuma->mCurAnim->mType == KEYEVENT_2) {
			int naviEat
			    = EnemyFunc::attackNavi(kuma, CG_GENERALPARMS(kuma).mAttackRadius.mValue, CG_GENERALPARMS(kuma).mAttackHitAngle.mValue,
			                            CG_GENERALPARMS(kuma).mAttackDamage.mValue, nullptr, nullptr);
			int totalEat = naviEat + EnemyFunc::eatPikmin(kuma, nullptr);

			EnemyFunc::flickStickPikmin(kuma, CG_GENERALPARMS(kuma).mShakeChance.mValue, CG_GENERALPARMS(kuma).mShakeKnockback.mValue,
			                            CG_GENERALPARMS(kuma).mShakeDamage.mValue, kuma->getFaceDir(), nullptr);

			if (!totalEat) {
				kuma->startMotion(KUMAKOCHAPPYANIM_Eat, nullptr);
			}

		} else if (kuma->mCurAnim->mType == KEYEVENT_3) {
			EnemyFunc::swallowPikmin(kuma, CG_PROPERPARMS(kuma).mPoisonDamage.mValue, nullptr);

		} else if (kuma->mCurAnim->mType == KEYEVENT_END) {
			if (kuma->mHealth <= 0.0f) {
				transit(kuma, KUMAKOCHAPPY_Dead, nullptr);
				return;
			}

			if (EnemyFunc::isStartFlick(kuma, false)) {
				transit(kuma, KUMAKOCHAPPY_Flick, nullptr);
				return;
			}

			Creature* target = kuma->getSearchedTarget();
			if (target) {
				// more nonsense going on in here than this
				f32 dist = kuma->turnToTarget(target, CG_GENERALPARMS(kuma).mMaxTurnAngle.mValue, CG_GENERALPARMS(kuma).mTurnSpeed.mValue);

				// this isn't the comparison, probably a bool spat out from an inline
				if (FABS(dist) <= CG_GENERALPARMS(kuma).mTurnSpeed.mValue) {
					transit(kuma, KUMAKOCHAPPY_Attack, nullptr);
					return;
				} else {
					transit(kuma, KUMAKOCHAPPY_Walk, nullptr);
					return;
				}

			} else {
				Vector3f* parentPos = kuma->setTargetParentPosition();
				if (parentPos) {
					Vector3f pos = kuma->getPosition();
					if (inRadius(CG_GENERALPARMS(kuma).mHomeRadius.mValue, pos, *parentPos)) {
						transit(kuma, KUMAKOCHAPPY_Wait, nullptr);
						return;
					} else {
						transit(kuma, KUMAKOCHAPPY_WalkPath, nullptr);
						return;
					}
				}
			}

			transit(kuma, KUMAKOCHAPPY_Wait, nullptr);
		}
	}
	/*
	stwu     r1, -0x100(r1)
	mflr     r0
	stw      r0, 0x104(r1)
	stfd     f31, 0xf0(r1)
	psq_st   f31, 248(r1), 0, qr0
	stfd     f30, 0xe0(r1)
	psq_st   f30, 232(r1), 0, qr0
	stfd     f29, 0xd0(r1)
	psq_st   f29, 216(r1), 0, qr0
	stfd     f28, 0xc0(r1)
	psq_st   f28, 200(r1), 0, qr0
	stfd     f27, 0xb0(r1)
	psq_st   f27, 184(r1), 0, qr0
	stfd     f26, 0xa0(r1)
	psq_st   f26, 168(r1), 0, qr0
	stw      r31, 0x9c(r1)
	stw      r30, 0x98(r1)
	stw      r29, 0x94(r1)
	stw      r28, 0x90(r1)
	lfs      f0, lbl_8051CE90@sda21(r2)
	mr       r30, r4
	lfs      f1, 0x200(r4)
	mr       r28, r3
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802E57B0
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E5BA8

lbl_802E57B0:
	lwz      r5, 0x188(r30)
	lbz      r0, 0x24(r5)
	cmplwi   r0, 0
	beq      lbl_802E5BA8
	lwz      r0, 0x1c(r5)
	cmplwi   r0, 2
	bne      lbl_802E5850
	lwz      r6, 0xc0(r30)
	mr       r3, r30
	li       r4, 0
	li       r5, 0
	lfs      f1, 0x5b4(r6)
	lfs      f2, 0x5dc(r6)
	lfs      f3, 0x604(r6)
	bl
"attackNavi__Q24Game9EnemyFuncFPQ24Game8CreaturefffP8CollPartP23Condition<Q24Game4Navi>"
	mr       r31, r3
	mr       r3, r30
	li       r4, 0
	bl
"eatPikmin__Q24Game9EnemyFuncFPQ24Game9EnemyBaseP23Condition<Q24Game4Piki>" add
r29, r31, r3 mr       r3, r30 lwz      r12, 0(r30) lwz      r31, 0xc0(r30) lwz
r12, 0x64(r12) mtctr    r12 bctrl fmr      f4, f1 lfs      f1, 0x53c(r31) lfs
f2, 0x4c4(r31) mr       r3, r30 lfs      f3, 0x4ec(r31) li       r4, 0 bl
"flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	cmpwi    r29, 0
	bne      lbl_802E5BA8
	mr       r3, r30
	li       r4, 8
	li       r5, 0
	bl       startMotion__Q24Game9EnemyBaseFiPQ28SysShape14MotionListener
	b        lbl_802E5BA8

lbl_802E5850:
	cmplwi   r0, 3
	bne      lbl_802E5870
	lwz      r5, 0xc0(r30)
	mr       r3, r30
	li       r4, 0
	lfs      f1, 0x81c(r5)
	bl
"swallowPikmin__Q24Game9EnemyFuncFPQ24Game8CreaturefP23Condition<Q24Game4Piki>"
	b        lbl_802E5BA8

lbl_802E5870:
	cmplwi   r0, 0x3e8
	bne      lbl_802E5BA8
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802E58A0
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E5BA8

lbl_802E58A0:
	mr       r3, r30
	li       r4, 0
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E58D8
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	li       r5, 4
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E5BA8

lbl_802E58D8:
	mr       r3, r30
	bl       getSearchedTarget__Q34Game12KumaKochappy3ObjFv
	or.      r29, r3, r3
	beq      lbl_802E5AE4
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
	bge      lbl_802E5A94
	lfs      f0, lbl_8051CE98@sda21(r2)
	fabs     f2, f28
	lfs      f1, lbl_8051CE94@sda21(r2)
	fmuls    f0, f0, f30
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_802E5A94
	li       r31, 1

lbl_802E5A94:
	clrlwi.  r0, r31, 0x18
	beq      lbl_802E5AC0
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	li       r5, 3
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E5BA8

lbl_802E5AC0:
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	li       r5, 5
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E5BA8

lbl_802E5AE4:
	mr       r3, r30
	bl       setTargetParentPosition__Q34Game12KumaKochappy3ObjFv
	or.      r31, r3, r3
	beq      lbl_802E5B88
	mr       r4, r30
	addi     r3, r1, 0x80
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x88(r1)
	lfs      f0, 8(r31)
	lwz      r3, 0xc0(r30)
	fsubs    f3, f1, f0
	lfs      f2, 0x80(r1)
	lfs      f1, 0(r31)
	lfs      f0, 0x384(r3)
	fsubs    f2, f2, f1
	fmuls    f1, f3, f3
	fmuls    f0, f0, f0
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802E5B64
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	li       r5, 2
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E5BA8

lbl_802E5B64:
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	li       r5, 6
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E5BA8

lbl_802E5B88:
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	li       r5, 2
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802E5BA8:
	psq_l    f31, 248(r1), 0, qr0
	lfd      f31, 0xf0(r1)
	psq_l    f30, 232(r1), 0, qr0
	lfd      f30, 0xe0(r1)
	psq_l    f29, 216(r1), 0, qr0
	lfd      f29, 0xd0(r1)
	psq_l    f28, 200(r1), 0, qr0
	lfd      f28, 0xc0(r1)
	psq_l    f27, 184(r1), 0, qr0
	lfd      f27, 0xb0(r1)
	psq_l    f26, 168(r1), 0, qr0
	lfd      f26, 0xa0(r1)
	lwz      r31, 0x9c(r1)
	lwz      r30, 0x98(r1)
	lwz      r29, 0x94(r1)
	lwz      r0, 0x104(r1)
	lwz      r28, 0x90(r1)
	mtlr     r0
	addi     r1, r1, 0x100
	blr
	*/
}

/**
 * @note Address: 0x802E5BF8
 * @note Size: 0x24
 */
void StateAttack::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/**
 * @note Address: 0x802E5C1C
 * @note Size: 0x44
 */
void StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kuma             = OBJ(enemy);
	kuma->mNextState      = KUMAKOCHAPPY_NULL;
	kuma->mTargetVelocity = Vector3f(0.0f);
	kuma->startMotion(KUMAKOCHAPPYANIM_Flick, nullptr);
}

/**
 * @note Address: 0x802E5C60
 * @note Size: 0x4D0
 */
void StateFlick::exec(EnemyBase* enemy)
{
	Obj* kuma = OBJ(enemy);
	if (kuma->mHealth <= 0.0f) {
		transit(kuma, KUMAKOCHAPPY_Dead, nullptr);
		return;
	}

	if (kuma->mCurAnim->mIsPlaying) {
		if (kuma->mCurAnim->mType == KEYEVENT_2) {
			EnemyFunc::flickStickPikmin(kuma, CG_GENERALPARMS(kuma).mShakeChance.mValue, CG_GENERALPARMS(kuma).mShakeKnockback.mValue,
			                            CG_GENERALPARMS(kuma).mShakeDamage.mValue, kuma->getFaceDir(), nullptr);
			EnemyFunc::flickNearbyPikmin(kuma, CG_GENERALPARMS(kuma).mShakeRange.mValue, CG_GENERALPARMS(kuma).mShakeKnockback.mValue,
			                             CG_GENERALPARMS(kuma).mShakeDamage.mValue, kuma->getFaceDir(), nullptr);
			EnemyFunc::flickNearbyNavi(kuma, CG_GENERALPARMS(kuma).mShakeRange.mValue, CG_GENERALPARMS(kuma).mShakeKnockback.mValue,
			                           CG_GENERALPARMS(kuma).mShakeDamage.mValue, kuma->getFaceDir(), nullptr);
			kuma->mFlickTimer = 0.0f;

		} else if (kuma->mCurAnim->mType == KEYEVENT_END) {
			if (kuma->mHealth <= 0.0f) {
				transit(kuma, KUMAKOCHAPPY_Dead, nullptr);
				return;
			}

			if (EnemyFunc::isStartFlick(kuma, false)) {
				transit(kuma, KUMAKOCHAPPY_Flick, nullptr);
				return;
			}

			Creature* target = kuma->getSearchedTarget();
			if (target) {
				// more nonsense going on in here than this
				f32 dist = kuma->turnToTarget(target, CG_GENERALPARMS(kuma).mMaxTurnAngle.mValue, CG_GENERALPARMS(kuma).mTurnSpeed.mValue);

				// this isn't the comparison, probably a bool spat out from an inline
				if (FABS(dist) <= CG_GENERALPARMS(kuma).mTurnSpeed.mValue) {
					transit(kuma, KUMAKOCHAPPY_Attack, nullptr);
					return;
				} else {
					transit(kuma, KUMAKOCHAPPY_Walk, nullptr);
					return;
				}

			} else {
				Vector3f* parentPos = kuma->setTargetParentPosition();
				if (parentPos) {
					Vector3f pos = kuma->getPosition();
					if (inRadius(CG_GENERALPARMS(kuma).mHomeRadius.mValue, pos, *parentPos)) {
						transit(kuma, KUMAKOCHAPPY_Wait, nullptr);
						return;
					} else {
						transit(kuma, KUMAKOCHAPPY_WalkPath, nullptr);
						return;
					}
				}
			}

			transit(kuma, KUMAKOCHAPPY_Wait, nullptr);
		}
	}
	/*
	stwu     r1, -0x100(r1)
	mflr     r0
	stw      r0, 0x104(r1)
	stfd     f31, 0xf0(r1)
	psq_st   f31, 248(r1), 0, qr0
	stfd     f30, 0xe0(r1)
	psq_st   f30, 232(r1), 0, qr0
	stfd     f29, 0xd0(r1)
	psq_st   f29, 216(r1), 0, qr0
	stfd     f28, 0xc0(r1)
	psq_st   f28, 200(r1), 0, qr0
	stfd     f27, 0xb0(r1)
	psq_st   f27, 184(r1), 0, qr0
	stfd     f26, 0xa0(r1)
	psq_st   f26, 168(r1), 0, qr0
	stw      r31, 0x9c(r1)
	stw      r30, 0x98(r1)
	stw      r29, 0x94(r1)
	stw      r28, 0x90(r1)
	lfs      f0, lbl_8051CE90@sda21(r2)
	mr       r30, r4
	lfs      f1, 0x200(r4)
	mr       r28, r3
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802E5CE4
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E60E0

lbl_802E5CE4:
	lwz      r5, 0x188(r30)
	lbz      r0, 0x24(r5)
	cmplwi   r0, 0
	beq      lbl_802E60E0
	lwz      r0, 0x1c(r5)
	cmplwi   r0, 2
	bne      lbl_802E5DA8
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
	lfs      f1, 0x514(r31)
	lfs      f2, 0x4c4(r31)
	mr       r3, r30
	lfs      f3, 0x4ec(r31)
	li       r4, 0
	bl
"flickNearbyNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Navi>"
	lfs      f0, lbl_8051CE90@sda21(r2)
	stfs     f0, 0x20c(r30)
	b        lbl_802E60E0

lbl_802E5DA8:
	cmplwi   r0, 0x3e8
	bne      lbl_802E60E0
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802E5DD8
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E60E0

lbl_802E5DD8:
	mr       r3, r30
	li       r4, 0
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E5E10
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	li       r5, 4
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E60E0

lbl_802E5E10:
	mr       r3, r30
	bl       getSearchedTarget__Q34Game12KumaKochappy3ObjFv
	or.      r29, r3, r3
	beq      lbl_802E601C
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
	bge      lbl_802E5FCC
	lfs      f0, lbl_8051CE98@sda21(r2)
	fabs     f2, f28
	lfs      f1, lbl_8051CE94@sda21(r2)
	fmuls    f0, f0, f30
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_802E5FCC
	li       r31, 1

lbl_802E5FCC:
	clrlwi.  r0, r31, 0x18
	beq      lbl_802E5FF8
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	li       r5, 3
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E60E0

lbl_802E5FF8:
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	li       r5, 5
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E60E0

lbl_802E601C:
	mr       r3, r30
	bl       setTargetParentPosition__Q34Game12KumaKochappy3ObjFv
	or.      r31, r3, r3
	beq      lbl_802E60C0
	mr       r4, r30
	addi     r3, r1, 0x80
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x88(r1)
	lfs      f0, 8(r31)
	lwz      r3, 0xc0(r30)
	fsubs    f3, f1, f0
	lfs      f2, 0x80(r1)
	lfs      f1, 0(r31)
	lfs      f0, 0x384(r3)
	fsubs    f2, f2, f1
	fmuls    f1, f3, f3
	fmuls    f0, f0, f0
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802E609C
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	li       r5, 2
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E60E0

lbl_802E609C:
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	li       r5, 6
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E60E0

lbl_802E60C0:
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	li       r5, 2
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802E60E0:
	psq_l    f31, 248(r1), 0, qr0
	lfd      f31, 0xf0(r1)
	psq_l    f30, 232(r1), 0, qr0
	lfd      f30, 0xe0(r1)
	psq_l    f29, 216(r1), 0, qr0
	lfd      f29, 0xd0(r1)
	psq_l    f28, 200(r1), 0, qr0
	lfd      f28, 0xc0(r1)
	psq_l    f27, 184(r1), 0, qr0
	lfd      f27, 0xb0(r1)
	psq_l    f26, 168(r1), 0, qr0
	lfd      f26, 0xa0(r1)
	lwz      r31, 0x9c(r1)
	lwz      r30, 0x98(r1)
	lwz      r29, 0x94(r1)
	lwz      r0, 0x104(r1)
	lwz      r28, 0x90(r1)
	mtlr     r0
	addi     r1, r1, 0x100
	blr
	*/
}

/**
 * @note Address: 0x802E6130
 * @note Size: 0x4
 */
void StateFlick::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802E6134
 * @note Size: 0x34
 */
void StateWalk::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kuma        = OBJ(enemy);
	kuma->mNextState = KUMAKOCHAPPY_NULL;
	kuma->startMotion(KUMAKOCHAPPYANIM_Move, nullptr);
}

/**
 * @note Address: 0x802E6168
 * @note Size: 0x538
 */
void StateWalk::exec(EnemyBase* enemy)
{
	bool check = true;
	Obj* kuma  = OBJ(enemy);
	if (kuma->mHealth <= 0.0f) {
		transit(kuma, KUMAKOCHAPPY_Dead, nullptr);
		return;
	}

	if (EnemyFunc::isStartFlick(kuma, false)) {
		transit(kuma, KUMAKOCHAPPY_Flick, nullptr);
		return;
	}

	Creature* target = kuma->getSearchedTarget();
	if (target) {
		// more nonsense going on in here than this
		f32 dist = kuma->turnToTarget(target, CG_GENERALPARMS(kuma).mMaxTurnAngle.mValue, CG_GENERALPARMS(kuma).mTurnSpeed.mValue);

		// this isn't the comparison, probably a bool spat out from an inline
		if (FABS(dist) <= CG_GENERALPARMS(kuma).mTurnSpeed.mValue) {
			kuma->mNextState = KUMAKOCHAPPY_Attack;
			kuma->finishMotion();
			kuma->setAnimSpeed(60.0f);
		} else if (FABS(dist) <= CG_GENERALPARMS(kuma).mMaxAttackAngle.mValue) {
			check = false;
			// transit(kuma, KUMAKOCHAPPY_Walk, nullptr);
			// return;
		}

	} else {
		Vector3f* parentPos = kuma->setTargetParentPosition();
		if (parentPos) {
			Vector3f pos = kuma->getPosition();
			if (inRadius(CG_GENERALPARMS(kuma).mHomeRadius.mValue, pos, *parentPos)) {
				kuma->mNextState = KUMAKOCHAPPY_Wait;
				kuma->finishMotion();
			} else {
				kuma->mNextState = KUMAKOCHAPPY_WalkPath;
				kuma->finishMotion();
			}
		} else {
			kuma->mNextState = KUMAKOCHAPPY_Wait;
			kuma->finishMotion();
		}
	}

	if (kuma->isFinishMotion()) {
		kuma->mTargetVelocity = Vector3f(0.0f);
	} else if (check) {
		f32 moveSpeed         = CG_GENERALPARMS(kuma).mMoveSpeed.mValue;
		f32 sinTheta          = (f32)sin(kuma->getFaceDir());
		f32 y                 = kuma->getTargetVelocity().y;
		f32 cosTheta          = (f32)cos(kuma->getFaceDir());
		kuma->mTargetVelocity = Vector3f(moveSpeed * sinTheta, y, moveSpeed * cosTheta);
	} else {
		f32 moveSpeed         = CG_GENERALPARMS(kuma).mMoveSpeed.mValue * 0.5f;
		f32 sinTheta          = (f32)sin(kuma->getFaceDir());
		f32 y                 = kuma->getTargetVelocity().y;
		f32 cosTheta          = (f32)cos(kuma->getFaceDir());
		kuma->mTargetVelocity = Vector3f(moveSpeed * sinTheta, y, moveSpeed * cosTheta);
	}

	if (kuma->mCurAnim->mIsPlaying && kuma->mCurAnim->mType == KEYEVENT_END) {
		transit(kuma, kuma->mNextState, nullptr);
	}
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
	stmw     r27, 0x9c(r1)
	lfs      f0, lbl_8051CE90@sda21(r2)
	mr       r31, r4
	lfs      f1, 0x200(r4)
	mr       r29, r3
	li       r30, 1
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802E61E4
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E665C

lbl_802E61E4:
	mr       r3, r31
	li       r4, 0
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E621C
	mr       r3, r29
	mr       r4, r31
	lwz      r12, 0(r29)
	li       r5, 4
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E665C

lbl_802E621C:
	mr       r3, r31
	bl       getSearchedTarget__Q34Game12KumaKochappy3ObjFv
	or.      r27, r3, r3
	beq      lbl_802E647C
	mr       r4, r27
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r27)
	addi     r3, r1, 0x50
	lfs      f29, 0x334(r5)
	lwz      r12, 8(r12)
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
	lfs      f0, lbl_8051CE98@sda21(r2)
	lfs      f1, lbl_8051CE94@sda21(r2)
	fmuls    f0, f0, f29
	fmuls    f28, f31, f30
	fmuls    f1, f1, f0
	fabs     f0, f28
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_802E62F4
	lfs      f0, lbl_8051CE90@sda21(r2)
	fcmpo    cr0, f28, f0
	ble      lbl_802E62F0
	fmr      f28, f1
	b        lbl_802E62F4

lbl_802E62F0:
	fneg     f28, f1

lbl_802E62F4:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f28, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	mr       r4, r31
	addi     r3, r1, 0x14
	li       r28, 0
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)
	lwz      r12, 0(r31)
	lwz      r5, 0xc0(r31)
	lwz      r12, 8(r12)
	lfs      f28, 0x58c(r5)
	lfs      f29, 0x564(r5)
	mtctr    r12
	bctrl
	mr       r4, r27
	addi     r3, r1, 8
	lwz      r12, 0(r27)
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
	mr       r4, r27
	addi     r3, r1, 0x20
	lwz      r12, 0(r27)
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
	mr       r4, r27
	addi     r3, r1, 0x38
	lwz      r12, 0(r27)
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
	bge      lbl_802E6420
	lfs      f0, lbl_8051CE98@sda21(r2)
	fabs     f2, f31
	lfs      f1, lbl_8051CE94@sda21(r2)
	fmuls    f0, f0, f28
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_802E6420
	li       r28, 1

lbl_802E6420:
	clrlwi.  r0, r28, 0x18
	beq      lbl_802E6448
	li       r0, 3
	mr       r3, r31
	stw      r0, 0x2cc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	lfs      f1, lbl_8051CE9C@sda21(r2)
	mr       r3, r31
	bl       setAnimSpeed__Q24Game9EnemyBaseFf
	b        lbl_802E6510

lbl_802E6448:
	lwz      r3, 0xc0(r31)
	fabs     f2, f31
	lfs      f0, lbl_8051CE98@sda21(r2)
	lfs      f3, 0x58c(r3)
	lfs      f1, lbl_8051CE94@sda21(r2)
	frsp     f2, f2
	fmuls    f0, f0, f3
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	beq      lbl_802E6510
	li       r30, 0
	b        lbl_802E6510

lbl_802E647C:
	mr       r3, r31
	bl       setTargetParentPosition__Q34Game12KumaKochappy3ObjFv
	or.      r28, r3, r3
	beq      lbl_802E6500
	mr       r4, r31
	addi     r3, r1, 0x80
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x88(r1)
	lfs      f0, 8(r28)
	lwz      r3, 0xc0(r31)
	fsubs    f3, f1, f0
	lfs      f2, 0x80(r1)
	lfs      f1, 0(r28)
	lfs      f0, 0x384(r3)
	fsubs    f2, f2, f1
	fmuls    f1, f3, f3
	fmuls    f0, f0, f0
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802E64EC
	li       r0, 2
	mr       r3, r31
	stw      r0, 0x2cc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802E6510

lbl_802E64EC:
	li       r0, 6
	mr       r3, r31
	stw      r0, 0x2cc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802E6510

lbl_802E6500:
	li       r0, 2
	mr       r3, r31
	stw      r0, 0x2cc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_802E6510:
	mr       r3, r31
	bl       isFinishMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E6534
	lfs      f0, lbl_8051CE90@sda21(r2)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	b        lbl_802E6620

lbl_802E6534:
	clrlwi.  r0, r30, 0x18
	beq      lbl_802E65AC
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
	stfs     f2, 0x74(r1)
	stfs     f31, 0x78(r1)
	stfs     f0, 0x7c(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f28, f26
	frsp     f1, f1
	stfs     f0, 0x1d4(r31)
	fmuls    f0, f28, f1
	stfs     f31, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	b        lbl_802E6620

lbl_802E65AC:
	mr       r3, r31
	lwz      r4, 0xc0(r31)
	lwz      r12, 0(r31)
	lfs      f1, lbl_8051CEA4@sda21(r2)
	lfs      f0, 0x2e4(r4)
	lwz      r12, 0x64(r12)
	fmuls    f28, f1, f0
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
	stfs     f2, 0x68(r1)
	stfs     f31, 0x6c(r1)
	stfs     f0, 0x70(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f28, f26
	frsp     f1, f1
	stfs     f0, 0x1d4(r31)
	fmuls    f0, f28, f1
	stfs     f31, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)

lbl_802E6620:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802E665C
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_802E665C
	mr       r3, r29
	mr       r4, r31
	lwz      r12, 0(r29)
	li       r6, 0
	lwz      r5, 0x2cc(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802E665C:
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
	lmw      r27, 0x9c(r1)
	lwz      r0, 0x114(r1)
	mtlr     r0
	addi     r1, r1, 0x110
	blr
	*/
}

/**
 * @note Address: 0x802E66A0
 * @note Size: 0x28
 */
void StateWalk::cleanup(EnemyBase* enemy) { enemy->setAnimSpeed(30.0f); }

/**
 * @note Address: 0x802E66C8
 * @note Size: 0x4C
 */
void StateWalkPath::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* kuma        = OBJ(enemy);
	kuma->mNextState = KUMAKOCHAPPY_NULL;
	kuma->startMotion(KUMAKOCHAPPYANIM_Move, nullptr);
	kuma->setAnimSpeed(45.0f);
}

/**
 * @note Address: 0x802E6714
 * @note Size: 0x534
 */
void StateWalkPath::exec(EnemyBase* enemy)
{
	Obj* kuma = OBJ(enemy);
	if (kuma->mHealth <= 0.0f) {
		transit(kuma, KUMAKOCHAPPY_Dead, nullptr);
		return;
	}

	if (EnemyFunc::isStartFlick(kuma, true)) {
		transit(kuma, KUMAKOCHAPPY_Flick, nullptr);
		return;
	}

	Creature* target = kuma->getSearchedTarget();
	if (target) {
		f32 minRange = CG_GENERALPARMS(kuma).mMaxAttackAngle();
		f32 maxRange = CG_GENERALPARMS(kuma).mMaxAttackRange();
		f32 dist     = kuma->getAngDist(target);
		if (kuma->isTargetAttackable(target, dist, minRange, maxRange)) {
			kuma->mNextState = KUMAKOCHAPPY_Attack;
			kuma->finishMotion();
			kuma->setAnimSpeed(60.0f);
		} else {
			kuma->mNextState = KUMAKOCHAPPY_Walk;
			kuma->finishMotion();
		}

	} else {
		Vector3f* parentPos = kuma->setTargetParentPosition();
		if (parentPos) {
			Vector3f pos = kuma->getPosition();
			if (inRadius(CG_GENERALPARMS(kuma).mHomeRadius.mValue, pos, *parentPos)) {
				kuma->mNextState = KUMAKOCHAPPY_Wait;
				kuma->finishMotion();
			} else {
				f32 dist = kuma->turnToTarget(*parentPos, CG_GENERALPARMS(kuma).mTurnSpeed(), CG_GENERALPARMS(kuma).mMaxTurnAngle());
			}
		} else {
			kuma->mNextState = KUMAKOCHAPPY_Wait;
			kuma->finishMotion();
		}
	}

	if (kuma->isFinishMotion()) {
		kuma->mTargetVelocity = Vector3f(0.0f);
	} else {
		f32 moveSpeed = CG_GENERALPARMS(kuma).mSearchHeight.mValue; // ??????????????????????????????????
		f32 sinTheta  = (f32)sin(kuma->getFaceDir());
		f32 y         = kuma->getTargetVelocity().y;
		f32 cosTheta  = (f32)cos(kuma->getFaceDir());

		kuma->mTargetVelocity = Vector3f(moveSpeed * sinTheta, y, moveSpeed * cosTheta);
	}

	if (kuma->mCurAnim->mIsPlaying && kuma->mCurAnim->mType == KEYEVENT_END) {
		transit(kuma, kuma->mNextState, nullptr);
	}
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
	lfs      f0, lbl_8051CE90@sda21(r2)
	mr       r31, r4
	lfs      f1, 0x200(r4)
	mr       r30, r3
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802E6798
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E6BF8

lbl_802E6798:
	mr       r3, r31
	li       r4, 1
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E67D0
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 4
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E6BF8

lbl_802E67D0:
	mr       r3, r31
	bl       getSearchedTarget__Q34Game12KumaKochappy3ObjFv
	or.      r28, r3, r3
	beq      lbl_802E69C8
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
	bge      lbl_802E698C
	lfs      f0, lbl_8051CE98@sda21(r2)
	fabs     f2, f28
	lfs      f1, lbl_8051CE94@sda21(r2)
	fmuls    f0, f0, f30
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_802E698C
	li       r29, 1

lbl_802E698C:
	clrlwi.  r0, r29, 0x18
	beq      lbl_802E69B4
	li       r0, 3
	mr       r3, r31
	stw      r0, 0x2cc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	lfs      f1, lbl_8051CE9C@sda21(r2)
	mr       r3, r31
	bl       setAnimSpeed__Q24Game9EnemyBaseFf
	b        lbl_802E6B2C

lbl_802E69B4:
	li       r0, 5
	mr       r3, r31
	stw      r0, 0x2cc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802E6B2C

lbl_802E69C8:
	mr       r3, r31
	bl       setTargetParentPosition__Q34Game12KumaKochappy3ObjFv
	or.      r29, r3, r3
	beq      lbl_802E6B1C
	mr       r4, r31
	addi     r3, r1, 0xa4
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0xac(r1)
	lfs      f0, 8(r29)
	lwz      r5, 0xc0(r31)
	fsubs    f3, f1, f0
	lfs      f2, 0xa4(r1)
	lfs      f1, 0(r29)
	lfs      f0, 0x384(r5)
	fsubs    f2, f2, f1
	fmuls    f1, f3, f3
	fmuls    f0, f0, f0
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802E6A38
	li       r0, 2
	mr       r3, r31
	stw      r0, 0x2cc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802E6B2C

lbl_802E6A38:
	mr       r4, r31
	addi     r3, r1, 0x8c
	lwz      r12, 0(r31)
	lfs      f29, 0x334(r5)
	lwz      r12, 8(r12)
	lfs      f28, 0x30c(r5)
	mtctr    r12
	bctrl
	lfs      f5, 0x8c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x94(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0(r29)
	lfs      f0, 8(r29)
	lfs      f4, 0x90(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x80(r1)
	stfs     f4, 0x84(r1)
	stfs     f3, 0x88(r1)
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
	fmuls    f28, f1, f28
	lfs      f0, lbl_8051CE98@sda21(r2)
	lfs      f1, lbl_8051CE94@sda21(r2)
	fmuls    f0, f0, f29
	fabs     f2, f28
	fmuls    f1, f1, f0
	frsp     f0, f2
	fcmpo    cr0, f0, f1
	ble      lbl_802E6AF0
	lfs      f0, lbl_8051CE90@sda21(r2)
	fcmpo    cr0, f28, f0
	ble      lbl_802E6AEC
	fmr      f28, f1
	b        lbl_802E6AF0

lbl_802E6AEC:
	fneg     f28, f1

lbl_802E6AF0:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f28, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)
	b        lbl_802E6B2C

lbl_802E6B1C:
	li       r0, 2
	mr       r3, r31
	stw      r0, 0x2cc(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_802E6B2C:
	mr       r3, r31
	bl       isFinishMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E6B50
	lfs      f0, lbl_8051CE90@sda21(r2)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	b        lbl_802E6BBC

lbl_802E6B50:
	mr       r3, r31
	lwz      r4, 0xc0(r31)
	lwz      r12, 0(r31)
	lfs      f28, 0x474(r4)
	lwz      r12, 0x64(r12)
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
	stfs     f2, 0x98(r1)
	stfs     f30, 0x9c(r1)
	stfs     f0, 0xa0(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f28, f26
	frsp     f1, f1
	stfs     f0, 0x1d4(r31)
	fmuls    f0, f28, f1
	stfs     f30, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)

lbl_802E6BBC:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802E6BF8
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_802E6BF8
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2cc(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802E6BF8:
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

/**
 * @note Address: 0x802E6C48
 * @note Size: 0x28
 */
void StateWalkPath::cleanup(EnemyBase* enemy) { enemy->setAnimSpeed(30.0f); }
} // namespace KumaKochappy
} // namespace Game
