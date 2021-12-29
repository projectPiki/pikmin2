#ifndef _GAME_INTERACTHANACHIRASHI_H
#define _GAME_INTERACTHANACHIRASHI_H

/*
    __vt__Q24Game20InteractHanaChirashi:
    .4byte 0
    .4byte 0
    .4byte actCommon__Q24Game11InteractionFPQ24Game8Creature
    .4byte actPiki__Q24Game20InteractHanaChirashiFPQ24Game4Piki
    .4byte actNavi__Q24Game12InteractWindFPQ24Game4Navi
    .4byte actEnemy__Q24Game11InteractionFPQ24Game9EnemyBase
    .4byte actPellet__Q24Game11InteractionFPQ24Game6Pellet
    .4byte actOnyon__Q24Game11InteractionFPQ24Game5Onyon
    .4byte actItem__Q24Game11InteractionFPQ24Game8BaseItem
*/

namespace Game {
struct Interaction {
	virtual void actCommon(Creature*); // _00
	virtual void _04() = 0;            // _04
	virtual void _08() = 0;            // _08
	virtual void actEnemy(EnemyBase*); // _0C
	virtual void actPellet(Pellet*);   // _10
	virtual void actOnyon(Onyon*);     // _14
	virtual void actItem(BaseItem*);   // _18

	// _00 VTBL
};
} // namespace Game

namespace Game {
struct InteractWind {
	virtual void _00() = 0;      // _00
	virtual void _04() = 0;      // _04
	virtual void actNavi(Navi*); // _08

	// _00 VTBL
};
} // namespace Game

namespace Game {
struct InteractHanaChirashi : public Interaction, public InteractWind {
	virtual void actCommon(Creature*); // _00
	virtual void actPiki(Piki*);       // _04
	virtual void actNavi(Navi*);       // _08
	virtual void actEnemy(EnemyBase*); // _0C
	virtual void actPellet(Pellet*);   // _10
	virtual void actOnyon(Onyon*);     // _14
	virtual void actItem(BaseItem*);   // _18

	// _00 VTBL
};
} // namespace Game

#endif
