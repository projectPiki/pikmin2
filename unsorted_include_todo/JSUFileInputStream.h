#ifndef _JSUFILEINPUTSTREAM_H
#define _JSUFILEINPUTSTREAM_H

struct JSURandomInputStream {
	virtual void _00() = 0;            // _00
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
