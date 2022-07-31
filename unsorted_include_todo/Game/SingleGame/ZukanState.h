#ifndef _GAME_SINGLEGAME_ZUKANSTATE_H
#define _GAME_SINGLEGAME_ZUKANSTATE_H

/*
    __vt__Q34Game10SingleGame10ZukanState:
    .4byte 0
    .4byte 0
    .4byte init__Q34Game10SingleGame10ZukanStateFPQ24Game17SingleGameSectionPQ24Game8StateArg
    .4byte exec__Q34Game10SingleGame10ZukanStateFPQ24Game17SingleGameSection
    .4byte cleanup__Q34Game10SingleGame10ZukanStateFPQ24Game17SingleGameSection
    .4byte "resume__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
    .4byte "restart__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSection"
    .4byte "transit__Q24Game36FSMState<Q24Game17SingleGameSection>FPQ24Game17SingleGameSectioniPQ24Game8StateArg"
    .4byte draw__Q34Game10SingleGame10ZukanStateFPQ24Game17SingleGameSectionR8Graphics
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
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
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
struct ZukanState : public FSMState<Game::SingleGameSection>, public State {
	virtual void Singleinit(SingleGameSection*, StateArg*); // _08
	virtual void Singleexec(SingleGameSection*);            // _0C
	virtual void Singlecleanup(SingleGameSection*);         // _10
	virtual void Singledraw(SingleGameSection*, Graphics&); // _20
	virtual void _48() = 0;                                 // _48
	virtual void _4C() = 0;                                 // _4C
	virtual void _50() = 0;                                 // _50
	virtual void _54() = 0;                                 // _54
	virtual void _58() = 0;                                 // _58
	virtual void _5C() = 0;                                 // _5C
	virtual void _60() = 0;                                 // _60
	virtual void _64() = 0;                                 // _64
	virtual void _68() = 0;                                 // _68
	virtual void _6C() = 0;                                 // _6C
	virtual void _70() = 0;                                 // _70
	virtual void _74() = 0;                                 // _74
	virtual void _78() = 0;                                 // _78
	virtual void _7C() = 0;                                 // _7C
	virtual void _80() = 0;                                 // _80
	virtual void _84() = 0;                                 // _84
	virtual void _88() = 0;                                 // _88
	virtual void _8C() = 0;                                 // _8C
	virtual void _90() = 0;                                 // _90
	virtual void _94() = 0;                                 // _94
	virtual void _98() = 0;                                 // _98
	virtual void _9C() = 0;                                 // _9C
	virtual void _A0() = 0;                                 // _A0
	virtual void _A4() = 0;                                 // _A4
	virtual void _A8() = 0;                                 // _A8
	virtual void _AC() = 0;                                 // _AC

	ZukanState();
	void setMode(Game::SingleGame::ZukanState::CMode);
	void execModeChange(Game::SingleGameSection*, Game::SingleGame::ZukanState::CMode);
	void execChangeTeki(Game::SingleGameSection*);
	void execTeki(Game::SingleGameSection*);
	void startWipe(float);
	void createEnemy(int);
	void execChangePellet(Game::SingleGameSection*);
	void execPellet(Game::SingleGameSection*);
	void getMaxPelletID();
	void getCurrentPelletConfig(int);
	void convertPelletID(int&, int);
	void drawGradationEffect(Game::SingleGameSection*, Graphics&);
	void drawLightEffect(Game::SingleGameSection*, Graphics&);
	void dvdloadA();
	void createTeki(int);
	void createPellet(int);
	void dvdloadB_teki();
	void dvdloadB_pellet();
	void clearHeapB_common();
	void clearHeapB_teki();
	void clearHeapB_pellet();
	void clearHeaps();
};
} // namespace SingleGame
} // namespace Game

#endif
