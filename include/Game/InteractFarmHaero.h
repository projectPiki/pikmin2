#ifndef _GAME_INTERACTFARMHAERO_H
#define _GAME_INTERACTFARMHAERO_H

#include "types.h"
#include "Game/Interaction.h"

namespace Game {
// TODO: MATCHING VTABLE WILL ERROR!! (vtable previously defined)
struct InteractFarmHaero : public Interaction {
	virtual bool actCommon(Creature*); // _00
	virtual bool actPiki(Piki*);       // _04
	virtual bool actNavi(Navi*);       // _08
	virtual bool actEnemy(EnemyBase*); // _0C
	virtual bool actItem(BaseItem*);   // _18

	// _00 VTBL
	s32 _08;
};
} // namespace Game

#endif
