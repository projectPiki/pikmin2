#ifndef _RAMSTREAM_H
#define _RAMSTREAM_H

struct Stream {
	virtual void _00() = 0;    // _00
	virtual void _04() = 0;    // _04
	virtual void _08() = 0;    // _08
	virtual void getPending(); // _0C

	// _00 VTBL
};

struct RamStream : public Stream {
	virtual void read(void*, int);  // _00
	virtual void write(void*, int); // _04
	virtual void eof();             // _08
	virtual void getPending();      // _0C

	// _00 VTBL
};

#endif
