#ifndef _JUTCONSOLE_H
#define _JUTCONSOLE_H

#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JUtility/JUTFont.h"
#include "JSystem/JGadget/linklist.h"
#include "stdarg.h"
#include "types.h"

inline s32 colorCheck(s32 diff, s32 t)
{
	s32 ret = diff - t;
	return ret + 1;
}

struct JUTConsole : public JKRDisposer {
	enum EConsoleType {
		CONSOLETYPE_Unk0 = 0,
		CONSOLETYPE_Unk1 = 1,
		CONSOLETYPE_Unk2 = 2,
	};

	enum OutputFlag {
		CONSOLEOUT_None     = 0,
		CONSOLEOUT_OSReport = 1,
		CONSOLEOUT_Console  = 2,
	};

	JUTConsole(uint, uint, bool);

	virtual ~JUTConsole(); // _08

	void clear();
	void doDraw(EConsoleType) const;
	void print_f(const char*, ...);
	void print(const char*);
	void dumpToTerminal(uint);
	void scroll(int);
	int getUsedLine() const;
	int getLineOffset() const;

	void startPrint(int output, char* text)
	{
		setVisible(true);
		setOutput(output);
		print(text);
	}

	// unused/inlined:
	void dumpToConsole(JUTConsole*, uint);

	void setOutput(uint output) { mOutput = output; }
	void setPosition(int x, int y)
	{
		mPositionX = x;
		mPositionY = y;
	}
	void setFontSize(f32 x, f32 y)
	{
		mFontSizeX = x;
		mFontSizeY = y;
	}
	void setHeight(u32 height)
	{
		mHeight = height;
		if (mHeight > mMaxLines) {
			mHeight = mMaxLines;
		}
	}

	void setFont(JUTFont* font)
	{
		mFont = font;
		setFontSize(font->getWidth(), font->getHeight());
	}

	u32 getOutput() const { return mOutput; }
	int getPositionY() const { return mPositionY; }
	int getPositionX() const { return mPositionX; }
	u32 getHeight() const { return mHeight; }

	bool isVisible() const { return mIsVisible; }
	void setVisible(bool visible) { mIsVisible = visible; }

	void setLineAttr(int param_0, u8 param_1) { mBuf[(_20 + 2) * param_0] = param_1; }
	u8* getLinePtr(int param_0) const { return &mBuf[(_20 + 2) * param_0] + 1; }
	int diffIndex(int startIndex, int endIndex) const
	{
		int diff = endIndex - startIndex;
		if (diff >= 0) {
			return diff;
		}
		return diff += mMaxLines;
	}

	int nextIndex(int currIndex) const
	{
		int newIndex = currIndex + 1;
		if (mMaxLines <= newIndex) {
			newIndex = 0;
		}

		return newIndex;
	}

	void scrollToLastLine() { scroll(mMaxLines); }
	void scrollToFirstLine() { scroll(-mMaxLines); }

	inline bool isAnyOutput() const { return getOutput() & (CONSOLEOUT_Console | CONSOLEOUT_OSReport); }
	inline bool isOutputOSReport() const { return getOutput() & CONSOLEOUT_OSReport; }
	inline bool isOutputConsole() const { return getOutput() & CONSOLEOUT_Console; }

	static JUTConsole* create(uint, uint, JKRHeap*);
	static JUTConsole* create(uint, void*, u32);
	static size_t getObjectSizeFromBufferSize(uint, uint);
	static size_t getLineFromObjectSize(u32, uint);

	static void destroy(JUTConsole*); // UNUSED

	// _00     = VTBL
	// _00-_18 = JKRDisposer
	JGadget::TLinkListNode mListNode; // _18
	u32 _20;                          // _20
	u32 mMaxLines;                    // _24
	u8* mBuf;                         // _28
	bool _2C;                         // _2C
	int _30;                          // _30
	int _34;                          // _34
	int _38;                          // _38
	int _3C;                          // _3C
	int mPositionX;                   // _40
	int mPositionY;                   // _44
	u32 mHeight;                      // _48
	JUTFont* mFont;                   // _4C
	f32 mFontSizeX;                   // _50
	f32 mFontSizeY;                   // _54
	int mOutput;                      // _58
	JUtility::TColor _5C;             // _5C
	JUtility::TColor _60;             // _60
	int _64;                          // _64
	bool mIsVisible;                  // _68
	bool _69;                         // _69
	bool _6A;                         // _6A
	bool _6B;                         // _6B
};

struct JUTConsoleManager {
	JUTConsoleManager();

	~JUTConsoleManager();

	void appendConsole(JUTConsole*);
	void removeConsole(JUTConsole*);
	void draw() const;
	void drawDirect(bool) const;
	void setDirectConsole(JUTConsole*);

	static JUTConsoleManager* getManager() { return sManager; }
	static JUTConsoleManager* createManager(JKRHeap*);

	// unused/inlined:
	static void destroyManager(JUTConsoleManager*);
	void getConsoleNumber() const;

	JUTConsole* getDirectConsole() const { return mDirectConsole; }

	static JUTConsoleManager* sManager;

	JGadget::TLinkList<JUTConsole, 4> mLinkList; // _00
	JUTConsole* mActiveConsole;                  // _0C
	JUTConsole* mDirectConsole;                  // _10
};

extern "C" {
JUTConsole* JUTGetReportConsole();
void JUTSetReportConsole(JUTConsole*);
JUTConsole* JUTGetWarningConsole();
void JUTSetWarningConsole(JUTConsole*);
void JUTReportConsole(const char*);
void JUTReportConsole_f(const char*, ...);
void JUTWarningConsole(const char*);
void JUTWarningConsole_f(const char*, ...);
void JUTConsole_print_f_va_(JUTConsole* console, const char* fmt, va_list args);
}

#endif
