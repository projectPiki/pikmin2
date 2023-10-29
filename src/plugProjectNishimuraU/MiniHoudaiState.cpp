#include "Game/Entities/MiniHoudai.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "Game/EnemyFunc.h"
#include "nans.h"

namespace Game {
namespace MiniHoudai {

static const int unusedArray[] = { 0, 0, 0 };
static const char unusedName[] = "246-MiniHoudaiState";

/*
 * --INFO--
 * Address:	802E7F4C
 * Size:	0003D8
 */
void FSM::init(EnemyBase* enemy)
{
	create(MINIHOUDAI_StateCount);
	registerState(new StateDead);
	registerState(new StateRebirth);
	registerState(new StateLost);
	registerState(new StateAttack);
	registerState(new StateFlick);
	registerState(new StateTurn);
	registerState(new StateTurnHome);
	registerState(new StateTurnPath);
	registerState(new StateWalk);
	registerState(new StateWalkHome);
	registerState(new StateWalkPath);
}

/*
 * --INFO--
 * Address:	802E8324
 * Size:	000058
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* mini = OBJ(enemy);
	mini->deathProcedure();
	mini->mTargetVelocity = Vector3f(0.0f);
	mini->startMotion(MINIHOUDAIANIM_Dead, nullptr);
	mini->createDeadLightEffect();
}

/*
 * --INFO--
 * Address:	802E837C
 * Size:	00010C
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* mini = OBJ(enemy);
	if (mini->mCurAnim->mIsPlaying) {
		if (mini->mCurAnim->mType == KEYEVENT_2) {
			mini->createDeadBombEmitEffect();
			mini->createDownEffect(1.0f);
			mini->getJAIObject()->startSound(PSSE_EN_MINIHOU_BOMB, 0);

			Vector3f pos = mini->getPosition();
			cameraMgr->startVibration(28, pos, 2);
			rumbleMgr->startRumble(11, pos, 2);

		} else if (mini->mCurAnim->mType == KEYEVENT_3) {
			mini->createDownEffect(0.75f);

		} else if (mini->mCurAnim->mType == KEYEVENT_END) {
			mini->kill(nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	802E8488
 * Size:	000004
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802E848C
 * Size:	000058
 */
void StateRebirth::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* mini        = OBJ(enemy);
	mini->mNextState = MINIHOUDAI_NULL;
	mini->disableEvent(0, EB_NoInterrupt);
	mini->mTargetCreature = nullptr;
	mini->mTargetVelocity = Vector3f(0.0f);
	mini->startMotion(MINIHOUDAIANIM_Rebirth, nullptr);
}

/*
 * --INFO--
 * Address:	802E84E4
 * Size:	0003A8
 */
void StateRebirth::exec(EnemyBase* enemy)
{
	Obj* mini = OBJ(enemy);

	if (mini->mCurAnim->mIsPlaying) {
		if (mini->mCurAnim->mType == KEYEVENT_2) {
			EnemyFunc::flickStickPikmin(mini, CG_PARMS(mini)->mGeneral.mShakeChance.mValue, CG_PARMS(mini)->mGeneral.mShakeKnockback.mValue,
			                            CG_PARMS(mini)->mGeneral.mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);
			EnemyFunc::flickNearbyPikmin(mini, CG_PARMS(mini)->mGeneral.mShakeRange.mValue, CG_PARMS(mini)->mGeneral.mShakeKnockback.mValue,
			                             CG_PARMS(mini)->mGeneral.mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);
			EnemyFunc::flickNearbyNavi(mini, CG_PARMS(mini)->mGeneral.mShakeRange.mValue, CG_PARMS(mini)->mGeneral.mShakeKnockback.mValue,
			                           CG_PARMS(mini)->mGeneral.mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);
			mini->mFlickTimer = 0.0f;
			mini->enableEvent(0, EB_NoInterrupt);

		} else if (mini->mCurAnim->mType == KEYEVENT_3) {
			mini->disableEvent(0, EB_NoInterrupt);
			mini->createDownEffect(0.75f);

		} else if (mini->mCurAnim->mType == KEYEVENT_END) {
			if (mini->mHealth <= 0.0f) {
				transit(mini, MINIHOUDAI_Dead, nullptr);
				return;
			}

			if (EnemyFunc::isStartFlick(mini, false)) {
				transit(mini, MINIHOUDAI_Flick, nullptr);
				return;
			}

			if (mini->isAttackableTarget()) {
				transit(mini, MINIHOUDAI_Attack, nullptr);
				return;
			}

			Creature* target = mini->getSearchedTarget();
			if (target) {
				Vector3f targetPos = target->getPosition();
				Vector3f pos       = mini->getPosition();
				f32 angle          = angXZ(targetPos, pos);

				f32 dist = angDist(angle, mini->getFaceDir());

				if (FABS(dist) <= PI * (DEG2RAD * CG_PARMS(mini)->mGeneral.mMaxAttackAngle.mValue)) {
					transit(mini, MINIHOUDAI_Walk, nullptr);
					return;
				}

				transit(mini, MINIHOUDAI_Turn, nullptr);
				return;
			}

			Vector3f pathPos = mini->mWalkTargetPosition;
			Vector3f pos     = mini->getPosition();

			f32 angle = angXZ(pathPos.x, pathPos.z, pos);

			f32 dist = angDist(angle, mini->getFaceDir());
			if (FABS(dist) <= QUARTER_PI) {
				transit(mini, MINIHOUDAI_WalkPath, nullptr);
			} else {
				transit(mini, MINIHOUDAI_TurnPath, nullptr);
			}
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
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	lwz      r5, 0x188(r4)
	mr       r30, r3
	mr       r31, r4
	lbz      r0, 0x24(r5)
	cmplwi   r0, 0
	beq      lbl_802E8864
	lwz      r0, 0x1c(r5)
	cmplwi   r0, 2
	bne      lbl_802E85A4
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f4, lbl_8051CF54@sda21(r2)
	li       r4, 0
	lfs      f1, 0x53c(r5)
	lfs      f2, 0x4c4(r5)
	lfs      f3, 0x4ec(r5)
	bl
"flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f4, lbl_8051CF54@sda21(r2)
	li       r4, 0
	lfs      f1, 0x514(r5)
	lfs      f2, 0x4c4(r5)
	lfs      f3, 0x4ec(r5)
	bl
"flickNearbyPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f4, lbl_8051CF54@sda21(r2)
	li       r4, 0
	lfs      f1, 0x514(r5)
	lfs      f2, 0x4c4(r5)
	lfs      f3, 0x4ec(r5)
	bl
"flickNearbyNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Navi>"
	lfs      f0, lbl_8051CF48@sda21(r2)
	stfs     f0, 0x20c(r31)
	lwz      r0, 0x1e0(r31)
	oris     r0, r0, 0x20
	stw      r0, 0x1e0(r31)
	b        lbl_802E8864

lbl_802E85A4:
	cmplwi   r0, 3
	bne      lbl_802E85C8
	lwz      r0, 0x1e0(r31)
	mr       r3, r31
	lfs      f1, lbl_8051CF50@sda21(r2)
	rlwinm   r0, r0, 0, 0xb, 9
	stw      r0, 0x1e0(r31)
	bl       createDownEffect__Q34Game10MiniHoudai3ObjFf
	b        lbl_802E8864

lbl_802E85C8:
	cmplwi   r0, 0x3e8
	bne      lbl_802E8864
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051CF48@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802E8600
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E8864

lbl_802E8600:
	mr       r3, r31
	li       r4, 0
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E8638
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 4
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E8864

lbl_802E8638:
	mr       r3, r31
	bl       isAttackableTarget__Q34Game10MiniHoudai3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E866C
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 3
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E8864

lbl_802E866C:
	mr       r3, r31
	bl       getSearchedTarget__Q34Game10MiniHoudai3ObjFv
	cmplwi   r3, 0
	beq      lbl_802E8794
	mr       r4, r3
	addi     r3, r1, 0x38
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f2, 0x38(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x44
	lfs      f1, 0x3c(r1)
	lfs      f0, 0x40(r1)
	lwz      r12, 8(r12)
	stfs     f2, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x44(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x4c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x20(r1)
	lfs      f0, 0x28(r1)
	lfs      f4, 0x48(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x2c(r1)
	stfs     f4, 0x30(r1)
	stfs     f3, 0x34(r1)
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
	fabs     f2, f1
	lfs      f0, lbl_8051CF5C@sda21(r2)
	lfs      f3, 0x58c(r3)
	lfs      f1, lbl_8051CF58@sda21(r2)
	frsp     f2, f2
	fmuls    f0, f0, f3
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_802E8770
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 8
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E8864

lbl_802E8770:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 5
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E8864

lbl_802E8794:
	mr       r4, r31
	addi     r3, r1, 0x14
	lwz      r12, 0(r31)
	lfs      f31, 0x2e4(r31)
	lwz      r12, 8(r12)
	lfs      f30, 0x2ec(r31)
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
	fabs     f1, f1
	lfs      f0, lbl_8051CF60@sda21(r2)
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802E8844
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0xa
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E8864

lbl_802E8844:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 7
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802E8864:
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	lwz      r31, 0x5c(r1)
	lwz      r0, 0x84(r1)
	lwz      r30, 0x58(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	802E888C
 * Size:	000010
 */
void StateRebirth::cleanup(EnemyBase* enemy) { enemy->disableEvent(0, EB_NoInterrupt); }

/*
 * --INFO--
 * Address:	802E889C
 * Size:	00004C
 */
void StateLost::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* mini             = OBJ(enemy);
	mini->mNextState      = MINIHOUDAI_NULL;
	mini->mTargetCreature = nullptr;
	mini->mTargetVelocity = Vector3f(0.0f);
	mini->startMotion(MINIHOUDAIANIM_Search, nullptr);
}

/*
 * --INFO--
 * Address:	802E88E8
 * Size:	00050C
 */
void StateLost::exec(EnemyBase* enemy)
{
	Obj* mini = OBJ(enemy);
	if (mini->mCurAnim->mIsPlaying && mini->mCurAnim->mType == KEYEVENT_END) {
		if (mini->mHealth <= 0.0f) {
			transit(mini, MINIHOUDAI_Dead, nullptr);
			return;
		}

		if (EnemyFunc::isStartFlick(mini, false)) {
			transit(mini, MINIHOUDAI_Flick, nullptr);
			return;
		}

		Vector3f miniPos = mini->getPosition();
		Vector3f homePos = mini->mHomePosition;

		f32 homeDist = sqrDistanceXZ(miniPos, homePos);
		if (homeDist > SQUARE(CG_PARMS(mini)->mGeneral.mTerritoryRadius.mValue)) {
			Vector3f pos = mini->getPosition();
			f32 angle    = angXZ(homePos.x, homePos.z, pos);
			f32 dist     = angDist(angle, mini->getFaceDir());

			if (FABS(dist) <= QUARTER_PI) {
				transit(mini, MINIHOUDAI_WalkHome, nullptr);
				return;
			} else {
				transit(mini, MINIHOUDAI_TurnHome, nullptr);
				return;
			}
		}

		if (mini->isAttackableTarget()) {
			transit(mini, MINIHOUDAI_Attack, nullptr);
			return;
		}

		Creature* target = mini->getSearchedTarget();
		if (target) {
			Vector3f targetPos = target->getPosition();
			Vector3f pos       = mini->getPosition();
			f32 angle          = angXZ(targetPos, pos);

			f32 dist = angDist(angle, mini->getFaceDir());

			if (FABS(dist) <= PI * (DEG2RAD * CG_PARMS(mini)->mGeneral.mMaxAttackAngle.mValue)) {
				transit(mini, MINIHOUDAI_Walk, nullptr);
				return;
			}

			transit(mini, MINIHOUDAI_Turn, nullptr);
			return;
		}

		if (homeDist < SQUARE(CG_PARMS(mini)->mGeneral.mHomeRadius.mValue)) {
			Vector3f pathPos = mini->mWalkTargetPosition;
			Vector3f pos     = mini->getPosition();

			f32 angle = angXZ(pathPos.x, pathPos.z, pos);

			f32 dist = angDist(angle, mini->getFaceDir());
			if (FABS(dist) <= QUARTER_PI) {
				transit(mini, MINIHOUDAI_WalkPath, nullptr);
				return;
			} else {
				transit(mini, MINIHOUDAI_TurnPath, nullptr);
				return;
			}
		}

		Vector3f pos = mini->getPosition();

		f32 angle = angXZ(homePos.x, homePos.z, pos);

		f32 dist = angDist(angle, mini->getFaceDir());
		if (FABS(dist) <= QUARTER_PI) {
			transit(mini, MINIHOUDAI_WalkHome, nullptr);
			return;
		} else {
			transit(mini, MINIHOUDAI_TurnHome, nullptr);
			return;
		}
	}
	/*
	stwu     r1, -0xd0(r1)
	mflr     r0
	stw      r0, 0xd4(r1)
	stfd     f31, 0xc0(r1)
	psq_st   f31, 200(r1), 0, qr0
	stfd     f30, 0xb0(r1)
	psq_st   f30, 184(r1), 0, qr0
	stfd     f29, 0xa0(r1)
	psq_st   f29, 168(r1), 0, qr0
	stw      r31, 0x9c(r1)
	stw      r30, 0x98(r1)
	lwz      r5, 0x188(r4)
	mr       r30, r3
	mr       r31, r4
	lbz      r0, 0x24(r5)
	cmplwi   r0, 0
	beq      lbl_802E8DC4
	lwz      r0, 0x1c(r5)
	cmplwi   r0, 0x3e8
	bne      lbl_802E8DC4
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051CF48@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802E8968
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E8DC4

lbl_802E8968:
	mr       r3, r31
	li       r4, 0
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E89A0
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 4
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E8DC4

lbl_802E89A0:
	mr       r4, r31
	addi     r3, r1, 0x80
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f29, 0x1a0(r31)
	lfs      f0, 0x88(r1)
	lwz      r3, 0xc0(r31)
	fsubs    f2, f0, f29
	lfs      f30, 0x198(r31)
	lfs      f1, 0x80(r1)
	lfs      f0, 0x35c(r3)
	fsubs    f3, f1, f30
	fmuls    f1, f2, f2
	fmuls    f0, f0, f0
	fmadds   f31, f3, f3, f1
	fcmpo    cr0, f31, f0
	ble      lbl_802E8AB8
	mr       r4, r31
	addi     r3, r1, 0x74
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f4, 0x74(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x7c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x78(r1)
	fsubs    f1, f30, f4
	fsubs    f2, f29, f0
	stfs     f4, 0x68(r1)
	stfs     f3, 0x6c(r1)
	stfs     f0, 0x70(r1)
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
	fabs     f1, f1
	lfs      f0, lbl_8051CF60@sda21(r2)
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802E8A94
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 9
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E8DC4

lbl_802E8A94:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 6
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E8DC4

lbl_802E8AB8:
	mr       r3, r31
	bl       isAttackableTarget__Q34Game10MiniHoudai3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E8AEC
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 3
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E8DC4

lbl_802E8AEC:
	mr       r3, r31
	bl       getSearchedTarget__Q34Game10MiniHoudai3ObjFv
	cmplwi   r3, 0
	beq      lbl_802E8C14
	mr       r4, r3
	addi     r3, r1, 0x50
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f2, 0x50(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x5c
	lfs      f1, 0x54(r1)
	lfs      f0, 0x58(r1)
	lwz      r12, 8(r12)
	stfs     f2, 0x38(r1)
	stfs     f1, 0x3c(r1)
	stfs     f0, 0x40(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x5c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x64(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x38(r1)
	lfs      f0, 0x40(r1)
	lfs      f4, 0x60(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x44(r1)
	stfs     f4, 0x48(r1)
	stfs     f3, 0x4c(r1)
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
	fabs     f2, f1
	lfs      f0, lbl_8051CF5C@sda21(r2)
	lfs      f3, 0x58c(r3)
	lfs      f1, lbl_8051CF58@sda21(r2)
	frsp     f2, f2
	fmuls    f0, f0, f3
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_802E8BF0
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 8
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E8DC4

lbl_802E8BF0:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 5
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E8DC4

lbl_802E8C14:
	lwz      r3, 0xc0(r31)
	lfs      f0, 0x384(r3)
	fmuls    f0, f0, f0
	fcmpo    cr0, f31, f0
	bge      lbl_802E8CFC
	mr       r4, r31
	addi     r3, r1, 0x2c
	lwz      r12, 0(r31)
	lfs      f29, 0x2e4(r31)
	lwz      r12, 8(r12)
	lfs      f30, 0x2ec(r31)
	mtctr    r12
	bctrl
	lfs      f4, 0x2c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x34(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x30(r1)
	fsubs    f1, f29, f4
	fsubs    f2, f30, f0
	stfs     f4, 0x20(r1)
	stfs     f3, 0x24(r1)
	stfs     f0, 0x28(r1)
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
	fabs     f1, f1
	lfs      f0, lbl_8051CF60@sda21(r2)
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802E8CD8
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0xa
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E8DC4

lbl_802E8CD8:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 7
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E8DC4

lbl_802E8CFC:
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
	fsubs    f1, f30, f4
	fsubs    f2, f29, f0
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
	fabs     f1, f1
	lfs      f0, lbl_8051CF60@sda21(r2)
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802E8DA4
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 9
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E8DC4

lbl_802E8DA4:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 6
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802E8DC4:
	psq_l    f31, 200(r1), 0, qr0
	lfd      f31, 0xc0(r1)
	psq_l    f30, 184(r1), 0, qr0
	lfd      f30, 0xb0(r1)
	psq_l    f29, 168(r1), 0, qr0
	lfd      f29, 0xa0(r1)
	lwz      r31, 0x9c(r1)
	lwz      r0, 0xd4(r1)
	lwz      r30, 0x98(r1)
	mtlr     r0
	addi     r1, r1, 0xd0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802E8DF4
 * Size:	000004
 */
void StateLost::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802E8DF8
 * Size:	000060
 */
void StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* mini               = OBJ(enemy);
	mini->mNextState        = MINIHOUDAI_NULL;
	mini->_2CC              = 0.0f;
	mini->mHealthGaugeTimer = 0.0f;
	mini->mTargetVelocity   = Vector3f(0.0f);
	mini->setEmotionExcitement();
	mini->startMotion(MINIHOUDAIANIM_Attack, nullptr);
}

/*
 * --INFO--
 * Address:	802E8E58
 * Size:	0006CC
 */
void StateAttack::exec(EnemyBase* enemy)
{
	Obj* mini = OBJ(enemy);
	/*
	stwu     r1, -0xd0(r1)
	mflr     r0
	stw      r0, 0xd4(r1)
	stfd     f31, 0xc0(r1)
	psq_st   f31, 200(r1), 0, qr0
	stfd     f30, 0xb0(r1)
	psq_st   f30, 184(r1), 0, qr0
	stfd     f29, 0xa0(r1)
	psq_st   f29, 168(r1), 0, qr0
	stw      r31, 0x9c(r1)
	stw      r30, 0x98(r1)
	mr       r31, r4
	mr       r30, r3
	mr       r3, r31
	bl       isStopMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E8F08
	mr       r3, r31
	bl       isFinishShotGun__Q34Game10MiniHoudai3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E8EDC
	mr       r3, r31
	bl       isShotGunLockOn__Q34Game10MiniHoudai3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E8F08
	lfs      f1, 0x2cc(r31)
	lfs      f0, lbl_8051CF48@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802E8F08
	stfs     f0, 0x2cc(r31)
	mr       r3, r31
	bl       startMotion__Q24Game9EnemyBaseFv
	b        lbl_802E8F08

lbl_802E8EDC:
	mr       r3, r31
	bl       isShotGunLockOn__Q34Game10MiniHoudai3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E8F08
	lfs      f1, 0x2cc(r31)
	lfs      f0, lbl_8051CF48@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_802E8F08
	stfs     f0, 0x2cc(r31)
	mr       r3, r31
	bl       startMotion__Q24Game9EnemyBaseFv

lbl_802E8F08:
	mr       r3, r31
	bl       isShotGunRotation__Q34Game10MiniHoudai3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E8F20
	mr       r3, r31
	bl       setShotGunTargetPosition__Q34Game10MiniHoudai3ObjFv

lbl_802E8F20:
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x2cc(r31)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_8051CF48@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0x2cc(r31)
	lfs      f1, 0x200(r31)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802E8F6C
	mr       r3, r31
	bl       isStopMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E8F60
	mr       r3, r31
	bl       startMotion__Q24Game9EnemyBaseFv

lbl_802E8F60:
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802E8FA0

lbl_802E8F6C:
	mr       r3, r31
	li       r4, 0
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E8FA0
	mr       r3, r31
	bl       isStopMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E8F98
	mr       r3, r31
	bl       startMotion__Q24Game9EnemyBaseFv

lbl_802E8F98:
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_802E8FA0:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802E94F4
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 2
	bne      lbl_802E8FE0
	lfs      f0, lbl_8051CF48@sda21(r2)
	mr       r3, r31
	stfs     f0, 0x2cc(r31)
	bl       stopMotion__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       startShotGunRotation__Q34Game10MiniHoudai3ObjFv
	mr       r3, r31
	bl       startChargeEffect__Q34Game10MiniHoudai3ObjFv
	b        lbl_802E94F4

lbl_802E8FE0:
	cmplwi   r0, 3
	bne      lbl_802E8FFC
	mr       r3, r31
	bl       createSmokeLargeEffect__Q34Game10MiniHoudai3ObjFv
	mr       r3, r31
	bl       finishChargeEffect__Q34Game10MiniHoudai3ObjFv
	b        lbl_802E94F4

lbl_802E8FFC:
	cmplwi   r0, 4
	bne      lbl_802E9034
	mr       r3, r31
	bl       isFinishMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E9028
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051CF48@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	beq      lbl_802E94F4

lbl_802E9028:
	mr       r3, r31
	bl       emitShotGun__Q34Game10MiniHoudai3ObjFv
	b        lbl_802E94F4

lbl_802E9034:
	cmplwi   r0, 5
	bne      lbl_802E9058
	lfs      f0, lbl_8051CF48@sda21(r2)
	mr       r3, r31
	stfs     f0, 0x2cc(r31)
	bl       stopMotion__Q24Game9EnemyBaseFv
	mr       r3, r31
	bl       finishShotGunRotation__Q34Game10MiniHoudai3ObjFv
	b        lbl_802E94F4

lbl_802E9058:
	cmplwi   r0, 0x3e8
	bne      lbl_802E94F4
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051CF48@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802E9098
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E94F4

lbl_802E9098:
	mr       r3, r31
	li       r4, 0
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E90D0
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 4
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E94F4

lbl_802E90D0:
	mr       r4, r31
	addi     r3, r1, 0x80
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f29, 0x1a0(r31)
	lfs      f0, 0x88(r1)
	lwz      r3, 0xc0(r31)
	fsubs    f2, f0, f29
	lfs      f30, 0x198(r31)
	lfs      f1, 0x80(r1)
	lfs      f0, 0x35c(r3)
	fsubs    f3, f1, f30
	fmuls    f1, f2, f2
	fmuls    f0, f0, f0
	fmadds   f31, f3, f3, f1
	fcmpo    cr0, f31, f0
	ble      lbl_802E91E8
	mr       r4, r31
	addi     r3, r1, 0x74
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f4, 0x74(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x7c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x78(r1)
	fsubs    f1, f30, f4
	fsubs    f2, f29, f0
	stfs     f4, 0x68(r1)
	stfs     f3, 0x6c(r1)
	stfs     f0, 0x70(r1)
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
	fabs     f1, f1
	lfs      f0, lbl_8051CF60@sda21(r2)
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802E91C4
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 9
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E94F4

lbl_802E91C4:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 6
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E94F4

lbl_802E91E8:
	mr       r3, r31
	bl       isAttackableTarget__Q34Game10MiniHoudai3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E921C
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 3
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E94F4

lbl_802E921C:
	mr       r3, r31
	bl       getSearchedTarget__Q34Game10MiniHoudai3ObjFv
	cmplwi   r3, 0
	beq      lbl_802E9344
	mr       r4, r3
	addi     r3, r1, 0x50
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f2, 0x50(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x5c
	lfs      f1, 0x54(r1)
	lfs      f0, 0x58(r1)
	lwz      r12, 8(r12)
	stfs     f2, 0x38(r1)
	stfs     f1, 0x3c(r1)
	stfs     f0, 0x40(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x5c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x64(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x38(r1)
	lfs      f0, 0x40(r1)
	lfs      f4, 0x60(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x44(r1)
	stfs     f4, 0x48(r1)
	stfs     f3, 0x4c(r1)
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
	fabs     f2, f1
	lfs      f0, lbl_8051CF5C@sda21(r2)
	lfs      f3, 0x58c(r3)
	lfs      f1, lbl_8051CF58@sda21(r2)
	frsp     f2, f2
	fmuls    f0, f0, f3
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_802E9320
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 8
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E94F4

lbl_802E9320:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 5
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E94F4

lbl_802E9344:
	lwz      r3, 0xc0(r31)
	lfs      f0, 0x384(r3)
	fmuls    f0, f0, f0
	fcmpo    cr0, f31, f0
	bge      lbl_802E942C
	mr       r4, r31
	addi     r3, r1, 0x2c
	lwz      r12, 0(r31)
	lfs      f29, 0x2e4(r31)
	lwz      r12, 8(r12)
	lfs      f30, 0x2ec(r31)
	mtctr    r12
	bctrl
	lfs      f4, 0x2c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x34(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x30(r1)
	fsubs    f1, f29, f4
	fsubs    f2, f30, f0
	stfs     f4, 0x20(r1)
	stfs     f3, 0x24(r1)
	stfs     f0, 0x28(r1)
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
	fabs     f1, f1
	lfs      f0, lbl_8051CF60@sda21(r2)
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802E9408
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0xa
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E94F4

lbl_802E9408:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 7
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E94F4

lbl_802E942C:
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
	fsubs    f1, f30, f4
	fsubs    f2, f29, f0
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
	fabs     f1, f1
	lfs      f0, lbl_8051CF60@sda21(r2)
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802E94D4
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 9
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E94F4

lbl_802E94D4:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 6
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802E94F4:
	psq_l    f31, 200(r1), 0, qr0
	lfd      f31, 0xc0(r1)
	psq_l    f30, 184(r1), 0, qr0
	lfd      f30, 0xb0(r1)
	psq_l    f29, 168(r1), 0, qr0
	lfd      f29, 0xa0(r1)
	lwz      r31, 0x9c(r1)
	lwz      r0, 0xd4(r1)
	lwz      r30, 0x98(r1)
	mtlr     r0
	addi     r1, r1, 0xd0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802E9524
 * Size:	000024
 */
void StateAttack::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/*
 * --INFO--
 * Address:	802E9548
 * Size:	000068
 */
void StateFlick::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* mini               = OBJ(enemy);
	mini->mNextState        = MINIHOUDAI_NULL;
	mini->mHealthGaugeTimer = 0.0f;
	mini->mTargetVelocity   = Vector3f(0.0f);
	mini->setEmotionExcitement();
	mini->startMotion(MINIHOUDAIANIM_Flick, nullptr);
	mini->setAnimSpeed(45.0f);
}

/*
 * --INFO--
 * Address:	802E95B0
 * Size:	000544
 */
void StateFlick::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0xd0(r1)
	mflr     r0
	stw      r0, 0xd4(r1)
	stfd     f31, 0xc0(r1)
	psq_st   f31, 200(r1), 0, qr0
	stfd     f30, 0xb0(r1)
	psq_st   f30, 184(r1), 0, qr0
	stfd     f29, 0xa0(r1)
	psq_st   f29, 168(r1), 0, qr0
	stw      r31, 0x9c(r1)
	stw      r30, 0x98(r1)
	lwz      r5, 0x188(r4)
	mr       r30, r3
	mr       r31, r4
	lbz      r0, 0x24(r5)
	cmplwi   r0, 0
	beq      lbl_802E9AC4
	lwz      r0, 0x1c(r5)
	cmplwi   r0, 2
	bne      lbl_802E966C
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f4, lbl_8051CF54@sda21(r2)
	li       r4, 0
	lfs      f1, 0x53c(r5)
	lfs      f2, 0x4c4(r5)
	lfs      f3, 0x4ec(r5)
	bl
"flickStickPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f4, lbl_8051CF54@sda21(r2)
	li       r4, 0
	lfs      f1, 0x514(r5)
	lfs      f2, 0x4c4(r5)
	lfs      f3, 0x4ec(r5)
	bl
"flickNearbyPikmin__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Piki>"
	lwz      r5, 0xc0(r31)
	mr       r3, r31
	lfs      f4, lbl_8051CF54@sda21(r2)
	li       r4, 0
	lfs      f1, 0x514(r5)
	lfs      f2, 0x4c4(r5)
	lfs      f3, 0x4ec(r5)
	bl
"flickNearbyNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffffP23Condition<Q24Game4Navi>"
	lfs      f0, lbl_8051CF48@sda21(r2)
	stfs     f0, 0x20c(r31)
	b        lbl_802E9AC4

lbl_802E966C:
	cmplwi   r0, 0x3e8
	bne      lbl_802E9AC4
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051CF48@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802E96A4
	lwz      r12, 0(r3)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E9AC4

lbl_802E96A4:
	lwz      r12, 0(r4)
	addi     r3, r1, 0x80
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f29, 0x1a0(r31)
	lfs      f0, 0x88(r1)
	lwz      r3, 0xc0(r31)
	fsubs    f2, f0, f29
	lfs      f30, 0x198(r31)
	lfs      f1, 0x80(r1)
	lfs      f0, 0x35c(r3)
	fsubs    f3, f1, f30
	fmuls    f1, f2, f2
	fmuls    f0, f0, f0
	fmadds   f31, f3, f3, f1
	fcmpo    cr0, f31, f0
	ble      lbl_802E97B8
	mr       r4, r31
	addi     r3, r1, 0x74
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f4, 0x74(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x7c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x78(r1)
	fsubs    f1, f30, f4
	fsubs    f2, f29, f0
	stfs     f4, 0x68(r1)
	stfs     f3, 0x6c(r1)
	stfs     f0, 0x70(r1)
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
	fabs     f1, f1
	lfs      f0, lbl_8051CF60@sda21(r2)
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802E9794
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 9
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E9AC4

lbl_802E9794:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 6
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E9AC4

lbl_802E97B8:
	mr       r3, r31
	bl       isAttackableTarget__Q34Game10MiniHoudai3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E97EC
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 3
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E9AC4

lbl_802E97EC:
	mr       r3, r31
	bl       getSearchedTarget__Q34Game10MiniHoudai3ObjFv
	cmplwi   r3, 0
	beq      lbl_802E9914
	mr       r4, r3
	addi     r3, r1, 0x50
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f2, 0x50(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x5c
	lfs      f1, 0x54(r1)
	lfs      f0, 0x58(r1)
	lwz      r12, 8(r12)
	stfs     f2, 0x38(r1)
	stfs     f1, 0x3c(r1)
	stfs     f0, 0x40(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x5c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x64(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x38(r1)
	lfs      f0, 0x40(r1)
	lfs      f4, 0x60(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x44(r1)
	stfs     f4, 0x48(r1)
	stfs     f3, 0x4c(r1)
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
	fabs     f2, f1
	lfs      f0, lbl_8051CF5C@sda21(r2)
	lfs      f3, 0x58c(r3)
	lfs      f1, lbl_8051CF58@sda21(r2)
	frsp     f2, f2
	fmuls    f0, f0, f3
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_802E98F0
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 8
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E9AC4

lbl_802E98F0:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 5
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E9AC4

lbl_802E9914:
	lwz      r3, 0xc0(r31)
	lfs      f0, 0x384(r3)
	fmuls    f0, f0, f0
	fcmpo    cr0, f31, f0
	bge      lbl_802E99FC
	mr       r4, r31
	addi     r3, r1, 0x2c
	lwz      r12, 0(r31)
	lfs      f29, 0x2e4(r31)
	lwz      r12, 8(r12)
	lfs      f30, 0x2ec(r31)
	mtctr    r12
	bctrl
	lfs      f4, 0x2c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x34(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x30(r1)
	fsubs    f1, f29, f4
	fsubs    f2, f30, f0
	stfs     f4, 0x20(r1)
	stfs     f3, 0x24(r1)
	stfs     f0, 0x28(r1)
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
	fabs     f1, f1
	lfs      f0, lbl_8051CF60@sda21(r2)
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802E99D8
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0xa
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E9AC4

lbl_802E99D8:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 7
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E9AC4

lbl_802E99FC:
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
	fsubs    f1, f30, f4
	fsubs    f2, f29, f0
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
	fabs     f1, f1
	lfs      f0, lbl_8051CF60@sda21(r2)
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802E9AA4
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 9
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802E9AC4

lbl_802E9AA4:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 6
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802E9AC4:
	psq_l    f31, 200(r1), 0, qr0
	lfd      f31, 0xc0(r1)
	psq_l    f30, 184(r1), 0, qr0
	lfd      f30, 0xb0(r1)
	psq_l    f29, 168(r1), 0, qr0
	lfd      f29, 0xa0(r1)
	lwz      r31, 0x9c(r1)
	lwz      r0, 0xd4(r1)
	lwz      r30, 0x98(r1)
	mtlr     r0
	addi     r1, r1, 0xd0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802E9AF4
 * Size:	00003C
 */
void StateFlick::cleanup(EnemyBase* enemy)
{
	enemy->setEmotionCaution();
	enemy->setAnimSpeed(30.0f);
}

/*
 * --INFO--
 * Address:	802E9B30
 * Size:	00005C
 */
void StateTurn::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* mini             = OBJ(enemy);
	mini->mUpdateTimer    = 0.0f;
	mini->mNextState      = MINIHOUDAI_NULL;
	mini->mTargetVelocity = Vector3f(0.0f);
	mini->setEmotionExcitement();
	mini->startMotion(MINIHOUDAIANIM_Turn, nullptr);
}

/*
 * --INFO--
 * Address:	802E9B8C
 * Size:	0006AC
 */
void StateTurn::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x140(r1)
	mflr     r0
	stw      r0, 0x144(r1)
	stfd     f31, 0x130(r1)
	psq_st   f31, 312(r1), 0, qr0
	stfd     f30, 0x120(r1)
	psq_st   f30, 296(r1), 0, qr0
	stfd     f29, 0x110(r1)
	psq_st   f29, 280(r1), 0, qr0
	stfd     f28, 0x100(r1)
	psq_st   f28, 264(r1), 0, qr0
	stfd     f27, 0xf0(r1)
	psq_st   f27, 248(r1), 0, qr0
	stfd     f26, 0xe0(r1)
	psq_st   f26, 232(r1), 0, qr0
	stfd     f25, 0xd0(r1)
	psq_st   f25, 216(r1), 0, qr0
	stfd     f24, 0xc0(r1)
	psq_st   f24, 200(r1), 0, qr0
	stw      r31, 0xbc(r1)
	stw      r30, 0xb8(r1)
	stw      r29, 0xb4(r1)
	lfs      f0, lbl_8051CF48@sda21(r2)
	mr       r31, r4
	lfs      f1, 0x200(r4)
	mr       r30, r3
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802E9C14
	li       r0, 0
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EA1A0

lbl_802E9C14:
	mr       r3, r31
	li       r4, 0
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E9C3C
	li       r0, 4
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EA1A0

lbl_802E9C3C:
	mr       r3, r31
	bl       isAttackableTarget__Q34Game10MiniHoudai3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E9C60
	li       r0, 3
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EA1A0

lbl_802E9C60:
	mr       r3, r31
	bl       getSearchedTarget__Q34Game10MiniHoudai3ObjFv
	or.      r29, r3, r3
	beq      lbl_802E9F18
	lfs      f0, lbl_8051CF48@sda21(r2)
	mr       r4, r29
	addi     r3, r1, 0x38
	stfs     f0, 0x2c8(r31)
	lwz      r12, 0(r29)
	lwz      r5, 0xc0(r31)
	lwz      r12, 8(r12)
	lfs      f30, 0x334(r5)
	lfs      f29, 0x30c(r5)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x44
	lwz      r12, 0(r31)
	lfs      f24, 0x38(r1)
	lwz      r12, 8(r12)
	lfs      f25, 0x40(r1)
	mtctr    r12
	bctrl
	lfs      f1, 0x44(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x4c(r1)
	addi     r3, r3, atanTable___5JMath@l
	fsubs    f1, f24, f1
	fsubs    f2, f25, f0
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
	fmr      f31, f1
	lfs      f0, lbl_8051CF5C@sda21(r2)
	lfs      f1, lbl_8051CF58@sda21(r2)
	fmuls    f0, f0, f30
	fmuls    f24, f31, f29
	fmuls    f1, f1, f0
	fabs     f0, f24
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_802E9D40
	lfs      f0, lbl_8051CF48@sda21(r2)
	fcmpo    cr0, f24, f0
	ble      lbl_802E9D3C
	fmr      f24, f1
	b        lbl_802E9D40

lbl_802E9D3C:
	fneg     f24, f1

lbl_802E9D40:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f24, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	mr       r3, r31
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)
	bl       getViewAngle__Q34Game10MiniHoudai3ObjFv
	mr       r4, r31
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r31)
	fmr      f29, f1
	addi     r3, r1, 0x5c
	lfs      f24, 0x3fc(r5)
	lwz      r12, 8(r12)
	lfs      f25, 0x3d4(r5)
	lfs      f26, 0x3ac(r5)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x50
	lwz      r12, 0(r29)
	lfs      f30, 0x5c(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 0x50(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x74
	fsubs    f27, f0, f30
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x68
	lwz      r12, 0(r29)
	lfs      f30, 0x78(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 0x6c(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x8c
	fsubs    f28, f0, f30
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x80
	lwz      r12, 0(r29)
	lfs      f30, 0x94(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x88(r1)
	fmuls    f26, f26, f26
	fmuls    f25, f25, f25
	li       r3, 1
	fsubs    f0, f0, f30
	li       r4, 0
	fmuls    f0, f0, f0
	fmadds   f0, f27, f27, f0
	fcmpo    cr0, f0, f26
	ble      lbl_802E9E84
	fcmpo    cr0, f0, f25
	mr       r0, r4
	ble      lbl_802E9E78
	fabs     f0, f28
	frsp     f0, f0
	fcmpo    cr0, f0, f24
	bge      lbl_802E9E78
	mr       r0, r3

lbl_802E9E78:
	clrlwi.  r0, r0, 0x18
	beq      lbl_802E9E84
	li       r4, 1

lbl_802E9E84:
	clrlwi.  r0, r4, 0x18
	bne      lbl_802E9EBC
	lfs      f0, lbl_8051CF5C@sda21(r2)
	fabs     f2, f31
	lfs      f1, lbl_8051CF58@sda21(r2)
	fmuls    f0, f0, f29
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	mfcr     r0
	rlwinm.  r0, r0, 3, 0x1f, 0x1f
	beq      lbl_802E9EBC
	li       r3, 0

lbl_802E9EBC:
	clrlwi.  r0, r3, 0x18
	beq      lbl_802E9ED8
	li       r0, 2
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EA1A0

lbl_802E9ED8:
	lwz      r3, 0xc0(r31)
	fabs     f2, f31
	lfs      f0, lbl_8051CF5C@sda21(r2)
	lfs      f3, 0x58c(r3)
	lfs      f1, lbl_8051CF58@sda21(r2)
	frsp     f2, f2
	fmuls    f0, f0, f3
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_802EA1A0
	li       r0, 8
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EA1A0

lbl_802E9F18:
	mr       r4, r31
	addi     r3, r1, 0x98
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f27, 0x1a0(r31)
	lfs      f0, 0xa0(r1)
	lwz      r5, 0xc0(r31)
	fsubs    f2, f0, f27
	lfs      f26, 0x198(r31)
	lfs      f1, 0x98(r1)
	lfs      f0, 0x384(r5)
	fsubs    f3, f1, f26
	fmuls    f1, f2, f2
	fmuls    f0, f0, f0
	fmadds   f1, f3, f3, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802EA088
	mr       r4, r31
	addi     r3, r1, 0x2c
	lwz      r12, 0(r31)
	lfs      f26, 0x2e4(r31)
	lwz      r12, 8(r12)
	lfs      f27, 0x2ec(r31)
	lfs      f25, 0x334(r5)
	lfs      f24, 0x30c(r5)
	mtctr    r12
	bctrl
	lfs      f4, 0x2c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x34(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x30(r1)
	fsubs    f1, f26, f4
	fsubs    f2, f27, f0
	stfs     f4, 0x20(r1)
	stfs     f3, 0x24(r1)
	stfs     f0, 0x28(r1)
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
	lfs      f0, lbl_8051CF5C@sda21(r2)
	lfs      f1, lbl_8051CF58@sda21(r2)
	fmuls    f0, f0, f25
	fmuls    f24, f31, f24
	fmuls    f1, f1, f0
	fabs     f0, f24
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_802EA020
	lfs      f0, lbl_8051CF48@sda21(r2)
	fcmpo    cr0, f24, f0
	ble      lbl_802EA01C
	fmr      f24, f1
	b        lbl_802EA020

lbl_802EA01C:
	fneg     f24, f1

lbl_802EA020:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f24, f1
	bl       roundAng__Ff
	fabs     f3, f31
	stfs     f1, 0x1fc(r31)
	lfs      f0, lbl_8051CF60@sda21(r2)
	lfs      f2, 0x1fc(r31)
	frsp     f1, f3
	stfs     f2, 0x1a8(r31)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802EA074
	li       r0, 0xa
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EA1A0

lbl_802EA074:
	li       r0, 7
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EA1A0

lbl_802EA088:
	mr       r4, r31
	addi     r3, r1, 0x14
	lwz      r12, 0(r31)
	lfs      f25, 0x334(r5)
	lwz      r12, 8(r12)
	lfs      f24, 0x30c(r5)
	mtctr    r12
	bctrl
	lfs      f4, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x18(r1)
	fsubs    f1, f26, f4
	fsubs    f2, f27, f0
	stfs     f4, 8(r1)
	stfs     f3, 0xc(r1)
	stfs     f0, 0x10(r1)
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
	lfs      f0, lbl_8051CF5C@sda21(r2)
	lfs      f1, lbl_8051CF58@sda21(r2)
	fmuls    f0, f0, f25
	fmuls    f24, f31, f24
	fmuls    f1, f1, f0
	fabs     f0, f24
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_802EA13C
	lfs      f0, lbl_8051CF48@sda21(r2)
	fcmpo    cr0, f24, f0
	ble      lbl_802EA138
	fmr      f24, f1
	b        lbl_802EA13C

lbl_802EA138:
	fneg     f24, f1

lbl_802EA13C:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f24, f1
	bl       roundAng__Ff
	fabs     f3, f31
	stfs     f1, 0x1fc(r31)
	lfs      f0, lbl_8051CF60@sda21(r2)
	lfs      f2, 0x1fc(r31)
	frsp     f1, f3
	stfs     f2, 0x1a8(r31)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802EA190
	li       r0, 9
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EA1A0

lbl_802EA190:
	li       r0, 6
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_802EA1A0:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802EA1DC
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_802EA1DC
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2d4(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802EA1DC:
	psq_l    f31, 312(r1), 0, qr0
	lfd      f31, 0x130(r1)
	psq_l    f30, 296(r1), 0, qr0
	lfd      f30, 0x120(r1)
	psq_l    f29, 280(r1), 0, qr0
	lfd      f29, 0x110(r1)
	psq_l    f28, 264(r1), 0, qr0
	lfd      f28, 0x100(r1)
	psq_l    f27, 248(r1), 0, qr0
	lfd      f27, 0xf0(r1)
	psq_l    f26, 232(r1), 0, qr0
	lfd      f26, 0xe0(r1)
	psq_l    f25, 216(r1), 0, qr0
	lfd      f25, 0xd0(r1)
	psq_l    f24, 200(r1), 0, qr0
	lfd      f24, 0xc0(r1)
	lwz      r31, 0xbc(r1)
	lwz      r30, 0xb8(r1)
	lwz      r0, 0x144(r1)
	lwz      r29, 0xb4(r1)
	mtlr     r0
	addi     r1, r1, 0x140
	blr
	*/
}

/*
 * --INFO--
 * Address:	802EA238
 * Size:	000024
 */
void StateTurn::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/*
 * --INFO--
 * Address:	802EA25C
 * Size:	000044
 */
void StateTurnHome::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* mini             = OBJ(enemy);
	mini->mNextState      = MINIHOUDAI_NULL;
	mini->mTargetVelocity = Vector3f(0.0f);
	mini->startMotion(MINIHOUDAIANIM_Turn, nullptr);
}

/*
 * --INFO--
 * Address:	802EA2A0
 * Size:	000368
 */
void StateTurnHome::exec(EnemyBase* enemy)
{
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
	lfs      f0, lbl_8051CF48@sda21(r2)
	mr       r31, r4
	lfs      f1, 0x200(r4)
	mr       r30, r3
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802EA304
	li       r0, 0
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EA594

lbl_802EA304:
	mr       r3, r31
	li       r4, 0
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_802EA32C
	li       r0, 4
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EA594

lbl_802EA32C:
	mr       r3, r31
	bl       isAttackableTarget__Q34Game10MiniHoudai3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802EA350
	li       r0, 3
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EA594

lbl_802EA350:
	mr       r4, r31
	addi     r3, r1, 0x38
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f31, 0x198(r31)
	mr       r3, r31
	lfs      f28, 0x1a0(r31)
	bl       getSearchedTarget__Q34Game10MiniHoudai3ObjFv
	cmplwi   r3, 0
	beq      lbl_802EA48C
	mr       r4, r31
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x2c
	lfs      f29, 0x334(r5)
	lwz      r12, 8(r12)
	lfs      f30, 0x30c(r5)
	mtctr    r12
	bctrl
	lfs      f4, 0x2c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x34(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x30(r1)
	fsubs    f1, f31, f4
	fsubs    f2, f28, f0
	stfs     f4, 0x20(r1)
	stfs     f3, 0x24(r1)
	stfs     f0, 0x28(r1)
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
	fmr      f31, f1
	lfs      f0, lbl_8051CF5C@sda21(r2)
	lfs      f1, lbl_8051CF58@sda21(r2)
	fmuls    f0, f0, f29
	fmuls    f29, f31, f30
	fmuls    f1, f1, f0
	fabs     f0, f29
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_802EA438
	lfs      f0, lbl_8051CF48@sda21(r2)
	fcmpo    cr0, f29, f0
	ble      lbl_802EA434
	fmr      f29, f1
	b        lbl_802EA438

lbl_802EA434:
	fneg     f29, f1

lbl_802EA438:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f29, f1
	bl       roundAng__Ff
	fabs     f3, f31
	stfs     f1, 0x1fc(r31)
	lfs      f0, lbl_8051CF60@sda21(r2)
	lfs      f2, 0x1fc(r31)
	frsp     f1, f3
	stfs     f2, 0x1a8(r31)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802EA594
	li       r0, 9
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EA594

lbl_802EA48C:
	mr       r4, r31
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x14
	lfs      f30, 0x334(r5)
	lwz      r12, 8(r12)
	lfs      f29, 0x30c(r5)
	mtctr    r12
	bctrl
	lfs      f4, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x18(r1)
	fsubs    f1, f31, f4
	fsubs    f2, f28, f0
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
	fmr      f31, f1
	lfs      f0, lbl_8051CF5C@sda21(r2)
	lfs      f1, lbl_8051CF58@sda21(r2)
	fmuls    f0, f0, f30
	fmuls    f29, f31, f29
	fmuls    f1, f1, f0
	fabs     f0, f29
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_802EA544
	lfs      f0, lbl_8051CF48@sda21(r2)
	fcmpo    cr0, f29, f0
	ble      lbl_802EA540
	fmr      f29, f1
	b        lbl_802EA544

lbl_802EA540:
	fneg     f29, f1

lbl_802EA544:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f29, f1
	bl       roundAng__Ff
	fabs     f3, f31
	stfs     f1, 0x1fc(r31)
	lfs      f0, lbl_8051CF60@sda21(r2)
	lfs      f2, 0x1fc(r31)
	frsp     f1, f3
	stfs     f2, 0x1a8(r31)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802EA594
	li       r0, 9
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_802EA594:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802EA5D0
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_802EA5D0
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2d4(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802EA5D0:
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
 * Address:	802EA608
 * Size:	000004
 */
void StateTurnHome::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802EA60C
 * Size:	000044
 */
void StateTurnPath::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* mini             = OBJ(enemy);
	mini->mNextState      = MINIHOUDAI_NULL;
	mini->mTargetVelocity = Vector3f(0.0f);
	mini->startMotion(MINIHOUDAIANIM_Turn, nullptr);
}

/*
 * --INFO--
 * Address:	802EA650
 * Size:	000390
 */
void StateTurnPath::exec(EnemyBase* enemy)
{
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
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	mr       r31, r4
	mr       r30, r3
	mr       r3, r31
	bl       updateHomePosition__Q34Game10MiniHoudai3ObjFv
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051CF48@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802EA6BC
	li       r0, 0
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EA96C

lbl_802EA6BC:
	mr       r3, r31
	li       r4, 1
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_802EA6E4
	li       r0, 4
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EA96C

lbl_802EA6E4:
	mr       r3, r31
	bl       isAttackableTarget__Q34Game10MiniHoudai3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802EA708
	li       r0, 3
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EA96C

lbl_802EA708:
	mr       r3, r31
	bl       getSearchedTarget__Q34Game10MiniHoudai3ObjFv
	cmplwi   r3, 0
	beq      lbl_802EA85C
	mr       r4, r3
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r3)
	addi     r3, r1, 0x20
	lfs      f29, 0x334(r5)
	lwz      r12, 8(r12)
	lfs      f30, 0x30c(r5)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x2c
	lwz      r12, 0(r31)
	lfs      f31, 0x20(r1)
	lwz      r12, 8(r12)
	lfs      f28, 0x28(r1)
	mtctr    r12
	bctrl
	lfs      f1, 0x2c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x34(r1)
	addi     r3, r3, atanTable___5JMath@l
	fsubs    f1, f31, f1
	fsubs    f2, f28, f0
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
	fmr      f31, f1
	lfs      f0, lbl_8051CF5C@sda21(r2)
	lfs      f1, lbl_8051CF58@sda21(r2)
	fmuls    f0, f0, f29
	fmuls    f29, f31, f30
	fmuls    f1, f1, f0
	fabs     f0, f29
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_802EA7E0
	lfs      f0, lbl_8051CF48@sda21(r2)
	fcmpo    cr0, f29, f0
	ble      lbl_802EA7DC
	fmr      f29, f1
	b        lbl_802EA7E0

lbl_802EA7DC:
	fneg     f29, f1

lbl_802EA7E0:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f29, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	fabs     f2, f31
	lfs      f0, lbl_8051CF5C@sda21(r2)
	lfs      f3, 0x1fc(r31)
	lfs      f1, lbl_8051CF58@sda21(r2)
	frsp     f2, f2
	stfs     f3, 0x1a8(r31)
	lwz      r3, 0xc0(r31)
	lfs      f3, 0x58c(r3)
	fmuls    f0, f0, f3
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_802EA848
	li       r0, 8
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EA96C

lbl_802EA848:
	li       r0, 5
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EA96C

lbl_802EA85C:
	mr       r4, r31
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x14
	lfs      f28, 0x2e4(r31)
	lwz      r12, 8(r12)
	lfs      f31, 0x2ec(r31)
	lfs      f30, 0x334(r5)
	lfs      f29, 0x30c(r5)
	mtctr    r12
	bctrl
	lfs      f4, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x18(r1)
	fsubs    f1, f28, f4
	fsubs    f2, f31, f0
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
	fmr      f31, f1
	lfs      f0, lbl_8051CF5C@sda21(r2)
	lfs      f1, lbl_8051CF58@sda21(r2)
	fmuls    f0, f0, f30
	fmuls    f29, f31, f29
	fmuls    f1, f1, f0
	fabs     f0, f29
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_802EA91C
	lfs      f0, lbl_8051CF48@sda21(r2)
	fcmpo    cr0, f29, f0
	ble      lbl_802EA918
	fmr      f29, f1
	b        lbl_802EA91C

lbl_802EA918:
	fneg     f29, f1

lbl_802EA91C:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f29, f1
	bl       roundAng__Ff
	fabs     f3, f31
	stfs     f1, 0x1fc(r31)
	lfs      f0, lbl_8051CF60@sda21(r2)
	lfs      f2, 0x1fc(r31)
	frsp     f1, f3
	stfs     f2, 0x1a8(r31)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802EA96C
	li       r0, 0xa
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_802EA96C:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802EA9A8
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_802EA9A8
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2d4(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802EA9A8:
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	psq_l    f29, 88(r1), 0, qr0
	lfd      f29, 0x50(r1)
	psq_l    f28, 72(r1), 0, qr0
	lfd      f28, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r0, 0x84(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	802EA9E0
 * Size:	000004
 */
void StateTurnPath::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802EA9E4
 * Size:	000050
 */
void StateWalk::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* mini          = OBJ(enemy);
	mini->mUpdateTimer = 0.0f;
	mini->mNextState   = MINIHOUDAI_NULL;
	mini->setEmotionExcitement();
	mini->startMotion(MINIHOUDAIANIM_Walk, nullptr);
}

/*
 * --INFO--
 * Address:	802EAA34
 * Size:	0007CC
 */
void StateWalk::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0x140(r1)
	mflr     r0
	stw      r0, 0x144(r1)
	stfd     f31, 0x130(r1)
	psq_st   f31, 312(r1), 0, qr0
	stfd     f30, 0x120(r1)
	psq_st   f30, 296(r1), 0, qr0
	stfd     f29, 0x110(r1)
	psq_st   f29, 280(r1), 0, qr0
	stfd     f28, 0x100(r1)
	psq_st   f28, 264(r1), 0, qr0
	stfd     f27, 0xf0(r1)
	psq_st   f27, 248(r1), 0, qr0
	stfd     f26, 0xe0(r1)
	psq_st   f26, 232(r1), 0, qr0
	stfd     f25, 0xd0(r1)
	psq_st   f25, 216(r1), 0, qr0
	stfd     f24, 0xc0(r1)
	psq_st   f24, 200(r1), 0, qr0
	stw      r31, 0xbc(r1)
	stw      r30, 0xb8(r1)
	stw      r29, 0xb4(r1)
	mr       r31, r4
	lwz      r4, 0xc0(r4)
	mr       r30, r3
	lfs      f30, 0x30c(r4)
	mr       r3, r31
	lfs      f29, 0x334(r4)
	bl       isFinishMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802EAAB8
	lfs      f30, lbl_8051CF6C@sda21(r2)
	lfs      f29, lbl_8051CF4C@sda21(r2)

lbl_802EAAB8:
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051CF48@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802EAAE0
	li       r0, 0
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EB078

lbl_802EAAE0:
	mr       r3, r31
	li       r4, 0
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_802EAB08
	li       r0, 4
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EB078

lbl_802EAB08:
	mr       r4, r31
	addi     r3, r1, 0xa4
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f26, 0x1a0(r31)
	lfs      f0, 0xac(r1)
	lwz      r3, 0xc0(r31)
	fsubs    f2, f0, f26
	lfs      f25, 0x198(r31)
	lfs      f1, 0xa4(r1)
	lfs      f0, 0x35c(r3)
	fsubs    f3, f1, f25
	fmuls    f1, f2, f2
	fmuls    f0, f0, f0
	fmadds   f24, f3, f3, f1
	fcmpo    cr0, f24, f0
	ble      lbl_802EAB68
	li       r0, 2
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EB078

lbl_802EAB68:
	mr       r3, r31
	bl       isAttackableTarget__Q34Game10MiniHoudai3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802EAB8C
	li       r0, 3
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EB078

lbl_802EAB8C:
	mr       r3, r31
	bl       getSearchedTarget__Q34Game10MiniHoudai3ObjFv
	or.      r29, r3, r3
	beq      lbl_802EAE38
	lfs      f0, lbl_8051CF48@sda21(r2)
	mr       r4, r29
	addi     r3, r1, 0x38
	stfs     f0, 0x2c8(r31)
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x44
	lwz      r12, 0(r31)
	lfs      f24, 0x38(r1)
	lwz      r12, 8(r12)
	lfs      f25, 0x40(r1)
	mtctr    r12
	bctrl
	lfs      f1, 0x44(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x4c(r1)
	addi     r3, r3, atanTable___5JMath@l
	fsubs    f1, f24, f1
	fsubs    f2, f25, f0
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
	fmr      f31, f1
	lfs      f0, lbl_8051CF5C@sda21(r2)
	lfs      f1, lbl_8051CF58@sda21(r2)
	fmuls    f0, f0, f29
	fmuls    f24, f31, f30
	fmuls    f1, f1, f0
	fabs     f0, f24
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_802EAC60
	lfs      f0, lbl_8051CF48@sda21(r2)
	fcmpo    cr0, f24, f0
	ble      lbl_802EAC5C
	fmr      f24, f1
	b        lbl_802EAC60

lbl_802EAC5C:
	fneg     f24, f1

lbl_802EAC60:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f24, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	mr       r3, r31
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)
	bl       getViewAngle__Q34Game10MiniHoudai3ObjFv
	mr       r4, r31
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r31)
	fmr      f30, f1
	addi     r3, r1, 0x68
	lfs      f24, 0x3fc(r5)
	lwz      r12, 8(r12)
	lfs      f25, 0x3d4(r5)
	lfs      f26, 0x3ac(r5)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x5c
	lwz      r12, 0(r29)
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
	mr       r4, r29
	addi     r3, r1, 0x74
	lwz      r12, 0(r29)
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
	mr       r4, r29
	addi     r3, r1, 0x8c
	lwz      r12, 0(r29)
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
	ble      lbl_802EADA4
	fcmpo    cr0, f0, f25
	mr       r0, r4
	ble      lbl_802EAD98
	fabs     f0, f28
	frsp     f0, f0
	fcmpo    cr0, f0, f24
	bge      lbl_802EAD98
	mr       r0, r3

lbl_802EAD98:
	clrlwi.  r0, r0, 0x18
	beq      lbl_802EADA4
	li       r4, 1

lbl_802EADA4:
	clrlwi.  r0, r4, 0x18
	bne      lbl_802EADDC
	lfs      f0, lbl_8051CF5C@sda21(r2)
	fabs     f2, f31
	lfs      f1, lbl_8051CF58@sda21(r2)
	fmuls    f0, f0, f30
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	mfcr     r0
	rlwinm.  r0, r0, 3, 0x1f, 0x1f
	beq      lbl_802EADDC
	li       r3, 0

lbl_802EADDC:
	clrlwi.  r0, r3, 0x18
	beq      lbl_802EADF8
	li       r0, 2
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EB078

lbl_802EADF8:
	lwz      r3, 0xc0(r31)
	fabs     f2, f31
	lfs      f0, lbl_8051CF5C@sda21(r2)
	lfs      f3, 0x58c(r3)
	lfs      f1, lbl_8051CF58@sda21(r2)
	frsp     f2, f2
	fmuls    f0, f0, f3
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	beq      lbl_802EB078
	li       r0, 5
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EB078

lbl_802EAE38:
	lwz      r3, 0xc0(r31)
	lfs      f0, 0x384(r3)
	fmuls    f0, f0, f0
	fcmpo    cr0, f24, f0
	bge      lbl_802EAF68
	mr       r4, r31
	addi     r3, r1, 0x2c
	lwz      r12, 0(r31)
	lfs      f24, 0x2e4(r31)
	lwz      r12, 8(r12)
	lfs      f25, 0x2ec(r31)
	mtctr    r12
	bctrl
	lfs      f4, 0x2c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x34(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x30(r1)
	fsubs    f1, f24, f4
	fsubs    f2, f25, f0
	stfs     f4, 0x20(r1)
	stfs     f3, 0x24(r1)
	stfs     f0, 0x28(r1)
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
	fmr      f31, f1
	lfs      f0, lbl_8051CF5C@sda21(r2)
	lfs      f1, lbl_8051CF58@sda21(r2)
	fmuls    f0, f0, f29
	fmuls    f24, f31, f30
	fmuls    f1, f1, f0
	fabs     f0, f24
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_802EAF00
	lfs      f0, lbl_8051CF48@sda21(r2)
	fcmpo    cr0, f24, f0
	ble      lbl_802EAEFC
	fmr      f24, f1
	b        lbl_802EAF00

lbl_802EAEFC:
	fneg     f24, f1

lbl_802EAF00:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f24, f1
	bl       roundAng__Ff
	fabs     f3, f31
	stfs     f1, 0x1fc(r31)
	lfs      f0, lbl_8051CF60@sda21(r2)
	lfs      f2, 0x1fc(r31)
	frsp     f1, f3
	stfs     f2, 0x1a8(r31)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802EAF54
	li       r0, 0xa
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EB078

lbl_802EAF54:
	li       r0, 7
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EB078

lbl_802EAF68:
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
	fsubs    f1, f25, f4
	fsubs    f2, f26, f0
	stfs     f4, 8(r1)
	stfs     f3, 0xc(r1)
	stfs     f0, 0x10(r1)
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
	fmr      f31, f1
	lfs      f0, lbl_8051CF5C@sda21(r2)
	lfs      f1, lbl_8051CF58@sda21(r2)
	fmuls    f0, f0, f29
	fmuls    f24, f31, f30
	fmuls    f1, f1, f0
	fabs     f0, f24
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_802EB014
	lfs      f0, lbl_8051CF48@sda21(r2)
	fcmpo    cr0, f24, f0
	ble      lbl_802EB010
	fmr      f24, f1
	b        lbl_802EB014

lbl_802EB010:
	fneg     f24, f1

lbl_802EB014:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f24, f1
	bl       roundAng__Ff
	fabs     f3, f31
	stfs     f1, 0x1fc(r31)
	lfs      f0, lbl_8051CF60@sda21(r2)
	lfs      f2, 0x1fc(r31)
	frsp     f1, f3
	stfs     f2, 0x1a8(r31)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802EB068
	li       r0, 9
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EB078

lbl_802EB068:
	li       r0, 6
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_802EB078:
	mr       r3, r31
	bl       isFinishMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802EB09C
	lfs      f0, lbl_8051CF48@sda21(r2)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	b        lbl_802EB138

lbl_802EB09C:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x4e
	bne      lbl_802EB128
	mr       r3, r31
	lwz      r4, 0xc0(r31)
	lwz      r12, 0(r31)
	lfs      f24, 0x2e4(r4)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r31
	lfs      f2, 0x1d4(r31)
	lwz      r12, 0(r31)
	frsp     f25, f1
	lfs      f29, 0x1d8(r31)
	lfs      f0, 0x1dc(r31)
	lwz      r12, 0x64(r12)
	stfs     f2, 0x50(r1)
	stfs     f29, 0x54(r1)
	stfs     f0, 0x58(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f24, f25
	frsp     f1, f1
	stfs     f0, 0x1d4(r31)
	fmuls    f0, f24, f1
	stfs     f29, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	b        lbl_802EB138

lbl_802EB128:
	lfs      f0, lbl_8051CF48@sda21(r2)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)

lbl_802EB138:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802EB1A4
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0
	bne      lbl_802EB164
	mr       r3, r31
	li       r4, 1
	bl       createSmokeSmallEffect__Q34Game10MiniHoudai3ObjFb
	b        lbl_802EB1A4

lbl_802EB164:
	cmplwi   r0, 2
	bne      lbl_802EB17C
	mr       r3, r31
	li       r4, 0
	bl       createSmokeSmallEffect__Q34Game10MiniHoudai3ObjFb
	b        lbl_802EB1A4

lbl_802EB17C:
	cmplwi   r0, 0x3e8
	bne      lbl_802EB1A4
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2d4(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802EB1A4:
	psq_l    f31, 312(r1), 0, qr0
	lfd      f31, 0x130(r1)
	psq_l    f30, 296(r1), 0, qr0
	lfd      f30, 0x120(r1)
	psq_l    f29, 280(r1), 0, qr0
	lfd      f29, 0x110(r1)
	psq_l    f28, 264(r1), 0, qr0
	lfd      f28, 0x100(r1)
	psq_l    f27, 248(r1), 0, qr0
	lfd      f27, 0xf0(r1)
	psq_l    f26, 232(r1), 0, qr0
	lfd      f26, 0xe0(r1)
	psq_l    f25, 216(r1), 0, qr0
	lfd      f25, 0xd0(r1)
	psq_l    f24, 200(r1), 0, qr0
	lfd      f24, 0xc0(r1)
	lwz      r31, 0xbc(r1)
	lwz      r30, 0xb8(r1)
	lwz      r0, 0x144(r1)
	lwz      r29, 0xb4(r1)
	mtlr     r0
	addi     r1, r1, 0x140
	blr
	*/
}

/*
 * --INFO--
 * Address:	802EB208
 * Size:	000024
 */
void StateWalk::cleanup(EnemyBase* enemy) { enemy->setEmotionCaution(); }

/*
 * --INFO--
 * Address:	802EB22C
 * Size:	000034
 */
void StateWalkHome::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* mini        = OBJ(enemy);
	mini->mNextState = MINIHOUDAI_NULL;
	mini->startMotion(MINIHOUDAIANIM_Walk, nullptr);
}

/*
 * --INFO--
 * Address:	802EB260
 * Size:	000578
 */
void StateWalkHome::exec(EnemyBase* enemy)
{
	/*
	stwu     r1, -0xd0(r1)
	mflr     r0
	stw      r0, 0xd4(r1)
	stfd     f31, 0xc0(r1)
	psq_st   f31, 200(r1), 0, qr0
	stfd     f30, 0xb0(r1)
	psq_st   f30, 184(r1), 0, qr0
	stfd     f29, 0xa0(r1)
	psq_st   f29, 168(r1), 0, qr0
	stfd     f28, 0x90(r1)
	psq_st   f28, 152(r1), 0, qr0
	stfd     f27, 0x80(r1)
	psq_st   f27, 136(r1), 0, qr0
	stw      r31, 0x7c(r1)
	stw      r30, 0x78(r1)
	mr       r31, r4
	lwz      r4, 0xc0(r4)
	mr       r30, r3
	lfs      f30, 0x30c(r4)
	mr       r3, r31
	lfs      f29, 0x334(r4)
	bl       isFinishMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802EB2C8
	lfs      f30, lbl_8051CF6C@sda21(r2)
	lfs      f29, lbl_8051CF4C@sda21(r2)

lbl_802EB2C8:
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051CF48@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802EB2F0
	li       r0, 0
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EB654

lbl_802EB2F0:
	mr       r3, r31
	li       r4, 0
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_802EB318
	li       r0, 4
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EB654

lbl_802EB318:
	mr       r4, r31
	addi     r3, r1, 0x68
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f27, 0x1a0(r31)
	mr       r4, r31
	lfs      f0, 0x70(r1)
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	fsubs    f1, f0, f27
	lfs      f28, 0x198(r31)
	lfs      f0, 0x68(r1)
	lwz      r12, 8(r12)
	fsubs    f2, f0, f28
	fmuls    f0, f1, f1
	fmadds   f31, f2, f2, f0
	mtctr    r12
	bctrl
	lfs      f1, 8(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x10(r1)
	addi     r3, r3, atanTable___5JMath@l
	fsubs    f1, f28, f1
	fsubs    f2, f27, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f28, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f28
	bl       angDist__Fff
	fmr      f28, f1
	lfs      f0, lbl_8051CF5C@sda21(r2)
	lfs      f1, lbl_8051CF58@sda21(r2)
	fmuls    f0, f0, f29
	fmuls    f29, f28, f30
	fmuls    f1, f1, f0
	fabs     f0, f29
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_802EB3EC
	lfs      f0, lbl_8051CF48@sda21(r2)
	fcmpo    cr0, f29, f0
	ble      lbl_802EB3E8
	fmr      f29, f1
	b        lbl_802EB3EC

lbl_802EB3E8:
	fneg     f29, f1

lbl_802EB3EC:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f29, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	lfs      f0, 0x1fc(r31)
	stfs     f0, 0x1a8(r31)
	lwz      r3, 0xc0(r31)
	lfs      f0, 0x384(r3)
	fmuls    f0, f0, f0
	fcmpo    cr0, f31, f0
	bge      lbl_802EB608
	mr       r3, r31
	bl       isAttackableTarget__Q34Game10MiniHoudai3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802EB44C
	li       r0, 3
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EB654

lbl_802EB44C:
	mr       r3, r31
	bl       getSearchedTarget__Q34Game10MiniHoudai3ObjFv
	cmplwi   r3, 0
	beq      lbl_802EB554
	mr       r4, r3
	addi     r3, r1, 0x50
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f2, 0x50(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x5c
	lfs      f1, 0x54(r1)
	lfs      f0, 0x58(r1)
	lwz      r12, 8(r12)
	stfs     f2, 0x38(r1)
	stfs     f1, 0x3c(r1)
	stfs     f0, 0x40(r1)
	mtctr    r12
	bctrl
	lfs      f5, 0x5c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f3, 0x64(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f1, 0x38(r1)
	lfs      f0, 0x40(r1)
	lfs      f4, 0x60(r1)
	fsubs    f1, f1, f5
	fsubs    f2, f0, f3
	stfs     f5, 0x44(r1)
	stfs     f4, 0x48(r1)
	stfs     f3, 0x4c(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f28, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f28
	bl       angDist__Fff
	lwz      r3, 0xc0(r31)
	fabs     f2, f1
	lfs      f0, lbl_8051CF5C@sda21(r2)
	lfs      f3, 0x58c(r3)
	lfs      f1, lbl_8051CF58@sda21(r2)
	frsp     f2, f2
	fmuls    f0, f0, f3
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_802EB540
	li       r0, 8
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EB654

lbl_802EB540:
	li       r0, 5
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EB654

lbl_802EB554:
	mr       r4, r31
	addi     r3, r1, 0x2c
	lwz      r12, 0(r31)
	lfs      f27, 0x2e4(r31)
	lwz      r12, 8(r12)
	lfs      f28, 0x2ec(r31)
	mtctr    r12
	bctrl
	lfs      f4, 0x2c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x34(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x30(r1)
	fsubs    f1, f27, f4
	fsubs    f2, f28, f0
	stfs     f4, 0x20(r1)
	stfs     f3, 0x24(r1)
	stfs     f0, 0x28(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f28, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f28
	bl       angDist__Fff
	fabs     f1, f1
	lfs      f0, lbl_8051CF60@sda21(r2)
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802EB5F4
	li       r0, 0xa
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EB654

lbl_802EB5F4:
	li       r0, 7
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EB654

lbl_802EB608:
	mr       r3, r31
	bl       isAttackableTarget__Q34Game10MiniHoudai3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802EB62C
	li       r0, 3
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EB654

lbl_802EB62C:
	fabs     f1, f28
	lfs      f0, lbl_8051CF60@sda21(r2)
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	beq      lbl_802EB654
	li       r0, 6
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_802EB654:
	mr       r3, r31
	bl       isFinishMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802EB678
	lfs      f0, lbl_8051CF48@sda21(r2)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	b        lbl_802EB714

lbl_802EB678:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x4e
	bne      lbl_802EB704
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
	frsp     f30, f1
	lfs      f29, 0x1d8(r31)
	lfs      f0, 0x1dc(r31)
	lwz      r12, 0x64(r12)
	stfs     f2, 0x14(r1)
	stfs     f29, 0x18(r1)
	stfs     f0, 0x1c(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f28, f30
	frsp     f1, f1
	stfs     f0, 0x1d4(r31)
	fmuls    f0, f28, f1
	stfs     f29, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	b        lbl_802EB714

lbl_802EB704:
	lfs      f0, lbl_8051CF48@sda21(r2)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)

lbl_802EB714:
	lwz      r3, sys@sda21(r13)
	lfs      f2, lbl_8051CF4C@sda21(r2)
	lfs      f1, 0x54(r3)
	lfs      f0, 0x2d0(r31)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x2d0(r31)
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802EB798
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0
	bne      lbl_802EB758
	mr       r3, r31
	li       r4, 1
	bl       createSmokeSmallEffect__Q34Game10MiniHoudai3ObjFb
	b        lbl_802EB798

lbl_802EB758:
	cmplwi   r0, 2
	bne      lbl_802EB770
	mr       r3, r31
	li       r4, 0
	bl       createSmokeSmallEffect__Q34Game10MiniHoudai3ObjFb
	b        lbl_802EB798

lbl_802EB770:
	cmplwi   r0, 0x3e8
	bne      lbl_802EB798
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2d4(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802EB798:
	psq_l    f31, 200(r1), 0, qr0
	lfd      f31, 0xc0(r1)
	psq_l    f30, 184(r1), 0, qr0
	lfd      f30, 0xb0(r1)
	psq_l    f29, 168(r1), 0, qr0
	lfd      f29, 0xa0(r1)
	psq_l    f28, 152(r1), 0, qr0
	lfd      f28, 0x90(r1)
	psq_l    f27, 136(r1), 0, qr0
	lfd      f27, 0x80(r1)
	lwz      r31, 0x7c(r1)
	lwz      r0, 0xd4(r1)
	lwz      r30, 0x78(r1)
	mtlr     r0
	addi     r1, r1, 0xd0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802EB7D8
 * Size:	000004
 */
void StateWalkHome::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802EB7DC
 * Size:	000034
 */
void StateWalkPath::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* mini        = OBJ(enemy);
	mini->mNextState = MINIHOUDAI_NULL;
	mini->startMotion(MINIHOUDAIANIM_Walk, nullptr);
}

/*
 * --INFO--
 * Address:	802EB810
 * Size:	0004A4
 */
void StateWalkPath::exec(EnemyBase* enemy)
{
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
	bl       updateHomePosition__Q34Game10MiniHoudai3ObjFv
	lwz      r4, 0xc0(r31)
	mr       r3, r31
	lfs      f31, 0x30c(r4)
	lfs      f30, 0x334(r4)
	bl       isFinishMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802EB878
	lfs      f31, lbl_8051CF6C@sda21(r2)
	lfs      f30, lbl_8051CF4C@sda21(r2)

lbl_802EB878:
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051CF48@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802EB8A0
	li       r0, 0
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EBB38

lbl_802EB8A0:
	mr       r3, r31
	li       r4, 1
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_802EB8C8
	li       r0, 4
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EBB38

lbl_802EB8C8:
	mr       r3, r31
	bl       isAttackableTarget__Q34Game10MiniHoudai3ObjFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802EB8EC
	li       r0, 3
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EBB38

lbl_802EB8EC:
	mr       r3, r31
	bl       getSearchedTarget__Q34Game10MiniHoudai3ObjFv
	cmplwi   r3, 0
	beq      lbl_802EBA34
	mr       r4, r3
	addi     r3, r1, 0x20
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	addi     r3, r1, 0x2c
	lwz      r12, 0(r31)
	lfs      f29, 0x20(r1)
	lwz      r12, 8(r12)
	lfs      f28, 0x28(r1)
	mtctr    r12
	bctrl
	lfs      f1, 0x2c(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x34(r1)
	addi     r3, r3, atanTable___5JMath@l
	fsubs    f1, f29, f1
	fsubs    f2, f28, f0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f29, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f29
	bl       angDist__Fff
	fmr      f29, f1
	lfs      f0, lbl_8051CF5C@sda21(r2)
	lfs      f1, lbl_8051CF58@sda21(r2)
	fmuls    f0, f0, f30
	fmuls    f30, f29, f31
	fmuls    f1, f1, f0
	fabs     f0, f30
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_802EB9B8
	lfs      f0, lbl_8051CF48@sda21(r2)
	fcmpo    cr0, f30, f0
	ble      lbl_802EB9B4
	fmr      f30, f1
	b        lbl_802EB9B8

lbl_802EB9B4:
	fneg     f30, f1

lbl_802EB9B8:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f30, f1
	bl       roundAng__Ff
	stfs     f1, 0x1fc(r31)
	fabs     f2, f29
	lfs      f0, lbl_8051CF5C@sda21(r2)
	lfs      f3, 0x1fc(r31)
	lfs      f1, lbl_8051CF58@sda21(r2)
	frsp     f2, f2
	stfs     f3, 0x1a8(r31)
	lwz      r3, 0xc0(r31)
	lfs      f3, 0x58c(r3)
	fmuls    f0, f0, f3
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	bne      lbl_802EBA20
	li       r0, 8
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EBB38

lbl_802EBA20:
	li       r0, 5
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv
	b        lbl_802EBB38

lbl_802EBA34:
	mr       r4, r31
	addi     r3, r1, 0x14
	lwz      r12, 0(r31)
	lfs      f28, 0x2e4(r31)
	lwz      r12, 8(r12)
	lfs      f29, 0x2ec(r31)
	mtctr    r12
	bctrl
	lfs      f4, 0x14(r1)
	lis      r3, atanTable___5JMath@ha
	lfs      f0, 0x1c(r1)
	addi     r3, r3, atanTable___5JMath@l
	lfs      f3, 0x18(r1)
	fsubs    f1, f28, f4
	fsubs    f2, f29, f0
	stfs     f4, 8(r1)
	stfs     f3, 0xc(r1)
	stfs     f0, 0x10(r1)
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	bl       roundAng__Ff
	lwz      r12, 0(r31)
	fmr      f29, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f29
	bl       angDist__Fff
	fmr      f29, f1
	lfs      f0, lbl_8051CF5C@sda21(r2)
	lfs      f1, lbl_8051CF58@sda21(r2)
	fmuls    f0, f0, f30
	fmuls    f30, f29, f31
	fmuls    f1, f1, f0
	fabs     f0, f30
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_802EBAE8
	lfs      f0, lbl_8051CF48@sda21(r2)
	fcmpo    cr0, f30, f0
	ble      lbl_802EBAE4
	fmr      f30, f1
	b        lbl_802EBAE8

lbl_802EBAE4:
	fneg     f30, f1

lbl_802EBAE8:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f30, f1
	bl       roundAng__Ff
	fabs     f3, f29
	stfs     f1, 0x1fc(r31)
	lfs      f0, lbl_8051CF60@sda21(r2)
	lfs      f2, 0x1fc(r31)
	frsp     f1, f3
	stfs     f2, 0x1a8(r31)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	beq      lbl_802EBB38
	li       r0, 7
	mr       r3, r31
	stw      r0, 0x2d4(r31)
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_802EBB38:
	mr       r3, r31
	bl       isFinishMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_802EBB5C
	lfs      f0, lbl_8051CF48@sda21(r2)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	b        lbl_802EBBF8

lbl_802EBB5C:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x4e
	bne      lbl_802EBBE8
	mr       r3, r31
	lwz      r4, 0xc0(r31)
	lwz      r12, 0(r31)
	lfs      f29, 0x2e4(r4)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	bl       sin
	mr       r3, r31
	lfs      f2, 0x1d4(r31)
	lwz      r12, 0(r31)
	frsp     f31, f1
	lfs      f30, 0x1d8(r31)
	lfs      f0, 0x1dc(r31)
	lwz      r12, 0x64(r12)
	stfs     f2, 0x38(r1)
	stfs     f30, 0x3c(r1)
	stfs     f0, 0x40(r1)
	mtctr    r12
	bctrl
	bl       cos
	fmuls    f0, f29, f31
	frsp     f1, f1
	stfs     f0, 0x1d4(r31)
	fmuls    f0, f29, f1
	stfs     f30, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)
	b        lbl_802EBBF8

lbl_802EBBE8:
	lfs      f0, lbl_8051CF48@sda21(r2)
	stfs     f0, 0x1d4(r31)
	stfs     f0, 0x1d8(r31)
	stfs     f0, 0x1dc(r31)

lbl_802EBBF8:
	lwz      r3, sys@sda21(r13)
	lfs      f2, lbl_8051CF70@sda21(r2)
	lfs      f1, 0x54(r3)
	lfs      f0, 0x2d0(r31)
	fmadds   f0, f2, f1, f0
	stfs     f0, 0x2d0(r31)
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_802EBC7C
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0
	bne      lbl_802EBC3C
	mr       r3, r31
	li       r4, 1
	bl       createSmokeSmallEffect__Q34Game10MiniHoudai3ObjFb
	b        lbl_802EBC7C

lbl_802EBC3C:
	cmplwi   r0, 2
	bne      lbl_802EBC54
	mr       r3, r31
	li       r4, 0
	bl       createSmokeSmallEffect__Q34Game10MiniHoudai3ObjFb
	b        lbl_802EBC7C

lbl_802EBC54:
	cmplwi   r0, 0x3e8
	bne      lbl_802EBC7C
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r6, 0
	lwz      r5, 0x2d4(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802EBC7C:
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
 * Address:	802EBCB4
 * Size:	000004
 */
void StateWalkPath::cleanup(EnemyBase* enemy) { }

} // namespace MiniHoudai
} // namespace Game
