#ifndef _GAME_PLATINSTANCE_H
#define _GAME_PLATINSTANCE_H

/*
    __vt__Q24Game12PlatInstance:
    .4byte 0
    .4byte 0
    .4byte getPosition__Q24Game12PlatInstanceFv
    .4byte checkCollision__Q24Game12PlatInstanceFPQ24Game10CellObject
    .4byte getBoundingSphere__Q24Game12PlatInstanceFRQ23Sys6Sphere
    .4byte collisionUpdatable__Q24Game12PlatInstanceFv
    .4byte isPiki__Q24Game10CellObjectFv
    .4byte isNavi__Q24Game10CellObjectFv
    .4byte deferPikiCollision__Q24Game10CellObjectFv
    .4byte getTypeName__Q24Game12PlatInstanceFv
    .4byte getObjType__Q24Game12PlatInstanceFv
    .4byte constructor__Q24Game12PlatInstanceFv
    .4byte doAnimation__Q24Game12PlatInstanceFv
    .4byte doEntry__Q24Game12PlatInstanceFv
    .4byte doSetView__Q24Game12PlatInstanceFi
    .4byte doViewCalc__Q24Game12PlatInstanceFv
    .4byte doSimulation__Q24Game12PlatInstanceFf
    .4byte doDirectDraw__Q24Game12PlatInstanceFR8Graphics
    .4byte 0
*/

namespace Game {
struct CellObject {
	virtual void getPosition();                   // _08
	virtual void checkCollision(CellObject*);     // _0C (weak)
	virtual void getBoundingSphere(Sys::Sphere&); // _10
	virtual void collisionUpdatable();            // _14 (weak)
	virtual void isPiki();                        // _18 (weak)
	virtual void isNavi();                        // _1C (weak)
	virtual void deferPikiCollision();            // _20 (weak)
};
} // namespace Game

namespace Game {
struct PlatInstance : public CellObject {
	virtual void getPosition();                   // _08
	virtual void checkCollision(CellObject*);     // _0C (weak)
	virtual void getBoundingSphere(Sys::Sphere&); // _10
	virtual void collisionUpdatable();            // _14 (weak)
	virtual void getTypeName();                   // _24 (weak)
	virtual void getObjType();                    // _28 (weak)
	virtual void constructor();                   // _2C (weak)
	virtual void doAnimation();                   // _30 (weak)
	virtual void doEntry();                       // _34 (weak)
	virtual void doSetView(int);                  // _38 (weak)
	virtual void doViewCalc();                    // _3C (weak)
	virtual void doSimulation(float);             // _40 (weak)
	virtual void doDirectDraw(Graphics&);         // _44 (weak)
	virtual void _48() = 0;                       // _48

	void setCollision(bool);
	void getCurrTri(Game::CurrTriInfo&);
	void traceMove(Game::MoveInfo&, float);
};
} // namespace Game

#endif
