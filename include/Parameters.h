#ifndef _PARAMETERS_H
#define _PARAMETERS_H

#include "types.h"

struct BaseParm;
struct Stream;

// @fabricatedName
struct IParameters {
	// void* mEndAddress; // _00
};

struct Parameters : virtual IParameters {
	Parameters(BaseParm* head, char* name)
	    : mParmsHead(head)
	    , mName(name)
	{
	}
	void write(Stream&);
	void read(Stream&);
	BaseParm* findParm(u32);

	BaseParm* mParmsHead; // _04
	char* mName;          // _08
};

#endif
