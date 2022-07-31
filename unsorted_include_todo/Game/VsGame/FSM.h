#ifndef _GAME_VSGAME_FSM_H
#define _GAME_VSGAME_FSM_H

/*
    __vt__Q34Game6VsGame3FSM:
    .4byte 0
    .4byte 0
    .4byte init__Q34Game6VsGame3FSMFPQ24Game13VsGameSection
    .4byte "start__Q24Game36StateMachine<Q24Game13VsGameSection>FPQ24Game13VsGameSectioniPQ24Game8StateArg"
    .4byte "exec__Q24Game36StateMachine<Q24Game13VsGameSection>FPQ24Game13VsGameSection"
    .4byte transit__Q34Game6VsGame3FSMFPQ24Game13VsGameSectioniPQ24Game8StateArg
*/

namespace Game {
struct StateMachine<Game::VsGameSection> {
	virtual void Vsinit(VsGameSection*);                                             // _08
	virtual void StateMachine<VsGameSection>::start(VsGameSection*, int, StateArg*); // _0C (weak)
	virtual void StateMachine<VsGameSection>::exec(VsGameSection*);                  // _10 (weak)
};
} // namespace Game

namespace Game {
namespace VsGame {
struct FSM : public StateMachine<Game::VsGameSection> {
	virtual void Vsinit(VsGameSection*);                    // _08
	virtual void Vstransit(VsGameSection*, int, StateArg*); // _14
};
} // namespace VsGame
} // namespace Game

#endif
