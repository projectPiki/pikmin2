#ifndef _GAME_MEMORYCARD_RESOURCE_H
#define _GAME_MEMORYCARD_RESOURCE_H

namespace Game {
namespace MemoryCard {
	struct Resource {
		virtual ~Resource();    // _00
		virtual void _04() = 0; // _04

		// _00 VTBL
	};
} // namespace MemoryCard
} // namespace Game

#endif
