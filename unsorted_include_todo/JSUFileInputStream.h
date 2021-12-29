#ifndef _JSUFILEINPUTSTREAM_H
#define _JSUFILEINPUTSTREAM_H

/*
    __vt__18JSUFileInputStream:
    .4byte 0
    .4byte 0
    .4byte __dt__18JSUFileInputStreamFv
    .4byte getAvailable__20JSURandomInputStreamCFv
    .4byte skip__20JSURandomInputStreamFl
    .4byte readData__18JSUFileInputStreamFPvl
    .4byte getLength__18JSUFileInputStreamCFv
    .4byte getPosition__18JSUFileInputStreamCFv
    .4byte seekPos__18JSUFileInputStreamFl17JSUStreamSeekFrom
    .4byte 0
*/

struct JSURandomInputStream {
	virtual ~JSURandomInputStream();   // _00
	virtual void getAvailable() const; // _04
	virtual void skip(long);           // _08

	// _00 VTBL
};

struct JSUFileInputStream : public JSURandomInputStream {
	virtual ~JSUFileInputStream();                 // _00
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
