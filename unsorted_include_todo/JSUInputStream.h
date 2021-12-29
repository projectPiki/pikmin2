#ifndef _JSUINPUTSTREAM_H
#define _JSUINPUTSTREAM_H

/*
    __vt__14JSUInputStream:
    .4byte 0
    .4byte 0
    .4byte __dt__14JSUInputStreamFv
    .4byte 0
    .4byte skip__14JSUInputStreamFl
    .4byte 0
    .4byte 0
*/

struct JSUInputStream {
	virtual ~JSUInputStream(); // _00
	virtual void _04() = 0;    // _04
	virtual void skip(long);   // _08
	virtual void _0C() = 0;    // _0C
	virtual void _10() = 0;    // _10

	// _00 VTBL
};

#endif
