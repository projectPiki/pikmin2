#ifndef _GAME_VSGAME_VSSTATE_H
#define _GAME_VSGAME_VSSTATE_H

/*
    __vt__Q34Game6VsGame7VSState:
    .4byte 0
    .4byte 0
    .4byte
   init__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionPQ24Game8StateArg
    .4byte exec__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection
    .4byte cleanup__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection
    .4byte
   "resume__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
    .4byte
   "restart__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
    .4byte
   "transit__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSectioniPQ24Game8StateArg"
    .4byte draw__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionR8Graphics
    .4byte pre2dDraw__Q34Game6VsGame9GameStateFR8GraphicsPQ24Game13VsGameSection
    .4byte onOrimaDown__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectioni
    .4byte
   onMovieStart__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionPQ24Game11MovieConfigUlUl
    .4byte
   onMovieDone__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionPQ24Game11MovieConfigUlUl
    .4byte
   onNextFloor__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionPQ34Game8ItemHole4Item
    .4byte on_section_fadeout__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection
    .4byte goingToCave__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection
    .4byte onBattleFinished__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionib
    .4byte
   onRedOrBlueSuckStart__Q34Game6VsGame9GameStateFPQ24Game13VsGameSectionib
    .4byte isCardUsable__Q34Game6VsGame9GameStateFPQ24Game13VsGameSection
    .4byte
   drawStatus__Q34Game6VsGame9GameStateFR8GraphicsPQ24Game13VsGameSection .4byte
   do_init__Q34Game6VsGame7VSStateFPQ24Game13VsGameSection
*/

namespace Game {
namespace VsGame {
	struct GameState {
		virtual void Vsinit(VsGameSection*, StateArg*);      // _00
		virtual void Vsexec(VsGameSection*);                 // _04
		virtual void Vscleanup(VsGameSection*);              // _08
		virtual void _0C() = 0;                              // _0C
		virtual void _10() = 0;                              // _10
		virtual void _14() = 0;                              // _14
		virtual void Vsdraw(VsGameSection*, Graphics&);      // _18
		virtual void Vspre2dDraw(Graphics&, VsGameSection*); // _1C
		virtual void VsonOrimaDown(VsGameSection*, int);     // _20
		virtual void VsonMovieStart(VsGameSection*, MovieConfig*, unsigned long,
		                            unsigned long); // _24
		virtual void VsonMovieDone(VsGameSection*, MovieConfig*, unsigned long,
		                           unsigned long);                      // _28
		virtual void VsonNextFloor(VsGameSection*, ItemHole::Item*);    // _2C
		virtual void Vson_section_fadeout(VsGameSection*);              // _30
		virtual void VsgoingToCave(VsGameSection*);                     // _34
		virtual void VsonBattleFinished(VsGameSection*, int, bool);     // _38
		virtual void VsonRedOrBlueSuckStart(VsGameSection*, int, bool); // _3C
		virtual void VsisCardUsable(VsGameSection*);                    // _40
		virtual void VsdrawStatus(Graphics&, VsGameSection*);           // _44

		// _00 VTBL
	};
} // namespace VsGame
} // namespace Game

namespace Game {
namespace FSMState < Game
{
	struct VsGameSection >
	{
		virtual void _00() = 0;                                          // _00
		virtual void _04() = 0;                                          // _04
		virtual void _08() = 0;                                          // _08
		virtual void FSMState < resume(VsGameSection*);                  // _0C
		virtual void FSMState < restart(VsGameSection*);                 // _10
		virtual void FSMState < transit(VsGameSection*, int, StateArg*); // _14

		// _00 VTBL
	};
} // namespace Game
} // namespace Game

namespace Game {
namespace VsGame {
	struct VSState : public GameState, public VsGameSection > {
		virtual void Vsinit(VsGameSection*, StateArg*);                  // _00
		virtual void Vsexec(VsGameSection*);                             // _04
		virtual void Vscleanup(VsGameSection*);                          // _08
		virtual void FSMState < resume(VsGameSection*);                  // _0C
		virtual void FSMState < restart(VsGameSection*);                 // _10
		virtual void FSMState < transit(VsGameSection*, int, StateArg*); // _14
		virtual void Vsdraw(VsGameSection*, Graphics&);                  // _18
		virtual void Vspre2dDraw(Graphics&, VsGameSection*);             // _1C
		virtual void VsonOrimaDown(VsGameSection*, int);                 // _20
		virtual void VsonMovieStart(VsGameSection*, MovieConfig*, unsigned long,
		                            unsigned long); // _24
		virtual void VsonMovieDone(VsGameSection*, MovieConfig*, unsigned long,
		                           unsigned long);                      // _28
		virtual void VsonNextFloor(VsGameSection*, ItemHole::Item*);    // _2C
		virtual void Vson_section_fadeout(VsGameSection*);              // _30
		virtual void VsgoingToCave(VsGameSection*);                     // _34
		virtual void VsonBattleFinished(VsGameSection*, int, bool);     // _38
		virtual void VsonRedOrBlueSuckStart(VsGameSection*, int, bool); // _3C
		virtual void VsisCardUsable(VsGameSection*);                    // _40
		virtual void VsdrawStatus(Graphics&, VsGameSection*);           // _44
		virtual void Vsdo_init(VsGameSection*);                         // _48

		// _00 VTBL
	};
} // namespace VsGame
} // namespace Game

#endif
