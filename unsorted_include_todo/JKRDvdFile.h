#ifndef _JKRDVDFILE_H
#define _JKRDVDFILE_H

/*
    __vt__10JKRDvdFile:
    .4byte 0
    .4byte 0
    .4byte __dt__10JKRDvdFileFv
    .4byte open__10JKRDvdFileFPCc
    .4byte close__10JKRDvdFileFv
    .4byte readData__10JKRDvdFileFPvll
    .4byte writeData__10JKRDvdFileFPCvll
    .4byte getFileSize__10JKRDvdFileCFv
    .4byte open__10JKRDvdFileFl
    .4byte 0
*/

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
