#include "Game/Entities/SnakeWhole.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "Game/PikiMgr.h"
#include "Game/Navi.h"
#include "Game/Interaction.h"
#include "efx/THebi.h"
#include "Iterator.h"
#include "Dolphin/rand.h"
#include "nans.h"

namespace Game {
namespace SnakeWhole {

/*
 * --INFO--
 * Address:	802CB94C
 * Size:	0003D0
 */
void FSM::init(EnemyBase* enemy)
{
	create(SNAKEWHOLE_Count);
	registerState(new StateDead);
	registerState(new StateStay);
	registerState(new StateAppear1);
	registerState(new StateAppear2);
	registerState(new StateDisappear);
	registerState(new StateWait);
	registerState(new StateWalk);
	registerState(new StateHome);
	registerState(new StateAttack);
	registerState(new StateEat);
	registerState(new StateStruggle);
}

/*
 * --INFO--
 * Address:	802CBD1C
 * Size:	0000C4
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* snagret = OBJ(enemy);
	snagret->deathProcedure();
	snagret->disableEvent(0, EB_Cullable);
	snagret->mTargetVelocity = Vector3f(0.0f);
	snagret->setEmotionCaution();
	snagret->startMotion(SNAKEWHOLEANIM_Dead, nullptr);
	snagret->createDeadStartEffect();

	Vector3f position = snagret->getPosition();
	cameraMgr->startVibration(0, position, 2);
	rumbleMgr->startRumble(13, position, 2);
}

/*
 * --INFO--
 * Address:	802CBDE0
 * Size:	0001C0
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* snagret = OBJ(enemy);
	if (snagret->mCurAnim->mIsPlaying) {
		if ((u32)snagret->mCurAnim->mType == KEYEVENT_2) {
			snagret->deleteJointShadow();
			snagret->createDeadFinishEffect();
			snagret->throwupItem();

		} else if ((u32)snagret->mCurAnim->mType == KEYEVENT_3) {
			snagret->createWalkSmokeEffect(0.9f);
			Vector3f position = snagret->getPosition();
			cameraMgr->startVibration(3, position, 2);
			rumbleMgr->startRumble(11, position, 2);

		} else if ((u32)snagret->mCurAnim->mType == KEYEVENT_4) {
			snagret->createWalkSmokeEffect(0.75f);
			Vector3f position = snagret->getPosition();
			cameraMgr->startVibration(3, position, 2);
			rumbleMgr->startRumble(11, position, 2);

		} else if ((u32)snagret->mCurAnim->mType == KEYEVENT_5) {
			Vector3f position = snagret->getPosition();
			cameraMgr->startVibration(8, position, 2);
			rumbleMgr->startRumble(13, position, 2);

		} else if ((u32)snagret->mCurAnim->mType == KEYEVENT_END) {
			snagret->kill(nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	802CBFA0
 * Size:	000004
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802CBFA4
 * Size:	00012C
 */
void StateStay::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* snagret         = OBJ(enemy);
	snagret->mStateTimer = 0.0f;
	snagret->finishJointShadow();

	Vector3f position = snagret->getPosition();
	snagret->onSetPosition(position);
	snagret->setAtari(false);
	snagret->enableEvent(0, EB_Invulnerable);
	snagret->mIsUnderground = true;
	snagret->enableEvent(0, EB_BitterImmune);
	snagret->hardConstraintOn();
	snagret->disableEvent(0, EB_Animating);
	snagret->enableEvent(0, EB_ModelHidden);
	snagret->disableEvent(0, EB_LifegaugeVisible);

	snagret->mTargetVelocity = Vector3f(0.0f);
	snagret->startMotion(SNAKEWHOLEANIM_Appear1, nullptr);
	snagret->stopMotion();

	if (snagret->mWaterBox) {
		snagret->fadeEfxHamon();
	}
}

/*
 * --INFO--
 * Address:	802CC0D0
 * Size:	000618
 */
void StateStay::exec(EnemyBase* enemy)
{
	Obj* snagret     = OBJ(enemy);
	Creature* target = nullptr;
	Parms* parms     = static_cast<Parms*>(snagret->mParms);
	if (snagret->mStateTimer > parms->mProperParms.mUndergroundTime.mValue) {
		f32 territory    = parms->mGeneral.mTerritoryRadius.mValue;
		Vector3f homePos = Vector3f(snagret->mHomePosition);
		f32 tSqr         = territory * territory;

		Iterator<Piki> pikiIterator(pikiMgr);
		bool targetNotFound = true;
		pikiIterator.first();

		while (!pikiIterator.isDone()) {
			Piki* piki = (*pikiIterator);
			if (piki->isAlive() && piki->isPikmin() && !piki->isStickToMouth()) {
				Vector3f pikiPos = piki->getPosition();
				Vector3f diff    = homePos - pikiPos;
				f32 sqrDist      = SQUARE(diff.x) + SQUARE(diff.y) + SQUARE(diff.z);
				if (sqrDist < tSqr) {
					target         = piki;
					targetNotFound = false;
				} else if (sqrDist < 160000.0f) {
					targetNotFound = false;
				}
			}

			if (target) {
				break;
			}
			pikiIterator.next();
		}

		if (target == nullptr) {
			Iterator<Navi> naviIterator(naviMgr);
			naviIterator.first();

			while (!naviIterator.isDone()) {
				Navi* navi = (*naviIterator);
				if (navi->isAlive()) {
					Vector3f naviPos = navi->getPosition();
					Vector3f diff    = homePos - naviPos;
					f32 sqrDist      = SQUARE(diff.x) + SQUARE(diff.y) + SQUARE(diff.z);
					if (sqrDist < tSqr) {
						target         = navi;
						targetNotFound = false;
					} else if (sqrDist < 160000.0f) {
						targetNotFound = false;
					}
				}

				if (target) {
					break;
				}
				naviIterator.next();
			}
		}

		if (targetNotFound) {
			snagret->resetBossAppearBGM();
		}
	}

	snagret->mStateTimer += sys->mDeltaTime;
	if (target) {
		snagret->mTargetCreature = target;
		snagret->appearNearByTarget(target);
		snagret->setBossAppearBGM();
		Parms* parms = static_cast<Parms*>(snagret->mParms);
		if (randWeightFloat(1.0f) < parms->mProperParms.mFastAppearChance.mValue) {
			transit(snagret, SNAKEWHOLE_Appear1, nullptr);
		} else {
			transit(snagret, SNAKEWHOLE_Appear2, nullptr);
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
	stfd     f28, 0x60(r1)
	psq_st   f28, 104(r1), 0, qr0
	stmw     r27, 0x4c(r1)
	mr       r28, r3
	lwz      r3, 0xc0(r4)
	lfs      f1, 0x2c4(r4)
	mr       r31, r4
	lfs      f0, 0x86c(r3)
	li       r30, 0
	fcmpo    cr0, f1, f0
	ble      lbl_802CC5FC
	lfs      f0, 0x35c(r3)
	lis      r3, "__vt__22Iterator<Q24Game4Piki>"@ha
	li       r0, 0
	lfs      f31, 0x198(r31)
	lfs      f30, 0x19c(r31)
	cmplwi   r0, 0
	lfs      f29, 0x1a0(r31)
	addi     r4, r3, "__vt__22Iterator<Q24Game4Piki>"@l
	lwz      r3, pikiMgr__4Game@sda21(r13)
	fmuls    f28, f0, f0
	stw      r4, 0x30(r1)
	li       r29, 1
	stw      r0, 0x3c(r1)
	stw      r0, 0x34(r1)
	stw      r3, 0x38(r1)
	bne      lbl_802CC178
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)
	b        lbl_802CC384

lbl_802CC178:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)
	b        lbl_802CC1E4

lbl_802CC190:
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802CC384
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)

lbl_802CC1E4:
	lwz      r12, 0x30(r1)
	addi     r3, r1, 0x30
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802CC190
	b        lbl_802CC384

lbl_802CC204:
	lwz      r3, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r27, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802CC2C0
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802CC2C0
	mr       r3, r27
	bl       isStickToMouth__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_802CC2C0
	mr       r4, r27
	addi     r3, r1, 0x14
	lwz      r12, 0(r27)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x18(r1)
	lfs      f1, 0x14(r1)
	fsubs    f2, f30, f0
	lfs      f0, 0x1c(r1)
	fsubs    f3, f31, f1
	fsubs    f1, f29, f0
	fmuls    f0, f2, f2
	fmadds   f0, f3, f3, f0
	fmadds   f1, f1, f1, f0
	fcmpo    cr0, f1, f28
	bge      lbl_802CC2B0
	mr       r30, r27
	li       r29, 0
	b        lbl_802CC2C0

lbl_802CC2B0:
	lfs      f0, lbl_8051C820@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_802CC2C0
	li       r29, 0

lbl_802CC2C0:
	cmplwi   r30, 0
	bne      lbl_802CC3A4
	lwz      r0, 0x3c(r1)
	cmplwi   r0, 0
	bne      lbl_802CC2F4
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)
	b        lbl_802CC384

lbl_802CC2F4:
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)
	b        lbl_802CC368

lbl_802CC314:
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802CC384
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)

lbl_802CC368:
	lwz      r12, 0x30(r1)
	addi     r3, r1, 0x30
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802CC314

lbl_802CC384:
	lwz      r3, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x34(r1)
	cmplw    r4, r3
	bne      lbl_802CC204

lbl_802CC3A4:
	cmplwi   r30, 0
	bne      lbl_802CC5EC
	li       r0, 0
	lwz      r3, naviMgr__4Game@sda21(r13)
	lis      r4, "__vt__22Iterator<Q24Game4Navi>"@ha
	stw      r0, 0x2c(r1)
	addi     r4, r4, "__vt__22Iterator<Q24Game4Navi>"@l
	cmplwi   r0, 0
	stw      r4, 0x20(r1)
	stw      r0, 0x24(r1)
	stw      r3, 0x28(r1)
	bne      lbl_802CC3EC
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_802CC5CC

lbl_802CC3EC:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_802CC458

lbl_802CC404:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802CC5CC
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_802CC458:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802CC404
	b        lbl_802CC5CC

lbl_802CC478:
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r27, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802CC508
	mr       r4, r27
	addi     r3, r1, 8
	lwz      r12, 0(r27)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0xc(r1)
	lfs      f1, 8(r1)
	fsubs    f2, f30, f0
	lfs      f0, 0x10(r1)
	fsubs    f3, f31, f1
	fsubs    f1, f29, f0
	fmuls    f0, f2, f2
	fmadds   f0, f3, f3, f0
	fmadds   f1, f1, f1, f0
	fcmpo    cr0, f1, f28
	bge      lbl_802CC4F8
	mr       r30, r27
	li       r29, 0
	b        lbl_802CC508

lbl_802CC4F8:
	lfs      f0, lbl_8051C820@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_802CC508
	li       r29, 0

lbl_802CC508:
	cmplwi   r30, 0
	bne      lbl_802CC5EC
	lwz      r0, 0x2c(r1)
	cmplwi   r0, 0
	bne      lbl_802CC53C
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_802CC5CC

lbl_802CC53C:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_802CC5B0

lbl_802CC55C:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802CC5CC
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_802CC5B0:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802CC55C

lbl_802CC5CC:
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x24(r1)
	cmplw    r4, r3
	bne      lbl_802CC478

lbl_802CC5EC:
	clrlwi.  r0, r29, 0x18
	beq      lbl_802CC5FC
	mr       r3, r31
	bl       resetBossAppearBGM__Q34Game10SnakeWhole3ObjFv

lbl_802CC5FC:
	lwz      r3, sys@sda21(r13)
	cmplwi   r30, 0
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2c4(r31)
	beq      lbl_802CC6B4
	stw      r30, 0x230(r31)
	mr       r3, r31
	mr       r4, r30
	bl       appearNearByTarget__Q34Game10SnakeWhole3ObjFPQ24Game8Creature
	mr       r3, r31
	bl       setBossAppearBGM__Q34Game10SnakeWhole3ObjFv
	lwz      r29, 0xc0(r31)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x44(r1)
	lfd      f3, lbl_8051C830@sda21(r2)
	stw      r0, 0x40(r1)
	lfs      f2, lbl_8051C824@sda21(r2)
	lfd      f0, 0x40(r1)
	lfs      f1, lbl_8051C828@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, 0x81c(r29)
	fmuls    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_802CC694
	mr       r3, r28
	mr       r4, r31
	lwz      r12, 0(r28)
	li       r5, 2
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_802CC6B4

lbl_802CC694:
	mr       r3, r28
	mr       r4, r31
	lwz      r12, 0(r28)
	li       r5, 3
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_802CC6B4:
	psq_l    f31, 152(r1), 0, qr0
	lfd      f31, 0x90(r1)
	psq_l    f30, 136(r1), 0, qr0
	lfd      f30, 0x80(r1)
	psq_l    f29, 120(r1), 0, qr0
	lfd      f29, 0x70(r1)
	psq_l    f28, 104(r1), 0, qr0
	lfd      f28, 0x60(r1)
	lmw      r27, 0x4c(r1)
	lwz      r0, 0xa4(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802CC6E8
 * Size:	000098
 */
void StateStay::cleanup(EnemyBase* enemy)
{
	Obj* snagret = OBJ(enemy);
	snagret->setAtari(true);
	snagret->disableEvent(0, EB_Invulnerable);
	snagret->mIsUnderground = false;
	snagret->disableEvent(0, EB_BitterImmune);
	snagret->hardConstraintOff();
	snagret->enableEvent(0, EB_Animating);
	snagret->disableEvent(0, EB_ModelHidden);
	snagret->enableEvent(0, EB_LifegaugeVisible);
	snagret->lifeIncrement();
}

/*
 * --INFO--
 * Address:	802CC780
 * Size:	0000D4
 */
void StateAppear1::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* snagret = OBJ(enemy);
	snagret->enableEvent(0, EB_NoInterrupt);
	snagret->disableEvent(0, EB_Cullable);
	snagret->hardConstraintOn();
	snagret->mTargetVelocity = Vector3f(0.0f);
	snagret->setEmotionExcitement();
	snagret->startMotion(SNAKEWHOLEANIM_Appear1, nullptr);
	snagret->createAppearEffect(0);

	Vector3f position = snagret->getPosition();
	cameraMgr->startVibration(6, position, 2);
	rumbleMgr->startRumble(15, position, 2);
}

/*
 * --INFO--
 * Address:	802CC854
 * Size:	0002F8
 */
void StateAppear1::exec(EnemyBase* enemy)
{
	Obj* snagret = OBJ(enemy);
	if (snagret->mCurAnim->mIsPlaying) {
		if ((u32)snagret->mCurAnim->mType == KEYEVENT_2) {
			snagret->disableEvent(0, EB_NoInterrupt);
			snagret->startJointShadow();

		} else if ((u32)snagret->mCurAnim->mType == KEYEVENT_3) {
			snagret->enableEvent(0, EB_NoInterrupt);
			snagret->startBossAttackBGM();

			Vector3f position = snagret->getPosition();
			cameraMgr->startVibration(6, position, 2);
			rumbleMgr->startRumble(14, position, 2);

		} else if ((u32)snagret->mCurAnim->mType == KEYEVENT_4) {
			snagret->disableEvent(0, EB_NoInterrupt);

			Vector3f position = snagret->getPosition();
			cameraMgr->startVibration(6, position, 2);
			rumbleMgr->startRumble(14, position, 2);

		} else if ((u32)snagret->mCurAnim->mType == KEYEVENT_END) {
			snagret->setAttackPosition();
			if (snagret->mHealth <= 0.0f) {
				transit(snagret, SNAKEWHOLE_Dead, nullptr);

			} else if (EnemyFunc::isStartFlick(snagret, false)) {
				transit(snagret, SNAKEWHOLE_Disappear, nullptr);

			} else if (snagret->getAttackPiki(5) != nullptr || snagret->getAttackNavi(5)) {
				if (snagret->getStickHeadPikmin() != 0) {
					transit(snagret, SNAKEWHOLE_Struggle, nullptr);
				} else {
					transit(snagret, SNAKEWHOLE_Attack, nullptr);
				}

			} else if (snagret->getSearchedTarget()) {
				transit(snagret, SNAKEWHOLE_Walk, nullptr);

			} else {
				transit(snagret, SNAKEWHOLE_Wait, nullptr);
			}
		}

		Vector3f position = snagret->getPosition();
		cameraMgr->startVibration(3, position, 2);
		rumbleMgr->startRumble(8, position, 2);
	}
}

/*
 * --INFO--
 * Address:	802CCB4C
 * Size:	000068
 */
void StateAppear1::cleanup(EnemyBase* enemy)
{
	Obj* snagret = OBJ(enemy);
	snagret->disableEvent(0, EB_NoInterrupt);
	snagret->enableEvent(0, EB_Cullable);
	snagret->hardConstraintOff();

	if (snagret->mWaterBox) {
		snagret->createEfxHamon();
	}
}

/*
 * --INFO--
 * Address:	802CCBB4
 * Size:	0000D4
 */
void StateAppear2::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* snagret = OBJ(enemy);
	snagret->enableEvent(0, EB_NoInterrupt);
	snagret->disableEvent(0, EB_Cullable);
	snagret->hardConstraintOn();
	snagret->mTargetVelocity = Vector3f(0.0f);
	snagret->setEmotionExcitement();
	snagret->startMotion(SNAKEWHOLEANIM_Appear2, nullptr);
	snagret->createAppearEffect(1);

	Vector3f position = snagret->getPosition();
	cameraMgr->startVibration(8, position, 2);
	rumbleMgr->startRumble(12, position, 2);
}

/*
 * --INFO--
 * Address:	802CCC88
 * Size:	000318
 */
void StateAppear2::exec(EnemyBase* enemy)
{
	Obj* snagret = OBJ(enemy);
	if (snagret->mCurAnim->mIsPlaying) {
		if ((u32)snagret->mCurAnim->mType == KEYEVENT_2) {
			snagret->disableEvent(0, EB_NoInterrupt);
			snagret->startJointShadow();

		} else if ((u32)snagret->mCurAnim->mType == KEYEVENT_3) {
			snagret->startBossAttackBGM();

		} else if ((u32)snagret->mCurAnim->mType == KEYEVENT_4) {
			snagret->createAppearEffect(2);

			Vector3f position = snagret->getPosition();
			cameraMgr->startVibration(3, position, 2);
			rumbleMgr->startRumble(11, position, 2);

		} else if ((u32)snagret->mCurAnim->mType == KEYEVENT_5) {
			snagret->enableEvent(0, EB_NoInterrupt);

			Vector3f position = snagret->getPosition();
			cameraMgr->startVibration(3, position, 2);
			rumbleMgr->startRumble(11, position, 2);

		} else if ((u32)snagret->mCurAnim->mType == KEYEVENT_6) {
			snagret->disableEvent(0, EB_NoInterrupt);

			Vector3f position = snagret->getPosition();
			cameraMgr->startVibration(6, position, 2);
			rumbleMgr->startRumble(14, position, 2);

		} else if ((u32)snagret->mCurAnim->mType == KEYEVENT_END) {
			snagret->setAttackPosition();
			if (snagret->mHealth <= 0.0f) {
				transit(snagret, SNAKEWHOLE_Dead, nullptr);

			} else if (EnemyFunc::isStartFlick(snagret, false)) {
				transit(snagret, SNAKEWHOLE_Disappear, nullptr);

			} else if (snagret->getAttackPiki(5) != nullptr || snagret->getAttackNavi(5)) {
				if (snagret->getStickHeadPikmin() != 0) {
					transit(snagret, SNAKEWHOLE_Struggle, nullptr);
				} else {
					transit(snagret, SNAKEWHOLE_Attack, nullptr);
				}

			} else if (snagret->getSearchedTarget()) {
				transit(snagret, SNAKEWHOLE_Walk, nullptr);

			} else {
				transit(snagret, SNAKEWHOLE_Wait, nullptr);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	802CCFA0
 * Size:	000068
 */
void StateAppear2::cleanup(EnemyBase* enemy)
{
	Obj* snagret = OBJ(enemy);
	snagret->disableEvent(0, EB_NoInterrupt);
	snagret->enableEvent(0, EB_Cullable);
	snagret->hardConstraintOff();

	if (snagret->mWaterBox) {
		snagret->createEfxHamon();
	}
}

/*
 * --INFO--
 * Address:	802CD008
 * Size:	000064
 */
void StateDisappear::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->hardConstraintOn();
	enemy->disableEvent(0, EB_Cullable);
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->setEmotionCaution();
	enemy->startMotion(SNAKEWHOLEANIM_Dive, nullptr);
}

/*
 * --INFO--
 * Address:	802CD06C
 * Size:	000214
 */
void StateDisappear::exec(EnemyBase* enemy)
{
	Obj* snagret = OBJ(enemy);

	if (snagret->mCurAnim->mIsPlaying) {
		if ((u32)snagret->mCurAnim->mType == KEYEVENT_2) {
			Parms* parms1 = static_cast<Parms*>(snagret->mParms);
			EnemyFunc::flickNearbyNavi(snagret, parms1->mGeneral.mShakeRange.mValue, parms1->mGeneral.mShakeKnockback.mValue,
			                           parms1->mGeneral.mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);
			Parms* parms2 = static_cast<Parms*>(snagret->mParms);
			EnemyFunc::flickNearbyPikmin(snagret, parms2->mGeneral.mShakeRange.mValue, parms2->mGeneral.mShakeKnockback.mValue,
			                             parms2->mGeneral.mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);

			Parms* parms3 = static_cast<Parms*>(snagret->mParms);
			EnemyFunc::flickStickPikmin(snagret, parms3->mGeneral.mShakeChance.mValue, parms3->mGeneral.mShakeKnockback.mValue,
			                            parms3->mGeneral.mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);
			snagret->enableEvent(0, EB_NoInterrupt);
			snagret->startBossFlickBGM();

		} else if ((u32)snagret->mCurAnim->mType == KEYEVENT_3) {
			snagret->disableEvent(0, EB_NoInterrupt);

		} else if ((u32)snagret->mCurAnim->mType == KEYEVENT_4) {
			Vector3f position = snagret->getPosition();
			efx::Arg fxArg(position);
			efx::THebiAphd_dive diveFx;
			diveFx.create(&fxArg);

			cameraMgr->startVibration(6, position, 2);
			rumbleMgr->startRumble(15, position, 2);

		} else if ((u32)snagret->mCurAnim->mType == KEYEVENT_5) {
			snagret->mIsUnderground = true;
			snagret->enableEvent(0, EB_BitterImmune);
			snagret->mFlickTimer = 0.0f;
			snagret->finishJointShadow();

		} else if ((u32)snagret->mCurAnim->mType == KEYEVENT_END) {
			transit(snagret, SNAKEWHOLE_Stay, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	802CD280
 * Size:	000078
 */
void StateDisappear::cleanup(EnemyBase* enemy)
{
	Obj* snagret = OBJ(enemy);
	EnemyFunc::flickStickPikmin(snagret, 1.0f, 10.0f, 0.0f, FLICK_BACKWARD_ANGLE, nullptr);
	snagret->mIsUnderground = false;
	snagret->disableEvent(0, EB_BitterImmune);
	snagret->disableEvent(0, EB_NoInterrupt);
	snagret->enableEvent(0, EB_Cullable);
	snagret->hardConstraintOff();
}

/*
 * --INFO--
 * Address:	802CD2F8
 * Size:	000068
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* snagret         = OBJ(enemy);
	snagret->mStateTimer = 0.0f;
	snagret->mNextState  = SNAKEWHOLE_NULL;
	snagret->setAttackPosition();
	snagret->mTargetCreature = nullptr;
	snagret->mTargetVelocity = Vector3f(0.0f);
	snagret->startMotion(SNAKEWHOLEANIM_Wait, nullptr);
}

/*
 * --INFO--
 * Address:	802CD360
 * Size:	000198
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* snagret = OBJ(enemy);
	if (snagret->mHealth <= 0.0f) {
		snagret->mNextState = SNAKEWHOLE_Dead;
		snagret->finishMotion();
	} else if (EnemyFunc::isStartFlick(snagret, false)
	           || snagret->mStateTimer > static_cast<Parms*>(snagret->mParms)->mProperParms.mWaitTime.mValue) {
		snagret->mNextState = SNAKEWHOLE_Disappear;
		snagret->finishMotion();
	} else if (snagret->isOutTerritory()) {
		snagret->mNextState = SNAKEWHOLE_Home;
		snagret->finishMotion();
	} else if (snagret->getAttackPiki(5) != nullptr || snagret->getAttackNavi(5)) {
		snagret->mNextState = SNAKEWHOLE_Attack;
		snagret->finishMotion();
	} else if (snagret->getSearchedTarget()) {
		snagret->mNextState = SNAKEWHOLE_Walk;
		snagret->finishMotion();
	} else {
		snagret->mNextState = SNAKEWHOLE_Wait;
	}

	snagret->mStateTimer += sys->mDeltaTime;

	if (snagret->mCurAnim->mIsPlaying && (u32)snagret->mCurAnim->mType == KEYEVENT_END) {
		if (snagret->mNextState == SNAKEWHOLE_Attack && snagret->getStickHeadPikmin() != 0) {
			snagret->mNextState = SNAKEWHOLE_Struggle;
		}

		transit(snagret, snagret->mNextState, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802CD4F8
 * Size:	000004
 */
void StateWait::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802CD4FC
 * Size:	000048
 */
void StateWalk::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* snagret             = OBJ(enemy);
	snagret->mIsJumping      = false;
	snagret->mFaceDirOffset  = 0.0f;
	snagret->mTargetVelocity = Vector3f(0.0f);
	snagret->startMotion(SNAKEWHOLEANIM_Jump, nullptr);
}

/*
 * --INFO--
 * Address:	802CD544
 * Size:	000288
 */
void StateWalk::exec(EnemyBase* enemy)
{
	Obj* snagret = OBJ(enemy);
	snagret->setAttackPosition();
	if (snagret->mHealth <= 0.0f) {
		snagret->mNextState = SNAKEWHOLE_Dead;
		snagret->finishMotion();
	} else if (EnemyFunc::isStartFlick(snagret, false)) {
		snagret->mNextState = SNAKEWHOLE_Disappear;
		snagret->finishMotion();
	} else if (snagret->isOutTerritory()) {
		snagret->mNextState = SNAKEWHOLE_Home;
		snagret->finishMotion();
	} else if (snagret->getAttackPiki(5) != nullptr || snagret->getAttackNavi(5)) {
		snagret->mNextState = SNAKEWHOLE_Attack;
		snagret->finishMotion();
	}

	if (snagret->mIsJumping) {
		snagret->updateFace();
	} else {
		snagret->mTargetVelocity = Vector3f(0.0f);
	}

	if (snagret->mCurAnim->mIsPlaying) {
		if ((u32)snagret->mCurAnim->mType == KEYEVENT_2) {
			snagret->enableEvent(0, EB_NoInterrupt);
			snagret->mIsJumping     = true;
			snagret->mFaceDirOffset = 0.0f;

			Creature* target = snagret->getSearchedTarget();
			if (target) {
				Vector3f targetPos = target->getPosition();
				snagret->setJumpMove(targetPos);
			} else {
				snagret->mNextState = SNAKEWHOLE_Wait;
				snagret->finishMotion();
			}

			snagret->createWalkSmokeEffect(0.75f);

		} else if ((u32)snagret->mCurAnim->mType == KEYEVENT_3) {
			snagret->disableEvent(0, EB_NoInterrupt);
			snagret->mIsJumping = false;
			snagret->createWalkSmokeEffect(0.75f);

			Vector3f position = snagret->getPosition();
			cameraMgr->startVibration(6, position, 2);
			rumbleMgr->startRumble(14, position, 2);

		} else if ((u32)snagret->mCurAnim->mType == KEYEVENT_END) {
			if (snagret->mNextState == SNAKEWHOLE_Attack && snagret->getStickHeadPikmin() != 0) {
				snagret->mNextState = SNAKEWHOLE_Struggle;
			}

			transit(snagret, snagret->mNextState, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	802CD7CC
 * Size:	000010
 */
void StateWalk::cleanup(EnemyBase* enemy) { enemy->disableEvent(0, EB_NoInterrupt); }

/*
 * --INFO--
 * Address:	802CD7DC
 * Size:	000048
 */
void StateHome::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* snagret             = OBJ(enemy);
	snagret->mIsJumping      = false;
	snagret->mFaceDirOffset  = 0.0f;
	snagret->mTargetVelocity = Vector3f(0.0f);
	snagret->startMotion(SNAKEWHOLEANIM_Jump, nullptr);
}

/*
 * --INFO--
 * Address:	802CD824
 * Size:	0001A4
 */
void StateHome::exec(EnemyBase* enemy)
{
	Obj* snagret = OBJ(enemy);
	snagret->setAttackPosition();
	if (snagret->mHealth <= 0.0f) {
		snagret->mNextState = SNAKEWHOLE_Dead;
		snagret->finishMotion();
	} else if (EnemyFunc::isStartFlick(snagret, false)) {
		snagret->mNextState = SNAKEWHOLE_Disappear;
		snagret->finishMotion();
	} else if (snagret->isInHomeRange()) {
		snagret->mTargetVelocity = Vector3f(0.0f);
		snagret->mNextState      = SNAKEWHOLE_Wait;
		snagret->finishMotion();
	}

	if (snagret->mIsJumping) {
		snagret->updateFace();
	} else {
		snagret->mTargetVelocity = Vector3f(0.0f);
	}

	if (snagret->mCurAnim->mIsPlaying) {
		if ((u32)snagret->mCurAnim->mType == KEYEVENT_2) {
			snagret->enableEvent(0, EB_NoInterrupt);
			snagret->mIsJumping     = true;
			snagret->mFaceDirOffset = 0.0f;

			Vector3f targetPos = Vector3f(snagret->mHomePosition);
			snagret->setJumpMove(targetPos);
			snagret->createWalkSmokeEffect(0.75f);

		} else if ((u32)snagret->mCurAnim->mType == KEYEVENT_3) {
			snagret->disableEvent(0, EB_NoInterrupt);
			snagret->mIsJumping = false;
			snagret->createWalkSmokeEffect(0.75f);

		} else if ((u32)snagret->mCurAnim->mType == KEYEVENT_END) {
			transit(snagret, snagret->mNextState, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	802CD9C8
 * Size:	000010
 */
void StateHome::cleanup(EnemyBase* enemy) { enemy->disableEvent(0, EB_NoInterrupt); }

/*
 * --INFO--
 * Address:	802CD9D8
 * Size:	00004C
 */
void StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* snagret = OBJ(enemy);
	snagret->disableEvent(0, EB_Cullable);
	snagret->mTargetVelocity = Vector3f(0.0f);
	snagret->startMotion(snagret->mAttackAnimIdx + SNAKEWHOLEANIM_AttackOffset, nullptr);
}

/*
 * --INFO--
 * Address:	802CDA24
 * Size:	0003D0
 */
void StateAttack::exec(EnemyBase* enemy)
{
	Obj* snagret = OBJ(enemy);
	if (!snagret->isFinishMotion()) {
		snagret->setAttackPosition();
	}

	if (snagret->mHealth <= 0.0f) {
		snagret->finishMotion();
	}

	if (snagret->mCurAnim->mIsPlaying) {
		if ((u32)snagret->mCurAnim->mType == KEYEVENT_2) {
			snagret->startJointCallBack();

		} else if ((u32)snagret->mCurAnim->mType == KEYEVENT_3) {
			int idx    = snagret->mAttackAnimIdx;
			Piki* piki = snagret->getAttackPiki(idx);

			if (piki) {
				CollPart* slot = snagret->getSwallowSlot();
				InteractSwallow swallow(snagret, 1.0f, slot);
				piki->stimulate(swallow);

			} else {
				Navi* navi = snagret->getAttackNavi(idx);

				if (navi) {
					Parms* parms = static_cast<Parms*>(snagret->mParms);
					InteractAttack attack(snagret, parms->mGeneral.mAttackDamage.mValue, nullptr);
					navi->stimulate(attack);
				}

				snagret->finishMotion();
			}

			snagret->returnJointCallBack();

		} else if ((u32)snagret->mCurAnim->mType == KEYEVENT_4) {

			if (!snagret->isFinishMotion() && snagret->getSwallowSlot()) {

				if (snagret->getAttackPiki(5) != nullptr || snagret->getAttackNavi(5)) {
					snagret->startMotion(snagret->mAttackAnimIdx + SNAKEWHOLEANIM_AttackOffset, nullptr);
					snagret->setMotionFrame(snagret->getFirstKeyFrame());
					snagret->startJointCallBack();

				} else {
					snagret->finishJointCallBack();
				}

			} else {
				snagret->finishJointCallBack();
			}

		} else if ((u32)snagret->mCurAnim->mType == KEYEVENT_END) {
			if (snagret->mHealth <= 0.0f) {
				transit(snagret, SNAKEWHOLE_Dead, nullptr);
				return;
			}

			if (snagret->isSwallowPikmin()) {
				transit(snagret, SNAKEWHOLE_Eat, nullptr);
				return;
			}

			if (EnemyFunc::isStartFlick(snagret, false)) {
				transit(snagret, SNAKEWHOLE_Disappear, nullptr);
				return;
			}

			if (snagret->getAttackPiki(5) != nullptr || snagret->getAttackNavi(5)) {
				if (snagret->getStickHeadPikmin() != 0) {
					transit(snagret, SNAKEWHOLE_Struggle, nullptr);
					return;

				} else {
					transit(snagret, SNAKEWHOLE_Attack, nullptr);
					return;
				}
			}

			if (snagret->isOutTerritory()) {
				transit(snagret, SNAKEWHOLE_Home, nullptr);
				return;
			}

			if (snagret->getSearchedTarget()) {
				transit(snagret, SNAKEWHOLE_Walk, nullptr);
				return;
			}

			transit(snagret, SNAKEWHOLE_Wait, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	802CDDF4
 * Size:	000010
 */
void StateAttack::cleanup(EnemyBase* enemy) { enemy->enableEvent(0, EB_Cullable); }

/*
 * --INFO--
 * Address:	802CDE04
 * Size:	00003C
 */
void StateEat::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->startMotion(SNAKEWHOLEANIM_Eat, nullptr);
}

/*
 * --INFO--
 * Address:	802CDE40
 * Size:	0001F0
 */
void StateEat::exec(EnemyBase* enemy)
{
	Obj* snagret = OBJ(enemy);
	if (snagret->mCurAnim->mIsPlaying) {
		if ((u32)snagret->mCurAnim->mType == KEYEVENT_2) {
			Parms* parms = static_cast<Parms*>(snagret->mParms);
			EnemyFunc::swallowPikmin(snagret, parms->mProperParms.mPoisonDamage.mValue, nullptr);

		} else if ((u32)snagret->mCurAnim->mType == KEYEVENT_END) {
			snagret->setAttackPosition();

			if (snagret->mHealth <= 0.0f) {
				transit(snagret, SNAKEWHOLE_Dead, nullptr);
				return;
			}

			if (EnemyFunc::isStartFlick(snagret, false)) {
				transit(snagret, SNAKEWHOLE_Disappear, nullptr);
				return;
			}

			if (snagret->getAttackPiki(5) != nullptr || snagret->getAttackNavi(5)) {
				if (snagret->getStickHeadPikmin() != 0) {
					transit(snagret, SNAKEWHOLE_Struggle, nullptr);
					return;

				} else {
					transit(snagret, SNAKEWHOLE_Attack, nullptr);
					return;
				}
			}

			if (snagret->isOutTerritory()) {
				transit(snagret, SNAKEWHOLE_Home, nullptr);
				return;
			}

			if (snagret->getSearchedTarget()) {
				transit(snagret, SNAKEWHOLE_Walk, nullptr);
				return;
			}

			transit(snagret, SNAKEWHOLE_Wait, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	802CE030
 * Size:	000004
 */
void StateEat::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802CE034
 * Size:	000040
 */
void StateStruggle::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* snagret             = OBJ(enemy);
	snagret->mStateTimer     = 0.0f;
	snagret->mTargetVelocity = Vector3f(0.0f);
	snagret->startMotion(SNAKEWHOLEANIM_Struggle, nullptr);
}

/*
 * --INFO--
 * Address:	802CE074
 * Size:	0001C8
 */
void StateStruggle::exec(EnemyBase* enemy)
{
	Obj* snagret = OBJ(enemy);
	if (snagret->mStateTimer > 1.5f) {
		snagret->finishMotion();
	}

	snagret->mStateTimer += sys->mDeltaTime;
	if (snagret->mCurAnim->mIsPlaying && (u32)snagret->mCurAnim->mType == KEYEVENT_END) {
		snagret->setAttackPosition();

		if (snagret->mHealth <= 0.0f) {
			transit(snagret, SNAKEWHOLE_Dead, nullptr);
			return;
		}

		if (EnemyFunc::isStartFlick(snagret, false)) {
			transit(snagret, SNAKEWHOLE_Disappear, nullptr);
			return;
		}

		if (snagret->getAttackPiki(5) != nullptr || snagret->getAttackNavi(5)) {
			transit(snagret, SNAKEWHOLE_Attack, nullptr);
			return;
		}

		if (snagret->isOutTerritory()) {
			transit(snagret, SNAKEWHOLE_Home, nullptr);
			return;
		}

		if (snagret->getSearchedTarget()) {
			transit(snagret, SNAKEWHOLE_Walk, nullptr);
			return;
		}

		transit(snagret, SNAKEWHOLE_Wait, nullptr);
	}
}

/*
 * --INFO--
 * Address:	802CE23C
 * Size:	000004
 */
void StateStruggle::cleanup(EnemyBase* enemy) { }

} // namespace SnakeWhole
} // namespace Game
