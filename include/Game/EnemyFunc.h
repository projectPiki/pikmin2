#ifndef _GAME_ENEMYFUNC_H
#define _GAME_ENEMYFUNC_H

#include "Game/Piki.h"
#include "Game/EnemyBase.h"
#include "Condition.h"
#include "types.h"

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

	virtual bool satisfy(Creature*); // 08 (weak)

	// _00 = VTBL
	Creature* mCreature; // _00
	f32 mSearchDist;     // _04
};

struct EatPikminDefaultCondition : public Condition<Piki> {
	virtual bool satisfy(Piki*); // 08 (weak)

	// _00 = VTBL
};

Navi* getNearestNavi(Creature* creature, f32 searchAngle, f32 searchRadius, f32* naviDist, Condition<Navi>* condition);
Piki* getNearestPikmin(Creature* creature, f32 searchAngle, f32 searchRadius, f32* pikiDist, Condition<Piki>* condition);
Creature* getNearestPikminOrNavi(Creature* creature, f32 searchAngle, f32 searchRadius, f32* targetDist, Condition<Navi>* naviCond,
                                 Condition<Piki>* pikiCond);

void flickCreature(Creature* flicker, Creature* toFlick, f32 knockback, f32 damage, f32 angle);
void flickStickPikmin(Creature* creature, f32 flickChance, f32 knockback, f32 damage, f32 angle, Condition<Piki>* condition);
void flickNearbyPikmin(Creature*, f32, f32, f32, f32, Condition<Piki>*);
void flickNearbyNavi(Creature*, f32, f32, f32, f32, Condition<Navi>*);

int eatPikmin(EnemyBase*, Condition<Piki>*);
void swallowPikmin(Creature*, f32, Condition<Piki>*);
int attackNavi(Creature*, f32, f32, f32, CollPart*, Condition<Navi>*);

bool isStartFlick(EnemyBase*, bool);
bool isTherePikmin(Creature*, f32, Condition<Piki>*);
bool isThereOlimar(Creature*, f32, Condition<Navi>*);

int getSurroundPikminNum(Creature*, f32, Condition<Piki>*);
int getStickPikminColorNum(Creature*, int);

void walkToTarget(EnemyBase*, Creature*, f32, f32, f32);
void walkToTarget(EnemyBase*, Vector3f&, f32, f32, f32);

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
