#include "Game/EnemyBase.h"
#include "Game/Interaction.h"
#include "Game/Navi.h"

namespace Game {

/*
 * --INFO--
 * Address:	8010BA00
 * Size:	00007C
 */
bool InteractHipdrop::actEnemy(EnemyBase* enemy)
{
	bool callback = enemy->pressCallBack(mCreature, mDamage, mCollPart);
	if (!callback) {
		callback = enemy->hipdropCallBack(mCreature, mDamage, mCollPart);
	}
	return callback;
}

/*
 * --INFO--
 * Address:	8010BA7C
 * Size:	000074
 */
bool InteractEarthquake::actEnemy(EnemyBase* enemy)
{
	bool callback = false;
	if (!enemy->checkBirthTypeDropEarthquake()) {
		callback = enemy->earthquakeCallBack(mCreature, mBounceFactor);
	}
	return callback;
}

/*
 * --INFO--
 * Address:	8010BAF0
 * Size:	000040
 */
bool InteractPress::actEnemy(EnemyBase* enemy) { return enemy->pressCallBack(mCreature, mDamage, mCollPart); }

/*
 * --INFO--
 * Address:	8010BB30
 * Size:	000040
 */
bool InteractFlyCollision::actEnemy(EnemyBase* enemy) { return enemy->flyCollisionCallBack(mCreature, _08, mCollPart); }

/*
 * --INFO--
 * Address:	8010BB70
 * Size:	00011C
 */
bool InteractAttack::actEnemy(EnemyBase* enemy)
{
	bool isSuccess = false;

	if (!enemy->isEvent(0, EB_Invulnerable)) {
		bool flag = false;
		if (mCreature->isNavi()) {
			if (static_cast<Navi*>(mCreature)->mNaviIndex == 0) {
				if (!enemy->isEvent(0, EB_AttackingNavi0)) {
					flag = true;
					enemy->enableEvent(0, EB_AttackingNavi0);
				}
			} else if (!enemy->isEvent(0, EB_AttackingNavi1)) {
				flag = true;
				enemy->enableEvent(0, EB_AttackingNavi1);
			}
		} else {
			flag = true;
		}

		if (flag) {
			if (enemy->isEvent(0, EB_Bittered)) {
				mDamage *= enemy->getDamageCoeStoneState();
			}

			isSuccess = enemy->damageCallBack(mCreature, mDamage, mCollPart);
		}
	}

	return isSuccess;
}

/*
 * --INFO--
 * Address:	8010BC8C
 * Size:	000038
 */
bool InteractDrop::actEnemy(EnemyBase* enemy) { return enemy->dropCallBack(mCreature); }

/*
 * --INFO--
 * Address:	8010BCC4
 * Size:	000078
 */
bool InteractBomb::actEnemy(EnemyBase* enemy)
{
	bool callback = false;
	if (!enemy->isBeforeAppearState()) {
		callback = enemy->bombCallBack(mCreature, mDirection, mDamage);
	}
	return callback;
}
} // namespace Game
