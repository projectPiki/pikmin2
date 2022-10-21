#ifndef _JUTCONSOLE_H
#define _JUTCONSOLE_H

#include "JSystem/JKR/JKRHeap.h"
#include "JSystem/JUT/JUTFont.h"
#include "JSystem/JGadget/linklist.h"
#include "types.h"

inline s32 colorCheck(s32 diff, s32 t)
{
	s32 ret = diff - t;
	return ret + 1;
}

class JUTConsole : public JKRDisposer {
public:
	enum EConsoleType {
		UNK_TYPE2 = 2,
	};

	enum OutputFlag {
		/* 0x0 */ OUTPUT_NONE,
		/* 0x1 */ OUTPUT_OSREPORT,
		/* 0x2 */ OUTPUT_CONSOLE
	};

	virtual ~JUTConsole(); // _08

	// _00 VTBL

	static JUTConsole* create(unsigned int, unsigned int, JKRHeap*);
	static JUTConsole* create(unsigned int, void*, u32);
	static void destroy(JUTConsole*); // UNUSED
	JUTConsole(unsigned int, unsigned int, bool);
	static size_t getObjectSizeFromBufferSize(uint, uint);
	static size_t getLineFromObjectSize(u32, uint);
	void clear();
	void doDraw(JUTConsole::EConsoleType) const;
	void print_f(char const*, ...);
	void print(char const*);
	void dumpToTerminal(unsigned int);
	void scroll(int);
	int getUsedLine() const;
	int getLineOffset() const;

	void setOutput(unsigned int output) { mOutput = output; }
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
		if (mHeight > field_0x24) {
			mHeight = field_0x24;
		}
	}

	void setFont(JUTFont* p_font)
	{
		mFont = p_font;
		setFontSize(p_font->getWidth(), p_font->getHeight());
	}

	u32 getOutput() const { return mOutput; }
	int getPositionY() const { return mPositionY; }
	int getPositionX() const { return mPositionX; }
	u32 getHeight() const { return mHeight; }

	bool isVisible() const { return mVisible; }
	void setVisible(bool visible) { mVisible = visible; }

	void setLineAttr(int param_0, u8 param_1) { mBuf[(field_0x20 + 2) * param_0] = param_1; }
	u8* getLinePtr(int param_0) const { return &mBuf[(field_0x20 + 2) * param_0] + 1; }
	int diffIndex(int param_0, int param_1) const
	{
		int diff = param_1 - param_0;
		if (diff >= 0) {
			return diff;
		}
		return diff += field_0x24;
	}

	void scrollToLastLine() { scroll(field_0x24); }
	void scrollToFirstLine() { scroll(-field_0x24); }

private:
	JGadget::TLinkListNode mListNode; // _18

private:
	/* 0x20 */ u32 field_0x20;
	/* 0x24 */ u32 field_0x24;
	/* 0x28 */ u8* mBuf;
	/* 0x2C */ bool field_0x2c;
	/* 0x30 */ int field_0x30;
	/* 0x34 */ int field_0x34;
	/* 0x38 */ int field_0x38;
	/* 0x3C */ int field_0x3c;
	/* 0x40 */ int mPositionX;
	/* 0x44 */ int mPositionY;
	/* 0x48 */ u32 mHeight;
	/* 0x4C */ JUTFont* mFont;
	/* 0x50 */ f32 mFontSizeX;
	/* 0x54 */ f32 mFontSizeY;
	/* 0x58 */ int mOutput;
	/* 0x5C */ JUtility::TColor field_0x5c;
	/* 0x60 */ JUtility::TColor field_0x60;
	/* 0x64 */ int field_0x64;
	/* 0x68 */ bool mVisible;
	/* 0x69 */ bool field_0x69;
	/* 0x6A */ bool field_0x6a;
	/* 0x6B */ bool field_0x6b;
}; // Size: 0x6C

class JUTConsoleManager {
public:
	JUTConsoleManager();
	static JUTConsoleManager* createManager(JKRHeap*);
	void appendConsole(JUTConsole*);
	void removeConsole(JUTConsole*);
	void draw() const;
	void drawDirect(bool) const;
	void setDirectConsole(JUTConsole*);

	static JUTConsoleManager* getManager() { return sManager; }

	static JUTConsoleManager* sManager;

private:
	JGadget::TLinkList<JUTConsole, 4> mLinkList; // _00
	JUTConsole* mActiveConsole;                  // _0C
	JUTConsole* mDirectConsole;                  // _10
};                                               // Size: 0x14

extern "C" {
JUTConsole* JUTGetReportConsole();
void JUTSetReportConsole(JUTConsole*);
JUTConsole* JUTGetWarningConsole();
void JUTSetWarningConsole(JUTConsole*);
void JUTReportConsole(char const*);
void JUTReportConsole_f(char const*, ...);
}

#endif
