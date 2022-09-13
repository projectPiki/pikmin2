#ifndef _GAME_STICKERS_H
#define _GAME_STICKERS_H

#include "types.h"
#include "Container.h"
#include "Game/Creature.h"

namespace Game {
struct Stickers : public Container<Game::Creature> {
	Stickers(Game::Creature*);

	virtual ~Stickers();          // _08
	virtual void* getNext(void*); // _14
	virtual void* getStart();     // _18
	virtual void* getEnd();       // _1C
	virtual Creature* get(void*); // _20

	void initialise();
};
} // namespace Game

#endif
