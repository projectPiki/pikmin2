#ifndef _JUTCONSOLE_H
#define _JUTCONSOLE_H

/*
    __vt__10JUTConsole:
    .4byte 0
    .4byte 0
    .4byte __dt__10JUTConsoleFv
*/

struct JUTConsole {
	virtual ~JUTConsole(); // _08

	void create(unsigned int, unsigned int, JKRHeap*);
	void create(unsigned int, void*, unsigned long);
	JUTConsole(unsigned int, unsigned int, bool);
	void getObjectSizeFromBufferSize(unsigned int, unsigned int);
	void getLineFromObjectSize(unsigned long, unsigned int);
	void clear();
	void doDraw(JUTConsole::EConsoleType) const;
	void print_f(const char*, ...);
	void print(const char*);
	void scroll(int);
	void getUsedLine() const;
	void getLineOffset() const;
};

#endif
