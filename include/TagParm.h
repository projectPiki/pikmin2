#ifndef _TAGPARM_H
#define _TAGPARM_H

#include "CNode.h"
#include "stream.h"
#include "types.h"

struct TagParameters : public CNode {
    TagParameters(char*);
    virtual ~TagParameters();

    u32 _18; // _18
};

struct TagParm {
    TagParm(TagParameters*, char*);

    virtual void doRead(Stream&);
    virtual void doWrite(Stream&);
    virtual void flushValue();
    virtual void doDump();

    // _00 VTBL
    char* m_name;    // _04
    TagParm* m_next; // _08
};

struct StringTagParm : public TagParm {
    StringTagParm(TagParameters*, char*);

    virtual void doRead(Stream&);
    virtual void doWrite(Stream&);
    virtual void flushValue();
    virtual void doDump();

    char* m_data; // _0C
};

template <typename T> struct PrimTagParm : public TagParm {
    virtual void doRead(Stream&);
    virtual void doWrite(Stream&);
    virtual void doDump();

    T m_data; // _0C
};

// TODO: there is no way this is correct, right?
struct PrimTagParm<u64> : public TagParm {
    virtual void doRead(Stream&);
    virtual void doWrite(Stream&);
    virtual void doDump();

    u32 _0C; // _0C
    u8 m_data[sizeof(u64)];
};

#endif