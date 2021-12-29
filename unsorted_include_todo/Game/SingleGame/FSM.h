#ifndef _GAME_SINGLEGAME_FSM_H
#define _GAME_SINGLEGAME_FSM_H

/*
    __vt__Q34Game10SingleGame3FSM:
    .4byte 0
    .4byte 0
    .4byte init__Q34Game10SingleGame3FSMFPQ24Game17SingleGameSection
    .4byte
   "start__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game17SingleGameSectioniPQ24Game8StateArg"
    .4byte
   "exec__Q24Game40StateMachine<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
    .4byte
   transit__Q34Game10SingleGame3FSMFPQ24Game17SingleGameSectioniPQ24Game8StateArg
*/

namespace Game {
namespace StateMachine < Game
{
	struct SingleGameSection >
	{
		virtual void Singleinit(SingleGameSection*); // _00
		virtual void StateMachine
		    < start(SingleGameSection*, int, StateArg*);      // _04
		virtual void StateMachine < exec(SingleGameSection*); // _08

		// _00 VTBL
	};
} // namespace Game
} // namespace Game

namespace Game {
namespace SingleGame {
	struct FSM : public SingleGameSection > {
		virtual void Singleinit(SingleGameSection*); // _00
		virtual void StateMachine
		    < start(SingleGameSection*, int, StateArg*);                // _04
		virtual void StateMachine < exec(SingleGameSection*);           // _08
		virtual void Singletransit(SingleGameSection*, int, StateArg*); // _0C

		// _00 VTBL
	};
} // namespace SingleGame
} // namespace Game

#endif
