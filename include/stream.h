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
		setMode(STREAM_MODE_BINARY, 1);
	}

	Stream(int);

	virtual void read(void*, int)  = 0; // _04
	virtual void write(void*, int) = 0; // _08
	virtual bool eof();                 // _0C
	virtual u32 getPending();           // _10

	bool differentEndian() { return mEndian != STREAM_BIG_ENDIAN; }
	bool isSpace(char);
	char skipSpace();
	void copyToTextBuffer();
	char* getNextToken();
	void textBeginGroup(char*);
	void textEndGroup();
	void printf(char*, ...);
	void textWriteText(char*, ...);
	void skipReading(u32);
	void skipReadingText();
	void _read(void* buffer, int length);
	void _write(void*, int);
	void textWriteTab(int);

	u8 readByte();
	u8 _readByte();
	s16 readShort();
	int readInt();
	f32 readFloat();
	char* readString(char*, int);

	void writeString(char*);
	void writeByte(u8);
	void _writeByte(u8);
	void writeShort(s16);
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

	// the second argument really shouldnt have to exist, except for ONE call in itemMgr.cpp that uses -1
	inline void setMode(bool mode, int a2)
	{
		mMode = mode;
		if (mMode == a2) {
			mTabCount = 0;
		}
	}

	inline int getStreamDistance(int startPos) const { return mPosition - startPos; }

	int mEndian;         // _04
	int mPosition;       // _08
	int mMode;           // _0C
	int mBufferPos;      // _10
	char mBuffer[0x400]; // _14
	int mTabCount;       // _414
};

struct RamStream : Stream {
	RamStream(void* bufferPointer, int bounds);

	virtual void read(void*, int);  // _04
	virtual void write(void*, int); // _08
	virtual bool eof();             // _0C

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
inline void loadFromFile(T* thisPtr, char* fname, JKRHeap* heap = nullptr, bool nullCheck = true)
{
	void* handle = JKRDvdRipper::loadToMainRAM(fname, 0, Switch_0, 0, heap, JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, 0, 0);
	if (nullCheck && !handle) {
		return;
	}

	RamStream stream(handle, -1);
	stream.setMode(STREAM_MODE_TEXT, 1);
	thisPtr->read(stream);
	delete[] handle;
}

#endif
