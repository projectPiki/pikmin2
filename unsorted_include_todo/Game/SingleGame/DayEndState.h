#ifndef _GAME_SINGLEGAME_DAYENDSTATE_H
#define _GAME_SINGLEGAME_DAYENDSTATE_H

namespace Game {
namespace FSMState < Game
{
	struct SingleGameSection >
	{
		virtual void _00() = 0;                              // _00
		virtual void _04() = 0;                              // _04
		virtual void _08() = 0;                              // _08
		virtual void FSMState < resume(SingleGameSection*);  // _0C
		virtual void FSMState < restart(SingleGameSection*); // _10
		virtual void FSMState
		    < transit(SingleGameSection*, int, StateArg*); // _14

		// _00 VTBL
	};
} // namespace Game
} // namespace Game

namespace Game {
namespace SingleGame {
	struct State {
		virtual void _00() = 0;                                           // _00
		virtual void _04() = 0;                                           // _04
		virtual void _08() = 0;                                           // _08
		virtual void _0C() = 0;                                           // _0C
		virtual void _10() = 0;                                           // _10
		virtual void _14() = 0;                                           // _14
		virtual void _18() = 0;                                           // _18
		virtual void SingleonOrimaDown(SingleGameSection*, int);          // _1C
		virtual void _20() = 0;                                           // _20
		virtual void _24() = 0;                                           // _24
		virtual void _28() = 0;                                           // _28
		virtual void SingleonHoleIn(SingleGameSection*, ItemCave::Item*); // _2C
		virtual void SingleonNextFloor(SingleGameSection*,
		                               ItemHole::Item*); // _30
		virtual void SingleonFountainReturn(SingleGameSection*,
		                                    ItemBigFountain::Item*); // _34
		virtual void Singleon_section_fadeout(SingleGameSection*);   // _38
		virtual void Singleon_demo_timer(SingleGameSection*,
		                                 unsigned long); // _3C

		// _00 VTBL
	};
} // namespace SingleGame
} // namespace Game

namespace Game {
namespace SingleGame {
	struct DayEndState : public SingleGameSection >, public State {
		virtual void Singleinit(SingleGameSection*, StateArg*); // _00
		virtual void Singleexec(SingleGameSection*);            // _04
		virtual void Singlecleanup(SingleGameSection*);         // _08
		virtual void FSMState < resume(SingleGameSection*);     // _0C
		virtual void FSMState < restart(SingleGameSection*);    // _10
		virtual void FSMState
		    < transit(SingleGameSection*, int, StateArg*);       // _14
		virtual void Singledraw(SingleGameSection*, Graphics&);  // _18
		virtual void SingleonOrimaDown(SingleGameSection*, int); // _1C
		virtual void SingleonMovieStart(SingleGameSection*, MovieConfig*,
		                                unsigned long, unsigned long); // _20
		virtual void SingleonMovieDone(SingleGameSection*, MovieConfig*,
		                               unsigned long, unsigned long);     // _24
		virtual void SingleonMovieCommand(SingleGameSection*, int);       // _28
		virtual void SingleonHoleIn(SingleGameSection*, ItemCave::Item*); // _2C
		virtual void SingleonNextFloor(SingleGameSection*,
		                               ItemHole::Item*); // _30
		virtual void SingleonFountainReturn(SingleGameSection*,
		                                    ItemBigFountain::Item*); // _34
		virtual void Singleon_section_fadeout(SingleGameSection*);   // _38
		virtual void Singleon_demo_timer(SingleGameSection*,
		                                 unsigned long); // _3C
		virtual void _40() = 0;                          // _40

		// _00 VTBL
	};
} // namespace SingleGame
} // namespace Game

#endif
