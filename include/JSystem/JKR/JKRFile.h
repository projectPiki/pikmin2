#ifndef _JSYSTEM_JKR_JKRFILE_H
#define _JSYSTEM_JKR_JKRFILE_H

#include "types.h"

struct JKRFile {
	virtual ~JKRFile();                                  // _00
	virtual void open(const char*)                  = 0; // _04
	virtual void close()                            = 0; // _08
	virtual int readData(void*, long, long)         = 0; // _0C
	virtual void writeData(const void*, long, long) = 0; // _10
	virtual void getFileSize() const                = 0; // _14
	virtual void open(long)                         = 0; // _18
	virtual void _1C()                              = 0; // _1C

	void read(void* a1, long a2, long a3);
};

#endif
