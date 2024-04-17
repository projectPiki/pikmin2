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

/**
 * @note Address: 0x802CB94C
 * @note Size: 0x3D0
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

/**
 * @note Address: 0x802CBD1C
 * @note Size: 0xC4
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
	cameraMgr->startVibration(VIBTYPE_LightSlowShort, position, CAMNAVI_Both);
	rumbleMgr->startRumble(RUMBLETYPE_Fixed13, position, RUMBLEID_Both);
}

/**
 * @note Address: 0x802CBDE0
 * @note Size: 0x1C0
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
			cameraMgr->startVibration(VIBTYPE_LightMidShort, position, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed11, position, RUMBLEID_Both);

		} else if ((u32)snagret->mCurAnim->mType == KEYEVENT_4) {
			snagret->createWalkSmokeEffect(0.75f);
			Vector3f position = snagret->getPosition();
			cameraMgr->startVibration(VIBTYPE_LightMidShort, position, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed11, position, RUMBLEID_Both);

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
 * @note Address: 0x802CBFA0
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802CBFA4
 * @note Size: 0x12C
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

/**
 * @note Address: 0x802CC0D0
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
			transit(snagret, SNAKEWHOLE_Appear1, nullptr);
		} else {
			transit(snagret, SNAKEWHOLE_Appear2, nullptr);
		}
	}
}

/**
 * @note Address: 0x802CC6E8
 * @note Size: 0x98
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

/**
 * @note Address: 0x802CC780
 * @note Size: 0xD4
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
	cameraMgr->startVibration(VIBTYPE_LightFastShort, position, CAMNAVI_Both);
	rumbleMgr->startRumble(RUMBLETYPE_Fixed15, position, RUMBLEID_Both);
}

/**
 * @note Address: 0x802CC854
 * @note Size: 0x2F8
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
			cameraMgr->startVibration(VIBTYPE_LightFastShort, position, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed14, position, RUMBLEID_Both);

		} else if ((u32)snagret->mCurAnim->mType == KEYEVENT_4) {
			snagret->disableEvent(0, EB_NoInterrupt);

			Vector3f position = snagret->getPosition();
			cameraMgr->startVibration(VIBTYPE_LightFastShort, position, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed14, position, RUMBLEID_Both);

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
		cameraMgr->startVibration(VIBTYPE_LightMidShort, position, CAMNAVI_Both);
		rumbleMgr->startRumble(RUMBLETYPE_Fixed8, position, RUMBLEID_Both);
	}
}

/**
 * @note Address: 0x802CCB4C
 * @note Size: 0x68
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

/**
 * @note Address: 0x802CCBB4
 * @note Size: 0xD4
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
	cameraMgr->startVibration(VIBTYPE_LightFastLong, position, CAMNAVI_Both);
	rumbleMgr->startRumble(RUMBLETYPE_Fixed12, position, RUMBLEID_Both);
}

/**
 * @note Address: 0x802CCC88
 * @note Size: 0x318
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
			snagret->enableEvent(0, EB_NoInterrupt);

			Vector3f position = snagret->getPosition();
			cameraMgr->startVibration(VIBTYPE_LightMidShort, position, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed11, position, RUMBLEID_Both);

		} else if ((u32)snagret->mCurAnim->mType == KEYEVENT_6) {
			snagret->disableEvent(0, EB_NoInterrupt);

			Vector3f position = snagret->getPosition();
			cameraMgr->startVibration(VIBTYPE_LightFastShort, position, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed14, position, RUMBLEID_Both);

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

/**
 * @note Address: 0x802CCFA0
 * @note Size: 0x68
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

/**
 * @note Address: 0x802CD008
 * @note Size: 0x64
 */
void StateDisappear::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->hardConstraintOn();
	enemy->disableEvent(0, EB_Cullable);
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->setEmotionCaution();
	enemy->startMotion(SNAKEWHOLEANIM_Dive, nullptr);
}

/**
 * @note Address: 0x802CD06C
 * @note Size: 0x214
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
			snagret->enableEvent(0, EB_NoInterrupt);
			snagret->startBossFlickBGM();

		} else if ((u32)snagret->mCurAnim->mType == KEYEVENT_3) {
			snagret->disableEvent(0, EB_NoInterrupt);

		} else if ((u32)snagret->mCurAnim->mType == KEYEVENT_4) {
			Vector3f position = snagret->getPosition();
			efx::Arg fxArg(position);
			efx::THebiAphd_dive diveFx;
			diveFx.create(&fxArg);

			cameraMgr->startVibration(VIBTYPE_LightFastShort, position, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed15, position, RUMBLEID_Both);

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

/**
 * @note Address: 0x802CD280
 * @note Size: 0x78
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

/**
 * @note Address: 0x802CD2F8
 * @note Size: 0x68
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

/**
 * @note Address: 0x802CD360
 * @note Size: 0x198
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* snagret = OBJ(enemy);
	if (snagret->mHealth <= 0.0f) {
		snagret->mNextState = SNAKEWHOLE_Dead;
		snagret->finishMotion();
	} else if (EnemyFunc::isStartFlick(snagret, false) || snagret->mStateTimer > CG_PROPERPARMS(snagret).mWaitTime.mValue) {
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

/**
 * @note Address: 0x802CD4F8
 * @note Size: 0x4
 */
void StateWait::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802CD4FC
 * @note Size: 0x48
 */
void StateWalk::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* snagret             = OBJ(enemy);
	snagret->mIsJumping      = false;
	snagret->mFaceDirOffset  = 0.0f;
	snagret->mTargetVelocity = Vector3f(0.0f);
	snagret->startMotion(SNAKEWHOLEANIM_Jump, nullptr);
}

/**
 * @note Address: 0x802CD544
 * @note Size: 0x288
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
			cameraMgr->startVibration(VIBTYPE_LightFastShort, position, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed14, position, RUMBLEID_Both);

		} else if ((u32)snagret->mCurAnim->mType == KEYEVENT_END) {
			if (snagret->mNextState == SNAKEWHOLE_Attack && snagret->getStickHeadPikmin() != 0) {
				snagret->mNextState = SNAKEWHOLE_Struggle;
			}

			transit(snagret, snagret->mNextState, nullptr);
		}
	}
}

/**
 * @note Address: 0x802CD7CC
 * @note Size: 0x10
 */
void StateWalk::cleanup(EnemyBase* enemy) { enemy->disableEvent(0, EB_NoInterrupt); }

/**
 * @note Address: 0x802CD7DC
 * @note Size: 0x48
 */
void StateHome::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* snagret             = OBJ(enemy);
	snagret->mIsJumping      = false;
	snagret->mFaceDirOffset  = 0.0f;
	snagret->mTargetVelocity = Vector3f(0.0f);
	snagret->startMotion(SNAKEWHOLEANIM_Jump, nullptr);
}

/**
 * @note Address: 0x802CD824
 * @note Size: 0x1A4
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

/**
 * @note Address: 0x802CD9C8
 * @note Size: 0x10
 */
void StateHome::cleanup(EnemyBase* enemy) { enemy->disableEvent(0, EB_NoInterrupt); }

/**
 * @note Address: 0x802CD9D8
 * @note Size: 0x4C
 */
void StateAttack::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* snagret = OBJ(enemy);
	snagret->disableEvent(0, EB_Cullable);
	snagret->mTargetVelocity = Vector3f(0.0f);
	snagret->startMotion(snagret->mAttackAnimIdx + SNAKEWHOLEANIM_AttackOffset, nullptr);
}

/**
 * @note Address: 0x802CDA24
 * @note Size: 0x3D0
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

/**
 * @note Address: 0x802CDDF4
 * @note Size: 0x10
 */
void StateAttack::cleanup(EnemyBase* enemy) { enemy->enableEvent(0, EB_Cullable); }

/**
 * @note Address: 0x802CDE04
 * @note Size: 0x3C
 */
void StateEat::init(EnemyBase* enemy, StateArg* stateArg)
{
	enemy->mTargetVelocity = Vector3f(0.0f);
	enemy->startMotion(SNAKEWHOLEANIM_Eat, nullptr);
}

/**
 * @note Address: 0x802CDE40
 * @note Size: 0x1F0
 */
void StateEat::exec(EnemyBase* enemy)
{
	Obj* snagret = OBJ(enemy);
	if (snagret->mCurAnim->mIsPlaying) {
		if ((u32)snagret->mCurAnim->mType == KEYEVENT_2) {
			Parms* parms = CG_PARMS(snagret);
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

/**
 * @note Address: 0x802CE030
 * @note Size: 0x4
 */
void StateEat::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802CE034
 * @note Size: 0x40
 */
void StateStruggle::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* snagret             = OBJ(enemy);
	snagret->mStateTimer     = 0.0f;
	snagret->mTargetVelocity = Vector3f(0.0f);
	snagret->startMotion(SNAKEWHOLEANIM_Struggle, nullptr);
}

/**
 * @note Address: 0x802CE074
 * @note Size: 0x1C8
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

/**
 * @note Address: 0x802CE23C
 * @note Size: 0x4
 */
void StateStruggle::cleanup(EnemyBase* enemy) { }

} // namespace SnakeWhole
} // namespace Game
