#ifndef _GAME_SINGLEGAME_ZUKANSTATE_H
#define _GAME_SINGLEGAME_ZUKANSTATE_H

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
		virtual void _00() = 0;                                  // _00
		virtual void _04() = 0;                                  // _04
		virtual void _08() = 0;                                  // _08
		virtual void _0C() = 0;                                  // _0C
		virtual void _10() = 0;                                  // _10
		virtual void _14() = 0;                                  // _14
		virtual void _18() = 0;                                  // _18
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

		// _00 VTBL
	};
} // namespace SingleGame
} // namespace Game

namespace Game {
namespace SingleGame {
	struct ZukanState : public SingleGameSection >, public State {
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
		virtual void _44() = 0;                          // _44
		virtual void _48() = 0;                          // _48
		virtual void _4C() = 0;                          // _4C
		virtual void _50() = 0;                          // _50
		virtual void _54() = 0;                          // _54
		virtual void _58() = 0;                          // _58
		virtual void _5C() = 0;                          // _5C
		virtual void _60() = 0;                          // _60
		virtual void _64() = 0;                          // _64
		virtual void _68() = 0;                          // _68
		virtual void _6C() = 0;                          // _6C
		virtual void _70() = 0;                          // _70
		virtual void _74() = 0;                          // _74
		virtual void _78() = 0;                          // _78
		virtual void _7C() = 0;                          // _7C
		virtual void _80() = 0;                          // _80
		virtual void _84() = 0;                          // _84
		virtual void _88() = 0;                          // _88
		virtual void _8C() = 0;                          // _8C
		virtual void _90() = 0;                          // _90
		virtual void _94() = 0;                          // _94
		virtual void _98() = 0;                          // _98
		virtual void _9C() = 0;                          // _9C
		virtual void _A0() = 0;                          // _A0
		virtual void _A4() = 0;                          // _A4

		// _00 VTBL
	};
} // namespace SingleGame
} // namespace Game

#endif
