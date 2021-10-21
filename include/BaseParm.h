#ifndef _BASEPARM_H
#define _BASEPARM_H

#include "types.h"
#include "id32.h"
#include "Parameters.h"

struct BaseParm {
	BaseParm(struct Parameters*, unsigned long, char*);
	virtual int size();
	virtual void write(Stream&);
	virtual void read(Stream&);

	// _00 vtbl
	ID32 m_id;        // _04
	BaseParm* m_next; // _10
	char* m_comment;  // _14
};

template <typename T> struct Parm : public BaseParm {
	virtual int size();
	virtual void write(Stream&);
	virtual void read(Stream&);
	T m_value; // _18
	u32 _1C;   // _1C
	T m_min;   // _20
	T m_max;   // _24
};

struct ParmString : public BaseParm {
	ParmString(Parameters*, char*, int, unsigned long, char*);
	virtual void write(Stream&);
	virtual void read(Stream&);

	char* m_value;
	int m_length;
};

#endif
