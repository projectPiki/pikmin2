#ifndef _GAME_PELLETCONFIG_H
#define _GAME_PELLETCONFIG_H

#include "types.h"
#include "CNode.h"
#include "PrimTagParm.h"

struct TParms {
	TagParameters parm1;
};

namespace Game {
	class PelletConfig : public CNode {
		char filler[584];
		virtual ~PelletConfig(); //virtual destructor
	}; //temporary filler struct for pellet config
	class PelletConfigList : public CNode {
		PelletConfigList();
		virtual ~PelletConfigList();		//virtual

		int count;
		PelletConfig* pelletConfigArray;
		void getPelletConfig(char*);
		void getPelletConfig(int);
		void getPelletConfig_ByDictionaryNo(int);
		void read(Stream&);
	};
} // namespace Game

#endif
