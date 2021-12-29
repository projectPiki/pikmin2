#ifndef _GAME_GAMESTAT_PIKICOUNTER_H
#define _GAME_GAMESTAT_PIKICOUNTER_H

/*
    __vt__Q34Game8GameStat11PikiCounter:
    .4byte 0
    .4byte 0
    .4byte __opi__Q34Game8GameStat11PikiCounterFv
    .4byte __cl__Q34Game8GameStat11PikiCounterFi
*/

namespace Game {
namespace GameStat {
	struct PikiCounter {
		virtual void __opi();         // _00
		virtual void operator()(int); // _04

		// _00 VTBL
	};
} // namespace GameStat
} // namespace Game

#endif
