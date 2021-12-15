#ifndef _GAME_VSGAME_VSGAME_H
#define _GAME_VSGAME_VSGAME_H

#include "Game/StateMachine.h"
#include "Game/VsGameSection.h"

namespace ItemHole {
struct Item;
}

namespace Game {
namespace VsGame {
	struct GameState : public FSMState<GameState> {
		GameState();

		virtual void draw(VsGameSection*, struct Graphics&); // _00
		virtual void pre2dDraw(Graphics&, VsGameSection*);   // _04
		virtual void onOrimaDown(VsGameSection*, int);       // _08
		virtual void onMovieStart(VsGameSection*, struct MovieConfig*,
		                          unsigned long,
		                          unsigned long); // _0C
		virtual void onMovieDone(VsGameSection*, MovieConfig*, unsigned long,
		                         unsigned long);                      // _10
		virtual void onNextFloor(VsGameSection*, ItemHole::Item*);    // _14
		virtual void on_section_fadeout(VsGameSection*);              // _18
		virtual void goingToCave(VsGameSection*);                     // _1C
		virtual void onBattleFinished(VsGameSection*, int, bool);     // _20
		virtual void onRedOrBlueSuckStart(VsGameSection*, int, bool); // _24
		virtual void isCardUsable(VsGameSection*);                    // _28
		virtual void drawStatus(Graphics&, VsGameSection*);           // _2C
		virtual void do_init(VsGameSection*);                         // _30
	};

	struct VSState : public GameState {
		VSState();

		virtual void do_init(VsGameSection*); // _30
	};
} // namespace VsGame
} // namespace Game

#endif
