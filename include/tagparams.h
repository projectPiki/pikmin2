#ifndef _tagparams_H
#define _tagparams_H

#include "stream.h"

class TagParm {
public:
	char* _vt;
	char* name;
	TagParm* next;

	void read(Stream&);
	void doRead(Stream&);
	void write(Stream&);
	void doWrite(Stream&);
	void dump();
	void doDump();
};


#endif