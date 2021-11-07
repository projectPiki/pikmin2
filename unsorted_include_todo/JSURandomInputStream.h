#ifndef _JSURANDOMINPUTSTREAM_H
#define _JSURANDOMINPUTSTREAM_H

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
