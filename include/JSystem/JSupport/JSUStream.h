#ifndef _JSYSTEM_JSUINPUTSTREAM_H
#define _JSYSTEM_JSUINPUTSTREAM_H

#include "JSystem/JKernel/JKRFile.h"
#include "types.h"

// Named after standard C++ constants with the exact same meaning.
enum JSUStreamSeekFrom { SEEK_SET = 0, SEEK_CUR, SEEK_END };

struct JSUIosBase {
	inline JSUIosBase()
	    : mIsEOFMaybe(0)
	{
	}

	virtual ~JSUIosBase() { } //_08 (weak)

	// _00 VTBL
	u8 mIsEOFMaybe; // _04
};

struct JSUInputStream : public JSUIosBase {
	virtual ~JSUInputStream();            // _08
	virtual int getAvailable() const = 0; // _0C
	virtual s32 skip(s32);                // _10
	virtual int readData(void*, s32) = 0; // _14

	s32 read(void*, s32);
	char* read(char*);

	inline s32 read(u8& val) { return read(&val, sizeof(val)); }
	inline s32 read(s16& val) { return read(&val, sizeof(val)); }

	/** @fabricated */
	inline bool readBool()
	{
		bool temp;
		read(&temp, 1);
		return temp;
	}

	inline u8 readByte()
	{
		u8 byte;
		read(&byte, 1);
		return byte;
	}

	/** @fabricated */
	inline s16 readS16()
	{
		s16 temp;
		read(&temp, 2);
		return temp;
	}

	/** @fabricated */
	inline f32 readS16ToFloat()
	{
		s16 temp;
		read(&temp, 2);
		return temp;
	}

	/** @fabricated */
	inline u16 readU16()
	{
		u16 temp;
		read(&temp, 2);
		return temp;
	}

	/** @fabricated */
	inline f32 readU16ToFloat()
	{
		u16 temp;
		read(&temp, 2);
		return temp;
	}

	/** @fabricated */
	inline u32 readU32()
	{
		u32 temp;
		read(&temp, 4);
		return temp;
	}

	inline s32 readS32()
	{
		s32 val;
		this->read(&val, sizeof(val));
		return val;
	}

	/** @fabricated */
	// template <typename T>
	// inline s32 readT(T& obj)
	// {
	// 	return read(obj, sizeof(T));
	// }

	// _00		= VTBL
	// _00-_08	= JSUIosBase
};

struct JSURandomInputStream : public JSUInputStream {
	virtual ~JSURandomInputStream() { }                                      // _08 (weak)
	virtual int getAvailable() const { return getLength() - getPosition(); } // _0C (weak)
	virtual s32 skip(s32);                                                   // _10
	virtual int readData(void*, s32)            = 0;                         // _14
	virtual int getLength() const               = 0;                         // _18
	virtual int getPosition() const             = 0;                         // _1C
	virtual int seekPos(s32, JSUStreamSeekFrom) = 0;                         // _20

	u32 align(s32);
	size_t peek(void*, s32);
	void seek(s32, JSUStreamSeekFrom);

	// _00		= VTBL
	// _00-_08	= JSUIosBase
};

struct JSUMemoryInputStream : public JSURandomInputStream {
	JSUMemoryInputStream(const void* res, u32 size) { setBuffer(res, size); }

	virtual ~JSUMemoryInputStream() { }                   // _08 (weak)
	virtual int readData(void*, s32);                     // _14
	virtual int getLength() const { return mLength; }     // _18 (weak)
	virtual int getPosition() const { return mPosition; } // _1C (weak)
	virtual int seekPos(s32, JSUStreamSeekFrom);          // _20

	void setBuffer(const void*, s32);

	// _00		= VTBL
	// _00-_08	= JSUIosBase
	const void* mObject; // _08
	s32 mLength;         // _0C
	int mPosition;       // _10
};

// Size: 0x10
struct JSUFileInputStream : public JSURandomInputStream {
	JSUFileInputStream(JKRFile*);

	virtual ~JSUFileInputStream() { }                                            // _08 (weak)
	virtual int readData(void*, s32);                                            // _14
	virtual int getLength() const { return ((JKRFile*)mObject)->getFileSize(); } // _18 (weak)
	virtual int getPosition() const { return mLength; }                          // _1C (weak)
	virtual int seekPos(s32, JSUStreamSeekFrom);                                 // _20

	// _00		= VTBL
	// _00-_08	= JSUIosBase
	const void* mObject; // _08
	s32 mLength;         // _0C
};

/* Not much remains of this. */
struct JSUOutputStream : public JSUIosBase {
	virtual ~JSUOutputStream(); // _08
	/* No calls to this appear to have survived. */
	virtual void _0C(); // _0C
	/* Just a guess. No instances of this survived in vanilla. */
	virtual s32 writeData(const void*, s32) = 0; // _10

	int write(const void*, s32);
	void write(const char*);

	int write(s16 val) { return write(&val, sizeof(val)); }
	int write(u8 val) { return write(&val, sizeof(val)); }

	/** @fabricated */
	// template <typename T>
	// inline int writeT(T obj)
	// {
	// 	return write(obj, sizeof(T));
	// }

	// _00		= VTBL
	// _00-_08	= JSUIosBase
};

// TODO: this.
struct JSUMemoryOutputStream : public JSUOutputStream {
	// Unused/inlined:
	virtual ~JSUMemoryOutputStream();            // _08
	virtual s32 writeData(const void*, s32);     // _10
	virtual int getLength() const;               // _14?
	virtual int getPosition() const;             // _18?
	virtual int seekPos(s32, JSUStreamSeekFrom); // _1C?

	void setBuffer(void*, s32);
};

#endif
