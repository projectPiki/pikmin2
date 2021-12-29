#ifndef _RAMSTREAM_H
#define _RAMSTREAM_H

/*
    __vt__9RamStream:
    .4byte 0
    .4byte 0
    .4byte read__9RamStreamFPvi
    .4byte write__9RamStreamFPvi
    .4byte eof__9RamStreamFv
    .4byte getPending__6StreamFv
*/

struct Stream {
	virtual void read(void*, int);  // _00
	virtual void write(void*, int); // _04
	virtual void eof();             // _08
	virtual void getPending();      // _0C

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
