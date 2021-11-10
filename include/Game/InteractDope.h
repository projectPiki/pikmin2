#ifndef _GAME_INTERACTDOPE_H
#define _GAME_INTERACTDOPE_H

#include "types.h"
#include "Game/Interaction.h"

namespace Game {
struct InteractDope : public Interaction {
	virtual bool actCommon(Creature*); // _00
	virtual bool actPiki(Piki*);       // _04
	virtual bool actNavi(Navi*);       // _08
	virtual bool actEnemy(EnemyBase*); // _0C
	virtual bool actPellet(Pellet*);   // _10
	virtual bool actOnyon(Onyon*);     // _14
	virtual bool actItem(BaseItem*);   // _18

	// _00 VTBL
	Creature* m_creature; // _04
	s32 _08;
};
} // namespace Game

#endif
