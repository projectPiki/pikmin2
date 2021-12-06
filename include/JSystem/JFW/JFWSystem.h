#ifndef _JSYSTEM_JFW_JFWSYSTEM_H
#define _JSYSTEM_JFW_JFWSYSTEM_H

#include "types.h"

struct JUTFont;

struct JFWSystem {
	void firstInit();
	void init();

	static u32* mainThread;
	static JUTFont* systemFont;
};

#endif
