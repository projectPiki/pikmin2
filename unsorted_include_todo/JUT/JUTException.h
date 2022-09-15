#ifndef _JUTEXCEPTION_H
#define _JUTEXCEPTION_H

/*
    __vt__12JUTException:
    .4byte 0
    .4byte 0
    .4byte __dt__12JUTExceptionFv
    .4byte run__12JUTExceptionFv
*/

struct JUTException {
	virtual ~JUTException(); // _08 (weak)
	virtual void run();      // _0C

	void create(JUTDirectPrint*);
	void errorHandler(unsigned short, OSContext*, unsigned long, unsigned long);
	void panic_f(const char*, int, const char*, ...);
	void setFPException(unsigned long);
	void showFloat(OSContext*);
	void showStack(OSContext*);
	void showMainInfo(unsigned short, OSContext*, unsigned long, unsigned long);
	void showMapInfo_subroutine(unsigned long, bool);
	void showGPRMap(OSContext*);
	void printDebugInfo(JUTException::EInfoPage, unsigned short, OSContext*, unsigned long, unsigned long);
	void readPad(unsigned long*, unsigned long*);
	void printContext(unsigned short, OSContext*, unsigned long, unsigned long);
	void waitTime(long);
	void createFB();
	void setPreUserCallback(void (*)(unsigned short, OSContext*, unsigned long, unsigned long));
	void appendMapFile(const char*);
	void queryMapAddress(char*, unsigned long, long, unsigned long*, unsigned long*, char*, unsigned long, bool, bool);
	void queryMapAddress_single(char*, unsigned long, long, unsigned long*, unsigned long*, char*, unsigned long, bool, bool);
	void createConsole(void*, unsigned long);
};

#endif
