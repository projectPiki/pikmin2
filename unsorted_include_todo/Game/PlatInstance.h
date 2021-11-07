#ifndef _GAME_PLATINSTANCE_H
#define _GAME_PLATINSTANCE_H

namespace Game {
struct CellObject {
	virtual void _00() = 0;            // _00
	virtual void _04() = 0;            // _04
	virtual void _08() = 0;            // _08
	virtual void _0C() = 0;            // _0C
	virtual void isPiki();             // _10
	virtual void isNavi();             // _14
	virtual void deferPikiCollision(); // _18

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
