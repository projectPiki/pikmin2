#ifndef _GAME_INTERACTION_H
#define _GAME_INTERACTION_H

#include "Vector3.h"
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

	Creature* m_creature; // _04
	f32 m_knockback;      // _08
	f32 m_damage;         // _0C
	f32 _10;              // _10
};

struct InteractAbsorb : public Interaction {
	virtual bool actItem(BaseItem*); // _18

	Piki* m_piki; // _04
};

struct InteractAttack : public Interaction {
	virtual bool actCommon(Creature*);
	virtual bool actNavi(Navi*);
	virtual bool actEnemy(EnemyBase*);
	virtual bool actItem(BaseItem*);

	Creature* m_creature;        // _04
	f32 _08;                     // _08
	struct CollPart* m_collPart; // _0C
};

struct InteractBreakBridge : public Interaction {
	virtual bool actItem(BaseItem*); // _18

	u8 _04[4]; // _04
	float _08; // _08
};

struct InteractDope : public Interaction {
	virtual bool actPiki(Piki*);       // _04
	virtual bool actEnemy(EnemyBase*); // _0C

	Creature* m_creature; // _04
	s32 m_sprayType;      // _08
};

struct InteractEat : public Interaction {
	virtual bool actPellet(Pellet*); // _10
	virtual bool actItem(BaseItem*); // _18

	Creature* m_creature; // _04
	int _08;              // _08
};

struct InteractFlockAttack : public Interaction {
	virtual bool actItem(BaseItem*); // _18

	Creature* m_creature; // _04
	int _08;              // _08
	float _0C;            // _0C
	u8 _10;               // _10
	Vector3f _14;         // _14
};

struct InteractFue : public Interaction {
	virtual bool actPiki(Piki*);     // _04
	virtual bool actNavi(Navi*);     // _08
	virtual bool actItem(BaseItem*); // _18

	Navi* m_navi; // _04
	u8 _08;       // _08
	u8 _09;       // _09
};

struct InteractGotKey : public Interaction {
	virtual bool actItem(BaseItem*); // _18

	Onyon* m_onyon; // _04
};

struct InteractSwallow : public InteractAttack {
	virtual bool actCommon(Creature*);
	virtual bool actPiki(Piki*);

	int _10; // _10
};

struct InteractKill : public Interaction {
	virtual bool actCommon(Creature*);
	virtual bool actPiki(Piki*);

	Creature* m_creature; // _04
};
} // namespace Game

#endif
