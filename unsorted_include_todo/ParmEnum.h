#ifndef _PARMENUM_H
#define _PARMENUM_H

struct ParmEnum {
	virtual void size();         // _00
	virtual void write(Stream&); // _04
	virtual void read(Stream&);  // _08

	// _00 VTBL
};

#endif
