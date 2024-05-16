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
#include "Dolphin/rand.h"
#include "nans.h"

namespace Game {
namespace SnakeCrow {

/**
 * @note Address: 0x80290724
 * @note Size: 0x328
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

/**
 * @note Address: 0x80290A4C
 * @note Size: 0xC4
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* snagret = OBJ(enemy);
	snagret->deathProcedure();
	snagret->disableEvent(0, EB_Cullable);
	snagret->mTargetVelocity = Vector3f(0.0f);
	snagret->setEmotionCaution();
	snagret->startMotion(SNAKECROWANIM_Dead, nullptr);
	snagret->createDeadStartEffect();

	Vector3f position = snagret->getPosition();
	cameraMgr->startVibration(VIBTYPE_LightSlowShort, position, CAMNAVI_Both);
	rumbleMgr->startRumble(RUMBLETYPE_Fixed13, position, RUMBLEID_Both);
}

/**
 * @note Address: 0x80290B10
 * @note Size: 0x170
 */
void StateDead::exec(EnemyBase* enemy)
{
	Obj* snagret = OBJ(enemy);
	if (snagret->mCurAnim->mIsPlaying) {
		if ((u32)snagret->mCurAnim->mType == KEYEVENT_2) {
			snagret->createDownHeadEffect(0.65f);

		} else if ((u32)snagret->mCurAnim->mType == KEYEVENT_3) {
			snagret->deleteJointShadow();
			snagret->createDeadFinishEffect();
			snagret->finishWaitEffect();
			snagret->throwupItem();

			Vector3f position = snagret->getPosition();
			cameraMgr->startVibration(VIBTYPE_LightSlowShort, position, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed11, position, RUMBLEID_Both);

		} else if ((u32)snagret->mCurAnim->mType == KEYEVENT_4) {
			snagret->createDownHeadEffect(0.5f);

		} else if ((u32)snagret->mCurAnim->mType == KEYEVENT_5) {
			Vector3f position = snagret->getPosition();
			cameraMgr->startVibration(VIBTYPE_LightFastLong, position, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed13, position, RUMBLEID_Both);

		} else if ((u32)snagret->mCurAnim->mType == KEYEVENT_END) {
			snagret->kill(nullptr);
		}
	}
}

/**
 * @note Address: 0x80290C80
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x80290C84
 * @note Size: 0x124
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
	snagret->disableEvent(0, EB_Animating);
	snagret->enableEvent(0, EB_ModelHidden);
	snagret->disableEvent(0, EB_LifegaugeVisible);

	snagret->mTargetVelocity = Vector3f(0.0f);
	snagret->startMotion(SNAKECROWANIM_Appear1, nullptr);
	snagret->stopMotion();

	if (snagret->mWaterBox) {
		snagret->fadeEfxHamon();
	}
}

/**
 * @note Address: 0x80290DA8
 * @note Size: 0x618
 */
void StateStay::exec(EnemyBase* enemy)
{
	Obj* snagret     = OBJ(enemy);
	Creature* target = nullptr;
	Parms* parms     = CG_PARMS(snagret);
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
				f32 sqrDist      = homePos.sqrDistance(pikiPos);
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
					f32 sqrDist      = homePos.sqrDistance(naviPos);
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
		if (randWeightFloat(1.0f) < CG_PROPERPARMS(snagret).mFastAppearChance()) {
			transit(snagret, SNAKECROW_Appear1, nullptr);
		} else {
			transit(snagret, SNAKECROW_Appear2, nullptr);
		}
	}
}

/**
 * @note Address: 0x802913C0
 * @note Size: 0x90
 */
void StateStay::cleanup(EnemyBase* enemy)
{
	Obj* snagret = OBJ(enemy);
	snagret->setAtari(true);
	snagret->disableEvent(0, EB_Invulnerable);
	snagret->mIsUnderground = false;
	snagret->disableEvent(0, EB_BitterImmune);
	snagret->enableEvent(0, EB_Animating);
	snagret->disableEvent(0, EB_ModelHidden);
	snagret->enableEvent(0, EB_LifegaugeVisible);
	snagret->lifeIncrement();
}

/**
 * @note Address: 0x80291450
 * @note Size: 0xCC
 */
void StateAppear1::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* snagret = OBJ(enemy);
	snagret->enableEvent(0, EB_NoInterrupt);
	snagret->disableEvent(0, EB_Cullable);
	snagret->mTargetVelocity = Vector3f(0.0f);
	snagret->setEmotionExcitement();
	snagret->startMotion(SNAKECROWANIM_Appear1, nullptr);
	snagret->createAppearEffect(0);

	Vector3f position = snagret->getPosition();
	cameraMgr->startVibration(VIBTYPE_LightFastShort, position, CAMNAVI_Both);
	rumbleMgr->startRumble(RUMBLETYPE_Fixed15, position, RUMBLEID_Both);
}

/**
 * @note Address: 0x8029151C
 * @note Size: 0x158
 */
void StateAppear1::exec(EnemyBase* enemy)
{
	Obj* snagret = OBJ(enemy);
	if (snagret->mCurAnim->mIsPlaying) {
		if ((u32)snagret->mCurAnim->mType == KEYEVENT_2) {
			snagret->disableEvent(0, EB_NoInterrupt);
			snagret->startBossAttackBGM();
			snagret->startJointShadow();

		} else if ((u32)snagret->mCurAnim->mType == KEYEVENT_END) {
			snagret->setAttackPosition();
			if (snagret->mHealth <= 0.0f) {
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

/**
 * @note Address: 0x80291674
 * @note Size: 0x68
 */
void StateAppear1::cleanup(EnemyBase* enemy)
{
	Obj* snagret = OBJ(enemy);
	snagret->disableEvent(0, EB_NoInterrupt);
	snagret->enableEvent(0, EB_Cullable);
	snagret->startWaitEffect();

	if (snagret->mWaterBox) {
		snagret->createEfxHamon();
	}
}

/**
 * @note Address: 0x802916DC
 * @note Size: 0xCC
 */
void StateAppear2::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* snagret = OBJ(enemy);
	snagret->enableEvent(0, EB_NoInterrupt);
	snagret->disableEvent(0, EB_Cullable);
	snagret->mTargetVelocity = Vector3f(0.0f);
	snagret->setEmotionExcitement();
	snagret->startMotion(SNAKECROWANIM_Appear2, nullptr);
	snagret->createAppearEffect(1);

	Vector3f position = snagret->getPosition();
	cameraMgr->startVibration(VIBTYPE_LightFastLong, position, CAMNAVI_Both);
	rumbleMgr->startRumble(RUMBLETYPE_Fixed12, position, RUMBLEID_Both);
}

/**
 * @note Address: 0x802917A8
 * @note Size: 0x234
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
			cameraMgr->startVibration(VIBTYPE_LightMidShort, position, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed11, position, RUMBLEID_Both);

		} else if ((u32)snagret->mCurAnim->mType == KEYEVENT_5) {
			Vector3f position = snagret->getPosition();
			cameraMgr->startVibration(VIBTYPE_LightMidShort, position, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed11, position, RUMBLEID_Both);

		} else if ((u32)snagret->mCurAnim->mType == KEYEVENT_END) {
			snagret->setAttackPosition();
			if (snagret->mHealth <= 0.0f) {
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

/**
 * @note Address: 0x802919DC
 * @note Size: 0x68
 */
void StateAppear2::cleanup(EnemyBase* enemy)
{
	Obj* snagret = OBJ(enemy);
	snagret->disableEvent(0, EB_NoInterrupt);
	snagret->enableEvent(0, EB_Cullable);
	snagret->startWaitEffect();

	if (snagret->mWaterBox) {
		snagret->createEfxHamon();
	}
}

/**
 * @note Address: 0x80291A44
 * @note Size: 0x140
 */
void StateDisappear::init(EnemyBase* enemy, StateArg* stateArg)
{
	// Obj* snagret = OBJ(enemy);
	Vector3f position = enemy->getPosition();
	efx::Arg fxArg(position);
	efx::THebiAphd_dive diveFx;
	diveFx.create(&fxArg);

	enemy->disableEvent(0, EB_Cullable);
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->setEmotionCaution();
	enemy->startMotion(SNAKECROWANIM_Dive, nullptr);
	cameraMgr->startVibration(VIBTYPE_LightFastShort, position, CAMNAVI_Both);
	rumbleMgr->startRumble(RUMBLETYPE_Fixed14, position, RUMBLEID_Both);
}

/**
 * @note Address: 0x80291B84
 * @note Size: 0x108
 */
void StateDisappear::exec(EnemyBase* enemy)
{
	Obj* snagret = OBJ(enemy);

	if (snagret->mCurAnim->mIsPlaying) {
		if ((u32)snagret->mCurAnim->mType == KEYEVENT_2) {
			Parms* parms1 = CG_PARMS(snagret);
			EnemyFunc::flickNearbyNavi(snagret, parms1->mGeneral.mShakeRange.mValue, parms1->mGeneral.mShakeKnockback.mValue,
			                           parms1->mGeneral.mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);
			Parms* parms2 = CG_PARMS(snagret);
			EnemyFunc::flickNearbyPikmin(snagret, parms2->mGeneral.mShakeRange.mValue, parms2->mGeneral.mShakeKnockback.mValue,
			                             parms2->mGeneral.mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);

			Parms* parms3 = CG_PARMS(snagret);
			EnemyFunc::flickStickPikmin(snagret, parms3->mGeneral.mShakeChance.mValue, parms3->mGeneral.mShakeKnockback.mValue,
			                            parms3->mGeneral.mShakeDamage.mValue, FLICK_BACKWARD_ANGLE, nullptr);
			snagret->finishWaitEffect();
			snagret->startBossFlickBGM();

		} else if ((u32)snagret->mCurAnim->mType == KEYEVENT_3) {
			snagret->mIsUnderground = true;
			snagret->enableEvent(0, EB_BitterImmune);
			snagret->mFlickTimer = 0.0f;
			snagret->finishJointShadow();

		} else if ((u32)snagret->mCurAnim->mType == KEYEVENT_END) {
			transit(snagret, SNAKECROW_Stay, nullptr);
		}
	}
}

/**
 * @note Address: 0x80291C8C
 * @note Size: 0x64
 */
void StateDisappear::cleanup(EnemyBase* enemy)
{
	Obj* snagret = OBJ(enemy);
	EnemyFunc::flickStickPikmin(snagret, 1.0f, 10.0f, 0.0f, FLICK_BACKWARD_ANGLE, nullptr);
	snagret->mIsUnderground = false;
	snagret->disableEvent(0, EB_BitterImmune);
	snagret->enableEvent(0, EB_Cullable);
}

/**
 * @note Address: 0x80291CF0
 * @note Size: 0x48
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* snagret             = OBJ(enemy);
	snagret->mStateTimer     = 0.0f;
	snagret->mTargetCreature = nullptr;
	snagret->mTargetVelocity = Vector3f(0.0f);
	snagret->startMotion(SNAKECROWANIM_Wait, nullptr);
}

/**
 * @note Address: 0x80291D38
 * @note Size: 0x6C0
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* snagret = OBJ(enemy);
	Creature* target;
	Creature* previousTarget = snagret->mTargetCreature;
	if (previousTarget) {
		if (previousTarget->isAlive() && !previousTarget->isStickToMouth() && previousTarget->mSticker != snagret) {
			// this inline needs fixing
			if (snagret->isTargetWithinRange(previousTarget, snagret->getCreatureViewAngle(previousTarget),
			                                 CG_GENERALPARMS(snagret).mPrivateRadius(), CG_GENERALPARMS(snagret).mSightRadius(),
			                                 CG_GENERALPARMS(snagret).mFov(), CG_GENERALPARMS(snagret).mViewAngle())) {
				target = nullptr;
			} else {
				target = EnemyFunc::getNearestPikminOrNavi(snagret, CG_GENERALPARMS(snagret).mViewAngle(),
				                                           CG_GENERALPARMS(snagret).mSightRadius(), nullptr, nullptr, nullptr);
			}

		} else {
			target = EnemyFunc::getNearestPikminOrNavi(snagret, CG_GENERALPARMS(snagret).mViewAngle(),
			                                           CG_GENERALPARMS(snagret).mSightRadius(), nullptr, nullptr, nullptr);
		}

	} else {
		target = EnemyFunc::getNearestPikminOrNavi(snagret, CG_GENERALPARMS(snagret).mViewAngle(), CG_GENERALPARMS(snagret).mSightRadius(),
		                                           nullptr, nullptr, nullptr);
	}

	if (target) {
		snagret->mStateTimer = 0.0f;

		// this is probably one of the turnToTarget inlines but currently they don't generate the right stack >:(
		f32 angleDist, angle, turnSpeed, maxTurnAngle;
		maxTurnAngle = CG_GENERALPARMS(snagret).mMaxTurnAngle();
		turnSpeed    = CG_GENERALPARMS(snagret).mTurnSpeed();

		angleDist = snagret->getCreatureViewAngle(target);
		angle     = clamp(angleDist * turnSpeed, PI * (DEG2RAD * maxTurnAngle));

		snagret->updateFaceDir(roundAng(angle + snagret->getFaceDir()));

		if (absF(angleDist) <= SIN_2_5) {
			snagret->finishRotateEffect();

		} else {
			snagret->startRotateEffect();
			snagret->getJAIObject()->startSound(PSSE_EN_SNAKE_TURN, 0);
		}

	} else {
		snagret->mStateTimer += sys->mDeltaTime;
	}

	if (!snagret->isFinishMotion()) {
		if (snagret->mHealth <= 0.0f || snagret->mStateTimer > CG_PROPERPARMS(snagret).mWaitTime()
		    || EnemyFunc::isStartFlick(snagret, false) || snagret->getAttackPiki(5) != nullptr || snagret->getAttackNavi(5)) {
			snagret->finishMotion();
		}
	}

	if (snagret->mCurAnim->mIsPlaying) {
		if (snagret->mCurAnim->mType == KEYEVENT_END) {
			if (snagret->mHealth <= 0.0f) {
				transit(snagret, SNAKECROW_Dead, nullptr);
				return;
			}
			if (snagret->mStateTimer > CG_PROPERPARMS(snagret).mWaitTime() || EnemyFunc::isStartFlick(snagret, false)) {
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

/**
 * @note Address: 0x802923F8
 * @note Size: 0x24
 */
void StateWait::cleanup(EnemyBase* enemy)
{
	Obj* snagret = OBJ(enemy);
	snagret->finishRotateEffect();
}

/**
 * @note Address: 0x8029241C
 * @note Size: 0x4C
 */
void StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* snagret = OBJ(enemy);
	snagret->disableEvent(0, EB_Cullable);
	snagret->mTargetVelocity = Vector3f(0.0f);
	snagret->startMotion(snagret->mAttackAnimIdx + SNAKECROWANIM_AttackOffset, nullptr);
}

/**
 * @note Address: 0x80292468
 * @note Size: 0x334
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
					Parms* parms = CG_PARMS(snagret);
					InteractAttack attack(snagret, parms->mGeneral.mAttackDamage.mValue, nullptr);
					navi->stimulate(attack);
				}

				snagret->finishMotion();
			}

			snagret->returnJointCallBack();

		} else if ((u32)snagret->mCurAnim->mType == KEYEVENT_4) {

			if (!snagret->isFinishMotion() && snagret->getSwallowSlot()) {

				if (snagret->getAttackPiki(5) != nullptr || snagret->getAttackNavi(5)) {
					snagret->startMotion(snagret->mAttackAnimIdx + SNAKECROWANIM_AttackOffset, nullptr);
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

/**
 * @note Address: 0x8029279C
 * @note Size: 0x10
 */
void StateAttack::cleanup(EnemyBase* enemy) { enemy->enableEvent(0, EB_Cullable); }

/**
 * @note Address: 0x802927AC
 * @note Size: 0x3C
 */
void StateEat::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->startMotion(SNAKECROWANIM_Eat, nullptr);
}

/**
 * @note Address: 0x802927E8
 * @note Size: 0x178
 */
void StateEat::exec(EnemyBase* enemy)
{
	Obj* snagret = OBJ(enemy);
	if (snagret->mCurAnim->mIsPlaying) {
		if ((u32)snagret->mCurAnim->mType == KEYEVENT_2) {
			Parms* parms = CG_PARMS(snagret);
			EnemyFunc::swallowPikmin(snagret, parms->mProperParms.mPoisonDamage.mValue, nullptr);

		} else if ((u32)snagret->mCurAnim->mType == KEYEVENT_END) {
			if (snagret->mHealth <= 0.0f) {
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

/**
 * @note Address: 0x80292960
 * @note Size: 0x4
 */
void StateEat::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x80292964
 * @note Size: 0x40
 */
void StateStruggle::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* snagret             = OBJ(enemy);
	snagret->mStateTimer     = 0.0f;
	snagret->mTargetVelocity = Vector3f(0.0f);
	snagret->startMotion(SNAKECROWANIM_Struggle, nullptr);
}

/**
 * @note Address: 0x802929A4
 * @note Size: 0x158
 */
void StateStruggle::exec(EnemyBase* enemy)
{
	Obj* snagret = OBJ(enemy);
	if (snagret->mStateTimer > 1.5f) {
		snagret->finishMotion();
	}

	snagret->mStateTimer += sys->mDeltaTime;
	if (snagret->mCurAnim->mIsPlaying && (u32)snagret->mCurAnim->mType == KEYEVENT_END) {
		if (snagret->mHealth <= 0.0f) {
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

/**
 * @note Address: 0x80292AFC
 * @note Size: 0x4
 */
void StateStruggle::cleanup(EnemyBase* enemy) { }

} // namespace SnakeCrow
} // namespace Game
