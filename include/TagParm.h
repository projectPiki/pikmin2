#ifndef _TAGPARM_H
#define _TAGPARM_H

#include "stream.h"
#include "types.h"

struct TagParm {
	u32* m_vtbl;     // _00
	char* m_name;    // _04
	TagParm* m_next; // _08

	void doRead(Stream&);
	void doWrite(Stream&);
	void doDump();
};

#endif