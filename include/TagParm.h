#ifndef _TAGPARM_H
#define _TAGPARM_H

#include "CNode.h"
#include "stream.h"
#include "types.h"

struct TagParm;

struct TagParameters : public CNode {
	TagParameters(char*);
	virtual ~TagParameters() { }

	void read(Stream&);

	TagParm* m_head; // _18
};

struct TagParm {
	TagParm(TagParameters*, char*);

	virtual void doWrite(Stream&); // virtual
	virtual void doRead(Stream&);  // virtual
	virtual void flushValue() {};  // virtual
	virtual void doDump();         // virtual

	// _00 VTBL
	char* m_name;    // _04
	TagParm* m_next; // _08
};

struct StringTagParm : public TagParm {
	StringTagParm(TagParameters*, char*);

	virtual void doWrite(Stream&); // virtual
	virtual void doRead(Stream&);  // virtual
	virtual void flushValue();     // virtual
	virtual void doDump();         // virtual

	char* m_data; // _0C
};

template <typename T> struct PrimTagParm : public TagParm {
	PrimTagParm(TagParameters* a, char* name)
	    : TagParm(a, name)
	{
	}

	virtual void doWrite(Stream&);
	virtual void doRead(Stream&);
	virtual void doDump();

	T m_data; // _0C
};

#endif
