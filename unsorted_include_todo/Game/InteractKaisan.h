#ifndef _GAME_INTERACTKAISAN_H
#define _GAME_INTERACTKAISAN_H

/*
    __vt__Q24Game14InteractKaisan:
    .4byte 0
    .4byte 0
    .4byte actCommon__Q24Game11InteractionFPQ24Game8Creature
    .4byte actPiki__Q24Game11InteractionFPQ24Game4Piki
    .4byte actNavi__Q24Game14InteractKaisanFPQ24Game4Navi
    .4byte actEnemy__Q24Game11InteractionFPQ24Game9EnemyBase
    .4byte actPellet__Q24Game11InteractionFPQ24Game6Pellet
    .4byte actOnyon__Q24Game11InteractionFPQ24Game5Onyon
    .4byte actItem__Q24Game11InteractionFPQ24Game8BaseItem
*/

namespace Game {
struct Interaction {
	virtual void actCommon(Creature*); // _08 (inline)
	virtual void actPiki(Piki*);       // _0C (inline)
	virtual void actNavi(Navi*);       // _10
	virtual void actEnemy(EnemyBase*); // _14 (inline)
	virtual void actPellet(Pellet*);   // _18 (inline)
	virtual void actOnyon(Onyon*);     // _1C (inline)
	virtual void actItem(BaseItem*);   // _20 (inline)
};
} // namespace Game

namespace Game {
struct InteractKaisan : public Interaction {
	virtual void actNavi(Navi*); // _10
};
} // namespace Game

#endif
