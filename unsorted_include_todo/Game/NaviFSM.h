#ifndef _GAME_NAVIFSM_H
#define _GAME_NAVIFSM_H

/*
    __vt__Q24Game7NaviFSM:
    .4byte 0
    .4byte 0
    .4byte init__Q24Game7NaviFSMFPQ24Game4Navi
    .4byte "start__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game4NaviiPQ24Game8StateArg"
    .4byte "exec__Q24Game26StateMachine<Q24Game4Navi>FPQ24Game4Navi"
    .4byte transit__Q24Game7NaviFSMFPQ24Game4NaviiPQ24Game8StateArg
*/

namespace Game {
namespace StateMachine < Game
{
	struct Navi >
	{
		virtual void init(Navi*);                                 // _08
		virtual void StateMachine < start(Navi*, int, StateArg*); // _0C (weak)
		virtual void StateMachine < exec(Navi*);                  // _10 (weak)
	};
} // namespace Game
} // namespace Game

namespace Game {
struct NaviFSM : public Navi > {
	virtual void init(Navi*);                    // _08
	virtual void transit(Navi*, int, StateArg*); // _14
};
} // namespace Game

#endif
