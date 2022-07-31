#ifndef _GAME_SINGLEGAME_FILESTATE_H
#define _GAME_SINGLEGAME_FILESTATE_H

/*
    __vt__Q34Game10SingleGame9FileState:
    .4byte 0
    .4byte 0
    .4byte init__Q34Game10SingleGame9FileStateFPQ24Game17SingleGameSectionPQ24Game8StateArg
    .4byte exec__Q34Game10SingleGame9FileStateFPQ24Game17SingleGameSection
    .4byte cleanup__Q34Game10SingleGame9FileStateFPQ24Game17SingleGameSection
    .4byte "resume__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
    .4byte "restart__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
    .4byte "transit__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSectioniPQ24Game8StateArg"
    .4byte draw__Q34Game10SingleGame9FileStateFPQ24Game17SingleGameSectionR8Graphics
    .4byte onOrimaDown__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectioni
    .4byte onMovieStart__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ24Game11MovieConfigUlUl
    .4byte onMovieDone__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ24Game11MovieConfigUlUl
    .4byte onMovieCommand__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectioni
    .4byte onHoleIn__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ34Game8ItemCave4Item
    .4byte onNextFloor__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ34Game8ItemHole4Item
    .4byte onFountainReturn__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionPQ34Game15ItemBigFountain4Item
    .4byte on_section_fadeout__Q34Game10SingleGame5StateFPQ24Game17SingleGameSection
    .4byte on_demo_timer__Q34Game10SingleGame5StateFPQ24Game17SingleGameSectionUl
    .4byte 0
*/

namespace Game {
struct FSMState<Game::SingleGameSection> {
	virtual void Singleinit(SingleGameSection*, StateArg*);                                // _08
	virtual void Singleexec(SingleGameSection*);                                           // _0C
	virtual void Singlecleanup(SingleGameSection*);                                        // _10
	virtual void FSMState<SingleGameSection>::resume(SingleGameSection*);                  // _14 (weak)
	virtual void FSMState<SingleGameSection>::restart(SingleGameSection*);                 // _18 (weak)
	virtual void FSMState<SingleGameSection>::transit(SingleGameSection*, int, StateArg*); // _1C (weak)
};
} // namespace Game

namespace Game {
namespace SingleGame {
struct State {
	virtual void Singleinit(SingleGameSection*, StateArg*);                                          // _08
	virtual void Singleexec(SingleGameSection*);                                                     // _0C
	virtual void Singlecleanup(SingleGameSection*);                                                  // _10
	virtual void _14() = 0;                                                                          // _14
	virtual void _18() = 0;                                                                          // _18
	virtual void _1C() = 0;                                                                          // _1C
	virtual void Singledraw(SingleGameSection*, Graphics&);                                          // _20
	virtual void SingleonOrimaDown(SingleGameSection*, int);                                         // _24 (weak)
	virtual void SingleonMovieStart(SingleGameSection*, MovieConfig*, unsigned long, unsigned long); // _28 (weak)
	virtual void SingleonMovieDone(SingleGameSection*, MovieConfig*, unsigned long, unsigned long);  // _2C (weak)
	virtual void SingleonMovieCommand(SingleGameSection*, int);                                      // _30 (weak)
	virtual void SingleonHoleIn(SingleGameSection*, ItemCave::Item*);                                // _34 (weak)
	virtual void SingleonNextFloor(SingleGameSection*, ItemHole::Item*);                             // _38 (weak)
	virtual void SingleonFountainReturn(SingleGameSection*, ItemBigFountain::Item*);                 // _3C (weak)
	virtual void Singleon_section_fadeout(SingleGameSection*);                                       // _40 (weak)
	virtual void Singleon_demo_timer(SingleGameSection*, unsigned long);                             // _44 (weak)
};
} // namespace SingleGame
} // namespace Game

namespace Game {
namespace SingleGame {
struct FileState : public FSMState<Game::SingleGameSection>, public State {
	virtual void Singleinit(SingleGameSection*, StateArg*); // _08
	virtual void Singleexec(SingleGameSection*);            // _0C
	virtual void Singlecleanup(SingleGameSection*);         // _10
	virtual void Singledraw(SingleGameSection*, Graphics&); // _20
	virtual void _48() = 0;                                 // _48

	FileState();
	void dvdload();
	void startGame(Game::SingleGameSection*);
};
} // namespace SingleGame
} // namespace Game

#endif
