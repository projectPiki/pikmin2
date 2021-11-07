#ifndef _GAME_HIGHSCORE_H
#define _GAME_HIGHSCORE_H

namespace Game {
struct Highscore {
	virtual void do_higher(int, int); // _00
	virtual void _04() = 0;           // _04

	// _00 VTBL
};
} // namespace Game

#endif
