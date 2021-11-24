#ifndef _STREAM_H
#define _STREAM_H

#include "types.h"

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

	void skipReading(ulong);
	void skipReadingText();
	void skipSpace();
	void skipPadding(ulong);

	char* getNextToken();

	void writeByte(uchar);
	void writeShort(short);
	void writeInt(int);
	void writeFloat(float);
	void writeString(char*);
	void writeFixedString(char*);
	void writePadding(ulong);

	uchar readByte();
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
	uchar _readByte();
	void _writeByte(uchar);

	u32 _04;           // _004
	int m_position;    // _008
	int m_isTextMode;  // _00C
	int _10;           // _010
	u8 m_buffer[1024]; // _014
	int m_tabCount;    // _414
};

struct RamStream : Stream {
	RamStream(void*, int);
	void set(uchar*, int);
	virtual void read(void*, int);  // _00
	virtual void write(void*, int); // _04
	virtual bool eof();             // _0C

	inline void resetPosition(bool a1, int a2)
	{
		m_isTextMode = a1;
		if (m_isTextMode == a2) {
			m_tabCount = 0;
		}
	}

	void* _418; // _418
	int bounds; // _41C
};

#endif
