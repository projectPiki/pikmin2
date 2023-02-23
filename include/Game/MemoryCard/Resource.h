#ifndef _GAME_MEMORYCARD_RESOURCE_H
#define _GAME_MEMORYCARD_RESOURCE_H

#include "Game/MemoryCard/Mgr.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "types.h"

namespace Game {
namespace MemoryCard {
struct Resource : public JKRDisposer {
	Resource(Mgr* parentMgr)
	    : mMgr(parentMgr)
	{
	}

	virtual ~Resource();

	// _00     = VTBL
	// _00-_18 = JKRDisposer
	Mgr* mMgr; // _18
};
} // namespace MemoryCard
} // namespace Game

#endif
