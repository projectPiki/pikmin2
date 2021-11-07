#ifndef _GAME_GAMESTAT_PIKICOUNTER_H
#define _GAME_GAMESTAT_PIKICOUNTER_H

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
