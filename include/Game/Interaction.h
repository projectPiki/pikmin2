#ifndef _GAME_INTERACTION_H
#define _GAME_INTERACTION_H

#include "CollInfo.h"
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
struct CreatureKillArg;

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

	// _00 = VTBL
	Creature* m_creature; // _04
};

struct InteractAbsorb : public Interaction {
	inline InteractAbsorb(Creature* creature)
	    : Interaction(creature)
	{
	}

	virtual bool actItem(BaseItem*); // _20

	// _00 = VTBL
	// _04 = Creature* (either Piki* or Navi*)
};

struct InteractAstonish : public Interaction {
	inline InteractAstonish(Creature* creature, f32 p1)
	    : Interaction(creature)
	    , _08(p1)
	{
	}

	virtual bool actPiki(Piki*); // _0C

	// _00 = VTBL
	// _04 = Creature*
	f32 _08; // _08
};

struct InteractBattle : public Interaction {
	inline InteractBattle(Creature* creature)
	    : Interaction(creature)
	{
	}

	virtual bool actPiki(Piki*); // _0C

	// _00 = VTBL
	// _04 = Creature*
};

struct InteractBreakBridge : public Interaction {
	inline InteractBreakBridge(Creature* creature, f32 damage)
	    : Interaction(creature)
	    , m_damage(damage)
	{
	}

	virtual bool actItem(BaseItem*); // _20

	// _00 = VTBL
	// _04 = Creature*
	f32 m_damage; // _08
};

struct InteractBubble : public Interaction {
	inline InteractBubble(Creature* parent, f32 damage)
	    : Interaction(parent)
	    , m_damage(damage)
	{
	}

	virtual bool actPiki(Piki*); // _0C
	virtual bool actNavi(Navi*); // _10

	// _00 = VTBL
	// _04 = Creature*
	f32 m_damage; // _08
};

struct InteractBury : public Interaction {
	inline InteractBury(Creature* parent, f32 damage)
	    : Interaction(parent)
	    , m_damage(damage)
	{
	}

	virtual bool actPiki(Piki*); // _0C
	virtual bool actNavi(Navi*); // _10

	// _00 = VTBL
	// _04 = Creature*
	f32 m_damage; // _08, damage to Navi if hit
};

struct InteractDope : public Interaction {
	inline InteractDope(Creature* parent, int sprayType)
	    : Interaction(parent)
	    , m_sprayType(sprayType)
	{
	}

	virtual bool actPiki(Piki*);       // _0C
	virtual bool actEnemy(EnemyBase*); // _14

	// _00 = VTBL
	// _04 = Creature*
	int m_sprayType; // _08
};

struct InteractDrop : public Interaction {
	inline InteractDrop(Creature* parent)
	    : Interaction(parent)
	{
	}

	virtual bool actEnemy(EnemyBase*); // _14

	// _00 = VTBL
	// _04 = Creature* (ItemPlant::Item*)
};

struct InteractEarthquake : public Interaction {
	inline InteractEarthquake(Creature* parent, f32 bounceFactor)
	    : Interaction(parent)
	    , m_bounceFactor(bounceFactor)
	{
	}

	virtual bool actEnemy(EnemyBase*); // _14

	// _00 = VTBL
	// _04 = Creature*
	f32 m_bounceFactor; // _08
};

struct InteractEat : public Interaction {
	inline InteractEat(Creature* parent, f32 p1)
	    : Interaction(parent)
	    , _08(p1)
	{
	}

	virtual bool actPellet(Pellet*); // _18
	virtual bool actItem(BaseItem*); // _20

	// _00 = VTBL
	// _04 = Creature*
	int _08; // _08
};

struct InteractFallMeck : public Interaction {
	inline InteractFallMeck(Creature* parent, f32 damage)
	    : Interaction(parent)
	    , m_damage(damage)
	{
	}

	virtual bool actPiki(Piki*); // _0C
	virtual bool actNavi(Navi*); // _10

	// _00 = VTBL
	// _04 = Creature*
	f32 m_damage; // _08
};

struct InteractFarmHaero : public Interaction {
	inline InteractFarmHaero(Creature* parent, int p1)
	    : Interaction(parent)
	    , _08(p1)
	{
	}

	virtual bool actItem(BaseItem*);   // _20
	virtual bool actEnemy(EnemyBase*); // _14

	// _00 = VTBL
	// _04 = Creature*
	int _08; // _08
};

struct InteractFarmKarero : public Interaction {
	inline InteractFarmKarero(Creature* parent, int p1)
	    : Interaction(parent)
	    , _08(p1)
	{
	}

	virtual bool actItem(BaseItem*);   // _20
	virtual bool actEnemy(EnemyBase*); // _14

	// _00 = VTBL
	// _04 = Creature*
	int _08; // _08
};

struct InteractFire : public Interaction {
	inline InteractFire(Creature* parent, f32 damage)
	    : Interaction(parent)
	    , m_damage(damage)
	{
	}

	virtual bool actPiki(Piki*); // _0C
	virtual bool actNavi(Navi*); // _10

	// _00 = VTBL
	// _04 = Creature*
	f32 m_damage; // _08
};

struct InteractFlick : public Interaction {
	inline InteractFlick(Creature* parent, f32 knockback, f32 damage, f32 angle)
	    : Interaction(parent)
	    , m_knockback(knockback)
	    , m_damage(damage)
	    , m_angle(angle)
	{
	}

	virtual bool actCommon(Creature*); // _08
	virtual bool actPiki(Piki*);       // _0C
	virtual bool actNavi(Navi*);       // _10

	// _00 = VTBL
	// _04 = Creature*
	f32 m_knockback; // _08
	f32 m_damage;    // _0C
	f32 m_angle;     // _10
};

struct InteractFlockAttack : public Interaction {
	inline InteractFlockAttack(Creature* parent, int p1, f32 p2, u8 p3)
	    : Interaction(parent)
	    , _08(p1)
	    , _0C(p2)
	    , _10(p3)
	{
	}

	virtual bool actItem(BaseItem*); // _20

	// _00 = VTBL
	// _04 = Creature*
	int _08;      // _08
	f32 _0C;      // _0C
	u8 _10;       // _10
	Vector3f _14; // _14
};

struct InteractFlyCollision : public Interaction {
	inline InteractFlyCollision(Creature* parent, f32 p1, CollPart* collpart)
	    : Interaction(parent)
	    , _08(p1)
	    , m_collPart(collpart)
	{
	}

	virtual bool actEnemy(EnemyBase*); // _14

	// _00 = VTBL
	// _04 = Creature*
	f32 _08;              // _08
	CollPart* m_collPart; // _0C
};

struct InteractFue : public Interaction {
	inline InteractFue(Creature* parent, u8 a, u8 b)
	    : Interaction(parent)
	    , _08(a)
	    , _09(b)
	{
	}

	virtual bool actPiki(Piki*);     // _0C
	virtual bool actNavi(Navi*);     // _10
	virtual bool actItem(BaseItem*); // _20

	// _00 = VTBL
	// _04 = Creature*
	u8 _08; // _08
	u8 _09; // _09
};

struct InteractFueFuki : public Interaction {
	inline InteractFueFuki(Creature* parent)
	    : Interaction(parent)
	{
	}

	virtual bool actPiki(Piki*); // _0C

	// _00 = VTBL
	// _04 = Creature*
};

struct InteractFuefukiTimerReset : public Interaction {
	inline InteractFuefukiTimerReset(Creature* parent)
	    : Interaction(parent)
	{
	}

	virtual bool actEnemy(EnemyBase*); // _0C

	// _00 = VTBL
	// _04 = Creature*
};

struct InteractGas : public Interaction {
	inline InteractGas(Creature* parent, f32 damage)
	    : Interaction(parent)
	    , m_damage(damage)
	{
	}

	virtual bool actPiki(Piki*); // _0C
	virtual bool actNavi(Navi*); // _10

	// _00 = VTBL
	// _04 = Creature*
	f32 m_damage; // _08
};

struct InteractGotKey : public Interaction {
	inline InteractGotKey(Creature* parent)
	    : Interaction(parent)
	{
	}

	virtual bool actItem(BaseItem*); // _20

	// _00 = VTBL
	// _04 = Creature* (Onyon*)
};

struct InteractKaisan : public Interaction {
	inline InteractKaisan(Creature* parent)
	    : Interaction(parent)
	{
	}

	virtual bool actNavi(Navi*); // _10

	// _00 = VTBL
	// _04 = Creature*
};

struct InteractKill : public Interaction {
	inline InteractKill(Creature* parent, CreatureKillArg* killArg)
	    : Interaction(parent)
	    , m_killArg(killArg)
	{
	}

	virtual bool actCommon(Creature*); // _08
	virtual bool actPiki(Piki*);       // _0C

	// _00 = VTBL
	// _04 = Creature*
	CreatureKillArg* m_killArg; // _08
};

struct InteractMattuan : public Interaction {
	inline InteractMattuan(Creature* parent, f32 p1)
	    : Interaction(parent)
	    , _08(p1)
	{
	}

	virtual bool actPellet(Pellet*); // _18

	// _00 = VTBL
	// _04 = Creature*
	f32 _08; // _08
};

struct InteractPress : public Interaction {
	inline InteractPress(Creature* parent, f32 damage, CollPart* collpart)
	    : Interaction(parent)
	    , m_damage(damage)
	    , m_collPart(collpart)
	{
	}

	virtual bool actEnemy(EnemyBase*); // _14
	virtual bool actPiki(Piki*);       // _0C
	virtual bool actNavi(Navi*);       // _10

	// _00 = VTBL
	// _04 = Creature*
	f32 m_damage;         // _08
	CollPart* m_collPart; // _0C
};

struct InteractSuck : public Interaction {
	inline InteractSuck(Creature* parent)
	    : Interaction(parent)
	{
	}

	virtual bool actPellet(Pellet*); // _18

	// _00 = VTBL
	// _04 = Creature* (Pellet*)
};

struct InteractSuckArrive : public Interaction {
	inline InteractSuckArrive(Creature* parent)
	    : Interaction(parent)
	{
	}

	virtual bool actOnyon(Onyon*); // _1C

	// _00 = VTBL
	// _04 = Creature* (Pellet*)
};

struct InteractSuckDone : public Interaction {
	inline InteractSuckDone(Creature* parent, u8 a)
	    : Interaction(parent)
	    , _08(a)
	{
	}

	virtual bool actOnyon(Onyon*); // _1C

	// _00 = VTBL
	// _04 = Creature* (Pellet*)
	u8 _08; // _08, unknown but related to stickers (breadbug?)
};

struct InteractSuckFinish : public Interaction {
	inline InteractSuckFinish(Creature* parent)
	    : Interaction(parent)
	{
	}

	virtual bool actEnemy(EnemyBase*); // _14

	// _00 = VTBL
	// _04 = Creature* (Pellet*)
};

struct InteractSuikomi_Test : public Interaction {
	inline InteractSuikomi_Test(Creature* parent, Vector3f* vec, u32 p1, CollPart* collpart) // probably
	    : Interaction(parent)
	{
		_08.x      = vec->x;
		_08.y      = vec->y;
		_08.z      = vec->z;
		_14        = p1;
		m_collPart = collpart;
	}

	virtual bool actPiki(Piki*); // _0C

	// _00 = VTBL
	// _04 = Creature* (EnemyBase*)
	Vector3f _08;         // _08
	u32 _14;              // _14, unknown
	CollPart* m_collPart; // _18
};

///////////////////////////////////////
// ATTACK
struct InteractAttack : public Interaction {
	inline InteractAttack(Creature* parent, f32 damage, CollPart* collpart)
	    : Interaction(parent)
	    , m_damage(damage)
	    , m_collPart(collpart)
	{
	}

	virtual bool actCommon(Creature*); // _08
	virtual bool actNavi(Navi*);       // _10
	virtual bool actEnemy(EnemyBase*); // _14
	virtual bool actItem(BaseItem*);   // _20

	// _00 = VTBL
	// _04 = Creature*
	f32 m_damage;         // _08
	CollPart* m_collPart; // _0C
};

struct InteractHipdrop : public InteractAttack {
	inline InteractHipdrop(Creature* parent, f32 damage, CollPart* collpart)
	    : InteractAttack(parent, damage, collpart)
	{
	}

	virtual bool actEnemy(EnemyBase*); // _14

	// _00     = VTBL
	// _00-_10 = InteractAttack
};

struct InteractSwallow : public InteractAttack {
	inline InteractSwallow(Creature* parent, f32 damage, CollPart* collpart, int p1)
	    : InteractAttack(parent, damage, collpart)
	    , _10(p1)
	{
	}

	virtual bool actCommon(Creature*); // _08
	virtual bool actPiki(Piki*);       // _0C

	// _00     = VTBL
	// _00-_10 = InteractAttack
	int _10; // _10
};

struct InteractSarai : public InteractSwallow {
	inline InteractSarai(Creature* parent, f32 damage, CollPart* collpart, int p1)
	    : InteractSwallow(parent, damage, collpart, p1)
	{
	}

	virtual bool actNavi(Navi*); // _10

	// _00     = VTBL
	// _00-_14 = InteractSwallow
};
///////////////////////////////////////

///////////////////////////////////////
// WIND
struct InteractWind : public Interaction {
	inline InteractWind(Creature* parent, f32 force, Vector3f* direction)
	    : Interaction(parent)
	{
		m_damage      = force;
		m_direction.x = direction->x;
		m_direction.y = direction->y;
		m_direction.z = direction->z;
	}

	virtual bool actPiki(Piki*); // _0C
	virtual bool actNavi(Navi*); // _10

	// _00 = VTBL
	// _04 = Creature*
	f32 m_damage;         // _08, damage or force?
	Vector3f m_direction; // _0C
};

struct InteractBomb : public InteractWind {
	inline InteractBomb(Creature* parent, f32 force, Vector3f* direction)
	    : InteractWind(parent, force, direction)
	{
	}

	virtual bool actPiki(Piki*);       // _0C
	virtual bool actNavi(Navi*);       // _10
	virtual bool actEnemy(EnemyBase*); // _14

	// _00     = VTBL
	// _00-_18 = InteractWind
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

struct InteractHanaChirashi : public InteractWind {
	inline InteractHanaChirashi(Creature* parent, f32 force, Vector3f* direction)
	    : InteractWind(parent, force, direction)
	{
	}

	virtual bool actPiki(Piki*); // _0C

	// _00		= VTBL
	// _00-_18	= InteractWind
};
///////////////////////////////////////
} // namespace Game

#endif
