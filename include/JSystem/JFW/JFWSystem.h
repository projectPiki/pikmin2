#ifndef _JSYSTEM_JFW_JFWSYSTEM_H
#define _JSYSTEM_JFW_JFWSYSTEM_H

#include "types.h"

struct JKRThread;
struct JKRHeap;
struct JUTConsole;
struct JUTConsoleManager;
struct JUTDbPrint;
struct JUTFont;

struct JFWSystem {
	void firstInit();
	void init();

	static JKRHeap* rootHeap;
	static JKRHeap* systemHeap;
	static JKRThread* mainThread;
	static JUTDbPrint* debugPrint;
	static JUTFont* systemFont;
	static JUTConsoleManager* systemConsoleManager;
	static JUTConsole* systemConsole;
	static u8 sInitCalled;
};

#endif
