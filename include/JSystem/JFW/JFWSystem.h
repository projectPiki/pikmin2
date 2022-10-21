#ifndef _JSYSTEM_JFW_JFWSYSTEM_H
#define _JSYSTEM_JFW_JFWSYSTEM_H

#include "Dolphin/gx.h"
#include "JSystem/JUT/JUTFont.h"
#include "types.h"

struct JKRThread;
struct JKRHeap;
struct JUTConsole;
struct JUTConsoleManager;
struct JUTDbPrint;
struct JUTFont;

struct JFWSystem {
	struct CSetUpParam {
		static const int maxStdHeaps;
		static const u32 sysHeapSize;
		static const u32 fifoBufSize;
		static const u32 aramAudioBufSize;
		static const u32 aramGraphBufSize;
		static const long streamPriority;
		static const long decompPriority;
		static const long aPiecePriority;
		static const ResFONT* systemFontRes;
		static const GXRenderModeObj* renderMode;
		static const u32 exConsoleBufferSize;
	};

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
