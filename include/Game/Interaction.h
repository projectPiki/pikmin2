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
	    : mCreature(creature)
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
	Creature* mCreature; // _04
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
	inline InteractAstonish(Creature* creature, f32 time)
	    : Interaction(creature)
	    , mMaxTime(time)
	{
	}

	virtual bool actPiki(Piki*); // _0C

	// _00 = VTBL
	// _04 = Creature*
	f32 mMaxTime; // _08, doesnt get used?
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
	    , mDamage(damage)
	{
	}

	virtual bool actItem(BaseItem*); // _20

	// _00 = VTBL
	// _04 = Creature*
	f32 mDamage; // _08
};

struct InteractBubble : public Interaction {
	inline InteractBubble(Creature* parent, f32 damage)
	    : Interaction(parent)
	    , mDamage(damage)
	{
	}

	virtual bool actPiki(Piki*); // _0C
	virtual bool actNavi(Navi*); // _10

	// _00 = VTBL
	// _04 = Creature*
	f32 mDamage; // _08
};

struct InteractBury : public Interaction {
	inline InteractBury(Creature* parent, f32 damage)
	    : Interaction(parent)
	    , mDamage(damage)
	{
	}

	virtual bool actPiki(Piki*); // _0C
	virtual bool actNavi(Navi*); // _10

	// _00 = VTBL
	// _04 = Creature*
	f32 mDamage; // _08, damage to Navi if hit
};

struct InteractDope : public Interaction {
	inline InteractDope(Creature* parent, int sprayType)
	    : Interaction(parent)
	    , mSprayType(sprayType)
	{
	}

	virtual bool actPiki(Piki*);       // _0C
	virtual bool actEnemy(EnemyBase*); // _14

	// _00 = VTBL
	// _04 = Creature*
	int mSprayType; // _08
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
	    , mBounceFactor(bounceFactor)
	{
	}

	virtual bool actEnemy(EnemyBase*); // _14

	// _00 = VTBL
	// _04 = Creature*
	f32 mBounceFactor; // _08
};

struct InteractEat : public Interaction {
	inline InteractEat(Creature* parent, int color)
	    : Interaction(parent)
	    , mBerryColor(color)
	{
	}

	virtual bool actPellet(Pellet*); // _18
	virtual bool actItem(BaseItem*); // _20

	// _00 = VTBL
	// _04 = Creature*
	int mBerryColor; // _08, 0 = spicy/red, 1 = bitter/purple, 2 = not a berry.
};

struct InteractFallMeck : public Interaction {
	inline InteractFallMeck(Creature* parent, f32 damage)
	    : Interaction(parent)
	    , mDamage(damage)
	{
	}

	virtual bool actPiki(Piki*); // _0C
	virtual bool actNavi(Navi*); // _10

	// _00 = VTBL
	// _04 = Creature*
	f32 mDamage; // _08
};

struct InteractFarmHaero : public Interaction {
	inline InteractFarmHaero(Creature* parent, int p1)
	    : Interaction(parent)
	    , mPower(p1)
	{
	}

	virtual bool actItem(BaseItem*);   // _20
	virtual bool actEnemy(EnemyBase*); // _14

	// _00 = VTBL
	// _04 = Creature*
	int mPower; // _08
};

struct InteractFarmKarero : public Interaction {
	inline InteractFarmKarero(Creature* parent, int power)
	    : Interaction(parent)
	    , mPower(power)
	{
	}

	virtual bool actItem(BaseItem*);   // _20
	virtual bool actEnemy(EnemyBase*); // _14

	// _00 = VTBL
	// _04 = Creature*
	int mPower; // _08
};

struct InteractFire : public Interaction {
	inline InteractFire(Creature* parent, f32 damage)
	    : Interaction(parent)
	    , mDamage(damage)
	{
	}

	virtual bool actPiki(Piki*); // _0C
	virtual bool actNavi(Navi*); // _10

	// _00 = VTBL
	// _04 = Creature*
	f32 mDamage; // _08
};

struct InteractFlick : public Interaction {
	inline InteractFlick(Creature* parent, f32 knockback, f32 damage, f32 angle)
	    : Interaction(parent)
	    , mKnockback(knockback)
	    , mNaviDamage(damage)
	    , mAngle(angle)
	{
	}

	virtual bool actCommon(Creature*); // _08
	virtual bool actPiki(Piki*);       // _0C
	virtual bool actNavi(Navi*);       // _10

	// _00 = VTBL
	// _04 = Creature*
	f32 mKnockback;  // _08
	f32 mNaviDamage; // _0C
	f32 mAngle;      // _10
};

struct InteractFlockAttack : public Interaction {
	inline InteractFlockAttack(Creature* parent, int flockIdx, f32 damage, bool isDead)
	    : Interaction(parent)
	    , mFlockIdx(flockIdx)
	    , mDamage(damage)
	    , mIsFlockDead(isDead)
	{
	}

	virtual bool actItem(BaseItem*); // _20

	// _00 = VTBL
	// _04 = Creature*
	int mFlockIdx;           // _08
	f32 mDamage;             // _0C
	bool mIsFlockDead;       // _10
	Vector3f mFlockPosition; // _14
};

struct InteractFlyCollision : public Interaction {
	inline InteractFlyCollision(Creature* parent, f32 damage, CollPart* collpart)
	    : Interaction(parent)
	    , mDamage(damage)
	    , mCollPart(collpart)
	{
	}

	virtual bool actEnemy(EnemyBase*); // _14

	// _00 = VTBL
	// _04 = Creature*
	f32 mDamage;         // _08
	CollPart* mCollPart; // _0C
};

// Whistle
struct InteractFue : public Interaction {
	inline InteractFue(Creature* parent, bool doCombineParties, bool isNewToParty)
	    : Interaction(parent)
	    , mDoCombineParties(doCombineParties)
	    , mIsNewToParty(isNewToParty)
	{
	}

	virtual bool actPiki(Piki*);     // _0C
	virtual bool actNavi(Navi*);     // _10
	virtual bool actItem(BaseItem*); // _20

	// _00 = VTBL
	// _04 = Creature*
	bool mDoCombineParties; // _08, always false unless whistling another captain that has pikmin
	bool mIsNewToParty;     // _09, always true unless we're swapping between captains in a two-captain party
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
	    , mDamage(damage)
	{
	}

	virtual bool actPiki(Piki*); // _0C
	virtual bool actNavi(Navi*); // _10

	// _00 = VTBL
	// _04 = Creature*
	f32 mDamage; // _08
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
	    , mKillArg(killArg)
	{
	}

	virtual bool actCommon(Creature*); // _08
	virtual bool actPiki(Piki*);       // _0C

	// _00 = VTBL
	// _04 = Creature*
	CreatureKillArg* mKillArg; // _08
};

// Wait timer for carriable objects after they've been dropped
struct InteractMattuan : public Interaction {
	inline InteractMattuan(Creature* parent, f32 timerLength)
	    : Interaction(parent)
	    , mWaitTimer(timerLength)
	{
	}

	virtual bool actPellet(Pellet*); // _18

	// _00 = VTBL
	// _04 = Creature*
	f32 mWaitTimer; // _08
};

struct InteractPress : public Interaction {
	inline InteractPress(Creature* parent, f32 damage, CollPart* collpart)
	    : Interaction(parent)
	    , mDamage(damage)
	    , mCollPart(collpart)
	{
	}

	virtual bool actEnemy(EnemyBase*); // _14
	virtual bool actPiki(Piki*);       // _0C
	virtual bool actNavi(Navi*);       // _10

	// _00 = VTBL
	// _04 = Creature*
	f32 mDamage;         // _08
	CollPart* mCollPart; // _0C
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
	inline InteractSuikomi_Test(Creature* parent, Vector3f* direction, CollPart* collpart, CollPart* stomachCollpart)
	    : Interaction(parent)
	{
		mUnused08.x      = direction->x;
		mUnused08.y      = direction->y;
		mUnused08.z      = direction->z;
		mCollpart        = collpart;
		mStomachCollpart = stomachCollpart;
	}

	virtual bool actPiki(Piki*); // _0C

	// _00 = VTBL
	// _04 = Creature* (EnemyBase*)
	Vector3f mUnused08;         // _08, direction
	CollPart* mCollpart;        // _14
	CollPart* mStomachCollpart; // _18
};

///////////////////////////////////////
// ATTACK
struct InteractAttack : public Interaction {
	inline InteractAttack(Creature* parent, f32 damage, CollPart* collpart)
	    : Interaction(parent)
	    , mDamage(damage)
	    , mCollPart(collpart)
	{
	}

	virtual bool actCommon(Creature*); // _08
	virtual bool actNavi(Navi*);       // _10
	virtual bool actEnemy(EnemyBase*); // _14
	virtual bool actItem(BaseItem*);   // _20

	// _00 = VTBL
	// _04 = Creature*
	f32 mDamage;         // _08
	CollPart* mCollPart; // _0C
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
	inline InteractSwallow(Creature* parent, f32 damage, CollPart* collpart)
	    : InteractAttack(parent, damage, collpart)
	    , mIsStabbed(FALSE)
	{
	}

	virtual bool actCommon(Creature*); // _08
	virtual bool actPiki(Piki*);       // _0C

	// _00     = VTBL
	// _00-_10 = InteractAttack
	int mIsStabbed; // _10, used for burrownit, plays extra stab sound/anim
};

struct InteractSarai : public InteractSwallow {
	inline InteractSarai(Creature* parent, f32 damage, CollPart* collpart)
	    : InteractSwallow(parent, damage, collpart)
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
		mDamage    = force;
		mDirection = *direction;
	}

	virtual bool actPiki(Piki*); // _0C
	virtual bool actNavi(Navi*); // _10

	// _00 = VTBL
	// _04 = Creature*
	f32 mDamage;         // _08, damage or force?
	Vector3f mDirection; // _0C
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
