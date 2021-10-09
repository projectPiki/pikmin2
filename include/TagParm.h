#ifndef _TAGPARM_H
#define _TAGPARM_H

#include "stream.h"
#include "types.h"

struct TagParameters {
};

struct TagParm {
    TagParm(TagParameters*, char*);

    // THESE ARE VIRTUAL >:(
    void doRead(Stream&);
    void doWrite(Stream&);
    void flushValue();
    void doDump();

    u32* m_vtbl;     // _00
    char* m_name;    // _04
    TagParm* m_next; // _08
};

struct StringTagParm : public TagParm {
    StringTagParm(TagParameters*, char*);
};

template <typename T> struct PrimTagParm : public TagParm {
    void doRead(Stream&);
    void doWrite(Stream&);
    void doDump();

    T m_data; // _0C
};

// TODO: there is no way this is correct, right?
struct PrimTagParm<u64> : public TagParm {
    void doRead(Stream&);
    void doWrite(Stream&);
    void doDump();

    u32 _0C; // _0C
    u8 m_data[sizeof(u64)];
};

#endif