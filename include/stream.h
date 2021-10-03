#ifndef _STREAM_H
#define _STREAM_H

#include "types.h"

struct Stream {
    void printf(char*, ...);
    void writeByte(u8 byte);

    u8 data[0xC];
    u32 _0C;
};

#endif