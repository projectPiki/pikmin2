#ifndef _JSUMEMORYINPUTSTREAM_H
#define _JSUMEMORYINPUTSTREAM_H

/*
    __vt__20JSUMemoryInputStream:
    .4byte 0
    .4byte 0
    .4byte __dt__20JSUMemoryInputStreamFv
    .4byte getAvailable__20JSURandomInputStreamCFv
    .4byte skip__20JSURandomInputStreamFl
    .4byte readData__20JSUMemoryInputStreamFPvl
    .4byte getLength__20JSUMemoryInputStreamCFv
    .4byte getPosition__20JSUMemoryInputStreamCFv
    .4byte seekPos__20JSUMemoryInputStreamFl17JSUStreamSeekFrom
    .4byte 0
*/

struct JSURandomInputStream {
	virtual ~JSURandomInputStream();   // _00
	virtual void getAvailable() const; // _04
	virtual void skip(long);           // _08

	// _00 VTBL
};

struct JSUMemoryInputStream : public JSURandomInputStream {
	virtual ~JSUMemoryInputStream();               // _00
	virtual void getAvailable() const;             // _04
	virtual void skip(long);                       // _08
	virtual void readData(void*, long);            // _0C
	virtual void getLength() const;                // _10
	virtual void getPosition() const;              // _14
	virtual void seekPos(long, JSUStreamSeekFrom); // _18
	virtual void _1C() = 0;                        // _1C

	// _00 VTBL
};

#endif
