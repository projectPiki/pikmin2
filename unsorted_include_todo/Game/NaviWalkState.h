#ifndef _GAME_NAVIWALKSTATE_H
#define _GAME_NAVIWALKSTATE_H

namespace Game {
namespace FSMState < Game
{
	struct Navi >
	{
		virtual void _00() = 0;                                 // _00
		virtual void _04() = 0;                                 // _04
		virtual void _08() = 0;                                 // _08
		virtual void FSMState < resume(Navi*);                  // _0C
		virtual void FSMState < restart(Navi*);                 // _10
		virtual void FSMState < transit(Navi*, int, StateArg*); // _14

		// _00 VTBL
	};
} // namespace Game
} // namespace Game

namespace Game {
struct NaviState {
	virtual void _00() = 0;                             // _00
	virtual void _04() = 0;                             // _04
	virtual void _08() = 0;                             // _08
	virtual void _0C() = 0;                             // _0C
	virtual void _10() = 0;                             // _10
	virtual void _14() = 0;                             // _14
	virtual void invincible();                          // _18
	virtual void _1C() = 0;                             // _1C
	virtual void _20() = 0;                             // _20
	virtual void _24() = 0;                             // _24
	virtual void bounceCallback(Navi*, Sys::Triangle*); // _28
	virtual void pressable();                           // _2C
	virtual void _30() = 0;                             // _30
	virtual void ignoreAtari(Creature*);                // _34
	virtual void _38() = 0;                             // _38
	virtual void vsUsableY();                           // _3C
	virtual void draw2d(J2DGrafContext&, int&);         // _40

	// _00 VTBL
};
} // namespace Game

namespace Game {
struct NaviWalkState : public Navi >, public NaviState {
	virtual void init(Navi*, StateArg*);                       // _00
	virtual void exec(Navi*);                                  // _04
	virtual void cleanup(Navi*);                               // _08
	virtual void FSMState < resume(Navi*);                     // _0C
	virtual void FSMState < restart(Navi*);                    // _10
	virtual void FSMState < transit(Navi*, int, StateArg*);    // _14
	virtual void invincible();                                 // _18
	virtual void onKeyEvent(Navi*, const SysShape::KeyEvent&); // _1C
	virtual void collisionCallback(Navi*, CollEvent&);         // _20
	virtual void wallCallback(Navi*, Vector3<float>&);         // _24
	virtual void bounceCallback(Navi*, Sys::Triangle*);        // _28
	virtual void pressable();                                  // _2C
	virtual void callable();                                   // _30
	virtual void ignoreAtari(Creature*);                       // _34
	virtual void needYChangeMotion();                          // _38
	virtual void vsUsableY();                                  // _3C
	virtual void draw2d(J2DGrafContext&, int&);                // _40
	virtual void _44() = 0;                                    // _44
	virtual void _48() = 0;                                    // _48
	virtual void _4C() = 0;                                    // _4C
	virtual void _50() = 0;                                    // _50
	virtual void _54() = 0;                                    // _54
	virtual void _58() = 0;                                    // _58
	virtual void _5C() = 0;                                    // _5C
	virtual void _60() = 0;                                    // _60
	virtual void _64() = 0;                                    // _64
	virtual void _68() = 0;                                    // _68
	virtual void _6C() = 0;                                    // _6C
	virtual void _70() = 0;                                    // _70
	virtual void _74() = 0;                                    // _74
	virtual void _78() = 0;                                    // _78
	virtual void _7C() = 0;                                    // _7C

	// _00 VTBL
};
} // namespace Game

#endif
