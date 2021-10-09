#ifndef _PRIMTAGPARM_H
#define _PRIMTAGPARM_H

#include "CNode.h"
#include "TagParm.h"
#include "Vector3.h"
#include "stream.h"
#include "types.h"

template <typename T> struct PrimTagParm : public TagParm {
	void doWrite(Stream&);	//virtual
	void doRead(Stream&);	//virtual
	void doDump();			//virtual

	int filler;
	T m_data; // _0C
};

struct PrimTagParm<u16> : public TagParm {
	void doWrite(Stream&);	//virtual
	void doRead(Stream&);	//virtual
	void doDump();			//virtual

	int filler;
	u16 m_data;
};

struct PrimTagParm<u64> : public TagParm {
	void doWrite(Stream&);	//virtual
	void doRead(Stream&);	//virtual
	void doDump();			//virtual
	
	int filler;
	u32 _0C; // _0C
	u8 m_data[sizeof(u64)];
};

struct PrimTagParm<Vector3f> : public TagParm {
	void doWrite(Stream&);	//virtual
	void doRead(Stream&);	//virtual
	void doDump();			//virtual
	
	int filler;
	Vector3f m_data;
};

struct PrimTagParm<int> : public TagParm {
	void doWrite(Stream&);	//virtual
	void doRead(Stream&);	//virtual
	void doDump();			//virtual
	
	int filler;
	int m_data;
};

struct PrimTagParm<float> : public TagParm {
	void doWrite(Stream&);	//virtual
	void doRead(Stream&);	//virtual
	void doDump();			//virtual

	int filler;
	float m_data;
};

struct TagParameters : public CNode {
	TagParameters(char*);
	~TagParameters();		//virtual

	u32 _18; // _18
};

#endif