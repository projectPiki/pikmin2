#ifndef _JSYSTEM_JSUINPUTSTREAM_H
#define _JSYSTEM_JSUINPUTSTREAM_H

#include "JSystem/JKR/JKRFile.h"
#include "types.h"

// Named after standard C++ constants with the exact same meaning.
enum JSUStreamSeekFrom { SEEK_SET = 0, SEEK_CUR, SEEK_END };

struct JSUIosBase {
	inline JSUIosBase()
	    : m_isEOFMaybe(0)
	{
	}

	virtual ~JSUIosBase() { } //_08 (weak)

	// _00 VTBL
	u8 m_isEOFMaybe; // _04
};

struct JSUInputStream : public JSUIosBase {
	virtual ~JSUInputStream();             // _08
	virtual int getAvailable() const = 0;  // _0C
	virtual s32 skip(long);                // _10
	virtual int readData(void*, long) = 0; // _14

	s32 read(void*, long);
	char* read(char*);

	inline u8 readByte()
	{
		u8 byte;
		read(&byte, 1);
		return byte;
	}

	// _00		= VTBL
	// _00-_08	= JSUIosBase
};

struct JSURandomInputStream : public JSUInputStream {
	virtual ~JSURandomInputStream() { }                                      // _08 (weak)
	virtual int getAvailable() const { return getLength() - getPosition(); } // _0C (weak)
	virtual s32 skip(long);                                                  // _10
	virtual int readData(void*, long)            = 0;                        // _14
	virtual int getLength() const                = 0;                        // _18
	virtual int getPosition() const              = 0;                        // _1C
	virtual int seekPos(long, JSUStreamSeekFrom) = 0;                        // _20

	u32 align(s32);
	size_t peek(void*, long);
	void seek(long, JSUStreamSeekFrom);

	// _00		= VTBL
	// _00-_08	= JSUIosBase
};

struct JSUMemoryInputStream : public JSURandomInputStream {
	virtual ~JSUMemoryInputStream() { }                    // _08 (weak)
	virtual int readData(void*, long);                     // _14
	virtual int getLength() const { return m_length; }     // _18 (weak)
	virtual int getPosition() const { return m_position; } // _1C (weak)
	virtual int seekPos(long, JSUStreamSeekFrom);          // _20

	void setBuffer(const void*, long);

	// _00		= VTBL
	// _00-_08	= JSUIosBase
	const void* m_object; // _08
	long m_length;        // _0C
	int m_position;       // _10
};

// Size: 0x10
struct JSUFileInputStream : public JSURandomInputStream {
	JSUFileInputStream(JKRFile*);

	virtual int readData(void*, long);                                            // _14
	virtual int getLength() const { return ((JKRFile*)m_object)->getFileSize(); } // _18 (weak)
	virtual int getPosition() const { return m_length; }                          // _1C (weak)
	virtual int seekPos(long, JSUStreamSeekFrom);                                 // _20

	// _00		= VTBL
	// _00-_08	= JSUIosBase
	const void* m_object; // _08
	long m_length;        // _0C
	int m_position;       // _10
};

/* Not much remains of this. */
struct JSUOutputStream : public JSUIosBase {
	virtual ~JSUOutputStream(); // _08
	/* No calls to this appear to have survived. */
	virtual void _0C(); // _0C
	/* Just a guess. No instances of this survived in vanilla. */
	virtual long writeData(const void*, long) = 0; // _10

	int write(const void*, long);
	void write(const char*);

	// _00		= VTBL
	// _00-_08	= JSUIosBase
};

// TODO: this.
struct JSUMemoryOutputStream;

#endif
