#ifndef _JSYSTEM_JUT_JUTDBPRINT_H
#define _JSYSTEM_JUT_JUTDBPRINT_H

#include "JSystem/JUtility/TColor.h"
#include "types.h"

struct JUTFont;
struct JKRHeap;

// Unknown struct pointed to by 0x0 of JUTDbPrint.
// Name made up.
struct JUTDbPrintList {
	JUTDbPrintList* mNext; // _00
	s16 mPositionX;        // _04
	s16 mPositionY;        // _06
	s16 mItemCount;        // _08
	s16 mStringLength;     // _0A
	u8 mString;            // _0C
};

struct JUTDbPrint {
	JUTDbPrint(JUTFont*, JKRHeap*); // unused/inlined

	~JUTDbPrint(); // unused/inlined

	JUTFont* changeFont(JUTFont*);
	void flush();
	void flush(int, int, int, int);
	void drawString(int, int, int, const u8*);

	// Unused/inlined:
	void enter(int, int, int, const char*, int);
	void print(int, int, const char*, ...);
	void print(int, int, int, const char*, ...);
	void reset();

	void setVisible(bool visible) { mIsVisible = visible; }
	JUTFont* getFont() const { return mFont; }
	JUTDbPrintList* getList() const { return mList; }

	static JUTDbPrint* start(JUTFont*, JKRHeap*);
	static JUTDbPrint* getManager() { return sDebugPrint; }

	static JUTDbPrint* sDebugPrint;

	JUTDbPrintList* mList;   // _00
	JUTFont* mFont;          // _04
	JUtility::TColor mColor; // _08
	bool mIsVisible;         // _0C
	JKRHeap* mHeap;          // _10
};

#endif
