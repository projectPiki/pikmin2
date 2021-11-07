#ifndef _GAME_PIKIHIPDROPSTATE_H
#define _GAME_PIKIHIPDROPSTATE_H

namespace Game {
namespace FSMState < Game
{
	struct Piki >
	{
		virtual void _00() = 0;                                 // _00
		virtual void _04() = 0;                                 // _04
		virtual void _08() = 0;                                 // _08
		virtual void FSMState < resume(Piki*);                  // _0C
		virtual void FSMState < restart(Piki*);                 // _10
		virtual void FSMState < transit(Piki*, int, StateArg*); // _14

		// _00 VTBL
	};
} // namespace Game
} // namespace Game

namespace Game {
struct PikiState {
	virtual void _00() = 0;                            // _00
	virtual void _04() = 0;                            // _04
	virtual void _08() = 0;                            // _08
	virtual void _0C() = 0;                            // _0C
	virtual void _10() = 0;                            // _10
	virtual void _14() = 0;                            // _14
	virtual void ignoreAtari(Piki*, Creature*);        // _18
	virtual void _1C() = 0;                            // _1C
	virtual void _20() = 0;                            // _20
	virtual void _24() = 0;                            // _24
	virtual void _28() = 0;                            // _28
	virtual void getInfo(char*);                       // _2C
	virtual void outWaterCallback(Piki*);              // _30
	virtual void wallCallback(Piki*, Vector3<float>&); // _34
	virtual void invincible(Piki*);                    // _38
	virtual void callable();                           // _3C
	virtual void aiActive();                           // _40
	virtual void dopable();                            // _44
	virtual void releasable();                         // _48
	virtual void throwable();                          // _4C
	virtual void dead();                               // _50
	virtual void battleOK();                           // _54
	virtual void pressable();                          // _58
	virtual void transittable(int);                    // _5C
	virtual void soft_transittable(int);               // _60
	virtual void onFlute(Piki*, Navi*);                // _64
	virtual void dump();                               // _68

	// _00 VTBL
};
} // namespace Game

namespace Game {
struct PikiHipDropState : public Piki >, public PikiState {
	virtual void init(Piki*, StateArg*);                       // _00
	virtual void exec(Piki*);                                  // _04
	virtual void cleanup(Piki*);                               // _08
	virtual void FSMState < resume(Piki*);                     // _0C
	virtual void FSMState < restart(Piki*);                    // _10
	virtual void FSMState < transit(Piki*, int, StateArg*);    // _14
	virtual void ignoreAtari(Piki*, Creature*);                // _18
	virtual void bounceCallback(Piki*, Sys::Triangle*);        // _1C
	virtual void collisionCallback(Piki*, CollEvent&);         // _20
	virtual void platCallback(Piki*, PlatEvent&);              // _24
	virtual void onKeyEvent(Piki*, const SysShape::KeyEvent&); // _28
	virtual void getInfo(char*);                               // _2C
	virtual void outWaterCallback(Piki*);                      // _30
	virtual void wallCallback(Piki*, Vector3<float>&);         // _34
	virtual void invincible(Piki*);                            // _38
	virtual void callable();                                   // _3C
	virtual void aiActive();                                   // _40
	virtual void dopable();                                    // _44
	virtual void releasable();                                 // _48
	virtual void throwable();                                  // _4C
	virtual void dead();                                       // _50
	virtual void battleOK();                                   // _54
	virtual void pressable();                                  // _58
	virtual void transittable(int);                            // _5C
	virtual void soft_transittable(int);                       // _60
	virtual void onFlute(Piki*, Navi*);                        // _64
	virtual void dump();                                       // _68

	// _00 VTBL
};
} // namespace Game

#endif
