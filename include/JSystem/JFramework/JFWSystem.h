#ifndef _JSYSTEM_JFW_JFWSYSTEM_H
#define _JSYSTEM_JFW_JFWSYSTEM_H

#include "Dolphin/gx.h"
#include "JSystem/JUtility/JUTFont.h"
#include "types.h"

struct JKRThread;
struct JKRHeap;
struct JKRExpHeap;
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
		static s32 streamPriority;
		static s32 decompPriority;
		static s32 aPiecePriority;
		static ResFONT* systemFontRes;
		static GXRenderModeObj* renderMode;
		static u32 exConsoleBufferSize;
	};

	static void firstInit();
	static void init();

	static JUTConsole* getSystemConsole() { return systemConsole; }
	static JKRExpHeap* getSystemHeap() { return systemHeap; }

	static void setMaxStdHeap(s32 max) { CSetUpParam::maxStdHeaps = max; }
	static void setSysHeapSize(u32 size) { CSetUpParam::sysHeapSize = size; }
	static void setFifoBufSize(u32 size) { CSetUpParam::fifoBufSize = size; }
	static void setAramAudioBufSize(u32 size) { CSetUpParam::aramAudioBufSize = size; }
	static void setAramGraphBufSize(u32 size) { CSetUpParam::aramGraphBufSize = size; }
	static void setRenderMode(GXRenderModeObj* p_modeObj) { CSetUpParam::renderMode = p_modeObj; }

	static JKRHeap* rootHeap;
	static JKRExpHeap* systemHeap;
	static JKRThread* mainThread;
	static JUTDbPrint* debugPrint;
	static JUTFont* systemFont;
	static JUTConsoleManager* systemConsoleManager;
	static JUTConsole* systemConsole;
	static u8 sInitCalled;
};

#endif
