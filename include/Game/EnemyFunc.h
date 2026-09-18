#ifndef _GAME_ENEMYFUNC_H
#define _GAME_ENEMYFUNC_H

#include "Game/Piki.h"
#include "Game/EnemyBase.h"
#include "Condition.h"
#include "types.h"

#define FLICK_BACKWARD_ANGLE (-1000.0f)

namespace Game {
struct Creature;
struct EnemyBase;
struct Piki;
struct Navi;
} // namespace Game

namespace Game {
namespace EnemyFunc {
struct ConditionPikminNearby : public Condition<Creature> {
	inline ConditionPikminNearby(Creature* creature, f32 dist)
	    : mCreature(creature)
	    , mSearchDist(dist)
	{
	}

	virtual bool satisfy(Creature* creature) // 08 (weak)
	{
		if (creature->mSticker != mCreature) {
			Vector3f creaturePos = Vector3f(creature->getPosition().x, creature->getPosition().y, creature->getPosition().z);
			Vector3f targetPos   = Vector3f(mCreature->getPosition().x, mCreature->getPosition().y, mCreature->getPosition().z);

			if (targetPos.sqrDistance(creaturePos) < mSearchDist) {
				return true;
			}
		}
		return false;
	}

	// _00 = VTBL
	Creature* mCreature; // _00
	f32 mSearchDist;     // _04
};

struct EatPikminDefaultCondition : public Condition<Piki> {
	inline EatPikminDefaultCondition(EnemyBase* enemy)
	    : mEnemy(enemy)
	{
	}

	virtual bool satisfy(Piki* piki) // 08 (weak)
	{
		bool result        = false;
		Creature* creature = mEnemy;
		if (piki->isPikmin() && piki->mSticker != creature && !piki->isStickToMouth()) {
			result = true;
		}

		return result;
	}

	// _00 = VTBL
	EnemyBase* mEnemy; // _00
};

Navi* getNearestNavi(Creature* creature, f32 searchAngle, f32 searchRadius, f32* naviDist, Condition<Navi>* condition);
Piki* getNearestPikmin(Creature* creature, f32 searchAngle, f32 searchRadius, f32* pikiDist, Condition<Piki>* condition);
Creature* getNearestPikminOrNavi(Creature* creature, f32 searchAngle, f32 searchRadius, f32* targetDist, Condition<Navi>* naviCond,
                                 Condition<Piki>* pikiCond);

void flickCreature(Creature* flicker, Creature* toFlick, f32 knockback, f32 damage, f32 angle);
void flickStickPikmin(Creature* flicker, f32 flickChance, f32 knockback, f32 damage, f32 angle, Condition<Piki>* condition);
void flickNearbyPikmin(Creature* flicker, f32 searchRadius, f32 knockback, f32 damage, f32 angle, Condition<Piki>* condition);
void flickNearbyNavi(Creature* flicker, f32 searchRadius, f32 knockback, f32 damage, f32 angle, Condition<Navi>* condition);

int eatPikmin(EnemyBase* eater, Condition<Piki>* condition);
void swallowPikmin(Creature* eater, f32 poisonDamage, Condition<Piki>* condition);
int attackNavi(Creature* attacker, f32 searchRadius, f32 searchAngle, f32 damage, CollPart* part, Condition<Navi>* condition);

bool isStartFlick(EnemyBase* flicker, bool doResetFlickTimer);
bool isTherePikmin(Creature* creature, f32 searchRadius, Condition<Piki>* condition);
bool isThereOlimar(Creature* creature, f32 searchRadius, Condition<Navi>* condition);

int getSurroundPikminNum(Creature* creature, f32 searchRadius, Condition<Piki>* condition);
int getStickPikminColorNum(Creature* creature, int color);

void walkToTarget(EnemyBase* walker, Creature* target, f32 speed, f32 turnFactor, f32 maxTurnSpeed);
void walkToTarget(EnemyBase* walker, Vector3f& targetPos, f32 speed, f32 turnFactor, f32 maxTurnSpeed);

inline bool isPikminOrNaviInRange(EnemyBase* enemy, f32 range)
{
	if (isThereOlimar(enemy, range, nullptr)) {
		return true;
	} else if (isTherePikmin(enemy, range, nullptr)) {
		return true;
	}

	return false;
}
} // namespace EnemyFunc
} // namespace Game

#endif
