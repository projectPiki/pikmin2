#include "Game/Entities/SnakeCrow.h"
#include "Game/EnemyAnimKeyEvent.h"
#include "Game/EnemyFunc.h"
#include "Game/CameraMgr.h"
#include "Game/rumble.h"
#include "Game/PikiMgr.h"
#include "Game/Navi.h"
#include "Game/Interaction.h"
#include "efx/THebi.h"
#include "Iterator.h"
#include "nans.h"

namespace Game {
namespace SnakeCrow {

/*
 * --INFO--
 * Address:	80290724
 * Size:	000328
 */
void FSM::init(EnemyBase* enemy)
{
	create(SNAKECROW_Count);
	registerState(new StateDead);
	registerState(new StateStay);
	registerState(new StateAppear1);
	registerState(new StateAppear2);
	registerState(new StateDisappear);
	registerState(new StateWait);
	registerState(new StateAttack);
	registerState(new StateEat);
	registerState(new StateStruggle);
}

/*
 * --INFO--
 * Address:	80290A4C
 * Size:	0000C4
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* snagret = static_cast<Obj*>(enemy);
	snagret->deathProcedure();
	snagret->resetEvent(0, EB_Cullable);
	snagret->m_simVelocity = Vector3f(0.0f);
	snagret->setEmotionCaution();
	snagret->startMotion(0, nullptr);
	snagret->createDeadStartEffect();

	Vector3f position = snagret->getPosition();
	cameraMgr->startVibration(0, position, 2);
	rumbleMgr->startRumble(13, position, 2);
}

/*
 * --INFO--
 * Address:	80290B10
 * Size:	000170
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* snagret = static_cast<Obj*>(enemy);
	if (snagret->m_curAnim->m_isRunning) {
		if ((u32)snagret->m_curAnim->m_type == KEYEVENT_2) {
			snagret->createDownHeadEffect(0.65f);

		} else if ((u32)snagret->m_curAnim->m_type == KEYEVENT_3) {
			snagret->deleteJointShadow();
			snagret->createDeadFinishEffect();
			snagret->finishWaitEffect();
			snagret->throwupItem();

			Vector3f position = snagret->getPosition();
			cameraMgr->startVibration(0, position, 2);
			rumbleMgr->startRumble(11, position, 2);

		} else if ((u32)snagret->m_curAnim->m_type == KEYEVENT_4) {
			snagret->createDownHeadEffect(0.5f);

		} else if ((u32)snagret->m_curAnim->m_type == KEYEVENT_5) {
			Vector3f position = snagret->getPosition();
			cameraMgr->startVibration(8, position, 2);
			rumbleMgr->startRumble(13, position, 2);

		} else if ((u32)snagret->m_curAnim->m_type == KEYEVENT_END) {
			snagret->kill(nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	80290C80
 * Size:	000004
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	80290C84
 * Size:	000124
 */
void StateStay::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* snagret          = static_cast<Obj*>(enemy);
	snagret->m_stateTimer = 0.0f;
	snagret->finishJointShadow();

	Vector3f position = snagret->getPosition();
	snagret->onSetPosition(position);
	snagret->setAtari(false);
	snagret->setEvent(0, EB_Vulnerable);
	snagret->m_isUnderground = true;
	snagret->setEvent(0, EB_BitterImmune);
	snagret->resetEvent(0, EB_16);
	snagret->setEvent(0, EB_31);
	snagret->resetEvent(0, EB_LifegaugeVisible);

	snagret->m_simVelocity = Vector3f(0.0f);
	snagret->startMotion(1, nullptr);
	snagret->stopMotion();

	if (snagret->m_waterBox) {
		snagret->fadeEfxHamon();
	}
}

/*
 * --INFO--
 * Address:	80290DA8
 * Size:	000618
 */
void StateStay::exec(EnemyBase* enemy)
{
	Obj* snagret     = static_cast<Obj*>(enemy);
	Creature* target = nullptr;
	Parms* parms     = static_cast<Parms*>(snagret->m_parms);
	if (snagret->m_stateTimer > parms->m_properParms._854.m_value) {
		f32 territory    = parms->m_general.m_territoryRadius.m_value;
		Vector3f homePos = Vector3f(snagret->m_homePosition);
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

	snagret->m_stateTimer += sys->m_deltaTime;
	if (target) {
		snagret->m_targetCreature = target;
		snagret->appearNearByTarget(target);
		snagret->setBossAppearBGM();
		Parms* parms = static_cast<Parms*>(snagret->m_parms);
		if (randWeightFloat(1.0f) < parms->m_properParms._804.m_value) {
			transit(snagret, SNAKECROW_Appear1, nullptr);
		} else {
			transit(snagret, SNAKECROW_Appear2, nullptr);
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
	ble      lbl_802912D4
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
	bne      lbl_80290E50
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)
	b        lbl_8029105C

lbl_80290E50:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)
	b        lbl_80290EBC

lbl_80290E68:
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
	bne      lbl_8029105C
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)

lbl_80290EBC:
	lwz      r12, 0x30(r1)
	addi     r3, r1, 0x30
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80290E68
	b        lbl_8029105C

lbl_80290EDC:
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
	beq      lbl_80290F98
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80290F98
	mr       r3, r27
	bl       isStickToMouth__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80290F98
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
	bge      lbl_80290F88
	mr       r30, r27
	li       r29, 0
	b        lbl_80290F98

lbl_80290F88:
	lfs      f0, lbl_8051BA38@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80290F98
	li       r29, 0

lbl_80290F98:
	cmplwi   r30, 0
	bne      lbl_8029107C
	lwz      r0, 0x3c(r1)
	cmplwi   r0, 0
	bne      lbl_80290FCC
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)
	b        lbl_8029105C

lbl_80290FCC:
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)
	b        lbl_80291040

lbl_80290FEC:
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
	bne      lbl_8029105C
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)

lbl_80291040:
	lwz      r12, 0x30(r1)
	addi     r3, r1, 0x30
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80290FEC

lbl_8029105C:
	lwz      r3, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x34(r1)
	cmplw    r4, r3
	bne      lbl_80290EDC

lbl_8029107C:
	cmplwi   r30, 0
	bne      lbl_802912C4
	li       r0, 0
	lwz      r3, naviMgr__4Game@sda21(r13)
	lis      r4, "__vt__22Iterator<Q24Game4Navi>"@ha
	stw      r0, 0x2c(r1)
	addi     r4, r4, "__vt__22Iterator<Q24Game4Navi>"@l
	cmplwi   r0, 0
	stw      r4, 0x20(r1)
	stw      r0, 0x24(r1)
	stw      r3, 0x28(r1)
	bne      lbl_802910C4
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_802912A4

lbl_802910C4:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_80291130

lbl_802910DC:
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
	bne      lbl_802912A4
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_80291130:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_802910DC
	b        lbl_802912A4

lbl_80291150:
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
	beq      lbl_802911E0
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
	bge      lbl_802911D0
	mr       r30, r27
	li       r29, 0
	b        lbl_802911E0

lbl_802911D0:
	lfs      f0, lbl_8051BA38@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_802911E0
	li       r29, 0

lbl_802911E0:
	cmplwi   r30, 0
	bne      lbl_802912C4
	lwz      r0, 0x2c(r1)
	cmplwi   r0, 0
	bne      lbl_80291214
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_802912A4

lbl_80291214:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_80291288

lbl_80291234:
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
	bne      lbl_802912A4
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_80291288:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80291234

lbl_802912A4:
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x24(r1)
	cmplw    r4, r3
	bne      lbl_80291150

lbl_802912C4:
	clrlwi.  r0, r29, 0x18
	beq      lbl_802912D4
	mr       r3, r31
	bl       resetBossAppearBGM__Q34Game9SnakeCrow3ObjFv

lbl_802912D4:
	lwz      r3, sys@sda21(r13)
	cmplwi   r30, 0
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2c4(r31)
	beq      lbl_8029138C
	stw      r30, 0x230(r31)
	mr       r3, r31
	mr       r4, r30
	bl       appearNearByTarget__Q34Game9SnakeCrow3ObjFPQ24Game8Creature
	mr       r3, r31
	bl       setBossAppearBGM__Q34Game9SnakeCrow3ObjFv
	lwz      r29, 0xc0(r31)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x44(r1)
	lfd      f3, lbl_8051BA48@sda21(r2)
	stw      r0, 0x40(r1)
	lfs      f2, lbl_8051BA3C@sda21(r2)
	lfd      f0, 0x40(r1)
	lfs      f1, lbl_8051BA40@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, 0x81c(r29)
	fmuls    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_8029136C
	mr       r3, r28
	mr       r4, r31
	lwz      r12, 0(r28)
	li       r5, 2
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8029138C

lbl_8029136C:
	mr       r3, r28
	mr       r4, r31
	lwz      r12, 0(r28)
	li       r5, 3
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8029138C:
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
 * Address:	802913C0
 * Size:	000090
 */
void StateStay::cleanup(EnemyBase* enemy)
{
	Obj* snagret = static_cast<Obj*>(enemy);
	snagret->setAtari(true);
	snagret->resetEvent(0, EB_Vulnerable);
	snagret->m_isUnderground = false;
	snagret->resetEvent(0, EB_BitterImmune);
	snagret->setEvent(0, EB_16);
	snagret->resetEvent(0, EB_31);
	snagret->setEvent(0, EB_LifegaugeVisible);
	snagret->lifeIncrement();
}

/*
 * --INFO--
 * Address:	80291450
 * Size:	0000CC
 */
void StateAppear1::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* snagret = static_cast<Obj*>(enemy);
	snagret->setEvent(0, EB_22);
	snagret->resetEvent(0, EB_Cullable);
	snagret->m_simVelocity = Vector3f(0.0f);
	snagret->setEmotionExcitement();
	snagret->startMotion(1, nullptr);
	snagret->createAppearEffect(0);

	Vector3f position = snagret->getPosition();
	cameraMgr->startVibration(6, position, 2);
	rumbleMgr->startRumble(15, position, 2);
}

/*
 * --INFO--
 * Address:	8029151C
 * Size:	000158
 */
void StateAppear1::exec(EnemyBase* enemy)
{
	Obj* snagret = static_cast<Obj*>(enemy);
	if (snagret->m_curAnim->m_isRunning) {
		if ((u32)snagret->m_curAnim->m_type == KEYEVENT_2) {
			snagret->resetEvent(0, EB_22);
			snagret->startBossAttackBGM();
			snagret->startJointShadow();

		} else if ((u32)snagret->m_curAnim->m_type == KEYEVENT_END) {
			snagret->setAttackPosition();
			if (snagret->m_health <= 0.0f) {
				transit(snagret, SNAKECROW_Dead, nullptr);
				return;
			}

			if (snagret->getAttackPiki(5) != nullptr || snagret->getAttackNavi(5)) {
				if (snagret->getStickHeadPikmin() != 0) {
					transit(snagret, SNAKECROW_Struggle, nullptr);
				} else {
					transit(snagret, SNAKECROW_Attack, nullptr);
				}
			} else {
				transit(snagret, SNAKECROW_Wait, nullptr);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	80291674
 * Size:	000068
 */
void StateAppear1::cleanup(EnemyBase* enemy)
{
	Obj* snagret = static_cast<Obj*>(enemy);
	snagret->resetEvent(0, EB_22);
	snagret->setEvent(0, EB_Cullable);
	snagret->startWaitEffect();

	if (snagret->m_waterBox) {
		snagret->createEfxHamon();
	}
}

/*
 * --INFO--
 * Address:	802916DC
 * Size:	0000CC
 */
void StateAppear2::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* snagret = static_cast<Obj*>(enemy);
	snagret->setEvent(0, EB_22);
	snagret->resetEvent(0, EB_Cullable);
	snagret->m_simVelocity = Vector3f(0.0f);
	snagret->setEmotionExcitement();
	snagret->startMotion(2, nullptr);
	snagret->createAppearEffect(1);

	Vector3f position = snagret->getPosition();
	cameraMgr->startVibration(8, position, 2);
	rumbleMgr->startRumble(12, position, 2);
}

/*
 * --INFO--
 * Address:	802917A8
 * Size:	000234
 */
void StateAppear2::exec(EnemyBase* enemy)
{
	Obj* snagret = static_cast<Obj*>(enemy);
	if (snagret->m_curAnim->m_isRunning) {
		if ((u32)snagret->m_curAnim->m_type == KEYEVENT_2) {
			snagret->resetEvent(0, EB_22);
			snagret->startJointShadow();

		} else if ((u32)snagret->m_curAnim->m_type == KEYEVENT_3) {
			snagret->startBossAttackBGM();

		} else if ((u32)snagret->m_curAnim->m_type == KEYEVENT_4) {
			snagret->createAppearEffect(2);
			Vector3f position = snagret->getPosition();
			cameraMgr->startVibration(3, position, 2);
			rumbleMgr->startRumble(11, position, 2);

		} else if ((u32)snagret->m_curAnim->m_type == KEYEVENT_5) {
			Vector3f position = snagret->getPosition();
			cameraMgr->startVibration(3, position, 2);
			rumbleMgr->startRumble(11, position, 2);

		} else if ((u32)snagret->m_curAnim->m_type == KEYEVENT_END) {
			snagret->setAttackPosition();
			if (snagret->m_health <= 0.0f) {
				transit(snagret, SNAKECROW_Dead, nullptr);
				return;
			}

			if (snagret->getAttackPiki(5) != nullptr || snagret->getAttackNavi(5)) {
				if (snagret->getStickHeadPikmin() != 0) {
					transit(snagret, SNAKECROW_Struggle, nullptr);
				} else {
					transit(snagret, SNAKECROW_Attack, nullptr);
				}
			} else {
				transit(snagret, SNAKECROW_Wait, nullptr);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	802919DC
 * Size:	000068
 */
void StateAppear2::cleanup(EnemyBase* enemy)
{
	Obj* snagret = static_cast<Obj*>(enemy);
	snagret->resetEvent(0, EB_22);
	snagret->setEvent(0, EB_Cullable);
	snagret->startWaitEffect();

	if (snagret->m_waterBox) {
		snagret->createEfxHamon();
	}
}

/*
 * --INFO--
 * Address:	80291A44
 * Size:	000140
 */
void StateDisappear::init(EnemyBase* enemy, StateArg* stateArg)
{
	// Obj* snagret = static_cast<Obj*>(enemy);
	Vector3f position = enemy->getPosition();
	efx::Arg fxArg(position);
	efx::THebiAphd_dive diveFx;
	diveFx.create(&fxArg);

	enemy->resetEvent(0, EB_Cullable);
	enemy->m_simVelocity = Vector3f(0.0f);
	enemy->setEmotionCaution();
	enemy->startMotion(3, nullptr);
	cameraMgr->startVibration(6, position, 2);
	rumbleMgr->startRumble(14, position, 2);
}

/*
 * --INFO--
 * Address:	80291B84
 * Size:	000108
 */
void StateDisappear::exec(EnemyBase* enemy)
{
	Obj* snagret = static_cast<Obj*>(enemy);

	if (snagret->m_curAnim->m_isRunning) {
		if ((u32)snagret->m_curAnim->m_type == KEYEVENT_2) {
			Parms* parms1 = static_cast<Parms*>(snagret->m_parms);
			EnemyFunc::flickNearbyNavi(snagret, parms1->m_general.m_shakeRange.m_value, parms1->m_general.m_shakeKnockback.m_value,
			                           parms1->m_general.m_shakeDamage.m_value, -1000.0f, nullptr);
			Parms* parms2 = static_cast<Parms*>(snagret->m_parms);
			EnemyFunc::flickNearbyPikmin(snagret, parms2->m_general.m_shakeRange.m_value, parms2->m_general.m_shakeKnockback.m_value,
			                             parms2->m_general.m_shakeDamage.m_value, -1000.0f, nullptr);

			Parms* parms3 = static_cast<Parms*>(snagret->m_parms);
			EnemyFunc::flickStickPikmin(snagret, parms3->m_general.m_shakeRateMaybe.m_value, parms3->m_general.m_shakeKnockback.m_value,
			                            parms3->m_general.m_shakeDamage.m_value, -1000.0f, nullptr);
			snagret->finishWaitEffect();
			snagret->startBossFlickBGM();

		} else if ((u32)snagret->m_curAnim->m_type == KEYEVENT_3) {
			snagret->m_isUnderground = true;
			snagret->setEvent(0, EB_BitterImmune);
			snagret->m_toFlick = 0.0f;
			snagret->finishJointShadow();

		} else if ((u32)snagret->m_curAnim->m_type == KEYEVENT_END) {
			transit(snagret, SNAKECROW_Stay, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	80291C8C
 * Size:	000064
 */
void StateDisappear::cleanup(EnemyBase* enemy)
{
	Obj* snagret = static_cast<Obj*>(enemy);
	EnemyFunc::flickStickPikmin(snagret, 1.0f, 10.0f, 0.0f, -1000.0f, nullptr);
	snagret->m_isUnderground = false;
	snagret->resetEvent(0, EB_BitterImmune);
	snagret->setEvent(0, EB_Cullable);
}

/*
 * --INFO--
 * Address:	80291CF0
 * Size:	000048
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* snagret              = static_cast<Obj*>(enemy);
	snagret->m_stateTimer     = 0.0f;
	snagret->m_targetCreature = nullptr;
	snagret->m_simVelocity    = Vector3f(0.0f);
	snagret->startMotion(9, nullptr);
}

/*
 * --INFO--
 * Address:	80291D38
 * Size:	0006C0
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* snagret = static_cast<Obj*>(enemy);
	Creature* target;
	Creature* previousTarget = snagret->m_targetCreature;
	if (previousTarget) {
		if (previousTarget->isAlive() && !previousTarget->isStickToMouth() && previousTarget->m_sticker != snagret) {
			f32 approxSpeed;
			EnemyParmsBase* parms = static_cast<EnemyParmsBase*>(snagret->m_parms);
			f32 fov               = parms->m_general.m_fov.m_value;
			f32 visionHeight      = parms->m_general.m_fp25.m_value;
			f32 sightRadius       = parms->m_general.m_sightRadius.m_value;
			f32 privRadius        = parms->m_general.m_privateRadius.m_value;
			Vector3f creaturePos  = previousTarget->getPosition();
			Vector3f pos          = snagret->getPosition();

			f32 angleDist = angDist(angXZ(creaturePos, pos), snagret->getFaceDir());

			f32 xDiff   = previousTarget->getPosition().x - snagret->getPosition().x;
			f32 yDiff   = previousTarget->getPosition().y - snagret->getPosition().y;
			f32 zDiff   = previousTarget->getPosition().z - snagret->getPosition().z;
			bool check1 = true;
			bool check2 = false;

			f32 dist2D = SQUARE(xDiff) + SQUARE(zDiff);
			if (dist2D > SQUARE(privRadius)) {
				bool check3 = false;
				if (dist2D > SQUARE(sightRadius) && (FABS(yDiff) < visionHeight)) {
					check3 = true;
				}
				if (check3) {
					check2 = true;
				}
			}

			if (!check2 && (FABS(angleDist) <= (DEG2RAD * fov) * PI) != 0) {
				check1 = false;
			}

			if (check1) {
				target = nullptr;
			} else {
				Parms* parms2 = static_cast<Parms*>(snagret->m_parms);
				target        = EnemyFunc::getNearestPikminOrNavi(snagret, parms2->m_general.m_fov.m_value,
                                                           parms2->m_general.m_sightRadius.m_value, nullptr, nullptr, nullptr);
			}

		} else {
			Parms* parms = static_cast<Parms*>(snagret->m_parms);
			target = EnemyFunc::getNearestPikminOrNavi(snagret, parms->m_general.m_fov.m_value, parms->m_general.m_sightRadius.m_value,
			                                           nullptr, nullptr, nullptr);
		}

	} else {
		Parms* parms = static_cast<Parms*>(snagret->m_parms);
		target = EnemyFunc::getNearestPikminOrNavi(snagret, parms->m_general.m_fov.m_value, parms->m_general.m_sightRadius.m_value, nullptr,
		                                           nullptr, nullptr);
	}

	if (target) {
		snagret->m_stateTimer = 0.0f;
		f32 angleDist         = snagret->changeFaceDir(target);

		if (FABS(angleDist) <= SIN_2_5) {
			snagret->finishRotateEffect();

		} else {
			snagret->startRotateEffect();
			snagret->getJAIObject()->startSound(PSSE_EN_SNAKE_TURN, 0);
		}

	} else {
		snagret->m_stateTimer += sys->m_deltaTime;
	}

	if (!snagret->isFinishMotion()) {
		if (snagret->m_health <= 0.0f || snagret->m_stateTimer > static_cast<Parms*>(snagret->m_parms)->m_properParms._82C.m_value
		    || EnemyFunc::isStartFlick(snagret, false) || snagret->getAttackPiki(5) != nullptr || snagret->getAttackNavi(5)) {
			snagret->finishMotion();
		}
	}

	if (snagret->m_curAnim->m_isRunning) {
		if ((u32)snagret->m_curAnim->m_type == KEYEVENT_END) {
			if (snagret->m_health <= 0.0f) {
				transit(snagret, SNAKECROW_Dead, nullptr);
				return;
			}

			Parms* parms = static_cast<Parms*>(snagret->m_parms);
			if (snagret->m_stateTimer > parms->m_properParms._82C.m_value || EnemyFunc::isStartFlick(snagret, false)) {
				transit(snagret, SNAKECROW_Disappear, nullptr);
				return;
			}

			if (snagret->getAttackPiki(5) != nullptr || snagret->getAttackNavi(5)) {
				if (snagret->getStickHeadPikmin() != 0) {
					transit(snagret, SNAKECROW_Struggle, nullptr);
				} else {
					transit(snagret, SNAKECROW_Attack, nullptr);
				}
			} else {
				transit(snagret, SNAKECROW_Wait, nullptr);
			}
		}
	}
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
	lwz      r29, 0x230(r4)
	mr       r30, r3
	mr       r31, r4
	cmplwi   r29, 0
	beq      lbl_80292028
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80292004
	mr       r3, r29
	bl       isStickToMouth__Q24Game8CreatureFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80292004
	lwz      r0, 0xf4(r29)
	cmplw    r0, r31
	beq      lbl_80292004
	mr       r4, r29
	lwz      r5, 0xc0(r31)
	lwz      r12, 0(r29)
	addi     r3, r1, 0x20
	lfs      f28, 0x424(r5)
	lwz      r12, 8(r12)
	lfs      f29, 0x3fc(r5)
	lfs      f30, 0x3d4(r5)
	lfs      f31, 0x3ac(r5)
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
	fmr      f24, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f24
	bl       angDist__Fff
	mr       r4, r31
	fmr      f26, f1
	lwz      r12, 0(r31)
	addi     r3, r1, 0x74
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x68
	lwz      r12, 0(r29)
	lfs      f27, 0x74(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 0x68(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0x8c
	fsubs    f24, f0, f27
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x80
	lwz      r12, 0(r29)
	lfs      f27, 0x90(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r31
	lfs      f0, 0x84(r1)
	lwz      r12, 0(r31)
	addi     r3, r1, 0xa4
	fsubs    f25, f0, f27
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r1, 0x98
	lwz      r12, 0(r29)
	lfs      f27, 0xac(r1)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0xa0(r1)
	fmuls    f1, f31, f31
	fmuls    f2, f30, f30
	li       r3, 1
	fsubs    f0, f0, f27
	li       r4, 0
	fmuls    f0, f0, f0
	fmadds   f0, f24, f24, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80291F98
	fcmpo    cr0, f0, f2
	mr       r0, r4
	ble      lbl_80291F8C
	fabs     f0, f25
	frsp     f0, f0
	fcmpo    cr0, f0, f29
	bge      lbl_80291F8C
	mr       r0, r3

lbl_80291F8C:
	clrlwi.  r0, r0, 0x18
	beq      lbl_80291F98
	li       r4, 1

lbl_80291F98:
	clrlwi.  r0, r4, 0x18
	bne      lbl_80291FD0
	lfs      f0, lbl_8051BA5C@sda21(r2)
	fabs     f2, f26
	lfs      f1, lbl_8051BA58@sda21(r2)
	fmuls    f0, f0, f28
	frsp     f2, f2
	fmuls    f0, f1, f0
	fcmpo    cr0, f2, f0
	cror     2, 0, 2
	mfcr     r0
	rlwinm.  r0, r0, 3, 0x1f, 0x1f
	beq      lbl_80291FD0
	li       r3, 0

lbl_80291FD0:
	clrlwi.  r0, r3, 0x18
	beq      lbl_80291FE0
	li       r3, 0
	b        lbl_80292048

lbl_80291FE0:
	lwz      r7, 0xc0(r31)
	mr       r3, r31
	li       r4, 0
	li       r5, 0
	lfs      f1, 0x424(r7)
	li       r6, 0
	lfs      f2, 0x3d4(r7)
	bl
"getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
	b        lbl_80292048

lbl_80292004:
	lwz      r7, 0xc0(r31)
	mr       r3, r31
	li       r4, 0
	li       r5, 0
	lfs      f1, 0x424(r7)
	li       r6, 0
	lfs      f2, 0x3d4(r7)
	bl
"getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"
	b        lbl_80292048

lbl_80292028:
	lwz      r7, 0xc0(r31)
	mr       r3, r31
	li       r4, 0
	li       r5, 0
	lfs      f1, 0x424(r7)
	li       r6, 0
	lfs      f2, 0x3d4(r7)
	bl
"getNearestPikminOrNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>P23Condition<Q24Game4Piki>"

lbl_80292048:
	cmplwi   r3, 0
	beq      lbl_802921CC
	lfs      f0, lbl_8051BA2C@sda21(r2)
	mr       r4, r3
	addi     r3, r1, 0x50
	stfs     f0, 0x2c4(r31)
	lwz      r12, 0(r4)
	lwz      r5, 0xc0(r31)
	lwz      r12, 8(r12)
	lfs      f27, 0x334(r5)
	lfs      f26, 0x30c(r5)
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
	fmr      f24, f1
	mr       r3, r31
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	fmr      f1, f24
	bl       angDist__Fff
	fmr      f28, f1
	lfs      f0, lbl_8051BA5C@sda21(r2)
	lfs      f1, lbl_8051BA58@sda21(r2)
	fmuls    f0, f0, f27
	fmuls    f24, f28, f26
	fmuls    f1, f1, f0
	fabs     f0, f24
	frsp     f0, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80292148
	lfs      f0, lbl_8051BA2C@sda21(r2)
	fcmpo    cr0, f24, f0
	ble      lbl_80292144
	fmr      f24, f1
	b        lbl_80292148

lbl_80292144:
	fneg     f24, f1

lbl_80292148:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fadds    f1, f24, f1
	bl       roundAng__Ff
	fabs     f3, f28
	stfs     f1, 0x1fc(r31)
	lfs      f0, lbl_8051BA60@sda21(r2)
	lfs      f2, 0x1fc(r31)
	frsp     f1, f3
	stfs     f2, 0x1a8(r31)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80292194
	mr       r3, r31
	bl       finishRotateEffect__Q34Game9SnakeCrow3ObjFv
	b        lbl_802921E0

lbl_80292194:
	mr       r3, r31
	bl       startRotateEffect__Q34Game9SnakeCrow3ObjFv
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x5033
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	b        lbl_802921E0

lbl_802921CC:
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2c4(r31)

lbl_802921E0:
	mr       r3, r31
	bl       isFinishMotion__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8029225C
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051BA2C@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	beq      lbl_80292254
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x844(r3)
	fcmpo    cr0, f1, f0
	bgt      lbl_80292254
	mr       r3, r31
	li       r4, 0
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	bne      lbl_80292254
	mr       r3, r31
	li       r4, 5
	bl       getAttackPiki__Q34Game9SnakeCrow3ObjFi
	cmplwi   r3, 0
	bne      lbl_80292254
	mr       r3, r31
	li       r4, 5
	bl       getAttackNavi__Q34Game9SnakeCrow3ObjFi
	cmplwi   r3, 0
	beq      lbl_8029225C

lbl_80292254:
	mr       r3, r31
	bl       finishMotion__Q24Game9EnemyBaseFv

lbl_8029225C:
	lwz      r3, 0x188(r31)
	lbz      r0, 0x24(r3)
	cmplwi   r0, 0
	beq      lbl_8029239C
	lwz      r0, 0x1c(r3)
	cmplwi   r0, 0x3e8
	bne      lbl_8029239C
	lfs      f1, 0x200(r31)
	lfs      f0, lbl_8051BA2C@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_802922B0
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8029239C

lbl_802922B0:
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x2c4(r31)
	lfs      f0, 0x844(r3)
	fcmpo    cr0, f1, f0
	bgt      lbl_802922D8
	mr       r3, r31
	li       r4, 0
	bl       isStartFlick__Q24Game9EnemyFuncFPQ24Game9EnemyBaseb
	clrlwi.  r0, r3, 0x18
	beq      lbl_802922FC

lbl_802922D8:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 4
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8029239C

lbl_802922FC:
	mr       r3, r31
	li       r4, 5
	bl       getAttackPiki__Q34Game9SnakeCrow3ObjFi
	cmplwi   r3, 0
	bne      lbl_80292324
	mr       r3, r31
	li       r4, 5
	bl       getAttackNavi__Q34Game9SnakeCrow3ObjFi
	cmplwi   r3, 0
	beq      lbl_8029237C

lbl_80292324:
	mr       r3, r31
	bl       getStickHeadPikmin__Q34Game9SnakeCrow3ObjFv
	cmpwi    r3, 0
	beq      lbl_80292358
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 8
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8029239C

lbl_80292358:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 6
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8029239C

lbl_8029237C:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 5
	li       r6, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8029239C:
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
 * Address:	802923F8
 * Size:	000024
 */
void StateWait::cleanup(EnemyBase* enemy)
{
	Obj* snagret = static_cast<Obj*>(enemy);
	snagret->finishRotateEffect();
}

/*
 * --INFO--
 * Address:	8029241C
 * Size:	00004C
 */
void StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* snagret = static_cast<Obj*>(enemy);
	snagret->resetEvent(0, EB_Cullable);
	snagret->m_simVelocity = Vector3f(0.0f);
	snagret->startMotion(snagret->_2D4 + 4, nullptr);
}

/*
 * --INFO--
 * Address:	80292468
 * Size:	000334
 */
void StateAttack::exec(EnemyBase* enemy)
{
	Obj* snagret = static_cast<Obj*>(enemy);
	if (!snagret->isFinishMotion()) {
		snagret->setAttackPosition();
	}

	if (snagret->m_health <= 0.0f) {
		snagret->finishMotion();
	}

	if (snagret->m_curAnim->m_isRunning) {
		if ((u32)snagret->m_curAnim->m_type == KEYEVENT_2) {
			snagret->startJointCallBack();

		} else if ((u32)snagret->m_curAnim->m_type == KEYEVENT_3) {
			int idx    = snagret->_2D4;
			Piki* piki = snagret->getAttackPiki(idx);

			if (piki) {
				CollPart* slot = snagret->getSwallowSlot();
				InteractSwallow swallow(snagret, 1.0f, slot, 0);
				piki->stimulate(swallow);

			} else {
				Navi* navi = snagret->getAttackNavi(idx);

				if (navi) {
					Parms* parms = static_cast<Parms*>(snagret->m_parms);
					InteractAttack attack(snagret, parms->m_general.m_attackDamage.m_value, nullptr);
					navi->stimulate(attack);
				}

				snagret->finishMotion();
			}

			snagret->returnJointCallBack();

		} else if ((u32)snagret->m_curAnim->m_type == KEYEVENT_4) {

			if (!snagret->isFinishMotion() && snagret->getSwallowSlot()) {

				if (snagret->getAttackPiki(5) != nullptr || snagret->getAttackNavi(5)) {
					snagret->startMotion(snagret->_2D4 + 4, nullptr);
					snagret->setMotionFrame(snagret->getFirstKeyFrame());
					snagret->startJointCallBack();

				} else {
					snagret->finishJointCallBack();
				}

			} else {
				snagret->finishJointCallBack();
			}

		} else if ((u32)snagret->m_curAnim->m_type == KEYEVENT_END) {
			if (snagret->m_health <= 0.0f) {
				transit(snagret, SNAKECROW_Dead, nullptr);
				return;
			}

			if (snagret->isSwallowPikmin()) {
				transit(snagret, SNAKECROW_Eat, nullptr);
				return;
			}

			if (EnemyFunc::isStartFlick(snagret, false)) {
				transit(snagret, SNAKECROW_Disappear, nullptr);
				return;
			}

			if (snagret->getAttackPiki(5) != nullptr || snagret->getAttackNavi(5)) {
				transit(snagret, SNAKECROW_Attack, nullptr);
			} else {
				transit(snagret, SNAKECROW_Wait, nullptr);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	8029279C
 * Size:	000010
 */
void StateAttack::cleanup(EnemyBase* enemy) { enemy->setEvent(0, EB_Cullable); }

/*
 * --INFO--
 * Address:	802927AC
 * Size:	00003C
 */
void StateEat::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->m_simVelocity = Vector3f(0.0f);
	enemy->startMotion(10, nullptr);
}

/*
 * --INFO--
 * Address:	802927E8
 * Size:	000178
 */
void StateEat::exec(EnemyBase* enemy)
{
	Obj* snagret = static_cast<Obj*>(enemy);
	if (snagret->m_curAnim->m_isRunning) {
		if ((u32)snagret->m_curAnim->m_type == KEYEVENT_2) {
			Parms* parms = static_cast<Parms*>(snagret->m_parms);
			EnemyFunc::swallowPikmin(snagret, parms->m_properParms._87C.m_value, nullptr);

		} else if ((u32)snagret->m_curAnim->m_type == KEYEVENT_END) {
			if (snagret->m_health <= 0.0f) {
				transit(snagret, SNAKECROW_Dead, nullptr);
				return;
			}

			if (EnemyFunc::isStartFlick(snagret, false)) {
				transit(snagret, SNAKECROW_Disappear, nullptr);
				return;
			}

			if (snagret->getAttackPiki(5) != nullptr || snagret->getAttackNavi(5)) {
				if (snagret->getStickHeadPikmin() != 0) {
					transit(snagret, SNAKECROW_Struggle, nullptr);
				} else {
					transit(snagret, SNAKECROW_Attack, nullptr);
				}
			} else {
				transit(snagret, SNAKECROW_Wait, nullptr);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	80292960
 * Size:	000004
 */
void StateEat::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	80292964
 * Size:	000040
 */
void StateStruggle::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* snagret           = static_cast<Obj*>(enemy);
	snagret->m_stateTimer  = 0.0f;
	snagret->m_simVelocity = Vector3f(0.0f);
	snagret->startMotion(11, nullptr);
}

/*
 * --INFO--
 * Address:	802929A4
 * Size:	000158
 */
void StateStruggle::exec(EnemyBase* enemy)
{
	Obj* snagret = static_cast<Obj*>(enemy);
	if (snagret->m_stateTimer > 1.5f) {
		snagret->finishMotion();
	}

	snagret->m_stateTimer += sys->m_deltaTime;
	if (snagret->m_curAnim->m_isRunning && (u32)snagret->m_curAnim->m_type == KEYEVENT_END) {
		if (snagret->m_health <= 0.0f) {
			transit(snagret, SNAKECROW_Dead, nullptr);
			return;
		}

		if (EnemyFunc::isStartFlick(snagret, false)) {
			transit(snagret, SNAKECROW_Disappear, nullptr);
			return;
		}

		if (snagret->getAttackPiki(5) != nullptr || snagret->getAttackNavi(5)) {
			transit(snagret, SNAKECROW_Attack, nullptr);
		} else {
			transit(snagret, SNAKECROW_Wait, nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	80292AFC
 * Size:	000004
 */
void StateStruggle::cleanup(EnemyBase* enemy) { }

} // namespace SnakeCrow
} // namespace Game
