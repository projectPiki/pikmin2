#ifndef _STREAM_H
#define _STREAM_H

#include "types.h"
#include "JSystem/JUT/JUTException.h"
#include "Dolphin/string.h"
#include "Dolphin/stl.h"
#include "Dolphin/scanf.h"

#define STREAM_MODE_BINARY 0
#define STREAM_MODE_TEXT   1

#define STREAM_LITTLE_ENDIAN 0
#define STREAM_BIG_ENDIAN    1

struct Stream {
	Stream();
	Stream(int);

	virtual void read(void*, int);
	virtual void write(void*, int);
	virtual bool eof();
	virtual u32 getPending();

	void differentEndian();
	bool isSpace(char);
	void copyToTextBuffer();
	void printf(char*, ...);
	void skipReading(u32);
	void skipReadingText();
	char skipSpace();
	void skipPadding(u32);
	char* getNextToken();
	void writeByte(u8);
	void writeShort(short);
	void writeInt(int);
	void writeFloat(float);
	void writeString(char*);
	void writeFixedString(char*);
	u8 readByte();
	u16 readU16() { return readShort(); }
	float readFloat();
	int readInt();
	short readShort();
	char* readString(char*, int);
	char* readFixedString();
	void textBeginGroup(char*);
	void textEndGroup();
	void textWriteTab(int);
	void textWriteText(char*, ...);
	void _read(void*, int);
	void _write(void*, int);
	u8 _readByte();
	void _writeByte(u8);

	inline void writePadding(u32 mode)
	{
		if (mode == 1) {
			textWriteTab(m_tabCount);
		} else {
		}
	}

	int m_endian;        // _04
	int m_position;      // _08
	int m_mode;          // _0C
	int m_bufferPos;     // _10
	char m_buffer[1024]; // _14
	int m_tabCount;      // _414
};

struct RamStream : Stream {
	RamStream(void*, int);

	void set(u8*, int);

	virtual void read(void*, int);
	virtual void write(void*, int);
	virtual bool eof();

	inline void resetPosition(bool a1, int a2)
	{
		m_mode = a1;
		if (m_mode == a2) {
			m_tabCount = 0;
		}
	}

	void* _418; // _418
	int bounds; // _41C
};

#endif
