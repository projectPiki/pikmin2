#ifndef _GAME_INTERACTION_H
#define _GAME_INTERACTION_H

#include "types.h"

namespace Game {
struct Interaction {
	virtual bool actCommon(struct Creature*); // _00
	virtual bool actPiki(struct Piki*);       // _04
	virtual bool actNavi(struct Navi*);       // _08
	virtual bool actEnemy(struct EnemyBase*); // _0C
	virtual bool actPellet(struct Pellet*);   // _10
	virtual bool actOnyon(struct Onyon*);     // _14
	virtual bool actItem(struct BaseItem*);   // _18

	// _00 VTBL
};
} // namespace Game

#endif
