#ifndef _GAME_PIKIFLYINGSTATE_H
#define _GAME_PIKIFLYINGSTATE_H

/*
    __vt__Q24Game15PikiFlyingState:
    .4byte 0
    .4byte 0
    .4byte init__Q24Game15PikiFlyingStateFPQ24Game4PikiPQ24Game8StateArg
    .4byte exec__Q24Game15PikiFlyingStateFPQ24Game4Piki
    .4byte cleanup__Q24Game15PikiFlyingStateFPQ24Game4Piki
    .4byte "resume__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
    .4byte "restart__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
    .4byte
   "transit__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg"
    .4byte ignoreAtari__Q24Game15PikiFlyingStateFPQ24Game4PikiPQ24Game8Creature
    .4byte
   bounceCallback__Q24Game15PikiFlyingStateFPQ24Game4PikiPQ23Sys8Triangle .4byte
   collisionCallback__Q24Game15PikiFlyingStateFPQ24Game4PikiRQ24Game9CollEvent
    .4byte platCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9PlatEvent
    .4byte onKeyEvent__Q24Game9PikiStateFPQ24Game4PikiRCQ28SysShape8KeyEvent
    .4byte getInfo__Q24Game9PikiStateFPc
    .4byte outWaterCallback__Q24Game9PikiStateFPQ24Game4Piki
    .4byte "wallCallback__Q24Game9PikiStateFPQ24Game4PikiR10Vector3<f>"
    .4byte invincible__Q24Game9PikiStateFPQ24Game4Piki
    .4byte callable__Q24Game15PikiFlyingStateFv
    .4byte aiActive__Q24Game9PikiStateFv
    .4byte dopable__Q24Game9PikiStateFv
    .4byte releasable__Q24Game9PikiStateFv
    .4byte throwable__Q24Game9PikiStateFv
    .4byte dead__Q24Game9PikiStateFv
    .4byte battleOK__Q24Game9PikiStateFv
    .4byte pressable__Q24Game9PikiStateFv
    .4byte transittable__Q24Game9PikiStateFi
    .4byte soft_transittable__Q24Game9PikiStateFi
    .4byte onFlute__Q24Game9PikiStateFPQ24Game4PikiPQ24Game4Navi
    .4byte dump__Q24Game9PikiStateFv
    .4byte stopEffect__Q24Game15PikiFlyingStateFv
    .4byte restartEffect__Q24Game15PikiFlyingStateFv
*/

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
	virtual void _00() = 0;                                    // _00
	virtual void _04() = 0;                                    // _04
	virtual void _08() = 0;                                    // _08
	virtual void _0C() = 0;                                    // _0C
	virtual void _10() = 0;                                    // _10
	virtual void _14() = 0;                                    // _14
	virtual void _18() = 0;                                    // _18
	virtual void _1C() = 0;                                    // _1C
	virtual void _20() = 0;                                    // _20
	virtual void platCallback(Piki*, PlatEvent&);              // _24
	virtual void onKeyEvent(Piki*, const SysShape::KeyEvent&); // _28
	virtual void getInfo(char*);                               // _2C
	virtual void outWaterCallback(Piki*);                      // _30
	virtual void wallCallback(Piki*, Vector3<float>&);         // _34
	virtual void invincible(Piki*);                            // _38
	virtual void _3C() = 0;                                    // _3C
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

namespace Game {
struct PikiFlyingState : public Piki >, public PikiState {
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
	virtual void stopEffect();                                 // _6C
	virtual void restartEffect();                              // _70

	// _00 VTBL
};
} // namespace Game

#endif
