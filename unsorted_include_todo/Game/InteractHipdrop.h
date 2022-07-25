#ifndef _GAME_INTERACTHIPDROP_H
#define _GAME_INTERACTHIPDROP_H

/*
    __vt__Q24Game15InteractHipdrop:
    .4byte 0
    .4byte 0
    .4byte actCommon__Q24Game14InteractAttackFPQ24Game8Creature
    .4byte actPiki__Q24Game11InteractionFPQ24Game4Piki
    .4byte actNavi__Q24Game14InteractAttackFPQ24Game4Navi
    .4byte actEnemy__Q24Game15InteractHipdropFPQ24Game9EnemyBase
    .4byte actPellet__Q24Game11InteractionFPQ24Game6Pellet
    .4byte actOnyon__Q24Game11InteractionFPQ24Game5Onyon
    .4byte actItem__Q24Game14InteractAttackFPQ24Game8BaseItem
*/

namespace Game {
struct InteractAttack {
	virtual void actCommon(Creature*); // _08
	virtual void _0C() = 0;            // _0C
	virtual void actNavi(Navi*);       // _10
	virtual void actEnemy(EnemyBase*); // _14
	virtual void _18() = 0;            // _18
	virtual void _1C() = 0;            // _1C
	virtual void actItem(BaseItem*);   // _20
};
} // namespace Game

namespace Game {
struct Interaction {
	virtual void _08() = 0;            // _08
	virtual void actPiki(Piki*);       // _0C (weak)
	virtual void _10() = 0;            // _10
	virtual void actEnemy(EnemyBase*); // _14
	virtual void actPellet(Pellet*);   // _18 (weak)
	virtual void actOnyon(Onyon*);     // _1C (weak)
};
} // namespace Game

namespace Game {
struct InteractHipdrop : public InteractAttack, public Interaction {
	virtual void actEnemy(EnemyBase*); // _14
};
} // namespace Game

#endif
