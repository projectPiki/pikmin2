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

struct InteractFlick : public Interaction {
	virtual bool actCommon(Creature*);
	virtual bool actPiki(Piki*);
	virtual bool actNavi(Navi*);

	// _00 VTBL
	Creature* m_creature; // _04
	f32 m_knockback;      // _08
	f32 m_damage;         // _0C
	f32 _10;              // _10
};

struct InteractAttack : public Interaction {
	virtual bool actCommon(Creature*);
	virtual bool actNavi(Navi*);
	virtual bool actEnemy(EnemyBase*);
	virtual bool actItem(BaseItem*);

	// _00 VTBL
	Creature* m_creature; // _04
	f32 _08;              // _08
	f32 _0C;              // _0C
};

struct InteractDope : public Interaction {
	virtual bool actPiki(Piki*);       // _04
	virtual bool actEnemy(EnemyBase*); // _0C

	// _00 VTBL
	Creature* m_creature; // _04
	s32 _08;
};

struct InteractSwallow : public InteractAttack {
	virtual bool actCommon(Creature*);
	virtual bool actPiki(Piki*);

	// _00 VTBL
	Creature* m_creature; // _04
};

struct InteractKill : public Interaction {
	virtual bool actCommon(Creature*);
	virtual bool actPiki(Piki*);

	// _00 VTBL
	Creature* m_creature; // _04
};
} // namespace Game

#endif
