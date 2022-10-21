#ifndef _JSYSTEM_JUT_JUTDBPRINT_H
#define _JSYSTEM_JUT_JUTDBPRINT_H

#include "JSystem/JUT/TColor.h"
#include "types.h"

struct JUTFont;
struct JKRHeap;

/** Unknown struct pointed to by offset 0 of JUTDbPrint. */
struct JUTDbPrint_0x0 {
	JUTDbPrint_0x0* m_next; // _00
	s16 _04;                // _04
	s16 _06;                // _06
	s16 _08;                // _08
	s16 _0A;                // _0A
	u8 _0C;                 // _0C
};

struct JUTDbPrint {
	JUTDbPrint(JUTFont*, JKRHeap*); // unused/inlined
	~JUTDbPrint();                  // unused/inlined

	static JUTDbPrint* start(JUTFont*, JKRHeap*);

	JUTFont* changeFont(JUTFont*);
	void flush();
	void flush(int, int, int, int);
	void drawString(int, int, int, const unsigned char*);

	// Unused/inlined:
	void enter(int, int, int, const char*, int);
	void print(int, int, const char*, ...);
	void print(int, int, int, const char*, ...);
	void reset();

	JUTDbPrint_0x0* _00;      // _00
	JUTFont* m_font;          // _04
	JUtility::TColor m_color; // _08
	u8 _0C;                   // _0C
	JKRHeap* m_heap;          // _10

	static JUTDbPrint* sDebugPrint;
};

#endif
