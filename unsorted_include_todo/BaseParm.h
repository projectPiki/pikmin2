#ifndef _BASEPARM_H
#define _BASEPARM_H

struct BaseParm {
	virtual void _00() = 0;      // _00
	virtual void write(Stream&); // _04
	virtual void read(Stream&);  // _08
	virtual void _0C() = 0;      // _0C

	// _00 VTBL
};

#endif
