#ifndef _GAME_PIKIFSM_H
#define _GAME_PIKIFSM_H

/*
    __vt__Q24Game7PikiFSM:
    .4byte 0
    .4byte 0
    .4byte init__Q24Game7PikiFSMFPQ24Game4Piki
    .4byte
   "start__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game4PikiiPQ24Game8StateArg"
    .4byte "exec__Q24Game26StateMachine<Q24Game4Piki>FPQ24Game4Piki"
    .4byte transit__Q24Game7PikiFSMFPQ24Game4PikiiPQ24Game8StateArg
*/

namespace Game {
namespace StateMachine < Game
{
	struct Piki >
	{
		virtual void init(Piki*);                                 // _00
		virtual void StateMachine < start(Piki*, int, StateArg*); // _04
		virtual void StateMachine < exec(Piki*);                  // _08

		// _00 VTBL
	};
} // namespace Game
} // namespace Game

namespace Game {
struct PikiFSM : public Piki > {
	virtual void init(Piki*);                                 // _00
	virtual void StateMachine < start(Piki*, int, StateArg*); // _04
	virtual void StateMachine < exec(Piki*);                  // _08
	virtual void transit(Piki*, int, StateArg*);              // _0C

	// _00 VTBL
};
} // namespace Game

#endif
