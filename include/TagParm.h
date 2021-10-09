#ifndef _TAGPARM_H
#define _TAGPARM_H

#include "stream.h"
#include "types.h"

struct TagParm {
    u32* m_vtbl;     // _00
    char* m_name;    // _04
    TagParm* m_next; // _08

    void doRead(Stream&);
    void doWrite(Stream&);
    void doDump();
};

template <typename T> struct PrimTagParm : public TagParm {
    T m_data; // _0C

    void doRead(Stream&);
    void doWrite(Stream&);
    void doDump();
};

// TODO: there is no way this is correct, right?
struct PrimTagParm<u64> : public TagParm {
    u32 _0C; // _0C
    u8 m_data[sizeof(u64)];

    void doRead(Stream&);
    void doWrite(Stream&);
    void doDump();
};

#endif