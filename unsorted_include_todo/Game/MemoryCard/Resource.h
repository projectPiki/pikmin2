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
	virtual ~Resource();    // _08
	virtual void _0C() = 0; // _0C
};
} // namespace MemoryCard
} // namespace Game

#endif
