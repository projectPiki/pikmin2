#ifndef _GAME_COLLEVENT_H
#define _GAME_COLLEVENT_H

struct CollPart;

namespace Game {
struct Creature;

struct CollEvent {
	Creature* m_collidingCreature; // _00
	CollPart* _04;                 // _04
	CollPart* m_hitPart;           // _08
};
} // namespace Game

#endif
