#ifndef _GAME_LOWSCORE_H
#define _GAME_LOWSCORE_H

namespace Game {
struct Lowscore {
	virtual void do_higher(int, int); // _00
	virtual void _04() = 0;           // _04

	// _00 VTBL
};
} // namespace Game

#endif
