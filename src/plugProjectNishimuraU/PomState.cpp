#include "Game/Entities/Pom.h"
#include "Game/EnemyAnimKeyEvent.h"

namespace Game {
namespace Pom {

/**
 * @note Address: 0x80255CA4
 * @note Size: 0x224
 */
void FSM::init(EnemyBase* enemy)
{
	create(POM_Count);
	registerState(new StateWait);
	registerState(new StateDead);
	registerState(new StateOpen);
	registerState(new StateClose);
	registerState(new StateShot);
	registerState(new StateSwing);
}

/**
 * @note Address: 0x80255EC8
 * @note Size: 0x2C
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg) { enemy->startMotion(POMANIM_Wait, nullptr); }

/**
 * @note Address: 0x80255EF4
 * @note Size: 0x5C
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* pom = OBJ(enemy);
	pom->changePomColor();
	transit(pom, POM_Open, nullptr);
}

/**
 * @note Address: 0x80255F50
 * @note Size: 0x4
 */
void StateWait::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x80255F54
 * @note Size: 0x60
 */
void StateDead::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* pom              = OBJ(enemy);
	pom->mCanTouchToClose = false;
	pom->mCanSwallowPiki  = false;
	pom->mSwingTimer      = 0.0f;
	pom->disableEvent(0, EB_Cullable);
	pom->startMotion(POMANIM_Dead, nullptr);
	pom->createPomDeadEffect();
}

/**
 * @note Address: 0x80255FB4
 * @note Size: 0x44
 */
void StateDead::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		enemy->kill(nullptr);
	}
}

/**
 * @note Address: 0x80255FF8
 * @note Size: 0x4
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x80255FFC
 * @note Size: 0x40
 */
void StateOpen::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* pom              = OBJ(enemy);
	pom->mCanTouchToClose = false;
	pom->mCanSwallowPiki  = false;
	pom->mSwingTimer      = 0.0f;
	pom->startMotion(POMANIM_Open, nullptr);
}

/**
 * @note Address: 0x8025603C
 * @note Size: 0xA0
 */
void StateOpen::exec(EnemyBase* enemy)
{
	Obj* pom = OBJ(enemy);
	pom->changePomColor();
	if (pom->mCanTouchToClose) {
		if (pom->isEvent(0, EB_Colliding)) {
			transit(pom, POM_Swing, nullptr);
		}
	} else if (pom->mCurAnim->mIsPlaying && pom->mCurAnim->mType == KEYEVENT_2) {
		pom->mCanTouchToClose = true;
		pom->mCanSwallowPiki  = true;
	}
}

/**
 * @note Address: 0x802560DC
 * @note Size: 0x4
 */
void StateOpen::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x802560E0
 * @note Size: 0x40
 */
void StateClose::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* pom              = OBJ(enemy);
	pom->mCanTouchToClose = false;
	pom->mCanSwallowPiki  = false;
	pom->mSwingTimer      = 0.0f;
	pom->startMotion(POMANIM_Close, nullptr);
}

/**
 * @note Address: 0x80256120
 * @note Size: 0x78
 */
void StateClose::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		if (enemy->mStuckPikminCount != 0) {
			transit(enemy, POM_Shot, nullptr);
		} else {
			transit(enemy, POM_Wait, nullptr);
		}
	}
}

/**
 * @note Address: 0x80256198
 * @note Size: 0x4
 */
void StateClose::cleanup(EnemyBase* enemy) { }

/**
 * @note Address: 0x8025619C
 * @note Size: 0x4C
 */
void StateShot::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* pom              = OBJ(enemy);
	pom->mCanTouchToClose = false;
	pom->mCanSwallowPiki  = false;
	pom->mSwingTimer      = 0.0f;
	pom->disableEvent(0, EB_Cullable);
	pom->startMotion(POMANIM_Shot, nullptr);
}

/**
 * @note Address: 0x802561E8
 * @note Size: 0x94
 */
void StateShot::exec(EnemyBase* enemy)
{
	Obj* pom = OBJ(enemy);
	if (enemy->mCurAnim->mIsPlaying) {
		if (enemy->mCurAnim->mType == KEYEVENT_2) {
			pom->shotPikmin();
		} else if (enemy->mCurAnim->mType == KEYEVENT_END) {
			if (pom->mUsedSlotCount < pom->mTotalSlotCount) {
				transit(pom, POM_Wait, nullptr);
			} else {
				transit(pom, POM_Dead, nullptr);
			}
		}
	}
}

/**
 * @note Address: 0x8025627C
 * @note Size: 0x10
 */
void StateShot::cleanup(EnemyBase* enemy) { enemy->enableEvent(0, EB_Cullable); }

/**
 * @note Address: 0x8025628C
 * @note Size: 0x3C
 */
void StateSwing::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* pom              = OBJ(enemy);
	pom->mCanTouchToClose = false;
	pom->mSwingTimer      = 0.0f;
	pom->startMotion(POMANIM_Swing, nullptr);
}

/**
 * @note Address: 0x802562C8
 * @note Size: 0xF8
 */
void StateSwing::exec(EnemyBase* enemy)
{
	Obj* pom = OBJ(enemy);
	pom->changePomColor();
	pom->mSwingTimer += sys->mDeltaTime;

	if (pom->mSwingTimer > CG_PROPERPARMS(pom).mRemainOpenTime.mValue || !(pom->mUsedSlotCount < pom->mTotalSlotCount)) {
		transit(pom, POM_Close, nullptr);

	} else if (pom->mCanTouchToClose) {
		if (pom->isEvent(0, EB_Colliding)) {
			transit(pom, POM_Swing, nullptr);
		}

	} else if (pom->mCurAnim->mIsPlaying && (u32)pom->mCurAnim->mType == KEYEVENT_END) {
		pom->mCanTouchToClose = true;
	}
}

/**
 * @note Address: 0x802563C0
 * @note Size: 0x4
 */
void StateSwing::cleanup(EnemyBase* enemy) { }
} // namespace Pom
} // namespace Game
