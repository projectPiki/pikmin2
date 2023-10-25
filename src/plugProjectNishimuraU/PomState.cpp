#include "Game/Entities/Pom.h"
#include "Game/EnemyAnimKeyEvent.h"

namespace Game {
namespace Pom {

/*
 * --INFO--
 * Address:	80255CA4
 * Size:	000224
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

/*
 * --INFO--
 * Address:	80255EC8
 * Size:	00002C
 */
void StateWait::init(EnemyBase* enemy, StateArg* stateArg) { enemy->startMotion(POMANIM_Wait, nullptr); }

/*
 * --INFO--
 * Address:	80255EF4
 * Size:	00005C
 */
void StateWait::exec(EnemyBase* enemy)
{
	Obj* pom = OBJ(enemy);
	pom->changePomColor();
	transit(pom, POM_Open, nullptr);
}

/*
 * --INFO--
 * Address:	80255F50
 * Size:	000004
 */
void StateWait::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	80255F54
 * Size:	000060
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

/*
 * --INFO--
 * Address:	80255FB4
 * Size:	000044
 */
void StateDead::exec(EnemyBase* enemy)
{
	if (enemy->mCurAnim->mIsPlaying && enemy->mCurAnim->mType == KEYEVENT_END) {
		enemy->kill(nullptr);
	}
}

/*
 * --INFO--
 * Address:	80255FF8
 * Size:	000004
 */
void StateDead::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	80255FFC
 * Size:	000040
 */
void StateOpen::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* pom              = OBJ(enemy);
	pom->mCanTouchToClose = false;
	pom->mCanSwallowPiki  = false;
	pom->mSwingTimer      = 0.0f;
	pom->startMotion(POMANIM_Open, nullptr);
}

/*
 * --INFO--
 * Address:	8025603C
 * Size:	0000A0
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

/*
 * --INFO--
 * Address:	802560DC
 * Size:	000004
 */
void StateOpen::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	802560E0
 * Size:	000040
 */
void StateClose::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* pom              = OBJ(enemy);
	pom->mCanTouchToClose = false;
	pom->mCanSwallowPiki  = false;
	pom->mSwingTimer      = 0.0f;
	pom->startMotion(POMANIM_Close, nullptr);
}

/*
 * --INFO--
 * Address:	80256120
 * Size:	000078
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

/*
 * --INFO--
 * Address:	80256198
 * Size:	000004
 */
void StateClose::cleanup(EnemyBase* enemy) { }

/*
 * --INFO--
 * Address:	8025619C
 * Size:	00004C
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

/*
 * --INFO--
 * Address:	802561E8
 * Size:	000094
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

/*
 * --INFO--
 * Address:	8025627C
 * Size:	000010
 */
void StateShot::cleanup(EnemyBase* enemy) { enemy->enableEvent(0, EB_Cullable); }

/*
 * --INFO--
 * Address:	8025628C
 * Size:	00003C
 */
void StateSwing::init(EnemyBase* enemy, StateArg* stateArg)
{
	Obj* pom              = OBJ(enemy);
	pom->mCanTouchToClose = false;
	pom->mSwingTimer      = 0.0f;
	pom->startMotion(POMANIM_Swing, nullptr);
}

/*
 * --INFO--
 * Address:	802562C8
 * Size:	0000F8
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

/*
 * --INFO--
 * Address:	802563C0
 * Size:	000004
 */
void StateSwing::cleanup(EnemyBase* enemy) { }
} // namespace Pom
} // namespace Game
