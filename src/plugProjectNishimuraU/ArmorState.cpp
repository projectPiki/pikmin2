#include "Game/Entities/Armor.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/rumble.h"
#include "Game/Entities/ItemBridge.h"
#include "Game/EnemyFunc.h"

namespace Game {
namespace Armor {

/**
 * @note Address: 0x80285ED8
 * @note Size: 0x4CC
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

/**
 * @note Address: 0x802863A4
 * @note Size: 0x5C
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->deathProcedure();
	enemy->disableEvent(0, EB_Cullable);
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->startMotion(ARMORANIM_Dead, nullptr);
}

/**
 * @note Address: 0x80286400
 * @note Size: 0x90
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* armor = OBJ(enemy);
	if (armor->mCurAnim->mIsPlaying) {
		u32 animType = armor->mCurAnim->mType;
		if (animType == KEYEVENT_2) {
			Vector3f armorPos = armor->getPosition();
			rumbleMgr->startRumble(RUMBLETYPE_Fixed9, armorPos, RUMBLEID_Both);
		} else if (animType == KEYEVENT_END) {
			armor->kill(nullptr);
		}
	}
}

/**
 * @note Address: 0x80286490
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x80286494
 * @note Size: 0x70
 */
void StateStay::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->hardConstraintOn();
	enemy->disableEvent(0, EB_LifegaugeVisible);
	enemy->disableEvent(0, EB_Animating);
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->startMotion(ARMORANIM_Appear, nullptr);
	enemy->stopMotion();
}

/**
 * @note Address: 0x80286504
 * @note Size: 0xA0
 */
void StateStay::exec(EnemyBase* enemy)
{
	Obj* armor = OBJ(enemy);
	armor->setBridgeSearch();
	f32 viewAngle  = CG_GENERALPARMS(armor).mViewAngle;
	f32 viewRadius = CG_GENERALPARMS(armor).mSightRadius;

	Creature* targetCreature = EnemyFunc::getNearestPikminOrNavi(armor, viewAngle, viewRadius, nullptr, nullptr, nullptr);

	if (targetCreature || armor->isBreakBridge()) {
		armor->mTargetCreature = targetCreature;
		transit(armor, ARMOR_Appear, nullptr);
	}
}

/**
 * @note Address: 0x802865A4
 * @note Size: 0x3C
 */
void StateStay::cleanup(EnemyBase* enemy)
{
	enemy->hardConstraintOff();
	enemy->enableEvent(0, EB_Animating);
}

/**
 * @note Address: 0x802865E0
 * @note Size: 0xB8
 */
void StateAppear::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* armor = OBJ(enemy);
	armor->lifeIncrement();
	armor->hardConstraintOn();
	armor->enableEvent(0, EB_LifegaugeVisible);
	armor->mTargetVelocity = Vector3f(0.0f);
	armor->setEmotionExcitement();
	armor->startMotion(ARMORANIM_Appear, nullptr);
	armor->createAppearEffect();

	Vector3f pos = armor->getPosition();
	rumbleMgr->startRumble(RUMBLETYPE_Fixed10, pos, RUMBLEID_Both);
}

/**
 * @note Address: 0x80286698
 * @note Size: 0xCC
 */
void StateAppear::exec(EnemyBase* enemy)
{
	Obj* armor = OBJ(enemy);
	if (armor->mCurAnim->mIsPlaying) {
		u32 animType = armor->mCurAnim->mType;
		if (animType == KEYEVENT_2) {
			Vector3f armorPos = armor->getPosition();
			rumbleMgr->startRumble(RUMBLETYPE_Fixed9, armorPos, RUMBLEID_Both);
		} else if (animType == KEYEVENT_END) {
			if (armor->mHealth <= 0.0f) {
				transit(armor, ARMOR_Dead, nullptr);
			} else {
				transit(armor, ARMOR_Move, nullptr);
			}
		}
	}
}

/**
 * @note Address: 0x80286764
 * @note Size: 0x24
 */
void StateAppear::cleanup(EnemyBase* enemy) { enemy->hardConstraintOff(); }

/**
 * @note Address: 0x80286788
 * @note Size: 0x60
 */
void StateDive::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* armor = OBJ(enemy);
	armor->hardConstraintOn();
	armor->mTargetVelocity = Vector3f(0.0f);
	armor->setEmotionCaution();
	armor->startMotion(ARMORANIM_Dive, nullptr);
	armor->createDisAppearEffect();
}

/**
 * @note Address: 0x802867E8
 * @note Size: 0x9C
 */
void StateDive::exec(EnemyBase* enemy)
{
	Obj* armor = OBJ(enemy);
	if (armor->mCurAnim->mIsPlaying) {
		u32 animType = armor->mCurAnim->mType;
		if (animType == KEYEVENT_2) {
			Vector3f armorPos = armor->getPosition();
			rumbleMgr->startRumble(RUMBLETYPE_Fixed10, armorPos, RUMBLEID_Both);
		} else if (animType == KEYEVENT_END) {
			transit(armor, ARMOR_Stay, nullptr);
		}
	}
}

/**
 * @note Address: 0x80286884
 * @note Size: 0x24
 */
void StateDive::cleanup(EnemyBase* enemy) { enemy->hardConstraintOff(); }

/**
 * @note Address: 0x802868A8
 * @note Size: 0x34
 */
void StateMove::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* armor        = OBJ(enemy);
	armor->mNextState = ARMOR_NULL;
	armor->startMotion(ARMORANIM_Move, nullptr);
}

/**
 * @note Address: 0x802868DC
 * @note Size: 0x4F8
 */
void StateMove::exec(EnemyBase* enemy)
{
	Obj* armor       = OBJ(enemy);
	Creature* target = EnemyFunc::getNearestPikminOrNavi(armor, CG_GENERALPARMS(armor).mViewAngle(), CG_GENERALPARMS(armor).mSightRadius(),
	                                                     nullptr, nullptr, nullptr);
	if (target) {
		armor->mTargetCreature = target;
		f32 angleDist          = armor->changeFaceDir2(target);

		armor->setTargetVelocity();

		if (armor->isTargetAttackable(target, angleDist, CG_GENERALPARMS(armor).mMaxAttackRange(),
		                              CG_GENERALPARMS(armor).mMaxAttackAngle())) {
			armor->mNextState = ARMOR_Attack2;
			armor->finishMotion();
		} else {
			Vector3f homePos = armor->mHomePosition;
			Vector3f pos     = armor->getPosition();
			f32 homeDist     = pos.distance(homePos);

			if (homeDist > CG_GENERALPARMS(armor).mTerritoryRadius()) {
				armor->mNextState = ARMOR_GoHome;
				armor->finishMotion();
			} else {
				Creature* newTarget = EnemyFunc::getNearestPikminOrNavi(
				    armor, CG_GENERALPARMS(armor).mMaxAttackAngle(), CG_GENERALPARMS(armor).mMaxAttackRange(), nullptr, nullptr, nullptr);
				if (newTarget) {
					armor->mNextState = ARMOR_Attack2;
					armor->finishMotion();
				}
			}
		}

	} else if (armor->isBreakBridge()) {
		armor->mNextState = armor->checkBreakOrMove();
		armor->finishMotion();
	} else {
		armor->mNextState = ARMOR_GoHome;
		armor->finishMotion();
	}

	if (armor->mHealth <= 0.0f) {
		transit(armor, ARMOR_Dead, nullptr);
		return;
	}

	if (EnemyFunc::isStartFlick(armor, true)) {
		transit(armor, ARMOR_Flick, nullptr);
		return;
	}

	if (armor->mCurAnim->mIsPlaying && armor->mCurAnim->mType == KEYEVENT_END) {
		transit(armor, armor->mNextState, nullptr);
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

/**
 * @note Address: 0x80286DD4
 * @note Size: 0x4
 */
void StateMove::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x80286DD8
 * @note Size: 0x34
 */
void StateMoveSide::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* armor        = OBJ(enemy);
	armor->mNextState = ARMOR_NULL;
	armor->startMotion(ARMORANIM_Move, nullptr);
}

/**
 * @note Address: 0x80286E0C
 * @note Size: 0x128
 */
void StateMoveSide::exec(EnemyBase* enemy)
{
	Obj* armor     = OBJ(enemy);
	f32 viewAngle  = CG_GENERALPARMS(armor).mViewAngle;
	f32 viewRadius = CG_GENERALPARMS(armor).mSightRadius;

	Creature* targetCreature = EnemyFunc::getNearestPikminOrNavi(armor, viewAngle, viewRadius, nullptr, nullptr, nullptr);

	if (targetCreature) {
		armor->mNextState = ARMOR_Move;
		armor->finishMotion();
	} else if (armor->isBreakBridge()) {
		if (armor->moveBridgeSide()) {
			armor->mNextState = ARMOR_MoveCentre;
			armor->finishMotion();
		}
	} else {
		armor->mNextState = ARMOR_GoHome;
		armor->finishMotion();
	}

	if (armor->mHealth <= 0.0f) {
		transit(armor, ARMOR_Dead, nullptr);
		return;
	}
	if (armor->mCurAnim->mIsPlaying) {
		u32 animType = armor->mCurAnim->mType;
		if (animType == KEYEVENT_END) {
			transit(armor, armor->mNextState, nullptr);
		}
	}
}

/**
 * @note Address: 0x80286F34
 * @note Size: 0x4
 */
void StateMoveSide::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x80286F38
 * @note Size: 0x34
 */
void StateMoveCentre::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* armor        = OBJ(enemy);
	armor->mNextState = ARMOR_NULL;
	armor->startMotion(ARMORANIM_Move, nullptr);
}

/**
 * @note Address: 0x80286F6C
 * @note Size: 0x128
 */
void StateMoveCentre::exec(EnemyBase* enemy)
{
	Obj* armor     = OBJ(enemy);
	f32 viewAngle  = CG_GENERALPARMS(armor).mViewAngle;
	f32 viewRadius = CG_GENERALPARMS(armor).mSightRadius;

	Creature* targetCreature = EnemyFunc::getNearestPikminOrNavi(armor, viewAngle, viewRadius, nullptr, nullptr, nullptr);
	if (targetCreature) {
		armor->mNextState = ARMOR_Move;
		armor->finishMotion();
	} else if (armor->isBreakBridge()) {
		if (armor->moveBridgeCentre()) {
			armor->mNextState = ARMOR_MoveTop;
			armor->finishMotion();
		}
	} else {
		armor->mNextState = ARMOR_GoHome;
		armor->finishMotion();
	}

	if (armor->mHealth <= 0.0f) {
		transit(armor, ARMOR_Dead, nullptr);
		return;
	}
	if (armor->mCurAnim->mIsPlaying) {
		u32 animType = armor->mCurAnim->mType;
		if (animType == KEYEVENT_END) {
			transit(armor, armor->mNextState, nullptr);
		}
	}
}

/**
 * @note Address: 0x80287094
 * @note Size: 0x4
 */
void StateMoveCentre::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x80287098
 * @note Size: 0x34
 */
void StateMoveTop::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* armor        = OBJ(enemy);
	armor->mNextState = ARMOR_NULL;
	armor->startMotion(ARMORANIM_Move, nullptr);
}

/**
 * @note Address: 0x802870CC
 * @note Size: 0x128
 */
void StateMoveTop::exec(EnemyBase* enemy)
{
	Obj* armor     = OBJ(enemy);
	f32 viewAngle  = CG_GENERALPARMS(armor).mViewAngle;
	f32 viewRadius = CG_GENERALPARMS(armor).mSightRadius;

	Creature* targetCreature = EnemyFunc::getNearestPikminOrNavi(armor, viewAngle, viewRadius, nullptr, nullptr, nullptr);
	if (targetCreature) {
		armor->mNextState = ARMOR_Move;
		armor->finishMotion();
	} else if (armor->isBreakBridge()) {
		if (armor->moveBridgeTop()) {
			armor->mNextState = ARMOR_Attack1;
			armor->finishMotion();
		}
	} else {
		armor->mNextState = ARMOR_GoHome;
		armor->finishMotion();
	}

	if (armor->mHealth <= 0.0f) {
		transit(armor, ARMOR_Dead, nullptr);
		return;
	}
	if (armor->mCurAnim->mIsPlaying) {
		u32 animType = armor->mCurAnim->mType;
		if (animType == KEYEVENT_END) {
			transit(armor, armor->mNextState, nullptr);
		}
	}
}

/**
 * @note Address: 0x802871F4
 * @note Size: 0x4
 */
void StateMoveTop::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802871F8
 * @note Size: 0x34
 */
void StateGoHome::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* armor        = OBJ(enemy);
	armor->mNextState = ARMOR_NULL;
	armor->startMotion(ARMORANIM_Move, nullptr);
}

/**
 * @note Address: 0x8028722C
 * @note Size: 0x21C
 */
void StateGoHome::exec(EnemyBase* enemy)
{
	Obj* armor       = OBJ(enemy);
	Vector3f pos     = armor->getPosition();
	Vector3f homePos = Vector3f(armor->mHomePosition);

	EnemyFunc::walkToTarget(armor, homePos, CG_GENERALPARMS(armor).mMoveSpeed.mValue, CG_GENERALPARMS(armor).mTurnSpeed.mValue,
	                        CG_GENERALPARMS(armor).mMaxTurnAngle.mValue);

	if (EnemyFunc::getNearestPikminOrNavi(armor, CG_GENERALPARMS(armor).mMaxAttackRange.mValue,
	                                      CG_GENERALPARMS(armor).mMaxAttackAngle.mValue, nullptr, nullptr, nullptr)) {
		armor->mNextState = ARMOR_Attack2;
		armor->finishMotion();
	} else {
		Vector3f armorHomePos = armor->mHomePosition;
		Vector3f armorPos     = armor->getPosition();

		f32 dist = armorPos.distance(armorHomePos);
		if (dist < CG_GENERALPARMS(armor).mHomeRadius.mValue) {
			armor->mNextState = ARMOR_Dive;
			armor->finishMotion();
		}
	}

	if (armor->mCurAnim->mIsPlaying && armor->mCurAnim->mType == KEYEVENT_END) {
		transit(armor, armor->mNextState, nullptr);
	}

	if (armor->mHealth <= 0.0f) {
		transit(armor, ARMOR_Dead, nullptr);
		return;
	}

	if (EnemyFunc::isStartFlick(armor, true)) {
		transit(armor, ARMOR_Flick, nullptr);
	}
}

/**
 * @note Address: 0x80287448
 * @note Size: 0x4
 */
void StateGoHome::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x8028744C
 * @note Size: 0x58
 */
void StateAttack1::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* armor             = OBJ(enemy);
	armor->mTargetVelocity = Vector3f(0.0f);
	armor->startMotion(ARMORANIM_Attack1, nullptr);
	armor->mNextState = ARMOR_NULL;
	armor->createBridgeEffect();
}

/**
 * @note Address: 0x802874A4
 * @note Size: 0x13C
 */
void StateAttack1::exec(EnemyBase* enemy)
{
	Obj* armor     = OBJ(enemy);
	f32 viewAngle  = CG_GENERALPARMS(armor).mViewAngle;
	f32 viewRadius = CG_GENERALPARMS(armor).mSightRadius;

	Creature* targetCreature = EnemyFunc::getNearestPikminOrNavi(armor, viewAngle, viewRadius, nullptr, nullptr, nullptr);
	if (targetCreature) {
		armor->mNextState = ARMOR_Move;
	} else if (armor->isBreakBridge()) {
		if (armor->moveBridgeTop()) {
			armor->mNextState = ARMOR_Attack1;
		} else {
			armor->mNextState = ARMOR_MoveTop;
		}
	} else {
		armor->mNextState = ARMOR_GoHome;
	}

	if (armor->mCurAnim->mIsPlaying) {
		u32 animType = armor->mCurAnim->mType;
		if (animType == KEYEVENT_2) {
			if (armor->isBreakBridge()) {
				armor->breakTargetBridge();
			}
		} else if (animType == KEYEVENT_END) {
			transit(armor, armor->mNextState, nullptr);
		}
	}
	if (armor->mHealth <= 0.0f) {
		transit(armor, ARMOR_Dead, nullptr);
		return;
	}
}

/**
 * @note Address: 0x802875E0
 * @note Size: 0x4
 */
void StateAttack1::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802875E4
 * @note Size: 0x40
 */
void StateAttack2::init(EnemyBase* enemy, StateArg* stateArg)
{
	OBJ(enemy)->mAttackLoopTime = 0.0f;
	enemy->mTargetVelocity      = Vector3f(0.0f);
	enemy->startMotion(ARMORANIM_Attack2, nullptr);
}

/**
 * @note Address: 0x80287624
 * @note Size: 0x1B8
 */
void StateAttack2::exec(EnemyBase* enemy)
{
	Obj* armor = OBJ(enemy);
	f32 frame  = armor->getMotionFrame();

	if (frame > 17.0f && frame < 27.0f) {
		armor->attackPikmin();
	}
	if (armor->mAttackLoopTime > CG_PROPERPARMS(armor).mAttackLoopTimer) {
		armor->finishMotion();
	}

	armor->mAttackLoopTime += sys->mDeltaTime;

	if (armor->mCurAnim->mIsPlaying) {
		if (armor->mCurAnim->mType == KEYEVENT_2) {
			armor->createAttackEffect();
		} else if (armor->mCurAnim->mType == KEYEVENT_3) {
			f32 attackRadius = CG_GENERALPARMS(armor).mAttackRadius;
			f32 attackAngle  = CG_GENERALPARMS(armor).mAttackHitAngle;
			f32 attackDamage = CG_GENERALPARMS(armor).mAttackDamage;
			EnemyFunc::attackNavi(armor, attackRadius, attackAngle, attackDamage, nullptr, nullptr);

			Vector3f armorPos = armor->getPosition();
			rumbleMgr->startRumble(RUMBLETYPE_Fixed9, armorPos, RUMBLEID_Both);

		} else if (armor->mCurAnim->mType == KEYEVENT_END) {
			if (armor->mHealth <= 0.0f) {
				transit(armor, ARMOR_Dead, nullptr);
				return;
			}
			if (armor->getSlotPikiNum()) {
				transit(armor, ARMOR_Eat, nullptr);
			} else {
				transit(armor, ARMOR_Fail, nullptr);
			}
		}
	}
}

/**
 * @note Address: 0x802877DC
 * @note Size: 0x4
 */
void StateAttack2::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802877E0
 * @note Size: 0x3C
 */
void StateEat::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->startMotion(ARMORANIM_Eat, nullptr);
}

/**
 * @note Address: 0x8028781C
 * @note Size: 0x98
 */
void StateEat::exec(EnemyBase* enemy)
{
	Obj* armor = OBJ(enemy);
	if (armor->mHealth <= 0.0f) {
		transit(armor, ARMOR_Dead, nullptr);
		return;
	}
	if (armor->mCurAnim->mIsPlaying) {
		if (armor->mCurAnim->mType == KEYEVENT_2) {
			armor->killSlotPiki();
		} else if (armor->mCurAnim->mType == KEYEVENT_END) {
			transit(armor, ARMOR_Move, nullptr);
		}
	}
}

/**
 * @note Address: 0x802878B4
 * @note Size: 0x4
 */
void StateEat::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802878B8
 * @note Size: 0x3C
 */
void StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->startMotion(ARMORANIM_Flick, nullptr);
}

/**
 * @note Address: 0x802878F4
 * @note Size: 0x144
 */
void StateFlick::exec(EnemyBase* enemy)
{
	Obj* armor = OBJ(enemy);

	if (armor->mHealth <= 0.0f) {
		transit(armor, ARMOR_Dead, nullptr);
		return;
	}

	if (armor->mCurAnim->mIsPlaying) {
		if (armor->mCurAnim->mType == KEYEVENT_2) {
			EnemyFunc::flickNearbyNavi(armor, CG_GENERALPARMS(armor).mShakeRange.mValue, CG_GENERALPARMS(armor).mShakeKnockback.mValue,
			                           CG_GENERALPARMS(armor).mShakeDamage.mValue, armor->getFaceDir(), nullptr);
			EnemyFunc::flickNearbyPikmin(armor, CG_GENERALPARMS(armor).mShakeRange.mValue, CG_GENERALPARMS(armor).mShakeKnockback.mValue,
			                             CG_GENERALPARMS(armor).mShakeDamage.mValue, armor->getFaceDir(), nullptr);
			EnemyFunc::flickStickPikmin(armor, CG_GENERALPARMS(armor).mShakeChance.mValue, CG_GENERALPARMS(armor).mShakeKnockback.mValue,
			                            CG_GENERALPARMS(armor).mShakeDamage.mValue, armor->getFaceDir(), nullptr);
			armor->mFlickTimer = 0.0f;

		} else if (armor->mCurAnim->mType == KEYEVENT_END) {
			transit(armor, ARMOR_Move, nullptr);
		}
	}
}

/**
 * @note Address: 0x80287A38
 * @note Size: 0x4
 */
void StateFlick::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x80287A3C
 * @note Size: 0x3C
 */
void StateFail::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->startMotion(ARMORANIM_AttackFail, nullptr);
}

/**
 * @note Address: 0x80287A78
 * @note Size: 0x80
 */
void StateFail::exec(EnemyBase* enemy)
{
	Obj* armor = OBJ(armor);
	if (armor->mHealth <= 0.0f) {
		transit(armor, ARMOR_Dead, nullptr);
		return;
	}

	if (armor->mCurAnim->mIsPlaying) {
		if (armor->mCurAnim->mType == KEYEVENT_END) {
			transit(armor, ARMOR_Move, nullptr);
		}
	}
}

/**
 * @note Address: 0x80287AF8
 * @note Size: 0x4
 */
void StateFail::cleanup(EnemyBase* enemy) { }

} // namespace Armor
} // namespace Game
