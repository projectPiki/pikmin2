#ifndef _STREAM_H
#define _STREAM_H

#include "types.h"

struct Stream {
    void printf(char*, ...);
    void skipReadingText();
    char* getNextToken();

    void writeByte(u8 byte);
    u8 readByte();
    u16 readU16();

    void skipReading(unsigned long);
    void textBeginGroup(char*);
    void textEndGroup();

    void textWriteTab(int);
    void textWriteText(char*, ...);

    u32 m_vtbl;       // _00
    u32 _04;          // _04
    int m_position;   // _08
    int m_isTextMode; // _0C
};

#endif