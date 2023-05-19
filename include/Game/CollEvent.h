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

	inline CollEvent(Creature* creature, CollPart* src, CollPart* dest)
	    : mCollidingCreature(creature)
	    , mCollisionObj(src)
	    , mHitPart(dest)
	{
	}

	Creature* mCollidingCreature; // _00
	CollPart* mCollisionObj;      // _04
	CollPart* mHitPart;           // _08
};
} // namespace Game

#endif
