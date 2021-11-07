#ifndef _GAME_SINGLEGAME_STATE_H
#define _GAME_SINGLEGAME_STATE_H

namespace Game {
namespace FSMState < Game
{
	struct SingleGameSection >
	{
		virtual void FSMState < init(SingleGameSection*, StateArg*); // _00
		virtual void FSMState < exec(SingleGameSection*);            // _04
		virtual void FSMState < cleanup(SingleGameSection*);         // _08
		virtual void FSMState < resume(SingleGameSection*);          // _0C
		virtual void FSMState < restart(SingleGameSection*);         // _10
		virtual void FSMState
		    < transit(SingleGameSection*, int, StateArg*); // _14

		// _00 VTBL
	};
} // namespace Game
} // namespace Game

namespace Game {
namespace SingleGame {
	struct State : public SingleGameSection > {
		virtual void FSMState < init(SingleGameSection*, StateArg*); // _00
		virtual void FSMState < exec(SingleGameSection*);            // _04
		virtual void FSMState < cleanup(SingleGameSection*);         // _08
		virtual void FSMState < resume(SingleGameSection*);          // _0C
		virtual void FSMState < restart(SingleGameSection*);         // _10
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

		// _00 VTBL
	};
} // namespace SingleGame
} // namespace Game

#endif
