#ifndef _GAME_VSGAME_TITLESTATE_H
#define _GAME_VSGAME_TITLESTATE_H

/*
    __vt__Q34Game6VsGame10TitleState:
    .4byte 0
    .4byte 0
    .4byte init__Q34Game6VsGame10TitleStateFPQ24Game13VsGameSectionPQ24Game8StateArg
    .4byte exec__Q34Game6VsGame10TitleStateFPQ24Game13VsGameSection
    .4byte cleanup__Q34Game6VsGame10TitleStateFPQ24Game13VsGameSection
    .4byte "resume__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
    .4byte "restart__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
    .4byte "transit__Q24Game32FSMState<Q24Game13VsGameSection>FPQ24Game13VsGameSectioniPQ24Game8StateArg"
    .4byte draw__Q34Game6VsGame10TitleStateFPQ24Game13VsGameSectionR8Graphics
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
		virtual void Vsinit(VsGameSection*, StateArg*);                  // _08
		virtual void Vsexec(VsGameSection*);                             // _0C
		virtual void Vscleanup(VsGameSection*);                          // _10
		virtual void FSMState < resume(VsGameSection*);                  // _14 (weak)
		virtual void FSMState < restart(VsGameSection*);                 // _18 (weak)
		virtual void FSMState < transit(VsGameSection*, int, StateArg*); // _1C (weak)
	};
} // namespace Game
} // namespace Game

namespace Game {
namespace VsGame {
struct State {
	virtual void Vsinit(VsGameSection*, StateArg*);                                          // _08
	virtual void Vsexec(VsGameSection*);                                                     // _0C
	virtual void Vscleanup(VsGameSection*);                                                  // _10
	virtual void _14() = 0;                                                                  // _14
	virtual void _18() = 0;                                                                  // _18
	virtual void _1C() = 0;                                                                  // _1C
	virtual void Vsdraw(VsGameSection*, Graphics&);                                          // _20
	virtual void Vspre2dDraw(Graphics&, VsGameSection*);                                     // _24 (weak)
	virtual void VsonOrimaDown(VsGameSection*, int);                                         // _28 (weak)
	virtual void VsonMovieStart(VsGameSection*, MovieConfig*, unsigned long, unsigned long); // _2C (weak)
	virtual void VsonMovieDone(VsGameSection*, MovieConfig*, unsigned long, unsigned long);  // _30 (weak)
	virtual void VsonNextFloor(VsGameSection*, ItemHole::Item*);                             // _34 (weak)
	virtual void Vson_section_fadeout(VsGameSection*);                                       // _38 (weak)
	virtual void VsgoingToCave(VsGameSection*);                                              // _3C (weak)
	virtual void VsonBattleFinished(VsGameSection*, int, bool);                              // _40 (weak)
	virtual void VsonRedOrBlueSuckStart(VsGameSection*, int, bool);                          // _44 (weak)
	virtual void VsisCardUsable(VsGameSection*);                                             // _48 (weak)
};
} // namespace VsGame
} // namespace Game

namespace Game {
namespace VsGame {
struct TitleState : public VsGameSection >, public State {
	virtual void Vsinit(VsGameSection*, StateArg*); // _08
	virtual void Vsexec(VsGameSection*);            // _0C
	virtual void Vscleanup(VsGameSection*);         // _10
	virtual void Vsdraw(VsGameSection*, Graphics&); // _20

	TitleState();
	void dvdload();
	void execChallenge(Game::VsGameSection*);
	void execVs(Game::VsGameSection*);
};
} // namespace VsGame
} // namespace Game

#endif
