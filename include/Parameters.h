#ifndef _PARAMETERS_H
#define _PARAMETERS_H

#include "types.h"

struct BaseParm;
struct Stream;

// @fabricatedName
struct IParameters {
	// void* m_endAddress; // _00
};

struct Parameters : virtual IParameters {
	Parameters(BaseParm* head, char* name)
	    : m_parmsHead(head)
	    , m_name(name)
	{
	}
	void write(Stream&);
	void read(Stream&);
	BaseParm* findParm(u32);

	BaseParm* m_parmsHead; // _04
	char* m_name;          // _08
};

#endif
