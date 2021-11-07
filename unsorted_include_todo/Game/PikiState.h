#ifndef _GAME_PIKISTATE_H
#define _GAME_PIKISTATE_H

namespace Game {
namespace FSMState < Game
{
	struct Piki >
	{
		virtual void FSMState < init(Piki*, StateArg*);         // _00
		virtual void FSMState < exec(Piki*);                    // _04
		virtual void FSMState < cleanup(Piki*);                 // _08
		virtual void FSMState < resume(Piki*);                  // _0C
		virtual void FSMState < restart(Piki*);                 // _10
		virtual void FSMState < transit(Piki*, int, StateArg*); // _14

		// _00 VTBL
	};
} // namespace Game
} // namespace Game

namespace Game {
struct PikiState : public Piki > {
	virtual void FSMState < init(Piki*, StateArg*);            // _00
	virtual void FSMState < exec(Piki*);                       // _04
	virtual void FSMState < cleanup(Piki*);                    // _08
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
