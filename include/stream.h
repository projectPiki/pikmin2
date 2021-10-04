#ifndef _STREAM_H
#define _STREAM_H

#include "types.h"

struct Stream {
    void printf(char*, ...);
    void writeByte(u8 byte);
    u8 readByte();
    char* getNextToken();

    u32 __vt;
    u32 unknown_0x4;
    int position;
    int isTextMode;
};

#endif