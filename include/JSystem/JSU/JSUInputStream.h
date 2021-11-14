#ifndef _JSYSTEM_JSUINPUTSTREAM_H
#define _JSYSTEM_JSUINPUTSTREAM_H

#include "types.h"

typedef ulong JSUStreamSeekFrom;
struct JKRFile;

struct JSUInputStream {
	virtual ~JSUInputStream();                // _00
	virtual u8 getAvailable() = 0;            // _04
	virtual u8 skip(long);                    // _08
	virtual size_t readData(void*, long) = 0; // _0C
	virtual int getLength() = 0;              // _10

	u8 read(void*, long);
	u8 read(char*);

	// VTBL _00
	u8 m_isEOFMaybe; // _04
};

struct JSUMemoryInputStream : public JSUInputStream {
	virtual int getPosition();
	virtual u8 seekPos(long, JSUStreamSeekFrom);

	JKRFile* file;  // _08 /* This might be more general at this point in the chain? */
	int m_length;   // _0C
	int m_position; // _10
};

struct JSURandomInputStream : public JSUMemoryInputStream {
};

// Size: 0x10
struct JSUFileInputStream : public JSURandomInputStream {
};


#endif
