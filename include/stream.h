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

static inline u16 bswap16(u16 x) {
	return ((x << 8) & 0xff00) | ((x >> 8) & 0x00ff);
}

struct Stream {
    Stream()
	{
        m_endian = STREAM_BIG_ENDIAN;
        m_position = 0;
        m_mode = STREAM_MODE_BINARY;
        if (m_mode == STREAM_MODE_TEXT) {
            m_tabCount = 0;
        }
    }
    Stream(int);

	virtual void read(void*, int) = 0;
	virtual void write(void*, int) = 0;
	virtual bool eof();
	virtual u32 getPending();

	void differentEndian();  // unused
	// bool isSpace(char);      // inline
	// char skipSpace();        // inline
	// void copyToTextBuffer(); // inline
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
	float readFloat();
	char* readString(char*, int);
	char* readFixedString(); // unused

	void writeString(char*);
	void writeFixedString(char*); // unused
	void writeByte(u8);
	void _writeByte(u8);
	void writeShort(short);
	void writeInt(int);
	void writeFloat(float);

	u16 readU16() { return readShort(); }

	inline void writePadding(u32 mode)
	{
		if (mode == 1) {
			textWriteTab(m_tabCount);
		} else {
		}
	}

	inline bool isSpace(char currByte)
	{
		// check if current byte is whitespace/newline/hash/brackets
		return ((currByte == '\r') || (currByte == ' ') || (currByte == '\n') || (currByte == '\t') || (currByte == '#') || (currByte == '{')
				|| (currByte == '}'));
	}

	inline char skipSpace()
	{
		// return next byte that isn't a 'space' or a comment
		// if in binary mode (or end of file), return 0
		char byte;
		bool isComment = false;

		m_bufferPos = 0;
		if (m_mode == STREAM_MODE_TEXT) {
			// check we're not at the end of the file
			while (!eof()) {
				char byte = _readByte(); // at 0x8
				// if we're in a comment line, skip until we hit a new line
				if (isComment) {
					if (byte == '\r' || byte == '\n') {
						isComment = 0;
					}
					continue;
				}
				// flag if we're starting a comment line
				if (byte == '#') {
					isComment = true;
					continue;
				}
				// so long as we don't hit newline/whitespace/hash/{ or }, we have a token!
				if (!isSpace(byte)) {
					return byte;
				}
			}
		}
		// if we reach eof or are in binary mode, return a 0
		return 0;
	}	

	inline void copyToTextBuffer()
	{
		// copy next token (not starting with a 'space', not in a comment) to buffer
		// panic if we hit eof
		char nextByte;

		m_buffer[m_bufferPos++] = skipSpace();
		while (!eof()) {
			nextByte = _readByte(); // at 0xA
			// if we hit a newline, whitespace, hash, { or }, put 0s until we hit something else
			if (isSpace(nextByte)) {
				m_buffer[m_bufferPos++] = 0;
				// check if comment line
				if (nextByte == '#') {
					while (!eof()) {
						nextByte = _readByte(); // at 0x9
						if ((nextByte != '\r') && (nextByte != '\n')) {
							// skip through comment line
							continue;
						} else {
							// we hit a new line! we're free from the comment
							return;
						}
					}
					return;
				}
				return;
			} else { // we hit something else!

				m_buffer[m_bufferPos++] = nextByte;

				// if we hit a 0, exit
				if (!nextByte) {
					return;
				}
			}
		}
	// if we reach eof, panic
		JUT_PANICLINE(98, "Reached EOF\n");
	}	

	int m_endian;        // _04
	int m_position;      // _08
	int m_mode;          // _0C
	int m_bufferPos;     // _10
	char m_buffer[1024]; // _14
	int m_tabCount;      // _414
};

struct RamStream : Stream {
	RamStream(void* RamBufferPtr, int bounds);

	virtual void read(void*, int);
	virtual void write(void*, int);
	virtual bool eof();
	// virtual void getPending(); // from Stream
	
	void set(u8*, int);

	inline void resetPosition(bool a1, int a2)
	{
		m_mode = a1;
		if (m_mode == a2) {
			m_tabCount = 0;
		}
	}

	void* m_ramBufferStart; // _418
	int m_bounds; // _41C
};

#endif
