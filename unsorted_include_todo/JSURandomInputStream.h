#ifndef _JSURANDOMINPUTSTREAM_H
#define _JSURANDOMINPUTSTREAM_H

/*
    __vt__20JSURandomInputStream:
    .4byte 0
    .4byte 0
    .4byte __dt__20JSURandomInputStreamFv
    .4byte getAvailable__20JSURandomInputStreamCFv
    .4byte skip__20JSURandomInputStreamFl
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
*/

struct JSURandomInputStream {
	virtual ~JSURandomInputStream();   // _00
	virtual void getAvailable() const; // _04
	virtual void skip(long);           // _08
	virtual void _0C() = 0;            // _0C
	virtual void _10() = 0;            // _10
	virtual void _14() = 0;            // _14
	virtual void _18() = 0;            // _18

	// _00 VTBL
};

#endif
