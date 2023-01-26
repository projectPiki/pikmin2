#ifndef _JSYSTEM_JFW_JFWSYSTEM_H
#define _JSYSTEM_JFW_JFWSYSTEM_H

#include "Dolphin/gx.h"
#include "JSystem/JUtility/JUTFont.h"
#include "types.h"

struct JKRThread;
struct JKRHeap;
struct JUTConsole;
struct JUTConsoleManager;
struct JUTDbPrint;
struct JUTFont;

struct JFWSystem {
	struct CSetUpParam {
		static int maxStdHeaps;
		static u32 sysHeapSize;
		static size_t fifoBufSize;
		static u32 aramAudioBufSize;
		static u32 aramGraphBufSize;
		static long streamPriority;
		static long decompPriority;
		static long aPiecePriority;
		static ResFONT* systemFontRes;
		static GXRenderModeObj* renderMode;
		static u32 exConsoleBufferSize;
	};

	static void firstInit();
	static void init();

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
