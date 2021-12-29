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
	virtual void getPosition();                   // _00
	virtual void checkCollision(CellObject*);     // _04
	virtual void getBoundingSphere(Sys::Sphere&); // _08
	virtual void collisionUpdatable();            // _0C
	virtual void isPiki();                        // _10
	virtual void isNavi();                        // _14
	virtual void deferPikiCollision();            // _18

	// _00 VTBL
};
} // namespace Game

namespace Game {
struct PlatInstance : public CellObject {
	virtual void getPosition();                   // _00
	virtual void checkCollision(CellObject*);     // _04
	virtual void getBoundingSphere(Sys::Sphere&); // _08
	virtual void collisionUpdatable();            // _0C
	virtual void isPiki();                        // _10
	virtual void isNavi();                        // _14
	virtual void deferPikiCollision();            // _18
	virtual void getTypeName();                   // _1C
	virtual void getObjType();                    // _20
	virtual void constructor();                   // _24
	virtual void doAnimation();                   // _28
	virtual void doEntry();                       // _2C
	virtual void doSetView(int);                  // _30
	virtual void doViewCalc();                    // _34
	virtual void doSimulation(float);             // _38
	virtual void doDirectDraw(Graphics&);         // _3C
	virtual void _40() = 0;                       // _40

	// _00 VTBL
};
} // namespace Game

#endif
