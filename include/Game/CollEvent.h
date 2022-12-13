#ifndef _GAME_COLLEVENT_H
#define _GAME_COLLEVENT_H

struct CollPart;

namespace Game {
struct Creature;

struct CollEvent {
	CollEvent()
	    : m_collidingCreature(nullptr)
	    , _04(nullptr)
	    , m_hitPart(nullptr)
	{
	}

	inline CollEvent(Creature* creature, CollPart* cp1, CollPart* cp2)
	    : m_collidingCreature(creature)
	    , _04(cp1)
	    , m_hitPart(cp2)
	{
	}

	Creature* m_collidingCreature; // _00
	CollPart* _04;                 // _04
	CollPart* m_hitPart;           // _08
};
} // namespace Game

#endif
