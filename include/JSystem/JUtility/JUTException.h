#ifndef _JSYSTEM_JUT_JUTEXCEPTION_H
#define _JSYSTEM_JUT_JUTEXCEPTION_H

#include "Dolphin/os.h"
#include "JSystem/JKernel/JKRThread.h"
#include "JSystem/JSupport/JSUList.h"
#include "JSystem/JUtility/JUTGamePad.h"
#include "JSystem/JUtility/JUTExternalFB.h"
#include "stdarg.h"
#include "types.h"

typedef void (*JUTExceptionHandler)(OSError error, OSContext* context, u32 p3, u32 p4);

struct JUTConsole;
struct JUTDirectPrint;

enum ExPrintFlags {
	EXPRINTFLAG_GPR     = 0x1,
	EXPRINTFLAG_GPRMap  = 0x2,
	EXPRINTFLAG_SRR0Map = 0x4,
	EXPRINTFLAG_Float   = 0x8,
	EXPRINTFLAG_Stack   = 0x10,

	EXPRINTFLAG_All = 0x1F,
};

/**
 * @size{0xA4}
 */
struct JUTException : public JKRThread {
	enum EInfoPage {
		INFOPAGE_GPR     = 1,
		INFOPAGE_Float   = 2,
		INFOPAGE_Stack   = 3,
		INFOPAGE_GPRMap  = 4,
		INFOPAGE_SRR0Map = 5,
	};

	// size: 0x14
	struct JUTExMapFile {
		inline JUTExMapFile(const char* fileName)
		    : mLink(this)
		{
			mFileName = fileName;
		}

		const char* mFileName;       // _00
		JSULink<JUTExMapFile> mLink; // _04
	};

	/** @fabricated */
	struct ExCallbackObject {
		OSErrorHandler mErrorHandler; // _00
		OSError mError;               // _04
		OSContext* mContext;          // _08
		u32 _0C;                      // _0C
		u32 _10;                      // _10
	};

	JUTException(JUTDirectPrint*); // unused/inlined

	virtual ~JUTException() { } // _08 (weak)
	virtual void* run();        // _0C

	void showFloat(OSContext*);
	void showStack(OSContext*);
	void showMainInfo(u16, OSContext*, u32, u32);
	bool showMapInfo_subroutine(u32, bool);
	void showGPRMap(OSContext*);
	void printDebugInfo(JUTException::EInfoPage, u16, OSContext*, u32, u32);
	bool readPad(u32*, u32*);
	void printContext(u16, OSContext*, u32, u32);
	void createFB();

	static void waitTime(s32);
	static JUTExceptionHandler setPreUserCallback(JUTExceptionHandler);
	static void appendMapFile(const char*);
	static bool queryMapAddress(char*, u32, s32, u32*, u32*, char*, u32, bool, bool);
	static bool queryMapAddress_single(char*, u32, s32, u32*, u32*, char*, u32, bool, bool);

	static JUTException* create(JUTDirectPrint*);
	static void createConsole(void* buffer, u32 bufferSize);
	static void panic_f(char const* file, int line, char const* msg, ...);
	static void errorHandler(u16, OSContext*, u32, u32);
	static void setFPException(u32);

	// unused/inlined:
	static void panic_f_va(const char*, int, const char*, va_list*);
	static JUTExceptionHandler setPostUserCallback(JUTExceptionHandler);

	void showFloatSub(int, f32);
	bool searchPartialModule(u32, u32*, u32*, u32*, u32*);
	void showGPR(OSContext*);
	void showSRR0Map(OSContext*);
	bool isEnablePad() const;
	u32 getFpscr();
	void setFpscr(u32);
	void enableFpuException();
	void disableFpuException();

	JUTExternalFB* getFrameMemory() const { return mFrameMemory; }

	void setTraceSuppress(u32 param_0) { mTraceSuppress = param_0; }
	void setGamePad(JUTGamePad* gamePad)
	{
		mGamePad = gamePad;
		mPadPort = JUTGamePad::PORT_INVALID;
	}

	static JUTException* getManager() { return sErrorManager; }
	static JUTConsole* getConsole() { return sConsole; }

	static JUTConsole* sConsole;
	static void* sConsoleBuffer;
	static size_t sConsoleBufferSize;
	static JUTException* sErrorManager;
	static OSMessageQueue sMessageQueue;
	static void* sMessageBuffer[1];
	static JUTExceptionHandler sPreUserCallback;
	static JUTExceptionHandler sPostUserCallback;
	static u32 msr;
	static u32 fpscr;
	static const char* sCpuExpName[OS_ERROR_MAX + 1];
	static JSUList<JUTExMapFile> sMapFileList;

	// _00     = VTBL
	// _00-_7C = JKRThread
	JUTExternalFB* mFrameMemory;   // _7C
	JUTDirectPrint* mDirectPrint;  // _80
	JUTGamePad* mGamePad;          // _84
	JUTGamePad::EPadPort mPadPort; // _88
	int mPrintWaitTime0;           // _8C
	int mPrintWaitTime1;           // _90
	u32 mTraceSuppress;            // _94
	u32 _98;                       // _98
	u32 mPrintFlags;               // _9C, see ExPrintFlags enum
	void* mStackPointer;           // _A0
};

#define JUT_PANIC(...) JUTException::panic_f(__FILE__, __LINE__, __VA_ARGS__)

#define JUT_ASSERT(cond, string_ref) \
	if (!(cond))                     \
	JUT_PANIC(string_ref)

#ifndef MATCHING
#define JUT_PANICLINE(line, ...) JUT_PANIC(__VA_ARGS__)
#else
#define JUT_PANICLINE(line, ...) JUTException::panic_f(__FILE__, line, __VA_ARGS__)
#endif

#define JUT_ASSERTLINE(line, cond, ...) \
	if (!(cond))                        \
	JUT_PANICLINE(line, __VA_ARGS__)

#define JUTASSERTBOUNDSLINE(line, lowerLimitInclusive, var, upperLimitExclusive, ...) \
	bool check##line = false;                                                         \
	if (lowerLimitInclusive <= var && var < upperLimitExclusive) {                    \
		check##line = true;                                                           \
	}                                                                                 \
	JUT_ASSERTLINE(line, check##line, __VA_ARGS__, var)

#define JUTASSERTBOUNDSINCLUSIVELINE(line, lowerLimitInclusive, var, upperLimitInclusive, ...) \
	bool check##line = false;                                                                  \
	if (lowerLimitInclusive <= var && var <= upperLimitInclusive) {                            \
		check##line = true;                                                                    \
	}                                                                                          \
	JUT_ASSERTLINE(line, check##line, __VA_ARGS__, var)

#if DEBUG
// TODO: Reasonable definition of a debug print function
#define JUT_LOG(...) JUT_PANIC(__VA_ARGS__)
#else
#define JUT_LOG(...) (void)0
#endif

#endif
