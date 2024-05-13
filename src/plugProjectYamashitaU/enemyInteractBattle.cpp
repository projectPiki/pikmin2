#include "Game/EnemyBase.h"
#include "Game/Interaction.h"
#include "Game/Navi.h"

namespace Game {

/**
 * @note Address: 0x8010BA00
 * @note Size: 0x7C
 */
bool InteractHipdrop::actEnemy(EnemyBase* enemy)
{
	bool callback = enemy->pressCallBack(mCreature, mDamage, mCollPart);
	if (!callback) {
		callback = enemy->hipdropCallBack(mCreature, mDamage, mCollPart);
	}
	return callback;
}

/**
 * @note Address: 0x8010BA7C
 * @note Size: 0x74
 */
bool InteractEarthquake::actEnemy(EnemyBase* enemy)
{
	bool callback = false;
	if (!enemy->checkBirthTypeDropEarthquake()) {
		callback = enemy->earthquakeCallBack(mCreature, mBounceFactor);
	}
	return callback;
}

/**
 * @note Address: 0x8010BAF0
 * @note Size: 0x40
 */
bool InteractPress::actEnemy(EnemyBase* enemy) { return enemy->pressCallBack(mCreature, mDamage, mCollPart); }

/**
 * @note Address: 0x8010BB30
 * @note Size: 0x40
 */
bool InteractFlyCollision::actEnemy(EnemyBase* enemy) { return enemy->flyCollisionCallBack(mCreature, mDamage, mCollPart); }

/**
 * @note Address: 0x8010BB70
 * @note Size: 0x11C
 */
bool InteractAttack::actEnemy(EnemyBase* enemy)
{
	bool isSuccess = false;

	if (!enemy->isEvent(0, EB_Invulnerable)) {
		bool toDamage = false;
		if (mCreature->isNavi()) {
			if (static_cast<Navi*>(mCreature)->mNaviIndex == NAVIID_Olimar) {
				if (!enemy->isEvent(0, EB_AttackingNavi0)) {
					toDamage = true;
					enemy->enableEvent(0, EB_AttackingNavi0);
				}
			} else if (!enemy->isEvent(0, EB_AttackingNavi1)) {
				toDamage = true;
				enemy->enableEvent(0, EB_AttackingNavi1);
			}
		} else {
			toDamage = true;
		}

		if (toDamage) {
			if (enemy->isEvent(0, EB_Bittered)) {
				mDamage *= enemy->getDamageCoeStoneState();
			}

			isSuccess = enemy->damageCallBack(mCreature, mDamage, mCollPart);
		}
	}

	return isSuccess;
}

/**
 * @note Address: 0x8010BC8C
 * @note Size: 0x38
 */
bool InteractDrop::actEnemy(EnemyBase* enemy) { return enemy->dropCallBack(mCreature); }

/**
 * @note Address: 0x8010BCC4
 * @note Size: 0x78
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
