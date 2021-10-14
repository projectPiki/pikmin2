#ifndef _STREAM_H
#define _STREAM_H

#include "types.h"

struct Stream {
	void printf(char*, ...);
	void skipReadingText();
	char* getNextToken();

	void writeByte(unsigned char);
	void writeShort(short);
	void writeInt(int);
	void writeFloat(float);
	void writeString(char*);

	u8 readByte();
	u16 readU16();
	float readFloat();

	int readInt();
	short readShort();
	char* readString(char*, int);

	void skipReading(u32);
	void textBeginGroup(char*);
	void textEndGroup();

	void textWriteTab(int);
	void textWriteText(char*, ...);

	u32 m_vtbl;        // _000
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
    void read(void*, int);
    void write(void*, int);
    bool eof();

    void* _418; // _418
    int bounds; // _41C
};

#endif
