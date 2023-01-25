#ifndef _GAME_COLLEVENT_H
#define _GAME_COLLEVENT_H

struct CollPart;

namespace Game {
struct Creature;

struct CollEvent {
	CollEvent()
	    : mCollidingCreature(nullptr)
	    , mCollisionObj(nullptr)
	    , mHitPart(nullptr)
	{
	}

	inline CollEvent(Creature* creature, CollPart* cp1, CollPart* cp2)
	    : mCollidingCreature(creature)
	    , mCollisionObj(cp1)
	    , mHitPart(cp2)
	{
	}

	Creature* mCollidingCreature; // _00
	CollPart* mCollisionObj;      // _04
	CollPart* mHitPart;           // _08
};
} // namespace Game

#endif
