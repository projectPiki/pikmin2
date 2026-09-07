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
void StateDead::cleanup(EnemyBase* enemy)
{
}

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
			if (snagret->isTargetOutOfRange(previousTarget, CG_GENERALPARMS(snagret).mPrivateRadius(),
			                                CG_GENERALPARMS(snagret).mSightRadius(), CG_GENERALPARMS(snagret).mFov(),
			                                CG_GENERALPARMS(snagret).mViewAngle())) {
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

		if (snagret->turnToTarget(target, CG_GENERALPARMS(snagret).mTurnSpeed(), CG_GENERALPARMS(snagret).mMaxTurnAngle(), 25.0f)) {
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
void StateAttack::cleanup(EnemyBase* enemy)
{
	enemy->enableEvent(0, EB_Cullable);
}

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
void StateEat::cleanup(EnemyBase* enemy)
{
}

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
void StateStruggle::cleanup(EnemyBase* enemy)
{
}

} // namespace SnakeCrow
} // namespace Game
