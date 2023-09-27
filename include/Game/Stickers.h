#ifndef _GAME_STICKERS_H
#define _GAME_STICKERS_H

#include "types.h"
#include "Container.h"
#include "Game/Creature.h"

// Maximum number of creatures that can be actively stuck to something at once.
// If you increase the max pikmin count for a mod, increase this too.
#define MAX_STICKERS 110

namespace Game {
struct Stickers : public Container<Creature> {

	Stickers(Creature*);

	virtual ~Stickers();          // _08
	virtual void* getNext(void*); // _14
	virtual void* getStart();     // _18
	virtual void* getEnd();       // _1C
	virtual Creature* get(void*); // _20

	static void initialise();

	static int numBuffer;
	static int maxBuffer;
	static Creature** buffer;
	static bool mutex;
};
} // namespace Game

#endif
