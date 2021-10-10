#ifndef _GAME_PELLETCONFIG_H
#define _GAME_PELLETCONFIG_H

#include "types.h"
#include "CNode.h"
#include "PrimTagParm.h"

namespace Game {
	class PelletConfig : public CNode {
		char filler[584];
	}; //temp filler struct
	class PelletConfigList : public CNode {
		PelletConfigList();
		//virtual ~PelletConfigList();		//virtual
		
		int count;
		PelletConfig* pelletConfigArray;
	};
} // namespace Game

#endif
