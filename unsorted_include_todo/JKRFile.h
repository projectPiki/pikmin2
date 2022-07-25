#ifndef _JKRFILE_H
#define _JKRFILE_H

/*
    __vt__7JKRFile:
    .4byte 0
    .4byte 0
    .4byte __dt__7JKRFileFv
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
*/

struct JKRFile {
	virtual ~JKRFile();     // _08 (weak)
	virtual void _0C() = 0; // _0C
	virtual void _10() = 0; // _10
	virtual void _14() = 0; // _14
	virtual void _18() = 0; // _18
	virtual void _1C() = 0; // _1C
};

#endif
