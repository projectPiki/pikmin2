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
	ID32 mId;        // _04
	BaseParm* mNext; // _10
	char* mName;     // _14
};

template <typename T>
struct Parm : public BaseParm {
	inline Parm(Parameters* parameters, u32 id, char* comment, T value, T min, T max)
	    : BaseParm(parameters, id, comment)
	    , mValue(value)
	    , mMin(min)
	    , mMax(max)
	{
	}

	inline operator T() { return mValue; }
	inline void operator=(const T& rhs) { mValue = rhs; }
	inline T& operator()() { return mValue; }

	virtual int size() { return sizeof(T); }
	virtual void write(Stream&);
	virtual void read(Stream&);

	T mValue; // _18
	T _1C;    // _1C
	T mMin;   // _20
	T mMax;   // _24
};

struct ParmString : public BaseParm {
	ParmString(Parameters*, char*, int, u32, char*);
	inline virtual int size() { return -1; }
	virtual void write(Stream&);
	virtual void read(Stream&);

	char* mValue; // _18
	int mLength;  // _1C
};

struct ParmEnum : public BaseParm {
	ParmEnum(Parameters*, char**, u32, int, long, char*);
	inline virtual int size() { return 4; }
	virtual void write(Stream&);
	virtual void read(Stream&);

	operator u32() { return mValue; }

	u32 mValue;         // _18
	int mEnumElemSize;  // _1C
	char** mEnumValues; // _20
};

#endif
