#ifndef _GAME_INTERACTSARAI_H
#define _GAME_INTERACTSARAI_H

/*
    __vt__Q24Game13InteractSarai:
    .4byte 0
    .4byte 0
    .4byte actCommon__Q24Game15InteractSwallowFPQ24Game8Creature
    .4byte actPiki__Q24Game15InteractSwallowFPQ24Game4Piki
    .4byte actNavi__Q24Game13InteractSaraiFPQ24Game4Navi
    .4byte actEnemy__Q24Game14InteractAttackFPQ24Game9EnemyBase
    .4byte actPellet__Q24Game11InteractionFPQ24Game6Pellet
    .4byte actOnyon__Q24Game11InteractionFPQ24Game5Onyon
    .4byte actItem__Q24Game14InteractAttackFPQ24Game8BaseItem
*/

namespace Game {
struct InteractSwallow {
	virtual void actCommon(Creature*); // _08
	virtual void actPiki(Piki*);       // _0C

	// _00 VTBL
};
} // namespace Game

namespace Game {
struct InteractAttack {
	virtual void _08() = 0;            // _08
	virtual void _0C() = 0;            // _0C
	virtual void _10() = 0;            // _10
	virtual void actEnemy(EnemyBase*); // _14
	virtual void _18() = 0;            // _18
	virtual void _1C() = 0;            // _1C
	virtual void actItem(BaseItem*);   // _20

	// _00 VTBL
};
} // namespace Game

namespace Game {
struct Interaction {
	virtual void _08() = 0;          // _08
	virtual void _0C() = 0;          // _0C
	virtual void _10() = 0;          // _10
	virtual void _14() = 0;          // _14
	virtual void actPellet(Pellet*); // _18
	virtual void actOnyon(Onyon*);   // _1C

	// _00 VTBL
};
} // namespace Game

namespace Game {
struct InteractSarai : public InteractSwallow, public InteractAttack, public Interaction {
	virtual void actNavi(Navi*); // _10

	// _00 VTBL
};
} // namespace Game

#endif
