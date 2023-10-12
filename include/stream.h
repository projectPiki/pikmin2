#ifndef _STREAM_H
#define _STREAM_H

#include "types.h"
#include "P2Macros.h"
#include "stl/string.h"
#include "stl/stdio.h"

#define STREAM_MODE_BINARY 0
#define STREAM_MODE_TEXT   1

#define STREAM_LITTLE_ENDIAN 0
#define STREAM_BIG_ENDIAN    1

static inline u16 bswap16(u16 x) { return ((x << 8) & 0xff00) | ((x >> 8) & 0x00ff); }

struct Stream {
	Stream()
	{
		mEndian   = STREAM_BIG_ENDIAN;
		mPosition = 0;
		mMode     = STREAM_MODE_BINARY;
		if (mMode == STREAM_MODE_TEXT) {
			mTabCount = 0;
		}
	}
	Stream(int);

	virtual void read(void*, int)  = 0;
	virtual void write(void*, int) = 0;
	virtual bool eof();
	virtual u32 getPending();

	void differentEndian();  // unused
	bool isSpace(char);      // inline
	char skipSpace();        // inline
	void copyToTextBuffer(); // inline
	char* getNextToken();
	void textBeginGroup(char*);
	void textEndGroup();
	void printf(char*, ...);
	void textWriteText(char*, ...);
	void skipPadding(u32); // inline
	void skipReading(u32);
	void skipReadingText();
	void _read(void*, int);  // unused
	void _write(void*, int); // unused
	void textWriteTab(int);

	u8 readByte();
	u8 _readByte();
	short readShort();
	int readInt();
	f32 readFloat();
	char* readString(char*, int);
	void readFixedString(); // unused

	void writeString(char*);
	void writeFixedString(char*); // unused
	void writeByte(u8);
	void _writeByte(u8);
	void writeShort(short);
	void writeInt(int);
	void writeFloat(f32);

	u16 readU16() { return readShort(); }

	inline void writePadding(u32 mode)
	{
		if (mode == 1) {
			textWriteTab(mTabCount);
		} else {
		}
	}

	inline void writeBytes(u8* s, int count)
	{
		for (int i = 0; i < count; i++) {
			writeByte(s[i]);
		}
	}

	inline void resetPosition(bool a1, int a2)
	{
		mMode = a1;
		if (mMode == a2) {
			mTabCount = 0;
		}
	}

	inline int getStreamDistance(int startPos) const { return mPosition - startPos; }

	int mEndian;                      // _04
	int mPosition;                    // _08
	int mMode;                        // _0C
	int mBufferPos;                   // _10
	char mBuffer[KILOBYTE_BYTECOUNT]; // _14
	int mTabCount;                    // _414
};

struct RamStream : Stream {
	RamStream(void* RamBufferPtr, int bounds);

	virtual void read(void*, int);
	virtual void write(void*, int);
	virtual bool eof();
	// virtual void getPending(); // from Stream

	void set(u8*, int);

	void* mRamBufferStart; // _418
	int mBounds;           // _41C
};

/**
 * @brief A wrapper for loading and reading files using RamStream, which is commonly used and recognised in almost every
 * config context.
 *
 * @tparam T				The class containing the read function
 * @param thisPtr		A pointer to the class containing the read function
 * @param fname			The file name we intend to read from
 * @param heap			The heap used in the loading process
 * @param nullCheck	Should we check if the file was successfully mounted to RAM or not?
 */
template <typename T>
inline void loadAndRead(T* thisPtr, char* fname, JKRHeap* heap = nullptr, bool nullCheck = true)
{
	void* handle = JKRDvdRipper::loadToMainRAM(fname, 0, Switch_0, 0, heap, JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, 0, 0);
	if (nullCheck && !handle) {
		return;
	}

	RamStream stream(handle, -1);
	stream.resetPosition(true, 1);
	thisPtr->read(stream);
	delete[] handle;
}

#endif
