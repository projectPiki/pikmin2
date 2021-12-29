#ifndef _STREAM_H
#define _STREAM_H

/*
    __vt__6Stream:
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte 0
    .4byte eof__6StreamFv
    .4byte getPending__6StreamFv
*/

struct Stream {
	virtual void _00() = 0;    // _00
	virtual void _04() = 0;    // _04
	virtual void eof();        // _08
	virtual void getPending(); // _0C

	// _00 VTBL
};

#endif
