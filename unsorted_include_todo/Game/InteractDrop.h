#ifndef _GAME_INTERACTDROP_H
#define _GAME_INTERACTDROP_H

/*
    __vt__Q24Game12InteractDrop:
    .4byte 0
    .4byte 0
    .4byte actCommon__Q24Game11InteractionFPQ24Game8Creature
    .4byte actPiki__Q24Game11InteractionFPQ24Game4Piki
    .4byte actNavi__Q24Game11InteractionFPQ24Game4Navi
    .4byte actEnemy__Q24Game12InteractDropFPQ24Game9EnemyBase
    .4byte actPellet__Q24Game11InteractionFPQ24Game6Pellet
    .4byte actOnyon__Q24Game11InteractionFPQ24Game5Onyon
    .4byte actItem__Q24Game11InteractionFPQ24Game8BaseItem
*/

namespace Game {
struct Interaction {
	virtual void actCommon(Creature*); // _08 (weak)
	virtual void actPiki(Piki*);       // _0C (weak)
	virtual void actNavi(Navi*);       // _10 (weak)
	virtual void actEnemy(EnemyBase*); // _14
	virtual void actPellet(Pellet*);   // _18 (weak)
	virtual void actOnyon(Onyon*);     // _1C (weak)
	virtual void actItem(BaseItem*);   // _20 (weak)
};
} // namespace Game

namespace Game {
struct InteractDrop : public Interaction {
	virtual void actEnemy(EnemyBase*); // _14
};
} // namespace Game

#endif
