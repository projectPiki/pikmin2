#ifndef _GAME_INTERACTATTACK_H
#define _GAME_INTERACTATTACK_H

namespace Game {
struct Interaction {
	virtual void _00() = 0;          // _00
	virtual void actPiki(Piki*);     // _04
	virtual void _08() = 0;          // _08
	virtual void _0C() = 0;          // _0C
	virtual void actPellet(Pellet*); // _10
	virtual void actOnyon(Onyon*);   // _14

	// _00 VTBL
};
} // namespace Game

namespace Game {
struct InteractAttack : public Interaction {
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
