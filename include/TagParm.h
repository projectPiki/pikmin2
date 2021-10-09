#ifndef _TAGPARM_H
#define _TAGPARM_H

#include "CNode.h"
#include "stream.h"
#include "types.h"

struct TagParm {
	TagParm(struct TagParameters*, char*);

	void doWrite(Stream&); //virtual
	void doRead(Stream&);  //virtual
	void flushValue();     //virtual
	void doDump();         //virtual

	// _00 VTBL
	char* m_name;    // _04
	TagParm* m_next; // _08
};

struct StringTagParm : public TagParm {
	StringTagParm(struct TagParameters*, char*);

	void doWrite(Stream&);	//virtual
	void doRead(Stream&);	//virtual
	void flushValue();		//virtual
	void doDump();			//virtual

	char* m_data; // _0C
};

#endif