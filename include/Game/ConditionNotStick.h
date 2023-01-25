#ifndef _GAME_ENTITIES_CONDITIONNOTSTICK_H
#define _GAME_ENTITIES_CONDITIONNOTSTICK_H

#include "Condition.h"
#include "Game/Piki.h"

namespace Game {
struct Pellet;

struct ConditionNotStickClient : public Condition<Piki> {
	inline ConditionNotStickClient(Creature* client)
	    : mClient(client)
	{
	}

	virtual bool satisfy(Piki* piki) // _08 (weak)
	{
		if (piki->isAlive() && piki->isPikmin() && piki->mSticker != mClient) {
			return true;
		}
		return false;
	}

	// _00 VTBL
	Creature* mClient; // _04
};

struct ConditionNotStickClientAndItem : public Condition<Piki> {
	inline ConditionNotStickClientAndItem(Creature* client, Creature* item)
	    : mClient(client)
	    , mItem(item)
	{
	}

	virtual bool satisfy(Piki* piki) // _08 (weak)
	{
		if (piki->isAlive() && piki->isPikmin() && piki->mSticker != mClient && (mItem == nullptr || piki->mSticker != mItem)) {
			return true;
		}
		return false;
	}

	// _00 VTBL
	Creature* mClient; // _04, dweevil
	Creature* mItem;   // _08, pellet
};

struct ConditionNotStickSlot : public Condition<Piki> {
	virtual bool satisfy(Piki* piki) // _08 (weak)
	{
		if (piki->isAlive() && piki->isPikmin() && !piki->isStickToMouth()) {
			return true;
		}
		return false;
	}

	// _00 VTBL
};
} // namespace Game

#endif
