#ifndef _GAME_MEMORYCARD_RESOURCE_H
#define _GAME_MEMORYCARD_RESOURCE_H

/*
    __vt__Q34Game10MemoryCard8Resource:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game10MemoryCard8ResourceFv
    .4byte 0
*/

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
