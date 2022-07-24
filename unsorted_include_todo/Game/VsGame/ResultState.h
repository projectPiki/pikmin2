#ifndef _GAME_VSGAME_RESULTSTATE_H
#define _GAME_VSGAME_RESULTSTATE_H

/*
    __vt__Q34Game6VsGame11ResultState:
    .4byte 0
    .4byte 0
    .4byte init__Q34Game6VsGame11ResultStateFPQ24Game13VsGameSectionPQ24Game8StateArg
    .4byte exec__Q34Game6VsGame11ResultStateFPQ24Game13VsGameSection
    .4byte cleanup__Q34Game6VsGame11ResultStateFPQ24Game13VsGameSection
    .4byte "resume__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
    .4byte "restart__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
    .4byte "transit__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSectioniPQ24Game8StateArg"
    .4byte draw__Q34Game6VsGame11ResultStateFPQ24Game13VsGameSectionR8Graphics
    .4byte pre2dDraw__Q34Game6VsGame5StateFR8GraphicsPQ24Game13VsGameSection
    .4byte onOrimaDown__Q34Game6VsGame5StateFPQ24Game13VsGameSectioni
    .4byte onMovieStart__Q34Game6VsGame5StateFPQ24Game13VsGameSectionPQ24Game11MovieConfigUlUl
    .4byte onMovieDone__Q34Game6VsGame5StateFPQ24Game13VsGameSectionPQ24Game11MovieConfigUlUl
    .4byte onNextFloor__Q34Game6VsGame5StateFPQ24Game13VsGameSectionPQ34Game8ItemHole4Item
    .4byte on_section_fadeout__Q34Game6VsGame5StateFPQ24Game13VsGameSection
    .4byte goingToCave__Q34Game6VsGame5StateFPQ24Game13VsGameSection
    .4byte onBattleFinished__Q34Game6VsGame5StateFPQ24Game13VsGameSectionib
    .4byte onRedOrBlueSuckStart__Q34Game6VsGame5StateFPQ24Game13VsGameSectionib
    .4byte isCardUsable__Q34Game6VsGame5StateFPQ24Game13VsGameSection
*/

namespace Game {
namespace FSMState < Game
{
	struct VsGameSection >
	{
		virtual void _08() = 0;                                          // _08
		virtual void _0C() = 0;                                          // _0C
		virtual void _10() = 0;                                          // _10
		virtual void FSMState < resume(VsGameSection*);                  // _14
		virtual void FSMState < restart(VsGameSection*);                 // _18
		virtual void FSMState < transit(VsGameSection*, int, StateArg*); // _1C

		// _00 VTBL
	};
} // namespace Game
} // namespace Game

namespace Game {
namespace VsGame {
struct State {
	virtual void _08() = 0;                                                                  // _08
	virtual void _0C() = 0;                                                                  // _0C
	virtual void _10() = 0;                                                                  // _10
	virtual void _14() = 0;                                                                  // _14
	virtual void _18() = 0;                                                                  // _18
	virtual void _1C() = 0;                                                                  // _1C
	virtual void _20() = 0;                                                                  // _20
	virtual void Vspre2dDraw(Graphics&, VsGameSection*);                                     // _24
	virtual void VsonOrimaDown(VsGameSection*, int);                                         // _28
	virtual void VsonMovieStart(VsGameSection*, MovieConfig*, unsigned long, unsigned long); // _2C
	virtual void VsonMovieDone(VsGameSection*, MovieConfig*, unsigned long, unsigned long);  // _30
	virtual void VsonNextFloor(VsGameSection*, ItemHole::Item*);                             // _34
	virtual void Vson_section_fadeout(VsGameSection*);                                       // _38
	virtual void VsgoingToCave(VsGameSection*);                                              // _3C
	virtual void VsonBattleFinished(VsGameSection*, int, bool);                              // _40
	virtual void VsonRedOrBlueSuckStart(VsGameSection*, int, bool);                          // _44
	virtual void VsisCardUsable(VsGameSection*);                                             // _48

	// _00 VTBL
};
} // namespace VsGame
} // namespace Game

namespace Game {
namespace VsGame {
struct ResultState : public VsGameSection >, public State {
	virtual void Vsinit(VsGameSection*, StateArg*); // _08
	virtual void Vsexec(VsGameSection*);            // _0C
	virtual void Vscleanup(VsGameSection*);         // _10
	virtual void Vsdraw(VsGameSection*, Graphics&); // _20

	// _00 VTBL
};
} // namespace VsGame
} // namespace Game

#endif
