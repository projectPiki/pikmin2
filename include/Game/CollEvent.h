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

	Creature* m_collidingCreature; // _00
	CollPart* _04;                 // _04
	CollPart* m_hitPart;           // _08
};
} // namespace Game

#endif
