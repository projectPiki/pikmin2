#ifndef _JKRDVDFILE_H
#define _JKRDVDFILE_H

struct JKRDvdFile {
	virtual ~JKRDvdFile();                           // _00
	virtual void open(const char*);                  // _04
	virtual void close();                            // _08
	virtual void readData(void*, long, long);        // _0C
	virtual void writeData(const void*, long, long); // _10
	virtual void getFileSize() const;                // _14
	virtual void open(long);                         // _18
	virtual void _1C() = 0;                          // _1C

	// _00 VTBL
};

#endif
