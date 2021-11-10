#ifndef _PRIMTAGPARM_H
#define _PRIMTAGPARM_H

#include "CNode.h"
#include "TagParm.h"
#include "Vector3.h"
#include "stream.h"
#include "types.h"

template <typename T> struct PrimTagParm : public TagParm {
	PrimTagParm(struct TagParameters* a, char* name)
	    : TagParm(a, name)
	{
	}

	virtual void doWrite(Stream&);
	virtual void doRead(Stream&);
	virtual void doDump();

	T m_data; // _0C
};

struct TagParameters : public CNode {
	TagParameters(char*);
	virtual ~TagParameters() { }

	void read(Stream&);

	TagParm* m_head; // _18
};

#endif
