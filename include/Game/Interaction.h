#ifndef _GAME_INTERACTION_H
#define _GAME_INTERACTION_H

#include "Vector3.h"
#include "types.h"

namespace Game {
struct Piki;
struct Navi;
struct EnemyBase;
struct Pellet;
struct Onyon;
struct BaseItem;
struct Creature;

struct Interaction {
	Interaction(Creature* creature)
	    : m_creature(creature)
	{
	}

	virtual bool actCommon(Creature*) { return true; } // _08 (weak)
	virtual bool actPiki(Piki*) { return true; }       // _0C (weak)
	virtual bool actNavi(Navi*) { return true; }       // _10 (weak)
	virtual bool actEnemy(EnemyBase*) { return true; } // _14 (weak)
	virtual bool actPellet(Pellet*) { return true; }   // _18 (weak)
	virtual bool actOnyon(Onyon*) { return true; }     // _1C (weak)
	virtual bool actItem(BaseItem*) { return true; }   // _20 (weak)

	// _00 VTBL
	Creature* m_creature; // _04
};

struct InteractAbsorb : public Interaction {
	virtual bool actItem(BaseItem*); // _20
};

struct InteractAttack : public Interaction {
	virtual bool actCommon(Creature*);
	virtual bool actNavi(Navi*);
	virtual bool actEnemy(EnemyBase*);
	virtual bool actItem(BaseItem*);

	f32 _08;                     // _08
	struct CollPart* m_collPart; // _0C
};

struct InteractBomb : public Interaction {
	virtual bool actPiki(Piki*);       // _0C
	virtual bool actNavi(Navi*);       // _10
	virtual bool actEnemy(EnemyBase*); // _14

	// _00 VTBL
	// _04 Parent
	float m_damage;      // _08
	Vector3f m_velocity; // _0C
};

struct InteractBreakBridge : public Interaction {
	virtual bool actItem(BaseItem*); // _20

	float _08; // _08
};

struct InteractBubble : public Interaction {
	virtual bool actPiki(Piki*); // _0C
	virtual bool actNavi(Navi*); // _10

	// _00 VTBL
	// _04 Parent
};

struct InteractDope : public Interaction {
	virtual bool actPiki(Piki*);       // _0C
	virtual bool actEnemy(EnemyBase*); // _14

	s32 m_sprayType; // _08
};

struct InteractDrop : public Interaction {
	virtual bool actEnemy(EnemyBase*); // _14
};

struct InteractEarthquake : public InteractAttack {
	virtual bool actEnemy(EnemyBase*); // _14
};

struct InteractEat : public Interaction {
	virtual bool actPellet(Pellet*); // _18
	virtual bool actItem(BaseItem*); // _20

	int _08; // _08
};

struct InteractFire : public Interaction {
	inline InteractFire(Creature* parent, f32 damage)
	    : Interaction(parent)
	{
		_08 = damage;
	}

	virtual bool actPiki(Piki*); // _0C
	virtual bool actNavi(Navi*); // _10

	// _00		= VTBL
	// _00-_04	= Interaction
	f32 _08; // _08
};

struct InteractFlick : public Interaction {
	virtual bool actCommon(Creature*); // _08
	virtual bool actPiki(Piki*);       // _0C
	virtual bool actNavi(Navi*);       // _10

	f32 m_knockback; // _08
	f32 m_damage;    // _0C
	f32 _10;         // _10
};

struct InteractFlockAttack : public Interaction {
	virtual bool actItem(BaseItem*); // _20

	int _08;      // _08
	float _0C;    // _0C
	u8 _10;       // _10
	Vector3f _14; // _14
};

struct InteractFlyCollision : public InteractAttack {
	virtual bool actEnemy(EnemyBase*); // _14
};

struct InteractFue : public Interaction {
	InteractFue(Creature* parent, u8 a, u8 b)
	    : Interaction(parent)
	{
		_08 = a;
		_09 = b;
	}

	virtual bool actPiki(Piki*);     // _0C
	virtual bool actNavi(Navi*);     // _10
	virtual bool actItem(BaseItem*); // _20

	// _00 VTBL
	u8 _08; // _08
	u8 _09; // _09
};

struct InteractGotKey : public Interaction {
	virtual bool actItem(BaseItem*); // _20

	// _04 should be casted to Onyon
};

struct InteractHipdrop : public InteractAttack {
	virtual bool actEnemy(EnemyBase*); // _14

	// _00 VTBL
	// _04 Parent
};

struct InteractKill : public Interaction {
	virtual bool actCommon(Creature*); // _08
	virtual bool actPiki(Piki*);       // _0C
};

struct InteractMattuan : public Interaction {
	inline InteractMattuan(Creature* parent, float a)
	    : Interaction(parent)
	{
		_08 = a;
	}

	virtual bool actPellet(Pellet*); // _18

	// _00 VTBL
	// _04 Parent
	float _08; // _08
};

struct InteractPress : public InteractAttack {
	virtual bool actPiki(Piki*);       // _0C
	virtual bool actNavi(Navi*);       // _10
	virtual bool actEnemy(EnemyBase*); // _14
};

struct InteractSwallow : public InteractAttack {
	virtual bool actCommon(Creature*); // _08
	virtual bool actPiki(Piki*);       // _0C

	int _10; // _10
};

struct InteractSuck : public Interaction {
	virtual bool actPellet(Pellet*); // _18

	// _00 VTBL
	// _04 should be casted to Pellet
};

struct InteractSuckArrive : public Interaction {
	virtual bool actOnyon(Onyon*); // _1C

	// _00 VTBL
	// _04 should be casted to Pellet
};

struct InteractSuckDone : public Interaction {
	virtual bool actOnyon(Onyon*); // _1C

	// _00 VTBL
	// _04 should be casted to Pellet
	u8 _08; // _08, unknown but probably bool m_isDone or something
};

struct InteractSuckFinish : public Interaction {
	virtual bool actEnemy(EnemyBase*); // _14

	// _00 VTBL
	// _04 should be casted to Pellet
};

struct InteractWind : public Interaction {
	inline InteractWind(Creature* parent, f32 force, Vector3f* direction)
	    : Interaction(parent)
	{
		_08           = force;
		m_direction.x = direction->x;
		m_direction.y = direction->y;
		m_direction.z = direction->z;
	}

	virtual bool actPiki(Piki*); // _0C
	virtual bool actNavi(Navi*); // _10

	// _00		= VTBL
	// _00-_04	= Interaction
	f32 _08;              // _08, damage or force?
	Vector3f m_direction; // _0C
};

struct InteractDenki : public InteractWind {
	inline InteractDenki(Creature* parent, f32 force, Vector3f* direction)
	    : InteractWind(parent, force, direction)
	{
	}

	virtual bool actPiki(Piki*); // _0C
	virtual bool actNavi(Navi*); // _10

	// _00		= VTBL
	// _00-_18	= InteractWind
};
} // namespace Game

#endif
