#ifndef _JSYSTEM_JSUINPUTSTREAM_H
#define _JSYSTEM_JSUINPUTSTREAM_H

#include "types.h"

struct JKRFile;

// Named after standard C++ constants with the exact same meaning.
enum JSUStreamSeekFrom { SEEK_SET = 0, SEEK_CUR, SEEK_END };

struct JSUIosBase {
	inline JSUIosBase()
	    : m_isEOFMaybe(0) {};
	virtual ~JSUIosBase() {}; //_00

	// VTBL _00
	u8 m_isEOFMaybe; // _04
};

struct JSUInputStream : public JSUIosBase {
	virtual ~JSUInputStream();             // _00
	virtual u8 getAvailable() = 0;         // _04
	virtual void skip(long);               // _08
	virtual int readData(void*, long) = 0; // _0C

	void read(void*, long);
	char* read(char*);
};

struct JSUMemoryInputStream : public JSUInputStream {
	virtual ~JSUMemoryInputStream();              // _00
	virtual int readData(void*, long);            // _0C
	virtual int getLength() const;                // _10
	virtual int getPosition() const;              // _14
	virtual int seekPos(long, JSUStreamSeekFrom); // _18

	void setBuffer(const void*, long);

	const void* m_object; // _08
	long m_length;        // _0C
	int m_position;       // _10
};

struct JSURandomInputStream : public JSUMemoryInputStream {
	virtual ~JSURandomInputStream(); // _00
	virtual void skip(long);         // _08

	u32 align(long);
	size_t peek(void*, long);
	void seek(long, JSUStreamSeekFrom);
};

// Size: 0x10
struct JSUFileInputStream : public JSURandomInputStream {
	JSUFileInputStream(JKRFile*);
	virtual int readData(void*, long);            // _0C
	virtual int getLength() const;                // _10
	virtual int getPosition() const;              // _14
	virtual int seekPos(long, JSUStreamSeekFrom); // _18
};

/* Not much remains of this. */
struct JSUOutputStream : public JSUIosBase {
	/* No calls to this appear to have survived. */
	virtual void _04(); // _04
	/* Just a guess. No instances of this survived in vanilla. */
	virtual long writeData(const void*, long) = 0; // _08

	int write(const void*, long);
	void write(const char*);
};

#endif
