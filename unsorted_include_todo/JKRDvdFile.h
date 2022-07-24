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
	virtual ~JKRDvdFile();                           // _08
	virtual void open(const char*);                  // _0C
	virtual void close();                            // _10
	virtual void readData(void*, long, long);        // _14
	virtual void writeData(const void*, long, long); // _18
	virtual void getFileSize() const;                // _1C (inline)
	virtual void open(long);                         // _20
	virtual void _24() = 0;                          // _24
};

#endif
