#ifndef _GAME_PIKIGROWUPSTATE_H
#define _GAME_PIKIGROWUPSTATE_H

/*
    __vt__Q24Game15PikiGrowupState:
    .4byte 0
    .4byte 0
    .4byte init__Q24Game15PikiGrowupStateFPQ24Game4PikiPQ24Game8StateArg
    .4byte exec__Q24Game15PikiGrowupStateFPQ24Game4Piki
    .4byte cleanup__Q24Game15PikiGrowupStateFPQ24Game4Piki
    .4byte "resume__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
    .4byte "restart__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4Piki"
    .4byte "transit__Q24Game22FSMState<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg"
    .4byte ignoreAtari__Q24Game9PikiStateFPQ24Game4PikiPQ24Game8Creature
    .4byte bounceCallback__Q24Game9PikiStateFPQ24Game4PikiPQ23Sys8Triangle
    .4byte collisionCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9CollEvent
    .4byte platCallback__Q24Game9PikiStateFPQ24Game4PikiRQ24Game9PlatEvent
    .4byte onKeyEvent__Q24Game15PikiGrowupStateFPQ24Game4PikiRCQ28SysShape8KeyEvent
    .4byte getInfo__Q24Game9PikiStateFPc
    .4byte outWaterCallback__Q24Game9PikiStateFPQ24Game4Piki
    .4byte "wallCallback__Q24Game9PikiStateFPQ24Game4PikiR10Vector3<f>"
    .4byte invincible__Q24Game9PikiStateFPQ24Game4Piki
    .4byte callable__Q24Game9PikiStateFv
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
*/

namespace Game {
namespace FSMState < Game
{
	struct Piki >
	{
		virtual void init(Piki*, StateArg*);                    // _08
		virtual void exec(Piki*);                               // _0C
		virtual void cleanup(Piki*);                            // _10
		virtual void FSMState < resume(Piki*);                  // _14 (inline)
		virtual void FSMState < restart(Piki*);                 // _18 (inline)
		virtual void FSMState < transit(Piki*, int, StateArg*); // _1C (inline)
	};
} // namespace Game
} // namespace Game

namespace Game {
struct PikiState {
	virtual void init(Piki*, StateArg*);                       // _08
	virtual void exec(Piki*);                                  // _0C
	virtual void cleanup(Piki*);                               // _10
	virtual void _14() = 0;                                    // _14
	virtual void _18() = 0;                                    // _18
	virtual void _1C() = 0;                                    // _1C
	virtual void ignoreAtari(Piki*, Creature*);                // _20 (inline)
	virtual void bounceCallback(Piki*, Sys::Triangle*);        // _24 (inline)
	virtual void collisionCallback(Piki*, CollEvent&);         // _28 (inline)
	virtual void platCallback(Piki*, PlatEvent&);              // _2C (inline)
	virtual void onKeyEvent(Piki*, const SysShape::KeyEvent&); // _30
	virtual void getInfo(char*);                               // _34
	virtual void outWaterCallback(Piki*);                      // _38 (inline)
	virtual void wallCallback(Piki*, Vector3<float>&);         // _3C (inline)
	virtual void invincible(Piki*);                            // _40 (inline)
	virtual void callable();                                   // _44 (inline)
	virtual void aiActive();                                   // _48 (inline)
	virtual void dopable();                                    // _4C (inline)
	virtual void releasable();                                 // _50 (inline)
	virtual void throwable();                                  // _54 (inline)
	virtual void dead();                                       // _58 (inline)
	virtual void battleOK();                                   // _5C (inline)
	virtual void pressable();                                  // _60 (inline)
	virtual void transittable(int);                            // _64 (inline)
	virtual void soft_transittable(int);                       // _68 (inline)
	virtual void onFlute(Piki*, Navi*);                        // _6C (inline)
	virtual void dump();                                       // _70
};
} // namespace Game

namespace Game {
struct PikiGrowupState : public Piki >, public PikiState {
	virtual void init(Piki*, StateArg*);                       // _08
	virtual void exec(Piki*);                                  // _0C
	virtual void cleanup(Piki*);                               // _10
	virtual void onKeyEvent(Piki*, const SysShape::KeyEvent&); // _30
};
} // namespace Game

#endif
