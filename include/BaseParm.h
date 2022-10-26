#ifndef _BASEPARM_H
#define _BASEPARM_H

#include "types.h"
#include "id32.h"
#include "Parameters.h"

struct BaseParm {
	BaseParm(Parameters*, u32, char*);
	inline virtual int size() = 0;
	inline virtual void write(Stream&) { }
	inline virtual void read(Stream&) { }

	// _00 VTBL
	ID32 m_id;        // _04
	BaseParm* m_next; // _10
	char* m_name;     // _14
};

template <typename T>
struct Parm : public BaseParm {
	inline Parm(Parameters* parameters, u32 id, char* comment, T value, T min, T max)
	    : BaseParm(parameters, id, comment)
	    , m_value(value)
	    , m_min(min)
	    , m_max(max)
	{
	}

	virtual int size() { return sizeof(T); }
	virtual void write(Stream&);
	virtual void read(Stream&);
	inline T operator()() { return m_value; }

	T m_value; // _18
	T _1C;     // _1C
	T m_min;   // _20
	T m_max;   // _24
};

struct ParmString : public BaseParm {
	ParmString(Parameters*, char*, int, unsigned long, char*);
	inline virtual int size() { return -1; }
	virtual void write(Stream&);
	virtual void read(Stream&);

	char* m_value; // _18
	int m_length;  // _1C
};

struct ParmEnum : public BaseParm {
	ParmEnum(Parameters*, char**, u32, int, long, char*);
	inline virtual int size() { return 4; }
	virtual void write(Stream&);
	virtual void read(Stream&);

	u32 m_value;         // _18
	int m_enumElemSize;  // _1C
	char** m_enumValues; // _20
};

#endif
