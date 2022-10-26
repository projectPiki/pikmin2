#ifndef _GAME_ENTITIES_CONDITIONNOTSTICK_H
#define _GAME_ENTITIES_CONDITIONNOTSTICK_H

#include "Condition.h"
#include "Game/Piki.h"

namespace Game {
struct Pellet;

struct ConditionNotStickClient : public Condition<Piki> {
	virtual bool satisfy(Piki*); // _08 (weak)

	// _00 VTBL
};

struct ConditionNotStickClientAndItem : public Condition<Piki> {
	inline ConditionNotStickClientAndItem(Creature* client, Creature* item)
	    : m_client(client)
	    , m_item(item)
	{
	}

	virtual bool satisfy(Piki* piki) // _08 (weak)
	{
		if (piki->isAlive() && piki->isPikmin() && piki->m_sticker != m_client && (m_item == nullptr || piki->m_sticker != m_item)) {
			return true;
		}
		return false;
	}

	// _00 VTBL
	Creature* m_client; // _04, otakara
	Creature* m_item;   // _08, treasure
};

struct ConditionNotStickSlot : public Condition<Piki> {
	virtual bool satisfy(Piki*); // _08 (weak)

	// _00 VTBL
};
} // namespace Game

#endif
