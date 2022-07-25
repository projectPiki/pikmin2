#ifndef _GAME_LOWSCORE_H
#define _GAME_LOWSCORE_H

/*
    __vt__Q24Game8Lowscore:
    .4byte 0
    .4byte 0
    .4byte do_higher__Q24Game8LowscoreFii
    .4byte 0
*/

namespace Game {
struct Lowscore {
	virtual void do_higher(int, int); // _08 (weak)
	virtual void _0C() = 0;           // _0C
};
} // namespace Game

#endif
