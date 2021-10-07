#ifndef _BITFLAGS_H
#define _BITFLAGS_H

#include "Stream.h"
#include "types.h"

struct BitFlags {
    u8* m_flagArr; // _00 flag array
    u16 _04;       // _04
    u16 m_flagCnt; // _06 flag count

    BitFlags();
    void dump();
    void read(Stream&);
    void write(Stream&);
    void create(u16, u8* flags);

    void reset();
    void all_zero();
};

#endif