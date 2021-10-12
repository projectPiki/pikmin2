#ifndef _PRIMTAGPARM_H
#define _PRIMTAGPARM_H

#include "CNode.h"
#include "TagParm.h"
#include "Vector3.h"
#include "stream.h"
#include "types.h"

template <typename T> struct PrimTagParm : public TagParm {
	PrimTagParm(struct TagParameters* a, char* b)
	    : TagParm(a, b)
	{
	}

	virtual void doWrite(Stream&); // virtual
	virtual void doRead(Stream&);  // virtual
	virtual void doDump();         // virtual

	T m_data; // _0C
};

struct TagParameters : public CNode {
	TagParameters(char*);
	virtual ~TagParameters() {}; // virtual

	void read(Stream&);

	TagParm* head; // _18
};

#endif
