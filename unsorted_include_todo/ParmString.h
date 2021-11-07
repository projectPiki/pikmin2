#ifndef _PARMSTRING_H
#define _PARMSTRING_H

struct ParmString {
	virtual void size();         // _00
	virtual void write(Stream&); // _04
	virtual void read(Stream&);  // _08

	// _00 VTBL
};

#endif
