#ifndef _STREAM_H
#define _STREAM_H

#include "types.h"

#define STREAM_MODE_BINARY 0
#define STREAM_MODE_TEXT   1

struct Stream {
	Stream();
	Stream(int);

	virtual void read(void*, int);  // _00
	virtual void write(void*, int); // _04
	virtual bool eof();             // _08
	virtual u32 getPending();       // _0C

	void differentEndian();
	bool isSpace(char);
	void copyToTextBuffer();

	void printf(char*, ...);

	void skipReading(u32);
	void skipReadingText();
	void skipSpace();
	void skipPadding(u32);

	char* getNextToken();

	void writeByte(u8);
	void writeShort(short);
	void writeInt(int);
	void writeFloat(float);
	void writeString(char*);
	void writeFixedString(char*);

	u8 readByte();
	u16 readU16();
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
		if (mode == STREAM_MODE_TEXT) {
			textWriteTab(m_tabCount);
		} else {
			// Who nose
		}
	}

	u32 _04;        // _004
	int m_position; // _008
	// TODO: make enum
	int m_mode;        // _00C
	int _10;           // _010
	u8 m_buffer[1024]; // _014
	int m_tabCount;    // _414
};

struct RamStream : Stream {
	RamStream(void*, int);
	void set(u8*, int);
	virtual void read(void*, int);  // _00
	virtual void write(void*, int); // _04
	virtual bool eof();             // _0C

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
