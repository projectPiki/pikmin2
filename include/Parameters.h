#ifndef _PARAMETERS_H
#define _PARAMETERS_H

#include "id32.h"
#include "stream.h"

typedef struct BaseParm BaseParm;

struct Parameters {
	void write(Stream&);
	void read(Stream&);
	BaseParm* findParm(ulong);

	void* m_endAddress;    // _00
	BaseParm* m_parmsHead; // _04
	char* m_name;          // _08
};

#endif
