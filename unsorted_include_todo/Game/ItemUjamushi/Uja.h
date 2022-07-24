#ifndef _GAME_ITEMUJAMUSHI_UJA_H
#define _GAME_ITEMUJAMUSHI_UJA_H

/*
    __vt__Q34Game12ItemUjamushi3Uja:
    .4byte 0
    .4byte 0
    .4byte makeMatrix__Q34Game12ItemUjamushi3UjaFv
    .4byte isVisible__Q34Game12ItemUjamushi3UjaFv
    .4byte isWeed__Q24Game6TFlockFv
    .4byte fear__Q24Game6TFlockFv
    .4byte getRadius__Q24Game6TFlockFv
    .4byte damaged__Q34Game12ItemUjamushi3UjaFf
    .4byte constructor__Q24Game6TFlockFv
*/

namespace Game {
struct TFlock {
	virtual void makeMatrix();   // _08
	virtual void isVisible();    // _0C (inline)
	virtual void isWeed();       // _10 (inline)
	virtual void fear();         // _14 (inline)
	virtual void getRadius();    // _18 (inline)
	virtual void damaged(float); // _1C
	virtual void constructor();  // _20 (inline)
};
} // namespace Game

namespace Game {
namespace ItemUjamushi {
struct Uja : public TFlock {
	virtual void makeMatrix();   // _08
	virtual void isVisible();    // _0C (inline)
	virtual void damaged(float); // _1C

	Uja();
	void clearBuffer();
	void updateBuffer();
	void updateScale(float);
	void update(Game::ItemUjamushi::BoidParms&);
};
} // namespace ItemUjamushi
} // namespace Game

#endif
