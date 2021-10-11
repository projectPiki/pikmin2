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

struct PrimTagParm<u16> : public TagParm {
	PrimTagParm<u16>(struct TagParameters* a, char* b)
	    : TagParm(a, b)
	{
	}

	virtual void doWrite(Stream&); // virtual
	virtual void doRead(Stream&);  // virtual
	virtual void doDump();         // virtual

	u16 m_data;
};

struct PrimTagParm<u64> : public TagParm {
	PrimTagParm<u64>(struct TagParameters* a, char* b)
	    : TagParm(a, b)
	{
	}

	virtual void doWrite(Stream&); // virtual
	virtual void doRead(Stream&);  // virtual
	virtual void doDump();         // virtual

	u32 _0C; // _0C
	union {
		struct {
			u8 data[sizeof(u64)];
		} byteView;
		struct {
			u32 a, b;
		} intView;
	} m_data;

	// u8 m_data[sizeof(u64)];
};

struct PrimTagParm<Vector3f> : public TagParm {
	PrimTagParm<Vector3f>(struct TagParameters* a, char* b)
	    : TagParm(a, b)
	{
	}

	virtual void doWrite(Stream&); // virtual
	virtual void doRead(Stream&);  // virtual
	virtual void doDump();         // virtual

	Vector3f m_data;
};

struct PrimTagParm<int> : public TagParm {
	PrimTagParm<int>(struct TagParameters* a, char* b)
	    : TagParm(a, b)
	{
	}

	virtual void doWrite(Stream&); // virtual
	virtual void doRead(Stream&);  // virtual
	virtual void doDump();         // virtual

	int m_data;
};

struct PrimTagParm<float> : public TagParm {
	PrimTagParm<float>(struct TagParameters* a, char* b)
	    : TagParm(a, b)
	{
	}

	virtual void doWrite(Stream&); // virtual
	virtual void doRead(Stream&);  // virtual
	virtual void doDump();         // virtual

	float m_data;
};

struct TagParameters : public CNode {
	TagParameters(char*);
	virtual ~TagParameters() {}; // virtual

	void read(Stream&);

	u32 _18; // _18
};

#endif