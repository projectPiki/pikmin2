#ifndef _JSYSTEM_JUT_JUTDBPRINT_H
#define _JSYSTEM_JUT_JUTDBPRINT_H

#include "types.h"

struct JUTFont;
struct JKRHeap;

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

	u32 _00;      // _00
	JUTFont* _04; // _04
	u32 _08;      // _08
	u32 _0C;      // _0C
	u32 _10;      // _10
};

#endif
